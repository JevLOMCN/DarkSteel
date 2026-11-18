// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// operator() @ 14337c210

float __thiscall
UE::Geometry::TMatrix3<float>::operator()(TMatrix3<float> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((2 < (uint)param_1) || (2 < (uint)param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Row >= 0 && Row < 3 && Col >= 0 && Col < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (param_1 == 0) {
    if (2 < (uint)param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    return (this->Row0).field0_0x0.XYZ[param_2];
  }
  if (param_1 != 1) {
    if (2 < (uint)param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    return (this->Row2).field0_0x0.XYZ[param_2];
  }
  if (2 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (this->Row1).field0_0x0.XYZ[param_2];
}

// operator() @ 14337c330

double __thiscall
UE::Geometry::TMatrix3<double>::operator()(TMatrix3<double> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((2 < (uint)param_1) || (2 < (uint)param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Row >= 0 && Row < 3 && Col >= 0 && Col < 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MatrixTypes.h"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  if (param_1 == 0) {
    if (2 < (uint)param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar3 = (double)(*pcVar1)();
        return dVar3;
      }
    }
    return (this->Row0).field0_0x0.XYZ[param_2];
  }
  if (param_1 != 1) {
    if (2 < (uint)param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar3 = (double)(*pcVar1)();
        return dVar3;
      }
    }
    return (this->Row2).field0_0x0.XYZ[param_2];
  }
  if (2 < (uint)param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar3 = (double)(*pcVar1)();
      return dVar3;
    }
  }
  return (this->Row1).field0_0x0.XYZ[param_2];
}

