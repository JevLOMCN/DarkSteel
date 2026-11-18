// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 2

// GetParameterValueOrDefault<UE::Math::TQuat<float>_> @ 14da3ec90

TQuat<float> * __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TQuat<float>_>
          (FNiagaraParameterStore *this,TQuat<float> *__return_storage_ptr__,
          FNiagaraVariableBase *param_1,TQuat<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *this_00;
  TQuat<float> *pTVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar6 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar6 != 0x10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TQuat<float> *)(*pcVar2)();
      return pTVar7;
    }
  }
  piVar8 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    if (iVar6 != -1) {
      if ((iVar6 < 0) ||
         ((ulonglong)(longlong)(this->ParameterData).ArrayNum < (longlong)iVar6 + 0x10U)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TQuat<float> *)(*pcVar2)();
          return pTVar7;
        }
      }
      pFVar1 = (this->ParameterData).AllocatorInstance.Data + iVar6;
      puVar9 = &local_28;
      local_28 = *(undefined8 *)pFVar1;
      uStack_20 = *(undefined8 *)(pFVar1 + 8);
      goto LAB_14da3ed63;
    }
  }
  puVar9 = &local_18;
  local_18._0_4_ = param_2->X;
  local_18._4_4_ = param_2->Y;
  uStack_10._0_4_ = param_2->Z;
  uStack_10._4_4_ = param_2->W;
LAB_14da3ed63:
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  __return_storage_ptr__->X = (float)(int)uVar3;
  __return_storage_ptr__->Y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->Z = (float)(int)uVar4;
  __return_storage_ptr__->W = (float)(int)((ulonglong)uVar4 >> 0x20);
  return __return_storage_ptr__;
}

// GetParameterValueOrDefault<FNiagaraPosition> @ 14da3ed90

FNiagaraPosition * __thiscall
FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraPosition>
          (FNiagaraParameterStore *this,FNiagaraPosition *__return_storage_ptr__,
          FNiagaraVariableBase *param_1,FNiagaraPosition *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this_00;
  FNiagaraPosition *pFVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  this_00 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  iVar5 = FNiagaraTypeDefinition::GetSize(this_00);
  if (iVar5 != 0xc) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parameter.GetSizeInBytes() == sizeof(T)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                       ,0x1ae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FNiagaraPosition *)(*pcVar3)();
      return pFVar6;
    }
  }
  piVar7 = (int *)(**(code **)(this->_padding_ + 0x58))(this,param_1,0);
  if (piVar7 != (int *)0x0) {
    iVar5 = *piVar7;
    lVar8 = (longlong)iVar5;
    if (iVar5 != -1) {
      if ((iVar5 < 0) || ((ulonglong)(longlong)(this->ParameterData).ArrayNum < lVar8 + 0xcU)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                           ,0x17f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraPosition *)(*pcVar3)();
          return pFVar6;
        }
      }
      pFVar2 = (this->ParameterData).AllocatorInstance.Data;
      local_20 = *(undefined4 *)(pFVar2 + lVar8 + 8);
      puVar9 = &local_28;
      local_28 = *(undefined8 *)(pFVar2 + lVar8);
      goto LAB_14da3ee76;
    }
  }
  local_14 = *(undefined4 *)&param_2->field_0x8;
  puVar9 = &local_1c;
  local_1c = *(undefined8 *)param_2;
LAB_14da3ee76:
  uVar1 = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)__return_storage_ptr__ = *puVar9;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar1;
  return __return_storage_ptr__;
}

