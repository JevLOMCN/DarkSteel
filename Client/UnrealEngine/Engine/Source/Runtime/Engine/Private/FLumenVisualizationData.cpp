// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// AddVisualizationMode @ 147eaed80

void __thiscall
FLumenVisualizationData::AddVisualizationMode
          (FLumenVisualizationData *this,wchar_t *param_1,FText *param_2,FText *param_3,
          FModeType param_4,int param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FString *pFVar4;
  FString *pFVar5;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res18;
  FName *local_res20;
  FString local_28;
  
  ::FName::FName(&local_res18,param_1);
  local_res20 = &local_res18;
  TSet<TTuple<FName,FLumenVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FLumenVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_res20);
  pFVar5 = (FString *)(*(longlong *)&this->ModeMap + (longlong)(int)local_res8.Key * 0x58 + 8);
  pFVar4 = ::FString::FString(&local_28,param_1);
  if (pFVar5 != pFVar4) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar5->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(FName *)(pFVar5 + 1) = local_res18;
  pIVar2 = (param_2->TextData).Reference;
  pIVar3 = *(ITextData **)&pFVar5[1].Data.ArrayNum;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&pFVar5[1].Data.ArrayNum = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&pFVar5[2].Data.AllocatorInstance.Data = param_2->Flags;
  pIVar2 = (param_3->TextData).Reference;
  pIVar3 = *(ITextData **)&pFVar5[2].Data.ArrayNum;
  if (pIVar3 != pIVar2) {
    *(ITextData **)&pFVar5[2].Data.ArrayNum = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  *(uint *)&pFVar5[3].Data.AllocatorInstance.Data = param_3->Flags;
  *(FModeType *)&pFVar5[3].Data.ArrayNum = param_4;
  pFVar5[3].Data.ArrayMax = param_5;
  *(bool *)&pFVar5[4].Data.AllocatorInstance.Data = param_6;
  return;
}

// ConfigureConsoleCommand @ 147eb49a0

void __thiscall FLumenVisualizationData::ConfigureConsoleCommand(FLumenVisualizationData *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint *puVar10;
  int iVar11;
  FString local_98;
  FString local_88;
  FLumenVisualizationData *local_78;
  int iStack_70;
  uint uStack_6c;
  undefined1 *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  FLumenVisualizationData *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar11 = 0;
  local_68 = &(this->ModeMap).field_0x10;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  iStack_70 = 0;
  iVar8 = *(int *)&(this->ModeMap).field_0x28;
  uStack_6c = 1;
  local_58 = iStack_70;
  iStack_5c = 0;
  if (iVar8 != 0) {
    puVar10 = *(uint **)&(this->ModeMap).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_68;
    }
    uVar2 = *puVar10;
    local_58 = iVar11;
    iStack_70 = iVar11;
    while (uVar2 == 0) {
      lVar6 = (longlong)iStack_70;
      local_58 = local_58 + 0x20;
      iStack_70 = iStack_70 + 1;
      iStack_5c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_70) goto LAB_147eb4a4d;
      uVar2 = puVar10[lVar6 + 1];
    }
    uStack_6c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_6c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar6;
    if (iVar8 < iStack_5c) {
      iStack_5c = iVar8;
    }
  }
LAB_147eb4a4d:
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
  if (iStack_5c < iVar8) {
    do {
      lVar6 = (longlong)TStack_40.CurrentBitIndex * 0x58 + *(longlong *)&local_48->ModeMap;
      pFVar5 = ::FString::FString(&local_88,L"\n  ");
      iVar8 = (pFVar5->Data).ArrayNum;
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar11;
      }
      ::FString::AppendChars(&local_98,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar7);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar8 = *(int *)(lVar6 + 0x10);
      iVar7 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar7 = iVar11;
      }
      ::FString::AppendChars(&local_98,*(wchar_t **)(lVar6 + 8),iVar7);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"When the viewport view-mode is set to \'Lumen Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar8 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar8 = iVar11;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_98.Data.AllocatorInstance.Data,iVar8);
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
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.Lumen.Visualize.ViewMode",L"",pwVar9,1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// GetModeDefaultComposited @ 147ec1ff0

bool __thiscall
FLumenVisualizationData::GetModeDefaultComposited(FLumenVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->DefaultComposited;
  }
  return false;
}

// GetModeDisplayName @ 147ec2020

FText * __thiscall
FLumenVisualizationData::GetModeDisplayName
          (FLumenVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
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

// GetModeID @ 147ec20c0

int __thiscall FLumenVisualizationData::GetModeID(FLumenVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FLumenVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLumenVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ModeID;
  }
  return -1;
}

// Initialize @ 147ecbfe0

void __thiscall FLumenVisualizationData::Initialize(FLumenVisualizationData *this)

{
  FText *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  if (this->bIsInitialized == false) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"OverviewDesc",
                        L"All Lumen view mode tiles overlayed on top");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"Overview",L"Overview");
    AddVisualizationMode(this,L"Overview",pFVar2,pFVar1,Overview,1,true);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"PerformanceOverviewDesc",
                        L"All Lumen performance view mode tiles overlayed on top");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"PerformanceOverview",
                        L"Performance Overview");
    AddVisualizationMode(this,L"PerformanceOverview",pFVar2,pFVar1,Overview,2,true);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"LumenSceneDesc",
                        L"Visualizes Lumen scene representation in a highest possible quality and view distance"
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"LumenScene",L"Lumen Scene");
    AddVisualizationMode(this,L"LumenScene",pFVar2,pFVar1,Standard,3,true);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"GeometryNormalsDesc",
                        L"Visualizes Geometry Normals with current Lumen settings.");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"GeometryNormals",L"Geometry Normals")
    ;
    AddVisualizationMode(this,L"GeometryNormals",pFVar2,pFVar1,Standard,6,true);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"ReflectionViewDesc",
                        L"Visualizes Lumen scene representation with current reflection settings");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"ReflectionView",L"Reflection View");
    AddVisualizationMode(this,L"ReflectionView",pFVar2,pFVar1,Standard,4,true);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"SurfaceCacheDesc",
                        L"Visualizes Lumen Surface Cache. Pink - missing surface cache coverage. Yellow - culled meshes."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"SurfaceCache",L"Surface Cache");
    AddVisualizationMode(this,L"SurfaceCache",pFVar2,pFVar1,Standard,5,true);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FLumenVisualizationData",L"DedicatedReflectionRaysDesc",
                        L"Visualizes pixels which require dedicated Lumen reflection rays (pass MaxRoughnessToTrace or MaxRoughnessToTraceForFoliage treshold). Green - foliage. Red - other."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FLumenVisualizationData",L"DedicatedReflectionRays",
                        L"Dedicated Reflection Rays");
    AddVisualizationMode(this,L"DedicatedReflectionRays",pFVar2,pFVar1,Standard,7,true);
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

