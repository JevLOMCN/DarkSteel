// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 57

// StaticStruct @ 1498528a0

UScriptStruct * __cdecl FPCGSplineStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineStruct,(UObject *)pUVar1,
                         L"PCGSplineStruct");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSplineStruct.OuterSingleton;
}

// FPCGSplineStruct @ 14988cfb0

FPCGSplineStruct * __thiscall
FPCGSplineStruct::FPCGSplineStruct(FPCGSplineStruct *this,FPCGSplineStruct *param_1)

{
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined8 uVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar5;
  
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  pTVar1 = &this->ControlPointsEntryKeys;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar4 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar4;
  (this->DefaultUpVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = 10;
  this->bClosedLoop = false;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).SphereRadius = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  (this->SplineCurves).Version = 0xffffffff;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ControlPointsEntryKeys).ArrayNum = 0;
  (this->ControlPointsEntryKeys).ArrayMax = 0;
  FSpline::FSpline(&this->Spline);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedSortedAttributeChannelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSortedAttributeChannelNames).ArrayNum = 0;
  (this->CachedSortedAttributeChannelNames).ArrayMax = 0;
  FSplineCurves::operator=(&this->SplineCurves,&param_1->SplineCurves);
  FSpline::operator=(&this->Spline,&param_1->Spline);
  dVar3 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultUpVector).field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = (param_1->DefaultUpVector).field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = dVar3;
  (this->DefaultUpVector).field0_0x0._s_0.Z = (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  this->bClosedLoop = param_1->bClosedLoop;
  dVar3 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  dVar3 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  pTVar5 = &param_1->ControlPointsEntryKeys;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  if (pTVar1 != pTVar5) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ControlPointsEntryKeys).ArrayNum = (param_1->ControlPointsEntryKeys).ArrayNum;
    (this->ControlPointsEntryKeys).ArrayMax = (param_1->ControlPointsEntryKeys).ArrayMax;
    (param_1->ControlPointsEntryKeys).ArrayNum = 0;
    (param_1->ControlPointsEntryKeys).ArrayMax = 0;
  }
  return this;
}

// FPCGSplineStruct @ 14988d250

FPCGSplineStruct * __thiscall
FPCGSplineStruct::FPCGSplineStruct(FPCGSplineStruct *this,FPCGSplineStruct *param_1)

{
  undefined8 uVar1;
  
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultUpVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).SphereRadius = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  (this->SplineCurves).Version = 0xffffffff;
  (this->ControlPointsEntryKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPointsEntryKeys).ArrayNum = 0;
  (this->ControlPointsEntryKeys).ArrayMax = 0;
  this->ReparamStepsPerSegment = 10;
  this->bClosedLoop = false;
  FSpline::FSpline(&this->Spline);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedSortedAttributeChannelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSortedAttributeChannelNames).ArrayNum = 0;
  (this->CachedSortedAttributeChannelNames).ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FPCGSplineStruct @ 14988d400

FPCGSplineStruct * __thiscall FPCGSplineStruct::FPCGSplineStruct(FPCGSplineStruct *this)

{
  undefined8 uVar1;
  
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultUpVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).SphereRadius = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).SphereRadius = 0.0;
  *(undefined8 *)&(this->SplineCurves).Position = 0;
  *(undefined8 *)&(this->SplineCurves).Position.field_0x8 = 0;
  (this->SplineCurves).Position.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Position.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation = 0;
  *(undefined8 *)&(this->SplineCurves).Rotation.field_0x8 = 0;
  (this->SplineCurves).Rotation.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).Scale = 0;
  *(undefined8 *)&(this->SplineCurves).Scale.field_0x8 = 0;
  (this->SplineCurves).Scale.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).Scale.field_0x14 = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable = 0;
  *(undefined8 *)&(this->SplineCurves).ReparamTable.field_0x8 = 0;
  (this->SplineCurves).ReparamTable.field_0x10 = 0;
  *(undefined4 *)&(this->SplineCurves).ReparamTable.field_0x14 = 0;
  (this->SplineCurves).Version = 0xffffffff;
  (this->ControlPointsEntryKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPointsEntryKeys).ArrayNum = 0;
  (this->ControlPointsEntryKeys).ArrayMax = 0;
  this->ReparamStepsPerSegment = 10;
  this->bClosedLoop = false;
  FSpline::FSpline(&this->Spline);
  (this->SpinLock).bFlag = (atomic<bool>)0x0;
  (this->CachedSortedAttributeChannelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSortedAttributeChannelNames).ArrayNum = 0;
  (this->CachedSortedAttributeChannelNames).ArrayMax = 0;
  return this;
}

// ~FPCGSplineStruct @ 1498912b0

void __thiscall FPCGSplineStruct::~FPCGSplineStruct(FPCGSplineStruct *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CachedSortedAttributeChannelNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSpline::~FSpline(&this->Spline);
  pFVar1 = (this->ControlPointsEntryKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SplineCurves).ReparamTable;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SplineCurves).Scale;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SplineCurves).Rotation;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SplineCurves).Position;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 149892990

FPCGSplineStruct * __thiscall
FPCGSplineStruct::operator=(FPCGSplineStruct *this,FPCGSplineStruct *param_1)

{
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  
  FSplineCurves::operator=(&this->SplineCurves,&param_1->SplineCurves);
  FSpline::operator=(&this->Spline,&param_1->Spline);
  dVar3 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  pTVar1 = &this->ControlPointsEntryKeys;
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->DefaultUpVector).field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = (param_1->DefaultUpVector).field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = dVar3;
  (this->DefaultUpVector).field0_0x0._s_0.Z = (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  this->bClosedLoop = param_1->bClosedLoop;
  dVar3 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  dVar3 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar3;
  dVar3 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar3;
  pTVar4 = &param_1->ControlPointsEntryKeys;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  if (pTVar1 != pTVar4) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ControlPointsEntryKeys).ArrayNum = (param_1->ControlPointsEntryKeys).ArrayNum;
    (this->ControlPointsEntryKeys).ArrayMax = (param_1->ControlPointsEntryKeys).ArrayMax;
    (param_1->ControlPointsEntryKeys).ArrayNum = 0;
    (param_1->ControlPointsEntryKeys).ArrayMax = 0;
  }
  return this;
}

// operator= @ 149892ae0

FPCGSplineStruct * __thiscall
FPCGSplineStruct::operator=(FPCGSplineStruct *this,FPCGSplineStruct *param_1)

{
  undefined1 *puVar1;
  FInterpCurveQuat *pFVar2;
  FInterpCurveQuat *pFVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  double dVar6;
  
  FInterpCurveVector::operator=(&(this->SplineCurves).Position,&(param_1->SplineCurves).Position);
  pFVar2 = &(param_1->SplineCurves).Rotation;
  pFVar3 = &(this->SplineCurves).Rotation;
  if (pFVar3 != pFVar2) {
    iVar4 = *(int *)&(param_1->SplineCurves).Rotation.field_0x8;
    puVar1 = &(this->SplineCurves).Rotation.field_0xc;
    iVar5 = *(int *)puVar1;
    _Src = *(void **)pFVar2;
    *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,(int *)puVar1);
      if (iVar4 != 0) {
        memcpy(*(void **)pFVar3,_Src,(longlong)iVar4 << 7);
      }
    }
  }
  (this->SplineCurves).Rotation.field_0x10 = (param_1->SplineCurves).Rotation.field_0x10;
  *(undefined4 *)&(this->SplineCurves).Rotation.field_0x14 =
       *(undefined4 *)&(param_1->SplineCurves).Rotation.field_0x14;
  FInterpCurveVector::operator=(&(this->SplineCurves).Scale,&(param_1->SplineCurves).Scale);
  FInterpCurveFloat::operator=
            (&(this->SplineCurves).ReparamTable,&(param_1->SplineCurves).ReparamTable);
  (this->SplineCurves).Version = (param_1->SplineCurves).Version;
  FSpline::operator=(&this->Spline,&param_1->Spline);
  dVar6 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Transform).Translation.XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Transform).Translation.ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_1->DefaultUpVector).field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = (param_1->DefaultUpVector).field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = dVar6;
  (this->DefaultUpVector).field0_0x0._s_0.Z = (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  this->bClosedLoop = param_1->bClosedLoop;
  dVar6 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  (this->Bounds).Origin.field0_0x0._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar6;
  (this->Bounds).SphereRadius = (param_1->Bounds).SphereRadius;
  dVar6 = (param_1->LocalBounds).Origin.field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (param_1->LocalBounds).Origin.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (param_1->LocalBounds).Origin.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar6;
  dVar6 = (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y =
       (param_1->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar6;
  (this->LocalBounds).SphereRadius = (param_1->LocalBounds).SphereRadius;
  TArray<__int64,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlPointsEntryKeys,&param_1->ControlPointsEntryKeys);
  return this;
}

// operator() @ 149896d70

bool __thiscall
`FPCGSplineStruct::GetAttributeChannelNames'::__l12::<lambda_1>::operator()
          (void *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(param_2,&local_18);
  pFVar3 = ::FName::ToString(param_1,&local_28);
  pwVar4 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// AddPoint @ 14989d1f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGSplineStruct::AddPoint
          (FPCGSplineStruct *this,FSplinePoint *param_1,bool param_2,long64 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  FInterpCurveQuat *pFVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  EInterpCurveMode EVar12;
  int iVar13;
  uint uVar14;
  TQuat<double> *pTVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  long64 lVar22;
  float local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_118;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_c0;
  TQuat<double> local_68;
  
  FSpline::AddPoint(&this->Spline,param_1);
  iVar21 = 0;
  fVar7 = param_1->InputKey;
  uVar18 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  while (uVar14 = uVar18, 0 < (int)uVar14) {
    uVar18 = uVar14 >> 1;
    uVar4 = uVar18 + iVar21;
    uVar11 = 0;
    if ((int)uVar4 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar11 = ~uVar4 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(float *)((longlong)(int)uVar4 * 0x58 + *(longlong *)&(this->SplineCurves).Position) <=
        fVar7) {
      iVar21 = uVar4 + 1;
      uVar18 = uVar14 + (-1 - uVar18);
    }
  }
  EVar12 = ConvertSplinePointTypeToInterpCurveMode((uint)(param_1->Type).Value);
  local_118.OutVal.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  local_118.OutVal.field0_0x0._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
  local_118.InVal = param_1->InputKey;
  local_118.OutVal.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  local_118.InterpMode.Value = (uchar)EVar12;
  local_118.ArriveTangent.field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X;
  local_118.ArriveTangent.field0_0x0._s_0.Y = (param_1->ArriveTangent).field0_0x0._s_0.Y;
  local_118.ArriveTangent.field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z;
  local_118.LeaveTangent.field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X;
  local_118.LeaveTangent.field0_0x0._s_0.Y = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  local_118.LeaveTangent.field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->SplineCurves,&local_118,iVar21);
  pFVar3 = &(this->SplineCurves).Rotation;
  pTVar15 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_68);
  local_198 = param_1->InputKey;
  local_188 = pTVar15->X;
  dStack_180 = pTVar15->Y;
  local_178 = pTVar15->Z;
  dStack_170 = pTVar15->W;
  local_158 = UE::Math::TQuat<double>::Identity.Z;
  dStack_150 = UE::Math::TQuat<double>::Identity.W;
  local_138 = UE::Math::TQuat<double>::Identity.Z;
  dStack_130 = UE::Math::TQuat<double>::Identity.W;
  local_168 = UE::Math::TQuat<double>::Identity.X;
  dStack_160 = UE::Math::TQuat<double>::Identity.Y;
  local_148 = UE::Math::TQuat<double>::Identity.X;
  dStack_140 = UE::Math::TQuat<double>::Identity.Y;
  local_128 = 1;
  if (((*(float **)pFVar3 <= &local_198) &&
      (&local_198 <
       *(float **)pFVar3 + (longlong)*(int *)&(this->SplineCurves).Rotation.field_0xc * 0x20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar13 = *(int *)&(this->SplineCurves).Rotation.field_0x8;
  puVar1 = &(this->SplineCurves).Rotation.field_0xc;
  if (iVar13 == *(int *)puVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)pFVar3,(int *)puVar1);
  }
  lVar19 = *(longlong *)pFVar3;
  *(int *)&(this->SplineCurves).Rotation.field_0x8 = iVar13 + 1;
  lVar20 = (longlong)iVar21;
  lVar16 = lVar20 * 0x80;
  memmove((void *)(lVar19 + lVar16 + 0x80),(void *)(lVar19 + lVar16),
          (longlong)(iVar13 - iVar21) << 7);
  lVar19 = *(longlong *)pFVar3;
  local_c0.InterpMode.Value = '\x01';
  *(undefined8 *)(lVar19 + lVar16) = CONCAT44(uStack_194,local_198);
  ((undefined8 *)(lVar19 + lVar16))[1] = uStack_190;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x10);
  *pdVar5 = local_188;
  pdVar5[1] = dStack_180;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x20);
  *pdVar5 = local_178;
  pdVar5[1] = dStack_170;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x30);
  *pdVar5 = local_168;
  pdVar5[1] = dStack_160;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x40);
  *pdVar5 = local_158;
  pdVar5[1] = dStack_150;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x50);
  *pdVar5 = local_148;
  pdVar5[1] = dStack_140;
  pdVar5 = (double *)(lVar19 + lVar16 + 0x60);
  *pdVar5 = local_138;
  pdVar5[1] = dStack_130;
  puVar6 = (undefined8 *)(lVar19 + lVar16 + 0x70);
  *puVar6 = CONCAT71(uStack_127,local_128);
  puVar6[1] = uStack_120;
  local_c0.OutVal.field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
  local_c0.OutVal.field0_0x0._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
  local_c0.InVal = param_1->InputKey;
  local_c0.OutVal.field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
  local_c0.ArriveTangent.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  local_c0.ArriveTangent.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  local_c0.LeaveTangent.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c0.LeaveTangent.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c0.ArriveTangent.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  local_c0.LeaveTangent.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &(this->SplineCurves).Scale,&local_c0,iVar21);
  this_00 = &this->ControlPointsEntryKeys;
  if ((this->ControlPointsEntryKeys).ArrayNum == 0) {
    if (param_3 != (long64 *)0x0) {
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this->Spline).CurrentImplementation != '\0')) {
        iVar21 = FSpline::GetNumControlPoints(&this->Spline);
      }
      else {
        iVar21 = *(int *)&(this->SplineCurves).Position.field_0x8;
      }
      TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar21,Default);
      uVar18 = 0;
      if (0 < (this->ControlPointsEntryKeys).ArrayNum) {
        lVar19 = 0;
        do {
          if (lVar19 == lVar20) {
            lVar22 = *param_3;
          }
          else {
            lVar22 = -1;
          }
          uVar14 = 0;
          if ((int)uVar18 < (this->ControlPointsEntryKeys).ArrayNum) {
            uVar14 = ~uVar18 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar18 = uVar18 + 1;
          *(long64 *)((this_00->AllocatorInstance).Data + lVar19 * 8) = lVar22;
          lVar19 = lVar19 + 1;
        } while ((int)uVar18 < (this->ControlPointsEntryKeys).ArrayNum);
      }
    }
  }
  else {
    pFVar8 = (this_00->AllocatorInstance).Data;
    pFVar17 = (FScriptContainerElement *)&PCGInvalidEntryKey;
    if (param_3 != (long64 *)0x0) {
      pFVar17 = (FScriptContainerElement *)param_3;
    }
    if (((pFVar8 <= pFVar17) &&
        (pFVar17 < pFVar8 + (longlong)(this->ControlPointsEntryKeys).ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar13 = (this->ControlPointsEntryKeys).ArrayNum;
    piVar2 = &(this->ControlPointsEntryKeys).ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&this_00->AllocatorInstance,piVar2);
    }
    (this->ControlPointsEntryKeys).ArrayNum = iVar13 + 1;
    pFVar8 = (this_00->AllocatorInstance).Data + lVar20 * 8;
    memmove(pFVar8 + 8,pFVar8,(longlong)(iVar13 - iVar21) << 3);
    *(undefined8 *)((this_00->AllocatorInstance).Data + lVar20 * 8) = *(undefined8 *)pFVar17;
  }
  if (param_2) {
    UpdateSpline(this);
  }
  return;
}

// AddPoints @ 14989d6b0

void __thiscall
FPCGSplineStruct::AddPoints
          (FPCGSplineStruct *this,TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,TArray<__int64,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  iVar1 = (this->ControlPointsEntryKeys).ArrayNum;
  if (iVar1 != 0) {
    uVar5 = param_1->ArrayNum + iVar1;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((this->ControlPointsEntryKeys).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&(this->ControlPointsEntryKeys).AllocatorInstance,iVar1,
                 &(this->ControlPointsEntryKeys).ArrayMax);
    }
  }
  if (((param_3 != (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) &&
      (param_1->ArrayNum != param_3->ArrayNum)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InOptionalControlPointsEntryKeys || InSplinePoints.Num() == InOptionalControlPointsEntryKeys->Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                         ,0x137,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if (param_3 == (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar6 = (FScriptContainerElement *)0x0;
      }
      else {
        uVar4 = 0;
        if ((int)uVar5 < param_3->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar5 * 8;
      }
      uVar4 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AddPoint(this,(FSplinePoint *)
                    ((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x88),false,
               (long64 *)pFVar6);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < param_1->ArrayNum);
  }
  if (param_2) {
    UpdateSpline(this);
  }
  return;
}

// AllocateMetadataEntries @ 14989eb10

void __thiscall FPCGSplineStruct::AllocateMetadataEntries(FPCGSplineStruct *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar5 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    uVar5 = FSpline::GetNumControlPoints(&this->Spline);
  }
  uVar8 = (ulonglong)uVar5;
  if ((this->ControlPointsEntryKeys).ArrayNum != uVar5) {
    if ((int)uVar5 < 0) goto LAB_14989ec7b;
    piVar1 = &(this->ControlPointsEntryKeys).ArrayMax;
    (this->ControlPointsEntryKeys).ArrayNum = 0;
    if (*piVar1 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&(this->ControlPointsEntryKeys).AllocatorInstance,0,piVar1);
    }
  }
  if ((this->ControlPointsEntryKeys).ArrayNum == 0) {
    pTVar7 = &this->ControlPointsEntryKeys;
    if ((int)uVar5 < 0) {
LAB_14989ec7b:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar8);
    }
    piVar1 = &(this->ControlPointsEntryKeys).ArrayMax;
    if ((this->ControlPointsEntryKeys).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&pTVar7->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar5) {
      do {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (((pFVar2 < (FScriptContainerElement *)0x151f03061) &&
            (&PCGInvalidEntryKey < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->ControlPointsEntryKeys).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar7->AllocatorInstance,piVar1);
        }
        (this->ControlPointsEntryKeys).ArrayNum = iVar6 + 1;
        *(undefined8 *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = 0xffffffffffffffff
        ;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// ApplyTo @ 14989f0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FPCGSplineStruct::ApplyTo(FPCGSplineStruct *this,USplineComponent *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  if (param_1 == (USplineComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSplineComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                       ,0xb7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  USplineComponent::ClearSplinePoints(param_1,false);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)param_1,&this->Transform,false,(FHitResult *)0x0,None);
  dVar2 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  (param_1->DefaultUpVector).field0_0x0._s_0.X = (this->DefaultUpVector).field0_0x0._s_0.X;
  (param_1->DefaultUpVector).field0_0x0._s_0.Y = dVar2;
  (param_1->DefaultUpVector).field0_0x0._s_0.Z = (this->DefaultUpVector).field0_0x0._s_0.Z;
  param_1->ReparamStepsPerSegment = this->ReparamStepsPerSegment;
  if ((PCGSplineStruct::GUseSplineCurves == false) && ((this->Spline).CurrentImplementation != '\0')
     ) {
    USplineComponent::SetSpline(param_1,&this->Spline);
  }
  else {
    USplineComponent::SetSpline(param_1,&this->SplineCurves);
  }
  param_1->bStationaryEndpoints = false;
  USplineComponent::SetClosedLoop(param_1,this->bClosedLoop,true);
  (**(code **)(param_1->_padding_ + 0xad0))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014989f17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x5b0))(param_1);
  return;
}

// ConvertSplineSegmentToPolyLine @ 1498a26c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGSplineStruct::ConvertSplineSegmentToPolyLine
          (FPCGSplineStruct *this,int param_1,Type param_2,float param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TVector<double>_u_0 *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  EInterpCurveMode EVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float local_res10 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<double,TSizedDefaultAllocator<32>_> local_d8;
  float local_c8 [2];
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [4];
  
  this_00 = param_4;
  piVar1 = &param_4->ArrayMax;
  piVar2 = &param_4->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  dVar7 = GetDistanceAlongSplineAtSplinePoint(this,param_1);
  dVar8 = GetDistanceAlongSplineAtSplinePoint(this,param_1 + 1);
  dVar9 = (dVar8 - dVar7) * __real_3fe0000000000000;
  if (dVar9 == 0.0) {
    if ((PCGSplineStruct::GUseSplineCurves == false) &&
       ((this->Spline).CurrentImplementation != '\0')) {
      fVar17 = FSpline::GetParameterAtDistance(&this->Spline,(float)dVar8);
    }
    else {
      local_res10[0] = 0.0;
      fVar17 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)dVar8,
                          local_res10);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_c0._s_0,fVar17,param_2);
    pTVar4 = (TVector<double>_u_0 *)(this_00->AllocatorInstance).Data;
    if ((pTVar4 <= &local_c0) &&
       (&local_c0 < (TVector<double>_u_0 *)(pTVar4->XYZ + (longlong)*piVar1 * 3))) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
    }
    iVar13 = *piVar2;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&this_00->AllocatorInstance,piVar1);
    }
    *piVar2 = iVar13 + 1;
    pFVar5 = (this_00->AllocatorInstance).Data;
    bVar11 = true;
    pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
    *(double *)pFVar3 = local_c0._s_0.X;
    *(double *)(pFVar3 + 8) = local_c0._s_0.Y;
    *(double *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = local_c0._s_0.Z;
  }
  else {
    EVar14 = GetSplinePointType(this,param_1);
    if (EVar14 == CIM_Linear) {
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this->Spline).CurrentImplementation != '\0')) {
        fVar17 = FSpline::GetParameterAtDistance(&this->Spline,(float)dVar7);
      }
      else {
        param_4._0_4_ = 0;
        fVar17 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)dVar7,
                            (float *)&param_4);
      }
      GetLocationAtSplineInputKey(this,(TVector<double> *)&local_a8._s_0,fVar17,param_2);
      pTVar4 = (TVector<double>_u_0 *)(this_00->AllocatorInstance).Data;
      if ((pTVar4 <= &local_a8) &&
         (&local_a8 < (TVector<double>_u_0 *)(pTVar4->XYZ + (longlong)*piVar1 * 3))) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      iVar13 = *piVar2;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this_00->AllocatorInstance,piVar1);
      }
      *piVar2 = iVar13 + 1;
      pFVar5 = (this_00->AllocatorInstance).Data;
      pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
      *(double *)pFVar3 = local_a8._s_0.X;
      *(double *)(pFVar3 + 8) = local_a8._s_0.Y;
      *(double *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = local_a8._s_0.Z;
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this->Spline).CurrentImplementation != '\0')) {
        fVar17 = FSpline::GetParameterAtDistance(&this->Spline,(float)dVar8);
      }
      else {
        local_c8[0] = 0.0;
        fVar17 = FInterpCurve<float>::Eval
                           ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)dVar8,
                            local_c8);
      }
      GetLocationAtSplineInputKey(this,(TVector<double> *)&local_90[0]._s_0,fVar17,param_2);
      pTVar4 = (TVector<double>_u_0 *)(this_00->AllocatorInstance).Data;
      if ((pTVar4 <= local_90) &&
         (local_90 < (TVector<double>_u_0 *)(pTVar4->XYZ + (longlong)this_00->ArrayMax * 3))) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      iVar13 = this_00->ArrayNum;
      if (iVar13 == this_00->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&this_00->AllocatorInstance,piVar1);
      }
      this_00->ArrayNum = iVar13 + 1;
      pFVar5 = (this_00->AllocatorInstance).Data;
      bVar11 = true;
      pFVar3 = pFVar5 + (longlong)iVar13 * 0x18;
      *(undefined8 *)pFVar3 = local_90[0]._s_0.X;
      *(undefined8 *)(pFVar3 + 8) = local_90[0]._s_0.Y;
      *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = local_90[0]._s_0.Z;
    }
    else {
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      if (0x7fffffff < (uint)local_d8.ArrayMax) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
      }
      fVar17 = (float)(dVar9 + dVar7);
      bVar11 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                         (this,(float)dVar7,fVar17,param_2,param_3,&local_e8,&local_d8);
      if (bVar11) {
        iVar13 = this_00->ArrayNum;
        if (0 < iVar13) {
          uVar15 = 0;
          if ((int)(iVar13 - 1U) < iVar13) {
            uVar15 = ~(iVar13 - 1U) >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          lVar16 = (longlong)this_00->ArrayNum;
          pFVar3 = (this_00->AllocatorInstance).Data;
          if (local_e8.ArrayNum < 1) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          if (((*(double *)local_e8.AllocatorInstance.Data !=
                *(double *)(pFVar3 + lVar16 * 0x18 + -0x18)) ||
              (*(double *)(local_e8.AllocatorInstance.Data + 8) !=
               *(double *)(pFVar3 + lVar16 * 0x18 + -0x10))) ||
             (*(double *)(local_e8.AllocatorInstance.Data + 0x10) !=
              *(double *)(pFVar3 + lVar16 * 0x18 + -8))) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutPoints.Last() == NewPoints[0]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                                ,0x30d,L"");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,this_00->ArrayNum + -1,Default);
        }
        if (this_00 == &local_e8) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        lVar16 = (longlong)local_e8.ArrayNum;
        if (local_e8.ArrayNum != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,local_e8.ArrayNum,&this_00->AllocatorInstance,piVar2,piVar1);
          memcpy((this_00->AllocatorInstance).Data + (longlong)iVar13 * 0x18,
                 local_e8.AllocatorInstance.Data,lVar16 * 0x18);
        }
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      uVar10 = local_d8._8_8_;
      iVar13 = local_d8.ArrayMax;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      local_d8._8_8_ = (ulonglong)(uint)local_d8.ArrayMax << 0x20;
      if (((longlong)uVar10 < 0) && (iVar13 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
      }
      bVar11 = DivideSplineIntoPolylineRecursiveWithDistancesHelper
                         (this,fVar17,(float)(dVar9 + dVar7 + dVar9),param_2,param_3,&local_e8,
                          &local_d8);
      if (bVar11) {
        iVar13 = this_00->ArrayNum;
        if (0 < iVar13) {
          uVar15 = 0;
          if ((int)(iVar13 - 1U) < iVar13) {
            uVar15 = ~(iVar13 - 1U) >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          lVar16 = (longlong)this_00->ArrayNum;
          pFVar3 = (this_00->AllocatorInstance).Data;
          if (local_e8.ArrayNum < 1) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          if (((*(double *)local_e8.AllocatorInstance.Data !=
                *(double *)(pFVar3 + lVar16 * 0x18 + -0x18)) ||
              (*(double *)(local_e8.AllocatorInstance.Data + 8) !=
               *(double *)(pFVar3 + lVar16 * 0x18 + -0x10))) ||
             (*(double *)(local_e8.AllocatorInstance.Data + 0x10) !=
              *(double *)(pFVar3 + lVar16 * 0x18 + -8))) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutPoints.Last() == NewPoints[0]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                                ,0x30d,L"");
            if (bVar11) {
              pcVar6 = (code *)swi(3);
              uVar12 = (*pcVar6)();
              return (bool)uVar12;
            }
          }
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this_00,this_00->ArrayNum + -1,Default);
        }
        if (this_00 == &local_e8) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        lVar16 = (longlong)local_e8.ArrayNum;
        if (local_e8.ArrayNum != 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,local_e8.ArrayNum,&this_00->AllocatorInstance,piVar2,piVar1);
          memcpy((this_00->AllocatorInstance).Data + (longlong)iVar13 * 0x18,
                 local_e8.AllocatorInstance.Data,lVar16 * 0x18);
        }
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      bVar11 = 0 < this_00->ArrayNum;
    }
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return bVar11;
}

// ConvertSplineToPolyLine @ 1498a2f30

bool __thiscall
FPCGSplineStruct::ConvertSplineToPolyLine
          (FPCGSplineStruct *this,Type param_1,float param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58 [2];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar7 = *(uint *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    uVar7 = FSpline::GetNumControlPoints(&this->Spline);
  }
  iVar13 = 0;
  uVar10 = 0;
  uVar12 = uVar7;
  if ((this->bClosedLoop == false) && (uVar12 = uVar7 - 1, (int)(uVar7 - 1) < 0)) {
    uVar12 = uVar10;
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  piVar2 = &param_3->ArrayNum;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  uVar7 = uVar12 * 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar7,&param_3->AllocatorInstance,*piVar2,piVar1);
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  if (0 < (int)uVar12) {
    do {
      bVar5 = ConvertSplineSegmentToPolyLine(this,iVar13,param_1,param_2,local_58);
      if (bVar5) {
        iVar9 = *piVar2;
        if (0 < iVar9) {
          uVar7 = uVar10;
          if ((int)(iVar9 - 1U) < iVar9) {
            uVar7 = ~(iVar9 - 1U) >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar8 = (longlong)*piVar2;
          pFVar3 = (param_3->AllocatorInstance).Data;
          if ((local_58[0].ArrayNum < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((((*(double *)local_58[0].AllocatorInstance.Data !=
                 *(double *)(pFVar3 + lVar8 * 0x18 + -0x18)) ||
               (*(double *)(local_58[0].AllocatorInstance.Data + 8) !=
                *(double *)(pFVar3 + lVar8 * 0x18 + -0x10))) ||
              (*(double *)(local_58[0].AllocatorInstance.Data + 0x10) !=
               *(double *)(pFVar3 + lVar8 * 0x18 + -8))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("OutPoints.Last() == SegmentPoints[0]",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                                 ,0x327,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          uVar11 = *piVar2 - 1;
          uVar7 = uVar10;
          if ((int)uVar11 < *piVar2) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x18;
          iVar9 = *piVar2 + ~uVar11;
          if (iVar9 != 0) {
            memmove(pFVar3,pFVar3 + 0x18,(longlong)iVar9 * 0x18);
          }
          *piVar2 = *piVar2 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&param_3->AllocatorInstance,*piVar2,piVar1);
        }
        if ((param_3 == local_58) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar8 = (longlong)local_58[0].ArrayNum;
        if (local_58[0].ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,local_58[0].ArrayNum,&param_3->AllocatorInstance,piVar2,piVar1);
          memcpy((param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x18,
                 local_58[0].AllocatorInstance.Data,lVar8 * 0x18);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)uVar12);
  }
  iVar13 = *piVar2;
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return 0 < iVar13;
}

// DivideSplineIntoPolylineRecursiveWithDistancesHelper @ 1498b18d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPCGSplineStruct::DivideSplineIntoPolylineRecursiveWithDistancesHelper
          (FPCGSplineStruct *this,float param_1,float param_2,Type param_3,float param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  TVector<double>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  FInterpCurveFloat *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  longlong lVar16;
  double *pdVar17;
  float fVar18;
  undefined1 auStackY_1d8 [32];
  TArray<double,TSizedDefaultAllocator<32>_> local_188;
  TArray<double,TSizedDefaultAllocator<32>_> local_178;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_168;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_158;
  double local_148;
  double local_140;
  float local_138;
  float local_134;
  float local_130 [2];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (0.0 < (double)(param_2 - param_1)) {
    dVar6 = (double)(param_2 - param_1) * __real_3fe0000000000000 + (double)param_1;
    if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
      local_138 = 0.0;
      fVar18 = FInterpCurve<float>::Eval
                         ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,
                          &local_138);
    }
    else {
      fVar18 = FSpline::GetParameterAtDistance(&this->Spline,param_1);
    }
    this_00 = &(this->SplineCurves).ReparamTable;
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_128._s_0,fVar18,param_3);
    local_d8._s_0.X = local_128._s_0.X;
    local_d8._s_0.Y = local_128._s_0.Y;
    local_d8._s_0.Z = local_128._s_0.Z;
    if ((PCGSplineStruct::GUseSplineCurves == false) &&
       ((this->Spline).CurrentImplementation != '\0')) {
      fVar18 = FSpline::GetParameterAtDistance(&this->Spline,(float)dVar6);
    }
    else {
      local_134 = 0.0;
      fVar18 = FInterpCurve<float>::Eval((FInterpCurve<float> *)this_00,(float)dVar6,&local_134);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_110._s_0,fVar18,param_3);
    local_c0._s_0.X = local_110._s_0.X;
    local_c0._s_0.Y = local_110._s_0.Y;
    local_c0._s_0.Z = local_110._s_0.Z;
    if ((PCGSplineStruct::GUseSplineCurves == false) &&
       ((this->Spline).CurrentImplementation != '\0')) {
      fVar18 = FSpline::GetParameterAtDistance(&this->Spline,param_2);
    }
    else {
      local_130[0] = 0.0;
      fVar18 = FInterpCurve<float>::Eval((FInterpCurve<float> *)this_00,param_2,local_130);
    }
    GetLocationAtSplineInputKey(this,(TVector<double> *)&local_f8._s_0,fVar18,param_3);
    local_a8._s_0.X = local_f8._s_0.X;
    local_a8._s_0.Y = local_f8._s_0.Y;
    local_a8._s_0.Z = local_f8._s_0.Z;
    fVar18 = FMath::PointDistToSegmentSquared
                       ((TVector<double> *)&local_c0._s_0,(TVector<double> *)&local_d8._s_0,
                        (TVector<double> *)&local_a8._s_0);
    if (fVar18 <= param_4) {
      pTVar3 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
      if (((pTVar3 <= &local_d8) && (&local_d8 < pTVar3 + param_5->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar11 = param_5->ArrayNum;
      if (iVar11 == param_5->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar11 + 1;
      pFVar4 = (param_5->AllocatorInstance).Data;
      pFVar2 = pFVar4 + (longlong)iVar11 * 0x18;
      *(double *)pFVar2 = local_d8._s_0.X;
      *(double *)(pFVar2 + 8) = local_d8._s_0.Y;
      *(double *)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) = local_d8._s_0.Z;
      pFVar2 = (param_6->AllocatorInstance).Data;
      local_148 = (double)param_1;
      if (((pFVar2 <= (FScriptContainerElement *)&local_148) &&
          ((FScriptContainerElement *)&local_148 < pFVar2 + (longlong)param_6->ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar11 = param_6->ArrayNum;
      if (iVar11 == param_6->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar11 + 1;
      *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_148;
      if (((local_d8._s_0.X != local_a8._s_0.X) || (local_d8._s_0.Y != local_a8._s_0.Y)) ||
         (local_d8._s_0.Z != local_a8._s_0.Z)) {
        pTVar3 = (TVector<double>_u_0 *)(param_5->AllocatorInstance).Data;
        if (((pTVar3 <= &local_a8) &&
            (&local_a8 < (TVector<double>_u_0 *)(pTVar3->XYZ + (longlong)param_5->ArrayMax * 3))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar11 = param_5->ArrayNum;
        if (iVar11 == param_5->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar11 + 1;
        pFVar4 = (param_5->AllocatorInstance).Data;
        pFVar2 = pFVar4 + (longlong)iVar11 * 0x18;
        *(double *)pFVar2 = local_a8._s_0.X;
        *(double *)(pFVar2 + 8) = local_a8._s_0.Y;
        *(double *)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) = local_a8._s_0.Z;
        pFVar2 = (param_6->AllocatorInstance).Data;
        local_140 = (double)param_2;
        if (((pFVar2 <= (FScriptContainerElement *)&local_140) &&
            ((FScriptContainerElement *)&local_140 < pFVar2 + (longlong)param_6->ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar11 = param_6->ArrayNum;
        if (iVar11 == param_6->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        param_6->ArrayNum = iVar11 + 1;
        *(double *)((param_6->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_140;
      }
    }
    else {
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      DivideSplineIntoPolylineRecursiveWithDistancesHelper
                (this,param_1,(float)dVar6,param_3,param_4,&local_168,&local_188);
      DivideSplineIntoPolylineRecursiveWithDistancesHelper
                (this,(float)dVar6,param_2,param_3,param_4,&local_158,&local_178);
      if ((0 < local_168.ArrayNum) && (0 < local_158.ArrayNum)) {
        uVar13 = 0;
        if ((int)(local_168.ArrayNum - 1U) < local_168.ArrayNum) {
          uVar13 = ~(local_168.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        FVar7.Data = local_168.AllocatorInstance.Data;
        lVar12 = (longlong)local_168.ArrayNum;
        if ((local_158.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        if ((((*(double *)local_158.AllocatorInstance.Data !=
               *(double *)(FVar7.Data + lVar12 * 0x18 + -0x18)) ||
             (*(double *)(local_158.AllocatorInstance.Data + 8) !=
              *(double *)(FVar7.Data + lVar12 * 0x18 + -0x10))) ||
            (*(double *)(local_158.AllocatorInstance.Data + 0x10) !=
             *(double *)(FVar7.Data + lVar12 * 0x18 + -8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewPoints[0].Last() == NewPoints[1][0]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                               ,0x347,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        if ((local_178.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        FVar7.Data = local_178.AllocatorInstance.Data;
        uVar13 = 0;
        if ((int)(local_188.ArrayNum - 1U) < local_188.ArrayNum) {
          uVar13 = ~(local_188.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        if ((*(double *)FVar7.Data !=
             *(double *)(local_188.AllocatorInstance.Data + (longlong)(local_188.ArrayNum + -1) * 8)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NewDistancesAlongSpline[0].Last() == NewDistancesAlongSpline[1][0]"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                                     ,0x348,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&local_168,local_168.ArrayNum + -1,Default);
        uVar15 = local_188.ArrayNum - 1;
        uVar13 = 0;
        if ((int)uVar15 < local_188.ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
        iVar10 = local_188.ArrayNum + ~uVar15;
        iVar11 = local_188.ArrayNum;
        if (iVar10 != 0) {
          memmove(local_188.AllocatorInstance.Data + (longlong)(int)uVar15 * 8,
                  local_188.AllocatorInstance.Data + (longlong)(int)uVar15 * 8 + 8,
                  (longlong)iVar10 << 3);
          iVar11 = local_188.ArrayNum;
        }
        local_188.ArrayNum = iVar11 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_188.AllocatorInstance,iVar11 + -1,&local_188.ArrayMax);
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_168,&local_158);
      TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
                (&local_188,&local_178);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(param_5,&local_168);
      TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
                (param_6,&local_188);
      lVar12 = 2;
      pTVar14 = &local_168;
      lVar16 = 2;
      do {
        pFVar2 = pTVar14[-1].AllocatorInstance.Data;
        pTVar14 = pTVar14 + -1;
        lVar16 = lVar16 + -1;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      } while (lVar16 != 0);
      pdVar17 = &local_148;
      do {
        pdVar1 = pdVar17 + -2;
        pdVar17 = pdVar17 + -2;
        lVar12 = lVar12 + -1;
        if ((void *)*pdVar1 != (void *)0x0) {
          FMemory::Free((void *)*pdVar1);
        }
      } while (lVar12 != 0);
    }
    if ((param_5->ArrayNum != param_6->ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutPoints.Num() == OutDistancesAlongSpline.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                           ,0x35f,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    bVar8 = 0 < param_5->ArrayNum;
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

// FindInputKeyClosestToWorldLocation @ 1498b35a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FPCGSplineStruct::FindInputKeyClosestToWorldLocation
          (FPCGSplineStruct *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_c8;
  float local_c4;
  TVector<double>_u_0 local_c0 [8];
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar2 = (this->Transform).Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = (this->Transform).Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar14 = (param_1->field0_0x0)._s_0.Z - (this->Transform).Translation.ZW.m128d_f64[0];
  auVar22._8_4_ = SUB84(dVar2,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar7 = (param_1->field0_0x0)._s_0.X - (this->Transform).Translation.XY.m128d_f64[0];
  dVar8 = (param_1->field0_0x0)._s_0.Y - (this->Transform).Translation.XY.m128d_f64[1];
  uVar26 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar23 = blendpd(auVar22,auVar20,2);
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = uVar26;
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = uVar26;
  auVar31._0_8_ = auVar30._8_8_ * dVar1 - dVar2 * dVar7;
  auVar31._8_8_ = dVar14 * dVar2 - auVar15._8_8_ * dVar8;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar14;
  auVar20 = blendpd(auVar19,auVar9,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar3 - auVar23._0_8_ * dVar14;
  auVar21._8_8_ = auVar20._8_8_ * dVar4 - auVar23._8_8_ * 0.0;
  dVar5 = auVar31._8_8_ + auVar31._8_8_;
  dVar6 = auVar21._0_8_ + auVar21._0_8_;
  uVar26 = SUB84(dVar6,0);
  uVar27 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar20 = blendpd(auVar31,auVar21,2);
  auVar28._8_4_ = uVar26;
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = uVar27;
  auVar16._8_4_ = uVar26;
  auVar16._0_8_ = dVar5;
  auVar16._12_4_ = uVar27;
  auVar24._8_4_ = uVar26;
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = uVar27;
  auVar32._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar32._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar29._0_8_ = auVar28._8_8_ * dVar1 - dVar5 * dVar2;
  auVar29._8_8_ = auVar32._0_8_ * dVar2 - auVar16._8_8_ * dVar3;
  auVar20 = blendpd(auVar24,auVar32,2);
  auVar17._8_4_ = SUB84(auVar32._8_8_,0);
  auVar17._0_8_ = auVar32._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar25._0_8_ = auVar20._0_8_ * dVar3 - auVar32._0_8_ * auVar23._0_8_;
  auVar25._8_8_ = auVar20._8_8_ * dVar4 - auVar17._8_8_ * auVar23._8_8_;
  auVar20 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
  lVar10 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar20._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar20._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
  lVar11 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(this->Transform).Scale3D.XY.m128d_f64 &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar12 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc) &
                              _UNK_15061cc8c,
                              *(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) & _UNK_15061cc88
                             ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar18._8_4_ = SUB84(auVar29._8_8_,0);
  auVar18._0_8_ = auVar29._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  dVar1 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar23._12_4_,
                           ~(uint)lVar12 & auVar23._8_4_) * (dVar6 * dVar4 + dVar8 + auVar25._0_8_);
  local_c0[0]._8_4_ = SUB84(dVar1,0);
  local_c0[0]._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar23._4_4_,
                        ~(uint)lVar11 & auVar23._0_4_) * (dVar5 * dVar4 + dVar7 + auVar18._8_8_);
  local_c0[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar23._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar23._0_8_ = auVar20._0_8_;
  auVar23._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar23 = blendpd(auVar29,auVar25,2);
  local_c0[0]._16_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar20._4_4_,
                        ~(uint)lVar10 & auVar20._0_4_) *
       (auVar32._0_8_ * dVar4 + dVar14 + auVar23._0_8_);
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    fVar13 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                        (TVector<double> *)&local_c0[0]._s_0,&local_c8,&local_c4);
  }
  else {
    fVar13 = FSpline::FindNearest(&this->Spline,(TVector<double> *)&local_c0[0]._s_0,&local_c8);
  }
  return fVar13;
}

// FindInputKeyOnSegmentClosestToWorldLocation @ 1498b3800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FPCGSplineStruct::FindInputKeyOnSegmentClosestToWorldLocation
          (FPCGSplineStruct *this,TVector<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float local_c8 [2];
  TVector<double>_u_0 local_c0 [8];
  
  dVar1 = (this->Transform).Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar2 = (this->Transform).Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = (this->Transform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = (this->Transform).Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar14 = (param_1->field0_0x0)._s_0.Z - (this->Transform).Translation.ZW.m128d_f64[0];
  auVar22._8_4_ = SUB84(dVar2,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar7 = (param_1->field0_0x0)._s_0.X - (this->Transform).Translation.XY.m128d_f64[0];
  dVar8 = (param_1->field0_0x0)._s_0.Y - (this->Transform).Translation.XY.m128d_f64[1];
  uVar26 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar20._8_4_ = SUB84(dVar4,0);
  auVar20._0_8_ = dVar3;
  auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar23 = blendpd(auVar22,auVar20,2);
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = uVar26;
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar19._8_4_ = SUB84(dVar8,0);
  auVar19._0_8_ = dVar7;
  auVar19._12_4_ = uVar26;
  auVar31._0_8_ = auVar30._8_8_ * dVar1 - dVar2 * dVar7;
  auVar31._8_8_ = dVar14 * dVar2 - auVar15._8_8_ * dVar8;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar14;
  auVar20 = blendpd(auVar19,auVar9,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar3 - auVar23._0_8_ * dVar14;
  auVar21._8_8_ = auVar20._8_8_ * dVar4 - auVar23._8_8_ * 0.0;
  dVar5 = auVar31._8_8_ + auVar31._8_8_;
  dVar6 = auVar21._0_8_ + auVar21._0_8_;
  uVar26 = SUB84(dVar6,0);
  uVar27 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar20 = blendpd(auVar31,auVar21,2);
  auVar28._8_4_ = uVar26;
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = uVar27;
  auVar16._8_4_ = uVar26;
  auVar16._0_8_ = dVar5;
  auVar16._12_4_ = uVar27;
  auVar24._8_4_ = uVar26;
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = uVar27;
  auVar32._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar32._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar29._0_8_ = auVar28._8_8_ * dVar1 - dVar5 * dVar2;
  auVar29._8_8_ = auVar32._0_8_ * dVar2 - auVar16._8_8_ * dVar3;
  auVar20 = blendpd(auVar24,auVar32,2);
  auVar17._8_4_ = SUB84(auVar32._8_8_,0);
  auVar17._0_8_ = auVar32._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar25._0_8_ = auVar20._0_8_ * dVar3 - auVar32._0_8_ * auVar23._0_8_;
  auVar25._8_8_ = auVar20._8_8_ * dVar4 - auVar17._8_8_ * auVar23._8_8_;
  auVar20 = *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64;
  lVar10 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar20._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar20._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64);
  lVar11 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 4) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(this->Transform).Scale3D.XY.m128d_f64 &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar12 = -(ulonglong)
            ((double)CONCAT44(*(uint *)((longlong)(this->Transform).Scale3D.XY.m128d_f64 + 0xc) &
                              _UNK_15061cc8c,
                              *(uint *)((this->Transform).Scale3D.XY.m128d_f64 + 1) & _UNK_15061cc88
                             ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar18._8_4_ = SUB84(auVar29._8_8_,0);
  auVar18._0_8_ = auVar29._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  dVar1 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar23._12_4_,
                           ~(uint)lVar12 & auVar23._8_4_) * (dVar6 * dVar4 + dVar8 + auVar25._0_8_);
  local_c0[0]._8_4_ = SUB84(dVar1,0);
  local_c0[0]._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar23._4_4_,
                        ~(uint)lVar11 & auVar23._0_4_) * (dVar5 * dVar4 + dVar7 + auVar18._8_8_);
  local_c0[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar23._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar23._0_8_ = auVar20._0_8_;
  auVar23._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
  auVar23 = blendpd(auVar29,auVar25,2);
  local_c0[0]._16_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar20._4_4_,
                        ~(uint)lVar10 & auVar20._0_4_) *
       (auVar32._0_8_ * dVar4 + dVar14 + auVar23._0_8_);
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    fVar13 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                        (TVector<double> *)&local_c0[0]._s_0,param_2,local_c8);
  }
  else {
    fVar13 = FSpline::FindNearestOnSegment
                       (&this->Spline,(TVector<double> *)&local_c0[0]._s_0,param_2,local_c8);
  }
  return fVar13;
}

// GetArriveTangent @ 1498b5070

TVector<double> * __thiscall
FPCGSplineStruct::GetArriveTangent
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar7 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Position;
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 0x20 + lVar3);
    pTVar8 = &local_38;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = *(double *)((longlong)param_1 * 0x58 + 0x30 + lVar3);
  }
  else {
    pTVar8 = &FSpline::GetInTangent(&this->Spline,&local_20,param_1)->field0_0x0;
  }
  dVar5 = (pTVar8->_s_0).Y;
  dVar2 = (pTVar8->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetAttributeChannelNames @ 1498b5150

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPCGSplineStruct::GetAttributeChannelNames(FPCGSplineStruct *this)

{
  int *piVar1;
  FSpinLock *pFVar2;
  atomic<bool> aVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FIdentityFunctor local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    if ((this->CachedSortedAttributeChannelNames).ArrayNum != 0) {
      piVar1 = &(this->CachedSortedAttributeChannelNames).ArrayMax;
      (this->CachedSortedAttributeChannelNames).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->CachedSortedAttributeChannelNames).AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    FSpline::GetFloatPropertyChannels(&this->Spline,&local_18);
    if (local_18.ArrayNum != (this->CachedSortedAttributeChannelNames).ArrayNum) {
      AlgoImpl::
      IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FPCGSplineStruct::GetAttributeChannelNames_::__l12::<lambda_1>_>_>
                ((FName *)local_18.AllocatorInstance.Data,local_18.ArrayNum,local_res8[0],
                 (<lambda_1> *)local_res8);
      pFVar2 = &this->SpinLock;
      if ((pFVar2 == (FSpinLock *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar7;
      }
      LOCK();
      aVar3 = pFVar2->bFlag;
      pFVar2->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar3 != (atomic<bool>)0x0) {
        aVar3 = pFVar2->bFlag;
        while (aVar3 != (atomic<bool>)0x0) {
          aVar3 = pFVar2->bFlag;
        }
        LOCK();
        aVar3 = pFVar2->bFlag;
        pFVar2->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      if ((local_18.ArrayNum != (this->CachedSortedAttributeChannelNames).ArrayNum) &&
         (pTVar7 = &this->CachedSortedAttributeChannelNames, pTVar7 != &local_18)) {
        pFVar4 = (pTVar7->AllocatorInstance).Data;
        iVar8 = local_18.ArrayNum;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
          iVar8 = local_18.ArrayNum;
        }
        (pTVar7->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
        (this->CachedSortedAttributeChannelNames).ArrayMax = local_18.ArrayMax;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->CachedSortedAttributeChannelNames).ArrayNum = iVar8;
      }
      if (pFVar2 != (FSpinLock *)0x0) {
        pFVar2->bFlag = (atomic<bool>)0x0;
      }
    }
    if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return &this->CachedSortedAttributeChannelNames;
    }
  }
  return &this->CachedSortedAttributeChannelNames;
}

// GetAttributeValue @ 1498b52d0

/* WARNING: Type propagation algorithm not settling */

float __thiscall
FPCGSplineStruct::GetAttributeValue(FPCGSplineStruct *this,float param_1,FName param_2)

{
  EOutOfBoundsHandlingMode EVar1;
  FNewSpline *this_00;
  code *UNRECOVERED_JUMPTABLE;
  TSplineInterface<float> *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fStackX_8;
  float fStackX_c;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    return 0.0;
  }
  this_00 = (this->Spline).NewData.Object;
  if ((this_00 == (FNewSpline *)0x0) || ((this->Spline).CurrentImplementation != '\x02')) {
    return 0.0;
  }
  fVar4 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
  pTVar2 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetAttributeChannel<float>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this_00,param_2);
  if (pTVar2 == (TSplineInterface<float> *)0x0) {
    return 0.0;
  }
  fVar4 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this_00,param_2,fVar4);
  pfVar3 = (float *)(**(code **)(pTVar2->_padding_ + 0x30))(pTVar2,&fStackX_8);
  if (pfVar3[1] <= *pfVar3 && *pfVar3 != pfVar3[1]) {
    return 0.0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pTVar2->_padding_ + 0x90);
  (**(code **)(pTVar2->_padding_ + 0x30))(pTVar2,&fStackX_8);
  if (fStackX_8 <= fVar4) {
    fVar5 = fVar4;
    if (fVar4 <= fStackX_c) goto LAB_147a1687f;
    EVar1 = pTVar2->PostInfinityMode;
    fVar5 = fStackX_c;
  }
  else {
    EVar1 = pTVar2->PreInfinityMode;
    fVar5 = fStackX_8;
  }
  if (EVar1 == Zero) {
    fVar5 = 0.0;
  }
  else if ((EVar1 != Constant) && (fVar5 = fVar4, EVar1 == Cycle)) {
    fVar4 = FGenericPlatformMath::Fmod(fVar4 - fStackX_8,fStackX_c - fStackX_8);
    fVar5 = fVar4 + fStackX_8;
  }
LAB_147a1687f:
                    /* WARNING: Could not recover jumptable at 0x000147a1689c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*UNRECOVERED_JUMPTABLE)(pTVar2,fVar5);
  return fVar4;
}

// GetBounds @ 1498b5450

TBox<double> * __thiscall
FPCGSplineStruct::GetBounds(FPCGSplineStruct *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TBoxSphereBounds<double,double> *pTVar8;
  TBoxSphereBounds<double,double> local_58;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    pTVar8 = PCGSplineStruct::CalcBounds
                       (&local_58,&this->SplineCurves,this->bClosedLoop,
                        &UE::Math::TTransform<double>::Identity);
  }
  else {
    pTVar8 = PCGSplineStruct::CalcBounds
                       (&local_58,&this->Spline,this->bClosedLoop,
                        &UE::Math::TTransform<double>::Identity);
  }
  dVar1 = (pTVar8->BoxExtent).field0_0x0._s_0.Y;
  dVar2 = (pTVar8->BoxExtent).field0_0x0._s_0.Z;
  dVar3 = (pTVar8->Origin).field0_0x0._s_0.Z;
  dVar4 = (pTVar8->BoxExtent).field0_0x0._s_0.X;
  dVar5 = (pTVar8->Origin).field0_0x0._s_0.X;
  dVar6 = (pTVar8->Origin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar5 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar6 - dVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3 - dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar5 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar6 + dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar3 + dVar2;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetConstControlPointsEntryKeys @ 1498b6d70

TArrayView<__int64_const_,int> * __thiscall
FPCGSplineStruct::GetConstControlPointsEntryKeys
          (FPCGSplineStruct *this,TArrayView<__int64_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<__int64_const_,int> *pTVar4;
  
  iVar1 = (this->ControlPointsEntryKeys).ArrayNum;
  __return_storage_ptr__->DataPtr = (long64 *)(this->ControlPointsEntryKeys).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<__int64_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetDistanceAlongSplineAtSplinePoint @ 1498b9b60

double __thiscall
FPCGSplineStruct::GetDistanceAlongSplineAtSplinePoint(FPCGSplineStruct *this,int param_1)

{
  FSpline *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  
  this_00 = &this->Spline;
  if (this->bClosedLoop != false) {
    if ((PCGSplineStruct::GUseSplineCurves) || (this_00->CurrentImplementation == '\0')) {
      iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
    }
    else {
      iVar3 = FSpline::GetNumControlPoints(this_00);
    }
    if (param_1 == iVar3) {
      if ((PCGSplineStruct::GUseSplineCurves == false) && (this_00->CurrentImplementation != '\0'))
      {
        fVar4 = FSpline::GetSplineLength(this_00);
        return (double)fVar4;
      }
      fVar4 = FSplineCurves::GetSplineLength(&this->SplineCurves);
      return (double)fVar4;
    }
  }
  if (PCGSplineStruct::GUseSplineCurves == false) {
    if (this_00->CurrentImplementation != '\0') {
      fVar4 = FSpline::GetParameterAtIndex(this_00,param_1);
      fVar4 = FSpline::GetDistanceAtParameter(this_00,fVar4);
      return (double)fVar4;
    }
    if (this_00->CurrentImplementation != '\0') {
      iVar3 = FSpline::GetNumControlPoints(this_00);
      goto LAB_1498b9c3c;
    }
  }
  iVar3 = *(int *)&(this->SplineCurves).Position.field_0x8;
LAB_1498b9c3c:
  if (-1 < param_1) {
    if (this->bClosedLoop == false) {
      iVar3 = iVar3 + -1;
    }
    if ((param_1 < iVar3 + 1) &&
       (iVar3 = param_1 * this->ReparamStepsPerSegment,
       iVar3 < *(int *)&(this->SplineCurves).ReparamTable.field_0x8)) {
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        dVar5 = (double)(*pcVar1)();
        return dVar5;
      }
      return (double)*(float *)(*(longlong *)&(this->SplineCurves).ReparamTable +
                               (longlong)iVar3 * 0x14);
    }
  }
  return 0.0;
}

// GetInputKeyAtDistanceAlongSpline @ 1498ba700

float __thiscall
FPCGSplineStruct::GetInputKeyAtDistanceAlongSpline(FPCGSplineStruct *this,double param_1)

{
  int iVar1;
  float fVar2;
  float local_res18 [4];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    iVar1 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar1 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if (iVar1 < 2) {
    return 0.0;
  }
  if ((PCGSplineStruct::GUseSplineCurves == false) && ((this->Spline).CurrentImplementation != '\0')
     ) {
    fVar2 = FSpline::GetParameterAtDistance(&this->Spline,(float)param_1);
    return fVar2;
  }
  local_res18[0] = 0.0;
  fVar2 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)param_1,
                     local_res18);
  return fVar2;
}

// GetInputKeyAtSegmentStart @ 1498ba7d0

float __thiscall FPCGSplineStruct::GetInputKeyAtSegmentStart(FPCGSplineStruct *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FInterpCurveVector *pFVar5;
  float fVar6;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    pFVar5 = &(this->SplineCurves).Position;
  }
  else {
    pFVar5 = FSpline::GetSplinePointsPosition(&this->Spline);
  }
  if (this->bClosedLoop != false) {
    iVar1 = *(int *)&pFVar5->field_0x8;
    if ((iVar1 != 0) && (iVar1 <= param_1)) {
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
      }
      return *(float *)((longlong)*(int *)&pFVar5->field_0x8 * 0x58 + -0x58 + *(longlong *)pFVar5) +
             *(float *)&pFVar5->field_0x14;
    }
  }
  if ((-1 < param_1) && (param_1 < *(int *)&pFVar5->field_0x8)) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    return *(float *)((longlong)param_1 * 0x58 + *(longlong *)pFVar5);
  }
  return 0.0;
}

// GetLeaveTangent @ 1498babe0

TVector<double> * __thiscall
FPCGSplineStruct::GetLeaveTangent
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar7 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Position;
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 0x38 + lVar3);
    pTVar8 = &local_38;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = *(double *)((longlong)param_1 * 0x58 + 0x48 + lVar3);
  }
  else {
    pTVar8 = &FSpline::GetOutTangent(&this->Spline,&local_20,param_1)->field0_0x0;
  }
  dVar5 = (pTVar8->_s_0).Y;
  dVar2 = (pTVar8->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLocation @ 1498bad40

TVector<double> * __thiscall
FPCGSplineStruct::GetLocation
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar7 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Position;
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 8 + lVar3);
    pTVar8 = &local_38;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3);
  }
  else {
    pTVar8 = &FSpline::GetLocation(&this->Spline,&local_20,param_1)->field0_0x0;
  }
  dVar5 = (pTVar8->_s_0).Y;
  dVar2 = (pTVar8->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLocationAtDistanceAlongSpline @ 1498bb0d0

TVector<double> * __thiscall
FPCGSplineStruct::GetLocationAtDistanceAlongSpline
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,double param_1,
          Type param_2)

{
  float fVar1;
  float local_res10 [2];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    local_res10[0] = 0.0;
    fVar1 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)param_1,
                       local_res10);
  }
  else {
    fVar1 = FSpline::GetParameterAtDistance(&this->Spline,(float)param_1);
  }
  GetLocationAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2);
  return __return_storage_ptr__;
}

// GetLocationAtSplineInputKey @ 1498bb160

TVector<double> * __thiscall
FPCGSplineStruct::GetLocationAtSplineInputKey
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    pTVar8 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_68,
                        param_1,&UE::Math::TVector<double>::ZeroVector);
  }
  else {
    pTVar8 = FSpline::Evaluate(&this->Spline,&local_88,param_1);
  }
  dVar4 = (pTVar8->field0_0x0)._s_0.X;
  dVar5 = (pTVar8->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  dVar1 = (pTVar8->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_2 == World) {
    dVar7 = (this->Transform).Rotation.ZW.m128d_f64[1];
    dVar4 = dVar4 * (this->Transform).Scale3D.XY.m128d_f64[0];
    dVar5 = dVar5 * (this->Transform).Scale3D.XY.m128d_f64[1];
    uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar10 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    auVar17 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = uVar18;
    dVar1 = dVar1 * (this->Transform).Scale3D.ZW.m128d_f64[0];
    dVar6 = (this->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar12 = blendpd(auVar10,auVar17,2);
    dVar2 = auVar17._0_8_;
    auVar20._0_8_ = auVar19._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
    auVar20._8_8_ = dVar1 * auVar10._8_8_ - dVar2 * dVar5;
    auVar9._8_4_ = SUB84(dVar5,0);
    auVar9._0_8_ = dVar4;
    auVar9._12_4_ = uVar18;
    auVar21._8_4_ = SUB84(dVar6,0);
    auVar21._0_8_ = dVar1;
    auVar21._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar10 = blendpd(auVar9,auVar21,2);
    auVar11._0_8_ = auVar10._0_8_ * dVar2 - auVar12._0_8_ * dVar1;
    auVar11._8_8_ = auVar10._8_8_ * auVar17._8_8_ - auVar12._8_8_ * dVar6;
    auVar10 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    auVar21 = blendpd(auVar20,auVar11,2);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    dVar6 = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar11._0_8_ + auVar11._0_8_;
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar15._8_4_ = SUB84(dVar3,0);
    auVar15._0_8_ = dVar6;
    auVar15._12_4_ = uVar18;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar6;
    auVar13._12_4_ = uVar18;
    auVar21 = blendpd(auVar13,auVar22,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar6;
    auVar16._8_8_ = auVar22._0_8_ * auVar10._8_8_ - dVar2 * dVar3;
    auVar12._8_4_ = SUB84(auVar16._8_8_,0);
    auVar12._0_8_ = auVar16._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar10 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar21._0_8_ * dVar2 - auVar10._0_8_ * auVar22._0_8_;
    auVar14._8_8_ = auVar21._8_8_ * auVar17._8_8_ - auVar10._8_8_ * auVar22._8_8_;
    auVar17 = blendpd(auVar16,auVar14,2);
    dVar2 = (this->Transform).Translation.ZW.m128d_f64[0];
    dVar5 = dVar3 * dVar7 + dVar5 + auVar14._0_8_ + (this->Transform).Translation.XY.m128d_f64[1];
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ =
         dVar6 * dVar7 + dVar4 + auVar12._8_8_ + (this->Transform).Translation.XY.m128d_f64[0];
    auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         auVar22._0_8_ * dVar7 + dVar1 + auVar17._0_8_ + dVar2;
  }
  return __return_storage_ptr__;
}

// GetNumberOfPoints @ 1498bbaa0

int __thiscall FPCGSplineStruct::GetNumberOfPoints(FPCGSplineStruct *this)

{
  int iVar1;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    iVar1 = FSpline::GetNumControlPoints(&this->Spline);
    return iVar1;
  }
  return *(int *)&(this->SplineCurves).Position.field_0x8;
}

// GetNumberOfSplineSegments @ 1498bbad0

int __thiscall FPCGSplineStruct::GetNumberOfSplineSegments(FPCGSplineStruct *this)

{
  int iVar1;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    iVar1 = *(int *)&(this->SplineCurves).Position.field_0x8;
  }
  else {
    iVar1 = FSpline::GetNumControlPoints(&this->Spline);
  }
  if ((this->bClosedLoop == false) && (iVar1 = iVar1 + -1, iVar1 < 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// GetQuaternionAtSplineInputKey @ 1498bdf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
FPCGSplineStruct::GetQuaternionAtSplineInputKey
          (FPCGSplineStruct *this,TQuat<double> *__return_storage_ptr__,float param_1,Type param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TQuat<double> *pTVar11;
  TVector<double> *pTVar12;
  TMatrix<double> *this_00;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_1a8 [32];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TQuat<double> local_148;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    pTVar11 = FInterpCurve<UE::Math::TQuat<double>_>::Eval
                        ((FInterpCurve<UE::Math::TQuat<double>_> *)&(this->SplineCurves).Rotation,
                         (TQuat<double> *)&local_168._s_0,param_1,&UE::Math::TQuat<double>::Identity
                        );
  }
  else {
    pTVar11 = FSpline::EvaluateRotation(&this->Spline,&local_148,param_1);
  }
  dVar9 = __real_3e45798ee0000000;
  dVar1 = pTVar11->X;
  dVar20 = pTVar11->Y;
  dVar5 = pTVar11->Z;
  dVar8 = pTVar11->W;
  dVar15 = dVar1 * dVar1 + dVar5 * dVar5;
  dVar19 = dVar20 * dVar20 + dVar8 * dVar8;
  dVar2 = dVar19 + dVar15;
  dVar15 = dVar15 + dVar19;
  auVar26._8_4_ = SUB84(dVar15,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar21 = sqrtpd(in_XMM3,auVar26);
  uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  uVar23 = (uint)(uVar13 >> 0x20);
  uVar24 = (uint)(uVar14 >> 0x20);
  auVar27._0_8_ = uVar13 & (ulonglong)(auVar26._0_8_ * dVar1);
  uVar7 = uVar14 & (ulonglong)(auVar26._8_8_ * dVar20);
  auVar27._8_4_ = (undefined4)uVar7;
  auVar27._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar29._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar29._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar29._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar26._0_8_ * dVar5) & uVar13;
  uVar14 = (ulonglong)(auVar26._8_8_ * dVar8) & uVar14;
  auVar17._8_4_ = (undefined4)uVar14;
  auVar17._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar29 = auVar29 | auVar17;
  if ((PCGSplineStruct::GUseSplineCurves == false) && ((this->Spline).CurrentImplementation != '\0')
     ) {
    pTVar12 = FSpline::EvaluateDerivative(&this->Spline,(TVector<double> *)&local_168._s_0,param_1);
  }
  else {
    pTVar12 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                        ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                         (TVector<double> *)&local_148,param_1,
                         &UE::Math::TVector<double>::ZeroVector);
  }
  dVar2 = (pTVar12->field0_0x0)._s_0.X;
  dVar15 = (pTVar12->field0_0x0)._s_0.Y;
  dVar1 = (pTVar12->field0_0x0)._s_0.Z;
  dVar20 = dVar15 * dVar15 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar20 == __real_3ff0000000000000) {
    local_188._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_188._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
    local_188._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
  else if (dVar9 <= dVar20) {
    dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
    local_188._s_0.X = dVar20 * dVar2;
    local_188._s_0.Y = dVar20 * dVar15;
    auVar21._0_8_ = dVar20 * dVar1;
    auVar21._8_8_ = 0;
    local_188._s_0.Z = auVar21._0_8_;
  }
  else {
    local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar8 = (this->DefaultUpVector).field0_0x0._s_0.X;
  dVar9 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  dVar2 = (this->DefaultUpVector).field0_0x0._s_0.Z;
  local_168._s_0.X = local_188._s_0.X;
  local_168._s_0.Y = local_188._s_0.Y;
  local_168._s_0.Z = local_188._s_0.Z;
  dVar28 = auVar29._0_8_;
  auVar6._4_8_ = auVar21._8_8_;
  auVar6._0_4_ = auVar29._4_4_;
  auVar22._0_8_ = auVar6._0_8_ << 0x20;
  auVar22._8_4_ = auVar29._8_4_;
  auVar22._12_4_ = auVar29._12_4_;
  dVar20 = SUB168(auVar27 | auVar16,8);
  dVar19 = auVar22._8_8_;
  dVar25 = SUB168(auVar27 | auVar16,0);
  dVar5 = dVar2 * dVar20 - dVar9 * dVar28;
  dVar5 = dVar5 + dVar5;
  dVar1 = dVar8 * dVar28 - dVar2 * dVar25;
  dVar1 = dVar1 + dVar1;
  dVar15 = dVar9 * dVar25 - dVar8 * dVar20;
  dVar15 = dVar15 + dVar15;
  local_188._s_0.X = (dVar15 * dVar20 - dVar1 * dVar28) + dVar5 * dVar19 + dVar8;
  local_188._s_0.Y = (dVar5 * dVar28 - dVar15 * dVar25) + dVar1 * dVar19 + dVar9;
  local_188._s_0.Z = (dVar1 * dVar25 - dVar5 * dVar20) + dVar15 * dVar19 + dVar2;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_128,(TVector<double> *)&local_168._s_0,
                       (TVector<double> *)&local_188._s_0);
  UE::Math::TMatrix<double>::ToQuat(this_00,__return_storage_ptr__);
  if (param_2 == World) {
    dVar8 = __return_storage_ptr__->Z;
    dVar9 = __return_storage_ptr__->W;
    dVar19 = __return_storage_ptr__->X;
    dVar25 = __return_storage_ptr__->Y;
    auVar26 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    dVar28 = (this->Transform).Rotation.ZW.m128d_f64[0];
    dVar10 = (this->Transform).Rotation.ZW.m128d_f64[1];
    dVar1 = auVar26._0_8_;
    dVar20 = auVar26._8_8_;
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = dVar20;
    auVar18._12_4_ = auVar26._12_4_;
    dVar2 = dVar1 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar10 * dVar19 +
            dVar20 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar28 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar15 = dVar1 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar10 * dVar25 +
             auVar18._8_8_ * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar28 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar5 = dVar1 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar10 * dVar8 +
            dVar20 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar28 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar1 = dVar1 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar10 * dVar9 +
            dVar20 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar28 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar3._8_4_ = SUB84(dVar15,0);
    auVar3._0_8_ = dVar2;
    auVar3._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    __return_storage_ptr__->X = dVar2;
    __return_storage_ptr__->Y = (double)auVar3._8_8_;
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    __return_storage_ptr__->Z = dVar5;
    __return_storage_ptr__->W = (double)auVar4._8_8_;
  }
  return __return_storage_ptr__;
}

// GetRightVectorAtSplineInputKey @ 1498c5620

TVector<double> * __thiscall
FPCGSplineStruct::GetRightVectorAtSplineInputKey
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtSplineInputKey(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    dVar7 = (this->Transform).Rotation.ZW.m128d_f64[1];
    auVar3 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  }
  return __return_storage_ptr__;
}

// GetRotation @ 1498c57c0

TQuat<double> * __thiscall
FPCGSplineStruct::GetRotation
          (FPCGSplineStruct *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TQuat<double> *pTVar10;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar9 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TQuat<double> *)(*pcVar4)();
        return pTVar10;
      }
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Rotation;
    pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x10 + lVar3);
    pdVar2 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar3);
    pTVar10 = &local_48;
    local_48.X = *pdVar1;
    local_48.Y = pdVar1[1];
    local_48.Z = *pdVar2;
    local_48.W = pdVar2[1];
  }
  else {
    pTVar10 = FSpline::GetRotation(&this->Spline,&local_28,param_1);
  }
  dVar5 = pTVar10->Y;
  dVar6 = pTVar10->Z;
  dVar7 = pTVar10->W;
  __return_storage_ptr__->X = pTVar10->X;
  __return_storage_ptr__->Y = dVar5;
  __return_storage_ptr__->Z = dVar6;
  __return_storage_ptr__->W = dVar7;
  return __return_storage_ptr__;
}

// GetScale @ 1498c58a0

TVector<double> * __thiscall
FPCGSplineStruct::GetScale
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double>_u_0 *pTVar8;
  TVector<double> *pTVar9;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    uVar7 = 0;
    if (param_1 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar3 = *(longlong *)&(this->SplineCurves).Scale;
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 8 + lVar3);
    pTVar8 = &local_38;
    local_38._s_0.X = *pdVar1;
    local_38._s_0.Y = pdVar1[1];
    local_38._s_0.Z = *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3);
  }
  else {
    pTVar8 = &FSpline::GetScale(&this->Spline,&local_20,param_1)->field0_0x0;
  }
  dVar5 = (pTVar8->_s_0).Y;
  dVar2 = (pTVar8->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetScaleAtSplineInputKey @ 1498c5980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FPCGSplineStruct::GetScaleAtSplineInputKey
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  TVector<double> *pTVar3;
  TVector<double>_u_0 local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineCurves).Scale;
    pTVar3 = local_38;
  }
  else {
    this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)
              FSpline::GetSplinePointsScale(&this->Spline);
    pTVar3 = &local_50;
  }
  local_68._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_68._s_0.Y = _UNK_150689688;
  local_68._s_0.Z = __real_3ff0000000000000;
  pTVar3 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                     (this_00,pTVar3,param_1,(TVector<double> *)&local_68._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  dVar1 = (pTVar3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetSegmentBounds @ 1498c5c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FPCGSplineStruct::GetSegmentBounds
          (FPCGSplineStruct *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FInterpCurveVector *pFVar7;
  TBox<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  FInterpCurvePoint<UE::Math::TVector<double>_> *pFVar11;
  uint uVar12;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_78;
  
  if (-1 < param_1) {
    if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
      uVar5 = *(uint *)&(this->SplineCurves).Position.field_0x8;
    }
    else {
      uVar5 = FSpline::GetNumControlPoints(&this->Spline);
    }
    uVar12 = 0;
    uVar9 = uVar5;
    if ((this->bClosedLoop == false) && (uVar9 = uVar5 - 1, (int)(uVar5 - 1) < 0)) {
      uVar9 = uVar12;
    }
    if (param_1 < (int)uVar9) {
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this->Spline).CurrentImplementation != '\0')) {
        pFVar7 = FSpline::GetSplinePointsPosition(&this->Spline);
      }
      else {
        pFVar7 = &(this->SplineCurves).Position;
      }
      if ((PCGSplineStruct::GUseSplineCurves == false) &&
         ((this->Spline).CurrentImplementation != '\0')) {
        iVar6 = FSpline::GetNumControlPoints(&this->Spline);
      }
      else {
        iVar6 = *(int *)&(this->SplineCurves).Position.field_0x8;
      }
      uVar5 = 0;
      if (param_1 != iVar6 + -1) {
        uVar5 = param_1 + 1;
      }
      uVar9 = uVar12;
      if (param_1 < *(int *)&pFVar7->field_0x8) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TBox<double> *)(*pcVar3)();
        return pTVar8;
      }
      pFVar11 = (FInterpCurvePoint<UE::Math::TVector<double>_> *)
                ((longlong)param_1 * 0x58 + *(longlong *)pFVar7);
      if ((int)uVar5 < *(int *)&pFVar7->field_0x8) {
        uVar12 = ~uVar5 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TBox<double> *)(*pcVar3)();
        return pTVar8;
      }
      lVar10 = (longlong)(int)uVar5 * 0x58;
      lVar2 = *(longlong *)pFVar7;
      local_78._0_8_ = *(undefined8 *)(lVar10 + lVar2);
      local_78.OutVal.field0_0x0._s_0.X = (double)((undefined8 *)(lVar10 + lVar2))[1];
      pdVar1 = (double *)(lVar10 + 0x10 + lVar2);
      local_78.OutVal.field0_0x0._s_0.Y = *pdVar1;
      local_78.OutVal.field0_0x0._s_0.Z = pdVar1[1];
      pdVar1 = (double *)(lVar10 + 0x20 + lVar2);
      local_78.ArriveTangent.field0_0x0._s_0.X = *pdVar1;
      local_78.ArriveTangent.field0_0x0._s_0.Y = pdVar1[1];
      pdVar1 = (double *)(lVar10 + 0x30 + lVar2);
      local_78.ArriveTangent.field0_0x0._s_0.Z = *pdVar1;
      local_78.LeaveTangent.field0_0x0._s_0.X = pdVar1[1];
      pdVar1 = (double *)(lVar10 + 0x40 + lVar2);
      local_78.LeaveTangent.field0_0x0._s_0.Y = *pdVar1;
      local_78.LeaveTangent.field0_0x0._s_0.Z = pdVar1[1];
      local_78._80_8_ = *(undefined8 *)(lVar10 + 0x50 + lVar2);
      if (param_1 == iVar6 + -1) {
        local_78.InVal = *(float *)&pFVar7->field_0x14 + pFVar11->InVal;
      }
      local_a8._s_0.X = ___xmm_42a000000000000042a0000000000000;
      local_a8._s_0.Y = _UNK_151820658;
      local_a8._s_0.Z = __real_42a0000000000000;
      local_90._s_0.Z = __real_c2a0000000000000;
      local_90._s_0.X = ___xmm_c2a0000000000000c2a0000000000000;
      local_90._s_0.Y = _UNK_151820678;
      CurveVectorFindIntervalBounds
                (pFVar11,&local_78,(TVector<double> *)&local_a8._s_0,
                 (TVector<double> *)&local_90._s_0);
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_a8._s_0.X;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_a8._s_0.Y;
      __return_storage_ptr__->IsValid = '\x01';
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_a8._s_0.Z;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_90._s_0.X;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_90._s_0.Y;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_90._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetSegmentStartIndexAndKeyAtInputKey @ 1498c6160

TTuple<int,float> __thiscall
FPCGSplineStruct::GetSegmentStartIndexAndKeyAtInputKey(FPCGSplineStruct *this,float param_1)

{
  int iVar1;
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  TTuple<int,float> in_RDX;
  float fVar2;
  float in_XMM2_Da;
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves;
  }
  else {
    this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)
              FSpline::GetSplinePointsPosition(&this->Spline);
  }
  iVar1 = FInterpCurve<UE::Math::TVector<double>_>::GetPointIndexForInputValue(this_00,in_XMM2_Da);
  fVar2 = GetInputKeyAtSegmentStart(this,iVar1);
  *(int *)in_RDX = iVar1;
  *(float *)((longlong)in_RDX + 4) = fVar2;
  return in_RDX;
}

// GetSplineLength @ 1498c6810

double __thiscall FPCGSplineStruct::GetSplineLength(FPCGSplineStruct *this)

{
  float fVar1;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    fVar1 = FSpline::GetSplineLength(&this->Spline);
    return (double)fVar1;
  }
  fVar1 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  return (double)fVar1;
}

// GetSplinePointType @ 1498c6860

EInterpCurveMode __thiscall FPCGSplineStruct::GetSplinePointType(FPCGSplineStruct *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  uint uVar4;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    EVar3 = FSpline::GetSplinePointType(&this->Spline,param_1);
    return EVar3;
  }
  uVar4 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (EInterpCurveMode)
         *(byte *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&(this->SplineCurves).Position);
}

// GetSplinePointsPosition @ 1498c6d50

FInterpCurveVector * __thiscall FPCGSplineStruct::GetSplinePointsPosition(FPCGSplineStruct *this)

{
  FInterpCurveVector *pFVar1;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    pFVar1 = FSpline::GetSplinePointsPosition(&this->Spline);
    return pFVar1;
  }
  return &(this->SplineCurves).Position;
}

// GetSplinePointsRotation @ 1498c6d80

FInterpCurveQuat * __thiscall FPCGSplineStruct::GetSplinePointsRotation(FPCGSplineStruct *this)

{
  FInterpCurveQuat *pFVar1;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    pFVar1 = FSpline::GetSplinePointsRotation(&this->Spline);
    return pFVar1;
  }
  return &(this->SplineCurves).Rotation;
}

// GetSplinePointsScale @ 1498c6db0

FInterpCurveVector * __thiscall FPCGSplineStruct::GetSplinePointsScale(FPCGSplineStruct *this)

{
  FInterpCurveVector *pFVar1;
  
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    pFVar1 = FSpline::GetSplinePointsScale(&this->Spline);
    return pFVar1;
  }
  return &(this->SplineCurves).Scale;
}

// GetTangentAtSplineInputKey @ 1498c78e0

TVector<double> * __thiscall
FPCGSplineStruct::GetTangentAtSplineInputKey
          (FPCGSplineStruct *this,TVector<double> *__return_storage_ptr__,float param_1,Type param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  TVector<double> local_88;
  TVector<double> local_68 [4];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    pTVar6 = FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_68,
                        param_1,&UE::Math::TVector<double>::ZeroVector);
  }
  else {
    pTVar6 = FSpline::EvaluateDerivative(&this->Spline,&local_88,param_1);
  }
  dVar3 = (pTVar6->field0_0x0)._s_0.X;
  dVar4 = (pTVar6->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  dVar1 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_2 == World) {
    dVar3 = dVar3 * (this->Transform).Scale3D.XY.m128d_f64[0];
    dVar4 = dVar4 * (this->Transform).Scale3D.XY.m128d_f64[1];
    uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar7 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    dVar5 = (this->Transform).Rotation.ZW.m128d_f64[1];
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = uVar15;
    auVar18 = *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64;
    dVar1 = dVar1 * (this->Transform).Scale3D.ZW.m128d_f64[0];
    dVar13 = (this->Transform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar9 = blendpd(auVar7,auVar18,2);
    dVar2 = auVar18._0_8_;
    auVar20._0_8_ = auVar19._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar3;
    auVar20._8_8_ = dVar1 * auVar7._8_8_ - dVar2 * dVar4;
    auVar11._8_4_ = SUB84(dVar4,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = uVar15;
    auVar21._8_4_ = SUB84(dVar13,0);
    auVar21._0_8_ = dVar1;
    auVar21._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar7 = blendpd(auVar11,auVar21,2);
    auVar8._0_8_ = auVar7._0_8_ * dVar2 - auVar9._0_8_ * dVar1;
    auVar8._8_8_ = auVar7._8_8_ * auVar18._8_8_ - auVar9._8_8_ * dVar13;
    auVar7 = *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64;
    auVar21 = blendpd(auVar20,auVar8,2);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    dVar13 = auVar20._8_8_ + auVar20._8_8_;
    dVar14 = auVar8._0_8_ + auVar8._0_8_;
    auVar16._8_4_ = SUB84(dVar14,0);
    auVar16._0_8_ = dVar13;
    uVar15 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar16._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar14,0);
    auVar10._0_8_ = dVar13;
    auVar10._12_4_ = uVar15;
    auVar21 = blendpd(auVar7,auVar18,2);
    auVar11 = blendpd(auVar10,auVar22,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar13;
    auVar17._8_8_ = auVar22._0_8_ * auVar7._8_8_ - dVar2 * dVar14;
    auVar9._8_4_ = SUB84(auVar17._8_8_,0);
    auVar9._0_8_ = auVar17._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar12._0_8_ = auVar11._0_8_ * dVar2 - auVar21._0_8_ * auVar22._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar18._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar18 = blendpd(auVar17,auVar12,2);
    dVar4 = dVar5 * dVar14 + dVar4 + auVar12._0_8_;
    auVar7._8_4_ = SUB84(dVar4,0);
    auVar7._0_8_ = dVar5 * dVar13 + dVar3 + auVar9._8_8_;
    auVar7._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * auVar22._0_8_ + dVar1 + auVar18._0_8_;
  }
  return __return_storage_ptr__;
}

// GetTransformAtDistanceAlongSpline @ 1498c96c0

TTransform<double> * __thiscall
FPCGSplineStruct::GetTransformAtDistanceAlongSpline
          (FPCGSplineStruct *this,TTransform<double> *__return_storage_ptr__,double param_1,
          Type param_2,bool param_3)

{
  float fVar1;
  float local_res10 [2];
  
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    local_res10[0] = 0.0;
    fVar1 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,(float)param_1,
                       local_res10);
  }
  else {
    fVar1 = FSpline::GetParameterAtDistance(&this->Spline,(float)param_1);
  }
  GetTransformAtSplineInputKey(this,__return_storage_ptr__,fVar1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetTransformAtSplineInputKey @ 1498c9750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FPCGSplineStruct::GetTransformAtSplineInputKey
          (FPCGSplineStruct *this,TTransform<double> *__return_storage_ptr__,float param_1,
          Type param_2,bool param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TVector<double> *pTVar7;
  FInterpCurve<UE::Math::TVector<double>_> *this_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_158 [32];
  TVector<double>_u_0 local_138;
  TVector<double> local_120;
  TQuat<double> local_108;
  TVector<double> local_e8;
  TVector<double> local_d0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((PCGSplineStruct::GUseSplineCurves) || ((this->Spline).CurrentImplementation == '\0')) {
    pTVar7 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                       ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
                        (TVector<double> *)&local_138._s_0,param_1,
                        &UE::Math::TVector<double>::ZeroVector);
  }
  else {
    pTVar7 = FSpline::Evaluate(&this->Spline,&local_120,param_1);
  }
  local_120.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
  uVar3 = *(undefined4 *)&pTVar7->field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  GetQuaternionAtSplineInputKey(this,&local_108,param_1,Local);
  dVar10 = __real_3ff0000000000000;
  uVar11 = ___xmm_3ff00000000000003ff0000000000000;
  uVar12 = _UNK_150689684;
  uVar13 = _UNK_150689688;
  uVar14 = _UNK_15068968c;
  if (param_3) {
    if ((PCGSplineStruct::GUseSplineCurves == false) &&
       ((this->Spline).CurrentImplementation != '\0')) {
      this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)
                FSpline::GetSplinePointsScale(&this->Spline);
      pTVar7 = &local_d0;
    }
    else {
      this_00 = (FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineCurves).Scale;
      pTVar7 = &local_e8;
    }
    local_138._s_0.X = (double)CONCAT44(_UNK_150689684,___xmm_3ff00000000000003ff0000000000000);
    local_138._s_0.Y = (double)CONCAT44(_UNK_15068968c,_UNK_150689688);
    local_138._s_0.Z = __real_3ff0000000000000;
    pTVar7 = FInterpCurve<UE::Math::TVector<double>_>::Eval
                       (this_00,pTVar7,param_1,(TVector<double> *)&local_138._s_0);
    dVar10 = (pTVar7->field0_0x0)._s_0.Z;
    uVar11 = *(undefined4 *)&pTVar7->field0_0x0;
    uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
    uVar14 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Y;
  auVar1._4_8_ = local_108.Y;
  auVar1._0_4_ = uVar4;
  auVar8._0_8_ = auVar1._0_8_ << 0x20;
  auVar8._8_4_ = uVar5;
  auVar8._12_4_ = uVar6;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Z;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.W;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = uVar3;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = uVar4;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = auVar8._8_8_;
  auVar2._4_8_ = auVar8._8_8_;
  auVar2._0_4_ = uVar12;
  auVar9._0_8_ = auVar2._0_8_ << 0x20;
  auVar9._8_4_ = uVar13;
  auVar9._12_4_ = uVar14;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_120.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar11;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar12;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = auVar9._8_8_;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar10;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  if (param_2 == World) {
    local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_b8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_b8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_b8,__return_storage_ptr__,&this->Transform);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_b8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_b8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_b8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_b8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_b8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_b8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_b8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_b8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_b8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_b8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_b8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_b8.Scale3D.ZW.m128d_f64[1];
  }
  return __return_storage_ptr__;
}

// Initialize @ 1498cad30

void __thiscall
FPCGSplineStruct::Initialize
          (FPCGSplineStruct *this,TArray<FSplinePoint,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,TTransform<double> *param_3,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_4)

{
  FSpline *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  bool bVar5;
  undefined8 uVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar8;
  TBoxSphereBounds<double,double> local_48;
  
  dVar4 = (param_3->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_3->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar4;
  uVar6 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = (double)uVar6;
  (this->DefaultUpVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = 10;
  this->bClosedLoop = param_2;
  if ((param_4->ArrayNum == 0) || (param_1->ArrayNum != param_4->ArrayNum)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0;
  if (bVar5) {
    pTVar8 = param_4;
  }
  AddPoints(this,param_1,true,pTVar8);
  pFVar1 = &this->Spline;
  if ((PCGSplineStruct::GUseSplineCurves == false) && (pFVar1->CurrentImplementation != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    pTVar7 = PCGSplineStruct::CalcBounds(&local_48,&this->SplineCurves,this->bClosedLoop,param_3);
    bVar2 = this->bClosedLoop;
    dVar4 = (pTVar7->Origin).field0_0x0._s_0.Y;
    (this->Bounds).Origin.field0_0x0._s_0.X = (pTVar7->Origin).field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Z = (pTVar7->Origin).field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar4;
    dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (pTVar7->BoxExtent).field0_0x0._s_0.Y;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    (this->Bounds).SphereRadius = pTVar7->SphereRadius;
    pTVar7 = PCGSplineStruct::CalcBounds
                       (&local_48,&this->SplineCurves,bVar2,&UE::Math::TTransform<double>::Identity)
    ;
  }
  else {
    pTVar7 = PCGSplineStruct::CalcBounds(&local_48,pFVar1,this->bClosedLoop,param_3);
    bVar2 = this->bClosedLoop;
    dVar4 = (pTVar7->Origin).field0_0x0._s_0.Y;
    (this->Bounds).Origin.field0_0x0._s_0.X = (pTVar7->Origin).field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Y = dVar4;
    dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.X;
    (this->Bounds).Origin.field0_0x0._s_0.Z = (pTVar7->Origin).field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar4;
    dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.Z;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Y = (pTVar7->BoxExtent).field0_0x0._s_0.Y;
    (this->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    (this->Bounds).SphereRadius = pTVar7->SphereRadius;
    pTVar7 = PCGSplineStruct::CalcBounds
                       (&local_48,pFVar1,bVar2,&UE::Math::TTransform<double>::Identity);
  }
  dVar4 = (pTVar7->Origin).field0_0x0._s_0.Y;
  (this->LocalBounds).Origin.field0_0x0._s_0.X = (pTVar7->Origin).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.X;
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = (pTVar7->Origin).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar4;
  dVar4 = (pTVar7->BoxExtent).field0_0x0._s_0.Z;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = (pTVar7->BoxExtent).field0_0x0._s_0.Y;
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
  (this->LocalBounds).SphereRadius = pTVar7->SphereRadius;
  if (!bVar5) {
    (this->ControlPointsEntryKeys).ArrayNum = 0;
    if ((this->ControlPointsEntryKeys).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ControlPointsEntryKeys).AllocatorInstance,0,
                 &(this->ControlPointsEntryKeys).ArrayMax);
    }
  }
  pFVar3 = (param_4->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// Initialize @ 1498caf60

void __thiscall FPCGSplineStruct::Initialize(FPCGSplineStruct *this,USplineComponent *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  FSplineCurves *pFVar8;
  FSpline *pFVar9;
  double *pdVar10;
  void *local_f8 [3];
  void *local_e0;
  void *local_c8;
  void *local_b0;
  FSpline local_90;
  undefined1 local_40 [56];
  
  if (param_1 == (USplineComponent *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSplineComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGSplineStruct.cpp"
                       ,0x89,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = USplineComponent::GetSplineCurves(param_1,(FSplineCurves *)local_f8);
  FSplineCurves::operator=(&this->SplineCurves,pFVar8);
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if (local_f8[0] != (void *)0x0) {
    FMemory::Free(local_f8[0]);
  }
  pFVar9 = USplineComponent::GetSpline(param_1,&local_90);
  FSpline::operator=(&this->Spline,pFVar9);
  FSpline::~FSpline(&local_90);
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)param_1->_padding_;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_1->DefaultUpVector).field0_0x0._s_0.Y;
  (this->DefaultUpVector).field0_0x0._s_0.X = (param_1->DefaultUpVector).field0_0x0._s_0.X;
  (this->DefaultUpVector).field0_0x0._s_0.Y = dVar5;
  (this->DefaultUpVector).field0_0x0._s_0.Z = (param_1->DefaultUpVector).field0_0x0._s_0.Z;
  this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  bVar7 = USplineComponent::IsClosedLoop(param_1);
  this->bClosedLoop = bVar7;
  dVar5 = (double)param_1->_padding_;
  (this->Bounds).Origin.field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->Bounds).Origin.field0_0x0._s_0.Y = dVar5;
  dVar5 = (double)param_1->_padding_;
  (this->Bounds).Origin.field0_0x0._s_0.Z = (double)param_1->_padding_;
  (this->Bounds).BoxExtent.field0_0x0._s_0.X = dVar5;
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar6 = param_1->_padding_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 8) = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 0xc) = uVar3;
  *(int *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 0x10) = (int)lVar6;
  *(undefined4 *)((longlong)&(this->Bounds).BoxExtent.field0_0x0 + 0x14) = uVar4;
  (this->Bounds).SphereRadius = (double)param_1->_padding_;
  pdVar10 = (double *)(**(code **)(param_1->_padding_ + 0x5a0))(param_1,local_40);
  dVar5 = pdVar10[1];
  (this->LocalBounds).Origin.field0_0x0._s_0.X = *pdVar10;
  (this->LocalBounds).Origin.field0_0x0._s_0.Y = dVar5;
  dVar5 = pdVar10[3];
  (this->LocalBounds).Origin.field0_0x0._s_0.Z = pdVar10[2];
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dVar5;
  dVar5 = pdVar10[5];
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Y = pdVar10[4];
  (this->LocalBounds).BoxExtent.field0_0x0._s_0.Z = dVar5;
  piVar1 = &(this->ControlPointsEntryKeys).ArrayMax;
  (this->LocalBounds).SphereRadius = pdVar10[6];
  (this->ControlPointsEntryKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ControlPointsEntryKeys).AllocatorInstance,0,piVar1);
  }
  return;
}

// PostSerialize @ 1498d29b0

void __thiscall FPCGSplineStruct::PostSerialize(FPCGSplineStruct *this,FArchive *param_1)

{
  return;
}

// SetArriveTangent @ 1498deed0

void __thiscall
FPCGSplineStruct::SetArriveTangent(FPCGSplineStruct *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)&param_2->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->SplineCurves).Position;
  puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 0x20 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(double *)((longlong)param_1 * 0x58 + 0x30 + lVar3) = dVar2;
  FSpline::SetInTangent(&this->Spline,param_1,param_2);
  return;
}

// SetLeaveTangent @ 1498df0f0

void __thiscall
FPCGSplineStruct::SetLeaveTangent(FPCGSplineStruct *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)&param_2->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->SplineCurves).Position;
  puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 0x38 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(double *)((longlong)param_1 * 0x58 + 0x48 + lVar3) = dVar2;
  FSpline::SetOutTangent(&this->Spline,param_1,param_2);
  return;
}

// SetLocation @ 1498df1c0

void __thiscall
FPCGSplineStruct::SetLocation(FPCGSplineStruct *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)&param_2->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->SplineCurves).Position;
  puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3) = dVar2;
  FSpline::SetLocation(&this->Spline,param_1,param_2);
  return;
}

// SetRotation @ 1498f5620

void __thiscall
FPCGSplineStruct::SetRotation(FPCGSplineStruct *this,int param_1,TQuat<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  
  uVar5 = *(undefined4 *)&param_2->X;
  uVar6 = *(undefined4 *)((longlong)&param_2->X + 4);
  uVar7 = *(undefined4 *)&param_2->Y;
  uVar8 = *(undefined4 *)((longlong)&param_2->Y + 4);
  dVar9 = param_2->Z;
  dVar10 = param_2->W;
  uVar12 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Rotation.field_0x8) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->SplineCurves).Rotation;
  puVar1 = (undefined4 *)((longlong)param_1 * 0x80 + 0x10 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  pdVar2 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar3);
  *pdVar2 = dVar9;
  pdVar2[1] = dVar10;
  FSpline::SetRotation(&this->Spline,param_1,param_2);
  return;
}

// SetScale @ 1498f56e0

void __thiscall
FPCGSplineStruct::SetScale(FPCGSplineStruct *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar5 = *(undefined4 *)&param_2->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Scale.field_0x8) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->SplineCurves).Scale;
  puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3) = dVar2;
  FSpline::SetScale(&this->Spline,param_1,param_2);
  return;
}

// SetSplinePointType @ 1498f57b0

void __thiscall
FPCGSplineStruct::SetSplinePointType(FPCGSplineStruct *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->SplineCurves).Position.field_0x8) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(char *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&(this->SplineCurves).Position) =
       (char)param_2;
  FSpline::SetSplinePointType(&this->Spline,param_1,param_2);
  return;
}

// ShouldUseSplineCurves @ 1498f63a0

bool __thiscall FPCGSplineStruct::ShouldUseSplineCurves(FPCGSplineStruct *this)

{
  if ((!PCGSplineStruct::GUseSplineCurves) && ((this->Spline).CurrentImplementation != '\0')) {
    return false;
  }
  return true;
}

// UpdateSpline @ 1498f9b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPCGSplineStruct::UpdateSpline(FPCGSplineStruct *this)

{
  FUpdateSplineParams local_38;
  
  local_38.bClosedLoop = this->bClosedLoop;
  local_38.ReparamStepsPerSegment = this->ReparamStepsPerSegment;
  local_38.bStationaryEndpoints = false;
  local_38.bLoopPositionOverride = false;
  local_38.LoopPosition = 0.0;
  local_38.Scale3D.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_38.Scale3D.field0_0x0._s_0.Y = _UNK_150689688;
  local_38.Scale3D.field0_0x0._s_0.Z = __real_3ff0000000000000;
  FSplineCurves::UpdateSpline
            (&this->SplineCurves,local_38.bClosedLoop,false,local_38.ReparamStepsPerSegment,false,
             0.0,&local_38.Scale3D);
  FSpline::UpdateSpline(&this->Spline,&local_38);
  return;
}

