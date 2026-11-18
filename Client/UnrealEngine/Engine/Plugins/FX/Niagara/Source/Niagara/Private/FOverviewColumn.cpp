// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FOverviewColumn @ 149276ae0

FOverviewColumn * __thiscall
`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
          (void *this,FString *param_1,FString *param_2,FString *param_3,float *param_4,
          UFont *param_5,wchar_t *param_6,
          TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
          *param_7)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TVector2<float> TVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 local_80 [16];
  FString *local_70;
  FString *local_68;
  
  *(undefined4 *)this = 0x41200000;
  *(undefined4 *)((longlong)this + 4) = 0x40a00000;
  local_80._0_8_ = param_6;
  local_70 = param_1;
  local_68 = param_2;
  ::FString::FString((FString *)((longlong)this + 8),param_1);
  ::FString::FString((FString *)((longlong)this + 0x18),param_2);
  ::FString::FString((FString *)((longlong)this + 0x28),param_3);
  *(float *)((longlong)this + 0x38) = *param_4;
  lVar1 = *(longlong *)param_7;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)&param_7->field_0x10;
    if (*(undefined8 **)&param_7->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_7->field_0x28;
    }
    (**(code **)*puVar4)();
  }
  TVar3 = NiagaraDebugLocal::GetStringSize((UFont *)(local_80 + 8),(wchar_t *)param_5);
  *(undefined4 *)((longlong)this + 0x3c) = *(undefined4 *)TVar3.field0_0x0;
  TVar3 = NiagaraDebugLocal::GetStringSize((UFont *)(local_80 + 8),(wchar_t *)param_5);
  fVar7 = *(float *)TVar3.field0_0x0;
  TVar3 = NiagaraDebugLocal::GetStringSize((UFont *)local_80,(wchar_t *)param_5);
  if (fVar7 <= *(float *)TVar3.field0_0x0) {
    fVar7 = *(float *)TVar3.field0_0x0;
  }
  *(float *)((longlong)this + 0x40) = fVar7;
  TVar3 = NiagaraDebugLocal::GetStringSize((UFont *)(local_80 + 8),(wchar_t *)param_5);
  fVar6 = *(float *)((longlong)this + 0x3c) + *(float *)((longlong)this + 4) +
          *(float *)TVar3.field0_0x0;
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  *(float *)((longlong)this + 0x44) = fVar6 + *(float *)this;
  *param_4 = fVar6 + *(float *)this + *param_4;
  pFVar2 = (local_70->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (local_68->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)param_7 != 0) {
    plVar5 = (longlong *)&param_7->field_0x10;
    if (*(longlong **)&param_7->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_7->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// FOverviewColumn @ 149276cb0

FOverviewColumn * __thiscall
`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn::FOverviewColumn
          (void *this,FString *param_1,FString *param_2,int param_3,FString *param_4,float *param_5,
          UFont *param_6,int param_7,
          TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
          *param_8)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  TVector2<float> TVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  FString *local_50;
  FString *local_48;
  
  *(undefined4 *)this = 0x41200000;
  *(undefined4 *)((longlong)this + 4) = 0x40a00000;
  local_48 = param_4;
  local_50 = param_1;
  ::FString::FString((FString *)((longlong)this + 8),param_1);
  ::FString::FString((FString *)((longlong)this + 0x18),param_2);
  ::FString::FString((FString *)((longlong)this + 0x28),param_4);
  *(float *)((longlong)this + 0x38) = *param_5;
  lVar1 = *(longlong *)param_8;
  *(longlong *)((longlong)this + 0x50) = lVar1;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)&param_8->field_0x10;
    if (*(undefined8 **)&param_8->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_8->field_0x28;
    }
    (**(code **)*puVar5)();
  }
  TVar4 = NiagaraDebugLocal::GetStringSize((UFont *)&stack0xffffffffffffffa8,(wchar_t *)param_6);
  fVar7 = (float)param_3;
  if ((float)param_3 <= *(float *)TVar4.field0_0x0) {
    fVar7 = *(float *)TVar4.field0_0x0;
  }
  TVar4 = NiagaraDebugLocal::GetStringSize((UFont *)&stack0xffffffffffffffa8,(wchar_t *)param_6);
  *(undefined4 *)((longlong)this + 0x3c) = *(undefined4 *)TVar4.field0_0x0;
  TVar4 = NiagaraDebugLocal::GetStringSize((UFont *)&stack0xffffffffffffffa8,(wchar_t *)param_6);
  fVar3 = (float)param_7;
  if ((float)param_7 <= *(float *)TVar4.field0_0x0) {
    fVar3 = *(float *)TVar4.field0_0x0;
  }
  fVar7 = *(float *)((longlong)this + 4) + *(float *)((longlong)this + 0x3c) + (float)(int)fVar7;
  *(float *)((longlong)this + 0x40) = fVar3;
  if (fVar7 <= fVar3) {
    fVar7 = fVar3;
  }
  *(float *)((longlong)this + 0x44) = fVar7 + *(float *)this;
  *param_5 = fVar7 + *(float *)this + *param_5;
  pFVar2 = (local_50->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (local_48->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)param_8 != 0) {
    plVar6 = (longlong *)&param_8->field_0x10;
    if (*(longlong **)&param_8->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_8->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

