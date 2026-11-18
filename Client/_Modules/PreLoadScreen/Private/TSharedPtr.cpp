// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 4

// operator=<FHittestGrid> @ 145abcdb0

TSharedPtr<FHittestGrid,1> * __thiscall
TSharedPtr<FHittestGrid,1>::operator=<FHittestGrid>
          (TSharedPtr<FHittestGrid,1> *this,TRawPtrProxy<FHittestGrid> *param_1)

{
  FHittestGrid *pFVar1;
  TSharedPtr<FHittestGrid,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFHittestGrid__U__DefaultDeleter_VFHittestGrid___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FHittestGrid *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 145ac0250

IPreLoadScreen * __thiscall
TSharedPtr<IPreLoadScreen,1>::operator->(TSharedPtr<IPreLoadScreen,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IPreLoadScreen *pIVar3;
  
  if (this->Object != (IPreLoadScreen *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPreLoadScreen *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 145ac02a0

SDPIScaler * __thiscall TSharedPtr<SDPIScaler,1>::operator->(TSharedPtr<SDPIScaler,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SDPIScaler *pSVar3;
  
  if (this->Object != (SDPIScaler *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SDPIScaler *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

// operator-> @ 145ac02f0

SVirtualWindow * __thiscall
TSharedPtr<SVirtualWindow,1>::operator->(TSharedPtr<SVirtualWindow,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SVirtualWindow *pSVar3;
  
  if (this->Object != (SVirtualWindow *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SVirtualWindow *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

