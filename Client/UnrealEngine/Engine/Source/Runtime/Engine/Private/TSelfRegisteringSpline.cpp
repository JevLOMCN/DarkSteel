// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// <lambda_invoker_cdecl> @ 147a10a80

TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::RegisterType'::__l2
         ::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TBSpline<float,3> *pTVar1;
  TBSpline<float,3> *in_RCX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TBSpline<float,3> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TBSpline<float,3>::TBSpline<float,3>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TBSpline<float,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<float,3>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10ae0

TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TBSpline<UE::Math::TQuat<double>,3> *pTVar1;
  TBSpline<UE::Math::TQuat<double>,3> *in_RCX;
  
  pTVar1 = ::operator_new(0x50);
  if (pTVar1 != (TBSpline<UE::Math::TQuat<double>,3> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::
             TBSpline<UE::Math::TQuat<double>,3>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,TDefaultDelete<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10b40

TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::RegisterType'
         ::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TPolyBezierSpline<float> *pTVar1;
  TPolyBezierSpline<float> *in_RCX;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 != (TPolyBezierSpline<float> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TPolyBezierSpline<float>::TPolyBezierSpline<float>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<float>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10ba0

TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TPolyBezierSpline<UE::Math::TQuat<double>_> *pTVar1;
  TPolyBezierSpline<UE::Math::TQuat<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x60);
  if (pTVar1 != (TPolyBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>::
             TPolyBezierSpline<UE::Math::TQuat<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10c00

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::
         RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<float> *pTVar1;
  TTangentBezierSpline<float> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<float> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::TTangentBezierSpline<float>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10c80

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
         ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<UE::Math::TQuat<double>_> *pTVar1;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
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
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
             TTangentBezierSpline<UE::Math::TQuat<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
          )in_RCX;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float> @ 147a290e0

void __thiscall
UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>::
~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<float,3>,float> *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_> @ 147a290f0

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>,UE::Math::TQuat<double>_>
           *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float> @ 147a29100

void __thiscall
UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>::
~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<float>,float> *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_> @ 147a29110

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
           *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float> @ 147a29120

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>::
~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<float>,float> *this)

{
  return;
}

// ~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_> @ 147a29130

void __thiscall
UE::Geometry::Spline::
TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
::
~TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
          (TSelfRegisteringSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,UE::Math::TQuat<double>_>
           *this)

{
  return;
}

