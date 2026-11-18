// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// operator() @ 145cd2f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::
<lambda_1>::operator()(void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  TRefCountPtr<FRHITexture> TVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar5 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)this + 0x28);
  }
  (**(code **)(*plVar5 + 8))();
  (*pcVar1)(param_1);
  piVar3 = (int *)(**(code **)(*(longlong *)((param_1->MemManager).Top + 0x28) + 8))();
  if ((*piVar3 == 0) || (piVar3[1] == 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<241696290990195204>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x204,"Texture->IsBarrierTrackingInitialized()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar4.Reference;
    }
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

