// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// ~FSlateRHIPostBufferProcessorProxy @ 145fea310

void __thiscall
FSlateRHIPostBufferProcessorProxy::~FSlateRHIPostBufferProcessorProxy
          (FSlateRHIPostBufferProcessorProxy *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FSlateRHIPostBufferProcessorProxy__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145fea33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// OnUpdateValuesRenderThread @ 14601d7e0

void __thiscall
FSlateRHIPostBufferProcessorProxy::OnUpdateValuesRenderThread
          (FSlateRHIPostBufferProcessorProxy *this)

{
  return;
}

// PostProcess_Renderthread @ 14601dc30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateRHIPostBufferProcessorProxy::PostProcess_Renderthread
          (FSlateRHIPostBufferProcessorProxy *this,FRDGBuilder *param_1,FScreenPassTexture *param_2,
          FScreenPassTexture *param_3)

{
  return;
}

// PostProcess_Renderthread @ 14601dc40

void __thiscall
FSlateRHIPostBufferProcessorProxy::PostProcess_Renderthread
          (FSlateRHIPostBufferProcessorProxy *this,FRHICommandListImmediate *param_1,
          FRHITexture *param_2,FRHITexture *param_3,TIntRect<int> *param_4,TIntRect<int> *param_5,
          FSlateRHIRenderingPolicyInterface param_6)

{
  return;
}

