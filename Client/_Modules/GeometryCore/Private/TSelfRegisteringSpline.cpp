// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// <lambda_invoker_cdecl> @ 14355b6a0

TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TBSpline<UE::Math::TVector<double>,3> *pTVar1;
  TBSpline<UE::Math::TVector<double>,3> *in_RCX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TBSpline<UE::Math::TVector<double>,3> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    (pTVar1->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->Values).ArrayNum = 0;
    (pTVar1->Values).ArrayMax = 0;
    (pTVar1->PairKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->PairKnots).ArrayNum = 0;
    (pTVar1->PairKnots).ArrayMax = 0;
    (pTVar1->FlatKnots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->FlatKnots).ArrayNum = 0;
    (pTVar1->FlatKnots).ArrayMax = 0;
    pTVar1->bFlatKnotsCacheDirty = false;
    pTVar1->bIsClosedLoop = false;
    pTVar1->bClampEnds = false;
    *(undefined5 *)&pTVar1->field_0x4b = 0;
    pTVar1 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::
             TBSpline<UE::Math::TVector<double>,3>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 14355b700

TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> *pTVar1;
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x100);
  if (pTVar1 != (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                 *)0x0) {
    memset(pTVar1,0,0x100);
    pTVar1 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       (pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 14355b770

TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TPolyBezierSpline<UE::Math::TVector<double>_> *pTVar1;
  TPolyBezierSpline<UE::Math::TVector<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 != (TPolyBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->LastEvaluatedSegment = 0;
    pTVar1 = UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
             TPolyBezierSpline<UE::Math::TVector<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 14355b7d0

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Tension = 0;
    (pTVar1->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->TangentModes).ArrayNum = 0;
    (pTVar1->TangentModes).ArrayMax = 0;
    *(undefined8 *)&pTVar1->bStationaryEndpoint = 0;
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
             TTangentBezierSpline<UE::Math::TVector<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
          )in_RCX;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_> @ 1435689c0

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>,UE::Math::TVector<double>_>
           *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_> @ 1435689d0

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>
           *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_> @ 1435689e0

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
           *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_> @ 1435689f0

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,UE::Math::TVector<double>_>
           *this)

{
  return;
}

