// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// AddError @ 14c95c120

void __thiscall
UE::Geometry::FGeometryResult::AddError(FGeometryResult *this,FGeometryError *param_1)

{
  TArray<UE::Geometry::FGeometryError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FGeometryError *pFVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  pTVar1 = &this->Errors;
  pFVar3 = (FGeometryError *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Errors).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->Errors).ArrayNum;
  piVar2 = &(this->Errors).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Errors).ArrayNum = iVar8 + 1;
  FGeometryError::FGeometryError
            ((FGeometryError *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x30),param_1);
  pFVar4 = (param_1->CustomData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (param_1->Message).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  return;
}

