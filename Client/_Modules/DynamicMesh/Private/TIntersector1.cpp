// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// TIntersector1<double> @ 14c7b1d90

TIntersector1<double> * __thiscall
UE::Geometry::TIntersector1<double>::TIntersector1<double>
          (TIntersector1<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  TIntersector1<double> *pTVar3;
  
  (this->Intersections).Min = 0.0;
  (this->Intersections).Max = 0.0;
  this->NumIntersections = 0;
  (this->V).Max = param_4;
  (this->U).Min = param_1;
  (this->U).Max = param_2;
  (this->V).Min = param_3;
  if (param_2 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("u0 <= u1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Intersection\\Intersector1.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntersector1<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (param_4 < param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("v0 <= v1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Intersection\\Intersector1.h"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntersector1<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// Find @ 14c805e60

bool __thiscall UE::Geometry::TIntersector1<double>::Find(TIntersector1<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->V).Min;
  dVar2 = (this->U).Max;
  if (dVar1 <= dVar2) {
    dVar4 = (this->V).Max;
    dVar3 = (this->U).Min;
    if (dVar3 <= dVar4) {
      if (dVar2 <= dVar1) {
        (this->Intersections).Min = dVar2;
        this->NumIntersections = 1;
        return true;
      }
      if (dVar3 < dVar4) {
        if (dVar3 <= dVar1) {
          dVar3 = dVar1;
        }
        if (dVar2 <= dVar4) {
          dVar4 = dVar2;
        }
        this->NumIntersections = 2;
        (this->Intersections).Min = dVar3;
        (this->Intersections).Max = dVar4;
        if (dVar3 != dVar4) {
          return true;
        }
        this->NumIntersections = 1;
        return true;
      }
      (this->Intersections).Min = dVar3;
      this->NumIntersections = 1;
      return true;
    }
  }
  this->NumIntersections = 0;
  return false;
}

