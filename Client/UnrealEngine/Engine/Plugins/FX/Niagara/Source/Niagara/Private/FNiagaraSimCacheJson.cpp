// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// DumpFramesToFolder @ 14939d140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FNiagaraSimCacheJson::DumpFramesToFolder(UNiagaraSimCache *param_1,FString *param_2)

{
  longlong lVar1;
  UObjectBaseUtility *this;
  code *pcVar2;
  float fVar3;
  FFeedbackContext *pFVar4;
  FJsonObject *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  FText *pFVar11;
  FString *pFVar12;
  IFileManager *pIVar13;
  FName FVar14;
  TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *pTVar15;
  FNiagaraTypeDefinition *this_00;
  UClass *pUVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  ForAnyElementType FVar22;
  bool bVar23;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *this_01;
  FNiagaraVariableBase *pFVar24;
  wchar_t *pwVar25;
  ulonglong uVar26;
  wchar_t *pwVar27;
  int iVar28;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_518;
  int local_508;
  TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  *local_500;
  uint local_4f8;
  FNiagaraVariableBase *local_4f0;
  ForAnyElementType local_4e8;
  int local_4e0;
  int local_4dc;
  ForAnyElementType local_4d8;
  int local_4cc;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  TSharedPtr<FJsonObject,1> local_468;
  FJsonObject *local_458;
  TReferenceControllerBase<1> *local_450;
  TSharedPtr<FJsonObject,1> local_448;
  TSharedPtr<FJsonObject,1> local_438;
  FName local_428;
  FName local_420;
  IFileManager *local_418;
  FName local_410;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  TSharedPtr<FJsonObject,1> local_328;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_308;
  TSharedPtr<FJsonObject,1> local_2f8;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_2d8;
  FString local_2c8;
  FString local_2b8;
  TSharedPtr<FJsonObject,1> local_2a8;
  FScriptContainerElement *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_288;
  TSharedPtr<FJsonObject,1> local_278;
  FScriptContainerElement *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  TStringView<wchar_t> local_258;
  FScriptContainerElement *local_248;
  int local_240;
  TStringView<wchar_t> local_238;
  FScriptContainerElement *local_228;
  int local_220;
  TStringView<wchar_t> local_218;
  FScriptContainerElement *local_208;
  int local_200;
  TStringView<wchar_t> local_1f8;
  FScriptContainerElement *local_1e8;
  int local_1e0;
  TStringView<wchar_t> local_1d8;
  FScriptContainerElement *local_1c8;
  int local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  FText local_1a8;
  FString local_198;
  TStringView<wchar_t> local_188;
  FText local_178;
  FString local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  FString local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  FString local_f8;
  FSlowTask local_e8;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  local_418 = IFileManager::Get();
  pwVar27 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  cVar8 = (**(code **)((longlong)*local_418 + 0x58))(local_418,pwVar25);
  pFVar4 = GWarn;
  if (cVar8 == '\0') {
    if (2 < (byte)LogNiagaraSimCacheJson._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraSimCacheJson);
    }
    return false;
  }
  local_508 = (param_1->CacheLayout).EmitterLayouts.ArrayNum;
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_1a8,L"SimCacheExport",L"SlowTaskLabel",L"Exporting frames...");
  FSlowTask::FSlowTask(&local_e8,(float)(param_1->CacheFrames).ArrayNum,pFVar11,true,pFVar4);
  FSlowTask::Initialize(&local_e8);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  FSlowTask::MakeDialog(&local_e8,true,false);
  SystemDataToJson(&local_468,param_1);
  if (local_468.Object == (FJsonObject *)0x0) {
    if (2 < (byte)LogNiagaraSimCacheJson._0_1_) {
      local_428 = (FName)param_1->_padding_;
      ::FName::ToString(&local_428,&local_3e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagaraSimCacheJson);
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    bVar23 = false;
  }
  else {
    ::FString::FString(&local_338,".json");
    local_420 = (FName)param_1->_padding_;
    ::FName::ToString(&local_420,&local_348);
    ::FString::ConcatFF(&local_358,&local_348,&local_338);
    pFVar12 = FPaths::MakeValidFileName(&local_198,&local_358,L'_');
    local_258.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar10 = (param_2->Data).ArrayNum;
    local_248 = (pFVar12->Data).AllocatorInstance.Data;
    iVar28 = (pFVar12->Data).ArrayNum;
    local_258.Size = iVar10 + -1;
    if (iVar10 == 0) {
      local_258.Size = 0;
    }
    local_240 = iVar28 + -1;
    if (iVar28 == 0) {
      local_240 = 0;
    }
    FPaths::CombineInternal(&local_3d8,&local_258,2);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    local_4a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a8.Data.ArrayNum = 0;
    local_4a8.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_308,&local_4a8,0);
    if ((local_468.Object == (FJsonObject *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar23)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_468.Object == (FJsonObject *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar23)) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
    local_328.Object = local_468.Object;
    local_328.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_328,&local_308,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    pIVar13 = IFileManager::Get();
    local_318 = local_4a8.Data.AllocatorInstance.Data;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_3d8.Data.ArrayNum != 0) {
      FVar20.Data = local_3d8.Data.AllocatorInstance.Data;
    }
    iStack_310 = local_4a8.Data.ArrayNum + -1;
    if (local_4a8.Data.ArrayNum == 0) {
      iStack_310 = 0;
    }
    local_188._12_4_ = uStack_30c;
    local_188.Size = iStack_310;
    local_188.DataPtr = (wchar_t *)local_4a8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_188,(wchar_t *)FVar20.Data,AutoDetect,pIVar13,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    fVar3 = __real_3f800000;
    local_res20 = 0;
    if (0 < (param_1->CacheFrames).ArrayNum) {
      do {
        iVar10 = local_res20;
        pFVar11 = FText::FText(&local_178);
        FSlowTask::EnterProgressFrame(&local_e8,fVar3,pFVar11);
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
        }
        bVar23 = FSlowTask::ShouldCancel(&local_e8);
        if (bVar23) {
          if ((byte)LogNiagaraSimCacheJson._0_1_ < 3) {
LAB_14939e0ec:
            bVar23 = false;
          }
          else {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraSimCacheJson);
            bVar23 = false;
          }
          goto LAB_14939e112;
        }
        pFVar12 = ::FString::FormatAsNumber(&local_168,iVar10);
        ::FString::ConcatCF(&local_3c8,L"Frame_",pFVar12);
        local_238.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        iVar28 = (param_2->Data).ArrayNum;
        iVar18 = 0;
        local_238.Size = iVar28 + -1;
        if (iVar28 == 0) {
          local_238.Size = iVar18;
        }
        local_228 = local_3c8.Data.AllocatorInstance.Data;
        local_220 = local_3c8.Data.ArrayNum + -1;
        if (local_3c8.Data.ArrayNum == 0) {
          local_220 = iVar18;
        }
        FPaths::CombineInternal(&local_518,&local_238,2);
        if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_518.Data.ArrayNum != 0) {
          FVar20.Data = local_518.Data.AllocatorInstance.Data;
        }
        cVar8 = (**(code **)((longlong)*local_418 + 0x60))(local_418,FVar20.Data,0);
        if (cVar8 == '\0') {
LAB_14939e0dd:
          if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_518.Data.AllocatorInstance.Data);
          }
          goto LAB_14939e0ec;
        }
        EmitterFrameToJson(&local_438,param_1,-1,iVar10);
        pFVar5 = local_438.Object;
        bVar23 = local_438.Object == (FJsonObject *)0x0;
        if (local_438.Object == (FJsonObject *)0x0) {
          if (2 < (byte)LogNiagaraSimCacheJson._0_1_) {
            local_410 = (FName)param_1->_padding_;
            ::FName::ToString(&local_410,&local_3f8);
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraSimCacheJson);
            if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
            }
          }
LAB_14939e0d8:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_438.SharedReferenceCount.ReferenceController);
          goto LAB_14939e0dd;
        }
        ::FString::FString(&local_3b8,"_SystemAttributes_.json");
        local_218.DataPtr = (wchar_t *)local_518.Data.AllocatorInstance.Data;
        local_218.Size = local_518.Data.ArrayNum + -1;
        if (local_518.Data.ArrayNum == 0) {
          local_218.Size = 0;
        }
        local_208 = local_3b8.Data.AllocatorInstance.Data;
        local_200 = local_3b8.Data.ArrayNum + -1;
        if (local_3b8.Data.ArrayNum == 0) {
          local_200 = iVar18;
        }
        FPaths::CombineInternal(&local_3a8,&local_218,2);
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_498.Data.ArrayNum = 0;
        local_498.Data.ArrayMax = 0;
        TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                  (&local_2d8,&local_498,0);
        if ((bVar23) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar23)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        FVar7.ReferenceController = local_438.SharedReferenceCount.ReferenceController;
        if (local_438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((pFVar5 == (FJsonObject *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar23)) {
          pcVar2 = (code *)swi(3);
          uVar9 = (*pcVar2)();
          return (bool)uVar9;
        }
        local_2f8.Object = pFVar5;
        local_2f8.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
        if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar7.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
        Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_2f8,&local_2d8,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        pIVar13 = IFileManager::Get();
        local_2e8 = local_498.Data.AllocatorInstance.Data;
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_3a8.Data.ArrayNum != 0) {
          FVar20.Data = local_3a8.Data.AllocatorInstance.Data;
        }
        iStack_2e0 = local_498.Data.ArrayNum + -1;
        if (local_498.Data.ArrayNum == 0) {
          iStack_2e0 = 0;
        }
        local_158._12_4_ = uStack_2dc;
        local_158.Size = iStack_2e0;
        local_158.DataPtr = (wchar_t *)local_498.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile(&local_158,(wchar_t *)FVar20.Data,AutoDetect,pIVar13,0);
        FSlowTask::TickProgress(&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d8.SharedReferenceCount.ReferenceController);
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
        if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        iVar28 = 0;
        if (0 < local_508) {
          do {
            EmitterFrameToJson(&local_448,param_1,iVar28,iVar10);
            pFVar5 = local_448.Object;
            bVar23 = local_448.Object == (FJsonObject *)0x0;
            if (local_448.Object == (FJsonObject *)0x0) {
              local_438.SharedReferenceCount.ReferenceController =
                   local_448.SharedReferenceCount.ReferenceController;
              if (2 < (byte)LogNiagaraSimCacheJson._0_1_) {
                FVar14 = UNiagaraSimCache::GetEmitterName(param_1,(int)local_1b8);
                ::FName::ToString((FName *)FVar14,&local_f8);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogNiagaraSimCacheJson);
                local_438.SharedReferenceCount.ReferenceController =
                     local_448.SharedReferenceCount.ReferenceController;
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                  local_438.SharedReferenceCount.ReferenceController =
                       local_448.SharedReferenceCount.ReferenceController;
                }
              }
              goto LAB_14939e0d8;
            }
            ::FString::FString(&local_2b8,".json");
            FVar14 = UNiagaraSimCache::GetEmitterName(param_1,(int)local_1b0);
            pFVar12 = ::FName::ToString((FName *)FVar14,&local_138);
            ::FString::ConcatFF(&local_2c8,pFVar12,&local_2b8);
            pFVar12 = FPaths::MakeValidFileName(&local_148,&local_2c8,L'_');
            local_1f8.DataPtr = (wchar_t *)local_518.Data.AllocatorInstance.Data;
            local_1e8 = (pFVar12->Data).AllocatorInstance.Data;
            iVar18 = (pFVar12->Data).ArrayNum;
            local_1f8.Size = local_518.Data.ArrayNum + -1;
            if (local_518.Data.ArrayNum == 0) {
              local_1f8.Size = 0;
            }
            local_1e0 = iVar18 + -1;
            if (iVar18 == 0) {
              local_1e0 = 0;
            }
            FPaths::CombineInternal(&local_398,&local_1f8,2);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
            }
            local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4b8.Data.ArrayNum = 0;
            local_4b8.Data.ArrayMax = 0;
            TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                      (&local_288,&local_4b8,0);
            if ((bVar23) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar23)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return (bool)uVar9;
            }
            FVar7.ReferenceController = local_448.SharedReferenceCount.ReferenceController;
            if (local_448.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((pFVar5 == (FJsonObject *)0x0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar23)) {
              pcVar2 = (code *)swi(3);
              uVar9 = (*pcVar2)();
              return (bool)uVar9;
            }
            local_2a8.Object = pFVar5;
            local_2a8.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
            if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar7.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
            Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_2a8,&local_288,true);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar7.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar7.ReferenceController);
            pIVar13 = IFileManager::Get();
            local_298 = local_4b8.Data.AllocatorInstance.Data;
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_398.Data.ArrayNum != 0) {
              FVar20.Data = local_398.Data.AllocatorInstance.Data;
            }
            iStack_290 = local_4b8.Data.ArrayNum + -1;
            if (local_4b8.Data.ArrayNum == 0) {
              iStack_290 = 0;
            }
            local_128._12_4_ = uStack_28c;
            local_128.Size = iStack_290;
            local_128.DataPtr = (wchar_t *)local_4b8.Data.AllocatorInstance.Data;
            FFileHelper::SaveStringToFile(&local_128,(wchar_t *)FVar20.Data,AutoDetect,pIVar13,0);
            FSlowTask::TickProgress(&local_e8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_288.SharedReferenceCount.ReferenceController);
            if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
            }
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar7.ReferenceController);
            iVar28 = iVar28 + 1;
          } while (iVar28 < local_508);
        }
        this_01 = (TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                   *)&param_1->DataInterfaceStorage;
        local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4c8.ArrayNum = 0;
        local_4c8.ArrayMax = 0;
        local_500 = this_01;
        TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
        ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FNiagaraVariableBase,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>_>
                    *)this_01,&local_4c8);
        uVar21 = (ulonglong)local_4c8.ArrayNum;
        local_4f8 = local_4c8.ArrayNum;
        pFVar24 = (FNiagaraVariableBase *)(local_4c8.AllocatorInstance.Data + uVar21 * 0xc);
        uVar26 = uVar21;
        FVar20.Data = local_4c8.AllocatorInstance.Data;
        local_4f0 = pFVar24;
        while( true ) {
          plVar17 = (longlong *)0x0;
          if ((int)uVar21 != (int)uVar26) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if ((FNiagaraVariableBase *)FVar20.Data == pFVar24) break;
          pTVar15 = TSet<TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    ::Find(this_01,(FNiagaraVariableBase *)FVar20.Data);
          plVar19 = (longlong *)&pTVar15->field_0x10;
          if (pTVar15 == (TTuple<FNiagaraVariableBase,TObjectPtr<UObject>_> *)0x0) {
            plVar19 = plVar17;
          }
          if (((plVar19 != (longlong *)0x0) && (lVar1 = *plVar19, lVar1 != 0)) &&
             (this_00 = FNiagaraTypeDefinitionHandle::Resolve
                                  (&((FNiagaraVariableBase *)FVar20.Data)->TypeDefHandle),
             this_01 = local_500, this_00->UnderlyingType == 1)) {
            if ((this_00->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
              pFVar12 = GetTypeName<UClass>(&local_78);
              if ((pFVar12->Data).ArrayNum != 0) {
                pwVar27 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar27);
            }
            pUVar16 = Z_Construct_UClass_UClass_NoRegister();
            bVar23 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar16);
            if ((!bVar23) ||
               (pUVar16 = (UClass *)(this_00->ClassStructOrEnum).field0_0x0.DebugPtr,
               pUVar16 == (UClass *)0x0)) {
              pFVar12 = GetTypeName<UClass>(local_68);
              if ((pFVar12->Data).ArrayNum == 0) {
                pwVar25 = L"";
              }
              else {
                pwVar25 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
              pFVar12 = GetFullNameForCastLogError<UObject>
                                  (&local_88,(this_00->ClassStructOrEnum).field0_0x0.DebugPtr);
              if ((pFVar12->Data).ArrayNum != 0) {
                pwVar27 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar27,pwVar25);
            }
            if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              UClass::InternalCreateDefaultObjectWrapper(pUVar16);
            }
            this = (UObjectBaseUtility *)(pUVar16->ClassDefaultObject).field0_0x0.DebugPtr;
            if (this != (UObjectBaseUtility *)0x0) {
              pUVar16 = Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
              plVar17 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar16);
            }
            this_01 = local_500;
            pFVar24 = local_4f0;
            if (plVar17 != (longlong *)0x0) {
              pFVar12 = ::FName::ToString((FName *)FVar20.Data,&local_118);
              FPaths::MakeValidFileName(&local_478,pFVar12,L'_');
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              iVar10 = iswalpha(0x2e);
              if (iVar10 == 0) {
                ::FString::ReplaceCharInlineCaseSensitive(&local_478,L'.',L'-');
              }
              else {
                ::FString::ReplaceCharInlineIgnoreCase(&local_478,L'.',L'-');
              }
              FVar22.Data = local_478.Data.AllocatorInstance.Data;
              local_4e8.Data = (FScriptContainerElement *)0x0;
              iVar10 = local_478.Data.ArrayNum;
              pcVar2 = *(code **)(*plVar17 + 0x50);
              local_4e0 = iVar10;
              if (iVar10 == 0) {
                local_4dc = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,0,&local_4e8,iVar10,&local_4dc);
                memcpy(local_4e8.Data,FVar22.Data,(longlong)iVar10 * 2);
              }
              if ((local_4dc == -1) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar23)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return (bool)uVar9;
              }
              iVar10 = local_518.Data.ArrayNum;
              FVar22.Data = local_518.Data.AllocatorInstance.Data;
              local_4d8.Data = (FScriptContainerElement *)0x0;
              if (local_518.Data.ArrayNum == 0) {
                local_4cc = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_518.Data.ArrayNum,0,&local_4d8,local_518.Data.ArrayNum,
                           &local_4cc);
                memcpy(local_4d8.Data,FVar22.Data,(longlong)iVar10 * 2);
              }
              if ((local_4cc == -1) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar23)) {
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return (bool)uVar9;
              }
              (*pcVar2)(plVar17,&local_458,lVar1,local_res20,&local_4d8,&local_4e8);
              if (local_458 != (FJsonObject *)0x0) {
                local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_488.Data.ArrayNum = 0;
                local_488.Data.ArrayMax = 0;
                TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                          (&local_368,&local_488,0);
                if ((local_458 == (FJsonObject *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x408,L""), bVar23)) {
                  pcVar2 = (code *)swi(3);
                  uVar9 = (*pcVar2)();
                  return (bool)uVar9;
                }
                pTVar6 = local_450;
                pFVar5 = local_458;
                if (local_450 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_450->SharedReferenceCount =
                       (atomic<int>)((int)local_450->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((local_458 == (FJsonObject *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x25d,L""), bVar23)) {
                  pcVar2 = (code *)swi(3);
                  uVar9 = (*pcVar2)();
                  return (bool)uVar9;
                }
                local_278.Object = pFVar5;
                local_278.SharedReferenceCount.ReferenceController = pTVar6;
                if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar6->SharedReferenceCount =
                       (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                  UNLOCK();
                }
                TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_278,&local_368,true);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar6);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar6);
                pIVar13 = IFileManager::Get();
                ::FString::FString(&local_378,".json");
                ::FString::ConcatFF(&local_408,&local_478,&local_378);
                local_1d8.DataPtr = (wchar_t *)local_518.Data.AllocatorInstance.Data;
                local_1c8 = local_408.Data.AllocatorInstance.Data;
                local_1d8.Size = local_518.Data.ArrayNum + -1;
                if (local_518.Data.ArrayNum == 0) {
                  local_1d8.Size = 0;
                }
                local_1c0 = local_408.Data.ArrayNum + -1;
                if (local_408.Data.ArrayNum == 0) {
                  local_1c0 = 0;
                }
                FPaths::CombineInternal(&local_388,&local_1d8,2);
                local_268 = local_488.Data.AllocatorInstance.Data;
                FVar22.Data = (FScriptContainerElement *)L"";
                if (local_388.Data.ArrayNum != 0) {
                  FVar22.Data = local_388.Data.AllocatorInstance.Data;
                }
                iStack_260 = local_488.Data.ArrayNum + -1;
                if (local_488.Data.ArrayNum == 0) {
                  iStack_260 = 0;
                }
                local_108._12_4_ = uStack_25c;
                local_108.Size = iStack_260;
                local_108.DataPtr = (wchar_t *)local_488.Data.AllocatorInstance.Data;
                FFileHelper::SaveStringToFile
                          (&local_108,(wchar_t *)FVar22.Data,AutoDetect,pIVar13,0);
                if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_388.Data.AllocatorInstance.Data);
                }
                if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_408.Data.AllocatorInstance.Data);
                }
                if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_378.Data.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_368.SharedReferenceCount.ReferenceController);
                if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_488.Data.AllocatorInstance.Data);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_450);
              this_01 = local_500;
              pFVar24 = local_4f0;
              if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_478.Data.AllocatorInstance.Data);
                this_01 = local_500;
                pFVar24 = local_4f0;
              }
            }
          }
          FSlowTask::TickProgress(&local_e8);
          uVar21 = local_4c8._8_8_ & 0xffffffff;
          FVar20.Data = FVar20.Data + 0xc;
          uVar26 = (ulonglong)local_4f8;
        }
        if ((FNiagaraVariableBase *)local_4c8.AllocatorInstance.Data != (FNiagaraVariableBase *)0x0)
        {
          FMemory::Free(local_4c8.AllocatorInstance.Data);
        }
        if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_518.Data.AllocatorInstance.Data);
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 < (param_1->CacheFrames).ArrayNum);
    }
    bVar23 = true;
  }
LAB_14939e112:
  FSlowTask::Destroy(&local_e8);
  if (local_e8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_e8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.DefaultMessage.TextData.Reference + 0x10))();
  }
  return bVar23;
}

// DumpToFile @ 14939e1f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FNiagaraSimCacheJson::DumpToFile(UNiagaraSimCache *param_1,FString *param_2,EExportType param_3)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  FString local_68;
  TSharedPtr<FJsonObject,1> local_58;
  TSharedPtr<FJsonObject,1> local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_3 != SingleJsonFile) {
    if (param_3 == SeparateEachFrame) {
      bVar3 = DumpFramesToFolder(param_1,param_2);
      return bVar3;
    }
    return false;
  }
  ToJson(&local_58,param_1);
  if (local_58.Object == (FJsonObject *)0x0) {
    bVar3 = false;
  }
  else {
    pwVar6 = L"";
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_28,&local_68,0);
    if ((local_58.Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    FVar2.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58.Object == (FJsonObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_48.Object = local_58.Object;
    local_48.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar2.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_48,&local_28,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    pIVar5 = IFileManager::Get();
    if ((param_2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    local_38 = local_68.Data.AllocatorInstance.Data;
    iStack_30 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iStack_30 = 0;
    }
    local_18._12_4_ = uStack_2c;
    local_18.Size = iStack_30;
    local_18.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    bVar3 = FFileHelper::SaveStringToFile(&local_18,pwVar6,AutoDetect,pIVar5,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// EmitterFrameToJson @ 14939e3f0

TSharedPtr<FJsonObject,1> * __cdecl
FNiagaraSimCacheJson::EmitterFrameToJson
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,UNiagaraSimCache *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  code *pcVar3;
  FNiagaraVariableBase *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  TSharedRef<FJsonObject,1> *pTVar9;
  FJsonObject *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FJsonObject,1> *pTVar12;
  FString *pFVar13;
  FNiagaraTypeDefinition *pFVar14;
  FJsonValueObject *pFVar15;
  UClass *pUVar16;
  UStruct *pUVar17;
  UScriptStruct *pUVar18;
  TReferenceControllerBase<1> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TReferenceControllerBase<1> *pTVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  FNiagaraVariableBase *this;
  longlong lVar27;
  float fVar28;
  FIdentityFunctor local_res8;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  uint local_244;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_240;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_230;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_220;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_210;
  ushort local_200 [4];
  TReferenceControllerBase<1> *local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_1d0;
  longlong local_1c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<float,TSizedDefaultAllocator<32>_> local_198;
  TReferenceControllerBase<1> *local_188;
  FNiagaraVariableBase *local_180;
  ulonglong local_178;
  TSharedPtr<FJsonValue,1> local_170;
  uint local_160;
  longlong local_158;
  FNiagaraVariableBase *local_150;
  FName local_148;
  FName local_140;
  FNiagaraVariableBase *local_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  TSharedPtr<FJsonObject,1> local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  undefined1 local_a0 [16];
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  code *local_78 [2];
  undefined **local_68;
  FNiagaraVariableBase **local_60;
  undefined8 local_50;
  
  iVar6 = UNiagaraSimCache::GetEmitterNumInstances(param_1,param_2,param_3);
  pTVar9 = MakeShared<FJsonObject,1>((TSharedRef<FJsonObject,1> *)(local_a0 + 8));
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar19 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar19;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  pFVar10 = TSharedPtr<FJsonObject,1>::operator->(__return_storage_ptr__);
  ::FString::FString(&local_120,L"NumInstances");
  FJsonObject::SetNumberField(pFVar10,&local_120,(double)iVar6);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (0 < iVar6) {
    UNiagaraSimCache::GetEmitterName(param_1,(int)&local_140);
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraSimCacheJson::EmitterFrameToJson'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_60 = &local_180;
    local_180 = (FNiagaraVariableBase *)0x0;
    local_178 = 0;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSimCacheJson::EmitterFrameToJson'::__l5::<lambda_1>,bool,FNiagaraSimCacheVariable_const_&>
                  ::Call;
    local_50 = 0;
    UNiagaraSimCache::ForEachEmitterAttribute
              (param_1,param_2,(TFunction<bool___cdecl(FNiagaraSimCacheVariable_const_&)> *)local_78
              );
    local_res8 = SUB81(__return_storage_ptr__,0);
    AlgoImpl::
    IntroSortInternal<FNiagaraVariableBase,int,FIdentityFunctor,_FNiagaraSimCacheJson::EmitterFrameToJson_::__l5::<lambda_2>_>
              (local_180,(uint)local_178,local_res8,(<lambda_2>)local_res8);
    uVar20 = (ulonglong)(int)(uint)local_178;
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    local_160 = (uint)local_178;
    local_138 = local_180 + uVar20;
    uVar21 = uVar20;
    this = local_180;
    while( true ) {
      pFVar4 = local_138;
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      local_150 = this;
      if ((int)uVar20 != (int)uVar21) {
        local_248 = 0;
        `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_248);
      }
      if (this == pFVar4) break;
      pTVar11 = ::operator_new(0x60);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_188 = (TReferenceControllerBase<1> *)0x0;
        local_1f8 = (TReferenceControllerBase<1> *)&DAT_00000010;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        pTVar11->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar22 = pTVar11 + 1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11[2]._padding_ = 0;
        pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar11[1]._padding_ = 0;
        pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar11[3]._padding_ = 0;
        pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar11[3].WeakReferenceCount = (atomic<int>)0x80;
        *(undefined4 *)&pTVar11[4]._padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0;
        pTVar11[5]._padding_ = 0;
        local_1f8 = pTVar22;
        local_188 = pTVar11;
        if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar12;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        pTVar19 = pTVar11;
        if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar12;
        }
      }
      pFVar13 = ::FName::ToString(&this->Name,&local_88);
      ::FString::FString(&local_110,L"Name");
      FJsonObject::SetStringField((FJsonObject *)pTVar22,&local_110,pFVar13);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
        return pTVar12;
      }
      pFVar14 = FNiagaraTypeDefinitionHandle::Resolve(&this->TypeDefHandle);
      if ((pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
        ::FString::FString(&local_130,L"Invalid");
      }
      else {
        local_148 = UE::CoreUObject::Private::GetFName((UObject *)local_a0);
        local_148 = *(FName *)local_148;
        ::FName::ToString(&local_148,&local_130);
      }
      ::FString::FString(&local_100,L"Type");
      FJsonObject::SetStringField((FJsonObject *)pTVar22,&local_100,&local_130);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      pFVar15 = ::operator_new(0x20);
      if (pFVar15 == (FJsonValueObject *)0x0) {
        pFVar15 = (FJsonValueObject *)0x0;
      }
      else {
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f0.Object = (FJsonObject *)pTVar22;
        local_f0.SharedReferenceCount.ReferenceController = pTVar19;
        pFVar15 = FJsonValueObject::FJsonValueObject(pFVar15,&local_f0);
      }
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      local_170.Object = (FJsonValue *)pFVar15;
      pTVar11 = ::operator_new(0x18);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11[1]._padding_ = (longlong)pFVar15;
        pTVar19 = pTVar11;
      }
      local_170.SharedReferenceCount.ReferenceController = pTVar19;
      if (((local_210.AllocatorInstance.Data <= &local_170) &&
          (&local_170 <
           (TSharedPtr<FJsonValue,1> *)
           (local_210.AllocatorInstance.Data + (longlong)local_210.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
        return pTVar12;
      }
      iVar6 = local_210.ArrayNum;
      if (local_210.ArrayNum == local_210.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_210.AllocatorInstance,&local_210.ArrayMax);
      }
      local_210.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&local_210.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           local_170.Object;
      *(TReferenceControllerBase<1> **)
       (local_210.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           local_170.SharedReferenceCount.ReferenceController;
      local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_170.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      UNiagaraSimCache::ReadAttribute
                (param_1,&local_198,&local_1a8,&local_1b8,this->Name,local_140,param_3);
      pFVar14 = FNiagaraTypeDefinitionHandle::Resolve(&this->TypeDefHandle);
      uVar2 = pFVar14->Size;
      uVar24 = (uint)uVar2;
      local_244 = (uint)uVar2;
      if (uVar2 == 0xffff) {
        if (((pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
           (pUVar16 = FNiagaraTypeDefinition::GetClass(pFVar14), pUVar16 != (UClass *)0x0)) {
          pFVar14->Size = 0;
          uVar24 = 0;
          local_244 = 0;
        }
        else {
          pUVar17 = FNiagaraTypeDefinition::GetStruct(pFVar14);
          pUVar18 = CastChecked<UScriptStruct,UStruct>(pUVar17);
          iVar6 = (int)*(short *)((longlong)&pUVar18->_padding_ + 4);
          uVar24 = iVar6 + -1 + (int)pUVar18->_padding_ & -iVar6;
          local_244 = uVar24;
          if ((0x7fff < (int)uVar24) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
            return pTVar12;
          }
          pFVar14->Size = (short)uVar24;
        }
      }
      uVar25 = 0;
      iVar6 = local_198.ArrayNum;
      uVar21 = (ulonglong)local_198.ArrayNum;
      if (0 < local_198.ArrayNum) {
        local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.ArrayNum = 0;
        local_240.ArrayMax = 0;
        if ((ulonglong)(longlong)(short)uVar24 < 5) {
          pFVar1 = local_198.AllocatorInstance.Data + uVar21 * 4;
          FVar26.Data = local_198.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar21 != iVar6) {
              local_247 = 0;
              `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_247);
            }
            pTVar22 = local_1f8;
            uVar24 = local_244;
            if (FVar26.Data == pFVar1) break;
            fVar28 = *(float *)FVar26.Data;
            pTVar19 = ::operator_new(0x28);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
              ;
              FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar19 + 1),(double)fVar28);
              pTVar11 = pTVar19 + 1;
              if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_240.ArrayNum;
            if (local_240.ArrayNum == local_240.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_240.AllocatorInstance,&local_240.ArrayMax);
            }
            local_240.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_240.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
            *(TReferenceControllerBase<1> **)
             (local_240.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            uVar21 = local_198._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 4;
          }
        }
        else if (0 < local_198.ArrayNum) {
          iVar6 = (int)((ulonglong)(longlong)(short)uVar24 >> 2);
          local_158 = (longlong)iVar6 << 2;
          local_1c0 = 0;
          do {
            local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.ArrayNum = 0;
            local_1f0.ArrayMax = 0;
            lVar27 = local_1c0;
            for (uVar24 = uVar25;
                ((-1 < (int)uVar24 && ((int)uVar24 < (int)uVar21)) &&
                ((int)uVar24 < (int)(uVar25 + iVar6))); uVar24 = uVar24 + 1) {
              uVar7 = 0;
              if ((int)uVar24 < (int)uVar21) {
                uVar7 = ~uVar24 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
              FVar26.Data = local_198.AllocatorInstance.Data;
              pTVar19 = ::operator_new(0x28);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar19 = (TReferenceControllerBase<1> *)0x0;
                pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                fVar28 = *(float *)(FVar26.Data + lVar27);
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
                ;
                FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar19 + 1),(double)fVar28)
                ;
                pTVar11 = pTVar19 + 1;
                if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                  return pTVar12;
                }
              }
              iVar8 = local_1f0.ArrayNum;
              if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
              }
              local_1f0.ArrayNum = iVar8 + 1;
              *(TReferenceControllerBase<1> **)
               &local_1f0.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
              *(TReferenceControllerBase<1> **)
               (local_1f0.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              uVar21 = local_198._8_8_ & 0xffffffff;
              lVar27 = lVar27 + 4;
            }
            pTVar19 = ::operator_new(0x30);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_
              ;
              FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar19 + 1),&local_1f0);
              pTVar11 = pTVar19 + 1;
              if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_240.ArrayNum;
            if (local_240.ArrayNum == local_240.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_240.AllocatorInstance,&local_240.ArrayMax);
            }
            local_240.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_240.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
            *(TReferenceControllerBase<1> **)
             (local_240.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_1f0.AllocatorInstance.Data,
                       local_1f0.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_1f0.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_1f0.AllocatorInstance.Data);
            }
            uVar25 = uVar25 + iVar6;
            local_1c0 = local_1c0 + local_158;
            uVar21 = local_198._8_8_ & 0xffffffff;
            pTVar22 = local_1f8;
            uVar24 = local_244;
          } while ((int)uVar25 < local_198.ArrayNum);
        }
        if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar12;
        }
        ::FString::FString(&local_e0,L"Floats");
        FJsonObject::SetArrayField((FJsonObject *)pTVar22,&local_e0,&local_240);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_240.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_240.AllocatorInstance.Data);
        }
      }
      sVar23 = (short)uVar24;
      uVar25 = 0;
      iVar6 = local_1a8.ArrayNum;
      uVar21 = (ulonglong)local_1a8.ArrayNum;
      if (0 < local_1a8.ArrayNum) {
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = 0;
        local_230.ArrayMax = 0;
        if ((ulonglong)(longlong)sVar23 < 3) {
          pFVar1 = local_1a8.AllocatorInstance.Data + uVar21 * 2;
          FVar26.Data = local_1a8.AllocatorInstance.Data;
          while( true ) {
            pTVar19 = (TReferenceControllerBase<1> *)0x0;
            if ((int)uVar21 != iVar6) {
              local_246 = 0;
              `TCheckedPointerIterator<FFloat16,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_246);
            }
            pTVar22 = local_1f8;
            uVar24 = local_244;
            if (FVar26.Data == pFVar1) break;
            local_200[0] = *(ushort *)FVar26.Data;
            pTVar11 = ::operator_new(0x28);
            if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
              pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar11->SharedReferenceCount = (atomic<int>)0x1;
              pTVar11->WeakReferenceCount = (atomic<int>)0x1;
              pTVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
              ;
              fVar28 = FGenericPlatformMath::LoadHalf(local_200);
              FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar11 + 1),(double)fVar28);
              pTVar22 = pTVar11 + 1;
              pTVar19 = pTVar11;
              if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_230.ArrayNum;
            if (local_230.ArrayNum == local_230.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_230.AllocatorInstance,&local_230.ArrayMax);
            }
            local_230.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_230.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar22;
            *(TReferenceControllerBase<1> **)
             (local_230.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            uVar21 = local_1a8._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 2;
          }
        }
        else if (0 < local_1a8.ArrayNum) {
          do {
            local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.ArrayNum = 0;
            local_1e0.ArrayMax = 0;
            for (uVar24 = uVar25;
                ((iVar6 = (int)((ulonglong)(longlong)sVar23 >> 1), -1 < (int)uVar24 &&
                 ((int)uVar24 < (int)uVar21)) && ((int)uVar24 < (int)(uVar25 + iVar6)));
                uVar24 = uVar24 + 1) {
              uVar7 = 0;
              if ((int)uVar24 < (int)uVar21) {
                uVar7 = ~uVar24 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
              fVar28 = FGenericPlatformMath::LoadHalf
                                 ((ushort *)
                                  (local_1a8.AllocatorInstance.Data + (longlong)(int)uVar24 * 2));
              pTVar19 = ::operator_new(0x28);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar19 = (TReferenceControllerBase<1> *)0x0;
                pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
                ;
                FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar19 + 1),(double)fVar28)
                ;
                pTVar11 = pTVar19 + 1;
                if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                  return pTVar12;
                }
              }
              iVar6 = local_1e0.ArrayNum;
              if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
              }
              local_1e0.ArrayNum = iVar6 + 1;
              *(TReferenceControllerBase<1> **)
               &local_1e0.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 = pTVar11;
              *(TReferenceControllerBase<1> **)
               (local_1e0.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = pTVar19;
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              uVar21 = local_1a8._8_8_ & 0xffffffff;
            }
            pTVar19 = ::operator_new(0x30);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_
              ;
              FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar19 + 1),&local_1e0);
              pTVar11 = pTVar19 + 1;
              if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_230.ArrayNum;
            if (local_230.ArrayNum == local_230.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_230.AllocatorInstance,&local_230.ArrayMax);
            }
            local_230.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_230.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
            *(TReferenceControllerBase<1> **)
             (local_230.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_1e0.AllocatorInstance.Data,
                       local_1e0.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_1e0.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_1e0.AllocatorInstance.Data);
            }
            uVar21 = local_1a8._8_8_ & 0xffffffff;
            uVar25 = uVar25 + iVar6;
            pTVar22 = local_1f8;
            uVar24 = local_244;
          } while ((int)uVar25 < local_1a8.ArrayNum);
        }
        sVar23 = (short)uVar24;
        if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar12;
        }
        ::FString::FString(&local_d0,L"Halfs");
        FJsonObject::SetArrayField((FJsonObject *)pTVar22,&local_d0,&local_230);
        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_230.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_230.AllocatorInstance.Data);
        }
      }
      uVar24 = 0;
      iVar6 = local_1b8.ArrayNum;
      uVar21 = (ulonglong)local_1b8.ArrayNum;
      if (0 < local_1b8.ArrayNum) {
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        if ((ulonglong)(longlong)sVar23 < 5) {
          pFVar1 = local_1b8.AllocatorInstance.Data + uVar21 * 4;
          FVar26.Data = local_1b8.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar21 != iVar6) {
              local_245 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_245);
            }
            pTVar22 = local_1f8;
            if (FVar26.Data == pFVar1) break;
            iVar8 = *(int *)FVar26.Data;
            pTVar19 = ::operator_new(0x28);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
              ;
              FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar19 + 1),(double)iVar8);
              pTVar11 = pTVar19 + 1;
              if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_220.ArrayNum;
            if (local_220.ArrayNum == local_220.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_220.AllocatorInstance,&local_220.ArrayMax);
            }
            local_220.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_220.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
            *(TReferenceControllerBase<1> **)
             (local_220.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            uVar21 = local_1b8._8_8_ & 0xffffffff;
            FVar26.Data = FVar26.Data + 4;
          }
        }
        else if (0 < local_1b8.ArrayNum) {
          iVar6 = (int)((ulonglong)(longlong)sVar23 >> 2);
          local_158 = (longlong)iVar6 << 2;
          local_1c0 = 0;
          do {
            local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d0.ArrayNum = 0;
            local_1d0.ArrayMax = 0;
            lVar27 = local_1c0;
            for (uVar25 = uVar24;
                ((-1 < (int)uVar25 && ((int)uVar25 < (int)uVar21)) &&
                ((int)uVar25 < (int)(uVar24 + iVar6))); uVar25 = uVar25 + 1) {
              uVar7 = 0;
              if ((int)uVar25 < (int)uVar21) {
                uVar7 = ~uVar25 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
              FVar26.Data = local_1b8.AllocatorInstance.Data;
              pTVar19 = ::operator_new(0x28);
              if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                pTVar19 = (TReferenceControllerBase<1> *)0x0;
                pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
              }
              else {
                pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                pTVar19->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
                ;
                FJsonValueNumber::FJsonValueNumber
                          ((FJsonValueNumber *)(pTVar19 + 1),(double)*(int *)(FVar26.Data + lVar27))
                ;
                pTVar11 = pTVar19 + 1;
                if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                  return pTVar12;
                }
              }
              iVar8 = local_1d0.ArrayNum;
              if (local_1d0.ArrayNum == local_1d0.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1d0.AllocatorInstance,&local_1d0.ArrayMax);
              }
              local_1d0.ArrayNum = iVar8 + 1;
              *(TReferenceControllerBase<1> **)
               &local_1d0.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
              *(TReferenceControllerBase<1> **)
               (local_1d0.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              uVar21 = local_1b8._8_8_ & 0xffffffff;
              lVar27 = lVar27 + 4;
            }
            pTVar19 = ::operator_new(0x30);
            if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
              pTVar19 = (TReferenceControllerBase<1> *)0x0;
              pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
            }
            else {
              pTVar19->SharedReferenceCount = (atomic<int>)0x1;
              pTVar19->WeakReferenceCount = (atomic<int>)0x1;
              pTVar19->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_
              ;
              FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar19 + 1),&local_1d0);
              pTVar11 = pTVar19 + 1;
              if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
                return pTVar12;
              }
            }
            iVar8 = local_220.ArrayNum;
            if (local_220.ArrayNum == local_220.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_220.AllocatorInstance,&local_220.ArrayMax);
            }
            local_220.ArrayNum = iVar8 + 1;
            *(TReferenceControllerBase<1> **)
             &local_220.AllocatorInstance.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar11;
            *(TReferenceControllerBase<1> **)
             (local_220.AllocatorInstance.Data + (longlong)iVar8 * 0x10 + 8) = pTVar19;
            if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar19);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_1d0.AllocatorInstance.Data,
                       local_1d0.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_1d0.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_1d0.AllocatorInstance.Data);
            }
            uVar24 = uVar24 + iVar6;
            local_1c0 = local_1c0 + local_158;
            uVar21 = local_1b8._8_8_ & 0xffffffff;
            pTVar22 = local_1f8;
          } while ((int)uVar24 < local_1b8.ArrayNum);
        }
        if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
          return pTVar12;
        }
        ::FString::FString(&local_c0,L"Ints");
        FJsonObject::SetArrayField((FJsonObject *)pTVar22,&local_c0,&local_220);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_220.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
      }
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188)
      ;
      uVar20 = local_178 & 0xffffffff;
      this = local_150 + 1;
      uVar21 = (ulonglong)local_160;
    }
    if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FJsonObject,1> *)(*pcVar3)();
      return pTVar12;
    }
    pFVar10 = __return_storage_ptr__->Object;
    ::FString::FString(&local_b0,L"Attributes");
    FJsonObject::SetArrayField(pFVar10,&local_b0,&local_210);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_210.AllocatorInstance.Data,local_210.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_210.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    if (local_180 != (FNiagaraVariableBase *)0x0) {
      FMemory::Free(local_180);
    }
  }
  return __return_storage_ptr__;
}

// SystemDataToJson @ 1493b76c0

TSharedPtr<FJsonObject,1> * __cdecl
FNiagaraSimCacheJson::SystemDataToJson
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,UNiagaraSimCache *param_1)

{
  float fVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FJsonObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FJsonObject,1> *pTVar7;
  TSharedPtr<FJsonObject,1> *pTVar8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TSharedRef<FJsonObject,1> local_58;
  undefined8 local_48;
  FSoftObjectPath local_40;
  
  pTVar7 = MakeShared<FJsonObject,1>(&local_58);
  __return_storage_ptr__->Object = pTVar7->Object;
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  local_48 = *(undefined8 *)&(param_1->SoftNiagaraSystem).SoftObjectPtr;
  pFVar4 = __return_storage_ptr__->Object;
  FSoftObjectPath::FSoftObjectPath
            (&local_40,(FSoftObjectPath *)&(param_1->SoftNiagaraSystem).SoftObjectPtr.field_0x8);
  FSoftObjectPath::ToString(&local_40,&local_b8);
  ::FString::FString(&local_c8,L"SystemAsset");
  FJsonObject::SetStringField(pFVar4,&local_c8,&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pFVar4 = __return_storage_ptr__->Object;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  FGuid::AppendString(&param_1->CacheGuid,&local_d8,Digits);
  ::FString::FString(&local_a8,L"CacheGuid");
  FJsonObject::SetStringField(pFVar4,&local_a8,&local_d8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  fVar1 = param_1->StartSeconds;
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_98,L"StartSeconds");
  FJsonObject::SetNumberField(pFVar4,&local_98,(double)fVar1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  fVar1 = param_1->DurationSeconds;
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_88,L"DurationSeconds");
  FJsonObject::SetNumberField(pFVar4,&local_88,(double)fVar1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = (param_1->CacheFrames).ArrayNum;
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_78,L"NumFrames");
  FJsonObject::SetNumberField(pFVar4,&local_78,(double)iVar2);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (__return_storage_ptr__->Object == (FJsonObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = (param_1->CacheLayout).EmitterLayouts.ArrayNum;
  pFVar4 = __return_storage_ptr__->Object;
  ::FString::FString(&local_68,L"NumEmitters");
  FJsonObject::SetNumberField(pFVar4,&local_68,(double)iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToJson @ 1493b9bf0

TSharedPtr<FJsonObject,1> * __cdecl
FNiagaraSimCacheJson::ToJson
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,UNiagaraSimCache *param_1)

{
  code *pcVar1;
  FJsonObject *this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  int iVar4;
  FJsonValueObject *pFVar5;
  FName FVar6;
  FName FVar7;
  TSharedPtr<FJsonObject,1> *pTVar8;
  FName FVar9;
  FString *pFVar10;
  FName FVar11;
  FNameEntryId FVar12;
  longlong local_res10;
  FName local_res18;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<FJsonValue,1> local_c8;
  TSharedPtr<FJsonValue,1> local_b8;
  TSharedPtr<FJsonObject,1> local_a8;
  TSharedPtr<FJsonObject,1> local_98;
  TSharedPtr<FJsonObject,1> local_88;
  FString local_78;
  TSharedPtr<FJsonObject,1> local_68;
  TSharedPtr<FJsonObject,1> local_58;
  FString local_48;
  
  if (*(longlong *)&(param_1->SoftNiagaraSystem).SoftObjectPtr.field_0x8 == 0) {
    __return_storage_ptr__->Object = (FJsonObject *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  SystemDataToJson(&local_a8,param_1);
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  FVar9 = FVar11;
  if (0 < (param_1->CacheFrames).ArrayNum) {
    do {
      EmitterFrameToJson(&local_98,param_1,-1,FVar9.ComparisonIndex.Value.Value);
      pFVar5 = ::operator_new(0x20);
      FVar2.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
      FVar6 = FVar11;
      if (pFVar5 != (FJsonValueObject *)0x0) {
        local_68.Object = local_98.Object;
        local_68.SharedReferenceCount.ReferenceController =
             local_98.SharedReferenceCount.ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar6 = (FName)FJsonValueObject::FJsonValueObject(pFVar5,&local_68);
      }
      local_c8.Object = (FJsonValue *)FVar6;
      FVar7 = (FName)::operator_new(0x18);
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar11;
      if (FVar7 != (FName)0x0) {
        *(undefined4 *)((longlong)FVar7 + 8) = 1;
        *(undefined4 *)((longlong)FVar7 + 0xc) = 1;
        *(undefined ***)FVar7 =
             &
             ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(FName *)((longlong)FVar7 + 0x10) = FVar6;
        local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar7;
      }
      if (((local_e8.AllocatorInstance.Data <= &local_c8) &&
          (&local_c8 <
           (TSharedPtr<FJsonValue,1> *)
           (local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayMax * 0x10))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
        return pTVar8;
      }
      iVar4 = local_e8.ArrayNum;
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      local_e8.ArrayNum = iVar4 + 1;
      *(FJsonValue **)&local_e8.AllocatorInstance.Data[(longlong)iVar4 * 0x10].field_0x0 =
           local_c8.Object;
      *(TReferenceControllerBase<1> **)
       (local_e8.AllocatorInstance.Data + (longlong)iVar4 * 0x10 + 8) =
           local_c8.SharedReferenceCount.ReferenceController;
      local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_c8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      FVar9.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value + 1;
      FVar9.Number = 0;
    } while ((int)FVar9.ComparisonIndex.Value < (param_1->CacheFrames).ArrayNum);
  }
  if ((local_a8.Object == (FJsonObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
    return pTVar8;
  }
  ::FString::FString(&local_78,L"SystemInstance");
  FJsonObject::SetArrayField(local_a8.Object,&local_78,&local_e8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_e8.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (0 < (param_1->CacheLayout).EmitterLayouts.ArrayNum) {
    local_res10 = 0;
    FVar6 = FVar11;
    do {
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      FVar12 = FVar6.ComparisonIndex.Value;
      FVar7 = FVar11;
      if (0 < (param_1->CacheFrames).ArrayNum) {
        do {
          EmitterFrameToJson(&local_88,param_1,FVar12.Value,FVar7.ComparisonIndex.Value.Value);
          pFVar5 = ::operator_new(0x20);
          FVar2.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
          FVar9 = FVar11;
          if (pFVar5 != (FJsonValueObject *)0x0) {
            local_58.Object = local_88.Object;
            local_58.SharedReferenceCount.ReferenceController =
                 local_88.SharedReferenceCount.ReferenceController;
            if (local_88.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            FVar9 = (FName)FJsonValueObject::FJsonValueObject(pFVar5,&local_58);
          }
          local_b8.Object = (FJsonValue *)FVar9;
          FVar6 = (FName)::operator_new(0x18);
          local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar11;
          if (FVar6 != (FName)0x0) {
            *(undefined4 *)((longlong)FVar6 + 8) = 1;
            *(undefined4 *)((longlong)FVar6 + 0xc) = 1;
            *(undefined ***)FVar6 =
                 &
                 ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            *(FName *)((longlong)FVar6 + 0x10) = FVar9;
            local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar6
            ;
          }
          if (((local_d8.AllocatorInstance.Data <= &local_b8) &&
              (&local_b8 <
               (TSharedPtr<FJsonValue,1> *)
               (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
            return pTVar8;
          }
          iVar4 = local_d8.ArrayNum;
          if (local_d8.ArrayNum == local_d8.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
          }
          local_d8.ArrayNum = iVar4 + 1;
          *(FJsonValue **)&local_d8.AllocatorInstance.Data[(longlong)iVar4 * 0x10].field_0x0 =
               local_b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_d8.AllocatorInstance.Data + (longlong)iVar4 * 0x10 + 8) =
               local_b8.SharedReferenceCount.ReferenceController;
          local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_b8.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar2.ReferenceController);
          FVar7.ComparisonIndex.Value = FVar7.ComparisonIndex.Value.Value + 1;
          FVar7.Number = 0;
        } while ((int)FVar7.ComparisonIndex.Value < (param_1->CacheFrames).ArrayNum);
      }
      if ((local_a8.Object == (FJsonObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
        return pTVar8;
      }
      this = local_a8.Object;
      FVar9 = FVar11;
      if ((-1 < (int)FVar12.Value) &&
         ((int)FVar12.Value < (param_1->CacheLayout).EmitterLayouts.ArrayNum)) {
        if (((int)FVar12.Value < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FJsonObject,1> *)(*pcVar1)();
          return pTVar8;
        }
        FVar9 = *(FName *)((param_1->CacheLayout).EmitterLayouts.AllocatorInstance.Data +
                          local_res10);
      }
      local_res18 = FVar9;
      pFVar10 = ::FName::ToString(&local_res18,&local_48);
      FJsonObject::SetArrayField(this,pFVar10,&local_d8);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_d8.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      local_res10 = local_res10 + 0xb8;
      FVar6.ComparisonIndex.Value = FVar12.Value + 1;
      FVar6.Number = 0;
    } while ((int)FVar6.ComparisonIndex.Value < (param_1->CacheLayout).EmitterLayouts.ArrayNum);
  }
  __return_storage_ptr__->Object = local_a8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

