// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// AddConstraint @ 1437507e0

void __thiscall Chaos::FCCDParticle::AddConstraint(FCCDParticle *this,FCCDConstraint *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCCDConstraint *local_res10 [3];
  
  pFVar2 = (this->AttachedCCDConstraints).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->AttachedCCDConstraints).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AttachedCCDConstraints).ArrayNum;
  piVar1 = &(this->AttachedCCDConstraints).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AttachedCCDConstraints).AllocatorInstance,piVar1);
  }
  (this->AttachedCCDConstraints).ArrayNum = iVar5 + 1;
  *(FCCDConstraint **)((this->AttachedCCDConstraints).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = local_res10[0];
  return;
}

// AddOverlappingDynamicParticle @ 143752c80

void __thiscall
Chaos::FCCDParticle::AddOverlappingDynamicParticle(FCCDParticle *this,FCCDParticle *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCCDParticle *local_res10 [3];
  
  pFVar2 = (this->OverlappingDynamicParticles).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->OverlappingDynamicParticles).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->OverlappingDynamicParticles).ArrayNum;
  piVar1 = &(this->OverlappingDynamicParticles).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OverlappingDynamicParticles).AllocatorInstance,piVar1);
  }
  (this->OverlappingDynamicParticles).ArrayNum = iVar5 + 1;
  *(FCCDParticle **)
   ((this->OverlappingDynamicParticles).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_res10[0];
  return;
}

