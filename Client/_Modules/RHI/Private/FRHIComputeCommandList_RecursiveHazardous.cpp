// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FRHIComputeCommandList_RecursiveHazardous @ 145c875d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIComputeCommandList_RecursiveHazardous * __thiscall
FRHIComputeCommandList_RecursiveHazardous::FRHIComputeCommandList_RecursiveHazardous
          (FRHIComputeCommandList_RecursiveHazardous *this,IRHIComputeContext *param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint *puVar5;
  FRHIComputeCommandList_RecursiveHazardous *pFVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  puVar5 = (uint *)(**(code **)(param_1->_padding_ + 0xf0))(param_1,local_res8);
  FRHICommandListBase::FRHICommandListBase((FRHICommandListBase *)this,(FRHIGPUMask)*puVar5,false);
  bVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
  this->field_0x6a = bVar3;
  if ((bVar3 == 0) || ((bVar3 & bVar3 - 1) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x6aa,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRHIComputeCommandList_RecursiveHazardous *)(*pcVar2)();
      return pFVar6;
    }
  }
  cVar1 = this->field_0x6a;
  this->field_0x6b = cVar1;
  *(undefined8 *)&this->field_0x38 = 0;
  if (param_1->WrappingContext != (IRHIComputeContext *)0x0) {
    param_1 = param_1->WrappingContext;
  }
  *(IRHIComputeContext **)&this->field_0x40 = param_1;
  if ((cVar1 == '\x01') || (lVar7 = 0x58, cVar1 != '\x02')) {
    lVar7 = 0x50;
  }
  *(IRHIComputeContext **)(&this->field_0x0 + lVar7) = param_1;
  this->field_0x29b = this->field_0x29b | 0x10;
  return this;
}

// ~FRHIComputeCommandList_RecursiveHazardous @ 145c8b000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList_RecursiveHazardous::~FRHIComputeCommandList_RecursiveHazardous
          (FRHIComputeCommandList_RecursiveHazardous *this)

{
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this);
  if (*(longlong *)&this->field_0x10 != 0) {
    FRHICommandListBase::Execute((FRHICommandListBase *)this);
  }
  FRHICommandListBase::~FRHICommandListBase((FRHICommandListBase *)this);
  return;
}

