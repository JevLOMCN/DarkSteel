// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// ~FSceneViewStateReference @ 148510f20

void __thiscall FSceneViewStateReference::~FSceneViewStateReference(FSceneViewStateReference *this)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  if (this->ShareOriginRefCount != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShareOriginRefCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,399,
                       L"FSceneViewStateReference:  ShareOrigin view states must be destroyed before their target."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->ShareOriginTarget != (FSceneViewStateReference *)0x0) {
    piVar1 = &this->ShareOriginTarget->ShareOriginRefCount;
    *piVar1 = *piVar1 + -1;
    this->ShareOriginTarget = (FSceneViewStateReference *)0x0;
  }
  lVar2 = (this->GlobalListLink)._padding_;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar3 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  if (this->Reference != (FSceneViewStateInterface *)0x0) {
    (**(code **)this->Reference->_padding_)();
    this->Reference = (FSceneViewStateInterface *)0x0;
  }
  return;
}

// Allocate @ 1485180a0

void __thiscall FSceneViewStateReference::Allocate(FSceneViewStateReference *this,Type param_1)

{
  TLinkedList<FSceneViewStateReference_*> *pTVar1;
  code *pcVar2;
  bool bVar3;
  IRendererModule *pIVar4;
  FSceneViewStateInterface *pFVar5;
  
  if (this->Reference != (FSceneViewStateInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Reference",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0x1a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (FSceneViewStateInterface *)0x0;
  if (this->ShareOriginTarget != (FSceneViewStateReference *)0x0) {
    if (this->ShareOriginTarget->Reference == (FSceneViewStateInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShareOriginTarget->Reference",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x19f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = this->ShareOriginTarget->Reference;
  }
  pIVar4 = GetRendererModule();
  pFVar5 = (FSceneViewStateInterface *)
           (**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,param_1,pFVar5);
  this->Reference = pFVar5;
  pTVar1 = &this->GlobalListLink;
  pTVar1->_padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink).Element = this;
  if (List != (TLinkedList<FSceneViewStateReference_*> *)0x0) {
    List->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)List;
  (this->GlobalListLink)._padding_ = (longlong)&List;
  List = pTVar1;
  return;
}

// AllocateInternal @ 1485181a0

void __thiscall
FSceneViewStateReference::AllocateInternal(FSceneViewStateReference *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  IRendererModule *pIVar3;
  FSceneViewStateInterface *pFVar4;
  
  pFVar4 = (FSceneViewStateInterface *)0x0;
  if (this->ShareOriginTarget != (FSceneViewStateReference *)0x0) {
    if (this->ShareOriginTarget->Reference == (FSceneViewStateInterface *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShareOriginTarget->Reference",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                         ,0x19f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = this->ShareOriginTarget->Reference;
  }
  pIVar3 = GetRendererModule();
  pFVar4 = (FSceneViewStateInterface *)
           (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,param_1,pFVar4);
  this->Reference = pFVar4;
  return;
}

// Destroy @ 1485214a0

void __thiscall FSceneViewStateReference::Destroy(FSceneViewStateReference *this)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (this->GlobalListLink)._padding_;
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 8) = (this->GlobalListLink)._padding_;
  }
  plVar2 = (longlong *)(this->GlobalListLink)._padding_;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (this->GlobalListLink)._padding_;
  }
  (this->GlobalListLink)._padding_ = 0;
  (this->GlobalListLink)._padding_ = 0;
  if (this->Reference != (FSceneViewStateInterface *)0x0) {
    (**(code **)this->Reference->_padding_)();
    this->Reference = (FSceneViewStateInterface *)0x0;
  }
  return;
}

// GetSceneViewStateList @ 14852cc00

TLinkedList<FSceneViewStateReference_*> ** __cdecl
FSceneViewStateReference::GetSceneViewStateList(void)

{
  return &List;
}

// ShareOrigin @ 148546170

void __thiscall
FSceneViewStateReference::ShareOrigin
          (FSceneViewStateReference *this,FSceneViewStateReference *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ShareOriginTarget != (FSceneViewStateReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShareOriginTarget == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0x1b2,L"FSceneViewStateReference:  Cannot call ShareOrigin twice.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ShareOriginRefCount != 0) ||
     (param_1->ShareOriginTarget != (FSceneViewStateReference *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShareOriginRefCount == 0 && Target->ShareOriginTarget == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0x1b3,L"FSceneViewStateReference:  ShareOrigin references cannot nest.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Reference != (FSceneViewStateInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Reference == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneView.cpp"
                       ,0x1b4,
                       L"FSceneViewStateReference:  Must call ShareOrigin before calling Allocate.")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ShareOriginTarget = param_1;
  param_1->ShareOriginRefCount = param_1->ShareOriginRefCount + 1;
  return;
}

