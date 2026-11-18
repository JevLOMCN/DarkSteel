// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FPropertyStackScope @ 142011180

FPropertyStackScope * __thiscall
UE::GC::FPropertyStackScope::FPropertyStackScope
          (FPropertyStackScope *this,FPropertyStack *param_1,FProperty *param_2)

{
  int *piVar1;
  FPropertyStack *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPropertyStackScope *pFVar7;
  FProperty *local_res18 [2];
  
  this->Stack = param_1;
  local_res18[0] = param_2;
  if (param_2 == (FProperty *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GarbageCollectionSchema.h"
                       ,0x5d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPropertyStackScope *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar2 = this->Stack;
  pFVar3 = (pFVar2->Props).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar3 + (longlong)(pFVar2->Props).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPropertyStackScope *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->Props).ArrayNum;
  piVar1 = &(pFVar2->Props).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar2,piVar1);
  }
  (pFVar2->Props).ArrayNum = iVar6 + 1;
  *(FProperty **)((pFVar2->Props).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res18[0];
  return this;
}

// ~FPropertyStackScope @ 142013320

void __thiscall UE::GC::FPropertyStackScope::~FPropertyStackScope(FPropertyStackScope *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  FPropertyStack *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  pFVar4 = this->Stack;
  if ((pFVar4->Props).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (pFVar4->Props).ArrayNum;
  uVar1 = iVar3 - 1;
  _Dst = (pFVar4->Props).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
  }
  piVar2 = &(pFVar4->Props).ArrayNum;
  *piVar2 = *piVar2 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)pFVar4,(pFVar4->Props).ArrayNum,&(pFVar4->Props).ArrayMax);
  return;
}

