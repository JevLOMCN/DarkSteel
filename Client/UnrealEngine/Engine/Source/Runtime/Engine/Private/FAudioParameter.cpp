// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FAudioParameter @ 1476861e0

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter(FAudioParameter *this,FAudioParameter *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  UObject *pUVar9;
  FScriptContainerElement *pFVar10;
  TSharedPtr<Audio::IProxyData,1> *pTVar11;
  
  this->ParamName = param_1->ParamName;
  this->FloatParam = param_1->FloatParam;
  this->BoolParam = param_1->BoolParam;
  this->IntParam = param_1->IntParam;
  pUVar9 = (param_1->ObjectParam).field0_0x0.DebugPtr;
  (this->ObjectParam).field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  ::FString::FString(&this->StringParam,&param_1->StringParam);
  pTVar1 = &this->ArrayFloatParam;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayFloatParam).ArrayMax;
  iVar8 = (param_1->ArrayFloatParam).ArrayNum;
  pFVar10 = (param_1->ArrayFloatParam).AllocatorInstance.Data;
  (this->ArrayFloatParam).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar1->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 2);
  }
  pTVar3 = &this->ArrayBoolParam;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayBoolParam).ArrayMax;
  iVar8 = (param_1->ArrayBoolParam).ArrayNum;
  pFVar10 = (param_1->ArrayBoolParam).AllocatorInstance.Data;
  (this->ArrayBoolParam).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,0,&pTVar3->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar10,(longlong)iVar8);
  }
  pTVar4 = &this->ArrayIntParam;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayIntParam).ArrayMax;
  iVar8 = (param_1->ArrayIntParam).ArrayNum;
  pFVar10 = (param_1->ArrayIntParam).AllocatorInstance.Data;
  (this->ArrayIntParam).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar8,0,&pTVar4->AllocatorInstance,iVar8,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 2);
  }
  pTVar5 = &this->ArrayObjectParam;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayObjectParam).ArrayMax;
  iVar8 = (param_1->ArrayObjectParam).ArrayNum;
  pFVar10 = (param_1->ArrayObjectParam).AllocatorInstance.Data;
  (this->ArrayObjectParam).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&pTVar5->AllocatorInstance,iVar8,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar5->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar10,iVar8);
  }
  pTVar6 = &this->ArrayStringParam;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ArrayStringParam).ArrayMax;
  iVar8 = (param_1->ArrayStringParam).ArrayNum;
  pFVar10 = (param_1->ArrayStringParam).AllocatorInstance.Data;
  (this->ArrayStringParam).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,0,&pTVar6->AllocatorInstance,iVar8,piVar2);
    ConstructItems<FString,FString,int>((pTVar6->AllocatorInstance).Data,(FString *)pFVar10,iVar8);
  }
  pTVar7 = &this->ObjectProxies;
  this->ParamType = param_1->ParamType;
  this->TypeName = param_1->TypeName;
  piVar2 = &(this->ObjectProxies).ArrayMax;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar8 = (param_1->ObjectProxies).ArrayNum;
  pTVar11 = (TSharedPtr<Audio::IProxyData,1> *)(param_1->ObjectProxies).AllocatorInstance.Data;
  (this->ObjectProxies).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,0,&pTVar7->AllocatorInstance,iVar8,piVar2);
    ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
              ((pTVar7->AllocatorInstance).Data,pTVar11,iVar8);
  }
  return this;
}

// FAudioParameter @ 147686470

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter
          (FAudioParameter *this,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->ParamName = param_1;
  pTVar1 = &this->ArrayObjectParam;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  piVar2 = &(this->ArrayObjectParam).ArrayMax;
  this->IntParam = 0;
  (this->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringParam).Data.ArrayNum = 0;
  (this->StringParam).Data.ArrayMax = 0;
  (this->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayFloatParam).ArrayNum = 0;
  (this->ArrayFloatParam).ArrayMax = 0;
  (this->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBoolParam).ArrayNum = 0;
  (this->ArrayBoolParam).ArrayMax = 0;
  (this->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayIntParam).ArrayNum = 0;
  (this->ArrayIntParam).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->ArrayObjectParam).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UObject>,UObject_*,int>
              ((pTVar1->AllocatorInstance).Data,(UObject **)pFVar4,iVar3);
  }
  (this->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).ArrayNum = 0;
  (this->ArrayStringParam).ArrayMax = 0;
  this->ParamType = ObjectArray;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// FAudioParameter @ 147686560

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter(FAudioParameter *this,FName param_1,FString *param_2)

{
  this->ParamName = param_1;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  this->IntParam = 0;
  (this->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  ::FString::FString(&this->StringParam,param_2);
  (this->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayFloatParam).ArrayNum = 0;
  (this->ArrayFloatParam).ArrayMax = 0;
  (this->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBoolParam).ArrayNum = 0;
  (this->ArrayBoolParam).ArrayMax = 0;
  (this->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayIntParam).ArrayNum = 0;
  (this->ArrayIntParam).ArrayMax = 0;
  (this->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).ArrayNum = 0;
  (this->ArrayObjectParam).ArrayMax = 0;
  (this->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).ArrayNum = 0;
  (this->ArrayStringParam).ArrayMax = 0;
  this->ParamType = String;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// operator= @ 14768aea0

FAudioParameter * __thiscall
FAudioParameter::operator=(FAudioParameter *this,FAudioParameter *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  
  this->ParamName = param_1->ParamName;
  this->FloatParam = param_1->FloatParam;
  this->BoolParam = param_1->BoolParam;
  this->IntParam = param_1->IntParam;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 = (param_1->ObjectParam).field0_0x0.DebugPtr, pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  pFVar1 = &param_1->StringParam;
  pFVar2 = &this->StringParam;
  (this->ObjectParam).field0_0x0 = (param_1->ObjectParam).field0_0x0;
  if (pFVar2 != pFVar1) {
    pFVar16 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->StringParam).Data.ArrayNum = (param_1->StringParam).Data.ArrayNum;
    (this->StringParam).Data.ArrayMax = (param_1->StringParam).Data.ArrayMax;
    (param_1->StringParam).Data.ArrayNum = 0;
    (param_1->StringParam).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->ArrayFloatParam;
  pTVar4 = &this->ArrayFloatParam;
  if (pTVar4 != pTVar3) {
    pFVar16 = (pTVar4->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayFloatParam).ArrayNum = (param_1->ArrayFloatParam).ArrayNum;
    (this->ArrayFloatParam).ArrayMax = (param_1->ArrayFloatParam).ArrayMax;
    (param_1->ArrayFloatParam).ArrayNum = 0;
    (param_1->ArrayFloatParam).ArrayMax = 0;
  }
  pTVar5 = &param_1->ArrayBoolParam;
  pTVar6 = &this->ArrayBoolParam;
  if (pTVar6 != pTVar5) {
    pFVar16 = (pTVar6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayBoolParam).ArrayNum = (param_1->ArrayBoolParam).ArrayNum;
    (this->ArrayBoolParam).ArrayMax = (param_1->ArrayBoolParam).ArrayMax;
    (param_1->ArrayBoolParam).ArrayNum = 0;
    (param_1->ArrayBoolParam).ArrayMax = 0;
  }
  pTVar7 = &param_1->ArrayIntParam;
  pTVar8 = &this->ArrayIntParam;
  if (pTVar8 != pTVar7) {
    pFVar16 = (pTVar8->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayIntParam).ArrayNum = (param_1->ArrayIntParam).ArrayNum;
    (this->ArrayIntParam).ArrayMax = (param_1->ArrayIntParam).ArrayMax;
    (param_1->ArrayIntParam).ArrayNum = 0;
    (param_1->ArrayIntParam).ArrayMax = 0;
  }
  pTVar9 = &param_1->ArrayObjectParam;
  pTVar10 = &this->ArrayObjectParam;
  if (pTVar10 != pTVar9) {
    pFVar16 = (pTVar10->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayObjectParam).ArrayNum = (param_1->ArrayObjectParam).ArrayNum;
    (this->ArrayObjectParam).ArrayMax = (param_1->ArrayObjectParam).ArrayMax;
    (param_1->ArrayObjectParam).ArrayNum = 0;
    (param_1->ArrayObjectParam).ArrayMax = 0;
  }
  pTVar11 = &param_1->ArrayStringParam;
  pTVar12 = &this->ArrayStringParam;
  if (pTVar12 != pTVar11) {
    DestructItems<FString,int>
              ((FString *)(pTVar12->AllocatorInstance).Data,(this->ArrayStringParam).ArrayNum);
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar12->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
    (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ArrayStringParam).ArrayNum = (param_1->ArrayStringParam).ArrayNum;
    (this->ArrayStringParam).ArrayMax = (param_1->ArrayStringParam).ArrayMax;
    (param_1->ArrayStringParam).ArrayNum = 0;
    (param_1->ArrayStringParam).ArrayMax = 0;
  }
  pTVar13 = &param_1->ObjectProxies;
  this->ParamType = param_1->ParamType;
  pTVar14 = &this->ObjectProxies;
  this->TypeName = param_1->TypeName;
  if (pTVar14 != pTVar13) {
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pTVar14->AllocatorInstance).Data,
               (this->ObjectProxies).ArrayNum);
    pFVar16 = (pTVar14->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar14->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ObjectProxies).ArrayNum = (param_1->ObjectProxies).ArrayNum;
    (this->ObjectProxies).ArrayMax = (param_1->ObjectProxies).ArrayMax;
    (param_1->ObjectProxies).ArrayNum = 0;
    (param_1->ObjectProxies).ArrayMax = 0;
  }
  return this;
}

