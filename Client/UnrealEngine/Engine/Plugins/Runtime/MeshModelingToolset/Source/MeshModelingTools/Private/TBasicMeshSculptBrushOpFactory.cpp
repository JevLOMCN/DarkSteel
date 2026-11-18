// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 16

// Build @ 14cce7400

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FEraseSculptLayerBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FEraseSculptLayerBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FEraseSculptLayerBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7480

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FFlattenBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FFlattenBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FFlattenBrushOp__6B_;
    puVar2[0xb] = 0x3ff0000000000000;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7510

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FGroupEraseBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FGroupEraseBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FGroupEraseBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7590

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FInflateBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FInflateBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FInflateBrushOp__6B_;
    puVar2[0xb] = 0x4000000000000000;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7620

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FMoveBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FMoveBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FMoveBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce76a0

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FPinchBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FPinchBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FPinchBrushOp__6B_;
    puVar2[0xb] = 0x4008000000000000;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7740

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FPlaneBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FPlaneBrushOp> *this)

{
  FPlaneBrushOp *pFVar1;
  FMeshSculptBrushOp *in_RDX;
  
  pFVar1 = ::operator_new(0x98);
  if (pFVar1 != (FPlaneBrushOp *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->BrushSpeedTuning = 0.0;
    (pFVar1->StrokePlane).Origin.field0_0x0._s_0.X = 0.0;
    (pFVar1->StrokePlane).Origin.field0_0x0._s_0.Y = 0.0;
    (pFVar1->StrokePlane).Origin.field0_0x0._s_0.Z = 0.0;
    (pFVar1->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
    (pFVar1->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
    (pFVar1->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
    (pFVar1->StrokePlane).Rotation.field0_0x0._s_0.W = 0.0;
    pFVar1 = FPlaneBrushOp::FPlaneBrushOp(pFVar1);
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce77c0

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FPullKelvinletBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FPullKelvinletBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    puVar2[0xd] = 0x3ff0000000000000;
    *puVar2 = &___7FPullKelvinletBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7850

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FScaleKelvinletBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FScaleKelvinletBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    puVar2[0xd] = 0x3ff0000000000000;
    *puVar2 = &___7FScaleKelvinletBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce78e0

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FSharpPullKelvinletBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FSharpPullKelvinletBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    puVar2[0xd] = 0x3ff0000000000000;
    *puVar2 = &___7FSharpPullKelvinletBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7970

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<UE::Geometry::FSingleNormalSculptBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<UE::Geometry::FSingleNormalSculptBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FSingleNormalSculptBrushOp_Geometry_UE__6B_;
    puVar2[0xb] = 0x4018000000000000;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7a00

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FSmoothBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FSmoothBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FSmoothBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7a80

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FSmoothFillBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FSmoothFillBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x58);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FSmoothFillBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7b00

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<FTwistKelvinletBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<FTwistKelvinletBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    puVar2[0xd] = 0x3ff0000000000000;
    *puVar2 = &___7FTwistKelvinletBrushOp__6B_;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7b90

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<UE::Geometry::FVertexColorSmoothBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<UE::Geometry::FVertexColorSmoothBrushOp> *this)

{
  FVertexColorSmoothBrushOp *pFVar1;
  FMeshSculptBrushOp *in_RDX;
  
  pFVar1 = ::operator_new(0xc0);
  if (pFVar1 != (FVertexColorSmoothBrushOp *)0x0) {
    memset(pFVar1,0,0xc0);
    pFVar1 = UE::Geometry::FVertexColorSmoothBrushOp::FVertexColorSmoothBrushOp(pFVar1);
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

// Build @ 14cce7c00

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> __thiscall
TBasicMeshSculptBrushOpFactory<UE::Geometry::FVertexColorSoftenBrushOp>::Build
          (TBasicMeshSculptBrushOpFactory<UE::Geometry::FVertexColorSoftenBrushOp> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  FMeshSculptBrushOp *in_RDX;
  
  puVar2 = ::operator_new(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    puVar2[4] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    puVar2[5] = uVar1;
    puVar2[6] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0x3ff0000000000000;
    *puVar2 = &___7FVertexColorSoftenBrushOp_Geometry_UE__6B_;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    in_RDX->_padding_ = (longlong)puVar2;
    return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>)in_RDX;
}

