// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FDisplayStringsForLocalizationTarget @ 141733ed0

FDisplayStringsForLocalizationTarget * __thiscall
FTextLocalizationManager::FDisplayStringsForLocalizationTarget::FDisplayStringsForLocalizationTarget
          (FDisplayStringsForLocalizationTarget *this,FDisplayStringsForLocalizationTarget *param_1)

{
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  
  pTVar1 = &this->TextIds;
  (this->LocalizationTargetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &param_1->TextIds;
  (this->LocalizationTargetPath).Data.AllocatorInstance.Data =
       (param_1->LocalizationTargetPath).Data.AllocatorInstance.Data;
  (param_1->LocalizationTargetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalizationTargetPath).Data.ArrayNum = (param_1->LocalizationTargetPath).Data.ArrayNum;
  (this->LocalizationTargetPath).Data.ArrayMax = (param_1->LocalizationTargetPath).Data.ArrayMax;
  (param_1->LocalizationTargetPath).Data.ArrayNum = 0;
  (param_1->LocalizationTargetPath).Data.ArrayMax = 0;
  *(undefined8 *)&pTVar1->Elements = 0;
  *(undefined8 *)&(this->TextIds).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TextIds).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TextIds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TextIds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TextIds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextIds).Elements.field_0x34 = 0;
  (this->TextIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TextIds).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Dst = &(this->TextIds).Elements.field_0x10;
    *(undefined4 *)&(this->TextIds).Elements.field_0x8 =
         *(undefined4 *)&(param_1->TextIds).Elements.field_0x8;
    _Src = &(param_1->TextIds).Elements.field_0x10;
    *(undefined4 *)&(this->TextIds).Elements.field_0xc =
         *(undefined4 *)&(param_1->TextIds).Elements.field_0xc;
    *(undefined8 *)&(param_1->TextIds).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->TextIds).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->TextIds).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->TextIds).Elements.field_0x20 =
           *(undefined8 *)&(param_1->TextIds).Elements.field_0x20;
      *(undefined8 *)&(param_1->TextIds).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->TextIds).Elements.field_0x28 =
           *(undefined4 *)&(param_1->TextIds).Elements.field_0x28;
      *(undefined4 *)&(this->TextIds).Elements.field_0x2c =
           *(undefined4 *)&(param_1->TextIds).Elements.field_0x2c;
      *(undefined8 *)&(param_1->TextIds).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->TextIds).Elements.field_0x30 =
         *(undefined4 *)&(param_1->TextIds).Elements.field_0x30;
    *(undefined4 *)&(this->TextIds).Elements.field_0x34 =
         *(undefined4 *)&(param_1->TextIds).Elements.field_0x34;
    *(undefined4 *)&(param_1->TextIds).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->TextIds).Elements.field_0x34 = 0;
  }
  if ((param_1->TextIds).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->TextIds).Hash.InlineData =
         *(undefined4 *)(param_1->TextIds).Hash.InlineData;
  }
  FVar4 = (this->TextIds).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->TextIds).Hash.SecondaryData = (param_1->TextIds).Hash.SecondaryData;
  (param_1->TextIds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TextIds).HashSize = (param_1->TextIds).HashSize;
  (param_1->TextIds).HashSize = 0;
  this->bIsMounted = param_1->bIsMounted;
  return this;
}

