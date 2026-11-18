// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// GetFunction @ 14a7519e0

UFunction * __thiscall UE::MVVM::TMVVMFieldVariant<1>::GetFunction(TMVVMFieldVariant<1> *this)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  
  if (this->Type == Function) {
    return (this->Binding).Function;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EVariantType::Function",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                     ,0x58,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UFunction *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Binding).Function;
}

// GetFunction @ 14a751a30

UFunction * __thiscall UE::MVVM::TMVVMFieldVariant<0>::GetFunction(TMVVMFieldVariant<0> *this)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  
  if (this->Type == Function) {
    return (this->Binding).Function;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EVariantType::Function",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                     ,0x58,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UFunction *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Binding).Function;
}

// GetProperty @ 14a754280

FProperty * __thiscall UE::MVVM::TMVVMFieldVariant<0>::GetProperty(TMVVMFieldVariant<0> *this)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  
  if (this->Type == Property) {
    return (FProperty *)(this->Binding).Function;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EVariantType::Property",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                     ,0x47,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProperty *)(*pcVar1)();
    return pFVar3;
  }
  return (FProperty *)(this->Binding).Function;
}

