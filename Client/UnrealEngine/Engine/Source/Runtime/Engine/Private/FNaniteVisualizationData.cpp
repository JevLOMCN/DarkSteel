// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// AddVisualizationMode @ 147fb2b00

void __thiscall
FNaniteVisualizationData::AddVisualizationMode
          (FNaniteVisualizationData *this,wchar_t *param_1,FText *param_2,FModeType param_3,
          int param_4,bool param_5,bool param_6,
          TArray<FVisualizationDataLegendEntry,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FString *pFVar4;
  FText *pFVar5;
  FString *pFVar6;
  int *piVar7;
  FName local_res8 [2];
  FName *local_res18;
  TKeyInitializer<FName_const_&> local_res20;
  FString local_38;
  
  ::FName::FName(local_res8,param_1);
  local_res18 = local_res8;
  TSet<TTuple<FName,FNaniteVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FNaniteVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
              *)this,&local_res20,(bool *)&local_res18);
  pFVar6 = (FString *)(*(longlong *)&this->ModeMap + (longlong)(int)local_res20.Key * 0x68 + 8);
  pFVar4 = ::FString::FString(&local_38,param_1);
  if (pFVar6 != pFVar4) {
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar6->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(FName *)(pFVar6 + 1) = local_res8[0];
  pIVar2 = (param_2->TextData).Reference;
  pIVar3 = *(ITextData **)&pFVar6[1].Data.ArrayNum;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&pFVar6[1].Data.ArrayNum = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res20);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&pFVar6[2].Data.AllocatorInstance.Data = param_2->Flags;
  pFVar5 = FText::GetEmpty();
  pIVar2 = *(ITextData **)&pFVar6[2].Data.ArrayNum;
  pIVar3 = (pFVar5->TextData).Reference;
  if (pIVar2 != pIVar3) {
    *(ITextData **)&pFVar6[2].Data.ArrayNum = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res20);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  *(uint *)&pFVar6[3].Data.AllocatorInstance.Data = pFVar5->Flags;
  pFVar6[3].Data.ArrayMax = param_4;
  *(bool *)&pFVar6[4].Data.AllocatorInstance.Data = param_5;
  *(bool *)((longlong)&pFVar6[4].Data.AllocatorInstance.Data + 1) = param_6;
  *(FModeType *)&pFVar6[3].Data.ArrayNum = param_3;
  piVar7 = &pFVar6[4].Data.ArrayNum;
  if ((TArray<FVisualizationDataLegendEntry,TSizedDefaultAllocator<32>_> *)piVar7 != param_7) {
    DestructItems<FVisualizationDataLegendEntry,int>
              (*(FVisualizationDataLegendEntry **)piVar7,
               *(int *)&pFVar6[5].Data.AllocatorInstance.Data);
    if (*(void **)piVar7 != (void *)0x0) {
      FMemory::Free(*(void **)piVar7);
    }
    *(FScriptContainerElement **)piVar7 = (param_7->AllocatorInstance).Data;
    (param_7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar6[5].Data.AllocatorInstance.Data = param_7->ArrayNum;
    *(int *)((longlong)&pFVar6[5].Data.AllocatorInstance.Data + 4) = param_7->ArrayMax;
    param_7->ArrayNum = 0;
    param_7->ArrayMax = 0;
  }
  return;
}

// ConfigureConsoleCommand @ 147fbb1b0

void __thiscall FNaniteVisualizationData::ConfigureConsoleCommand(FNaniteVisualizationData *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint *puVar11;
  int iVar12;
  FString local_98;
  FString local_88;
  FNaniteVisualizationData *local_78;
  int iStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FNaniteVisualizationData *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar12 = 0;
  local_68 = &(this->ModeMap).field_0x10;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  iStack_70 = 0;
  iVar9 = *(int *)&(this->ModeMap).field_0x28;
  uStack_6c = 1;
  local_58 = iStack_70;
  iStack_5c = 0;
  if (iVar9 != 0) {
    puVar11 = *(uint **)&(this->ModeMap).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)local_68;
    }
    uVar2 = *puVar11;
    local_58 = iVar12;
    iStack_70 = iVar12;
    while (uVar2 == 0) {
      lVar6 = (longlong)iStack_70;
      local_58 = local_58 + 0x20;
      iStack_70 = iStack_70 + 1;
      iStack_5c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_70) goto LAB_147fbb25d;
      uVar2 = puVar11[lVar6 + 1];
    }
    uStack_6c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_6c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar6;
    if (iVar9 < iStack_5c) {
      iStack_5c = iVar9;
    }
  }
LAB_147fbb25d:
  uStack_60 = 0xffffffff;
  TStack_40._padding_ = CONCAT44(uStack_6c,iStack_70);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  local_78 = this;
  iStack_54 = iStack_5c;
  local_48 = this;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
  TStack_40.CurrentBitIndex = iStack_5c;
  if (iStack_5c < iVar9) {
    do {
      lVar6 = (longlong)TStack_40.CurrentBitIndex * 0x68 + *(longlong *)&local_48->ModeMap;
      pFVar5 = ::FString::FString(&local_88,L"\n  ");
      iVar9 = (pFVar5->Data).ArrayNum;
      iVar8 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar8 = iVar12;
      }
      ::FString::AppendChars(&local_98,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar9 = *(int *)(lVar6 + 0x10);
      iVar8 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar8 = iVar12;
      }
      ::FString::AppendChars(&local_98,*(wchar_t **)(lVar6 + 8),iVar8);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"When the viewport view-mode is set to \'Nanite Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar9 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar9 = iVar12;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_98.Data.AllocatorInstance.Data,iVar9);
  pwVar7 = L"";
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.Nanite.Visualize",L"",pwVar10,1);
  ::FString::operator=
            (&this->ConsoleDocumentationOverviewTargets,
             L"Specify the list of modes that can be used in the Nanite visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:\n"
            );
  iVar9 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar9 = iVar12;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationOverviewTargets,
             (wchar_t *)local_98.Data.AllocatorInstance.Data,iVar9);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->ConsoleDocumentationOverviewTargets).Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)(this->ConsoleDocumentationOverviewTargets).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.Nanite.VisualizeOverview",
             L"Triangles,Clusters,Instances,Primitives,,,,,,,,,Overdraw,ShadingBins,RasterBins,EvaluateWPO"
             ,pwVar7,0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// GetLegendEntries @ 147fd31c0

TArray<FVisualizationDataLegendEntry,TSizedDefaultAllocator<32>_> * __thiscall
FNaniteVisualizationData::GetLegendEntries
          (FNaniteVisualizationData *this,
          TArray<FVisualizationDataLegendEntry,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1)

{
  int *piVar1;
  int iVar2;
  FVisualizationDataLegendEntry *pFVar3;
  FModeRecord *pFVar4;
  
  pFVar4 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pFVar4 == (FModeRecord *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  pFVar3 = (FVisualizationDataLegendEntry *)(pFVar4->LegendEntries).AllocatorInstance.Data;
  iVar2 = (pFVar4->LegendEntries).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FVisualizationDataLegendEntry,FVisualizationDataLegendEntry,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar2);
  return __return_storage_ptr__;
}

// GetModeDefaultComposited @ 147fd3870

bool __thiscall
FNaniteVisualizationData::GetModeDefaultComposited(FNaniteVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->DefaultComposited;
  }
  return false;
}

// GetModeDisplayName @ 147fd38a0

FText * __thiscall
FNaniteVisualizationData::GetModeDisplayName
          (FNaniteVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar2 != (FModeRecord *)0x0) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar2->ModeText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (pFVar2->ModeText).Flags;
    return __return_storage_ptr__;
  }
  pFVar3 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar3->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar3->Flags;
  return __return_storage_ptr__;
}

// GetModeID @ 147fd3940

int __thiscall FNaniteVisualizationData::GetModeID(FNaniteVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ModeID;
  }
  return -1;
}

// Initialize @ 147fe0520

void __thiscall FNaniteVisualizationData::Initialize(FNaniteVisualizationData *this)

{
  ForAnyElementType FVar1;
  FText *pFVar2;
  TArray<FVisualizationDataLegendEntry,TSizedDefaultAllocator<32>_> local_28;
  FText local_18;
  
  if (this->bIsInitialized == false) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Overview",L"Overview");
    AddVisualizationMode(this,L"Overview",pFVar2,Overview,0,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Mask",L"Mask");
    AddVisualizationMode(this,L"Mask",pFVar2,Standard,0x14,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Triangles",L"Triangles");
    AddVisualizationMode(this,L"Triangles",pFVar2,Standard,1,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Patches",L"Patches");
    AddVisualizationMode(this,L"Patches",pFVar2,Standard,2,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Clusters",L"Clusters");
    AddVisualizationMode(this,L"Clusters",pFVar2,Standard,3,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Primitives",L"Primitives");
    AddVisualizationMode(this,L"Primitives",pFVar2,Standard,4,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Instances",L"Instances");
    AddVisualizationMode(this,L"Instances",pFVar2,Standard,5,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Overdraw",L"Overdraw");
    AddVisualizationMode(this,L"Overdraw",pFVar2,Standard,8,false,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"LightmapUV",L"Lightmap UV");
    AddVisualizationMode(this,L"LightmapUV",pFVar2,Standard,0x15,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"EvaluateWPO",L"Evaluate WPO");
    AddVisualizationMode(this,L"EvaluateWPO",pFVar2,Standard,0x1b,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"PixelProgrammable",
                        L"Pixel Programmable");
    AddVisualizationMode(this,L"PixelProgrammable",pFVar2,Standard,0x1c,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Tessellation",L"Tessellation");
    AddVisualizationMode(this,L"Tessellation",pFVar2,Standard,0x21,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"RasterBins",L"Raster Bins");
    AddVisualizationMode(this,L"RasterBins",pFVar2,Standard,10,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"ShadingBins",L"Shading Bins");
    AddVisualizationMode(this,L"ShadingBins",pFVar2,Standard,0xb,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"ShadowCasters",L"Shadow Casters");
    AddVisualizationMode(this,L"ShadowCasters",pFVar2,Advanced,0x1a,true,false,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Picking",L"Picking");
    AddVisualizationMode(this,L"Picking",pFVar2,Advanced,0x1d,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Groups",L"Groups");
    AddVisualizationMode(this,L"Groups",pFVar2,Advanced,6,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Pages",L"Pages");
    AddVisualizationMode(this,L"Pages",pFVar2,Advanced,7,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Hierarchy",L"Hierarchy");
    AddVisualizationMode(this,L"Hierarchy",pFVar2,Advanced,0x18,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"RasterMode",L"Raster Mode");
    AddVisualizationMode(this,L"RasterMode",pFVar2,Advanced,9,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"SceneZMin",L"Scene Z Min");
    AddVisualizationMode(this,L"SceneZMin",pFVar2,Advanced,0xc,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"SceneZMax",L"Scene Z Max");
    AddVisualizationMode(this,L"SceneZMax",pFVar2,Advanced,0xd,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"SceneZDelta",L"Scene Z Delta");
    AddVisualizationMode(this,L"SceneZDelta",pFVar2,Advanced,0xe,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"SceneZDecoded",L"Scene Z Decoded");
    AddVisualizationMode(this,L"SceneZDecoded",pFVar2,Advanced,0xf,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"MaterialCount",L"Material Count");
    AddVisualizationMode(this,L"MaterialCount",pFVar2,Advanced,0x10,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"MaterialMode",L"Material Mode");
    AddVisualizationMode(this,L"MaterialMode",pFVar2,Advanced,0x11,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"MaterialIndex",L"Material Index");
    AddVisualizationMode(this,L"MaterialIndex",pFVar2,Advanced,0x12,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"HitProxyID",L"Hit Proxy ID");
    AddVisualizationMode(this,L"HitProxyID",pFVar2,Advanced,0x13,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"LightmapUVIndex",
                        L"Lightmap UV Index");
    AddVisualizationMode(this,L"LightmapUVIndex",pFVar2,Advanced,0x16,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"LightmapDataIndex",
                        L"Lightmap Data Index");
    AddVisualizationMode(this,L"LightmapDataIndex",pFVar2,Advanced,0x17,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"PositionBits",L"Position Bits");
    AddVisualizationMode(this,L"PositionBits",pFVar2,Advanced,0x19,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"ShadingWriteMask",
                        L"Shading Write Mask");
    AddVisualizationMode(this,L"ShadingWriteMask",pFVar2,Advanced,0x1e,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"NoDerivativeOps",
                        L"No Derivative Ops");
    AddVisualizationMode(this,L"NoDerivativeOps",pFVar2,Advanced,0x1f,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"FastClearTiles",L"Fast Clear Tiles")
    ;
    AddVisualizationMode(this,L"FastClearTiles",pFVar2,Advanced,0x20,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"DisplacementScale",
                        L"DisplacementScale");
    AddVisualizationMode(this,L"DisplacementScale",pFVar2,Advanced,0x22,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"VertexColor",L"VertexColor");
    AddVisualizationMode(this,L"VertexColor",pFVar2,Advanced,0x23,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"MeshPaintTexture",
                        L"Mesh Paint Texture");
    AddVisualizationMode(this,L"MeshPaintTexture",pFVar2,Advanced,0x24,true,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Voxels",L"Voxels");
    AddVisualizationMode(this,L"Voxels",pFVar2,Advanced,0x25,false,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Assemblies",L"Assemblies");
    AddVisualizationMode(this,L"Assemblies",pFVar2,Advanced,0x26,false,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FNaniteVisualizationData",L"Skinning",L"Skinning");
    AddVisualizationMode(this,L"Skinning",pFVar2,Advanced,0x27,false,true,&local_28);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FVar1.Data = local_28.AllocatorInstance.Data;
    DestructItems<FVisualizationDataLegendEntry,int>
              ((FVisualizationDataLegendEntry *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if ((FVisualizationDataLegendEntry *)FVar1.Data != (FVisualizationDataLegendEntry *)0x0) {
      FMemory::Free(FVar1.Data);
    }
    ConfigureConsoleCommand(this);
    this->bIsInitialized = true;
  }
  return;
}

// IsActive @ 147fe2250

bool __thiscall FNaniteVisualizationData::IsActive(FNaniteVisualizationData *this)

{
  if ((this->bIsInitialized != false) && (this->ActiveVisualizationModeID != -1)) {
    if (this->ActiveVisualizationModeID == 0) {
      return this->bOverviewListEmpty == false;
    }
    return true;
  }
  return false;
}

// IsDifferentToCurrentOverviewModeList @ 147fe2680

bool __thiscall
FNaniteVisualizationData::IsDifferentToCurrentOverviewModeList
          (FNaniteVisualizationData *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (this->CurrentOverviewModeList).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(this->CurrentOverviewModeList).Data.AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// Pick @ 147fe5890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNaniteVisualizationData::Pick(FNaniteVisualizationData *this,UWorld *param_1)

{
  code *pcVar1;
  TVector2<float>_u_0 TVar2;
  bool bVar3;
  int iVar4;
  APlayerController *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (this->bIsInitialized == false) {
    return;
  }
  iVar4 = this->ActiveVisualizationModeID;
  if (iVar4 == -1) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 != 0x1d) {
    return;
  }
  local_98._4_4_ = 0;
  local_90 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_98._0_4_ = 0;
  local_98 = (code *)0x0;
  if (param_1 != (UWorld *)0x0) {
    iVar4 = UWorld::GetNumPlayerControllers(param_1);
    if (0 < iVar4) {
      this_00 = UWorld::GetFirstPlayerController(param_1);
      APlayerController::GetMousePosition
                (this_00,(float *)&local_90,(float *)((longlong)&local_90 + 4));
      APlayerController::GetViewportSize(this_00,(int *)&local_98,(int *)((longlong)&local_98 + 4));
      if (GNanitePickingCrosshair == 0) goto LAB_147fe5963;
    }
  }
  local_90._4_4_ = (float)(local_98._4_4_ >> 1);
  local_90._0_4_ = (float)((int)local_98 >> 1);
LAB_147fe5963:
  TVar2 = local_90;
  pcVar1 = local_98;
  local_88[0] = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNaniteVisualizationData::Pick'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = (code *)this;
  *(TVector2<float>_u_0 *)(local_60 + 2) = TVar2;
  local_60[3] = pcVar1;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNaniteVisualizationData::Pick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNaniteVisualizationData::Pick_::__l2::TSTR_UpdateNaniteDebugPicking395>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FNaniteVisualizationData::Pick'::__l2::TSTR_UpdateNaniteDebugPicking395>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar6 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar6 = local_30;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar6 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar6 = local_60;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  return;
}

// SetActiveMode @ 147ff3fb0

void __thiscall
FNaniteVisualizationData::SetActiveMode
          (FNaniteVisualizationData *this,int param_1,FName *param_2,bool param_3)

{
  this->ActiveVisualizationModeID = param_1;
  this->ActiveVisualizationModeName = *param_2;
  this->bActiveVisualizationModeComposited = param_3;
  return;
}

// SetCurrentOverviewModeList @ 147ff4ef0

void __thiscall
FNaniteVisualizationData::SetCurrentOverviewModeList
          (FNaniteVisualizationData *this,FString *param_1)

{
  ::FString::operator=(&this->CurrentOverviewModeList,param_1);
  return;
}

// ShouldDrawLegend @ 147ff7c00

bool __thiscall
FNaniteVisualizationData::ShouldDrawLegend(FNaniteVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->bDrawLegend;
  }
  return false;
}

// Update @ 147ffce50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FNaniteVisualizationData::Update(FNaniteVisualizationData *this,FName *param_1)

{
  FString *pFVar1;
  int *piVar2;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  ForElementType<int> FVar5;
  ForElementType<FName> FVar6;
  code *pcVar7;
  void *pvVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  IConsoleManager *pIVar12;
  FModeRecord *pFVar13;
  int iVar14;
  ForElementType<int> FVar15;
  ForAnyElementType FVar16;
  ForElementType<FName> FVar17;
  bool bVar18;
  FName local_res8;
  FName *local_res10;
  undefined8 local_res18;
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (this->bIsInitialized == false) {
    return false;
  }
  this->ActiveVisualizationModeID = -1;
  (this->ActiveVisualizationModeName).ComparisonIndex = 0;
  pvVar8 = ThreadLocalStoragePointer;
  (this->ActiveVisualizationModeName).Number = 0;
  this->bActiveVisualizationModeComposited = true;
  local_res18 = 0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)pvVar8 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar12 = IConsoleManager::Get();
    ICVarOverview = (IConsoleVariable *)(**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12);
    _Init_thread_footer(&::_TSS0);
  }
  if (ICVarOverview != (IConsoleVariable *)0x0) {
    (**(code **)(*(longlong *)ICVarOverview + 0xd8))();
    iVar11 = local_88.Data.ArrayNum;
    pFVar1 = &this->CurrentOverviewModeList;
    iVar14 = (this->CurrentOverviewModeList).Data.ArrayNum;
    if (iVar11 == iVar14) {
      if (iVar11 < 2) {
        bVar18 = false;
      }
      else {
        iVar14 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                            (wchar_t *)(pFVar1->Data).AllocatorInstance.Data);
        iVar11 = local_88.Data.ArrayNum;
        bVar18 = iVar14 != 0;
      }
    }
    else {
      bVar18 = iVar14 + iVar11 != 1;
    }
    FVar16.Data = local_88.Data.AllocatorInstance.Data;
    if (bVar18) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      if (pFVar1 != &local_88) {
        iVar14 = (this->CurrentOverviewModeList).Data.ArrayMax;
        piVar2 = &(this->CurrentOverviewModeList).Data.ArrayMax;
        (this->CurrentOverviewModeList).Data.ArrayNum = iVar11;
        if ((iVar11 == 0) && (iVar14 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,iVar14,(ForAnyElementType *)pFVar1,iVar11,piVar2);
          if (iVar11 != 0) {
            memcpy((pFVar1->Data).AllocatorInstance.Data,FVar16.Data,(longlong)iVar11 * 2);
          }
        }
      }
      piVar2 = &(this->CurrentOverviewModeNames).ArrayMax;
      (this->CurrentOverviewModeNames).ArrayNum = 0;
      if (*piVar2 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                  (8,4,0,&(this->CurrentOverviewModeNames).AllocatorInstance,0,piVar2);
      }
      pTVar3 = &this->CurrentOverviewModeIDs;
      piVar4 = &(this->CurrentOverviewModeIDs).ArrayMax;
      (this->CurrentOverviewModeIDs).ArrayNum = 0;
      if (*piVar4 < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar4);
      }
      this->bOverviewListEmpty = true;
      while( true ) {
        iVar14 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        if (iVar14 == 0) break;
        ::FString::FString(&local_58,L",");
        bVar18 = ::FString::Split(&local_88,&local_58,&local_68,&local_78);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (!bVar18) {
          iVar14 = local_88.Data.ArrayNum + -1;
          if (local_88.Data.ArrayNum == 0) {
            iVar14 = 0;
          }
          ::FString::AssignRange(&local_68,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar14);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
        }
        ::FString::TrimStartInline(&local_68);
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar16.Data = local_68.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res20,(wchar_t *)FVar16.Data);
        pFVar13 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                  ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                          *)this,local_res20);
        if (pFVar13 == (FModeRecord *)0x0) {
          iVar14 = -1;
        }
        else {
          iVar14 = pFVar13->ModeID;
        }
        if ((local_68.Data.ArrayNum < 2) || (iVar14 != -1)) {
          iVar11 = (this->CurrentOverviewModeIDs).ArrayNum;
          if (iVar14 == -1) {
            if (iVar11 == *piVar4) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&pTVar3->AllocatorInstance,piVar4);
            }
            (this->CurrentOverviewModeIDs).ArrayNum = iVar11 + 1;
            FVar5 = (this->CurrentOverviewModeIDs).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<int>)pTVar3;
            if (FVar5 != (ForElementType<int>)0x0) {
              FVar15 = FVar5;
            }
            *(undefined4 *)((longlong)FVar15 + (longlong)iVar11 * 4) = 0xffffffff;
          }
          else {
            if (iVar11 == *piVar4) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                 (0x404,&pTVar3->AllocatorInstance,piVar4);
            }
            (this->CurrentOverviewModeIDs).ArrayNum = iVar11 + 1;
            FVar5 = (this->CurrentOverviewModeIDs).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<int>)pTVar3;
            if (FVar5 != (ForElementType<int>)0x0) {
              FVar15 = FVar5;
            }
            *(int *)((longlong)FVar15 + (longlong)iVar11 * 4) = iVar14;
            this->bOverviewListEmpty = false;
          }
          iVar14 = (this->CurrentOverviewModeNames).ArrayNum;
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                               (0x408,&(this->CurrentOverviewModeNames).AllocatorInstance,piVar2);
          }
          (this->CurrentOverviewModeNames).ArrayNum = iVar14 + 1;
          FVar6 = (this->CurrentOverviewModeNames).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<FName>)&this->CurrentOverviewModeNames;
          if (FVar6 != (ForElementType<FName>)0x0) {
            FVar17 = FVar6;
          }
          *(FName *)((longlong)FVar17 + (longlong)iVar14 * 8) = local_res20;
        }
        else if (2 < (byte)LogNaniteVisualization._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNaniteVisualization);
        }
        iVar14 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar14);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    param_1 = local_res10;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      param_1 = local_res10;
    }
  }
  bVar18 = false;
  if (this->ActiveVisualizationModeID != -1) {
    ::FString::Reset(&this->CurrentConsoleVisualizationMode,0);
    goto LAB_147ffd461;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar12 = IConsoleManager::Get();
    ICVarVisualize =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.Nanite.Visualize",1);
    _Init_thread_footer(&::_TSS1);
  }
  if (ICVarVisualize == (IConsoleVariable *)0x0) goto LAB_147ffd461;
  (**(code **)(*(longlong *)ICVarVisualize + 0xd8))(ICVarVisualize,&local_98);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar16.Data = local_98.Data.AllocatorInstance.Data;
  }
  iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"off");
  if (iVar14 == 0) {
LAB_147ffd369:
    bVar9 = true;
  }
  else {
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar16.Data = local_98.Data.AllocatorInstance.Data;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar16.Data,L"none");
    if (iVar14 == 0) goto LAB_147ffd369;
    bVar9 = false;
  }
  if ((1 < local_98.Data.ArrayNum) && (!bVar9)) {
    ::FName::FName(&local_res8,(wchar_t *)local_98.Data.AllocatorInstance.Data);
    pFVar13 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
              ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                      *)this,local_res8);
    if ((pFVar13 == (FModeRecord *)0x0) || (iVar14 = pFVar13->ModeID, iVar14 == -1)) {
      iVar14 = (this->CurrentConsoleVisualizationMode).Data.ArrayNum;
      if (local_98.Data.ArrayNum == iVar14) {
        if (local_98.Data.ArrayNum < 2) goto LAB_147ffd433;
        iVar14 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_98.Data.AllocatorInstance.Data,
                            (wchar_t *)
                            (this->CurrentConsoleVisualizationMode).Data.AllocatorInstance.Data);
        bVar9 = iVar14 == 0;
      }
      else {
        bVar9 = iVar14 + local_98.Data.ArrayNum == 1;
      }
      if ((!bVar9) && (2 < (byte)LogNaniteVisualization._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNaniteVisualization)
        ;
      }
    }
    else {
      pFVar13 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                        *)this,local_res8);
      if (pFVar13 == (FModeRecord *)0x0) {
        bVar9 = false;
      }
      else {
        bVar9 = pFVar13->DefaultComposited;
      }
      bVar18 = true;
      this->ActiveVisualizationModeName = local_res8;
      this->ActiveVisualizationModeID = iVar14;
      this->bActiveVisualizationModeComposited = bVar9;
    }
  }
LAB_147ffd433:
  ::FString::operator=(&this->CurrentConsoleVisualizationMode,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_147ffd461:
  if ((this->ActiveVisualizationModeID == -1) && (*param_1 != (FName)0x0)) {
    pFVar13 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
              ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                      *)this,*param_1);
    if ((pFVar13 == (FModeRecord *)0x0) || (iVar14 = pFVar13->ModeID, iVar14 == -1)) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9078178476980174583>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NaniteVisualizationData.cpp"
                         ,0x109,"ModeID != INDEX_NONE");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
    }
    else {
      pFVar13 = TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                ::Find((TMapBase<FName,FNaniteVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNaniteVisualizationData::FModeRecord,1>_>
                        *)this,*param_1);
      if (pFVar13 == (FModeRecord *)0x0) {
        this->ActiveVisualizationModeID = iVar14;
        this->ActiveVisualizationModeName = *param_1;
        this->bActiveVisualizationModeComposited = false;
      }
      else {
        bVar9 = pFVar13->DefaultComposited;
        this->ActiveVisualizationModeID = iVar14;
        this->ActiveVisualizationModeName = *param_1;
        this->bActiveVisualizationModeComposited = bVar9;
      }
    }
  }
  return bVar18;
}

