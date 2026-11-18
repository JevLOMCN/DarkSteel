// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// AddVisualizationMode @ 1489ca450

void __thiscall
FVirtualTextureVisualizationData::AddVisualizationMode
          (FVirtualTextureVisualizationData *this,wchar_t *param_1,FText *param_2,FText *param_3,
          EVirtualTextureVisualizationMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FString local_28;
  
  ::FName::FName(local_res18,param_1);
  iVar5 = (this->ModeArray).ArrayNum;
  piVar1 = &(this->ModeArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&(this->ModeArray).AllocatorInstance,piVar1);
  }
  (this->ModeArray).ArrayNum = iVar5 + 1;
  pFVar7 = (this->ModeArray).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
  DefaultConstructItems<FVirtualTextureVisualizationData::FModeRecord,int>(pFVar7,1);
  pFVar6 = (FScriptContainerElement *)::FString::FString(&local_28,param_1);
  if (pFVar7 != pFVar6) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance
             ).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar7[8].field_0x0 = *(int *)&pFVar6[8].field_0x0;
    *(int *)&pFVar7[0xc].field_0x0 = *(int *)&pFVar6[0xc].field_0x0;
    *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(FName *)(pFVar7 + 0x10) = local_res18[0];
  pIVar3 = (param_2->TextData).Reference;
  pIVar4 = *(ITextData **)&pFVar7[0x18].field_0x0;
  if (pIVar4 != pIVar3) {
    *(ITextData **)&pFVar7[0x18].field_0x0 = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7[0x20].field_0x0)->
            AllocatorInstance).Data = param_2->Flags;
  pIVar3 = (param_3->TextData).Reference;
  pIVar4 = *(ITextData **)&pFVar7[0x28].field_0x0;
  if (pIVar4 != pIVar3) {
    *(ITextData **)&pFVar7[0x28].field_0x0 = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7[0x30].field_0x0)->
            AllocatorInstance).Data = param_3->Flags;
  pFVar7[0x38].field_0x0 = param_4;
  return;
}

// ConfigureConsoleCommand @ 1489d27d0

void __thiscall
FVirtualTextureVisualizationData::ConfigureConsoleCommand(FVirtualTextureVisualizationData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (this->ModeArray).ArrayNum)); iVar5 = iVar5 + 1) {
    if (iVar5 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = (this->ModeArray).AllocatorInstance.Data + (longlong)iVar5 * 0x40;
    pFVar4 = ::FString::FString(&local_18,L"\n  ");
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar7);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    iVar1 = *(int *)(pFVar6 + 8);
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_28,*(wchar_t **)pFVar6,iVar7);
  }
  pFVar4 = &this->ConsoleDocumentationVisualizationMode;
  ::FString::operator=
            (pFVar4,
             L"When the viewport view-mode is set to \'Virtual Texture Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(pFVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.VT.Visualize",L"",pwVar8,1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetActiveMode @ 1489e5bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FVirtualTextureVisualizationData::GetActiveMode
          (FVirtualTextureVisualizationData *this,FSceneView *param_1)

{
  void *_Src;
  uint uVar1;
  TConsoleVariableData<FString> *pTVar2;
  bool bVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  longlong lVar6;
  FModeRecord *pFVar7;
  longlong lVar8;
  longlong in_R8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (this->bIsInitialized == false) goto LAB_1489e5d54;
  if (CVarViewMode == (TConsoleVariableData<FString> *)0x0) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.VT.Visualize",1);
    if (plVar5 != (longlong *)0x0) {
      CVarViewMode = (TConsoleVariableData<FString> *)(**(code **)(*plVar5 + 0x78))(plVar5);
    }
    if (CVarViewMode != (TConsoleVariableData<FString> *)0x0) goto LAB_1489e5c4d;
  }
  else {
LAB_1489e5c4d:
    pTVar2 = CVarViewMode;
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_1489e5c6c:
      lVar6 = 0;
    }
    else {
      bVar3 = IsInGameThread();
      lVar6 = 0x10;
      if (bVar3) goto LAB_1489e5c6c;
    }
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar6);
    lVar8 = (longlong)local_48.Data.ArrayNum;
    _Src = *(void **)((longlong)&pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data + lVar6);
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    ::FString::FString(&local_38,&local_48);
    ::FString::FString(&local_28,&local_38);
    pFVar7 = TArray<FVirtualTextureVisualizationData::FModeRecord,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FVirtualTextureVisualizationData::GetActiveMode_::__l15::<lambda_1>_>
                       (&this->ModeArray,(<lambda_1> *)&local_28);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (pFVar7 != (FModeRecord *)0x0) {
      uVar1 = (pFVar7->ModeName).Number;
      *(uint *)&param_1->field_0x0 = (pFVar7->ModeName).ComparisonIndex.Value;
      *(uint *)&param_1->field_0x4 = uVar1;
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (FName)param_1;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return (FName)param_1;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)(in_R8 + 8) != 0) &&
     ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x5c) & 0x800000) != 0)) {
    *(undefined8 *)param_1 = *(undefined8 *)(in_R8 + 0xe24);
    return (FName)param_1;
  }
LAB_1489e5d54:
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetModeDisplayDesc @ 1489ea930

FText * __thiscall
FVirtualTextureVisualizationData::GetModeDisplayDesc
          (FVirtualTextureVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ModeArray).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)(this->ModeArray).ArrayNum * 0x40;
  do {
    if (pFVar4 == pFVar2) {
LAB_1489ea963:
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
    if (*(FName *)(pFVar4 + 0x10) == *param_1) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
        pIVar1 = *(ITextData **)(pFVar4 + 0x28);
        (__return_storage_ptr__->TextData).Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        }
        __return_storage_ptr__->Flags = *(uint *)(pFVar4 + 0x30);
        return __return_storage_ptr__;
      }
      goto LAB_1489ea963;
    }
    pFVar4 = pFVar4 + 0x40;
  } while( true );
}

// GetModeDisplayName @ 1489eaa80

FText * __thiscall
FVirtualTextureVisualizationData::GetModeDisplayName
          (FVirtualTextureVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->ModeArray).AllocatorInstance.Data;
  pFVar2 = pFVar4 + (longlong)(this->ModeArray).ArrayNum * 0x40;
  do {
    if (pFVar4 == pFVar2) {
LAB_1489eaab3:
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
    if (*(FName *)(pFVar4 + 0x10) == *param_1) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
        pIVar1 = *(ITextData **)(pFVar4 + 0x18);
        (__return_storage_ptr__->TextData).Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
        }
        __return_storage_ptr__->Flags = *(uint *)(pFVar4 + 0x20);
        return __return_storage_ptr__;
      }
      goto LAB_1489eaab3;
    }
    pFVar4 = pFVar4 + 0x40;
  } while( true );
}

// GetModeID @ 1489eab60

EVirtualTextureVisualizationMode __thiscall
FVirtualTextureVisualizationData::GetModeID(FVirtualTextureVisualizationData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->ModeArray).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->ModeArray).ArrayNum * 0x40;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return None;
    }
    if (*(FName *)(pFVar1 + 0x10) == *param_1) break;
    pFVar1 = pFVar1 + 0x40;
  }
  return (EVirtualTextureVisualizationMode)pFVar1[0x38];
}

// GetVisualizeConsoleCommandName @ 1489f0b20

wchar_t * __cdecl FVirtualTextureVisualizationData::GetVisualizeConsoleCommandName(void)

{
  return L"r.VT.Visualize";
}

// Initialize @ 1489f5410

void __thiscall FVirtualTextureVisualizationData::Initialize(FVirtualTextureVisualizationData *this)

{
  FText *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  if (this->bIsInitialized == false) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualTextureVisualizationData",L"PendingMipsDesc",
                        L"The number of pending virtual texture mips to reach the resolution wanted by the GPU at a pixel"
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualTextureVisualizationData",L"PendingMips",L"Pending Mips"
                       );
    AddVisualizationMode(this,L"pending",pFVar2,pFVar1,PendingMips);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualTextureVisualizationData",L"StackCountDesc",
                        L"The number of virtual texture stack (page table) samples at a pixel");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualTextureVisualizationData",L"StackCount",L"Stack Count");
    AddVisualizationMode(this,L"count",pFVar2,pFVar1,StackCount);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    ConfigureConsoleCommand(this);
    this->bIsInitialized = true;
  }
  return;
}

