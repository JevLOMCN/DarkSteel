// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// ConfigureConsoleCommand @ 147698f20

void __thiscall FBufferVisualizationData::ConfigureConsoleCommand(FBufferVisualizationData *this)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  Local local_res8;
  FString local_18;
  
  local_res8.Message = &local_18;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  IterateOverAvailableMaterials<_FBufferVisualizationData::ConfigureConsoleCommand_::__l2::Local>
            (this,&local_res8);
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"When the viewport view-mode is set to \'Buffer Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  pwVar3 = L"";
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.BufferVisualizationTarget",L"",pwVar5,1);
  ::FString::operator=
            (&this->ConsoleDocumentationOverviewTargets,
             L"Specify the list of post process materials that can be used in the buffer visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:\n"
            );
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationOverviewTargets,
             (wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if ((this->ConsoleDocumentationOverviewTargets).Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)(this->ConsoleDocumentationOverviewTargets).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.BufferVisualizationOverviewTargets",
             L"BaseColor,Specular,SubsurfaceColor,WorldNormal,SeparateTranslucencyRGB,,,WorldTangent,SeparateTranslucencyA,,,Opacity,SceneDepth,Roughness,Metallic,ShadingModel,,SceneDepthWorldUnits,SceneColor,PreTonemapHDRColor,PostTonemapHDRColor"
             ,pwVar3,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetMaterial @ 1476b22c0

UMaterialInterface * __thiscall
FBufferVisualizationData::GetMaterial(FBufferVisualizationData *this,FName param_1)

{
  Record *pRVar1;
  
  pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                   *)this,param_1);
  if (pRVar1 == (Record *)0x0) {
    pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
             ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                     *)&this->MaterialMapFromMaterialName,param_1);
    if (pRVar1 == (Record *)0x0) {
      return (UMaterialInterface *)0x0;
    }
  }
  return pRVar1->Material;
}

// GetMaterialApplyAutoExposure @ 1476b2310

bool __thiscall
FBufferVisualizationData::GetMaterialApplyAutoExposure(FBufferVisualizationData *this,FName param_1)

{
  Record *pRVar1;
  
  pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                   *)this,param_1);
  if (pRVar1 == (Record *)0x0) {
    pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
             ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                     *)&this->MaterialMapFromMaterialName,param_1);
    if (pRVar1 == (Record *)0x0) {
      return false;
    }
  }
  return pRVar1->bApplyAutoExposure;
}

// GetMaterialDefaultDisplayName @ 1476b2360

FText * __cdecl
FBufferVisualizationData::GetMaterialDefaultDisplayName(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FBufferVisualizationData",L"BufferVisualization",L"Overview");
  return __return_storage_ptr__;
}

// GetMaterialDisplayName @ 1476b23a0

FText * __thiscall
FBufferVisualizationData::GetMaterialDisplayName
          (FBufferVisualizationData *this,FText *__return_storage_ptr__,FName param_1)

{
  ITextData *pIVar1;
  uint uVar2;
  Record *pRVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  pRVar3 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                   *)this,param_1);
  if (pRVar3 == (Record *)0x0) {
    pRVar3 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
             ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                     *)&this->MaterialMapFromMaterialName,param_1);
    if (pRVar3 == (Record *)0x0) {
      pFVar4 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar1 = (pFVar4->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      uVar2 = pFVar4->Flags;
      goto LAB_1476b2430;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pRVar3->DisplayName).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  uVar2 = (pRVar3->DisplayName).Flags;
LAB_1476b2430:
  __return_storage_ptr__->Flags = uVar2;
  return __return_storage_ptr__;
}

// GetOverviewMaterials @ 1476b2680

TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> * __thiscall
FBufferVisualizationData::GetOverviewMaterials(FBufferVisualizationData *this)

{
  return &this->OverviewMaterials;
}

// GetRecord @ 1476b4990

Record * __thiscall
FBufferVisualizationData::GetRecord(FBufferVisualizationData *this,FName param_1)

{
  Record *pRVar1;
  
  pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
           ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                   *)this,param_1);
  if (pRVar1 == (Record *)0x0) {
    pRVar1 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
             ::Find((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                     *)&this->MaterialMapFromMaterialName,param_1);
  }
  return pRVar1;
}

// Initialize @ 1476b9550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FBufferVisualizationData::Initialize(FBufferVisualizationData *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FConfigSection *pFVar8;
  FString *pFVar9;
  longlong *plVar10;
  UClass *pUVar12;
  UMaterialInterface *pUVar13;
  FUObjectItem *this_00;
  Record *pRVar14;
  Record *pRVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  int iVar19;
  wchar_t *pwVar20;
  int iVar21;
  int iVar22;
  bool local_res8 [8];
  int local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar24;
  ulonglong uVar23;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FText local_198;
  FConfigSection *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  Local local_160;
  wchar_t *local_158;
  undefined8 uStack_150;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FConfigSection *local_138;
  int iStack_130;
  uint uStack_12c;
  longlong *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  Record local_108;
  FString local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  size_t sVar11;
  
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
  if (this->bIsInitialized == false) {
    bVar5 = AllowDebugViewmodes();
    if (bVar5) {
      pwVar18 = L"";
      if ((*(int *)&(this->MaterialMap).field_0x8 != *(int *)&(this->MaterialMap).field_0x34) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialMap.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BufferVisualizationData.cpp"
                             ,0x23,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)&(this->MaterialMapFromMaterialName).field_0x8 !=
           *(int *)&(this->MaterialMapFromMaterialName).field_0x34) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialMapFromMaterialName.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BufferVisualizationData.cpp"
                             ,0x24,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = FConfigCacheIni::GetSection
                         (GConfig,L"Engine.BufferVisualizationMaterials",false,&GEngineIni);
      iVar21 = 0;
      iVar22 = 0;
      if (pFVar8 != (FConfigSection *)0x0) {
        TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar8->_padding_;
        iVar7 = (int)pFVar8->_padding_;
        uStack_12c = 1;
        iStack_130 = iVar22;
        local_118 = iVar22;
        iStack_11c = 0;
        if (iVar7 != 0) {
          plVar10 = (longlong *)pFVar8->_padding_;
          if ((longlong *)pFVar8->_padding_ == (longlong *)0x0) {
            plVar10 = (longlong *)TStack_180.Array;
          }
          uVar1 = (uint)*plVar10;
          local_118 = iVar21;
          iStack_130 = iVar21;
          while (uVar1 == 0) {
            lVar16 = (longlong)iStack_130;
            local_118 = local_118 + 0x20;
            iStack_130 = iStack_130 + 1;
            iStack_11c = iVar7;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130)
            goto LAB_1476b96c3;
            uVar1 = *(uint *)((longlong)plVar10 + lVar16 * 4 + 4);
          }
          uStack_12c = -uVar1 & uVar1;
          uVar23 = (ulonglong)uStack_12c * 2 + 1;
          lVar16 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_res10 = (int)lVar16;
          iStack_11c = local_118 + -1 + local_res10;
          if (iVar7 < iStack_11c) {
            iStack_11c = iVar7;
          }
        }
LAB_1476b96c3:
        uStack_120 = 0xffffffff;
        uStack_114 = local_4c;
        TStack_180._padding_ = CONCAT44(uStack_12c,iStack_130);
        TStack_180.CurrentBitIndex = iStack_11c;
        TStack_180.UnvisitedBitMask = 0xffffffff;
        TStack_180._28_4_ = local_4c;
        TStack_180.BaseBitIndex = local_118;
        local_188 = pFVar8;
        local_138 = pFVar8;
        local_128 = (longlong *)TStack_180.Array;
        iVar19 = iStack_11c;
        if (iStack_11c < iVar7) {
          do {
            pFVar8 = local_188;
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.Data.ArrayNum = 0;
            local_1b8.Data.ArrayMax = 0;
            pFVar9 = FConfigValue::GetValue
                               ((FConfigValue *)
                                (local_188->_padding_ + ((longlong)iVar19 * 5 + 1) * 8),&local_d8);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            uVar24 = 0;
            bVar5 = FParse::Value(pwVar20,L"Display=",&local_1b8,true,(wchar_t **)0x0);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                  (IConsoleManager::SetupSingleton(),
                  IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Singleton != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                     ,0x4fb,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1b8.Data.ArrayNum != 0) {
                FVar17.Data = local_1b8.Data.AllocatorInstance.Data;
              }
              plVar10 = (longlong *)
                        (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                                  (IConsoleManager::Singleton,FVar17.Data,1);
              if ((plVar10 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10), cVar6 != '\0'))
              goto LAB_1476b97ef;
            }
            else {
LAB_1476b97ef:
              local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1a8.Data.ArrayNum = 0;
              local_1a8.Data.ArrayMax = 0;
              lVar16 = (longlong)TStack_180.CurrentBitIndex * 0x28;
              pFVar9 = FConfigValue::GetValue
                                 ((FConfigValue *)(lVar16 + 8 + pFVar8->_padding_),&local_c8);
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar20 = L"";
              }
              else {
                pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              uVar24 = 0;
              bVar5 = FParse::Value(pwVar20,L"Material=",&local_1a8,true,(wchar_t **)0x0);
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                uStack_150._0_4_ = 0;
                uStack_150._4_4_ = 0;
                local_158 = (wchar_t *)0x0;
                if (local_1a8.Data.ArrayNum == 0) {
                  local_148 = (FScriptContainerElement *)0x15060d16c;
LAB_1476b9882:
                  sVar11 = wcslen((wchar_t *)local_148);
                  iVar7 = (int)sVar11;
                }
                else {
                  local_148 = local_1a8.Data.AllocatorInstance.Data;
                  iVar7 = iVar22;
                  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  goto LAB_1476b9882;
                }
                iStack_140 = iVar7;
                pUVar12 = Z_Construct_UClass_UMaterialInterface_NoRegister();
                local_a8._12_4_ = uStack_13c;
                local_a8.Size = iStack_140;
                local_b8.DataPtr = local_158;
                local_b8.Size = (int)uStack_150;
                local_b8._12_4_ = uStack_150._4_4_;
                local_a8.DataPtr = (wchar_t *)local_148;
                pUVar13 = (UMaterialInterface *)
                          StaticLoadObject(pUVar12,(UObject *)0x0,&local_a8,&local_b8,0,
                                           (UPackageMap *)0x0,true,(FLinkerInstancingContext *)0x0);
                if (pUVar13 != (UMaterialInterface *)0x0) {
                  FText::FText(&local_198);
                  pFVar9 = FConfigValue::GetValue
                                     ((FConfigValue *)(pFVar8->_padding_ + 8 + lVar16),&local_98);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    pwVar20 = L"";
                  }
                  else {
                    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                  }
                  FParse::Value(pwVar20,L"Name=",&local_198,L"Engine.BufferVisualizationMaterials");
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                  local_res8[0] = false;
                  pFVar9 = FConfigValue::GetValue
                                     ((FConfigValue *)(pFVar8->_padding_ + 8 + lVar16),&local_88);
                  if ((pFVar9->Data).ArrayNum == 0) {
                    pwVar20 = L"";
                  }
                  else {
                    pwVar20 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
                  }
                  FParse::Bool(pwVar20,L"ApplyAutoExposure=",local_res8);
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                  }
                  this_00 = FUObjectArray::IndexToObject
                                      (&GUObjectArray,*(int *)((longlong)&pUVar13->_padding_ + 4));
                  FUObjectItem::SetRootFlags(this_00,RootSet);
                  local_108.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_108.Name.Data.ArrayNum = 0;
                  local_108.Name.Data.ArrayMax = 0;
                  local_108.DisplayName.TextData.Reference = (ITextData *)0x0;
                  local_108.DisplayName.Flags = 0;
                  local_108.DisplayName._12_4_ = 0;
                  local_108.Material = (UMaterialInterface *)0x0;
                  local_108.bApplyAutoExposure = false;
                  local_108._41_7_ = 0;
                  FText::FText(&local_108.DisplayName);
                  pRVar14 = TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                            ::Emplace<FName_const_&,FBufferVisualizationData::Record>
                                      ((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                                        *)this,(FName *)(pFVar8->_padding_ + lVar16),&local_108);
                  if (local_108.DisplayName.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_108.DisplayName.TextData.Reference + 0x10))();
                  }
                  if (local_108.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_108.Name.Data.AllocatorInstance.Data);
                  }
                  pRVar15 = (Record *)
                            ::FName::GetPlainNameString
                                      ((FName *)(pFVar8->_padding_ + lVar16),local_78);
                  if (pRVar14 != pRVar15) {
                    pFVar2 = (pRVar14->Name).Data.AllocatorInstance.Data;
                    if (pFVar2 != (FScriptContainerElement *)0x0) {
                      FMemory::Free(pFVar2);
                    }
                    (pRVar14->Name).Data.AllocatorInstance.Data =
                         (pRVar15->Name).Data.AllocatorInstance.Data;
                    (pRVar15->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (pRVar14->Name).Data.ArrayNum = (pRVar15->Name).Data.ArrayNum;
                    (pRVar14->Name).Data.ArrayMax = (pRVar15->Name).Data.ArrayMax;
                    (pRVar15->Name).Data.ArrayNum = 0;
                    (pRVar15->Name).Data.ArrayMax = 0;
                  }
                  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
                  }
                  pRVar14->Material = pUVar13;
                  pRVar14->bApplyAutoExposure = local_res8[0];
                  pIVar3 = (pRVar14->DisplayName).TextData.Reference;
                  if (pIVar3 != local_198.TextData.Reference) {
                    (pRVar14->DisplayName).TextData.Reference = local_198.TextData.Reference;
                    if (local_198.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_198.TextData.Reference + 8))
                                (local_198.TextData.Reference,local_res18);
                    }
                    if (pIVar3 != (ITextData *)0x0) {
                      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
                    }
                  }
                  (pRVar14->DisplayName).Flags = local_198.Flags;
                  local_res20 = (FName)pUVar13->_padding_;
                  TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                  ::Emplace<FName,FBufferVisualizationData::Record_const_&>
                            ((TMapBase<FName,FBufferVisualizationData::Record,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBufferVisualizationData::Record,1>_>
                              *)&this->MaterialMapFromMaterialName,&local_res20,pRVar14);
                  if (local_198.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
                  }
                }
              }
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
            iVar19 = TStack_180.CurrentBitIndex;
          } while (TStack_180.CurrentBitIndex < (int)*(longlong *)&(TStack_180.Array)->NumBits);
        }
      }
      local_160.Message = &local_1c8;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      IterateOverAvailableMaterials<_FBufferVisualizationData::ConfigureConsoleCommand_::__l2::Local>
                (this,&local_160);
      ::FString::operator=
                (&this->ConsoleDocumentationVisualizationMode,
                 L"When the viewport view-mode is set to \'Buffer Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
                );
      iVar22 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar22 = iVar21;
      }
      ::FString::AppendChars
                (&this->ConsoleDocumentationVisualizationMode,
                 (wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar22);
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)
                  (this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
      }
      uVar23 = CONCAT44(uVar24,1);
      (**(code **)((longlong)*IConsoleManager::Singleton + 8))
                (IConsoleManager::Singleton,L"r.BufferVisualizationTarget",L"",pwVar20,uVar23);
      ::FString::operator=
                (&this->ConsoleDocumentationOverviewTargets,
                 L"Specify the list of post process materials that can be used in the buffer visualization overview. Put nothing between the commas to leave a gap.\n\n\tChoose from:\n"
                );
      iVar22 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar22 = iVar21;
      }
      ::FString::AppendChars
                (&this->ConsoleDocumentationOverviewTargets,
                 (wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar22);
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->ConsoleDocumentationOverviewTargets).Data.ArrayNum != 0) {
        pwVar18 = (wchar_t *)(this->ConsoleDocumentationOverviewTargets).Data.AllocatorInstance.Data
        ;
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 8))
                (IConsoleManager::Singleton,L"r.BufferVisualizationOverviewTargets",
                 L"BaseColor,Specular,SubsurfaceColor,WorldNormal,SeparateTranslucencyRGB,,,WorldTangent,SeparateTranslucencyA,,,Opacity,SceneDepth,Roughness,Metallic,ShadingModel,,SceneDepthWorldUnits,SceneColor,PreTonemapHDRColor,PostTonemapHDRColor"
                 ,pwVar18,uVar23 & 0xffffffff00000000);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    this->bIsInitialized = true;
  }
  return;
}

// IsDifferentToCurrentOverviewMaterialNames @ 1476ba8a0

bool __thiscall
FBufferVisualizationData::IsDifferentToCurrentOverviewMaterialNames
          (FBufferVisualizationData *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar1 = (this->CurrentOverviewMaterialNames).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                       (wchar_t *)(this->CurrentOverviewMaterialNames).Data.AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

// SetCurrentOverviewMaterialNames @ 1476c7bf0

void __thiscall
FBufferVisualizationData::SetCurrentOverviewMaterialNames
          (FBufferVisualizationData *this,FString *param_1)

{
  ::FString::operator=(&this->CurrentOverviewMaterialNames,param_1);
  return;
}

