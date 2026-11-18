// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Allocate @ 1458db650

void __thiscall
FFeedbackGPUFencePool::Allocate(FFeedbackGPUFencePool *this,FRHICommandList *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  uint uVar6;
  longlong lVar7;
  FName local_res8;
  FRHIResource *local_28 [2];
  
  lVar7 = (longlong)param_2;
  uVar6 = (uint)~param_2 >> 0x1f;
  uVar4 = 0;
  if (param_2 < (this->Fences).ArrayNum) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)((this->Fences).AllocatorInstance.Data + lVar7 * 8) == 0) {
    pFVar5 = ::FName::FName(&local_res8,"");
    (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,local_28,pFVar5);
    uVar4 = 0;
    if (param_2 < (this->Fences).ArrayNum) {
      uVar4 = uVar6;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Fences).AllocatorInstance.Data + lVar7 * 8;
    if (pFVar1 != (FScriptContainerElement *)local_28) {
      this_00 = *(FRHIResource **)pFVar1;
      *(FRHIResource **)pFVar1 = local_28[0];
      local_28[0] = (FRHIResource *)0x0;
      if (this_00 == (FRHIResource *)0x0) goto LAB_1458db763;
      FRHIResource::Release(this_00);
    }
    if (local_28[0] != (FRHIResource *)0x0) {
      FRHIResource::Release(local_28[0]);
    }
  }
LAB_1458db763:
  uVar4 = 0;
  if (param_2 < (this->Fences).ArrayNum) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001458db7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((this->Fences).AllocatorInstance.Data + lVar7 * 8) + 0x10))();
  return;
}

// Poll @ 145912e00

bool __thiscall
FFeedbackGPUFencePool::Poll(FFeedbackGPUFencePool *this,FRHICommandList *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 < (this->Fences).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)((this->Fences).AllocatorInstance.Data + (longlong)param_2 * 8);
                    /* WARNING: Could not recover jumptable at 0x000145912e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)&param_1->field_0x29c);
  return (bool)uVar4;
}

