// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ISMPool
// Functions: 2

// FDebugDrawDelegateHelper @ 14633a5d0

FDebugDrawDelegateHelper * __thiscall
FDebugDrawDelegateHelper::FDebugDrawDelegateHelper(FDebugDrawDelegateHelper *this)

{
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  *(undefined8 *)&this->DebugTextDrawingDelegate = 0;
  *(undefined8 *)&(this->DebugTextDrawingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->DebugTextDrawingDelegate).field_0x10 = 0;
  (this->DebugTextDrawingDelegateHandle).ID = 0;
  this->State = UndefinedState;
  this->bDeferredRegister = false;
  (this->AssociatedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Texts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Texts).ArrayNum = 0;
  (this->Texts).ArrayMax = 0;
  ::FString::FString(&this->ViewFlagName,L"Game");
  this->TextWithoutShadowDistance = 1500.0;
  this->FarClippingDistance = 0.0;
  return this;
}

// ~FDebugDrawDelegateHelper @ 14633af50

void __thiscall FDebugDrawDelegateHelper::~FDebugDrawDelegateHelper(FDebugDrawDelegateHelper *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FDebugDrawDelegateHelper__6B_;
  pFVar1 = (this->ViewFlagName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDebugRenderSceneProxy::FText3d,int>
            ((FText3d *)(this->Texts).AllocatorInstance.Data,(this->Texts).ArrayNum);
  pFVar1 = (this->Texts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate);
  return;
}

