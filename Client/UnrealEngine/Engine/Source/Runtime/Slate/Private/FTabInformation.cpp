// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Gather @ 1427374a0

void __thiscall
`FTabManager::FLayout::ProcessExtensions'::__l2::FTabInformation::Gather
          (void *this,FSplitter *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FSplitter **ppFVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FSplitter *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FSplitter **local_a8;
  FSplitter **local_a0;
  TReferenceControllerBase<1> *local_98;
  FSplitter *local_90;
  TReferenceControllerBase<1> *local_88;
  FSplitter *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  FSplitter **local_68;
  FSplitter *local_60;
  FScriptContainerElement *local_58;
  FSplitter ***local_50;
  FSplitter **local_48;
  
  local_res20 = (param_1->ChildNodes).ArrayNum;
  uVar6 = (ulonglong)(int)local_res20;
  pFVar9 = (param_1->ChildNodes).AllocatorInstance.Data;
  local_58 = pFVar9 + uVar6 * 0x10;
  pFVar7 = local_58;
  while( true ) {
    while( true ) {
      if ((param_1->ChildNodes).ArrayNum != (int)uVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FTabManager::FLayoutNode,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar7) {
        return;
      }
      (**(code **)(**(longlong **)pFVar9 + 8))(*(longlong **)pFVar9,&local_a0);
      if (local_a0 != (FSplitter **)0x0) break;
      (**(code **)(**(longlong **)pFVar9 + 0x10))(*(longlong **)pFVar9,&local_90);
      if (local_90 == (FSplitter *)0x0) {
        (**(code **)(**(longlong **)pFVar9 + 0x18))(*(longlong **)pFVar9,&local_80);
        if (local_80 != (FSplitter *)0x0) {
          if ((local_80 == (FSplitter *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          Gather(this,local_80);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
      }
      else {
        if ((local_90 == (FSplitter *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        Gather(this,local_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      uVar6 = (ulonglong)local_res20;
      pFVar9 = pFVar9 + 0x10;
    }
    local_68 = local_a0;
    local_50 = &local_68;
    local_48 = &local_60;
    local_60 = param_1;
    TSet<TTuple<FTabManager::FStack_*,FTabManager::FSplitter_*>,TDefaultMapHashableKeyFuncs<FTabManager::FStack_*,FTabManager::FSplitter_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FTabManager::FStack_*_&&,FTabManager::FSplitter_*_&&>_>
              (this,(TPairInitializer<FTabManager::FStack_*_&&,FTabManager::FSplitter_*_&&> *)
                    local_70,(bool *)&local_50);
    local_a8 = local_a0;
    if (((*(FSplitter ****)((longlong)this + 0x50) <= &local_a8) &&
        (&local_a8 < *(FSplitter ****)((longlong)this + 0x50) + *(int *)((longlong)this + 0x5c))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = *(int *)((longlong)this + 0x58);
    if (iVar5 == *(int *)((longlong)this + 0x5c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)((longlong)this + 0x50),
                         (int *)((longlong)this + 0x5c));
    }
    *(int *)((longlong)this + 0x58) = iVar5 + 1;
    *(FSplitter ***)(*(longlong *)((longlong)this + 0x50) + (longlong)iVar5 * 8) = local_a8;
    if ((local_a0 == (FSplitter **)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    ppFVar3 = local_a0;
    iVar5 = *(int *)(local_a0 + 5);
    pFVar8 = local_a0[4];
    plVar2 = &pFVar8->_padding_;
    while( true ) {
      if (*(int *)(ppFVar3 + 5) != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FTabManager::FTab,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar8 == (FSplitter *)(plVar2 + (longlong)iVar5 * 4)) break;
      TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator>::Emplace<FTabId_const_&>
                ((TSet<FTabId,DefaultKeyFuncs<FTabId,0>,FDefaultSetAllocator> *)
                 ((longlong)this + 0x60),(FTabId *)(local_70 + 4),(bool *)pFVar8);
      pFVar8 = (FSplitter *)&pFVar8->Orientation;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    uVar6 = (ulonglong)local_res20;
    pFVar9 = pFVar9 + 0x10;
    pFVar7 = local_58;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

