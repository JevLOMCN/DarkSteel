// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// SetConstColumns<FTestColumnInt> @ 142cdeb20

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::SetConstColumns<FTestColumnInt>
          (FTestQueryFunctionResponse *this,FTestColumnInt *param_1)

{
  TPairInitializer<UScriptStruct_const_*_&&,void_const_*_&&> local_res8;
  FTestColumnInt *local_res18 [2];
  void ***local_18;
  FTestColumnInt **local_10;
  
  local_res18[0] = param_1;
  local_res8.Value = (void **)FTestColumnInt::StaticStruct();
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<UScriptStruct_const_*,void_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,void_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UScriptStruct_const_*_&&,void_const_*_&&>_>
            ((TSet<TTuple<UScriptStruct_const_*,void_const_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,void_const_*,0>,FDefaultSetAllocator>
              *)&this->ConstColumns,&local_res8,(bool *)&local_18);
  return;
}

// SetMutableColumns<FTestColumnString> @ 142cdebe0

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::
SetMutableColumns<FTestColumnString>(FTestQueryFunctionResponse *this,FTestColumnString *param_1)

{
  TPairInitializer<UScriptStruct_const_*_&&,void_*_&&> local_res8;
  FTestColumnString *local_res18 [2];
  void ***local_18;
  FTestColumnString **local_10;
  
  local_res18[0] = param_1;
  local_res8.Value = (void **)FTestColumnString::StaticStruct();
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<UScriptStruct_const_*,void_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,void_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UScriptStruct_const_*_&&,void_*_&&>_>
            ((TSet<TTuple<UScriptStruct_const_*,void_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,void_*,0>,FDefaultSetAllocator>
              *)&this->MutableColumns,&local_res8,(bool *)&local_18);
  return;
}

// FTestQueryFunctionResponse @ 142ce30e0

FTestQueryFunctionResponse * __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::FTestQueryFunctionResponse
          (FTestQueryFunctionResponse *this)

{
  this->_padding_ =
       (longlong)&___7FTestQueryFunctionResponse_Tests_Queries_DataStorage_Editor_UE__6B_;
  *(undefined8 *)&this->ConstColumns = 0;
  *(undefined8 *)&(this->ConstColumns).field_0x8 = 0;
  *(undefined8 *)&(this->ConstColumns).field_0x20 = 0;
  *(undefined4 *)&(this->ConstColumns).field_0x28 = 0;
  *(undefined4 *)&(this->ConstColumns).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstColumns).field_0x34 = 0;
  *(undefined4 *)&(this->ConstColumns).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConstColumns).field_0x40 = 0;
  *(undefined4 *)&(this->ConstColumns).field_0x48 = 0;
  *(undefined8 *)&this->MutableColumns = 0;
  *(undefined8 *)&(this->MutableColumns).field_0x8 = 0;
  *(undefined8 *)&(this->MutableColumns).field_0x20 = 0;
  *(undefined4 *)&(this->MutableColumns).field_0x28 = 0;
  *(undefined4 *)&(this->MutableColumns).field_0x2c = 0x80;
  *(undefined4 *)&(this->MutableColumns).field_0x34 = 0;
  *(undefined4 *)&(this->MutableColumns).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MutableColumns).field_0x40 = 0;
  *(undefined4 *)&(this->MutableColumns).field_0x48 = 0;
  this->CurrentRow = 0;
  this->RowCount = 0;
  return this;
}

// ~FTestQueryFunctionResponse @ 142ce5780

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::~FTestQueryFunctionResponse
          (FTestQueryFunctionResponse *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MutableColumns).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MutableColumns).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MutableColumns);
  *(undefined4 *)&(this->ConstColumns).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstColumns).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,void_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstColumns);
  return;
}

// GetConstColumns @ 142cf5480

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::GetConstColumns
          (FTestQueryFunctionResponse *this,TArrayView<void_const_*,int> *param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  longlong lVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  undefined1 *puVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  FString local_38;
  
  if (this->RowCount < 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Row count was not set in test.");
    (*pcVar4)(pFVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = param_2->ArrayNum;
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < (longlong)iVar2) {
    do {
      uVar12 = (uint)uVar13;
      uVar15 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar16 = (longlong *)0x0;
      pUVar5 = param_2->DataPtr[uVar17];
      uVar9 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ConstColumns).field_0x8 != *(int *)&(this->ConstColumns).field_0x34) {
        puVar6 = *(undefined1 **)&(this->ConstColumns).field_0x40;
        puVar11 = &(this->ConstColumns).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar11 = puVar6;
        }
        iVar10 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->ConstColumns).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                         4);
        if (iVar10 != -1) {
          do {
            lVar1 = *(longlong *)&this->ConstColumns + (longlong)iVar10 * 0x18;
            if (*(UScriptStruct **)(*(longlong *)&this->ConstColumns + (longlong)iVar10 * 0x18) ==
                pUVar5) {
              plVar14 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar14 = plVar16;
              }
              if (plVar14 != (longlong *)0x0) {
                uVar9 = 0;
                if ((int)uVar12 < param_2->ArrayNum) {
                  uVar9 = uVar15;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar10 = (int)*(short *)((longlong)&param_2->DataPtr[uVar17]->_padding_ + 4);
                plVar16 = (longlong *)
                          ((longlong)
                           ((iVar10 + -1 + (int)param_2->DataPtr[uVar17]->_padding_ & -iVar10) *
                           this->CurrentRow) + *plVar14);
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x10);
          } while (iVar10 != -1);
        }
      }
      uVar9 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      param_1->DataPtr[uVar17] = plVar16;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar2);
  }
  return;
}

// GetMutableColumns @ 142cf5810

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::GetMutableColumns
          (FTestQueryFunctionResponse *this,TArrayView<void_*,int> *param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  longlong lVar1;
  int iVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  undefined1 *puVar6;
  bool bVar7;
  FAutomationTestFramework *pFVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  FString local_38;
  
  if (this->RowCount < 1) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar3 = pFVar8->CurrentTest;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Row count was not set in test.");
    (*pcVar4)(pFVar3,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = param_2->ArrayNum;
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < (longlong)iVar2) {
    do {
      uVar12 = (uint)uVar13;
      uVar15 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar16 = (longlong *)0x0;
      pUVar5 = param_2->DataPtr[uVar17];
      uVar9 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->MutableColumns).field_0x8 != *(int *)&(this->MutableColumns).field_0x34) {
        puVar6 = *(undefined1 **)&(this->MutableColumns).field_0x40;
        puVar11 = &(this->MutableColumns).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar11 = puVar6;
        }
        iVar10 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->MutableColumns).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                         * 4);
        if (iVar10 != -1) {
          do {
            lVar1 = *(longlong *)&this->MutableColumns + (longlong)iVar10 * 0x18;
            if (*(UScriptStruct **)(*(longlong *)&this->MutableColumns + (longlong)iVar10 * 0x18) ==
                pUVar5) {
              plVar14 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar14 = plVar16;
              }
              if (plVar14 != (longlong *)0x0) {
                uVar9 = 0;
                if ((int)uVar12 < param_2->ArrayNum) {
                  uVar9 = uVar15;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar10 = (int)*(short *)((longlong)&param_2->DataPtr[uVar17]->_padding_ + 4);
                plVar16 = (longlong *)
                          ((longlong)
                           ((iVar10 + -1 + (int)param_2->DataPtr[uVar17]->_padding_ & -iVar10) *
                           this->CurrentRow) + *plVar14);
              }
              break;
            }
            iVar10 = *(int *)(lVar1 + 0x10);
          } while (iVar10 != -1);
        }
      }
      uVar9 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      param_1->DataPtr[uVar17] = plVar16;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar2);
  }
  return;
}

// NextBatch @ 142cf7960

bool __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::NextBatch
          (FTestQueryFunctionResponse *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  if (this->RowCount < 1) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Row count was not set in test.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// NextRow @ 142cf79d0

bool __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::NextRow
          (FTestQueryFunctionResponse *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  if (this->RowCount < 1) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Row count was not set in test.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this->CurrentRow = this->CurrentRow + 1;
  return this->CurrentRow < this->RowCount;
}

// SetRowCount @ 142cf9a50

void __thiscall
UE::Editor::DataStorage::Queries::Tests::FTestQueryFunctionResponse::SetRowCount
          (FTestQueryFunctionResponse *this,int param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  if (param_1 < 1) {
    pFVar3 = FAutomationTestFramework::Get();
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,L"Row count was not set in test.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    this->RowCount = param_1;
    return;
  }
  this->RowCount = param_1;
  return;
}

