// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// CreateReader @ 1491bd240

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderStruct<FNiagaraID> * __cdecl
FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader
          (FNiagaraDataSetReaderStruct<FNiagaraID> *__return_storage_ptr__,FNiagaraDataSet *param_1,
          FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderStruct<FNiagaraID> *pFVar4;
  FNiagaraDataSetAccessorStruct<FNiagaraID> local_18;
  
  local_18.bIsValid = false;
  local_18.FloatComponentIndex = -1;
  local_18.Int32ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderStruct<FNiagaraID> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_18,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentStride = 0;
  __return_storage_ptr__->FloatComponents = (float *)0x0;
  __return_storage_ptr__->Int32Components = (int *)0x0;
  __return_storage_ptr__->bIsValid =
       pFVar1 != (FNiagaraDataBuffer *)0x0 && local_18.Int32ComponentIndex != -1;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0 && local_18.Int32ComponentIndex != -1) {
    __return_storage_ptr__->Int32Components =
         (int *)((pFVar1->Int32Data).AllocatorInstance.Data +
                local_18.Int32ComponentIndex * pFVar1->Int32Stride);
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
    __return_storage_ptr__->ComponentStride = pFVar1->FloatStride >> 2;
  }
  return __return_storage_ptr__;
}

// Init @ 1491d1c60

void __thiscall
FNiagaraDataSetAccessorStruct<FNiagaraID>::Init
          (FNiagaraDataSetAccessorStruct<FNiagaraID> *this,FNiagaraDataSetCompiledData *param_1,
          FName param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10;
  FNiagaraTypeDefinitionHandle local_30 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this->bIsValid = false;
  local_res8.DebugPtr = (UObject *)FNiagaraID::StaticStruct();
  local_28.DebugPtr = local_res8.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_1e = 0;
  local_20 = 2;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
  if (!bVar5) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_30,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
  pFVar10 = pFVar2;
  if (pFVar2 != pFVar1) {
    while ((*pFVar10 != param_2 ||
           (pFVar10[1].ComparisonIndex.Value != local_30[0].RegisteredTypeIndex))) {
      pFVar4 = pFVar10 + 1;
      pFVar10 = (FName *)&pFVar4->Number;
      if ((FName *)&pFVar4->Number == pFVar1) {
        return;
      }
    }
    lVar7 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
            ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
    uVar8 = (int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (param_1->VariableLayouts).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
      bVar5 = *(ushort *)(pFVar9 + 0xc) == 0;
      if (!bVar5) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5838186553402195345>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x26f,"VariableLayout.GetNumHalfComponents() == 0");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = *(ushort *)(pFVar9 + 0xc) == 0;
      }
      this->bIsValid = bVar5;
      this->FloatComponentIndex = (uint)*(ushort *)pFVar9;
      this->Int32ComponentIndex = (uint)*(ushort *)(pFVar9 + 2);
    }
  }
  return;
}

// Init @ 1493ea980

void __thiscall
FNiagaraDataSetAccessorStruct<FNiagaraSpawnInfo>::Init
          (FNiagaraDataSetAccessorStruct<FNiagaraSpawnInfo> *this,
          FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10;
  FNiagaraTypeDefinitionHandle local_30 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  this->bIsValid = false;
  local_res8.DebugPtr = (UObject *)FNiagaraSpawnInfo::StaticStruct();
  local_28.DebugPtr = local_res8.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_1e = 0;
  local_20 = 2;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
  if (!bVar5) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_30,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
  pFVar10 = pFVar2;
  if (pFVar2 != pFVar1) {
    while ((*pFVar10 != param_2 ||
           (pFVar10[1].ComparisonIndex.Value != local_30[0].RegisteredTypeIndex))) {
      pFVar4 = pFVar10 + 1;
      pFVar10 = (FName *)&pFVar4->Number;
      if ((FName *)&pFVar4->Number == pFVar1) {
        return;
      }
    }
    lVar7 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
            ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
    uVar8 = (int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f);
    if (uVar8 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar8 < (param_1->VariableLayouts).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
      bVar5 = *(ushort *)(pFVar9 + 0xc) == 0;
      if (!bVar5) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5838186553402195345>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                           ,0x26f,"VariableLayout.GetNumHalfComponents() == 0");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = *(ushort *)(pFVar9 + 0xc) == 0;
      }
      this->bIsValid = bVar5;
      this->FloatComponentIndex = (uint)*(ushort *)pFVar9;
      this->Int32ComponentIndex = (uint)*(ushort *)(pFVar9 + 2);
    }
  }
  return;
}

