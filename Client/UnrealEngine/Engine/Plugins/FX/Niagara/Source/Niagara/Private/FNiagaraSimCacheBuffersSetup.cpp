// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraSimCacheBuffersSetup @ 149387250

FNiagaraSimCacheBuffersSetup * __thiscall
FNiagaraSimCacheBuffersSetup::FNiagaraSimCacheBuffersSetup
          (FNiagaraSimCacheBuffersSetup *this,FNiagaraSimCacheDataBuffersLayout *param_1,
          FNiagaraSimCacheDataBuffers *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  this->FloatDataNum = 0;
  this->HalfDataNum = 0;
  this->Int32DataNum = 0;
  this->IDToIndexTableNum = 0;
  this->InterpMappingNum = 0;
  this->FloatDataOffset = 0;
  this->HalfDataOffset = 0;
  this->Int32DataOffset = 0;
  this->IDToIndexTableOffset = 0;
  this->InterpMappingOffset = 0;
  this->BufferSize = 0;
  uVar4 = (uint)param_1->FloatCount * param_2->NumInstances;
  this->FloatDataNum = (ulonglong)uVar4;
  uVar6 = (ulonglong)((uint)param_1->HalfCount * param_2->NumInstances);
  this->HalfDataNum = uVar6;
  uVar7 = (ulonglong)((uint)param_1->Int32Count * param_2->NumInstances);
  this->Int32DataNum = uVar7;
  uVar3 = param_2->IDToIndexTableElements;
  this->IDToIndexTableNum = (ulonglong)uVar3;
  if (param_1->bAllowInterpolation != false) {
    uVar5 = (ulonglong)param_2->NumInstances;
  }
  lVar2 = (ulonglong)uVar4 * 4;
  this->HalfDataOffset = lVar2;
  this->InterpMappingNum = uVar5;
  uVar6 = uVar6 * 2 + 3 + lVar2 & 0xfffffffffffffffc;
  this->Int32DataOffset = uVar6;
  lVar2 = uVar6 + uVar7 * 4;
  lVar1 = lVar2 + (ulonglong)uVar3 * 4;
  this->IDToIndexTableOffset = lVar2;
  this->BufferSize = lVar1 + uVar5 * 4;
  this->InterpMappingOffset = lVar1;
  return this;
}

// SetArrayViews @ 1493b6570

bool __thiscall
FNiagaraSimCacheBuffersSetup::SetArrayViews
          (FNiagaraSimCacheBuffersSetup *this,FNiagaraSimCacheDataBuffers *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uStack_9c;
  uint uStack_8c;
  uint uStack_7c;
  uint uStack_6c;
  uint uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_c;
  
  puVar1 = (param_1->DataBuffer).View.DataPtr;
  if ((param_1->DataBuffer).View.ArrayNum == this->BufferSize) {
    lVar2 = this->FloatDataOffset;
    iVar4 = (int)this->FloatDataNum;
    if (iVar4 << 2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (param_1->FloatData).DataPtr = puVar1 + lVar2;
    *(ulonglong *)&(param_1->FloatData).ArrayNum = CONCAT44(uStack_4c,iVar4 << 2);
    lVar2 = this->HalfDataOffset;
    iVar4 = (int)this->HalfDataNum * 2;
    if (iVar4 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (param_1->HalfData).DataPtr = puVar1 + lVar2;
    *(ulonglong *)&(param_1->HalfData).ArrayNum = CONCAT44(uStack_3c,iVar4);
    lVar2 = this->Int32DataOffset;
    iVar4 = (int)this->Int32DataNum;
    if (iVar4 << 2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (param_1->Int32Data).DataPtr = puVar1 + lVar2;
    *(ulonglong *)&(param_1->Int32Data).ArrayNum = CONCAT44(uStack_2c,iVar4 << 2);
    iVar4 = (int)this->IDToIndexTableNum;
    lVar2 = this->IDToIndexTableOffset;
    if (iVar4 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (param_1->IDToIndexTable).DataPtr = (int *)(puVar1 + lVar2);
    *(ulonglong *)&(param_1->IDToIndexTable).ArrayNum = CONCAT44(uStack_1c,iVar4);
    iVar4 = (int)this->InterpMappingNum;
    lVar2 = this->InterpMappingOffset;
    if (iVar4 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    bVar5 = true;
    (param_1->InterpMapping).DataPtr = (uint *)(puVar1 + lVar2);
    *(ulonglong *)&(param_1->InterpMapping).ArrayNum = CONCAT44(uStack_c,iVar4);
  }
  else {
    bVar5 = false;
    (param_1->FloatData).DataPtr = (uchar *)0x0;
    *(ulonglong *)&(param_1->FloatData).ArrayNum = (ulonglong)uStack_9c << 0x20;
    (param_1->HalfData).DataPtr = (uchar *)0x0;
    *(ulonglong *)&(param_1->HalfData).ArrayNum = (ulonglong)uStack_8c << 0x20;
    (param_1->Int32Data).DataPtr = (uchar *)0x0;
    *(ulonglong *)&(param_1->Int32Data).ArrayNum = (ulonglong)uStack_7c << 0x20;
    param_1->NumInstances = 0;
    (param_1->IDToIndexTable).DataPtr = (int *)0x0;
    *(ulonglong *)&(param_1->IDToIndexTable).ArrayNum = (ulonglong)uStack_6c << 0x20;
    (param_1->InterpMapping).DataPtr = (uint *)0x0;
    *(ulonglong *)&(param_1->InterpMapping).ArrayNum = (ulonglong)uStack_5c << 0x20;
  }
  return bVar5;
}

