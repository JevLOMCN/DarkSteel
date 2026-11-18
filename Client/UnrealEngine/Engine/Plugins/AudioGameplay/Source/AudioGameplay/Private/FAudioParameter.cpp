// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 5

// FAudioParameter @ 14d987320

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter
          (FAudioParameter *this,FName param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->ParamName = param_1;
  pTVar1 = &this->ArrayIntParam;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  piVar2 = &(this->ArrayIntParam).ArrayMax;
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
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->ArrayIntParam).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  (this->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).ArrayNum = 0;
  (this->ArrayObjectParam).ArrayMax = 0;
  (this->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).ArrayNum = 0;
  (this->ArrayStringParam).ArrayMax = 0;
  this->ParamType = IntegerArray;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// FAudioParameter @ 14d987410

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter
          (FAudioParameter *this,FName param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->ParamName = param_1;
  pTVar1 = &this->ArrayFloatParam;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  piVar2 = &(this->ArrayFloatParam).ArrayMax;
  this->IntParam = 0;
  (this->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringParam).Data.ArrayNum = 0;
  (this->StringParam).Data.ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->ArrayFloatParam).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
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
  this->ParamType = FloatArray;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// FAudioParameter @ 14d987500

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter
          (FAudioParameter *this,FName param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->ParamName = param_1;
  pTVar1 = &this->ArrayStringParam;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  piVar2 = &(this->ArrayStringParam).ArrayMax;
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
  (this->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).ArrayNum = 0;
  (this->ArrayObjectParam).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->ArrayStringParam).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->ParamType = StringArray;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// FAudioParameter @ 14d9875f0

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter
          (FAudioParameter *this,FName param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->ParamName = param_1;
  pTVar1 = &this->ArrayBoolParam;
  this->FloatParam = 0.0;
  this->BoolParam = false;
  piVar2 = &(this->ArrayBoolParam).ArrayMax;
  this->IntParam = 0;
  (this->ObjectParam).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringParam).Data.ArrayNum = 0;
  (this->StringParam).Data.ArrayMax = 0;
  (this->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayFloatParam).ArrayNum = 0;
  (this->ArrayFloatParam).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->ArrayBoolParam).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  (this->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayIntParam).ArrayNum = 0;
  (this->ArrayIntParam).ArrayMax = 0;
  (this->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).ArrayNum = 0;
  (this->ArrayObjectParam).ArrayMax = 0;
  (this->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).ArrayNum = 0;
  (this->ArrayStringParam).ArrayMax = 0;
  this->ParamType = BooleanArray;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = 0;
  (this->ObjectProxies).ArrayMax = 0;
  return this;
}

// FindOrAddParam @ 14d98cf60

FAudioParameter * __cdecl
FAudioParameter::FindOrAddParam
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1,FName param_2)

{
  int iVar1;
  FAudioParameter *pFVar2;
  FAudioParameter *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_2 == (FName)0x0) {
    return (FAudioParameter *)0x0;
  }
  pFVar3 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->ParamName == param_2) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  pFVar3 = (FAudioParameter *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0xa0);
  DefaultConstructItems<FAudioParameter,int>(pFVar3,1);
  pFVar3->ParamName = param_2;
  return pFVar3;
}

