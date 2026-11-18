// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 23

// StaticClass @ 14ddafc00

UClass * __cdecl UMoviePipelineConsoleVariableSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineConsoleVariableSetting",
               &Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineConsoleVariableSetting,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineConsoleVariableSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineConsoleVariableSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton;
}

// UMoviePipelineConsoleVariableSetting @ 14ddb18f0

UMoviePipelineConsoleVariableSetting * __thiscall
UMoviePipelineConsoleVariableSetting::UMoviePipelineConsoleVariableSetting
          (UMoviePipelineConsoleVariableSetting *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
  (this->ConsoleVariablePresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariablePresets).ArrayNum = 0;
  (this->ConsoleVariablePresets).ArrayMax = 0;
  (this->StartConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartConsoleCommands).ArrayNum = 0;
  (this->StartConsoleCommands).ArrayMax = 0;
  (this->EndConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndConsoleCommands).ArrayNum = 0;
  (this->EndConsoleCommands).ArrayMax = 0;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  (this->PreviousConsoleVariableValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousConsoleVariableValues).ArrayNum = 0;
  (this->PreviousConsoleVariableValues).ArrayMax = 0;
  (this->MergedConsoleVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergedConsoleVariables).ArrayNum = 0;
  (this->MergedConsoleVariables).ArrayMax = 0;
  return this;
}

// UMoviePipelineConsoleVariableSetting @ 14ddb1960

UMoviePipelineConsoleVariableSetting * __thiscall
UMoviePipelineConsoleVariableSetting::UMoviePipelineConsoleVariableSetting
          (UMoviePipelineConsoleVariableSetting *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
  (this->ConsoleVariablePresets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariablePresets).ArrayNum = 0;
  (this->ConsoleVariablePresets).ArrayMax = 0;
  (this->StartConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StartConsoleCommands).ArrayNum = 0;
  (this->StartConsoleCommands).ArrayMax = 0;
  (this->EndConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EndConsoleCommands).ArrayNum = 0;
  (this->EndConsoleCommands).ArrayMax = 0;
  (this->CVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVars).ArrayNum = 0;
  (this->CVars).ArrayMax = 0;
  (this->PreviousConsoleVariableValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousConsoleVariableValues).ArrayNum = 0;
  (this->PreviousConsoleVariableValues).ArrayMax = 0;
  (this->MergedConsoleVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergedConsoleVariables).ArrayNum = 0;
  (this->MergedConsoleVariables).ArrayMax = 0;
  return this;
}

// ~UMoviePipelineConsoleVariableSetting @ 14ddb1c60

void __thiscall
UMoviePipelineConsoleVariableSetting::~UMoviePipelineConsoleVariableSetting
          (UMoviePipelineConsoleVariableSetting *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMoviePipelineConsoleVariableSetting__6B_;
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)
             (this->MergedConsoleVariables).AllocatorInstance.Data,
             (this->MergedConsoleVariables).ArrayNum);
  pFVar1 = (this->MergedConsoleVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousConsoleVariableValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)(this->CVars).AllocatorInstance.Data,
             (this->CVars).ArrayNum);
  pFVar1 = (this->CVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EndConsoleCommands).AllocatorInstance.Data,
             (this->EndConsoleCommands).ArrayNum);
  pFVar1 = (this->EndConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StartConsoleCommands).AllocatorInstance.Data,
             (this->StartConsoleCommands).ArrayNum);
  pFVar1 = (this->StartConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsoleVariablePresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// AddConsoleVariable @ 14ddb29f0

bool __thiscall
UMoviePipelineConsoleVariableSetting::AddConsoleVariable
          (UMoviePipelineConsoleVariableSetting *this,FString *param_1,float param_2)

{
  TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FMoviePipelineConsoleVariableEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FMoviePipelineConsoleVariableEntry *pFVar9;
  longlong lVar10;
  FMoviePipelineConsoleVariableEntry local_28;
  
  pTVar1 = &this->CVars;
  pFVar9 = FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
                     (&local_28,param_1,param_2,true);
  pFVar3 = (FMoviePipelineConsoleVariableEntry *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (this->CVars).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->CVars).ArrayNum;
  piVar2 = &(this->CVars).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->CVars).ArrayNum = iVar8 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  lVar10 = (longlong)iVar8;
  *(undefined8 *)(pFVar4 + lVar10 * 0x18) = 0;
  *(FScriptContainerElement **)(pFVar4 + lVar10 * 0x18) = (pFVar9->Name).Data.AllocatorInstance.Data
  ;
  (pFVar9->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar4 + lVar10 * 0x18 + 8) = (pFVar9->Name).Data.ArrayNum;
  *(int *)(pFVar4 + lVar10 * 0x18 + 0xc) = (pFVar9->Name).Data.ArrayMax;
  (pFVar9->Name).Data.ArrayNum = 0;
  (pFVar9->Name).Data.ArrayMax = 0;
  *(float *)(pFVar4 + lVar10 * 0x18 + 0x10) = pFVar9->Value;
  pFVar4[lVar10 * 0x18 + 0x14] = (FScriptContainerElement)pFVar9->bIsEnabled;
  if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
  }
  return true;
}

// AddOrUpdateConsoleVariable @ 14ddb2af0

bool __thiscall
UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable
          (UMoviePipelineConsoleVariableSetting *this,FString *param_1,float param_2)

{
  TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FMoviePipelineConsoleVariableEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FMoviePipelineConsoleVariableEntry *pFVar9;
  longlong lVar10;
  uint uVar11;
  FMoviePipelineConsoleVariableEntry local_38 [2];
  
  this_00 = &this->CVars;
  uVar7 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::AddOrUpdateConsoleVariable_::__l2::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->CVars).ArrayNum);
  if (uVar7 == 0xffffffff) {
    pFVar9 = FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
                       (local_38,param_1,param_2,true);
    pFVar2 = (FMoviePipelineConsoleVariableEntry *)(this_00->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (this->CVars).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar8 = (this->CVars).ArrayNum;
    piVar1 = &(this->CVars).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&this_00->AllocatorInstance,piVar1);
    }
    (this->CVars).ArrayNum = iVar8 + 1;
    pFVar3 = (this_00->AllocatorInstance).Data;
    lVar10 = (longlong)iVar8;
    *(undefined8 *)(pFVar3 + lVar10 * 0x18) = 0;
    *(FScriptContainerElement **)(pFVar3 + lVar10 * 0x18) =
         (pFVar9->Name).Data.AllocatorInstance.Data;
    (pFVar9->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar3 + lVar10 * 0x18 + 8) = (pFVar9->Name).Data.ArrayNum;
    *(int *)(pFVar3 + lVar10 * 0x18 + 0xc) = (pFVar9->Name).Data.ArrayMax;
    (pFVar9->Name).Data.ArrayNum = 0;
    (pFVar9->Name).Data.ArrayMax = 0;
    *(float *)(pFVar3 + lVar10 * 0x18 + 0x10) = pFVar9->Value;
    pFVar3[lVar10 * 0x18 + 0x14] = (FScriptContainerElement)pFVar9->bIsEnabled;
    if (local_38[0].Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Name.Data.AllocatorInstance.Data);
    }
  }
  else {
    uVar11 = 0;
    if ((int)uVar7 < (this->CVars).ArrayNum) {
      uVar11 = ~uVar7 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    *(float *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x18 + 0x10) = param_2;
  }
  return true;
}

// ApplyCVarSettings @ 14ddb2c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipelineConsoleVariableSetting::ApplyCVarSettings
          (UMoviePipelineConsoleVariableSetting *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  IConsoleVariable *pIVar9;
  UObject *pUVar10;
  FStaticBasicLogRecord *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_60 [2];
  
  if (param_1) {
    MergeInPresetConsoleVariables(this);
    pTVar3 = &this->PreviousConsoleVariableValues;
    piVar1 = &(this->PreviousConsoleVariableValues).ArrayMax;
    (this->PreviousConsoleVariableValues).ArrayNum = 0;
    piVar2 = &(this->PreviousConsoleVariableValues).ArrayNum;
    if ((this->PreviousConsoleVariableValues).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
    uVar13 = (this->MergedConsoleVariables).ArrayNum;
    iVar7 = *piVar2;
    if (iVar7 < (int)uVar13) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar13 - iVar7,&pTVar3->AllocatorInstance,piVar2,piVar1);
      memset((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 4,0,
             (longlong)(int)(uVar13 - iVar7) << 2);
    }
    else {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)uVar13 < iVar7) {
        uVar14 = iVar7 - uVar13;
        if (((int)(uVar13 | uVar14) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar14 != 0) {
          pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar13 * 4;
          iVar7 = (*piVar2 - uVar13) - uVar14;
          if (iVar7 != 0) {
            memmove(pFVar16,pFVar16 + (longlong)(int)uVar14 * 4,(longlong)iVar7 << 2);
          }
          *piVar2 = *piVar2 - uVar14;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar3->AllocatorInstance,*piVar2,piVar1);
        }
      }
    }
  }
  pFVar15 = (this->MergedConsoleVariables).AllocatorInstance.Data;
  uVar13 = 0;
  iVar7 = (this->MergedConsoleVariables).ArrayNum;
  lVar17 = 0;
  pFVar16 = pFVar15 + (longlong)iVar7 * 0x18;
  do {
    if ((this->MergedConsoleVariables).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar16) {
      if (param_1) {
        iVar7 = (this->StartConsoleCommands).ArrayNum;
        pFVar16 = (this->StartConsoleCommands).AllocatorInstance.Data;
        pFVar15 = pFVar16 + (longlong)iVar7 * 0x10;
        while( true ) {
          if ((this->StartConsoleCommands).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar16 == pFVar15) break;
          if (4 < (byte)LogMovieRenderPipeline._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          }
          pUVar10 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
          UKismetSystemLibrary::ExecuteConsoleCommand
                    (pUVar10,(FString *)pFVar16,(APlayerController *)0x0);
          pFVar16 = pFVar16 + 0x10;
        }
      }
      else {
        iVar7 = (this->EndConsoleCommands).ArrayNum;
        pFVar16 = (this->EndConsoleCommands).AllocatorInstance.Data;
        pFVar15 = pFVar16 + (longlong)iVar7 * 0x10;
        while( true ) {
          if ((this->EndConsoleCommands).ArrayNum != iVar7) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar16 == pFVar15) break;
          if (4 < (byte)LogMovieRenderPipeline._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          }
          pUVar10 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
          UKismetSystemLibrary::ExecuteConsoleCommand
                    (pUVar10,(FString *)pFVar16,(APlayerController *)0x0);
          pFVar16 = pFVar16 + 0x10;
        }
      }
      return;
    }
    ::FString::TrimStartAndEnd((FString *)pFVar15,local_60);
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
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_60[0].Data.ArrayNum != 0) {
      FVar12.Data = local_60[0].Data.AllocatorInstance.Data;
    }
    pIVar9 = (IConsoleVariable *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,FVar12.Data);
    if (pIVar9 == (IConsoleVariable *)0x0) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
    else {
      uVar14 = ~uVar13 >> 0x1f;
      if (param_1) {
        uVar18 = (**(code **)(*(longlong *)pIVar9 + 0xd0))(pIVar9);
        uVar8 = 0;
        if ((int)uVar13 < (this->PreviousConsoleVariableValues).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)((this->PreviousConsoleVariableValues).AllocatorInstance.Data + lVar17) =
             uVar18;
        UE::MoviePipeline::SetValue(pIVar9,*(float *)&pFVar15[0x10].field_0x0);
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          uVar8 = 0;
          if ((int)uVar13 < (this->PreviousConsoleVariableValues).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = &::LOG_Static;
LAB_14ddb2fbd:
          UE::Logging::Private::BasicLog<5>(pFVar11,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      else {
        uVar8 = 0;
        if ((int)uVar13 < (this->PreviousConsoleVariableValues).ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::MoviePipeline::SetValue
                  (pIVar9,*(float *)((this->PreviousConsoleVariableValues).AllocatorInstance.Data +
                                    lVar17));
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          uVar8 = 0;
          if ((int)uVar13 < (this->PreviousConsoleVariableValues).ArrayNum) {
            uVar8 = uVar14;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = &::LOG_Static;
          goto LAB_14ddb2fbd;
        }
      }
    }
    uVar13 = uVar13 + 1;
    lVar17 = lVar17 + 4;
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    pFVar15 = pFVar15 + 0x18;
  } while( true );
}

// GetConsoleVariables @ 14ddb4010

TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineConsoleVariableSetting::GetConsoleVariables
          (UMoviePipelineConsoleVariableSetting *this,
          TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FMoviePipelineConsoleVariableEntry *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CVars).ArrayNum;
  pFVar2 = (FMoviePipelineConsoleVariableEntry *)(this->CVars).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FMoviePipelineConsoleVariableEntry,FMoviePipelineConsoleVariableEntry,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetPriority @ 14ddb4150

int __thiscall
UMoviePipelineConsoleVariableSetting::GetPriority(UMoviePipelineConsoleVariableSetting *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14ddb42e0

UClass * __cdecl UMoviePipelineConsoleVariableSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineSettings",L"MoviePipelineConsoleVariableSetting",
               &Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineConsoleVariableSetting,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineConsoleVariableSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineConsoleVariableSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConsoleVariableSetting.InnerSingleton;
}

// IsValidOnPrimary @ 14ddb44f0

bool __thiscall
UMoviePipelineConsoleVariableSetting::IsValidOnPrimary(UMoviePipelineConsoleVariableSetting *this)

{
  return true;
}

// IsValidOnShots @ 14ddb4520

bool __thiscall
UMoviePipelineConsoleVariableSetting::IsValidOnShots(UMoviePipelineConsoleVariableSetting *this)

{
  return true;
}

// MergeInPresetConsoleVariables @ 14ddb4540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineConsoleVariableSetting::MergeInPresetConsoleVariables
          (UMoviePipelineConsoleVariableSetting *this)

{
  int *piVar1;
  TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FMoviePipelineConsoleVariableEntry *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FMoviePipelineConsoleVariableEntry *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  TTuple<FString,FString> *pTVar15;
  FScriptContainerElement *pFVar16;
  TTuple<FString,FString> *pTVar17;
  FScriptContainerElement *pFVar18;
  float fVar19;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [4];
  float local_d4;
  TTuple<FString,FString> *local_d0;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  FScriptContainerElement *local_b8;
  FName local_b0;
  FString local_a8;
  FMoviePipelineConsoleVariableEntry local_98;
  FMoviePipelineConsoleVariableEntry local_80 [2];
  
  pTVar2 = &this->MergedConsoleVariables;
  piVar1 = &(this->MergedConsoleVariables).ArrayMax;
  iVar9 = (this->MergedConsoleVariables).ArrayNum;
  pFVar3 = (FMoviePipelineConsoleVariableEntry *)(pTVar2->AllocatorInstance).Data;
  if ((this->MergedConsoleVariables).ArrayMax < 0) {
    DestructItems<FMoviePipelineConsoleVariableEntry,int>(pFVar3,iVar9);
    (this->MergedConsoleVariables).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FMoviePipelineConsoleVariableEntry,int>(pFVar3,iVar9);
    (this->MergedConsoleVariables).ArrayNum = 0;
  }
  fVar7 = __real_3f800000;
  local_bc = (this->ConsoleVariablePresets).ArrayNum;
  uVar11 = (ulonglong)(int)local_bc;
  pFVar18 = (this->ConsoleVariablePresets).AllocatorInstance.Data;
  local_b8 = pFVar18 + uVar11 * 0x10;
  pFVar16 = local_b8;
  do {
    while( true ) {
      if ((this->ConsoleVariablePresets).ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TScriptInterface<IMovieSceneConsoleVariableTrackInterface>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar18 == pFVar16) {
        iVar9 = (this->CVars).ArrayNum;
        pFVar16 = (this->CVars).AllocatorInstance.Data;
        pFVar18 = pFVar16 + (longlong)iVar9 * 0x18;
        while( true ) {
          if ((this->CVars).ArrayNum != iVar9) {
            local_d8[0] = 0;
            `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_d8);
          }
          if (pFVar16 == pFVar18) break;
          if (pFVar16[0x14] != (FScriptContainerElement)0x0) {
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar5 <= pFVar16) && (pFVar16 < pFVar5 + (longlong)*piVar1 * 0x18)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar10 = (this->MergedConsoleVariables).ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->MergedConsoleVariables).ArrayNum = iVar10 + 1;
            pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x18;
            ::FString::FString((FString *)pFVar5,(FString *)pFVar16);
            *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(pFVar16 + 0x10);
            pFVar5[0x14] = pFVar16[0x14];
          }
          pFVar16 = pFVar16 + 0x18;
        }
        return;
      }
      if ((*(longlong *)pFVar18 != 0) &&
         (plVar4 = *(longlong **)(pFVar18 + 8), plVar4 != (longlong *)0x0)) break;
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      uVar11 = (ulonglong)local_bc;
      pFVar18 = pFVar18 + 0x10;
    }
    local_d0 = (TTuple<FString,FString> *)0x0;
    local_c8 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,1,&local_d0);
    uVar11 = (ulonglong)(int)(uint)local_c8;
    pTVar17 = local_d0 + uVar11;
    local_c0 = (uint)local_c8;
    pTVar15 = local_d0;
    while( true ) {
      if ((uint)local_c8 != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pTVar15 == pTVar17) break;
      local_d4 = 0.0;
      local_res10[0] = false;
      bVar8 = FDefaultValueHelper::ParseFloat((FString *)&pTVar15->field_0x10,&local_d4);
      if (bVar8) {
        pFVar12 = FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
                            (&local_98,(FString *)pTVar15,local_d4,true);
        pFVar3 = (FMoviePipelineConsoleVariableEntry *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + *piVar1)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->MergedConsoleVariables).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar13 = (longlong)iVar9;
        (this->MergedConsoleVariables).ArrayNum = iVar9 + 1;
        pFVar16 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar16 + lVar13 * 0x18) = 0;
        *(FScriptContainerElement **)(pFVar16 + lVar13 * 0x18) =
             (pFVar12->Name).Data.AllocatorInstance.Data;
        (pFVar12->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar16 + lVar13 * 0x18 + 8) = (pFVar12->Name).Data.ArrayNum;
        *(int *)(pFVar16 + lVar13 * 0x18 + 0xc) = (pFVar12->Name).Data.ArrayMax;
        (pFVar12->Name).Data.ArrayNum = 0;
        (pFVar12->Name).Data.ArrayMax = 0;
        *(float *)(pFVar16 + lVar13 * 0x18 + 0x10) = pFVar12->Value;
        pFVar16[lVar13 * 0x18 + 0x14] = (FScriptContainerElement)pFVar12->bIsEnabled;
        FVar14.Data = local_98.Name.Data.AllocatorInstance.Data;
LAB_14ddb48a8:
        if (FVar14.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar14.Data);
        }
      }
      else {
        bVar8 = FDefaultValueHelper::ParseBool((FString *)&pTVar15->field_0x10,local_res10);
        if (bVar8) {
          fVar19 = fVar7;
          if (local_res10[0] == false) {
            fVar19 = 0.0;
          }
          pFVar12 = FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
                              (local_80,(FString *)pTVar15,fVar19,true);
          pFVar3 = (FMoviePipelineConsoleVariableEntry *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar3 <= pFVar12) && (pFVar12 < pFVar3 + *piVar1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (this->MergedConsoleVariables).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&pTVar2->AllocatorInstance,piVar1);
          }
          lVar13 = (longlong)iVar9;
          (this->MergedConsoleVariables).ArrayNum = iVar9 + 1;
          pFVar16 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 *)(pFVar16 + lVar13 * 0x18) = 0;
          *(FScriptContainerElement **)(pFVar16 + lVar13 * 0x18) =
               (pFVar12->Name).Data.AllocatorInstance.Data;
          (pFVar12->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar16 + lVar13 * 0x18 + 8) = (pFVar12->Name).Data.ArrayNum;
          *(int *)(pFVar16 + lVar13 * 0x18 + 0xc) = (pFVar12->Name).Data.ArrayMax;
          (pFVar12->Name).Data.ArrayNum = 0;
          (pFVar12->Name).Data.ArrayMax = 0;
          *(float *)(pFVar16 + lVar13 * 0x18 + 0x10) = pFVar12->Value;
          pFVar16[lVar13 * 0x18 + 0x14] = (FScriptContainerElement)pFVar12->bIsEnabled;
          FVar14.Data = local_80[0].Name.Data.AllocatorInstance.Data;
          goto LAB_14ddb48a8;
        }
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          local_b0 = *(FName *)(*(longlong *)pFVar18 + 0x18);
          ::FName::ToString(&local_b0,&local_a8);
          UE::Logging::Private::BasicLog<3>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          FVar14.Data = local_a8.Data.AllocatorInstance.Data;
          goto LAB_14ddb48a8;
        }
      }
      uVar11 = (ulonglong)local_c0;
      pTVar15 = pTVar15 + 1;
    }
    DestructItems<TTuple<FString,FString>,int>(local_d0,(uint)local_c8);
    if (local_d0 != (TTuple<FString,FString> *)0x0) {
      FMemory::Free(local_d0);
    }
    pFVar18 = pFVar18 + 0x10;
    uVar11 = (ulonglong)local_bc;
    pFVar16 = local_b8;
  } while( true );
}

// RemoveConsoleVariable @ 14ddb4a70

bool __thiscall
UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable
          (UMoviePipelineConsoleVariableSetting *this,FString *param_1,bool param_2)

{
  TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  <lambda_1> local_res20;
  
  this_00 = &this->CVars;
  if (param_2) {
    local_res20.Name = param_1;
    iVar7 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
            RemoveAll<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l5::<lambda_1>_>
                      (this_00,&local_res20);
    return iVar7 != 0;
  }
  uVar8 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l2::<lambda_2>_>
                    (this_00,(<lambda_2>)param_1,(this->CVars).ArrayNum);
  if (uVar8 != 0xffffffff) {
    uVar9 = 0;
    if ((int)uVar8 < (this->CVars).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar2 = (this_00->AllocatorInstance).Data;
    _Dst = pFVar2 + (longlong)(int)uVar8 * 0x18;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar8 * 0x18);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar7 = (this->CVars).ArrayNum + ~uVar8;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar7 * 0x18);
    }
    piVar1 = &(this->CVars).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this_00->AllocatorInstance,(this->CVars).ArrayNum,&(this->CVars).ArrayMax);
    return true;
  }
  return false;
}

// SetupForPipelineImpl @ 14ddb6080

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineConsoleVariableSetting::SetupForPipelineImpl
          (UMoviePipelineConsoleVariableSetting *this,UMoviePipeline *param_1)

{
  ApplyCVarSettings(this,true);
  return;
}

// StaticRegisterNativesUMoviePipelineConsoleVariableSetting @ 14ddb6b70

void __cdecl
UMoviePipelineConsoleVariableSetting::StaticRegisterNativesUMoviePipelineConsoleVariableSetting
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TeardownForPipelineImpl @ 14ddb6bc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineConsoleVariableSetting::TeardownForPipelineImpl
          (UMoviePipelineConsoleVariableSetting *this,UMoviePipeline *param_1)

{
  ApplyCVarSettings(this,false);
  return;
}

// UpdateConsoleVariableEnableState @ 14ddb6dd0

bool __thiscall
UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState
          (UMoviePipelineConsoleVariableSetting *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState_::__l2::<lambda_1>_>
                    (&this->CVars,(<lambda_1>)param_1,(this->CVars).ArrayNum);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->CVars).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (this->CVars).AllocatorInstance.Data[(longlong)(int)uVar4 * 0x18 + 0x14] =
       (FScriptContainerElement)param_2;
  return true;
}

// execAddConsoleVariable @ 14ddb70c0

void __cdecl
UMoviePipelineConsoleVariableSetting::execAddConsoleVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FProperty *pFVar2;
  ForAnyElementType FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMoviePipelineConsoleVariableEntry *pFVar7;
  longlong lVar8;
  float local_res8 [2];
  FString local_38;
  FMoviePipelineConsoleVariableEntry local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = param_1 + 3;
  pFVar7 = FMoviePipelineConsoleVariableEntry::FMoviePipelineConsoleVariableEntry
                     (&local_28,&local_38,local_res8[0],true);
  if ((*(FScriptContainerElement **)pUVar1 <= pFVar7) &&
     (pFVar7 < (FMoviePipelineConsoleVariableEntry *)
               (*(FScriptContainerElement **)pUVar1 + (longlong)*(int *)&param_1[3].field_0xc * 0x18
               ))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&param_1[3].field_0x8;
  if (iVar6 == *(int *)&param_1[3].field_0xc) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)pUVar1,(int *)&param_1[3].field_0xc);
  }
  lVar8 = (longlong)iVar6;
  *(int *)&param_1[3].field_0x8 = iVar6 + 1;
  FVar3.Data = *(FScriptContainerElement **)pUVar1;
  *(undefined8 *)(FVar3.Data + lVar8 * 0x18) = 0;
  *(FScriptContainerElement **)(FVar3.Data + lVar8 * 0x18) =
       (pFVar7->Name).Data.AllocatorInstance.Data;
  (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(FVar3.Data + lVar8 * 0x18 + 8) = (pFVar7->Name).Data.ArrayNum;
  *(int *)(FVar3.Data + lVar8 * 0x18 + 0xc) = (pFVar7->Name).Data.ArrayMax;
  (pFVar7->Name).Data.ArrayNum = 0;
  (pFVar7->Name).Data.ArrayMax = 0;
  *(float *)(FVar3.Data + lVar8 * 0x18 + 0x10) = pFVar7->Value;
  FVar3.Data[lVar8 * 0x18 + 0x14] = (FScriptContainerElement)pFVar7->bIsEnabled;
  if (local_28.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Name.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 1;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddOrUpdateConsoleVariable @ 14ddb72a0

void __cdecl
UMoviePipelineConsoleVariableSetting::execAddOrUpdateConsoleVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_res10 [2];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AddOrUpdateConsoleVariable
                    ((UMoviePipelineConsoleVariableSetting *)param_1,&local_18,local_res10[0]);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetConsoleVariables @ 14ddb73a0

void __cdecl
UMoviePipelineConsoleVariableSetting::execGetConsoleVariables
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FMoviePipelineConsoleVariableEntry *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[3].field_0x8;
  pFVar1 = *(FMoviePipelineConsoleVariableEntry **)(param_1 + 3);
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FMoviePipelineConsoleVariableEntry,FMoviePipelineConsoleVariableEntry,int>
              (local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FMoviePipelineConsoleVariableEntry,int>
              (*(FMoviePipelineConsoleVariableEntry **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FMoviePipelineConsoleVariableEntry,int>
            ((FMoviePipelineConsoleVariableEntry *)local_18.Data,iVar2);
  if ((FMoviePipelineConsoleVariableEntry *)local_18.Data !=
      (FMoviePipelineConsoleVariableEntry *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execRemoveConsoleVariable @ 14ddb74b0

void __cdecl
UMoviePipelineConsoleVariableSetting::execRemoveConsoleVariable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *this;
  void *_Dst;
  FProperty *pFVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_res10 [2];
  <lambda_1> local_res18;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = param_1 + 3;
  if (local_res10[0] == 0) {
    uVar5 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l2::<lambda_2>_>
                      ((TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *)
                       this,&local_28,*(int *)&param_1[3].field_0x8);
    if (uVar5 == 0xffffffff) {
      bVar7 = false;
    }
    else {
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&param_1[3].field_0x8) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar5 * 0x18);
      pvVar2 = *(void **)(*(longlong *)this + (longlong)(int)uVar5 * 0x18);
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      iVar4 = *(int *)&param_1[3].field_0x8 + ~uVar5;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar4 * 0x18);
      }
      *(int *)&param_1[3].field_0x8 = *(int *)&param_1[3].field_0x8 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this,*(int *)&param_1[3].field_0x8,
                 (int *)&param_1[3].field_0xc);
      bVar7 = true;
    }
  }
  else {
    local_res18.Name = &local_28;
    iVar4 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
            RemoveAll<_UMoviePipelineConsoleVariableSetting::RemoveConsoleVariable_::__l5::<lambda_1>_>
                      ((TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *)
                       this,&local_res18);
    bVar7 = iVar4 != 0;
  }
  *(bool *)param_3 = bVar7;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execUpdateConsoleVariableEnableState @ 14ddb76a0

void __cdecl
UMoviePipelineConsoleVariableSetting::execUpdateConsoleVariableEnableState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar7 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UMoviePipelineConsoleVariableSetting::UpdateConsoleVariableEnableState_::__l2::<lambda_1>_>
                    ((TArray<FMoviePipelineConsoleVariableEntry,TSizedDefaultAllocator<32>_> *)
                     (param_1 + 3),(FString *)&local_28,*(int *)&param_1[3].field_0x8);
  if (uVar5 == 0xffffffff) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar5 < *(int *)&param_1[3].field_0x8) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
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
    *(bool *)(*(longlong *)(param_1 + 3) + 0x14 + (longlong)(int)uVar5 * 0x18) = bVar7;
    uVar4 = 1;
  }
  *(undefined1 *)param_3 = uVar4;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

