// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ConsoleVariablesEditorRuntime
// Functions: 32

// StaticClass @ 14de362b0

UClass * __cdecl UConsoleVariablesAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ConsoleVariablesEditorRuntime",L"ConsoleVariablesAsset",
               &Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton,
               StaticRegisterNativesUConsoleVariablesAsset,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConsoleVariablesAsset>,
               InternalVTableHelperCtorCaller<UConsoleVariablesAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton;
}

// UConsoleVariablesAsset @ 14de36d00

UConsoleVariablesAsset * __thiscall
UConsoleVariablesAsset::UConsoleVariablesAsset(UConsoleVariablesAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
  (this->VariableCollectionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VariableCollectionDescription).Data.ArrayNum = 0;
  (this->VariableCollectionDescription).Data.ArrayMax = 0;
  (this->SavedCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedCommands).ArrayNum = 0;
  (this->SavedCommands).ArrayMax = 0;
  return this;
}

// UConsoleVariablesAsset @ 14de36d50

UConsoleVariablesAsset * __thiscall
UConsoleVariablesAsset::UConsoleVariablesAsset
          (UConsoleVariablesAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
  (this->VariableCollectionDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->VariableCollectionDescription).Data.ArrayNum = 0;
  (this->VariableCollectionDescription).Data.ArrayMax = 0;
  (this->SavedCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SavedCommands).ArrayNum = 0;
  (this->SavedCommands).ArrayMax = 0;
  return this;
}

// ~UConsoleVariablesAsset @ 14de36dc0

void __thiscall UConsoleVariablesAsset::~UConsoleVariablesAsset(UConsoleVariablesAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConsoleVariableTrackInterface__;
  DestructItems<FConsoleVariablesEditorAssetSaveData,int>
            ((FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data,
             (this->SavedCommands).ArrayNum);
  pFVar1 = (this->SavedCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VariableCollectionDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneConsoleVariableTrackInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddFrom @ 14de37000

void __thiscall
UConsoleVariablesAsset::AddFrom(UConsoleVariablesAsset *this,UConsoleVariablesAsset *param_1)

{
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  wchar_t *_Str1;
  ForAnyElementType _Str2;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FString local_78;
  FString local_68;
  FScriptContainerElement local_58;
  
  local_res18 = (param_1->SavedCommands).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  pFVar13 = (param_1->SavedCommands).AllocatorInstance.Data;
  local_res20 = pFVar13 + uVar9 * 0x28;
  pFVar12 = pFVar13 + 0x10;
  do {
    pFVar4 = local_res20;
    if ((param_1->SavedCommands).ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FConsoleVariablesEditorAssetSaveData_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar4) {
      return;
    }
    pTVar1 = &this->SavedCommands;
    ::FString::FString(&local_78,(FString *)pFVar13);
    ::FString::FString(&local_68,(FString *)pFVar12);
    iVar8 = local_78.Data.ArrayNum;
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
    local_58 = pFVar12[0x10];
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    pFVar4 = pFVar10 + (longlong)(this->SavedCommands).ArrayNum * 0x28;
    for (; pFVar10 != pFVar4; pFVar10 = pFVar10 + 0x28) {
      _Str2.Data = (FScriptContainerElement *)L"";
      if (iVar8 != 0) {
        _Str2.Data = FVar11.Data;
      }
      if (*(int *)(pFVar10 + 8) == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)pFVar10;
      }
      iVar7 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
      if (iVar7 == 0) {
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar11.Data = local_78.Data.AllocatorInstance.Data;
        }
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        pFVar4 = pFVar10 + 0x10;
        if (pFVar4 != pFVar12) {
          iVar8 = *(int *)(pFVar12 + 8);
          pFVar3 = pFVar10 + 0x1c;
          _Src = *(void **)pFVar12;
          *(int *)(pFVar10 + 0x18) = iVar8;
          if ((iVar8 == 0) && (*(int *)pFVar3 == 0)) {
            *(int *)pFVar3 = 0;
            pFVar10[0x20] = (FScriptContainerElement)0x1;
            goto LAB_14de371c3;
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,*(int *)pFVar3,(ForAnyElementType *)pFVar4,iVar8,(int *)pFVar3);
          if (iVar8 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar4,_Src,(longlong)iVar8 * 2);
          }
        }
        pFVar10[0x20] = (FScriptContainerElement)0x1;
        goto LAB_14de371c3;
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      FVar11.Data = local_78.Data.AllocatorInstance.Data;
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + (longlong)(this->SavedCommands).ArrayMax * 0x28)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->SavedCommands).ArrayNum;
    piVar2 = &(this->SavedCommands).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SavedCommands).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
    ::FString::FString((FString *)pFVar4,(FString *)pFVar13);
    ::FString::FString((FString *)(pFVar4 + 0x10),(FString *)pFVar12);
    pFVar4[0x20] = pFVar12[0x10];
LAB_14de371c3:
    uVar9 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 0x28;
    pFVar12 = pFVar12 + 0x28;
  } while( true );
}

// AddOrSetConsoleObjectSavedData @ 14de372a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UConsoleVariablesAsset::AddOrSetConsoleObjectSavedData
          (UConsoleVariablesAsset *this,FConsoleVariablesEditorAssetSaveData *param_1)

{
  int *piVar1;
  FScriptContainerElement *this_00;
  FConsoleVariablesEditorAssetSaveData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  RemoveConsoleVariable(this,&param_1->CommandName);
  pFVar2 = (FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->SavedCommands).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->SavedCommands).ArrayNum;
  piVar1 = &(this->SavedCommands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&(this->SavedCommands).AllocatorInstance,piVar1);
  }
  (this->SavedCommands).ArrayNum = iVar5 + 1;
  this_00 = (this->SavedCommands).AllocatorInstance.Data + (longlong)iVar5 * 0x28;
  ::FString::FString((FString *)this_00,&param_1->CommandName);
  ::FString::FString((FString *)(this_00 + 0x10),&param_1->CommandValueAsString);
  *(ECheckBoxState *)
   &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_00[0x20].field_0x0)->AllocatorInstance).
    Data = param_1->CheckedState;
  iVar5 = (this->SavedCommands).ArrayNum;
  pFVar2 = (FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar5;
  if (iVar5 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,&local_18,iVar5,&local_c);
    ConstructItems<FConsoleVariablesEditorAssetSaveData,FConsoleVariablesEditorAssetSaveData,int>
              (local_18.Data,pFVar2,iVar5);
  }
  uVar7 = 0;
  iVar5 = local_10;
  if (0 < local_10) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar5) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar5 = local_10, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (6 < (byte)LogConsoleVariablesEditorRuntime._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogConsoleVariablesEditorRuntime);
        iVar5 = local_10;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  DestructItems<FConsoleVariablesEditorAssetSaveData,int>
            ((FConsoleVariablesEditorAssetSaveData *)local_18.Data,iVar5);
  if ((FConsoleVariablesEditorAssetSaveData *)local_18.Data !=
      (FConsoleVariablesEditorAssetSaveData *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// CopyFrom @ 14de374b0

void __thiscall
UConsoleVariablesAsset::CopyFrom(UConsoleVariablesAsset *this,UConsoleVariablesAsset *param_1)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  iVar2 = (param_1->VariableCollectionDescription).Data.ArrayNum;
  pFVar3 = (param_1->VariableCollectionDescription).Data.AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,pFVar3,(longlong)iVar2 * 2);
  }
  pFVar1 = &this->VariableCollectionDescription;
  if (pFVar1 != (FString *)&local_18) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_18.Data;
    (this->VariableCollectionDescription).Data.ArrayNum = (int)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    (this->VariableCollectionDescription).Data.ArrayMax = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
            (&this->SavedCommands,&param_1->SavedCommands);
  return;
}

// ExecuteSavedCommands @ 14de375c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UConsoleVariablesAsset::ExecuteSavedCommands
          (UConsoleVariablesAsset *this,UObject *param_1,bool param_2)

{
  code *pcVar1;
  UEngine *pUVar2;
  int iVar3;
  UWorld *pUVar4;
  FOutputDeviceRedirector *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar4 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar4 == (UWorld *)0x0) {
    if (1 < (byte)LogConsoleVariablesEditorRuntime._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogConsoleVariablesEditorRuntime);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    GetSavedCommandsAsStringArray(this,&local_28,param_2);
    iVar3 = local_28.ArrayNum;
    pFVar6 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      pUVar2 = GEngine;
      if (FVar7.Data == pFVar6) break;
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      if (*(int *)(FVar7.Data + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)FVar7.Data;
      }
      (*pcVar1)(&pUVar2->_padding_,pUVar4,pwVar8,pFVar5);
      FVar7.Data = FVar7.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// FindSavedDataByCommandString @ 14de376f0

bool __thiscall
UConsoleVariablesAsset::FindSavedDataByCommandString
          (UConsoleVariablesAsset *this,FString *param_1,
          FConsoleVariablesEditorAssetSaveData *param_2,Type param_3)

{
  wchar_t *_Str1;
  FScriptContainerElement *pFVar1;
  wint_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  wchar_t *pwVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  wint_t *pwVar12;
  undefined1 local_48 [4];
  uint local_44;
  FScriptContainerElement *local_40;
  
  if ((this->SavedCommands).ArrayNum != 0) {
    iVar4 = (param_1->Data).ArrayNum;
    iVar10 = 0;
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    iVar8 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar8 = 0;
    }
    pFVar11 = pFVar1;
    while ((pFVar11 != pFVar1 + (longlong)iVar8 * 2 &&
           (iVar4 = iswspace(*(wint_t *)pFVar11), iVar4 != 0))) {
      iVar10 = iVar10 + 1;
      pFVar11 = pFVar11 + 2;
    }
    pFVar1 = pFVar1 + (longlong)iVar10 * 2;
    iVar8 = iVar8 - iVar10;
    if (iVar8 != 0) {
      lVar7 = (longlong)iVar8;
      pFVar11 = pFVar1 + (lVar7 + -1) * 2;
      do {
        iVar4 = iswspace(*(wint_t *)pFVar11);
        if (iVar4 == 0) break;
        iVar8 = iVar8 + -1;
        pFVar11 = pFVar11 + -2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    local_44 = (this->SavedCommands).ArrayNum;
    uVar6 = (ulonglong)(int)local_44;
    pFVar11 = (this->SavedCommands).AllocatorInstance.Data;
    local_40 = pFVar11 + uVar6 * 0x28;
    while( true ) {
      pFVar3 = local_40;
      if ((this->SavedCommands).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<FConsoleVariablesEditorAssetSaveData_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_48);
      }
      if (pFVar11 == pFVar3) break;
      pwVar2 = *(wint_t **)pFVar11;
      iVar4 = *(int *)(pFVar11 + 8) + -1;
      if (*(int *)(pFVar11 + 8) == 0) {
        iVar4 = 0;
      }
      iVar10 = 0;
      pwVar12 = pwVar2;
      while ((pwVar12 != pwVar2 + iVar4 && (iVar5 = iswspace(*pwVar12), iVar5 != 0))) {
        iVar10 = iVar10 + 1;
        pwVar12 = pwVar12 + 1;
      }
      _Str1 = (wchar_t *)(pwVar2 + iVar10);
      iVar4 = iVar4 - iVar10;
      if (iVar4 != 0) {
        lVar7 = (longlong)iVar4;
        pwVar9 = _Str1 + lVar7 + -1;
        do {
          iVar10 = iswspace(*pwVar9);
          if (iVar10 == 0) break;
          iVar4 = iVar4 + -1;
          pwVar9 = pwVar9 + -1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (iVar4 == iVar8) {
        if ((iVar4 != 0) && (iVar8 != 0)) {
          if (param_3 == CaseSensitive) {
            iVar10 = wcsncmp(_Str1,(wchar_t *)pFVar1,(longlong)iVar8);
          }
          else {
            iVar10 = FGenericPlatformStricmp::Strnicmp(_Str1,(wchar_t *)pFVar1,(longlong)iVar8);
          }
          if (iVar10 != 0) goto LAB_14de37861;
        }
        if (iVar4 == iVar8) {
          ::FString::operator=(&param_2->CommandName,(FString *)pFVar11);
          ::FString::operator=(&param_2->CommandValueAsString,(FString *)(pFVar11 + 0x10));
          param_2->CheckedState = pFVar11[0x20].field_0x0;
          return true;
        }
      }
LAB_14de37861:
      pFVar11 = pFVar11 + 0x28;
      uVar6 = (ulonglong)local_44;
    }
  }
  return false;
}

// GetConsoleVariablesForTrack @ 14de378d0

/* WARNING: Removing unreachable block (ram,0x00014de37a49) */
/* WARNING: Removing unreachable block (ram,0x00014de37a58) */

void __thiscall
UConsoleVariablesAsset::GetConsoleVariablesForTrack
          (UConsoleVariablesAsset *this,bool param_1,
          TArray<TTuple<FString,FString>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  
  iVar2 = (int)this->_padding_;
  piVar7 = (int *)this->_padding_;
  piVar1 = piVar7 + (longlong)iVar2 * 10;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FConsoleVariablesEditorAssetSaveData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (piVar7 == piVar1) break;
    if ((!param_1) || (*(char *)&(((FString *)(piVar7 + 8))->Data).AllocatorInstance.Data == '\x01')
       ) {
      ::FString::FString(&local_48,(FString *)piVar7);
      ::FString::FString(&local_38,(FString *)(piVar7 + 4));
      pFVar6 = (param_2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
         (((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_2->ArrayMax * 0x20 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar5 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x20;
      *(undefined8 *)pFVar6 = 0;
      *(FScriptContainerElement **)pFVar6 = local_48.Data.AllocatorInstance.Data;
      *(int *)(pFVar6 + 8) = local_48.Data.ArrayNum;
      *(int *)(pFVar6 + 0xc) = local_48.Data.ArrayMax;
      *(undefined8 *)(pFVar6 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar6 + 0x10) = local_38.Data.AllocatorInstance.Data;
      *(int *)(pFVar6 + 0x18) = local_38.Data.ArrayNum;
      *(int *)(pFVar6 + 0x1c) = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    piVar7 = piVar7 + 10;
  }
  return;
}

// GetPrivateStaticClass @ 14de37a90

UClass * __cdecl UConsoleVariablesAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ConsoleVariablesEditorRuntime",L"ConsoleVariablesAsset",
               &Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton,
               StaticRegisterNativesUConsoleVariablesAsset,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConsoleVariablesAsset>,
               InternalVTableHelperCtorCaller<UConsoleVariablesAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConsoleVariablesAsset.InnerSingleton;
}

// GetSavedCommandsAsCommaSeparatedString @ 14de37b40

FString * __thiscall
UConsoleVariablesAsset::GetSavedCommandsAsCommaSeparatedString
          (UConsoleVariablesAsset *this,FString *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  pTVar3 = GetSavedCommandsAsStringArray(this,&local_38,param_1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar2 = true;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = pTVar3->ArrayNum;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar5) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L",",1);
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)pFVar4,iVar6);
    pFVar4 = pFVar4 + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSavedCommandsAsStringArray @ 14de37c20

/* WARNING: Removing unreachable block (ram,0x00014de37e15) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UConsoleVariablesAsset::GetSavedCommandsAsStringArray
          (UConsoleVariablesAsset *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  FConsoleVariablesEditorAssetSaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = (this->SavedCommands).ArrayNum;
  pFVar1 = (FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar5;
  if (iVar5 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,&local_38,iVar5,&local_2c);
    ConstructItems<FConsoleVariablesEditorAssetSaveData,FConsoleVariablesEditorAssetSaveData,int>
              (local_38.Data,pFVar1,iVar5);
  }
  uVar10 = uVar8;
  if (0 < local_30) {
    do {
      uVar9 = (uint)uVar10;
      uVar4 = 0;
      if ((int)uVar9 < local_30) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      if ((!param_1) || (local_38.Data[uVar8 + 0x20] == (FScriptContainerElement)0x1)) {
        ::FString::PrintfImpl(&local_28,L"%s %s");
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_28) &&
           (((FScriptContainerElement *)&local_28 <
             pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = 0;
        *(FScriptContainerElement **)pFVar7 = local_28.Data.AllocatorInstance.Data;
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_28.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_28.Data.ArrayMax;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
      }
      uVar8 = uVar8 + 0x28;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < local_30);
  }
  DestructItems<FConsoleVariablesEditorAssetSaveData,int>
            ((FConsoleVariablesEditorAssetSaveData *)local_38.Data,local_30);
  if ((FConsoleVariablesEditorAssetSaveData *)local_38.Data !=
      (FConsoleVariablesEditorAssetSaveData *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// IsConsoleVariableEnabled @ 14de37ea0

bool __thiscall
UConsoleVariablesAsset::IsConsoleVariableEnabled(UConsoleVariablesAsset *this,FString *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (int)this->_padding_;
  puVar5 = (undefined8 *)this->_padding_;
  puVar1 = puVar5 + (longlong)iVar2 * 5;
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FConsoleVariablesEditorAssetSaveData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar1) {
      return false;
    }
    iVar4 = *(int *)(puVar5 + 1);
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar3) {
      if (iVar4 < 2) {
LAB_14de37f14:
        return *(char *)(puVar5 + 4) == '\x01';
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = iVar4 + iVar3 == 1;
    }
    if (bVar6) goto LAB_14de37f14;
    puVar5 = puVar5 + 5;
  } while( true );
}

// RemoveConsoleVariable @ 14de37f40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UConsoleVariablesAsset::RemoveConsoleVariable(UConsoleVariablesAsset *this,FString *param_1)

{
  FConsoleVariablesEditorAssetSaveData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FConsoleVariablesEditorAssetSaveData *local_res18 [2];
  FConsoleVariablesEditorAssetSaveData local_48;
  
  iVar7 = 0;
  iVar6 = 0;
  local_48.CommandName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.CommandName.Data.ArrayNum = 0;
  local_48.CommandName.Data.ArrayMax = 0;
  local_48.CommandValueAsString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.CommandValueAsString.Data.ArrayNum = 0;
  local_48.CommandValueAsString.Data.ArrayMax = 0;
  local_48.CheckedState = Undetermined;
  bVar3 = FindSavedDataByCommandString(this,param_1,&local_48,IgnoreCase);
  if (bVar3) {
    do {
      if (6 < (byte)LogConsoleVariablesEditorRuntime._0_1_) {
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogConsoleVariablesEditorRuntime);
      }
      pFVar1 = (FConsoleVariablesEditorAssetSaveData *)(this->SavedCommands).AllocatorInstance.Data;
      if (((pFVar1 <= &local_48) && (&local_48 < pFVar1 + (this->SavedCommands).ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_res18[0] = &local_48;
      iVar5 = TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::
              RemoveAll<_TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                        (&this->SavedCommands,(<lambda_1> *)local_res18);
      iVar6 = iVar7 + 1;
      if (iVar5 < 1) {
        iVar6 = iVar7;
      }
      bVar3 = FindSavedDataByCommandString(this,param_1,&local_48,IgnoreCase);
      iVar7 = iVar6;
    } while (bVar3);
  }
  if (local_48.CommandValueAsString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.CommandValueAsString.Data.AllocatorInstance.Data);
  }
  if (local_48.CommandName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.CommandName.Data.AllocatorInstance.Data);
  }
  return 0 < iVar6;
}

// ReplaceSavedCommands @ 14de380e0

void __thiscall
UConsoleVariablesAsset::ReplaceSavedCommands
          (UConsoleVariablesAsset *this,
          TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
            (&this->SavedCommands,param_1);
  return;
}

// SetVariableCollectionDescription @ 14de380f0

void __thiscall
UConsoleVariablesAsset::SetVariableCollectionDescription
          (UConsoleVariablesAsset *this,FString *param_1)

{
  ::FString::operator=(&this->VariableCollectionDescription,param_1);
  return;
}

// StaticRegisterNativesUConsoleVariablesAsset @ 14de38100

void __cdecl UConsoleVariablesAsset::StaticRegisterNativesUConsoleVariablesAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UConsoleVariablesAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14de38150

UObject * __thiscall UConsoleVariablesAsset::_getUObject(UConsoleVariablesAsset *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execAddFrom @ 14de38160

void __cdecl UConsoleVariablesAsset::execAddFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UConsoleVariablesAsset *local_res10;
  
  local_res10 = (UConsoleVariablesAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddFrom((UConsoleVariablesAsset *)param_1,local_res10);
  return;
}

// execAddOrSetConsoleObjectSavedData @ 14de381f0

void __cdecl
UConsoleVariablesAsset::execAddOrSetConsoleObjectSavedData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FConsoleVariablesEditorAssetSaveData *pFVar2;
  FConsoleVariablesEditorAssetSaveData local_38;
  
  local_38.CheckedState = Undetermined;
  local_38.CommandName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.CommandName.Data.ArrayNum = 0;
  local_38.CommandName.Data.ArrayMax = 0;
  local_38.CommandValueAsString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.CommandValueAsString.Data.ArrayNum = 0;
  local_38.CommandValueAsString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FConsoleVariablesEditorAssetSaveData *)param_2->MostRecentPropertyAddress !=
      (FConsoleVariablesEditorAssetSaveData *)0x0) {
    pFVar2 = (FConsoleVariablesEditorAssetSaveData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddOrSetConsoleObjectSavedData((UConsoleVariablesAsset *)param_1,pFVar2);
  if (local_38.CommandValueAsString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CommandValueAsString.Data.AllocatorInstance.Data);
  }
  if (local_38.CommandName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.CommandName.Data.AllocatorInstance.Data);
  }
  return;
}

// execCopyFrom @ 14de382c0

void __cdecl UConsoleVariablesAsset::execCopyFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  void *_Src;
  longlong lVar4;
  longlong local_res8;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(local_res8 + 0x38);
  _Src = *(void **)(local_res8 + 0x30);
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,&local_28,iVar2,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar2 * 2);
  }
  puVar1 = &param_1[1].field_0x8;
  if ((ForAnyElementType *)puVar1 != &local_28) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.Data;
    *(undefined4 *)&param_1[1].field_0x10 = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&param_1[1].field_0x14 = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
             &param_1[1].field_0x18,
             (TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
             (lVar4 + 0x40));
  return;
}

// execExecuteSavedCommands @ 14de38410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConsoleVariablesAsset::execExecuteSavedCommands(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UEngine *pUVar3;
  int iVar4;
  UWorld *pUVar5;
  FOutputDeviceRedirector *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 local_res10 [16];
  int local_res20 [2];
  UObject *local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar10 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,local_48,LogAndReturnNull);
  if (pUVar5 == (UWorld *)0x0) {
    if (1 < (byte)LogConsoleVariablesEditorRuntime._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogConsoleVariablesEditorRuntime);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    GetSavedCommandsAsStringArray((UConsoleVariablesAsset *)param_1,&local_40,bVar10);
    iVar4 = local_40.ArrayNum;
    pFVar7 = local_40.AllocatorInstance.Data + (longlong)local_40.ArrayNum * 0x10;
    FVar8.Data = local_40.AllocatorInstance.Data;
    while( true ) {
      if (local_40.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      pUVar3 = GEngine;
      if (FVar8.Data == pFVar7) break;
      pcVar2 = *(code **)(GEngine->_padding_ + 8);
      pFVar6 = GetGlobalLogSingleton();
      if (*(int *)(FVar8.Data + 8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)FVar8.Data;
      }
      (*pcVar2)(&pUVar3->_padding_,pUVar5,pwVar9,pFVar6);
      FVar8.Data = FVar8.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// execFindSavedDataByCommandString @ 14de385e0

void __cdecl
UConsoleVariablesAsset::execFindSavedDataByCommandString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FConsoleVariablesEditorAssetSaveData *pFVar3;
  byte local_res10 [8];
  FString local_58;
  FConsoleVariablesEditorAssetSaveData local_48;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.CommandName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.CommandName.Data.ArrayNum = 0;
  local_48.CommandName.Data.ArrayMax = 0;
  local_48.CommandValueAsString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.CommandValueAsString.Data.ArrayNum = 0;
  local_48.CommandValueAsString.Data.ArrayMax = 0;
  local_48.CheckedState = Undetermined;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  pFVar3 = &local_48;
  if ((FConsoleVariablesEditorAssetSaveData *)param_2->MostRecentPropertyAddress !=
      (FConsoleVariablesEditorAssetSaveData *)0x0) {
    pFVar3 = (FConsoleVariablesEditorAssetSaveData *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FindSavedDataByCommandString
                    ((UConsoleVariablesAsset *)param_1,&local_58,pFVar3,(uint)local_res10[0]);
  *(bool *)param_3 = bVar2;
  if (local_48.CommandValueAsString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.CommandValueAsString.Data.AllocatorInstance.Data);
  }
  if (local_48.CommandName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.CommandName.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSavedCommands @ 14de38770

void __cdecl
UConsoleVariablesAsset::execGetSavedCommands(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
                     &param_1[1].field_0x18);
  return;
}

// execGetSavedCommandsAsCommaSeparatedString @ 14de387a0

void __cdecl
UConsoleVariablesAsset::execGetSavedCommandsAsCommaSeparatedString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res10 [8];
  int local_res18 [2];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = GetSavedCommandsAsStringArray
                     ((UConsoleVariablesAsset *)param_1,&local_38,local_res18[0] != 0);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar3 = true;
  iVar1 = pTVar4->ArrayNum;
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar4->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar6) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar7 = *(int *)(pFVar5 + 8) + -1;
    if (*(int *)(pFVar5 + 8) == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)pFVar5,iVar7);
    pFVar5 = pFVar5 + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSavedCommandsAsStringArray @ 14de38940

void __cdecl
UConsoleVariablesAsset::execGetSavedCommandsAsStringArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
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
  pTVar2 = GetSavedCommandsAsStringArray
                     ((UConsoleVariablesAsset *)param_1,&local_18,local_res10[0] != 0);
  if (param_3 != pTVar2) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSavedCommandsCount @ 14de38a40

void __cdecl
UConsoleVariablesAsset::execGetSavedCommandsCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x20;
  return;
}

// execGetVariableCollectionDescription @ 14de38a70

void __cdecl
UConsoleVariablesAsset::execGetVariableCollectionDescription
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x10;
  _Src = *(void **)&param_1[1].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execRemoveConsoleVariable @ 14de38b50

void __cdecl
UConsoleVariablesAsset::execRemoveConsoleVariable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveConsoleVariable((UConsoleVariablesAsset *)param_1,&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execReplaceSavedCommands @ 14de38c00

void __cdecl
UConsoleVariablesAsset::execReplaceSavedCommands(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FConsoleVariablesEditorAssetSaveData,TSizedDefaultAllocator<32>_> *)
             &param_1[1].field_0x18,pTVar2);
  DestructItems<FConsoleVariablesEditorAssetSaveData,int>
            ((FConsoleVariablesEditorAssetSaveData *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((FConsoleVariablesEditorAssetSaveData *)local_18.AllocatorInstance.Data !=
      (FConsoleVariablesEditorAssetSaveData *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetVariableCollectionDescription @ 14de38cc0

void __cdecl
UConsoleVariablesAsset::execSetVariableCollectionDescription
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  ForAnyElementType _Src;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_18.Data;
  puVar4 = &param_1[1].field_0x8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((ForAnyElementType *)puVar4 != &local_18) {
    iVar3 = (int)local_10;
    lVar5 = (longlong)(int)local_10;
    puVar1 = &param_1[1].field_0x14;
    *(int *)&param_1[1].field_0x10 = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,*(int *)puVar1,(ForAnyElementType *)puVar4,(int)local_10,
                 (int *)puVar1);
      if (iVar3 != 0) {
        memcpy(*(void **)puVar4,_Src.Data,lVar5 * 2);
      }
    }
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

