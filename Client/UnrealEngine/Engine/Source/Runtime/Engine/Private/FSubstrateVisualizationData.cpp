// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GetModeDefaultComposited @ 14883fb00

bool __thiscall
FSubstrateVisualizationData::GetModeDefaultComposited
          (FSubstrateVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->bDefaultComposited;
  }
  return false;
}

// GetModeDisplayName @ 14883fb30

FText * __thiscall
FSubstrateVisualizationData::GetModeDisplayName
          (FSubstrateVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
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

// GetViewMode @ 148843d60

FSubstrateViewMode __thiscall
FSubstrateVisualizationData::GetViewMode(FSubstrateVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
           ::Find((TMapBase<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                   *)this,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ViewMode;
  }
  return None;
}

// GetViewMode @ 148843d90

uint __cdecl FSubstrateVisualizationData::GetViewMode(void)

{
  uint uVar1;
  longlong lVar2;
  TConsoleVariableData<int> *this;
  
  if ((GSubstrateVisualizationData.bIsInitialized) &&
     (GSubstrateVisualizationData.CVarViewModes != (IConsoleVariable *)0x0)) {
    lVar2 = (**(code **)(*(longlong *)GSubstrateVisualizationData.CVarViewModes + 0x68))();
    if (lVar2 != 0) {
      this = (TConsoleVariableData<int> *)
             (**(code **)(*(longlong *)GSubstrateVisualizationData.CVarViewModes + 0x68))();
      uVar1 = TConsoleVariableData<int>::GetValueOnRenderThread(this);
      return uVar1;
    }
  }
  return 0;
}

// Initialize @ 148845d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FSubstrateVisualizationData::Initialize(FSubstrateVisualizationData *this)

{
  ulonglong uVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FName FVar5;
  FName FVar6;
  code *pcVar7;
  longlong *plVar8;
  void *pvVar9;
  bool bVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FString *pFVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *pTVar20;
  uint uVar21;
  uint *puVar22;
  TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *pTVar23;
  TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *pTVar24;
  uint uVar25;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  uint uStack_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *local_290;
  undefined4 uStack_288;
  uint uStack_284;
  uint local_280;
  uint uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  int local_270;
  undefined1 local_26c [4];
  undefined1 local_268 [4];
  undefined1 local_264 [4];
  TKeyInitializer<FName_&> local_260;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  FSparseArrayAllocationInfo local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (this->bIsInitialized == false) {
    bVar10 = Substrate::IsSubstrateEnabled();
    if (bVar10) {
      pTVar24 = (TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *)0x0;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      uVar21 = 0;
      local_60 = 0;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_218,L"FSubstrateVisualizationData",L"None",L"None");
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_98,L"FSubstrateVisualizationData",L"MaterialPropertiesDesc",
                           L"Visualizes Substrate material properties under mouse cursor");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_a8,L"FSubstrateVisualizationData",L"MaterialProperties",
                           L"Material Properties");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"MaterialProperties",pFVar13,pFVar12,MaterialProperties,true,true,
                 pFVar11);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_218.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_1e8,L"FSubstrateVisualizationData",L"None",L"None");
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_1f8,L"FSubstrateVisualizationData",L"MaterialCountDesc",
                           L"Visualizes Substrate material count per pixel");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_208,L"FSubstrateVisualizationData",L"MaterialCount",
                           L"Material Count");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"MaterialCount",pFVar13,pFVar12,MaterialCount,true,true,pFVar11);
      if (local_208.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
      }
      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
      }
      if (local_1e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_1b8,L"FSubstrateVisualizationData",
                           L"IsSubstrateAdvancedDebugShaderEnabled",
                           L"Substrate advanced debugging r.Substrate.Debug.AdvancedVisualizationShaders is disabled"
                          );
      bVar10 = Substrate::IsAdvancedVisualizationEnabled(GMaxRHIShaderPlatform);
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_1c8,L"FSubstrateVisualizationData",
                           L"AdvancedMaterialPropertiesDesc",
                           L"Visualizes Substrate advanced material properties");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_1d8,L"FSubstrateVisualizationData",L"AdvancedMaterialProperties",
                           L"Advanced Material Properties");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"AdvancedMaterialProperties",pFVar13,pFVar12,
                 AdvancedMaterialProperties,true,bVar10,pFVar11);
      if (local_1d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
      }
      if (local_1c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
      }
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_188,L"FSubstrateVisualizationData",L"None",L"None");
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_198,L"FSubstrateVisualizationData",L"MaterialClassificationDesc",
                           L"Visualizes Substrate material classification");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_1a8,L"FSubstrateVisualizationData",L"MaterialClassification",
                           L"Material Classification");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"MaterialClassification",pFVar13,pFVar12,MaterialClassification,true,
                 true,pFVar11);
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_158,L"FSubstrateVisualizationData",L"IsSubstrateBufferPassEnabled"
                           ,
                           L"Substrate tiled DBuffer pass (r.Substrate.DBufferPass and r.Substrate.DBufferPass.DedicatedTiles) is disabled"
                          );
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_168,L"FSubstrateVisualizationData",L"DecalClassificationDesc",
                           L"Visualizes Substrate decal classification");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_178,L"FSubstrateVisualizationData",L"DecalClassification",
                           L"Decal classification");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"DecalClassification",pFVar13,pFVar12,DecalClassification,true,false,
                 pFVar11);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_128,L"FSubstrateVisualizationData",
                           L"IsSubstrateRoughRefractionEnabled",
                           L"Substrate rough refraction r.Substrate.OpaqueMaterialRoughRefraction is disabled"
                          );
      bVar10 = Substrate::IsOpaqueRoughRefractionEnabled(GMaxRHIShaderPlatform);
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_138,L"FSubstrateVisualizationData",
                           L"OpaqueRoughRefractionClassificationDesc",
                           L"Visualizes Substrate Opaque Rough Refraction Classification");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_148,L"FSubstrateVisualizationData",
                           L"OpaqueRoughRefractionClassification",
                           L"Opaque Rough Refraction Classification");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"OpaqueRoughRefractionClassification",pFVar13,pFVar12,
                 RoughRefractionClassification,true,bVar10,pFVar11);
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"FSubstrateVisualizationData",L"None",L"None");
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_108,L"FSubstrateVisualizationData",L"SubstrateInfoDesc",
                           L"Visualizes Substrate info");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_118,L"FSubstrateVisualizationData",L"SubstrateInfo",
                           L"Substrate Info");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"SubstrateInfo",pFVar13,pFVar12,SubstrateInfo,true,true,pFVar11);
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"FSubstrateVisualizationData",L"None",L"None");
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_d8,L"FSubstrateVisualizationData",L"MaterialByteCountDesc",
                           L"Visualizes Substrate material footprint per pixel");
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_e8,L"FSubstrateVisualizationData",L"MaterialByteCount",
                           L"Material Bytes Count");
      AddVisualizationMode
                ((TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                  *)local_88,L"MaterialByteCount",pFVar13,pFVar12,MaterialByteCount,true,true,
                 pFVar11);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      pFVar14 = ConfigureConsoleCommand
                          (&local_b8,
                           (TMultiMap<FName,FSubstrateVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>_>
                            *)local_88,&this->CVarViewModes);
      pFVar2 = &this->ConsoleDocumentationVisualizationMode;
      if (pFVar2 != pFVar14) {
        pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar2->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
        (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ConsoleDocumentationVisualizationMode).Data.ArrayNum = (pFVar14->Data).ArrayNum;
        (this->ConsoleDocumentationVisualizationMode).Data.ArrayMax = (pFVar14->Data).ArrayMax;
        (pFVar14->Data).ArrayNum = 0;
        (pFVar14->Data).ArrayMax = 0;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar25 = local_60;
      uStack_294 = 1;
      local_280 = 0;
      uStack_284 = local_280;
      if (local_60 != 0) {
        puVar22 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar22 = local_68;
        }
        uVar18 = *puVar22;
        pTVar20 = pTVar24;
        pTVar23 = pTVar24;
        local_280 = 0;
        uVar21 = 0;
        while (uVar18 == 0) {
          iVar17 = (int)pTVar20;
          local_280 = (int)pTVar23 + 0x20;
          pTVar23 = (TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *)
                    (ulonglong)local_280;
          uVar21 = iVar17 + 1;
          pTVar20 = (TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *)
                    (ulonglong)uVar21;
          uStack_284 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
          goto LAB_148846532;
          uVar18 = puVar22[(longlong)iVar17 + 1];
        }
        uStack_294 = -uVar18 & uVar18;
        uVar1 = (ulonglong)uStack_294 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_270 = (int)lVar16;
        uStack_284 = local_270 + -1 + local_280;
        if ((int)local_60 < (int)uStack_284) {
          uStack_284 = local_60;
        }
      }
LAB_148846532:
      local_2a0 = (longlong *)local_88;
      local_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uVar18 = local_60 & 0xffffffe0;
      iStack_278 = local_88._8_4_ - local_54;
      uStack_288 = 0xffffffff;
      TStack_250.CurrentBitIndex = uStack_284;
      TStack_250.UnvisitedBitMask = 0xffffffff;
      TStack_250._padding_ = CONCAT44(uStack_294,uVar21);
      iVar17 = (int)local_60 >> 5;
      TStack_250._28_4_ = uStack_284;
      TStack_250.BaseBitIndex = local_280;
      uStack_230 = CONCAT44(uStack_274,iStack_278);
      bVar15 = (byte)local_60;
      uStack_298 = uVar21;
      uStack_27c = uStack_284;
      local_258 = local_2a0;
      TStack_250.Array = local_290;
      if (((int)local_60 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar25 != local_60) {
        puVar22 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar22 = local_68;
        }
        uVar21 = -1 << (bVar15 & 0x1f) & puVar22[iVar17];
        while (uVar21 == 0) {
          lVar16 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar25 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_148846650;
          uVar21 = puVar22[lVar16 + 1];
        }
        uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar25 = (int)lVar16 + -1 + uVar18;
        if ((int)local_60 < (int)uVar25) {
          uVar25 = local_60;
        }
      }
LAB_148846650:
      while( true ) {
        plVar8 = local_258;
        if ((int)local_258[1] - *(int *)((longlong)local_258 + 0x34) != (int)uStack_230) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a8);
        }
        if (((TStack_250.CurrentBitIndex == uVar25) &&
            (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar8 == (longlong *)local_88)) break;
        pFVar19 = (FName *)((longlong)TStack_250.CurrentBitIndex * 0x60 + *plVar8);
        if (*(char *)((longlong)&pFVar19[8].ComparisonIndex.Value + 2) != '\0') {
          local_260.Key = pFVar19;
          TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)this,&local_228);
          pvVar9 = local_228.Pointer;
          pTVar20 = pTVar24;
          if (local_228.Pointer !=
              (TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_> *)0x0) {
            TKeyInitializer<FName_&>::
            operator<FName,FSubstrateVisualizationData::FModeRecord>_TTuple<FName,FSubstrateVisualizationData::FModeRecord>
                      (&local_260,local_228.Pointer);
            *(undefined4 *)((longlong)pvVar9 + 0x58) = 0xffffffff;
            pTVar20 = pvVar9;
          }
          uVar4 = *(undefined8 *)pTVar20;
          uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          lVar16 = (longlong)local_228.Index;
          TSet<TTuple<FName,FSubstrateVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FName,FSubstrateVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FSubstrateVisualizationData::FModeRecord,1>,FDefaultSetAllocator>
                          *)this,(int)((ulonglong)uVar4 >> 0x20) + uVar21,pTVar20,local_228.Index);
          lVar16 = lVar16 * 0x60 + *(longlong *)&this->ModeMap;
          ::FString::operator=((FString *)(lVar16 + 8),(FString *)(pFVar19 + 1));
          *(FName *)(lVar16 + 0x18) = pFVar19[3];
          FVar5 = pFVar19[4];
          FVar6 = *(FName *)(lVar16 + 0x20);
          if (FVar6 != FVar5) {
            *(FName *)(lVar16 + 0x20) = FVar5;
            if (FVar5 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar5 + 8))(FVar5,local_26c);
            }
            if (FVar6 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
            }
          }
          *(uint *)(lVar16 + 0x28) = pFVar19[5].ComparisonIndex.Value;
          FVar5 = pFVar19[6];
          FVar6 = *(FName *)(lVar16 + 0x30);
          if (FVar6 != FVar5) {
            *(FName *)(lVar16 + 0x30) = FVar5;
            if (FVar5 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar5 + 8))(FVar5,local_268);
            }
            if (FVar6 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
            }
          }
          *(uint *)(lVar16 + 0x38) = pFVar19[7].ComparisonIndex.Value;
          *(char *)(lVar16 + 0x40) = (char)pFVar19[8].ComparisonIndex.Value;
          *(undefined1 *)(lVar16 + 0x41) =
               *(undefined1 *)((longlong)&pFVar19[8].ComparisonIndex.Value + 1);
          *(undefined1 *)(lVar16 + 0x42) =
               *(undefined1 *)((longlong)&pFVar19[8].ComparisonIndex.Value + 2);
          FVar5 = pFVar19[9];
          FVar6 = *(FName *)(lVar16 + 0x48);
          if (FVar6 != FVar5) {
            *(FName *)(lVar16 + 0x48) = FVar5;
            if (FVar5 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar5 + 8))(FVar5,local_264);
            }
            if (FVar6 != (FName)0x0) {
              (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
            }
          }
          *(uint *)(lVar16 + 0x50) = pFVar19[10].ComparisonIndex.Value;
        }
        TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
      }
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FSubstrateVisualizationData::FModeRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
    }
    this->bIsInitialized = true;
  }
  else {
    this->bIsInitialized = true;
  }
  return;
}

