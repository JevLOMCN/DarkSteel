// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 7

// operator= @ 142e155d0

TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<int,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<int,1>,int>
              ((TSharedPtr<int,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<int,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<int,1>,TSharedPtr<int,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142e15670

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142e15710

TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
          *this,TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
              ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142e157b0

TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
              ((TSharedPtr<FWidgetReflectorNodeBase,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedPtr<FWidgetReflectorNodeBase,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142e15850

TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
            *this,TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
              ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142e158f0

TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 142ef90e0

void __thiscall
TArray<FInputEventVisualizer::FKeyEventInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInputEventVisualizer::FKeyEventInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FKeyEventInfo *_Dst;
  
  _Dst = (FKeyEventInfo *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<FInputEventVisualizer::FKeyEventInfo,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

