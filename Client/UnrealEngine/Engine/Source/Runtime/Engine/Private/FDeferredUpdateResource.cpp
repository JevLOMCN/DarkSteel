// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// AddToDeferredUpdateList @ 1488b95b0

void __thiscall
FDeferredUpdateResource::AddToDeferredUpdateList(FDeferredUpdateResource *this,bool param_1)

{
  TLinkedList<FDeferredUpdateResource_*> *pTVar1;
  
  for (pTVar1 = FirstUpdateLink; pTVar1 != (TLinkedList<FDeferredUpdateResource_*> *)0x0;
      pTVar1 = (TLinkedList<FDeferredUpdateResource_*> *)pTVar1->_padding_) {
    if (pTVar1->Element == this) goto LAB_1488b9612;
  }
  pTVar1 = &this->UpdateListLink;
  pTVar1->_padding_ = 0;
  (this->UpdateListLink)._padding_ = 0;
  (this->UpdateListLink).Element = this;
  if (FirstUpdateLink != (TLinkedList<FDeferredUpdateResource_*> *)0x0) {
    FirstUpdateLink->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)FirstUpdateLink;
  (this->UpdateListLink)._padding_ = (longlong)&FirstUpdateLink;
  bNeedsUpdate = true;
  FirstUpdateLink = pTVar1;
LAB_1488b9612:
  this->bOnlyUpdateOnce = param_1;
  return;
}

// FlushDeferredResourceUpdate @ 1488c02f0

void __thiscall
FDeferredUpdateResource::FlushDeferredResourceUpdate
          (FDeferredUpdateResource *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->UpdateListLink)._padding_ != 0) {
    if (!bNeedsUpdate) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bNeedsUpdate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget.cpp"
                         ,0x276,L"The update list does not need to be updated at this point");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)this->_padding_)(this,param_1,1);
    if (this->bOnlyUpdateOnce != false) {
      lVar1 = (this->UpdateListLink)._padding_;
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 8) = (this->UpdateListLink)._padding_;
      }
      plVar2 = (longlong *)(this->UpdateListLink)._padding_;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (this->UpdateListLink)._padding_;
      }
      (this->UpdateListLink)._padding_ = 0;
      (this->UpdateListLink)._padding_ = 0;
    }
  }
  return;
}

// GetUpdateList @ 1488c6e30

TLinkedList<FDeferredUpdateResource_*> ** __cdecl FDeferredUpdateResource::GetUpdateList(void)

{
  return &FirstUpdateLink;
}

// RemoveFromDeferredUpdateList @ 1488d7820

void __thiscall FDeferredUpdateResource::RemoveFromDeferredUpdateList(FDeferredUpdateResource *this)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (this->UpdateListLink)._padding_;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = (this->UpdateListLink)._padding_;
  }
  plVar2 = (longlong *)(this->UpdateListLink)._padding_;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (this->UpdateListLink)._padding_;
  }
  (this->UpdateListLink)._padding_ = 0;
  (this->UpdateListLink)._padding_ = 0;
  return;
}

// ResetSceneTextureExtentsHistory @ 1488daaf0

void __thiscall
FDeferredUpdateResource::ResetSceneTextureExtentsHistory(FDeferredUpdateResource *this)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x0001488dab0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x230))(pIVar1,*(code **)((longlong)*pIVar1 + 0x230));
  return;
}

// UpdateResources @ 1488ebea0

void __cdecl FDeferredUpdateResource::UpdateResources(FRHICommandListImmediate *param_1)

{
  FDeferredUpdateResource *pFVar1;
  TLinkedList<FDeferredUpdateResource_*> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  
  if (bNeedsUpdate) {
    bNeedsUpdate = true;
    pTVar2 = FirstUpdateLink;
    while (pTVar2 != (TLinkedList<FDeferredUpdateResource_*> *)0x0) {
      pFVar1 = pTVar2->Element;
      pTVar2 = (TLinkedList<FDeferredUpdateResource_*> *)pTVar2->_padding_;
      if (pFVar1 != (FDeferredUpdateResource *)0x0) {
        if (__CsvProfilerStat613 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("FlushDeferredResourceUpdate");
          __CsvProfilerStat613 = true;
        }
        FCsvProfiler::BeginExclusiveStat
                  ("FlushDeferredResourceUpdate","CSV_FlushDeferredResourceUpdate");
        if ((pFVar1->UpdateListLink)._padding_ != 0) {
          if ((bNeedsUpdate == false) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("bNeedsUpdate",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureRenderTarget.cpp"
                                 ,0x276,L"The update list does not need to be updated at this point"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (**(code **)pFVar1->_padding_)(pFVar1,param_1,1);
          if (pFVar1->bOnlyUpdateOnce != false) {
            lVar3 = (pFVar1->UpdateListLink)._padding_;
            if (lVar3 != 0) {
              *(longlong *)(lVar3 + 8) = (pFVar1->UpdateListLink)._padding_;
            }
            plVar4 = (longlong *)(pFVar1->UpdateListLink)._padding_;
            if (plVar4 != (longlong *)0x0) {
              *plVar4 = (pFVar1->UpdateListLink)._padding_;
            }
            (pFVar1->UpdateListLink)._padding_ = 0;
            (pFVar1->UpdateListLink)._padding_ = 0;
          }
        }
        FCsvProfiler::EndExclusiveStat("FlushDeferredResourceUpdate");
      }
    }
    bNeedsUpdate = false;
  }
  return;
}

