// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 4

// CloneData @ 14cfeabb0

FLiveLinkBaseFrameData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::CloneData
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  uint uVar1;
  UScriptStruct *this_00;
  UClass *pUVar2;
  FLiveLinkBaseFrameData *pFVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  this_00 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))();
  if (this_00 != (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar5 = (int)pUVar2->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar2->_padding_)) {
      iVar5 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
      uVar6 = (int)this_00->_padding_ + -1 + iVar5 & ~(iVar5 - 1U);
      uVar1 = 1;
      if (uVar6 != 0) {
        uVar1 = uVar6;
      }
      pFVar3 = FMemory::Malloc((longlong)(int)uVar1,0);
      (**(code **)(this_00->_padding_ + 0x2f8))(this_00,pFVar3,1);
      pvVar4 = (void *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))(this);
      UScriptStruct::CopyScriptStruct(this_00,pFVar3,pvVar4,1);
      return pFVar3;
    }
  }
  return (FLiveLinkBaseFrameData *)0x0;
}

// CloneData @ 14cfeac80

FLiveLinkBaseStaticData * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::CloneData
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  uint uVar1;
  UScriptStruct *this_00;
  UClass *pUVar2;
  FLiveLinkBaseStaticData *pFVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  this_00 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))();
  if (this_00 != (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar5 = (int)pUVar2->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar2->_padding_)) {
      iVar5 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
      uVar6 = (int)this_00->_padding_ + -1 + iVar5 & ~(iVar5 - 1U);
      uVar1 = 1;
      if (uVar6 != 0) {
        uVar1 = uVar6;
      }
      pFVar3 = FMemory::Malloc((longlong)(int)uVar1,0);
      (**(code **)(this_00->_padding_ + 0x2f8))(this_00,pFVar3,1);
      pvVar4 = (void *)(**(code **)((this->WrappedStruct)._padding_ + 0x10))(this);
      UScriptStruct::CopyScriptStruct(this_00,pFVar3,pvVar4,1);
      return pFVar3;
    }
  }
  return (FLiveLinkBaseStaticData *)0x0;
}

// GetStruct @ 14cfec990

UScriptStruct * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::GetStruct
          (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))();
  if (pUVar2 != (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UScriptStruct *)0x0;
}

// GetStruct @ 14cfec9e0

UScriptStruct * __thiscall
FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::GetStruct
          (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UScriptStruct *)(**(code **)((this->WrappedStruct)._padding_ + 0x20))();
  if (pUVar2 != (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UScriptStruct *)0x0;
}

