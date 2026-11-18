// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 28

// TIterator @ 148e54910

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_148e549a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_148e549a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 148ea4740

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDISimpleCounterInstanceData_GameThread_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_148ea47d9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_148ea47d9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149023360

TIterator * __thiscall
TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TObjectPtr<UNiagaraSystem>,FNCPool>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,FNCPool,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1490233f9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1490233f9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149023470

TIterator * __thiscall
TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FName,FNiagaraComponentLeakDetector::FSystemData>,TDefaultMapHashableKeyFuncs<FName,FNiagaraComponentLeakDetector::FSystemData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149023509;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149023509:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1490b1d60

TIterator * __thiscall
TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FNiagaraCrashReporterHandler::FThreadScopeInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1490b1df9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1490b1df9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1490b1e70

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraDataChannel_const_,FWeakObjectPtr>,TObjectPtr<UNiagaraDataChannelHandler>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1490b1f09;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1490b1f09:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1490b1f80

TIterator * __thiscall
TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>::
TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FNDCMapKey,int>,TDefaultMapHashableKeyFuncs<FNDCMapKey,int,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1490b2019;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1490b2019:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1491abb30

TIterator * __thiscall
TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,RasterizationGrid3DRWInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,RasterizationGrid3DRWInstanceData,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1491abbc9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1491abbc9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277490

TIterator * __thiscall
TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
::TIterator::TIterator
          (TIterator *this,
          TMapBase<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>_>
          *param_1,bool param_2)

{
  TIterator local_38;
  
  TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
  ::TIterator::TIterator(&local_38,&param_1->Pairs);
  this->Map = param_1;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bRequiresRehashOnRemoval = param_2;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bElementsHaveBeenRemoved = false;
  this->_padding_ = local_38._padding_;
  this->_padding_ = (longlong)local_38.Set;
  return this;
}

// TIterator @ 149277500

TIterator * __thiscall
TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
::TIterator::TIterator
          (TIterator *this,
          TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>_>
          *param_1,bool param_2)

{
  TIterator local_38;
  
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
  ::TIterator::TIterator(&local_38,&param_1->Pairs);
  this->Map = param_1;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bRequiresRehashOnRemoval = param_2;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bElementsHaveBeenRemoved = false;
  this->_padding_ = local_38._padding_;
  this->_padding_ = (longlong)local_38.Set;
  return this;
}

// TIterator @ 149277570

TIterator * __thiscall
TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UNiagaraEffectType_*,FParticlePerfStats>,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277609;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277609:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277680

TIterator * __thiscall
TSet<TTuple<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<enum_EPixelFormat,enum_ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277719;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277719:
  *(TSet<TTuple<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool>,TDefaultMapHashableKeyFuncs<TTuple<EPixelFormat,ETextureDimension>,FNiagaraEmptyUAVPool::FTextureRDGUAVPool,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277790

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,FNiagaraDebugHud::FValidationErrorInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277829;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277829:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1492778a0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraEmitter,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerEmitter,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277939;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277939:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1492779b0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraDebugHud::FGpuUsagePerSystem,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277a49;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277a49:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277ac0

TIterator * __thiscall
TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerEvent>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerEvent,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277b59;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277b59:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277bd0

TIterator * __thiscall
TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FName,FNiagaraDebugHud::FGpuUsagePerStage>,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugHud::FGpuUsagePerStage,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277c69;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277c69:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277ce0

TIterator * __thiscall
TSet<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (void *this,
          TSet<TTuple<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277d79;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277d79:
  *(TSet<TTuple<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
    **)this = param_1;
  *(ulonglong *)((longlong)this + 8) = CONCAT44(uVar5,iVar8);
  *(TSet<TTuple<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool>,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FBufferRDGUAVPool,0>,FDefaultSetAllocator>
    **)((longlong)this + 0x28) = param_1;
  *(undefined1 **)((longlong)this + 0x10) = puVar1;
  *(ulonglong *)((longlong)this + 0x18) = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)((longlong)this + 0x20) = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149277df0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDebugHud::FGpuEmitterCache,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149277e89;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149277e89:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1493350c0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,FNiagaraPerfBaselineStats,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149335159;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149335159:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1493351d0

TIterator * __thiscall
TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FName,FNiagaraPlatformSet::FCachedCVarInfo>,TDefaultMapHashableKeyFuncs<FName,FNiagaraPlatformSet::FCachedCVarInfo,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149335269;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149335269:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149387810

TIterator * __thiscall
TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1493878a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1493878a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149428480

TIterator * __thiscall
TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428519;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428519:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 149428590

TIterator * __thiscall
TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraEffectType>,FNiagaraScalabilityManager,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428629;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428629:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1494286a0

TIterator * __thiscall
TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UNiagaraSystem>,TObjectPtr<UNiagaraCullProxyComponent>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428739;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428739:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1494287b0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428849;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428849:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1494288c0

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428959;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428959:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 1494289d0

TIterator * __thiscall
TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_149428a69;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_149428a69:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

