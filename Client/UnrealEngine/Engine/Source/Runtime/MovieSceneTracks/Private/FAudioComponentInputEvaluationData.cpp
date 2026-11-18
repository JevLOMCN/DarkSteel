// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FAudioComponentInputEvaluationData @ 14675f600

FAudioComponentInputEvaluationData * __thiscall
UE::MovieScene::FAudioComponentInputEvaluationData::FAudioComponentInputEvaluationData
          (FAudioComponentInputEvaluationData *this,FAudioComponentInputEvaluationData *param_1)

{
  undefined1 *puVar1;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar2;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *pTVar3;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar4;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar5;
  void *pvVar6;
  undefined1 *puVar7;
  
  *(undefined8 *)&this->Inputs_Float = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Float).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Float).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Float).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x48 = 0;
  if (this != param_1) {
    puVar1 = &(this->Inputs_Float).field_0x10;
    *(undefined8 *)&this->Inputs_Float = *(undefined8 *)&param_1->Inputs_Float;
    *(undefined8 *)&param_1->Inputs_Float = 0;
    *(undefined4 *)&(this->Inputs_Float).field_0x8 =
         *(undefined4 *)&(param_1->Inputs_Float).field_0x8;
    *(undefined4 *)&(this->Inputs_Float).field_0xc =
         *(undefined4 *)&(param_1->Inputs_Float).field_0xc;
    *(undefined8 *)&(param_1->Inputs_Float).field_0x8 = 0;
    puVar7 = &(param_1->Inputs_Float).field_0x10;
    if (puVar1 != puVar7) {
      if (*(longlong *)&(param_1->Inputs_Float).field_0x20 == 0) {
        memmove(puVar1,puVar7,0x10);
      }
      pvVar6 = *(void **)&(this->Inputs_Float).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->Inputs_Float).field_0x20 =
           *(undefined8 *)&(param_1->Inputs_Float).field_0x20;
      *(undefined8 *)&(param_1->Inputs_Float).field_0x20 = 0;
      *(undefined4 *)&(this->Inputs_Float).field_0x28 =
           *(undefined4 *)&(param_1->Inputs_Float).field_0x28;
      *(undefined4 *)&(this->Inputs_Float).field_0x2c =
           *(undefined4 *)&(param_1->Inputs_Float).field_0x2c;
      *(undefined8 *)&(param_1->Inputs_Float).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Inputs_Float).field_0x30 =
         *(undefined4 *)&(param_1->Inputs_Float).field_0x30;
    *(undefined4 *)&(this->Inputs_Float).field_0x34 =
         *(undefined4 *)&(param_1->Inputs_Float).field_0x34;
    *(undefined4 *)&(param_1->Inputs_Float).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Inputs_Float).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Inputs_Float).field_0x40 == 0) {
    *(undefined4 *)&(this->Inputs_Float).field_0x38 =
         *(undefined4 *)&(param_1->Inputs_Float).field_0x38;
  }
  pvVar6 = *(void **)&(this->Inputs_Float).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  *(undefined8 *)&(this->Inputs_Float).field_0x40 =
       *(undefined8 *)&(param_1->Inputs_Float).field_0x40;
  *(undefined8 *)&(param_1->Inputs_Float).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Float).field_0x48 =
       *(undefined4 *)&(param_1->Inputs_Float).field_0x48;
  *(undefined4 *)&(param_1->Inputs_Float).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->Inputs_String,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&param_1->Inputs_String);
  pTVar2 = &this->Inputs_Bool;
  *(undefined8 *)pTVar2 = 0;
  pTVar3 = &param_1->Inputs_Bool;
  *(undefined8 *)&(this->Inputs_Bool).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Bool).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Bool).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Bool).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = 0;
  if (pTVar2 != pTVar3) {
    puVar1 = &(param_1->Inputs_Bool).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar3;
    puVar7 = &(this->Inputs_Bool).field_0x10;
    *(undefined8 *)pTVar3 = 0;
    *(undefined4 *)&(this->Inputs_Bool).field_0x8 = *(undefined4 *)&(param_1->Inputs_Bool).field_0x8
    ;
    *(undefined4 *)&(this->Inputs_Bool).field_0xc = *(undefined4 *)&(param_1->Inputs_Bool).field_0xc
    ;
    *(undefined8 *)&(param_1->Inputs_Bool).field_0x8 = 0;
    if (puVar7 != puVar1) {
      if (*(longlong *)&(param_1->Inputs_Bool).field_0x20 == 0) {
        memmove(puVar7,puVar1,0x10);
      }
      pvVar6 = *(void **)&(this->Inputs_Bool).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->Inputs_Bool).field_0x20 =
           *(undefined8 *)&(param_1->Inputs_Bool).field_0x20;
      *(undefined8 *)&(param_1->Inputs_Bool).field_0x20 = 0;
      *(undefined4 *)&(this->Inputs_Bool).field_0x28 =
           *(undefined4 *)&(param_1->Inputs_Bool).field_0x28;
      *(undefined4 *)&(this->Inputs_Bool).field_0x2c =
           *(undefined4 *)&(param_1->Inputs_Bool).field_0x2c;
      *(undefined8 *)&(param_1->Inputs_Bool).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Inputs_Bool).field_0x30 =
         *(undefined4 *)&(param_1->Inputs_Bool).field_0x30;
    *(undefined4 *)&(this->Inputs_Bool).field_0x34 =
         *(undefined4 *)&(param_1->Inputs_Bool).field_0x34;
    *(undefined4 *)&(param_1->Inputs_Bool).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Inputs_Bool).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Inputs_Bool).field_0x40 == 0) {
    *(undefined4 *)&(this->Inputs_Bool).field_0x38 =
         *(undefined4 *)&(param_1->Inputs_Bool).field_0x38;
  }
  pvVar6 = *(void **)&(this->Inputs_Bool).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  *(undefined8 *)&(this->Inputs_Bool).field_0x40 = *(undefined8 *)&(param_1->Inputs_Bool).field_0x40
  ;
  *(undefined8 *)&(param_1->Inputs_Bool).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = *(undefined4 *)&(param_1->Inputs_Bool).field_0x48
  ;
  pTVar4 = &this->Inputs_Int;
  *(undefined4 *)&(param_1->Inputs_Bool).field_0x48 = 0;
  pTVar5 = &param_1->Inputs_Int;
  *(undefined8 *)pTVar4 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x8 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x20 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x28 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x2c = 0x80;
  *(undefined4 *)&(this->Inputs_Int).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Inputs_Int).field_0x34 = 0;
  *(undefined8 *)&(this->Inputs_Int).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = 0;
  if (pTVar4 != pTVar5) {
    puVar1 = &(param_1->Inputs_Int).field_0x10;
    *(undefined8 *)pTVar4 = *(undefined8 *)pTVar5;
    puVar7 = &(this->Inputs_Int).field_0x10;
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)&(this->Inputs_Int).field_0x8 = *(undefined4 *)&(param_1->Inputs_Int).field_0x8;
    *(undefined4 *)&(this->Inputs_Int).field_0xc = *(undefined4 *)&(param_1->Inputs_Int).field_0xc;
    *(undefined8 *)&(param_1->Inputs_Int).field_0x8 = 0;
    if (puVar7 != puVar1) {
      if (*(longlong *)&(param_1->Inputs_Int).field_0x20 == 0) {
        memmove(puVar7,puVar1,0x10);
      }
      pvVar6 = *(void **)&(this->Inputs_Int).field_0x20;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      *(undefined8 *)&(this->Inputs_Int).field_0x20 =
           *(undefined8 *)&(param_1->Inputs_Int).field_0x20;
      *(undefined8 *)&(param_1->Inputs_Int).field_0x20 = 0;
      *(undefined4 *)&(this->Inputs_Int).field_0x28 =
           *(undefined4 *)&(param_1->Inputs_Int).field_0x28;
      *(undefined4 *)&(this->Inputs_Int).field_0x2c =
           *(undefined4 *)&(param_1->Inputs_Int).field_0x2c;
      *(undefined8 *)&(param_1->Inputs_Int).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Inputs_Int).field_0x30 = *(undefined4 *)&(param_1->Inputs_Int).field_0x30
    ;
    *(undefined4 *)&(this->Inputs_Int).field_0x34 = *(undefined4 *)&(param_1->Inputs_Int).field_0x34
    ;
    *(undefined4 *)&(param_1->Inputs_Int).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Inputs_Int).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->Inputs_Int).field_0x40 == 0) {
    *(undefined4 *)&(this->Inputs_Int).field_0x38 = *(undefined4 *)&(param_1->Inputs_Int).field_0x38
    ;
  }
  pvVar6 = *(void **)&(this->Inputs_Int).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  *(undefined8 *)&(this->Inputs_Int).field_0x40 = *(undefined8 *)&(param_1->Inputs_Int).field_0x40;
  *(undefined8 *)&(param_1->Inputs_Int).field_0x40 = 0;
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = *(undefined4 *)&(param_1->Inputs_Int).field_0x48;
  *(undefined4 *)&(param_1->Inputs_Int).field_0x48 = 0;
  (this->Inputs_Trigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs_Trigger).AllocatorInstance.Data = (param_1->Inputs_Trigger).AllocatorInstance.Data;
  (param_1->Inputs_Trigger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs_Trigger).ArrayNum = (param_1->Inputs_Trigger).ArrayNum;
  (this->Inputs_Trigger).ArrayMax = (param_1->Inputs_Trigger).ArrayMax;
  (param_1->Inputs_Trigger).ArrayNum = 0;
  (param_1->Inputs_Trigger).ArrayMax = 0;
  return this;
}

// ~FAudioComponentInputEvaluationData @ 146769870

void __thiscall
UE::MovieScene::FAudioComponentInputEvaluationData::~FAudioComponentInputEvaluationData
          (FAudioComponentInputEvaluationData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->Inputs_Trigger).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Inputs_Int).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Inputs_Int).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Int);
  *(undefined4 *)&(this->Inputs_Bool).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Inputs_Bool).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_Bool);
  *(undefined4 *)&(this->Inputs_String).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Inputs_String).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Inputs_String);
  *(undefined4 *)&(this->Inputs_Float).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Inputs_Float).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

