// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FScope @ 145d0aeb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScope * __thiscall GPUMessage::FScope::FScope(FScope *this,FRDGBuilder *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScope *pFVar3;
  
  this->GraphBuilder = param_1;
  if (bRecursionCheck != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRecursionCheck",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GPUMessaging.cpp"
                       ,0x11b,
                       L"GPUMessage::FScope (GPU_MESSAGE_SCOPE) has already been pushed. Only one scope can be active at a time."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScope *)(*pcVar1)();
      return pFVar3;
    }
  }
  bRecursionCheck = true;
  FSystem::BeginMessageScope((FSystem *)&GSystem,param_1);
  return this;
}

// ~FScope @ 145d0c1a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall GPUMessage::FScope::~FScope(FScope *this)

{
  FSystem::EndMessageScope((FSystem *)&GSystem,this->GraphBuilder);
  bRecursionCheck = false;
  return;
}

