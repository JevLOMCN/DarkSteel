// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraRendererVariableInfo @ 149334910

FNiagaraRendererVariableInfo * __thiscall
FNiagaraRendererVariableInfo::FNiagaraRendererVariableInfo
          (FNiagaraRendererVariableInfo *this,FNiagaraDataSetCompiledData *param_1,
          FNiagaraVariableBase *param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  ushort uVar5;
  FNiagaraRendererVariableInfo *pFVar6;
  FName *pFVar7;
  longlong lVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  this->DatasetOffset = 0xffff;
  this->GPUBufferOffset = 0xffff;
  this->NumComponents = 0;
  this->bUpload = false;
  this->bHalfType = false;
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
  if (pFVar2 == pFVar1) {
    return this;
  }
  pFVar7 = pFVar2;
  while (*pFVar7 != param_2->Name) {
    pFVar7 = (FName *)&pFVar7[1].Number;
    if (pFVar7 == pFVar1) {
      return this;
    }
  }
  lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 6 + ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
  uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
  if (uVar9 == 0xffffffff) {
    return this;
  }
  uVar11 = 0;
  if ((int)uVar9 < (param_1->VariableLayouts).ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FNiagaraRendererVariableInfo *)(*pcVar3)();
    return pFVar6;
  }
  pFVar10 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
  if (*(ushort *)(pFVar10 + 8) == 0) {
    uVar5 = *(ushort *)(pFVar10 + 10);
    if (*(ushort *)(pFVar10 + 0xc) != 0) {
      if ((uVar5 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LayoutInfo.GetNumFloatComponents() + LayoutInfo.GetNumInt32Components() == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererProperties.cpp"
                             ,0xa1,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FNiagaraRendererVariableInfo *)(*pcVar3)();
        return pFVar6;
      }
      this->DatasetOffset = *(ushort *)(pFVar10 + 4);
      this->GPUBufferOffset = *(ushort *)(pFVar10 + 4);
      uVar5 = *(ushort *)(pFVar10 + 0xc);
      this->bUpload = false;
      this->bHalfType = true;
      goto LAB_149334af0;
    }
    if (uVar5 == 0) {
      return this;
    }
    if ((uVar5 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayoutInfo.GetNumInt32Components() + LayoutInfo.GetNumHalfComponents() == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererProperties.cpp"
                           ,0xaa,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraRendererVariableInfo *)(*pcVar3)();
      return pFVar6;
    }
    this->DatasetOffset = *(ushort *)(pFVar10 + 2);
    this->GPUBufferOffset = *(ushort *)(pFVar10 + 2);
    uVar5 = *(ushort *)(pFVar10 + 10);
  }
  else {
    if (((uint)*(ushort *)(pFVar10 + 0xc) + (uint)*(ushort *)(pFVar10 + 10) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayoutInfo.GetNumHalfComponents() + LayoutInfo.GetNumInt32Components() == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererProperties.cpp"
                           ,0x98,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraRendererVariableInfo *)(*pcVar3)();
      return pFVar6;
    }
    this->DatasetOffset = *(ushort *)pFVar10;
    this->GPUBufferOffset = *(ushort *)pFVar10;
    uVar5 = *(ushort *)(pFVar10 + 8);
  }
  this->bUpload = false;
  this->bHalfType = false;
LAB_149334af0:
  this->NumComponents = uVar5;
  return this;
}

