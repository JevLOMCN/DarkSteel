// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// AppendInlineDecorator @ 14306e850

FRichTextLayoutMarshaller * __thiscall
FRichTextLayoutMarshaller::AppendInlineDecorator
          (FRichTextLayoutMarshaller *this,TSharedRef<ITextDecorator,1> *param_1)

{
  int *piVar1;
  TSharedRef<ITextDecorator,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRichTextLayoutMarshaller *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar2 = (TSharedRef<ITextDecorator,1> *)(this->InlineDecorators).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->InlineDecorators).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRichTextLayoutMarshaller *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->InlineDecorators).ArrayNum;
  piVar1 = &(this->InlineDecorators).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->InlineDecorators).AllocatorInstance,piVar1);
  }
  (this->InlineDecorators).ArrayNum = iVar6 + 1;
  pFVar8 = (this->InlineDecorators).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(ITextDecorator **)pFVar8 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

