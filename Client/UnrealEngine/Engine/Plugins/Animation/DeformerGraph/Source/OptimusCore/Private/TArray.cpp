// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 37

// AddUniqueImpl<UOptimusNodePair_*_const_&> @ 14e1259d0

int __thiscall
TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UOptimusNodePair_*_const_&>
          (TArray<UOptimusNodePair_*,TSizedDefaultAllocator<32>_> *this,UOptimusNodePair **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UOptimusNodePair **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UOptimusNodePair **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UOptimusNode_*> @ 14e125ad0

int __thiscall
TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UOptimusNode_*>
          (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *this,UOptimusNode **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UOptimusNode **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UOptimusNode **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UOptimusNodeSubGraph_*> @ 14e125bd0

int __thiscall
TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UOptimusNodeSubGraph_*>
          (TArray<UOptimusNodeSubGraph_*,TSizedDefaultAllocator<32>_> *this,
          UOptimusNodeSubGraph **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UOptimusNodeSubGraph **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UOptimusNodeSubGraph **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// Append<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> @ 14e125cd0

void __thiscall
TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>::
Append<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>
          (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    memmove((this->AllocatorInstance).Data + (longlong)iVar4 * 8,(param_1->AllocatorInstance).Data,
            (longlong)iVar1 << 3);
    param_1->ArrayNum = 0;
  }
  return;
}

// Contains<UOptimusNode_const_*> @ 14e1288b0

bool __thiscall
TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_>::Contains<UOptimusNode_const_*>
          (TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_> *this,UOptimusNode **param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)this->ArrayNum * 8;
  if (pFVar2 != pFVar1) {
    do {
      if (*(UOptimusNode **)pFVar2 == *param_1) {
        return true;
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// Contains<UOptimusNodePin_const_*> @ 14e1288e0

bool __thiscall
TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>::Contains<UOptimusNodePin_const_*>
          (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *this,UOptimusNodePin **param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)this->ArrayNum * 8;
  if (pFVar2 != pFVar1) {
    do {
      if (*(UOptimusNodePin **)pFVar2 == *param_1) {
        return true;
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1);
  }
  return false;
}

// CopyToEmpty<UOptimusNode_*,int> @ 14e128bf0

void __thiscall
TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UOptimusNode_*,int>
          (TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_> *this,UOptimusNode **param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<FOptimusInstancedPin,int> @ 14e128c80

void __thiscall
TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>::CopyToEmpty<FOptimusInstancedPin,int>
          (TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_> *this,
          FOptimusInstancedPin *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x48,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FOptimusInstancedPin,FOptimusInstancedPin,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<FOptimusParameterBinding,int> @ 14e128d00

void __thiscall
TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FOptimusParameterBinding,int>
          (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *this,
          FOptimusParameterBinding *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x80,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<FShaderParamTypeDefinition,int> @ 14e128d80

void __thiscall
TArray<FShaderParamTypeDefinition,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FShaderParamTypeDefinition,int>
          (TArray<FShaderParamTypeDefinition,TSizedDefaultAllocator<32>_> *this,
          FShaderParamTypeDefinition *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FShaderParamTypeDefinition,FShaderParamTypeDefinition,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// IndexOfByKey<UComputeDataInterface_const_*> @ 14e136f50

int __thiscall
TArray<TObjectPtr<UComputeDataInterface>,TSizedDefaultAllocator<32>_>::
IndexOfByKey<UComputeDataInterface_const_*>
          (TArray<TObjectPtr<UComputeDataInterface>,TSizedDefaultAllocator<32>_> *this,
          UComputeDataInterface **param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar2 = pFVar1;
    do {
      if (*(UComputeDataInterface **)pFVar2 == (UComputeDataInterface *)0x0) {
        bVar3 = *param_1 == (UComputeDataInterface *)0x0;
      }
      else {
        bVar3 = *(UComputeDataInterface **)pFVar2 == *param_1;
      }
      if (bVar3) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
      pFVar2 = pFVar2 + 8;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return -1;
}

// TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> @ 14e14bf60

TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> * __thiscall
TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>::
TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_>
          (TArray<IOptimusNodeAdderPinProvider::FAdderPinAction,TSizedDefaultAllocator<32>_> *this,
          initializer_list<IOptimusNodeAdderPinProvider::FAdderPinAction> *param_1)

{
  FAdderPinAction *pFVar1;
  longlong lVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  lVar2 = (longlong)param_1->_Last - (longlong)pFVar1;
  lVar2 = lVar2 / 6 + (lVar2 >> 0x3f);
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(lVar2 >> 3) - (int)(lVar2 >> 0x3f);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<IOptimusNodeAdderPinProvider::FAdderPinAction,IOptimusNodeAdderPinProvider::FAdderPinAction,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> @ 14e14c010

TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>::
TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>
          (TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *this,
          initializer_list<FOptimusRoutedNodePin> *param_1)

{
  FOptimusRoutedNodePin *pFVar1;
  FOptimusRoutedNodePin *pFVar2;
  int iVar3;
  
  pFVar1 = param_1->_First;
  pFVar2 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x38);
  this->ArrayNum = iVar3;
  if (iVar3 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,iVar3,0,&this->AllocatorInstance,iVar3,&this->ArrayMax);
  ConstructItems<FOptimusRoutedNodePin,FOptimusRoutedNodePin,int>
            ((this->AllocatorInstance).Data,pFVar1,iVar3);
  return this;
}

// ~TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> @ 14e15dc80

void __thiscall
TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>::
~TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>
          (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_> @ 14e15dca0

void __thiscall
TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_>::
~TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_>
          (TArray<UOptimusNode_const_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> @ 14e15dcc0

void __thiscall
TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_>::
~TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_>
          (TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOptimusGraphVariableDescription,int>
            ((FOptimusGraphVariableDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> @ 14e15dd00

void __thiscall
TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>::
~TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>
          (TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOptimusInstancedNode,int>
            ((FOptimusInstancedNode *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> @ 14e15dd40

void __thiscall
TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>::
~TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>
          (TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOptimusRoutedConstNode,int>
            ((FOptimusRoutedConstNode *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> @ 14e15dd80

void __thiscall
TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>::
~TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_>
          (TArray<FOptimusRoutedNodePin,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FOptimusRoutedNodePin,int>
            ((FOptimusRoutedNodePin *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e164360

TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOptimusConstant,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> *this,
          TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FOptimusConstant *pFVar3;
  
  if (this != param_1) {
    DestructItems<FOptimusConstant,int>
              ((FOptimusConstant *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FOptimusConstant *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FOptimusConstant,FOptimusConstant,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14e164400

TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *this,
          TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FOptimusGraphVariableDescription *pFVar3;
  
  if (this != param_1) {
    DestructItems<FOptimusGraphVariableDescription,int>
              ((FOptimusGraphVariableDescription *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FOptimusGraphVariableDescription *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FOptimusGraphVariableDescription,FOptimusGraphVariableDescription,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14e1644a0

TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *this,
          TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FOptimusParameterBinding *pFVar3;
  
  if (this != param_1) {
    DestructItems<FOptimusParameterBinding,int>
              ((FOptimusParameterBinding *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FOptimusParameterBinding *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 14e174820

int __thiscall
TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// AddDefaulted @ 14e174890

int __thiscall
TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FRDGBufferSRV_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// AddDefaulted @ 14e174900

int __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Insert @ 14e1edde0

int __thiscall
TArray<TObjectPtr<UComputeKernel>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UComputeKernel>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UComputeKernel> *param_1,int param_2)

{
  UComputeKernel *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UComputeKernel **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UComputeKernel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

// Insert @ 14e1eded0

int __thiscall
TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UOptimusNodeGraph> *param_1,int param_2)

{
  UOptimusNodeGraph *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UOptimusNodeGraph **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UOptimusNodeGraph *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

// Insert @ 14e1edfc0

int __thiscall
TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UOptimusNodePin> *param_1,int param_2)

{
  UOptimusNodePin *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UOptimusNodePin **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UOptimusNodePin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

// Insert @ 14e1ee0b0

int __thiscall
TArray<TSoftObjectPtr<UOptimusNode_const_>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSoftObjectPtr<UOptimusNode_const_>,TSizedDefaultAllocator<32>_> *this,
          TSoftObjectPtr<UOptimusNode_const_> *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 0x28)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar4 + 1;
  pFVar5 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x28;
  memmove(pFVar5 + 0x28,pFVar5,(longlong)(iVar4 - param_2) * 0x28);
  pFVar5 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x28;
  *(undefined8 *)pFVar5 = *(undefined8 *)&param_1->SoftObjectPtr;
  uVar2 = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x10;
  *(undefined8 *)(pFVar5 + 8) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x8;
  *(undefined8 *)(pFVar5 + 0x10) = uVar2;
  *(undefined8 *)(pFVar5 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + 0x18) = *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
  *(undefined8 *)&(param_1->SoftObjectPtr).field_0x18 = 0;
  *(undefined4 *)(pFVar5 + 0x20) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x20;
  *(undefined4 *)(pFVar5 + 0x24) = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x24;
  *(undefined8 *)&(param_1->SoftObjectPtr).field_0x20 = 0;
  return param_2;
}

// Insert @ 14e1ee1d0

int __thiscall
TArray<`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l505::FKernelWithDataBindings,TSizedDefaultAllocator<32>_>
::Insert(void *this,FKernelWithDataBindings *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if ((*(FKernelWithDataBindings **)this <= param_1) &&
     (param_1 < *(FKernelWithDataBindings **)this + *(int *)((longlong)this + 0xc))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = *(int *)((longlong)this + 8);
  if (iVar3 == *(int *)((longlong)this + 0xc)) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,this,(int *)((longlong)this + 0xc));
  }
  *(int *)((longlong)this + 8) = iVar3 + 1;
  _Src = (void *)(*(longlong *)this + (longlong)param_2 * 0xa8);
  memmove((void *)((longlong)_Src + 0xa8),_Src,(longlong)(iVar3 - param_2) * 0xa8);
  puVar4 = (undefined8 *)((longlong)param_2 * 0xa8 + *(longlong *)this);
  *puVar4 = param_1->Kernel;
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  ::
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
            ((TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
              *)(puVar4 + 1),&param_1->InputDataBindings);
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
  ::
  TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
            ((TMap<int,FOptimus_InterfaceBinding,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>_>
              *)(puVar4 + 0xb),&param_1->OutputDataBindings);
  return param_2;
}

// Remove @ 14e2118a0

int __thiscall
TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UOptimusNodePin> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UOptimusNodePin **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UOptimusNodePin **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr))
        break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 14e2125c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UOptimusNodeGraph>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e212690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14e212760

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x80;
  if (*(void **)(_Dst + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x68));
  }
  if (*(void **)(_Dst + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x58));
  }
  if (*(void **)(_Dst + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x40));
  }
  if (*(void **)(_Dst + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x28));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x80,(longlong)iVar4 << 7);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14e212870

void __thiscall
TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FOptimusAction,1> *_Dst;
  
  _Dst = (TSharedPtr<FOptimusAction,1> *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x10)
  ;
  DestructItems<TSharedPtr<FOptimusAction,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14e2128f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FHalfEdgeBuffers *_Dst;
  int iVar1;
  
  _Dst = (FHalfEdgeBuffers *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FHalfEdgeBuffers,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14e2190d0

void __thiscall
TArray<UActorComponent_*,TSizedDefaultAllocator<32>_>::Reset
          (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

