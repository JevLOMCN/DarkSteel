// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 1

// AddUnique @ 1446c5730

void __thiscall
FRHIBreadcrumbAllocatorArray::AddUnique
          (FRHIBreadcrumbAllocatorArray *this,FRHIBreadcrumbAllocator *param_1)

{
  FRHIBreadcrumbAllocator *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  FRHIBreadcrumbAllocatorArray *pFVar6;
  FRHIBreadcrumbAllocatorArray *pFVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  FRHIBreadcrumbAllocator *local_38;
  FRHIBreadcrumbAllocator *local_30;
  
  iVar5 = *(int *)&this->field_0x28;
  pFVar7 = this;
  if (*(FRHIBreadcrumbAllocatorArray **)&this->field_0x20 != (FRHIBreadcrumbAllocatorArray *)0x0) {
    pFVar7 = *(FRHIBreadcrumbAllocatorArray **)&this->field_0x20;
  }
  plVar3 = (longlong *)&pFVar7->field_0x0;
  while( true ) {
    if (*(int *)&this->field_0x28 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == (FRHIBreadcrumbAllocatorArray *)(plVar3 + (longlong)iVar5 * 2)) break;
    if (param_1 == *(FRHIBreadcrumbAllocator **)pFVar7) {
      return;
    }
    pFVar7 = (FRHIBreadcrumbAllocatorArray *)&pFVar7->field_0x10;
  }
  pFVar1 = (FRHIBreadcrumbAllocator *)param_1->_padding_;
  pFVar9 = (FRHIBreadcrumbAllocator *)0x0;
  pFVar8 = pFVar1;
  if (pFVar1 != (FRHIBreadcrumbAllocator *)0x0) {
    iVar5 = (int)pFVar1->_padding_;
    do {
      pFVar8 = pFVar9;
      if (iVar5 == 0) goto LAB_1446c57c4;
      LOCK();
      iVar4 = (int)pFVar1->_padding_;
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)&pFVar1->_padding_ = iVar5 + 1;
        iVar4 = iVar5;
      }
      UNLOCK();
      iVar5 = iVar4;
    } while (!bVar10);
    pFVar9 = (FRHIBreadcrumbAllocator *)param_1->_padding_;
    pFVar8 = pFVar1;
  }
LAB_1446c57c4:
  if ((pFVar9 != param_1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar9 == (FRHIBreadcrumbAllocator *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38 = pFVar9;
  local_30 = pFVar8;
  if ((pFVar9 == (FRHIBreadcrumbAllocator *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar7 = *(FRHIBreadcrumbAllocatorArray **)&this->field_0x20;
  pFVar6 = this;
  if (pFVar7 != (FRHIBreadcrumbAllocatorArray *)0x0) {
    pFVar6 = pFVar7;
  }
  if (pFVar6 <= (FRHIBreadcrumbAllocatorArray *)&local_38) {
    pFVar6 = this;
    if (pFVar7 != (FRHIBreadcrumbAllocatorArray *)0x0) {
      pFVar6 = pFVar7;
    }
    if ((&local_38 < &pFVar6->field_0x0 + (longlong)*(int *)&this->field_0x2c * 0x10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&this->field_0x28;
  if (iVar5 == *(int *)&this->field_0x2c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                      (0x810,(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)this,
                       (int *)&this->field_0x2c);
  }
  *(int *)&this->field_0x28 = iVar5 + 1;
  if (*(FRHIBreadcrumbAllocatorArray **)&this->field_0x20 != (FRHIBreadcrumbAllocatorArray *)0x0) {
    this = *(FRHIBreadcrumbAllocatorArray **)&this->field_0x20;
  }
  *(FRHIBreadcrumbAllocator **)(&this->field_0x0 + (longlong)iVar5 * 0x10) = local_38;
  *(FRHIBreadcrumbAllocator **)(&this->field_0x8 + (longlong)iVar5 * 0x10) = local_30;
  if (local_30 != (FRHIBreadcrumbAllocator *)0x0) {
    LOCK();
    *(int *)&local_30->_padding_ = (int)local_30->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30);
  return;
}

