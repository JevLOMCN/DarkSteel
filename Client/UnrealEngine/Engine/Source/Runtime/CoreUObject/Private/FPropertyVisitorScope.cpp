// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FPropertyVisitorScope @ 142162260

FPropertyVisitorScope * __thiscall
FPropertyVisitorScope::FPropertyVisitorScope
          (FPropertyVisitorScope *this,FPropertyVisitorPath *param_1,FPropertyVisitorInfo *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FPropertyVisitorInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  UStruct *pUVar7;
  bool bVar8;
  int iVar9;
  FPropertyVisitorScope *pFVar10;
  undefined8 uVar11;
  longlong *plVar12;
  
  this->Path = param_1;
  pFVar3 = (FPropertyVisitorInfo *)(param_1->Path).AllocatorInstance.Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (param_1->Path).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FPropertyVisitorScope *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (param_1->Path).ArrayNum;
  piVar1 = &(param_1->Path).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Path).ArrayNum = iVar9 + 1;
  pUVar7 = param_2->ParentStructType;
  pFVar4 = (param_1->Path).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)iVar9 * 0x18;
  *(FProperty **)pFVar2 = param_2->Property;
  *(UStruct **)(pFVar2 + 8) = pUVar7;
  *(undefined8 *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = *(undefined8 *)&param_2->Index;
  if (*(void **)&param_1->OnPushFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnPushFunc);
    plVar5 = *(longlong **)&(param_1->OnPushFunc).field_0x28;
    pcVar6 = *(code **)&param_1->OnPushFunc;
    plVar12 = (longlong *)&(param_1->OnPushFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar12 = plVar5;
    }
    uVar11 = (**(code **)(*plVar12 + 8))();
    (*pcVar6)(uVar11,param_2);
  }
  return this;
}

// ~FPropertyVisitorScope @ 1421636a0

void __thiscall FPropertyVisitorScope::~FPropertyVisitorScope(FPropertyVisitorScope *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPropertyVisitorPath *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  pFVar3 = this->Path;
  if ((pFVar3->Path).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = (pFVar3->Path).ArrayNum;
  pFVar4 = (pFVar3->Path).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18 + -0x18;
  local_28 = *(undefined8 *)pFVar1;
  uStack_20 = *(undefined8 *)(pFVar1 + 8);
  local_18 = *(undefined8 *)(pFVar4 + (longlong)iVar2 * 0x18 + -8);
  (pFVar3->Path).ArrayNum = iVar2 + -1;
  if (*(void **)&pFVar3->OnPopFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->OnPopFunc);
    plVar5 = *(longlong **)&(pFVar3->OnPopFunc).field_0x28;
    pcVar6 = *(code **)&pFVar3->OnPopFunc;
    plVar9 = (longlong *)&(pFVar3->OnPopFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar9 = plVar5;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar6)(uVar8,&local_28);
  }
  return;
}

