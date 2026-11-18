// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// GetRHI @ 145db9b90

FRHIResource * __thiscall FRDGResource::GetRHI(FRDGResource *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIResource *pFVar3;
  
  if ((((GRDGValidation != 0) && (this->bAllowRHIAccess == 0)) && (!GRDGAllowRHIAccess)) &&
     (!GRDGAllowRHIAccessAsync)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAllowRHIAccess || GRDGAllowRHIAccess || GRDGAllowRHIAccessAsync",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x2c,
                       L"Accessing the RHI resource of %s at this time is not allowed. If you hit this check in pass, that is due to this resource not being referenced in the parameters of your pass."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIResource *)(*pcVar1)();
      return pFVar3;
    }
    return this->ResourceRHI;
  }
  return this->ResourceRHI;
}

// MarkResourceAsUsed @ 145dc1de0

void __thiscall FRDGResource::MarkResourceAsUsed(FRDGResource *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (GRDGValidation == 0) {
    return;
  }
  if ((((GRDGValidation != 0) && (this->bAllowRHIAccess == 0)) && (!GRDGAllowRHIAccess)) &&
     (!GRDGAllowRHIAccessAsync)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAllowRHIAccess || GRDGAllowRHIAccess || GRDGAllowRHIAccessAsync",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x2c,
                       L"Accessing the RHI resource of %s at this time is not allowed. If you hit this check in pass, that is due to this resource not being referenced in the parameters of your pass."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ValidateRHIAccess @ 145dd7730

void __thiscall FRDGResource::ValidateRHIAccess(FRDGResource *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((((GRDGValidation != 0) && (this->bAllowRHIAccess == 0)) && (!GRDGAllowRHIAccess)) &&
     (!GRDGAllowRHIAccessAsync)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAllowRHIAccess || GRDGAllowRHIAccess || GRDGAllowRHIAccessAsync",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphValidation.cpp"
                       ,0x2c,
                       L"Accessing the RHI resource of %s at this time is not allowed. If you hit this check in pass, that is due to this resource not being referenced in the parameters of your pass."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

