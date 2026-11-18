// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// Initialize @ 14a1670d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMStructTestBase<FRigVMExecuteContext>::Initialize
          (FRigVMStructTestBase<FRigVMExecuteContext> *this)

{
  UScriptStruct *pUVar1;
  FRigVMExtendedExecuteContext *pFVar2;
  FRigVMExecuteContext *pFVar3;
  undefined1 auStack_2b8 [32];
  FRigVMExtendedExecuteContext local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pUVar1 = FRigVMExecuteContext::StaticStruct();
  pFVar2 = FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext(&local_298,pUVar1);
  FRigVMExtendedExecuteContext::operator=(&this->ExtendedExecuteContext,pFVar2);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&local_298);
  pFVar3 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
                     (&this->ExtendedExecuteContext);
  FRigVMExecuteContext::operator=(this->ExecuteContext,pFVar3);
  return;
}

// ~FRigVMStructTestBase<FRigVMExecuteContext> @ 14a191550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMStructTestBase<FRigVMExecuteContext>::~FRigVMStructTestBase<FRigVMExecuteContext>
          (FRigVMStructTestBase<FRigVMExecuteContext> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FRigVMStructTestBase_UFRigVMExecuteContext____6B_;
  (this->DefaultExecuteContext)._padding_ = (longlong)&___7FRigVMExecuteContext__6B_;
  pFVar1 = (this->DefaultExecuteContext).AdditionalTraitMemoryHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultExecuteContext).Traits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultExecuteContext).RuntimeSettings.LogFunction.SharedReferenceCount.
             ReferenceController);
  FRigVMExtendedExecuteContext::~FRigVMExtendedExecuteContext(&this->ExtendedExecuteContext);
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  return;
}

