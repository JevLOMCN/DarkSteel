// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// BindSystemInstances @ 149285a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::BindSystemInstances
          (FNiagaraScriptExecutionContextBase *this,
          TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GeneratePerInstanceDIFunctionTable @ 14929f150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraScriptExecutionContextBase::GeneratePerInstanceDIFunctionTable
          (FNiagaraScriptExecutionContextBase *this,FNiagaraSystemInstance *param_1,
          TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  return true;
}

// FNiagaraScriptExecutionContextBase @ 149386dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraScriptExecutionContextBase * __thiscall
FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase
          (FNiagaraScriptExecutionContextBase *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraScriptExecutionContextBase__6B_;
  this->Script = (UNiagaraScript *)0x0;
  this->VectorVMState = (FVectorVMState *)0x0;
  (this->FunctionTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionTable).ArrayNum = 0;
  (this->FunctionTable).ArrayMax = 0;
  (this->UserPtrTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserPtrTable).ArrayNum = 0;
  (this->UserPtrTable).ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)&this->Parameters);
  (this->Parameters).bInitialized = '\0';
  (this->Parameters)._padding_ = (longlong)&___7FNiagaraScriptInstanceParameterStore__6B_;
  (this->Parameters).ScriptParameterStore.StructPtr = (FNiagaraScriptExecutionParameterStore *)0x0;
  (this->DataSetMetaTable).AllocatorInstance.SecondaryData = (ForElementType<FDataSetMeta>)0x0;
  (this->DataSetMetaTable).ArrayNum = 0;
  (this->DataSetMetaTable).ArrayMax = 2;
  (this->DataSetInfo).AllocatorInstance.SecondaryData =
       (ForElementType<FNiagaraDataSetExecutionInfo>)0x0;
  (this->DataSetInfo).ArrayNum = 0;
  (this->DataSetInfo).ArrayMax = 2;
  (this->StatScopeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatScopeData).ArrayNum = 0;
  (this->StatScopeData).ArrayMax = 0;
  puVar2 = &this->field_0x214;
  this->bAllowParallel = -1;
  this->bHasDIsWithPostStageTick = 0;
  this->bHasDIsWithPreStageTick = 0;
  *(undefined8 *)&this->ExecutionTimings = 0;
  *(undefined8 *)&(this->ExecutionTimings).field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionTimings).field_0x20 = 0;
  this->ScriptType = Update;
  *(undefined4 *)&(this->ExecutionTimings).field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionTimings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionTimings).field_0x34 = 0;
  *(undefined4 *)&(this->ExecutionTimings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExecutionTimings).field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionTimings).field_0x48 = 0;
  (this->DIStageTickHandler).PreStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DIStageTickHandler).PreStageTickList.ArrayNum = 0;
  (this->DIStageTickHandler).PreStageTickList.ArrayMax = 0;
  (this->DIStageTickHandler).PostStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DIStageTickHandler).PostStageTickList.ArrayNum = 0;
  (this->DIStageTickHandler).PostStageTickList.ArrayMax = 0;
  return this;
}

// ~FNiagaraScriptExecutionContextBase @ 14938a150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
          (FNiagaraScriptExecutionContextBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FDataSetMeta> FVar3;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar4;
  
  this->_padding_ = (longlong)&___7FNiagaraScriptExecutionContextBase__6B_;
  VectorVM::Runtime::FreeVectorVMState(this->VectorVMState);
  pFVar1 = (this->DIStageTickHandler).PostStageTickList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DIStageTickHandler).PreStageTickList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ExecutionTimings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExecutionTimings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecutionTimings);
  pFVar1 = (this->StatScopeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar4 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
    FVar4 = (ForElementType<FNiagaraDataSetExecutionInfo>)&this->DataSetInfo;
  }
  DestructItems<FNiagaraDataSetExecutionInfo,int>
            ((FNiagaraDataSetExecutionInfo *)FVar4,(this->DataSetInfo).ArrayNum);
  FVar4 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar3 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FDataSetMeta>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)&this->Parameters);
  pFVar1 = (this->UserPtrTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FunctionTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// BindData @ 149391210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::BindData
          (FNiagaraScriptExecutionContextBase *this,int param_1,FNiagaraDataSet *param_2,int param_3
          ,bool param_4)

{
  TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  undefined4 *puVar1;
  int iVar2;
  FNiagaraDataBuffer *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ForElementType<FDataSetMeta> FVar11;
  int iVar12;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  
  pFVar3 = param_2->CurrentData;
  pFVar4 = param_2->DestinationData;
  iVar15 = param_1 + 1;
  if (param_1 + 1 < (this->DataSetInfo).ArrayNum) {
    iVar15 = (this->DataSetInfo).ArrayNum;
  }
  TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  SetNum(&this->DataSetInfo,iVar15,Default);
  uVar16 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->DataSetInfo).ArrayNum) {
    uVar8 = uVar16;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar13 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
    FVar13 = (ForElementType<FNiagaraDataSetExecutionInfo>)&this->DataSetInfo;
  }
  FNiagaraDataSetExecutionInfo::Init
            ((FNiagaraDataSetExecutionInfo *)((longlong)FVar13 + (longlong)param_1 * 0x18),param_2,
             pFVar3,param_3,param_4);
  if (pFVar3 == (FNiagaraDataBuffer *)0x0) {
    local_88 = 0;
    uStack_84 = 0;
    iVar15 = 0;
    local_98 = local_88;
    uStack_94 = uStack_84;
    uStack_8c = uStack_7c;
  }
  else {
    pFVar5 = (pFVar3->RegisterTable).AllocatorInstance.Data;
    iVar15 = (pFVar3->RegisterTable).ArrayNum;
    if (iVar15 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_98 = SUB84(pFVar5,0);
    uStack_94 = (undefined4)((ulonglong)pFVar5 >> 0x20);
  }
  if (pFVar4 == (FNiagaraDataBuffer *)0x0) {
    local_68 = 0;
    uStack_64 = 0;
    iVar17 = 0;
    local_78 = local_68;
    uStack_74 = uStack_64;
    uStack_6c = uStack_5c;
  }
  else {
    pFVar5 = (pFVar4->RegisterTable).AllocatorInstance.Data;
    iVar17 = (pFVar4->RegisterTable).ArrayNum;
    if (iVar17 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_78 = SUB84(pFVar5,0);
    uStack_74 = (undefined4)((ulonglong)pFVar5 >> 0x20);
  }
  iVar2 = (this->DataSetMetaTable).ArrayNum;
  this_00 = &this->DataSetMetaTable;
  iVar12 = param_1 + 1;
  if (param_1 + 1 < iVar2) {
    iVar12 = iVar2;
  }
  TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (this_00,iVar12,Default);
  uVar9 = 0;
  uVar8 = uVar9;
  if (param_1 < (this->DataSetMetaTable).ArrayNum) {
    uVar8 = uVar16;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar11 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
  lVar14 = (longlong)param_1 * 0x78;
  if (FVar11 == (ForElementType<FDataSetMeta>)0x0) {
    FVar11 = (ForElementType<FDataSetMeta>)this_00;
  }
  puVar1 = (undefined4 *)((longlong)FVar11 + lVar14);
  iVar2 = param_2->IDAcquireTag;
  puVar1[0xf] = param_3;
  pTVar10 = &pFVar4->IDToIndexTable;
  if (pFVar4 == (FNiagaraDataBuffer *)0x0) {
    pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  puVar1[0xe] = 0xffffffff;
  *(TArray<int,TSizedDefaultAllocator<32>_> **)(puVar1 + 0x10) = pTVar10;
  *(TArray<int,TSizedDefaultAllocator<32>_> **)(puVar1 + 0x12) = &param_2->FreeIDsTable;
  *(int **)(puVar1 + 0x16) = &param_2->NumFreeIDs;
  *(int **)(puVar1 + 0x18) = &param_2->MaxUsedID;
  *puVar1 = local_98;
  puVar1[1] = uStack_94;
  puVar1[2] = iVar15;
  puVar1[3] = uStack_8c;
  *(TArray<int,TSizedDefaultAllocator<32>_> **)(puVar1 + 0x14) = &param_2->SpawnedIDsTable;
  *(FNiagaraDataSet **)(puVar1 + 0x1a) = param_2;
  puVar1[0x1c] = iVar2;
  puVar1[4] = local_78;
  puVar1[5] = uStack_74;
  puVar1[6] = iVar17;
  puVar1[7] = uStack_6c;
  if (0 < iVar15) {
    uVar8 = uVar9;
    if (param_1 < (this->DataSetMetaTable).ArrayNum) {
      uVar8 = uVar16;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FVar11 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<FDataSetMeta>)0x0) {
      FVar11 = (ForElementType<FDataSetMeta>)this_00;
    }
    *(undefined8 *)(lVar14 + (longlong)FVar11 + 0x20) = *(undefined8 *)pFVar3->RegisterTypeOffsets;
    *(uint *)(lVar14 + (longlong)FVar11 + 0x28) = pFVar3->RegisterTypeOffsets[2];
  }
  if (0 < iVar17) {
    if (param_1 < (this->DataSetMetaTable).ArrayNum) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FVar11 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<FDataSetMeta>)0x0) {
      FVar11 = (ForElementType<FDataSetMeta>)this_00;
    }
    *(undefined8 *)(lVar14 + (longlong)FVar11 + 0x2c) = *(undefined8 *)pFVar4->RegisterTypeOffsets;
    *(uint *)(lVar14 + (longlong)FVar11 + 0x34) = pFVar4->RegisterTypeOffsets[2];
  }
  return;
}

// BindData @ 1493915c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::BindData
          (FNiagaraScriptExecutionContextBase *this,int param_1,FNiagaraDataBuffer *param_2,
          int param_3,bool param_4)

{
  TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this_00;
  undefined8 *puVar1;
  int iVar2;
  FNiagaraDataSet *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<FDataSetMeta> FVar8;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uStack_5c;
  uint uStack_4c;
  
  if ((param_2 == (FNiagaraDataBuffer *)0x0) || (param_2->Owner == (FNiagaraDataSet *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input && Input->GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                       ,0x8c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = param_1 + 1;
  iVar10 = iVar12;
  if (iVar12 < (this->DataSetInfo).ArrayNum) {
    iVar10 = (this->DataSetInfo).ArrayNum;
  }
  TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
  SetNum(&this->DataSetInfo,iVar10,Default);
  pFVar3 = param_2->Owner;
  uVar7 = 0;
  if (param_1 < (this->DataSetInfo).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar9 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
    FVar9 = (ForElementType<FNiagaraDataSetExecutionInfo>)&this->DataSetInfo;
  }
  FNiagaraDataSetExecutionInfo::Init
            ((FNiagaraDataSetExecutionInfo *)((longlong)FVar9 + (longlong)param_1 * 0x18),pFVar3,
             param_2,param_3,param_4);
  iVar10 = (param_2->RegisterTable).ArrayNum;
  pFVar4 = (param_2->RegisterTable).AllocatorInstance.Data;
  if (iVar10 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->DataSetMetaTable).ArrayNum;
  this_00 = &this->DataSetMetaTable;
  if (iVar12 < iVar2) {
    iVar12 = iVar2;
  }
  TArray<FDataSetMeta,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (this_00,iVar12,Default);
  uVar7 = 0;
  if (param_1 < (this->DataSetMetaTable).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar8 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
  lVar11 = (longlong)param_1 * 0x78;
  iVar12 = pFVar3->IDAcquireTag;
  if (FVar8 == (ForElementType<FDataSetMeta>)0x0) {
    FVar8 = (ForElementType<FDataSetMeta>)this_00;
  }
  puVar1 = (undefined8 *)((longlong)FVar8 + lVar11);
  *(int *)((longlong)puVar1 + 0x3c) = param_3;
  puVar1[0xb] = &pFVar3->NumFreeIDs;
  puVar1[0xc] = &pFVar3->MaxUsedID;
  puVar1[10] = &pFVar3->SpawnedIDsTable;
  *puVar1 = pFVar4;
  puVar1[1] = CONCAT44(uStack_5c,iVar10);
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[2] = 0;
  puVar1[3] = (ulonglong)uStack_4c << 0x20;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xd] = pFVar3;
  *(int *)(puVar1 + 0xe) = iVar12;
  if (0 < iVar10) {
    uVar7 = 0;
    if (param_1 < (this->DataSetMetaTable).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FVar8 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FDataSetMeta>)0x0) {
      FVar8 = (ForElementType<FDataSetMeta>)this_00;
    }
    lVar11 = (longlong)FVar8 + lVar11;
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)param_2->RegisterTypeOffsets;
    *(uint *)(lVar11 + 0x28) = param_2->RegisterTypeOffsets[2];
  }
  return;
}

// CreateStatScopeData @ 14939aef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::CreateStatScopeData(FNiagaraScriptExecutionContextBase *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<VectorVM::FStatScopeData,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar3 = (this->Script->StatScopesIDs).ArrayNum;
  pFVar9 = (this->Script->StatScopesIDs).AllocatorInstance.Data;
  if (((int)uVar3 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = &this->StatScopeData;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->StatScopeData).ArrayMax;
  (this->StatScopeData).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&pTVar8->AllocatorInstance,0,piVar1);
  }
  pFVar2 = pFVar9 + (longlong)(int)uVar3 * 8;
  while( true ) {
    if (pFVar9 == pFVar2) {
      return;
    }
    local_18 = *(undefined8 *)pFVar9;
    pFVar7 = (pTVar8->AllocatorInstance).Data;
    local_10 = 0;
    if (((pFVar7 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 < pFVar7 + (longlong)*piVar1 * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = (this->StatScopeData).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar8->AllocatorInstance,piVar1);
    }
    pFVar9 = pFVar9 + 8;
    (this->StatScopeData).ArrayNum = iVar6 + 1;
    pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar7 = local_18;
    *(undefined8 *)(pFVar7 + 8) = 0;
    LOCK();
    *(undefined8 *)(pFVar7 + 8) = local_10;
    UNLOCK();
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// DirtyDataInterfaces @ 14939ccb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::DirtyDataInterfaces(FNiagaraScriptExecutionContextBase *this)

{
  longlong *plVar1;
  
  plVar1 = &(this->Parameters)._padding_;
  *(uint *)plVar1 = (uint)*plVar1 | 2;
  return;
}

// Execute @ 1493a07a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraScriptExecutionContextBase::Execute
          (FNiagaraScriptExecutionContextBase *this,FNiagaraSystemInstance *param_1,float param_2,
          uint param_3,FScriptExecutionConstantBufferTable *param_4)

{
  int *piVar1;
  TArray<FNiagaraDataSetExecutionInfo,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  ForElementType<FDataSetMeta> FVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar10;
  ForElementType<FDataSetMeta> FVar11;
  uint uVar12;
  ForElementType<FNiagaraDataSetExecutionInfo> FVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong local_88;
  uint uStack_64;
  uint uStack_54;
  
  if (param_3 == 0) {
    pTVar2 = &this->DataSetInfo;
    piVar1 = &(this->DataSetInfo).ArrayMax;
    iVar4 = (this->DataSetInfo).ArrayNum;
    FVar10 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
    if (*piVar1 < 0) {
      if (FVar10 == (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
        FVar10 = (ForElementType<FNiagaraDataSetExecutionInfo>)pTVar2;
      }
      DestructItems<FNiagaraDataSetExecutionInfo,int>((FNiagaraDataSetExecutionInfo *)FVar10,iVar4);
      (this->DataSetInfo).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraDataSetExecutionInfo>_>
                  (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      if (FVar10 == (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
        FVar10 = (ForElementType<FNiagaraDataSetExecutionInfo>)pTVar2;
      }
      DestructItems<FNiagaraDataSetExecutionInfo,int>((FNiagaraDataSetExecutionInfo *)FVar10,iVar4);
      (this->DataSetInfo).ArrayNum = 0;
    }
  }
  else {
    FNDIStageTickHandler::PreStageTick(&this->DIStageTickHandler,param_1,param_2);
    if (GbExecVMScripts != 0) {
      CreateStatScopeData(this);
      ExecuteInternal(this,param_3,param_4);
      uVar12 = 0;
      lVar14 = 0;
      if (0 < (this->DataSetInfo).ArrayNum) {
        lVar17 = 0;
        local_88 = 0;
        uVar16 = uVar12;
        do {
          uVar15 = 0;
          if ((int)uVar16 < (this->DataSetInfo).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          FVar10 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<FNiagaraDataSetExecutionInfo>)&this->DataSetInfo;
          if (FVar10 != (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
            FVar13 = FVar10;
          }
          if ((*(char *)(lVar17 + 0x14 + (longlong)FVar13) != '\0') &&
             (lVar5 = *(longlong *)(*(longlong *)(lVar17 + (longlong)FVar13) + 0x80), lVar5 != 0)) {
            uVar15 = 0;
            if ((int)uVar16 < (this->DataSetMetaTable).ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            FVar6 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<FDataSetMeta>)&this->DataSetMetaTable;
            if (FVar6 != (ForElementType<FDataSetMeta>)0x0) {
              FVar11 = FVar6;
            }
            uVar15 = *(int *)(lVar17 + 0x10 + (longlong)FVar13) + 1 +
                     *(int *)((uchar *)((longlong)FVar11 + 0x38) + local_88);
            if ((*(uint *)(lVar5 + 0x128) < uVar15) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InNumInstances <= NumInstancesAllocated",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                   ,0x9c,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            *(uint *)(lVar5 + 0x124) = uVar15;
          }
          iVar4 = (this->DataSetInfo).ArrayNum;
          local_88 = local_88 + 0x78;
          uVar16 = uVar16 + 1;
          lVar17 = lVar17 + 0x18;
        } while ((int)uVar16 < iVar4);
        lVar17 = lVar14;
        if (0 < iVar4) {
          do {
            uVar16 = 0;
            if ((int)uVar12 < (this->DataSetInfo).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            FVar10 = (this->DataSetInfo).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<FNiagaraDataSetExecutionInfo>)&this->DataSetInfo;
            if (FVar10 != (ForElementType<FNiagaraDataSetExecutionInfo>)0x0) {
              FVar13 = FVar10;
            }
            *(undefined8 *)(lVar17 + (longlong)FVar13) = 0;
            lVar5 = *(longlong *)(lVar17 + 8 + (longlong)FVar13);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar17 + 8 + (longlong)FVar13) = 0;
              if ((*(int *)(lVar5 + 8) < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsBeingRead()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                     ,0x2c,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                uVar9 = (*pcVar7)();
                return (bool)uVar9;
              }
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
              UNLOCK();
            }
            *(undefined4 *)(lVar17 + 0x10 + (longlong)FVar13) = 0xffffffff;
            *(undefined1 *)(lVar17 + 0x14 + (longlong)FVar13) = 0;
            uVar16 = 0;
            if ((int)uVar12 < (this->DataSetMetaTable).ArrayNum) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar9 = (*pcVar7)();
              return (bool)uVar9;
            }
            FVar6 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
            FVar11 = (ForElementType<FDataSetMeta>)&this->DataSetMetaTable;
            if (FVar6 != (ForElementType<FDataSetMeta>)0x0) {
              FVar11 = FVar6;
            }
            uVar12 = uVar12 + 1;
            *(undefined8 *)((longlong)FVar11 + lVar14) = 0;
            ((undefined8 *)((longlong)FVar11 + lVar14))[1] = (ulonglong)uStack_64 << 0x20;
            *(undefined8 *)((longlong)FVar11 + 0x38 + lVar14) = 0xffffffffffffffff;
            *(undefined8 *)((longlong)FVar11 + 0x40 + lVar14) = 0;
            *(undefined8 *)((longlong)FVar11 + 0x48 + lVar14) = 0;
            puVar3 = (undefined8 *)((longlong)FVar11 + 0x10 + lVar14);
            *puVar3 = 0;
            puVar3[1] = (ulonglong)uStack_54 << 0x20;
            *(undefined8 *)((longlong)FVar11 + 0x50 + lVar14) = 0;
            *(undefined8 *)((longlong)FVar11 + 0x58 + lVar14) = 0;
            *(undefined8 *)((longlong)FVar11 + 0x60 + lVar14) = 0;
            *(undefined4 *)((longlong)FVar11 + 0x70 + lVar14) = 0xffffffff;
            lVar14 = lVar14 + 0x78;
            lVar17 = lVar17 + 0x18;
          } while ((int)uVar12 < (this->DataSetInfo).ArrayNum);
        }
      }
    }
    FNDIStageTickHandler::PostStageTick(&this->DIStageTickHandler,param_1,param_2);
  }
  return true;
}

// ExecuteInternal @ 1493a0f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraScriptExecutionContextBase::ExecuteInternal
          (FNiagaraScriptExecutionContextBase *this,uint param_1,
          FScriptExecutionConstantBufferTable *param_2)

{
  int iVar1;
  int iVar2;
  ForElementType<unsigned_char_const_*> FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  ForElementType<FDataSetMeta> local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8 [2];
  FVectorVMExecContext local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId238,"VectorVM_Experimental",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
               ,0xee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId238);
  }
  QueryPerformanceCounter(&local_c0);
  local_a8.VVMState = this->VectorVMState;
  iStack_c8 = (this->DataSetMetaTable).ArrayNum;
  local_d0 = (this->DataSetMetaTable).AllocatorInstance.SecondaryData;
  if (local_d0 == (ForElementType<FDataSetMeta>)0x0) {
    local_d0 = (ForElementType<FDataSetMeta>)&this->DataSetMetaTable;
  }
  if ((iStack_c8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar8 = (this->FunctionTable).AllocatorInstance.Data;
  local_a8.DataSets._12_4_ = uStack_c4;
  local_a8.DataSets.ArrayNum = iStack_c8;
  iVar1 = (this->FunctionTable).ArrayNum;
  local_a8.DataSets.DataPtr = (FDataSetMeta *)local_d0;
  local_d0 = (ForElementType<FDataSetMeta>)pFVar8;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar8 = (this->UserPtrTable).AllocatorInstance.Data;
  local_a8.ExtFunctionTable._12_4_ = uStack_c4;
  local_a8.ExtFunctionTable.ArrayNum = iVar1;
  iVar2 = (this->UserPtrTable).ArrayNum;
  local_a8.ExtFunctionTable.DataPtr =
       (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> **)
       local_d0;
  local_d0 = (ForElementType<FDataSetMeta>)pFVar8;
  if ((iVar2 < 0) &&
     (iStack_c8 = iVar1,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FVar3 = (param_2->Buffers).AllocatorInstance.SecondaryData;
  local_a8.UserPtrTable._12_4_ = uStack_c4;
  local_a8.UserPtrTable.ArrayNum = iVar2;
  local_a8.ConstantTableData = (uchar **)param_2;
  if (FVar3 != (ForElementType<unsigned_char_const_*>)0x0) {
    local_a8.ConstantTableData = (uchar **)FVar3;
  }
  local_a8.ConstantTableNumBytes = *(int **)&(param_2->BufferSizes).AllocatorInstance.SecondaryData;
  local_a8.UserPtrTable.DataPtr = (void **)local_d0;
  if ((ForElementType<int>)local_a8.ConstantTableNumBytes == (ForElementType<int>)0x0) {
    local_a8.ConstantTableNumBytes = (int *)&param_2->BufferSizes;
  }
  local_a8.ConstantTableCount = (param_2->Buffers).ArrayNum;
  iStack_c8 = iVar2;
  local_a8.NumInstances = param_1;
  if (this->VectorVMState != (FVectorVMState *)0x0) {
    VectorVM::Runtime::ExecVectorVMState(&local_a8);
  }
  iVar1 = (this->StatScopeData).ArrayNum;
  pFVar8 = (this->StatScopeData).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StatScopeData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<VectorVM::FStatScopeData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (pFVar8 == pFVar7) break;
    QueryPerformanceCounter(local_b8);
    LOCK();
    *(longlong *)(pFVar8 + 8) =
         *(longlong *)(pFVar8 + 8) + (local_b8[0].QuadPart - (longlong)local_c0);
    UNLOCK();
    pFVar8 = pFVar8 + 0x10;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetScriptLiterals @ 1493a7910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TArrayView<unsigned_char_const_,int> * __thiscall
FNiagaraScriptExecutionContextBase::GetScriptLiterals
          (FNiagaraScriptExecutionContextBase *this,
          TArrayView<unsigned_char_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  
  iVar1 = (this->Script->CachedScriptVM).ScriptLiterals.ArrayNum;
  pFVar2 = (this->Script->CachedScriptVM).ScriptLiterals.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)pFVar2;
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Init @ 1493a8620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraScriptExecutionContextBase::Init
          (FNiagaraScriptExecutionContextBase *this,FNiagaraSystemInstance *param_1,
          UNiagaraScript *param_2,ENiagaraSimTarget param_3)

{
  undefined1 *puVar1;
  ENiagaraScriptUsage EVar2;
  int iVar3;
  UNiagaraScript *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  FNiagaraScriptExecutionParameterStore *pFVar10;
  FVectorVMState *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  this->Script = param_2;
  if (param_2 != (UNiagaraScript *)0x0) {
    pFVar10 = UNiagaraScript::GetExecutionReadyParameterStore(param_2,param_3);
    pcVar6 = *(code **)((this->Parameters)._padding_ + 0x30);
    if (pFVar10 == (FNiagaraScriptExecutionParameterStore *)0x0) {
      (*pcVar6)(&this->Parameters);
    }
    else {
      (*pcVar6)(&this->Parameters,0);
      FNiagaraParameterStore::SetParameterDataArray
                ((FNiagaraParameterStore *)&this->Parameters,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_,false);
      FNiagaraParameterStore::SetDataInterfaces
                ((FNiagaraParameterStore *)&this->Parameters,
                 (TArray<UNiagaraDataInterface_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_,
                 false);
      FNiagaraParameterStore::SetUObjects
                ((FNiagaraParameterStore *)&this->Parameters,
                 (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_,false);
      plVar5 = &(this->Parameters)._padding_;
      *(uint *)plVar5 = (uint)*plVar5 | 7;
      FNiagaraParameterStore::OnLayoutChange((FNiagaraParameterStore *)&this->Parameters);
      (this->Parameters).ScriptParameterStore.StructPtr = pFVar10;
    }
    (this->Parameters).bInitialized = '\x01';
    pUVar4 = this->Script;
    if ((pUVar4 == (UNiagaraScript *)0x0) ||
       ((pUVar4->CachedScriptVMId).InterpolatedSpawnMode == NoInterpolation)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    this->HasInterpolationParameters = uVar12;
    pFVar13 = (pUVar4->CachedScriptVM).ExperimentalContextData.AllocatorInstance.Data;
    iVar3 = (pUVar4->CachedScriptVM).ExperimentalContextData.ArrayNum;
    if (iVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar3;
    local_18.DataPtr = (uchar *)pFVar13;
    pFVar11 = VectorVM::Runtime::AllocVectorVMState(&local_18);
    this->VectorVMState = pFVar11;
    if (param_1 == (FNiagaraSystemInstance *)0x0) {
      pUVar4 = this->Script;
      iVar3 = (pUVar4->ResolvedDataInterfaces).ArrayNum;
      EVar2 = pUVar4->Usage;
      pFVar13 = (pUVar4->ResolvedDataInterfaces).AllocatorInstance.Data;
      if (iVar3 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      pFVar14 = pFVar13 + (longlong)iVar3 * 0x50;
      if (pFVar13 != pFVar14) {
        uVar12 = *(uint *)&this->field_0x214;
        do {
          plVar5 = *(longlong **)(pFVar13 + 0x40);
          if (plVar5 != (longlong *)0x0) {
            bVar9 = (**(code **)(*plVar5 + 0x358))(plVar5,EVar2);
            uVar12 = (uint)bVar9 * 4 | *(uint *)&this->field_0x214;
            *(uint *)&this->field_0x214 =
                 (uVar12 ^ *(uint *)&this->field_0x214) & 0xfffffffb ^ uVar12;
            bVar9 = (**(code **)(**(longlong **)(pFVar13 + 0x40) + 0x360))
                              (*(longlong **)(pFVar13 + 0x40),EVar2);
            uVar12 = (uint)bVar9 * 8 | *(uint *)&this->field_0x214;
            uVar12 = (uVar12 ^ *(uint *)&this->field_0x214) & 0xfffffff7 ^ uVar12;
            *(uint *)&this->field_0x214 = uVar12;
          }
        } while ((((uVar12 & 4) == 0) || ((uVar12 & 8) == 0)) &&
                (pFVar13 = pFVar13 + 0x50, pFVar13 != pFVar14));
      }
    }
    return true;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3185194475957780425>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScriptExecutionContext.cpp"
                     ,0x37,"Script != nullptr");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  return false;
}

// InitDITickLists @ 1493a8f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::InitDITickLists
          (FNiagaraScriptExecutionContextBase *this,FNiagaraSystemInstance *param_1)

{
  ENiagaraScriptUsage EVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  
  pUVar3 = this->Script;
  iVar2 = (pUVar3->ResolvedDataInterfaces).ArrayNum;
  EVar1 = pUVar3->Usage;
  pFVar9 = (pUVar3->ResolvedDataInterfaces).AllocatorInstance.Data;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x50;
  if (pFVar9 != pFVar10) {
    uVar8 = *(uint *)&this->field_0x214;
    do {
      plVar4 = *(longlong **)(pFVar9 + 0x40);
      if (plVar4 != (longlong *)0x0) {
        bVar7 = (**(code **)(*plVar4 + 0x358))(plVar4,EVar1);
        uVar8 = (uint)bVar7 * 4 | *(uint *)&this->field_0x214;
        *(uint *)&this->field_0x214 = (uVar8 ^ *(uint *)&this->field_0x214) & 0xfffffffb ^ uVar8;
        bVar7 = (**(code **)(**(longlong **)(pFVar9 + 0x40) + 0x360))
                          (*(longlong **)(pFVar9 + 0x40),EVar1);
        uVar8 = (uint)bVar7 * 8 | *(uint *)&this->field_0x214;
        uVar8 = (uVar8 ^ *(uint *)&this->field_0x214) & 0xfffffff7 ^ uVar8;
        *(uint *)&this->field_0x214 = uVar8;
      }
    } while ((((uVar8 & 4) == 0) || ((uVar8 & 8) == 0)) &&
            (pFVar9 = pFVar9 + 0x50, pFVar9 != pFVar10));
  }
  if ((param_1 != (FNiagaraSystemInstance *)0x0) &&
     ((this->bHasDIsWithPreStageTick != 0 || (this->bHasDIsWithPostStageTick != 0)))) {
    FNDIStageTickHandler::Init(&this->DIStageTickHandler,this->Script,param_1);
  }
  return;
}

// PostTick @ 1493ab9a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptExecutionContextBase::PostTick(FNiagaraScriptExecutionContextBase *this)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  void *_Src;
  size_t _Size;
  
  if ((this->HasInterpolationParameters != 0) &&
     (pFVar1 = (this->Parameters).ScriptParameterStore.StructPtr,
     pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0)) {
    _Size = (size_t)pFVar1->ParameterSize;
    _Src = (void *)(this->Parameters)._padding_;
    memcpy((void *)((longlong)_Src + _Size),_Src,_Size);
    return;
  }
  return;
}

// ReportStats @ 1493b4e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
* __thiscall
FNiagaraScriptExecutionContextBase::ReportStats
          (FNiagaraScriptExecutionContextBase *this,
          TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
          *__return_storage_ptr__)

{
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong local_res8;
  int local_res10 [2];
  ulonglong *local_res18;
  
  iVar2 = (this->StatScopeData).ArrayNum;
  this_00 = &this->ExecutionTimings;
  pFVar8 = (this->StatScopeData).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((this->StatScopeData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<VectorVM::FStatScopeData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar8 == pFVar9) {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
        *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
        *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
        *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
        TSet<TTuple<TStatIdData_const_*,float>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<TStatIdData_const_*,float>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>,FDefaultSetAllocator>
                     *)__return_storage_ptr__,
                    (TSet<TTuple<TStatIdData_const_*,float>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>,FDefaultSetAllocator>
                     *)this_00);
        return __return_storage_ptr__;
      }
      LOCK();
      uVar1 = *(ulonglong *)(pFVar8 + 8);
      *(ulonglong *)(pFVar8 + 8) = 0;
      UNLOCK();
      if (uVar1 != 0) break;
LAB_1493b4f9e:
      pFVar8 = pFVar8 + 0x10;
    }
    local_res8 = *(ulonglong *)pFVar8;
    uVar5 = ((uint)(local_res8 >> 0x14) & 0xffff ^ (uint)(local_res8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    if (*(int *)&(this->ExecutionTimings).field_0x8 != *(int *)&(this->ExecutionTimings).field_0x34)
    {
      puVar3 = *(undefined1 **)&(this->ExecutionTimings).field_0x40;
      puVar6 = &(this->ExecutionTimings).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar3;
      }
      iVar4 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->ExecutionTimings).field_0x48 - 1U & uVar5) * 4);
      if (iVar4 != -1) {
        do {
          lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) ==
              local_res8) {
            if (lVar7 != 0) goto LAB_1493b4f69;
            break;
          }
          iVar4 = *(int *)(lVar7 + 0x10);
        } while (iVar4 != -1);
      }
    }
    local_res18 = &local_res8;
    TSet<TTuple<TStatIdData_const_*,float>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TStatIdData_const_*_&&>_>
              ((TSet<TTuple<TStatIdData_const_*,float>,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res10,
               (TKeyInitializer<TStatIdData_const_*_&&> *)(ulonglong)uVar5,(bool *)&local_res18);
    lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)local_res10[0] * 0x18;
LAB_1493b4f69:
    if ((longlong)uVar1 < 0) {
      *(float *)(lVar7 + 8) = (float)uVar1;
      goto LAB_1493b4f9e;
    }
    pFVar8 = pFVar8 + 0x10;
    *(float *)(lVar7 + 8) = (float)(longlong)uVar1;
  } while( true );
}

