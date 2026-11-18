// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 33

// FSimpleQuery @ 142c986e0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::FSimpleQuery
          (FSimpleQuery *this,FQueryDescription *param_1)

{
  this->Query = param_1;
  return this;
}

// All @ 142ca4080

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All
          (FSimpleQuery *this,FDynamicColumnDescription *param_1)

{
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  FQueryDescription *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FSimpleQuery *pFVar10;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar11;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar12;
  undefined2 local_18 [8];
  
  pFVar5 = this->Query;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  pTVar1 = &pFVar5->DynamicConditionDescriptions;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  if (((ulonglong)FVar11 <= param_1) &&
     (param_1 < (FDynamicColumnDescription *)
                ((longlong)(pFVar5->DynamicConditionDescriptions).ArrayMax * 0x10 + (longlong)FVar11
                ))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionDescriptions).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionDescriptions).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionDescriptions).ArrayNum = iVar9 + 1;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  FVar7 = param_1->Identifier;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  puVar4 = (undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 0x10);
  *puVar4 = param_1->TemplateType;
  *(FName *)(puVar4 + 1) = FVar7;
  pFVar5 = this->Query;
  local_18[0] = 0;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  pTVar3 = &pFVar5->DynamicConditionOperations;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  if (((ulonglong)FVar12 <= local_18) &&
     (local_18 <
      (undefined2 *)((longlong)FVar12 + (longlong)(pFVar5->DynamicConditionOperations).ArrayMax * 2)
     )) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionOperations).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionOperations).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                      (0x202,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionOperations).ArrayNum = iVar9 + 1;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  *(undefined2 *)((longlong)FVar12 + (longlong)iVar9 * 2) = local_18[0];
  return this;
}

// All @ 142ca4230

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All(FSimpleQuery *this,FValueTag *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FName FVar3;
  FQueryDescription *pFVar4;
  int iVar5;
  
  FVar3 = param_1->Name;
  pFVar4 = this->Query;
  iVar5 = (pFVar4->ValueTags).ArrayNum;
  piVar1 = &(pFVar4->ValueTags).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(pFVar4->ValueTags).AllocatorInstance,piVar1);
  }
  (pFVar4->ValueTags).ArrayNum = iVar5 + 1;
  pFVar2 = (FName *)((pFVar4->ValueTags).AllocatorInstance.Data + (longlong)iVar5 * 0x10);
  *pFVar2 = FVar3;
  pFVar2[1].ComparisonIndex = 0;
  pFVar2[1].Number = 0;
  return this;
}

// All @ 142ca42b0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All
          (FSimpleQuery *this,FValueTag *param_1,FName *param_2)

{
  int *piVar1;
  FQueryDescription *pFVar2;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  pFVar2 = this->Query;
  FVar3 = *param_2;
  FVar4 = param_1->Name;
  iVar6 = (pFVar2->ValueTags).ArrayNum;
  piVar1 = &(pFVar2->ValueTags).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(pFVar2->ValueTags).AllocatorInstance,piVar1);
  }
  (pFVar2->ValueTags).ArrayNum = iVar6 + 1;
  pFVar5 = (pFVar2->ValueTags).AllocatorInstance.Data;
  *(FName *)(pFVar5 + (longlong)iVar6 * 0x10) = FVar4;
  *(FName *)(pFVar5 + (longlong)iVar6 * 0x10 + 8) = FVar3;
  return this;
}

// All @ 142ca4340

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All(FSimpleQuery *this,UEnum *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FQueryDescription *pFVar4;
  int iVar5;
  
  lVar3 = param_1->_padding_;
  pFVar4 = this->Query;
  iVar5 = (pFVar4->ValueTags).ArrayNum;
  piVar1 = &(pFVar4->ValueTags).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(pFVar4->ValueTags).AllocatorInstance,piVar1);
  }
  (pFVar4->ValueTags).ArrayNum = iVar5 + 1;
  pFVar2 = (pFVar4->ValueTags).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(longlong *)pFVar2 = lVar3;
  *(undefined8 *)(pFVar2 + 8) = 0;
  return this;
}

// All @ 142ca43c0

/* WARNING: Enum "Type": Some values do not have unique names */

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All
          (FSimpleQuery *this,UEnum *param_1,long64 param_2)

{
  int *piVar1;
  longlong lVar2;
  FQueryDescription *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong local_res20;
  FName local_28;
  FString local_20;
  
  UEnum::GetNameByValue(param_1,(long64)&local_res20);
  if (local_res20 == 0) {
    if (2 < (byte)LogEditorDataStorage._0_1_) {
      local_28 = (FName)param_1->_padding_;
      ::FName::ToString(&local_28,&local_20);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEditorDataStorage);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar2 = param_1->_padding_;
    pFVar3 = this->Query;
    iVar5 = (pFVar3->ValueTags).ArrayNum;
    piVar1 = &(pFVar3->ValueTags).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&(pFVar3->ValueTags).AllocatorInstance,piVar1);
    }
    (pFVar3->ValueTags).ArrayNum = iVar5 + 1;
    pFVar4 = (pFVar3->ValueTags).AllocatorInstance.Data;
    *(longlong *)(pFVar4 + (longlong)iVar5 * 0x10) = lVar2;
    *(longlong *)(pFVar4 + (longlong)iVar5 * 0x10 + 8) = local_res20;
  }
  return this;
}

// All @ 142ca44c0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All(FSimpleQuery *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FWeakObjectPtr *this_00;
  FQueryDescription *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSimpleQuery *pFVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar8;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar9;
  UScriptStruct *local_res8;
  undefined2 local_18 [8];
  
  if (param_1 != (UScriptStruct *)0x0) {
    pFVar3 = this->Query;
    local_18[0] = 0;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    pTVar2 = &pFVar3->ConditionTypes;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    if (((ulonglong)FVar9 <= local_18) &&
       (local_18 < (undefined2 *)((longlong)FVar9 + (longlong)(pFVar3->ConditionTypes).ArrayMax * 2)
       )) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FSimpleQuery *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (pFVar3->ConditionTypes).ArrayNum;
    piVar1 = &(pFVar3->ConditionTypes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                        (0x202,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionTypes).ArrayNum = iVar6 + 1;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    *(undefined2 *)((longlong)FVar9 + (longlong)iVar6 * 2) = local_18[0];
    pFVar3 = this->Query;
    iVar6 = (pFVar3->ConditionOperators).ArrayNum;
    piVar1 = &(pFVar3->ConditionOperators).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                        (0x408,&(pFVar3->ConditionOperators).AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionOperators).ArrayNum = iVar6 + 1;
    FVar8 = (pFVar3->ConditionOperators).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
              &pFVar3->ConditionOperators;
    }
    this_00 = (FWeakObjectPtr *)((longlong)FVar8 + (longlong)iVar6 * 8);
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  }
  return this;
}

// All @ 142ca4630

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All
          (FSimpleQuery *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  FWeakObjectPtr *this_00;
  int iVar3;
  FQueryDescription *pFVar4;
  UScriptStruct *pUVar5;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar6;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar11;
  FSimpleQuery *pFVar12;
  uint uVar13;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar14;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar15;
  UScriptStruct **ppUVar16;
  UScriptStruct *local_res8;
  undefined2 local_28 [8];
  
  pFVar4 = this->Query;
  iVar10 = param_1->ArrayNum;
  iVar3 = (pFVar4->ConditionTypes).ArrayNum;
  uVar13 = iVar3 + iVar10;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
  if (*piVar1 < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,uVar13,&(pFVar4->ConditionTypes).AllocatorInstance,iVar3,piVar1);
  }
  pFVar4 = this->Query;
  if ((pFVar4->ConditionOperators).ArrayMax < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
              (8,4,uVar13,&(pFVar4->ConditionOperators).AllocatorInstance,
               (pFVar4->ConditionOperators).ArrayNum,&(pFVar4->ConditionOperators).ArrayMax);
  }
  ppUVar16 = param_1->DataPtr;
  ppUVar2 = ppUVar16 + iVar10;
  do {
    if (ppUVar16 == ppUVar2) {
      return this;
    }
    pUVar5 = *ppUVar16;
    if (pUVar5 != (UScriptStruct *)0x0) {
      pFVar4 = this->Query;
      FVar14 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
               &pFVar4->ConditionTypes;
      local_28[0] = 0;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      FVar11 = FVar14;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar11 = FVar6;
      }
      if ((ulonglong)FVar11 <= local_28) {
        FVar11 = FVar14;
        if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar11 = FVar6;
        }
        if ((local_28 <
             (undefined2 *)((longlong)FVar11 + (longlong)(pFVar4->ConditionTypes).ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FSimpleQuery *)(*pcVar8)();
          return pFVar12;
        }
      }
      iVar10 = (pFVar4->ConditionTypes).ArrayNum;
      piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                           (0x202,(ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>
                                   *)FVar14,piVar1);
      }
      (pFVar4->ConditionTypes).ArrayNum = iVar10 + 1;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar14 = FVar6;
      }
      *(undefined2 *)((longlong)FVar14 + (longlong)iVar10 * 2) = local_28[0];
      pFVar4 = this->Query;
      iVar10 = (pFVar4->ConditionOperators).ArrayNum;
      piVar1 = &(pFVar4->ConditionOperators).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                           (0x408,&(pFVar4->ConditionOperators).AllocatorInstance,piVar1);
      }
      (pFVar4->ConditionOperators).ArrayNum = iVar10 + 1;
      FVar7 = (pFVar4->ConditionOperators).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &pFVar4->ConditionOperators;
      if (FVar7 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
        FVar15 = FVar7;
      }
      this_00 = (FWeakObjectPtr *)((longlong)FVar15 + (longlong)iVar10 * 8);
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    }
    ppUVar16 = ppUVar16 + 1;
  } while( true );
}

// Any @ 142ca4a20

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Any
          (FSimpleQuery *this,FDynamicColumnDescription *param_1)

{
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  FQueryDescription *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FSimpleQuery *pFVar10;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar11;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar12;
  undefined2 local_18 [8];
  
  pFVar5 = this->Query;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  pTVar1 = &pFVar5->DynamicConditionDescriptions;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  if (((ulonglong)FVar11 <= param_1) &&
     (param_1 < (FDynamicColumnDescription *)
                ((longlong)(pFVar5->DynamicConditionDescriptions).ArrayMax * 0x10 + (longlong)FVar11
                ))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionDescriptions).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionDescriptions).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionDescriptions).ArrayNum = iVar9 + 1;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  FVar7 = param_1->Identifier;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  puVar4 = (undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 0x10);
  *puVar4 = param_1->TemplateType;
  *(FName *)(puVar4 + 1) = FVar7;
  pFVar5 = this->Query;
  local_18[0] = 1;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  pTVar3 = &pFVar5->DynamicConditionOperations;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  if (((ulonglong)FVar12 <= local_18) &&
     (local_18 <
      (undefined2 *)((longlong)FVar12 + (longlong)(pFVar5->DynamicConditionOperations).ArrayMax * 2)
     )) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionOperations).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionOperations).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                      (0x202,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionOperations).ArrayNum = iVar9 + 1;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  *(undefined2 *)((longlong)FVar12 + (longlong)iVar9 * 2) = local_18[0];
  return this;
}

// Any @ 142ca4bd0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Any(FSimpleQuery *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FWeakObjectPtr *this_00;
  FQueryDescription *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSimpleQuery *pFVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar8;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar9;
  UScriptStruct *local_res8;
  undefined2 local_18 [8];
  
  if (param_1 != (UScriptStruct *)0x0) {
    pFVar3 = this->Query;
    local_18[0] = 1;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    pTVar2 = &pFVar3->ConditionTypes;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    if (((ulonglong)FVar9 <= local_18) &&
       (local_18 < (undefined2 *)((longlong)FVar9 + (longlong)(pFVar3->ConditionTypes).ArrayMax * 2)
       )) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FSimpleQuery *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (pFVar3->ConditionTypes).ArrayNum;
    piVar1 = &(pFVar3->ConditionTypes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                        (0x202,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionTypes).ArrayNum = iVar6 + 1;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    *(undefined2 *)((longlong)FVar9 + (longlong)iVar6 * 2) = local_18[0];
    pFVar3 = this->Query;
    iVar6 = (pFVar3->ConditionOperators).ArrayNum;
    piVar1 = &(pFVar3->ConditionOperators).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                        (0x408,&(pFVar3->ConditionOperators).AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionOperators).ArrayNum = iVar6 + 1;
    FVar8 = (pFVar3->ConditionOperators).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
              &pFVar3->ConditionOperators;
    }
    this_00 = (FWeakObjectPtr *)((longlong)FVar8 + (longlong)iVar6 * 8);
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  }
  return this;
}

// Any @ 142ca4d40

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Any
          (FSimpleQuery *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  FWeakObjectPtr *this_00;
  int iVar3;
  FQueryDescription *pFVar4;
  UScriptStruct *pUVar5;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar6;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar11;
  FSimpleQuery *pFVar12;
  uint uVar13;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar14;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar15;
  UScriptStruct **ppUVar16;
  UScriptStruct *local_res8;
  undefined2 local_28 [8];
  
  pFVar4 = this->Query;
  iVar10 = param_1->ArrayNum;
  iVar3 = (pFVar4->ConditionTypes).ArrayNum;
  uVar13 = iVar3 + iVar10;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
  if (*piVar1 < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,uVar13,&(pFVar4->ConditionTypes).AllocatorInstance,iVar3,piVar1);
  }
  pFVar4 = this->Query;
  if ((pFVar4->ConditionOperators).ArrayMax < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
              (8,4,uVar13,&(pFVar4->ConditionOperators).AllocatorInstance,
               (pFVar4->ConditionOperators).ArrayNum,&(pFVar4->ConditionOperators).ArrayMax);
  }
  ppUVar16 = param_1->DataPtr;
  ppUVar2 = ppUVar16 + iVar10;
  do {
    if (ppUVar16 == ppUVar2) {
      return this;
    }
    pUVar5 = *ppUVar16;
    if (pUVar5 != (UScriptStruct *)0x0) {
      pFVar4 = this->Query;
      FVar14 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
               &pFVar4->ConditionTypes;
      local_28[0] = 1;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      FVar11 = FVar14;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar11 = FVar6;
      }
      if ((ulonglong)FVar11 <= local_28) {
        FVar11 = FVar14;
        if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar11 = FVar6;
        }
        if ((local_28 <
             (undefined2 *)((longlong)FVar11 + (longlong)(pFVar4->ConditionTypes).ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FSimpleQuery *)(*pcVar8)();
          return pFVar12;
        }
      }
      iVar10 = (pFVar4->ConditionTypes).ArrayNum;
      piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                           (0x202,(ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>
                                   *)FVar14,piVar1);
      }
      (pFVar4->ConditionTypes).ArrayNum = iVar10 + 1;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar14 = FVar6;
      }
      *(undefined2 *)((longlong)FVar14 + (longlong)iVar10 * 2) = local_28[0];
      pFVar4 = this->Query;
      iVar10 = (pFVar4->ConditionOperators).ArrayNum;
      piVar1 = &(pFVar4->ConditionOperators).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                           (0x408,&(pFVar4->ConditionOperators).AllocatorInstance,piVar1);
      }
      (pFVar4->ConditionOperators).ArrayNum = iVar10 + 1;
      FVar7 = (pFVar4->ConditionOperators).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &pFVar4->ConditionOperators;
      if (FVar7 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
        FVar15 = FVar7;
      }
      this_00 = (FWeakObjectPtr *)((longlong)FVar15 + (longlong)iVar10 * 8);
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    }
    ppUVar16 = ppUVar16 + 1;
  } while( true );
}

// Compile @ 142ca7e60

FQueryDescription * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Compile(FSimpleQuery *this)

{
  int *piVar1;
  int iVar2;
  FQueryDescription *pFVar3;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar4;
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Query;
  piVar1 = &(pFVar3->Callback).BeforeGroups.ArrayMax;
  iVar2 = (pFVar3->Callback).BeforeGroups.ArrayNum;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,(ForElementType<FName> *)pFVar3,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->Callback).AfterGroups.ArrayNum;
  piVar1 = &(pFVar3->Callback).AfterGroups.ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar2,&(pFVar3->Callback).AfterGroups.AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->SelectionTypes).ArrayNum;
  piVar1 = &(pFVar3->SelectionTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,iVar2,&(pFVar3->SelectionTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->SelectionAccessTypes).ArrayNum;
  piVar1 = &(pFVar3->SelectionAccessTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,iVar2,&(pFVar3->SelectionAccessTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->SelectionMetaData).ArrayNum;
  FVar4 = (pFVar3->SelectionMetaData).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar4 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&pFVar3->SelectionMetaData;
  }
  this_00 = (TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
             *)((longlong)FVar4 + 0x58);
  while( true ) {
    if ((pFVar3->SelectionMetaData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Editor::DataStorage::FColumnMetaData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (&this_00[-2].HashSize == (int *)((longlong)iVar2 * 0xb8 + (longlong)FVar4)) break;
    TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
    ::Shrink(this_00 + -1);
    TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
    ::Shrink(this_00);
    this_00 = (TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
               *)&this_00[2].Elements.field_0x18;
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->SelectionMetaData).ArrayNum;
  piVar1 = &(pFVar3->SelectionMetaData).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
              (0xb8,8,iVar2,&(pFVar3->SelectionMetaData).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->ConditionTypes).ArrayNum;
  piVar1 = &(pFVar3->ConditionTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,iVar2,&(pFVar3->ConditionTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->ConditionOperators).ArrayNum;
  piVar1 = &(pFVar3->ConditionOperators).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
              (8,4,iVar2,&(pFVar3->ConditionOperators).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DynamicConditionDescriptions).ArrayNum;
  piVar1 = &(pFVar3->DynamicConditionDescriptions).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,iVar2,&(pFVar3->DynamicConditionDescriptions).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DynamicConditionOperations).ArrayNum;
  piVar1 = &(pFVar3->DynamicConditionOperations).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,iVar2,&(pFVar3->DynamicConditionOperations).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DynamicSelectionAccessTypes).ArrayNum;
  piVar1 = &(pFVar3->DynamicSelectionAccessTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,iVar2,&(pFVar3->DynamicSelectionAccessTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DynamicSelectionMetaData).ArrayNum;
  piVar1 = &(pFVar3->DynamicSelectionMetaData).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
              (4,4,iVar2,&(pFVar3->DynamicSelectionMetaData).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DynamicSelectionTypes).ArrayNum;
  piVar1 = &(pFVar3->DynamicSelectionTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
              (0x10,8,iVar2,&(pFVar3->DynamicSelectionTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DependencyTypes).ArrayNum;
  piVar1 = &(pFVar3->DependencyTypes).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
              (8,4,iVar2,&(pFVar3->DependencyTypes).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->DependencyFlags).ArrayNum;
  piVar1 = &(pFVar3->DependencyFlags).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
              (1,1,iVar2,&(pFVar3->DependencyFlags).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->CachedDependencies).ArrayNum;
  piVar1 = &(pFVar3->CachedDependencies).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,iVar2,&(pFVar3->CachedDependencies).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  iVar2 = (pFVar3->Subqueries).ArrayNum;
  piVar1 = &(pFVar3->Subqueries).ArrayMax;
  if (*piVar1 != iVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,&(pFVar3->Subqueries).AllocatorInstance,iVar2,piVar1);
  }
  pFVar3 = this->Query;
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
            *)&(pFVar3->MetaData).field_0x8);
  TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>,FDefaultSetAllocator>
            *)&(pFVar3->MetaData).field_0x58);
  return this->Query;
}

// DependsOn @ 142caa730

FDependency __thiscall UE::Editor::DataStorage::Queries::FSimpleQuery::DependsOn(FSimpleQuery *this)

{
  FQueryDescription *in_RDX;
  
  *(FQueryDescription **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this->Query;
  return (FDependency)in_RDX;
}

// None @ 142cb1650

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None
          (FSimpleQuery *this,FDynamicColumnDescription *param_1)

{
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  FQueryDescription *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FSimpleQuery *pFVar10;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar11;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar12;
  undefined2 local_18 [8];
  
  pFVar5 = this->Query;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  pTVar1 = &pFVar5->DynamicConditionDescriptions;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  if (((ulonglong)FVar11 <= param_1) &&
     (param_1 < (FDynamicColumnDescription *)
                ((longlong)(pFVar5->DynamicConditionDescriptions).ArrayMax * 0x10 + (longlong)FVar11
                ))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionDescriptions).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionDescriptions).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionDescriptions).ArrayNum = iVar9 + 1;
  FVar11 = (pFVar5->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
  FVar7 = param_1->Identifier;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar1;
  }
  puVar4 = (undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 0x10);
  *puVar4 = param_1->TemplateType;
  *(FName *)(puVar4 + 1) = FVar7;
  pFVar5 = this->Query;
  local_18[0] = 2;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  pTVar3 = &pFVar5->DynamicConditionOperations;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  if (((ulonglong)FVar12 <= local_18) &&
     (local_18 <
      (undefined2 *)((longlong)FVar12 + (longlong)(pFVar5->DynamicConditionOperations).ArrayMax * 2)
     )) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FSimpleQuery *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar9 = (pFVar5->DynamicConditionOperations).ArrayNum;
  piVar2 = &(pFVar5->DynamicConditionOperations).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                      (0x202,&pTVar3->AllocatorInstance,piVar2);
  }
  (pFVar5->DynamicConditionOperations).ArrayNum = iVar9 + 1;
  FVar12 = (pFVar5->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar12 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar3;
  }
  *(undefined2 *)((longlong)FVar12 + (longlong)iVar9 * 2) = local_18[0];
  return this;
}

// None @ 142cb1800

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None(FSimpleQuery *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FWeakObjectPtr *this_00;
  FQueryDescription *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSimpleQuery *pFVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar8;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar9;
  UScriptStruct *local_res8;
  undefined2 local_18 [8];
  
  if (param_1 != (UScriptStruct *)0x0) {
    pFVar3 = this->Query;
    local_18[0] = 2;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    pTVar2 = &pFVar3->ConditionTypes;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    if (((ulonglong)FVar9 <= local_18) &&
       (local_18 < (undefined2 *)((longlong)FVar9 + (longlong)(pFVar3->ConditionTypes).ArrayMax * 2)
       )) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FSimpleQuery *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (pFVar3->ConditionTypes).ArrayNum;
    piVar1 = &(pFVar3->ConditionTypes).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                        (0x202,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionTypes).ArrayNum = iVar6 + 1;
    FVar9 = (pFVar3->ConditionTypes).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)pTVar2;
    }
    *(undefined2 *)((longlong)FVar9 + (longlong)iVar6 * 2) = local_18[0];
    pFVar3 = this->Query;
    iVar6 = (pFVar3->ConditionOperators).ArrayNum;
    piVar1 = &(pFVar3->ConditionOperators).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                        (0x408,&(pFVar3->ConditionOperators).AllocatorInstance,piVar1);
    }
    (pFVar3->ConditionOperators).ArrayNum = iVar6 + 1;
    FVar8 = (pFVar3->ConditionOperators).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
              &pFVar3->ConditionOperators;
    }
    this_00 = (FWeakObjectPtr *)((longlong)FVar8 + (longlong)iVar6 * 8);
    this_00->ObjectIndex = 0;
    this_00->ObjectSerialNumber = 0;
    local_res8 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  }
  return this;
}

// None @ 142cb1970

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None
          (FSimpleQuery *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  FWeakObjectPtr *this_00;
  int iVar3;
  FQueryDescription *pFVar4;
  UScriptStruct *pUVar5;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar6;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar11;
  FSimpleQuery *pFVar12;
  uint uVar13;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar14;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar15;
  UScriptStruct **ppUVar16;
  UScriptStruct *local_res8;
  undefined2 local_28 [8];
  
  pFVar4 = this->Query;
  iVar10 = param_1->ArrayNum;
  iVar3 = (pFVar4->ConditionTypes).ArrayNum;
  uVar13 = iVar3 + iVar10;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
  if (*piVar1 < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
              (2,2,uVar13,&(pFVar4->ConditionTypes).AllocatorInstance,iVar3,piVar1);
  }
  pFVar4 = this->Query;
  if ((pFVar4->ConditionOperators).ArrayMax < (int)uVar13) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
              (8,4,uVar13,&(pFVar4->ConditionOperators).AllocatorInstance,
               (pFVar4->ConditionOperators).ArrayNum,&(pFVar4->ConditionOperators).ArrayMax);
  }
  ppUVar16 = param_1->DataPtr;
  ppUVar2 = ppUVar16 + iVar10;
  do {
    if (ppUVar16 == ppUVar2) {
      return this;
    }
    pUVar5 = *ppUVar16;
    if (pUVar5 != (UScriptStruct *)0x0) {
      pFVar4 = this->Query;
      FVar14 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
               &pFVar4->ConditionTypes;
      local_28[0] = 2;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      FVar11 = FVar14;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar11 = FVar6;
      }
      if ((ulonglong)FVar11 <= local_28) {
        FVar11 = FVar14;
        if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar11 = FVar6;
        }
        if ((local_28 <
             (undefined2 *)((longlong)FVar11 + (longlong)(pFVar4->ConditionTypes).ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          pFVar12 = (FSimpleQuery *)(*pcVar8)();
          return pFVar12;
        }
      }
      iVar10 = (pFVar4->ConditionTypes).ArrayNum;
      piVar1 = &(pFVar4->ConditionTypes).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
                           (0x202,(ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>
                                   *)FVar14,piVar1);
      }
      (pFVar4->ConditionTypes).ArrayNum = iVar10 + 1;
      FVar6 = (pFVar4->ConditionTypes).AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
        FVar14 = FVar6;
      }
      *(undefined2 *)((longlong)FVar14 + (longlong)iVar10 * 2) = local_28[0];
      pFVar4 = this->Query;
      iVar10 = (pFVar4->ConditionOperators).ArrayNum;
      piVar1 = &(pFVar4->ConditionOperators).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                           (0x408,&(pFVar4->ConditionOperators).AllocatorInstance,piVar1);
      }
      (pFVar4->ConditionOperators).ArrayNum = iVar10 + 1;
      FVar7 = (pFVar4->ConditionOperators).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &pFVar4->ConditionOperators;
      if (FVar7 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
        FVar15 = FVar7;
      }
      this_00 = (FWeakObjectPtr *)((longlong)FVar15 + (longlong)iVar10 * 8);
      this_00->ObjectIndex = 0;
      this_00->ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
    }
    ppUVar16 = ppUVar16 + 1;
  } while( true );
}

// All<FTEDSProcessorTests_PrimaryTag> @ 142cce4c0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTEDSProcessorTests_PrimaryTag>
          (FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTEDSProcessorTests_PrimaryTag::StaticStruct();
  All(this,pUVar1);
  return this;
}

// All<FTEDSProcessorTests_SecondaryTag> @ 142cce4f0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTEDSProcessorTests_SecondaryTag>
          (FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTEDSProcessorTests_SecondaryTag::StaticStruct();
  All(this,pUVar1);
  return this;
}

// All<FTestColumnA> @ 142cce520

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnA>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnA::StaticStruct();
  All(this,pUVar1);
  return this;
}

// All<FTestColumnA,FTestTagColumnA> @ 142cce550

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnA,FTestTagColumnA>
          (FSimpleQuery *this)

{
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_28 = FTestColumnA::StaticStruct();
  local_20 = FTestTagColumnA::StaticStruct();
  local_18.ArrayNum = 2;
  local_18.DataPtr = &local_28;
  All(this,&local_18);
  return this;
}

// All<FTestColumnB> @ 142cce5b0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnB>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnB::StaticStruct();
  All(this,pUVar1);
  return this;
}

// All<FTestColumnB,FTestTagColumnA> @ 142cce5e0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnB,FTestTagColumnA>
          (FSimpleQuery *this)

{
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestTagColumnA::StaticStruct();
  local_18.ArrayNum = 2;
  local_18.DataPtr = &local_28;
  All(this,&local_18);
  return this;
}

// All<FTestColumnB,FTestTagColumnB> @ 142cce640

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnB,FTestTagColumnB>
          (FSimpleQuery *this)

{
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestTagColumnB::StaticStruct();
  local_18.ArrayNum = 2;
  local_18.DataPtr = &local_28;
  All(this,&local_18);
  return this;
}

// All<FTestColumnDynamic> @ 142cce6a0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTestColumnDynamic>
          (FSimpleQuery *this,FName *param_1)

{
  FSimpleQuery *pFVar1;
  FDynamicColumnDescription local_18;
  
  local_18.TemplateType = FTestColumnDynamic::StaticStruct();
  local_18.Identifier = *param_1;
  pFVar1 = All(this,&local_18);
  return pFVar1;
}

// All<FTest_PingPongPrePhys> @ 142cce6e0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::All<FTest_PingPongPrePhys>(FSimpleQuery *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar1,
                         L"Test_PingPongPrePhys");
  }
  All(this,Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  return this;
}

// Any<FTestColumnB,FTestColumnC,FTestColumnD> @ 142cce740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Any<FTestColumnB,FTestColumnC,FTestColumnD>
          (FSimpleQuery *this)

{
  undefined1 auStack_58 [32];
  TArrayView<UScriptStruct_const_*_const,int> local_38;
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  UScriptStruct *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestColumnC::StaticStruct();
  local_18 = FTestColumnD::StaticStruct();
  local_38.ArrayNum = 3;
  local_38.DataPtr = &local_28;
  Any(this,&local_38);
  return this;
}

// Any<FTestColumnB,FTestColumnD> @ 142cce7c0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::Any<FTestColumnB,FTestColumnD>(FSimpleQuery *this)

{
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_28 = FTestColumnB::StaticStruct();
  local_20 = FTestColumnD::StaticStruct();
  local_18.ArrayNum = 2;
  local_18.DataPtr = &local_28;
  Any(this,&local_18);
  return this;
}

// None<FTEDSProcessorTests_Linked> @ 142cd8bf0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTEDSProcessorTests_Linked>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTEDSProcessorTests_Linked::StaticStruct();
  None(this,pUVar1);
  return this;
}

// None<FTestColumnA> @ 142cd8c20

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTestColumnA>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnA::StaticStruct();
  None(this,pUVar1);
  return this;
}

// None<FTestColumnB> @ 142cd8c50

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTestColumnB>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnB::StaticStruct();
  None(this,pUVar1);
  return this;
}

// None<FTestColumnC> @ 142cd8c80

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTestColumnC>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnC::StaticStruct();
  None(this,pUVar1);
  return this;
}

// None<FTestColumnDynamic> @ 142cd8cb0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTestColumnDynamic>
          (FSimpleQuery *this,FName *param_1)

{
  FSimpleQuery *pFVar1;
  FDynamicColumnDescription local_18;
  
  local_18.TemplateType = FTestColumnDynamic::StaticStruct();
  local_18.Identifier = *param_1;
  pFVar1 = None(this,&local_18);
  return pFVar1;
}

// None<FTestTagColumnC> @ 142cd8cf0

FSimpleQuery * __thiscall
UE::Editor::DataStorage::Queries::FSimpleQuery::None<FTestTagColumnC>(FSimpleQuery *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestTagColumnC::StaticStruct();
  None(this,pUVar1);
  return this;
}

