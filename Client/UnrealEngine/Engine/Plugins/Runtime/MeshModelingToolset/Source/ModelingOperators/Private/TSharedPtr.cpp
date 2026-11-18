// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// operator*<UE::Geometry::FDynamicMesh3_const_> @ 14c9417b0

FDynamicMesh3 * __thiscall
TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1>::operator*<UE::Geometry::FDynamicMesh3_const_>
          (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  if (this->Object != (FDynamicMesh3 *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Geometry::FPolygroupSet> @ 14c941800

FPolygroupSet * __thiscall
TSharedPtr<UE::Geometry::FPolygroupSet,1>::operator*<UE::Geometry::FPolygroupSet>
          (TSharedPtr<UE::Geometry::FPolygroupSet,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPolygroupSet *pFVar3;
  
  if (this->Object != (FPolygroupSet *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPolygroupSet *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<UE::Geometry::FDynamicMesh3> @ 14c941850

FDynamicMesh3 * __thiscall
TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
          (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  if (this->Object != (FDynamicMesh3 *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14c94a530

FDynamicSubmesh3 * __thiscall
TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1>::operator->
          (TSharedPtr<UE::Geometry::FDynamicSubmesh3_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicSubmesh3 *pFVar3;
  
  if (this->Object != (FDynamicSubmesh3 *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicSubmesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14c94a580

FFFDLattice * __thiscall
TSharedPtr<UE::Geometry::FFFDLattice_const_,1>::operator->
          (TSharedPtr<UE::Geometry::FFFDLattice_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FFFDLattice *pFVar3;
  
  if (this->Object != (FFFDLattice *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFFDLattice *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14c94a5d0

FDynamicMesh3 * __thiscall
TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
          (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  if (this->Object != (FDynamicMesh3 *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

