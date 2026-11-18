// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// CreateReader @ 148e61c70

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderInt32<int> * __cdecl
FNiagaraDataSetAccessorInt32<int>::CreateReader
          (FNiagaraDataSetReaderInt32<int> *__return_storage_ptr__,FNiagaraDataBuffer *param_1,
          FName param_2)

{
  FNiagaraDataSet *pFVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraDataSetReaderInt32<int> *pFVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  pFVar1 = param_1->Owner;
  if (((pFVar1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataSetReaderInt32<int> *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (pFVar1->CompiledData).StructPtr;
  uVar6 = 0xffffffff;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::IntDef);
  pFVar3 = (FName *)(pFVar2->Variables).AllocatorInstance.Data;
  pFVar10 = pFVar3;
  do {
    if (pFVar10 == (FName *)((longlong)pFVar3 + (longlong)(pFVar2->Variables).ArrayNum * 0xc)) {
LAB_148e61d9a:
      __return_storage_ptr__->bIsValid = false;
      __return_storage_ptr__->NumInstances = 0;
      __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
      if (uVar6 != 0xffffffff) {
        __return_storage_ptr__->bIsValid = true;
        __return_storage_ptr__->ComponentData[0] =
             (uchar *)((param_1->Int32Data).AllocatorInstance.Data + uVar6 * param_1->Int32Stride);
        __return_storage_ptr__->NumInstances = param_1->NumInstances;
      }
      return __return_storage_ptr__;
    }
    if ((*pFVar10 == param_2) &&
       (pFVar10[1].ComparisonIndex.Value == local_10[0].RegisteredTypeIndex)) {
      lVar8 = ((longlong)pFVar10 - (longlong)pFVar3) / 6 +
              ((longlong)pFVar10 - (longlong)pFVar3 >> 0x3f);
      uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      if (uVar9 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < (pFVar2->VariableLayouts).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FNiagaraDataSetReaderInt32<int> *)(*pcVar4)();
          return pFVar7;
        }
        uVar6 = (uint)*(ushort *)
                       ((pFVar2->VariableLayouts).AllocatorInstance.Data +
                       (longlong)(int)uVar9 * 0x20 + 2);
      }
      goto LAB_148e61d9a;
    }
    pFVar10 = (FName *)&pFVar10[1].Number;
  } while( true );
}

// CreateReader @ 1491bcf20

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderInt32<int> * __cdecl
FNiagaraDataSetAccessorInt32<int>::CreateReader
          (FNiagaraDataSetReaderInt32<int> *__return_storage_ptr__,FNiagaraDataSet *param_1,
          FName param_2)

{
  FNiagaraDataSetCompiledData *pFVar1;
  FName *pFVar2;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraDataSetReaderInt32<int> *pFVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  if (((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataSetReaderInt32<int> *)(*pcVar4)();
    return pFVar7;
  }
  pFVar1 = (param_1->CompiledData).StructPtr;
  uVar6 = 0xffffffff;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::IntDef);
  pFVar2 = (FName *)(pFVar1->Variables).AllocatorInstance.Data;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == (FName *)((longlong)pFVar2 + (longlong)(pFVar1->Variables).ArrayNum * 0xc)) {
LAB_1491bd046:
      pFVar3 = param_1->CurrentData;
      __return_storage_ptr__->bIsValid = false;
      __return_storage_ptr__->NumInstances = 0;
      __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
      if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar6 != 0xffffffff)) {
        __return_storage_ptr__->bIsValid = true;
        __return_storage_ptr__->ComponentData[0] =
             (uchar *)((pFVar3->Int32Data).AllocatorInstance.Data + uVar6 * pFVar3->Int32Stride);
        __return_storage_ptr__->NumInstances = pFVar3->NumInstances;
      }
      return __return_storage_ptr__;
    }
    if ((*pFVar10 == param_2) &&
       (pFVar10[1].ComparisonIndex.Value == local_10[0].RegisteredTypeIndex)) {
      lVar8 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
      uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      if (uVar9 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < (pFVar1->VariableLayouts).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FNiagaraDataSetReaderInt32<int> *)(*pcVar4)();
          return pFVar7;
        }
        uVar6 = (uint)*(ushort *)
                       ((pFVar1->VariableLayouts).AllocatorInstance.Data +
                       (longlong)(int)uVar9 * 0x20 + 2);
      }
      goto LAB_1491bd046;
    }
    pFVar10 = (FName *)&pFVar10[1].Number;
  } while( true );
}

// CreateReader @ 1491bd0b0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderInt32<FNiagaraBool> * __cdecl
FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader
          (FNiagaraDataSetReaderInt32<FNiagaraBool> *__return_storage_ptr__,FNiagaraDataSet *param_1
          ,FName param_2)

{
  FNiagaraDataSetCompiledData *pFVar1;
  FName *pFVar2;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraDataSetReaderInt32<FNiagaraBool> *pFVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  if (((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNiagaraDataSetReaderInt32<FNiagaraBool> *)(*pcVar4)();
    return pFVar7;
  }
  pFVar1 = (param_1->CompiledData).StructPtr;
  uVar6 = 0xffffffff;
  local_10[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::BoolDef);
  pFVar2 = (FName *)(pFVar1->Variables).AllocatorInstance.Data;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == (FName *)((longlong)pFVar2 + (longlong)(pFVar1->Variables).ArrayNum * 0xc)) {
LAB_1491bd1d6:
      pFVar3 = param_1->CurrentData;
      __return_storage_ptr__->bIsValid = false;
      __return_storage_ptr__->NumInstances = 0;
      __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
      if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar6 != 0xffffffff)) {
        __return_storage_ptr__->bIsValid = true;
        __return_storage_ptr__->ComponentData[0] =
             (uchar *)((pFVar3->Int32Data).AllocatorInstance.Data + uVar6 * pFVar3->Int32Stride);
        __return_storage_ptr__->NumInstances = pFVar3->NumInstances;
      }
      return __return_storage_ptr__;
    }
    if ((*pFVar10 == param_2) &&
       (pFVar10[1].ComparisonIndex.Value == local_10[0].RegisteredTypeIndex)) {
      lVar8 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
      uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
      if (uVar9 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < (pFVar1->VariableLayouts).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FNiagaraDataSetReaderInt32<FNiagaraBool> *)(*pcVar4)();
          return pFVar7;
        }
        uVar6 = (uint)*(ushort *)
                       ((pFVar1->VariableLayouts).AllocatorInstance.Data +
                       (longlong)(int)uVar9 * 0x20 + 2);
      }
      goto LAB_1491bd1d6;
    }
    pFVar10 = (FName *)&pFVar10[1].Number;
  } while( true );
}

// Init @ 1492f3340

void __thiscall
FNiagaraDataSetAccessorInt32<int>::Init
          (FNiagaraDataSetAccessorInt32<int> *this,FNiagaraDataSetCompiledData *param_1,
          FName param_2)

{
  FName *pFVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FNiagaraTypeRegistry *this_00;
  longlong lVar7;
  FName *pFVar8;
  
  uVar5 = 0xffffffff;
  this->ComponentIndex = -1;
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    if (FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
      this_00 = FNiagaraTypeRegistry::Get();
      uVar5 = FNiagaraTypeRegistry::RegisterTypeInternal(this_00,&FNiagaraTypeDefinition::IntDef);
    }
    pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
    pFVar1 = (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
    pFVar8 = pFVar2;
    if (pFVar2 != pFVar1) {
      while ((*pFVar8 != param_2 || (pFVar8[1].ComparisonIndex.Value != uVar5))) {
        pFVar8 = (FName *)&pFVar8[1].Number;
        if (pFVar8 == pFVar1) {
          return;
        }
      }
      lVar7 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar5 = (int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f);
      if (uVar5 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar5 < (param_1->VariableLayouts).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this->ComponentIndex =
             (uint)*(ushort *)
                    ((param_1->VariableLayouts).AllocatorInstance.Data +
                    (longlong)(int)uVar5 * 0x20 + 2);
      }
    }
  }
  return;
}

// Init @ 1493ea820

void __thiscall
FNiagaraDataSetAccessorInt32<enum_ENiagaraExecutionState>::Init
          (void *this,FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  longlong lVar6;
  uint uVar7;
  FNiagaraTypeDefinitionHandle local_30 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  *(undefined4 *)this = 0xffffffff;
  local_28.DebugPtr = (UObject *)FNiagaraTypeDefinition::ExecutionStateEnum;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (FNiagaraTypeDefinition::ExecutionStateEnum != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FNiagaraTypeDefinition::ExecutionStateEnum);
  }
  local_1e = 0;
  local_20 = 3;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  local_30[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_30,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  pFVar1 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar5 = pFVar1;
  while( true ) {
    if (pFVar5 == (FName *)((longlong)pFVar1 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
      return;
    }
    if ((*pFVar5 == param_2) && (pFVar5[1].ComparisonIndex.Value == local_30[0].RegisteredTypeIndex)
       ) break;
    pFVar5 = (FName *)&pFVar5[1].Number;
  }
  lVar6 = ((longlong)pFVar5 - (longlong)pFVar1) / 6 + ((longlong)pFVar5 - (longlong)pFVar1 >> 0x3f);
  uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if (uVar7 == 0xffffffff) {
    return;
  }
  uVar4 = 0;
  if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)this =
       (uint)*(ushort *)
              ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 2);
  return;
}

