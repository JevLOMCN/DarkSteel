// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FRHIPooledRenderQuery @ 1448ed840

FRHIPooledRenderQuery * __thiscall
FRHIPooledRenderQuery::FRHIPooledRenderQuery(FRHIPooledRenderQuery *this)

{
  (this->Query).Reference = (FRHIRenderQuery *)0x0;
  this->QueryPool = (FRHIRenderQueryPool *)0x0;
  return this;
}

// ~FRHIPooledRenderQuery @ 1448ee840

void __thiscall FRHIPooledRenderQuery::~FRHIPooledRenderQuery(FRHIPooledRenderQuery *this)

{
  FRHIRenderQueryPool *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->QueryPool;
  if (pFVar1 != (FRHIRenderQueryPool *)0x0) {
    if ((this->Query).Reference == (FRHIRenderQuery *)0x0) goto LAB_1448ee8c4;
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this);
    this->QueryPool = (FRHIRenderQueryPool *)0x0;
  }
  if ((this->Query).Reference != (FRHIRenderQuery *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Query.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9c9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_1448ee8c4:
  this_00 = (FRHIResource *)(this->Query).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// FRHIPooledRenderQuery @ 1450b0730

FRHIPooledRenderQuery * __thiscall
FRHIPooledRenderQuery::FRHIPooledRenderQuery
          (FRHIPooledRenderQuery *this,FRHIPooledRenderQuery *param_1)

{
  (this->Query).Reference = (FRHIRenderQuery *)0x0;
  (this->Query).Reference = (param_1->Query).Reference;
  (param_1->Query).Reference = (FRHIRenderQuery *)0x0;
  this->QueryPool = param_1->QueryPool;
  return this;
}

