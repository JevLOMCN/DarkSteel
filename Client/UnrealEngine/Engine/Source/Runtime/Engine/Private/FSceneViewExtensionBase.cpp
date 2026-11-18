// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSceneViewExtensionBase @ 14850d060

FSceneViewExtensionBase * __thiscall
FSceneViewExtensionBase::FSceneViewExtensionBase
          (FSceneViewExtensionBase *this,FAutoRegister *param_1)

{
  this->_padding_ = (longlong)&___7FSceneViewExtensionBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->IsActiveThisFrameFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsActiveThisFrameFunctions).ArrayNum = 0;
  (this->IsActiveThisFrameFunctions).ArrayMax = 0;
  return this;
}

// ~FSceneViewExtensionBase @ 148510cd0

void __thiscall FSceneViewExtensionBase::~FSceneViewExtensionBase(FSceneViewExtensionBase *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FSceneViewExtensionBase__6B_;
  DestructItems<FSceneViewExtensionIsActiveFunctor,int>
            ((FSceneViewExtensionIsActiveFunctor *)
             (this->IsActiveThisFrameFunctions).AllocatorInstance.Data,
             (this->IsActiveThisFrameFunctions).ArrayNum);
  pFVar3 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148510d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// IsActiveThisFrame @ 148531d80

bool __thiscall
FSceneViewExtensionBase::IsActiveThisFrame
          (FSceneViewExtensionBase *this,FSceneViewExtensionContext *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FSceneViewExtensionBase *local_res8;
  undefined1 local_res18;
  char local_res19;
  
  iVar1 = (this->IsActiveThisFrameFunctions).ArrayNum;
  pFVar6 = (this->IsActiveThisFrameFunctions).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x40;
  while( true ) {
    while( true ) {
      if ((this->IsActiveThisFrameFunctions).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSceneViewExtensionIsActiveFunctor_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar6 == pFVar7) {
                    /* WARNING: Could not recover jumptable at 0x000148531e49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(this->_padding_ + 0xb0))(this,param_1);
        return (bool)uVar3;
      }
      if (*(void **)(pFVar6 + 0x10) != (void *)0x0) break;
      local_res19 = '\0';
      pFVar6 = pFVar6 + 0x40;
    }
    local_res8 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)(pFVar6 + 0x10));
    pcVar2 = *(code **)(pFVar6 + 0x10);
    pFVar5 = pFVar6 + 0x20;
    if (*(FScriptContainerElement **)(pFVar6 + 0x38) != (FScriptContainerElement *)0x0) {
      pFVar5 = *(FScriptContainerElement **)(pFVar6 + 0x38);
    }
    uVar4 = (**(code **)(*(longlong *)pFVar5 + 8))();
    (*pcVar2)(&local_res18,uVar4,&local_res8,param_1);
    if (local_res19 != '\0') break;
    pFVar6 = pFVar6 + 0x40;
  }
  return (bool)local_res18;
}

