// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// ~TSharedPtr<FManagedArrayCollection_const_,1> @ 14db9e940

void __thiscall
TSharedPtr<FManagedArrayCollection_const_,1>::~TSharedPtr<FManagedArrayCollection_const_,1>
          (TSharedPtr<FManagedArrayCollection_const_,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 14dba0dc0

FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> * __thiscall
TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>::
operator->(TSharedPtr<Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>,1>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *pFVar3;
  
  if (this->Object != (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14dba0e10

FXPBDAnisotropicSpringConstraints * __thiscall
TSharedPtr<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1>::operator->
          (TSharedPtr<Chaos::Softs::FXPBDAnisotropicSpringConstraints,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FXPBDAnisotropicSpringConstraints *pFVar3;
  
  if (this->Object != (FXPBDAnisotropicSpringConstraints *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FXPBDAnisotropicSpringConstraints *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14dba0e60

FXPBDBendingConstraints * __thiscall
TSharedPtr<Chaos::Softs::FXPBDBendingConstraints,1>::operator->
          (TSharedPtr<Chaos::Softs::FXPBDBendingConstraints,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FXPBDBendingConstraints *pFVar3;
  
  if (this->Object != (FXPBDBendingConstraints *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FXPBDBendingConstraints *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

