// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FVisualLogEvent @ 1489b5760

FVisualLogEvent * __thiscall
FVisualLogEvent::FVisualLogEvent(FVisualLogEvent *this,FVisualLogEvent *param_1)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  
  pTVar1 = &this->EventTags;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->EventTags;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  (this->UserFriendlyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserFriendlyDesc).Data.AllocatorInstance.Data =
       (param_1->UserFriendlyDesc).Data.AllocatorInstance.Data;
  (param_1->UserFriendlyDesc).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserFriendlyDesc).Data.ArrayNum = (param_1->UserFriendlyDesc).Data.ArrayNum;
  (this->UserFriendlyDesc).Data.ArrayMax = (param_1->UserFriendlyDesc).Data.ArrayMax;
  (param_1->UserFriendlyDesc).Data.ArrayNum = 0;
  (param_1->UserFriendlyDesc).Data.ArrayMax = 0;
  (this->Verbosity).Value = (param_1->Verbosity).Value;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->EventTags).field_0x8 = 0;
  *(undefined8 *)&(this->EventTags).field_0x20 = 0;
  *(undefined4 *)&(this->EventTags).field_0x28 = 0;
  *(undefined4 *)&(this->EventTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventTags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventTags).field_0x34 = 0;
  *(undefined8 *)&(this->EventTags).field_0x40 = 0;
  *(undefined4 *)&(this->EventTags).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->EventTags).field_0x10;
    *(undefined4 *)&(this->EventTags).field_0x8 = *(undefined4 *)&(param_1->EventTags).field_0x8;
    _Src = &(param_1->EventTags).field_0x10;
    *(undefined4 *)&(this->EventTags).field_0xc = *(undefined4 *)&(param_1->EventTags).field_0xc;
    *(undefined8 *)&(param_1->EventTags).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->EventTags).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->EventTags).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->EventTags).field_0x20 = *(undefined8 *)&(param_1->EventTags).field_0x20
      ;
      *(undefined8 *)&(param_1->EventTags).field_0x20 = 0;
      *(undefined4 *)&(this->EventTags).field_0x28 = *(undefined4 *)&(param_1->EventTags).field_0x28
      ;
      *(undefined4 *)&(this->EventTags).field_0x2c = *(undefined4 *)&(param_1->EventTags).field_0x2c
      ;
      *(undefined8 *)&(param_1->EventTags).field_0x28 = 0;
    }
    *(undefined4 *)&(this->EventTags).field_0x30 = *(undefined4 *)&(param_1->EventTags).field_0x30;
    *(undefined4 *)&(this->EventTags).field_0x34 = *(undefined4 *)&(param_1->EventTags).field_0x34;
    *(undefined4 *)&(param_1->EventTags).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->EventTags).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->EventTags).field_0x40 == 0) {
    *(undefined4 *)&(this->EventTags).field_0x38 = *(undefined4 *)&(param_1->EventTags).field_0x38;
  }
  pvVar3 = *(void **)&(this->EventTags).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->EventTags).field_0x40 = *(undefined8 *)&(param_1->EventTags).field_0x40;
  *(undefined8 *)&(param_1->EventTags).field_0x40 = 0;
  *(undefined4 *)&(this->EventTags).field_0x48 = *(undefined4 *)&(param_1->EventTags).field_0x48;
  *(undefined4 *)&(param_1->EventTags).field_0x48 = 0;
  this->Counter = param_1->Counter;
  this->UserData = param_1->UserData;
  this->TagName = param_1->TagName;
  return this;
}

