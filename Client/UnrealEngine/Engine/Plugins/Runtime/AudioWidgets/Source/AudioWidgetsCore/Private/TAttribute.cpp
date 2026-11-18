// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 5

// operator= @ 14d7e7900

TAttribute<FSlateColor> * __thiscall
TAttribute<FSlateColor>::operator=(TAttribute<FSlateColor> *this,TAttribute<FSlateColor> *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->Value).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) = uVar2;
  EVar3 = (param_1->Value).ColorTableId;
  uVar4 = *(undefined2 *)&(param_1->Value).field_0x12;
  (this->Value).ColorUseRule = (param_1->Value).ColorUseRule;
  (this->Value).ColorTableId = EVar3;
  *(undefined2 *)&(this->Value).field_0x12 = uVar4;
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d7e7a20

TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::operator=
          (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (this != param_1) {
    iVar2 = (param_1->Value).ArrayNum;
    iVar3 = (this->Value).ArrayMax;
    piVar1 = &(this->Value).ArrayMax;
    _Src = (param_1->Value).AllocatorInstance.Data;
    (this->Value).ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar2,iVar3,(ForAnyElementType *)this,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0xc);
      }
    }
  }
  this->bIsSet = param_1->bIsSet;
  if (&param_1->Getter != &this->Getter) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Get @ 14d7e7f00

TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::Get
          (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if (((*(int *)&(this->Getter).field_0x10 != 0) &&
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
               (FReadAccessScope *)(local_38 + 0x10));
    plVar3 = (longlong *)0x0;
    if (*(int *)&(this->Getter).field_0x10 != 0) {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_38 + 0x10));
    if (this != (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *)local_38)
    {
      pFVar1 = (this->Value).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->Value).AllocatorInstance.Data = (FScriptContainerElement *)local_38._0_8_;
      (this->Value).ArrayNum = local_38._8_4_;
      (this->Value).ArrayMax = local_38._12_4_;
      local_38._8_4_ = 0;
      local_38._12_4_ = 0;
      local_38._0_8_ = (FScriptContainerElement *)0x0;
    }
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    return &this->Value;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// IdenticalTo @ 14d7e8580

bool __thiscall
TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IdenticalTo
          (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this,
          TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 0x38))(), cVar2 == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,&local_38);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar5 + 0x38))(), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (cVar2 == cVar3) {
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_38);
      lVar7 = 0;
      lVar6 = lVar7;
      if ((*(int *)&(this->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar6 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_38);
      if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 != (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,local_res8);
        lVar7 = *plVar5;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      return lVar6 == lVar7;
    }
    if (((this->bIsSet == param_1->bIsSet) &&
        (iVar1 = (this->Value).ArrayNum, iVar1 == (param_1->Value).ArrayNum)) &&
       (bVar4 = CompareItems<FAudioMeterChannelInfo,int>
                          ((FAudioMeterChannelInfo *)(this->Value).AllocatorInstance.Data,
                           (FAudioMeterChannelInfo *)(param_1->Value).AllocatorInstance.Data,iVar1),
       bVar4)) {
      return true;
    }
  }
  return false;
}

// IsBound @ 14d7e8720

bool __thiscall
TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_>::IsBound
          (TAttribute<TArray<FAudioMeterChannelInfo,TSizedDefaultAllocator<32>_>_> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

