// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// FAnimationPayloadQuery @ 14e67c080

FAnimationPayloadQuery * __thiscall
UE::Interchange::FAnimationPayloadQuery::FAnimationPayloadQuery
          (FAnimationPayloadQuery *this,FAnimationPayloadQuery *param_1)

{
  double dVar1;
  
  ::FString::FString(&this->SceneNodeUniqueID,&param_1->SceneNodeUniqueID);
  ::FString::FString(&(this->PayloadKey).UniqueId,&(param_1->PayloadKey).UniqueId);
  (this->PayloadKey).Type = (param_1->PayloadKey).Type;
  dVar1 = (param_1->TimeDescription).RangeStartSecond;
  (this->TimeDescription).BakeFrequency = (param_1->TimeDescription).BakeFrequency;
  (this->TimeDescription).RangeStartSecond = dVar1;
  (this->TimeDescription).RangeStopSecond = (param_1->TimeDescription).RangeStopSecond;
  (this->HashStringCache).field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->HashStringCache).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->HashStringCache).field0_0x0 + 0xc) = 0xffffffff;
  if (*(int *)((longlong)&(param_1->HashStringCache).field0_0x0 + 0xc) != -1) {
    ::FString::FString((FString *)&this->HashStringCache,(FString *)&param_1->HashStringCache);
  }
  return this;
}

// ~FAnimationPayloadQuery @ 14e6919b0

void __thiscall
UE::Interchange::FAnimationPayloadQuery::~FAnimationPayloadQuery(FAnimationPayloadQuery *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((*(int *)((longlong)&(this->HashStringCache).field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (this->HashStringCache).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PayloadKey).UniqueId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SceneNodeUniqueID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

