// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 2

// FTrackedSubject @ 14cfe9d10

FTrackedSubject * __thiscall
FTrackedSubject::FTrackedSubject(FTrackedSubject *this,FTrackedSubject *param_1)

{
  FFrameRate FVar1;
  
  (this->RefSkeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton).BoneNames.AllocatorInstance.Data =
       (param_1->RefSkeleton).BoneNames.AllocatorInstance.Data;
  (param_1->RefSkeleton).BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton).BoneNames.ArrayNum = (param_1->RefSkeleton).BoneNames.ArrayNum;
  (this->RefSkeleton).BoneNames.ArrayMax = (param_1->RefSkeleton).BoneNames.ArrayMax;
  (param_1->RefSkeleton).BoneNames.ArrayNum = 0;
  (param_1->RefSkeleton).BoneNames.ArrayMax = 0;
  (this->RefSkeleton).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton).BoneParents.AllocatorInstance.Data =
       (param_1->RefSkeleton).BoneParents.AllocatorInstance.Data;
  (param_1->RefSkeleton).BoneParents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefSkeleton).BoneParents.ArrayNum = (param_1->RefSkeleton).BoneParents.ArrayNum;
  (this->RefSkeleton).BoneParents.ArrayMax = (param_1->RefSkeleton).BoneParents.ArrayMax;
  (param_1->RefSkeleton).BoneParents.ArrayNum = 0;
  (param_1->RefSkeleton).BoneParents.ArrayMax = 0;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).AllocatorInstance.Data = (param_1->Transforms).AllocatorInstance.Data;
  (param_1->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = (param_1->Transforms).ArrayNum;
  (this->Transforms).ArrayMax = (param_1->Transforms).ArrayMax;
  (param_1->Transforms).ArrayNum = 0;
  (param_1->Transforms).ArrayMax = 0;
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).AllocatorInstance.Data = (param_1->Curves).AllocatorInstance.Data;
  (param_1->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = (param_1->Curves).ArrayNum;
  (this->Curves).ArrayMax = (param_1->Curves).ArrayMax;
  (param_1->Curves).ArrayNum = 0;
  (param_1->Curves).ArrayMax = 0;
  *(undefined8 *)&(this->MetaData).StringMetaData = 0;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetaData).StringMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->MetaData,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->MetaData);
  FVar1 = (param_1->MetaData).SceneTime.Rate;
  (this->MetaData).SceneTime.Time = (param_1->MetaData).SceneTime.Time;
  (this->MetaData).SceneTime.Rate = FVar1;
  this->Time = param_1->Time;
  return this;
}

// ~FTrackedSubject @ 14cfea0c0

void __thiscall FTrackedSubject::~FTrackedSubject(FTrackedSubject *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MetaData).StringMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetaData).StringMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetaData);
  pFVar2 = (this->Curves).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RefSkeleton).BoneParents.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RefSkeleton).BoneNames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

