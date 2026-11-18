// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Push @ 1485d3600

/* WARNING: Removing unreachable block (ram,0x0001485d3701) */

void __thiscall
UE::Shader::FPreshaderDebugStack::Push
          (FPreshaderDebugStack *this,FString *param_1,EPreshaderDebugStackType param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *local_28;
  undefined8 local_20;
  FScriptContainerElement local_18;
  
  local_28 = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20._0_4_ = (param_1->Data).ArrayNum;
  local_20._4_4_ = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  local_18 = (FScriptContainerElement)param_2;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->Elements).ArrayMax * 0x18))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Elements).ArrayNum;
  piVar1 = &(this->Elements).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Elements).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18) = 0;
  pFVar2 = pFVar2 + (longlong)iVar5 * 0x18;
  *(FScriptContainerElement **)pFVar2 = local_28;
  *(undefined4 *)(pFVar2 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar2 + 0xc) = local_20._4_4_;
  pFVar2[0x10] = local_18;
  local_20 = 0;
  local_28 = (FScriptContainerElement *)0x0;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

