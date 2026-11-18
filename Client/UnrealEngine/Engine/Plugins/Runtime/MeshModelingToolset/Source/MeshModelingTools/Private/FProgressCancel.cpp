// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// <lambda_invoker_cdecl> @ 14cc056f0

bool __cdecl FProgressCancel::<lambda_25_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// FProgressCancel @ 14cc1bad0

FProgressCancel * __thiscall FProgressCancel::FProgressCancel(FProgressCancel *this)

{
  undefined1 *puVar1;
  
  this->WasCancelled = false;
  (this->Progress).CurrentMax = 1.0;
  (this->Progress).ScopeDepth = 0;
  (this->Progress).CurrentMin = 0.0;
  FText::FText(&(this->Progress).Message);
  FText::FText(&this->ProgressMessage);
  this->MaxMessageDepth = -1;
  this->ProgressFraction = (atomic<float>)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MessageCS,4000);
  *(undefined8 *)&this->CancelF = 0;
  *(undefined8 *)&(this->CancelF).field_0x28 = 0;
  *(undefined ***)&(this->CancelF).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CancelF).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CancelF =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  (this->Warnings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Warnings).ArrayNum = 0;
  (this->Warnings).ArrayMax = 0;
  return this;
}

