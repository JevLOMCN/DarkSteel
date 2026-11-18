// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// AddVisualizationMode @ 147cd3ed0

void __thiscall
FGPUSkinCacheVisualizationData::AddVisualizationMode
          (FGPUSkinCacheVisualizationData *this,wchar_t *param_1,FText *param_2,FText *param_3,
          FModeType param_4)

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
  TSet<TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>,FDefaultSetAllocator>
              *)&this->ModeMap,&local_res8,(bool *)&local_res20);
  pFVar5 = (FString *)(*(longlong *)&this->ModeMap + (longlong)(int)local_res8.Key * 0x50 + 8);
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
  return;
}

// ConfigureConsoleCommand @ 147ce5e60

void __thiscall
FGPUSkinCacheVisualizationData::ConfigureConsoleCommand(FGPUSkinCacheVisualizationData *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint *puVar8;
  int iVar9;
  FString local_a8;
  FString local_98;
  TMap<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar9 = 0;
  local_88 = &this->ModeMap;
  local_78 = &(this->ModeMap).field_0x10;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  iVar6 = *(int *)&(this->ModeMap).field_0x28;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = iStack_80;
  iStack_6c = 0;
  if (iVar6 != 0) {
    puVar8 = *(uint **)&(this->ModeMap).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_78;
    }
    uVar2 = *puVar8;
    local_68 = iVar9;
    iStack_80 = iVar9;
    while (uVar2 == 0) {
      lVar5 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_147ce5f0d;
      uVar2 = puVar8[lVar5 + 1];
    }
    uStack_7c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_7c * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar5;
    if (iVar6 < iStack_6c) {
      iStack_6c = iVar6;
    }
  }
LAB_147ce5f0d:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar6) {
    do {
      ::FString::PrintfImpl(&local_98,L" \'%s\' ");
      iVar6 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar6 = iVar9;
      }
      ::FString::AppendChars(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar6);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"Specifies which visualization mode to display:");
  iVar6 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar6 = iVar9;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar6);
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
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.SkinCache.Visualize",L"",pwVar7,1);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetModeDisplayName @ 147d092f0

FText * __thiscall
FGPUSkinCacheVisualizationData::GetModeDisplayName
          (FGPUSkinCacheVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
           ::Find((TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                   *)&this->ModeMap,*param_1);
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

// GetModeType @ 147d09430

FModeType __thiscall
FGPUSkinCacheVisualizationData::GetModeType(FGPUSkinCacheVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
           ::Find((TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                   *)&this->ModeMap,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ModeType;
  }
  return Num;
}

// Initialize @ 147d184a0

void __thiscall FGPUSkinCacheVisualizationData::Initialize(FGPUSkinCacheVisualizationData *this)

{
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if ((this == (FGPUSkinCacheVisualizationData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  if (this->bIsInitialized == (atomic<bool>)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"FGPUSkinCacheVisualizationData",L"OverviewDesc",
                        L"Skin cache on/off, recompute tangents on/off");
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"FGPUSkinCacheVisualizationData",L"Overview",L"Overview");
    AddVisualizationMode(this,L"Overview",pFVar5,pFVar4,Overview);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FGPUSkinCacheVisualizationData",L"MemoryDesc",L"Memory usage");
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"FGPUSkinCacheVisualizationData",L"Memory",L"Memory");
    AddVisualizationMode(this,L"Memory",pFVar5,pFVar4,Memory);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    bVar3 = IsRayTracingEnabled();
    if (bVar3) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"FGPUSkinCacheVisualizationData",L"RayTracingLODOffsetDesc",
                          L"Ray Tracing LOD index offset from rasterization");
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_28,L"FGPUSkinCacheVisualizationData",L"RayTracingLODOffset",
                          L"RayTracingLODOffset");
      AddVisualizationMode(this,L"RayTracingLODOffset",pFVar5,pFVar4,RayTracingLODOffset);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    ConfigureConsoleCommand(this);
    LOCK();
    this->bIsInitialized = (atomic<bool>)0x1;
    UNLOCK();
  }
  if (this != (FGPUSkinCacheVisualizationData *)0x0) {
    LOCK();
    aVar1 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
  }
  return;
}

// IsActive @ 147d1a010

bool __thiscall FGPUSkinCacheVisualizationData::IsActive(FGPUSkinCacheVisualizationData *this)

{
  if (this->bIsInitialized != (atomic<bool>)0x0) {
    return this->ActiveVisualizationModeType != Num;
  }
  return false;
}

// SetActiveMode @ 147d28ba0

void __thiscall
FGPUSkinCacheVisualizationData::SetActiveMode
          (FGPUSkinCacheVisualizationData *this,FModeType param_1,FName *param_2)

{
  this->ActiveVisualizationModeType = param_1;
  this->ActiveVisualizationModeName = *param_2;
  return;
}

// Update @ 147d34a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGPUSkinCacheVisualizationData::Update(FGPUSkinCacheVisualizationData *this,FName *param_1)

{
  int iVar1;
  FModeRecord *pFVar2;
  IConsoleManager *pIVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FName local_res8;
  wchar_t *local_18;
  int local_10;
  bool bVar6;
  
  bVar6 = false;
  bVar5 = false;
  if (this->bIsInitialized != (atomic<bool>)0x0) {
    this->ActiveVisualizationModeType = Num;
    (this->ActiveVisualizationModeName).ComparisonIndex = 0;
    (this->ActiveVisualizationModeName).Number = 0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar3 = IConsoleManager::Get();
      ICVarVisualize =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.SkinCache.Visualize",1);
      _Init_thread_footer(&::_TSS0);
    }
    bVar5 = bVar6;
    if (ICVarVisualize != (IConsoleVariable *)0x0) {
      (**(code **)(*(longlong *)ICVarVisualize + 0xd8))(ICVarVisualize,&local_18);
      if ((1 < local_10) && (iVar1 = FGenericPlatformStricmp::Stricmp(local_18,L"off"), iVar1 != 0))
      {
        pwVar4 = L"";
        if (local_10 != 0) {
          pwVar4 = local_18;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"none");
        if (iVar1 != 0) {
          pwVar4 = L"";
          if (local_10 != 0) {
            pwVar4 = local_18;
          }
          ::FName::FName(&local_res8,pwVar4);
          pFVar2 = TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                   ::Find((TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                           *)&this->ModeMap,local_res8);
          if ((pFVar2 == (FModeRecord *)0x0) || (pFVar2->ModeType == Num)) {
            if (2 < (byte)LogGPUSkinCacheVisualization._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogGPUSkinCacheVisualization);
            }
          }
          else {
            this->ActiveVisualizationModeType = pFVar2->ModeType;
            this->ActiveVisualizationModeName = local_res8;
            bVar5 = true;
          }
        }
      }
      if (local_18 != (wchar_t *)0x0) {
        FMemory::Free(local_18);
      }
    }
    if ((((this->ActiveVisualizationModeType == Num) && (*param_1 != (FName)0x0)) &&
        (pFVar2 = TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                  ::Find((TMapBase<FName,FGPUSkinCacheVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGPUSkinCacheVisualizationData::FModeRecord,0>_>
                          *)&this->ModeMap,*param_1), pFVar2 != (FModeRecord *)0x0)) &&
       (pFVar2->ModeType != Num)) {
      this->ActiveVisualizationModeType = pFVar2->ModeType;
      this->ActiveVisualizationModeName = *param_1;
    }
  }
  return bVar5;
}

