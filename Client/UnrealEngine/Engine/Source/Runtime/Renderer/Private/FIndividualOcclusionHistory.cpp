// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FIndividualOcclusionHistory @ 1450b1080

void __thiscall
FIndividualOcclusionHistory::~FIndividualOcclusionHistory(FIndividualOcclusionHistory *this)

{
  FRHIRenderQueryPool *pFVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = this->PendingOcclusionQuery[3].QueryPool;
  if (pFVar1 == (FRHIRenderQueryPool *)0x0) {
LAB_1450b10e0:
    if (this->PendingOcclusionQuery[3].Query.Reference != (FRHIRenderQuery *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else if (this->PendingOcclusionQuery[3].Query.Reference != (FRHIRenderQuery *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this->PendingOcclusionQuery + 3);
    this->PendingOcclusionQuery[3].QueryPool = (FRHIRenderQueryPool *)0x0;
    goto LAB_1450b10e0;
  }
  pFVar2 = (FRHIResource *)this->PendingOcclusionQuery[3].Query.Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = this->PendingOcclusionQuery[2].QueryPool;
  if (pFVar1 == (FRHIRenderQueryPool *)0x0) {
LAB_1450b1166:
    if (this->PendingOcclusionQuery[2].Query.Reference != (FRHIRenderQuery *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else if (this->PendingOcclusionQuery[2].Query.Reference != (FRHIRenderQuery *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this->PendingOcclusionQuery + 2);
    this->PendingOcclusionQuery[2].QueryPool = (FRHIRenderQueryPool *)0x0;
    goto LAB_1450b1166;
  }
  pFVar2 = (FRHIResource *)this->PendingOcclusionQuery[2].Query.Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = this->PendingOcclusionQuery[1].QueryPool;
  if (pFVar1 == (FRHIRenderQueryPool *)0x0) {
LAB_1450b11ec:
    if (this->PendingOcclusionQuery[1].Query.Reference != (FRHIRenderQuery *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Query.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x9c9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else if (this->PendingOcclusionQuery[1].Query.Reference != (FRHIRenderQuery *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this->PendingOcclusionQuery + 1);
    this->PendingOcclusionQuery[1].QueryPool = (FRHIRenderQueryPool *)0x0;
    goto LAB_1450b11ec;
  }
  pFVar2 = (FRHIResource *)this->PendingOcclusionQuery[1].Query.Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = this->PendingOcclusionQuery[0].QueryPool;
  if (pFVar1 != (FRHIRenderQueryPool *)0x0) {
    if (this->PendingOcclusionQuery[0].Query.Reference == (FRHIRenderQuery *)0x0)
    goto LAB_1450b129b;
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1,this);
    this->PendingOcclusionQuery[0].QueryPool = (FRHIRenderQueryPool *)0x0;
  }
  if (this->PendingOcclusionQuery[0].Query.Reference != (FRHIRenderQuery *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Query.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x9c9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_1450b129b:
  pFVar2 = (FRHIResource *)this->PendingOcclusionQuery[0].Query.Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  return;
}

// SetCurrentQuery @ 1454b9530

void __thiscall
FIndividualOcclusionHistory::SetCurrentQuery
          (FIndividualOcclusionHistory *this,uint param_1,FRHIPooledRenderQuery *param_2,int param_3
          )

{
  FRHIResource *this_00;
  FRHIPooledRenderQuery *pFVar1;
  
  pFVar1 = this->PendingOcclusionQuery + ((longlong)(int)param_1 % (longlong)param_3 & 0xffffffff);
  if (pFVar1 != param_2) {
    this_00 = (FRHIResource *)(pFVar1->Query).Reference;
    (pFVar1->Query).Reference = (param_2->Query).Reference;
    (param_2->Query).Reference = (FRHIRenderQuery *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  pFVar1->QueryPool = param_2->QueryPool;
  this->PendingOcclusionQueryFrames[(longlong)(int)param_1 % (longlong)param_3 & 0xffffffff] =
       param_1;
  return;
}

