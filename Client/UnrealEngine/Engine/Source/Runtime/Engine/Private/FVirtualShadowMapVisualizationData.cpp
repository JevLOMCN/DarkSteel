// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// AddVisualizationMode @ 1489ca300

void __thiscall
FVirtualShadowMapVisualizationData::AddVisualizationMode
          (FVirtualShadowMapVisualizationData *this,wchar_t *param_1,FText *param_2,FText *param_3,
          FModeType param_4,int param_5,EViewModeIndex param_6)

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
  TSet<TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord>,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>,FDefaultSetAllocator>
              *)&this->ModeMap,&local_res8,(bool *)&local_res20);
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
  *(EViewModeIndex *)&pFVar5[4].Data.AllocatorInstance.Data = param_6;
  return;
}

// ConfigureConsoleCommand @ 1489d22e0

void __thiscall
FVirtualShadowMapVisualizationData::ConfigureConsoleCommand
          (FVirtualShadowMapVisualizationData *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  bool bVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  TMap<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  TMap<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FString local_40;
  
  iVar14 = 0;
  local_108 = &this->ModeMap;
  local_f8 = &(this->ModeMap).field_0x10;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  iVar11 = *(int *)&(this->ModeMap).field_0x28;
  iVar15 = 0;
  uStack_fc = 1;
  iStack_100 = iVar15;
  local_e8 = iVar15;
  iStack_ec = 0;
  if (iVar11 != 0) {
    puVar13 = *(uint **)&(this->ModeMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_f8;
    }
    uVar2 = *puVar13;
    local_e8 = iVar14;
    iStack_100 = iVar14;
    while (uVar2 == 0) {
      lVar9 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_1489d2390;
      uVar2 = puVar13[lVar9 + 1];
    }
    uStack_fc = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_fc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_ec = local_e8 + -1 + (int)lVar9;
    if (iVar11 < iStack_ec) {
      iStack_ec = iVar11;
    }
  }
LAB_1489d2390:
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  TStack_d0._28_4_ = iStack_ec;
  TStack_d0.BaseBitIndex = local_e8;
  iStack_e4 = iStack_ec;
  local_d8 = local_108;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f8;
  TStack_d0.CurrentBitIndex = iStack_ec;
  if (iStack_ec < iVar11) {
    do {
      lVar9 = (longlong)TStack_d0.CurrentBitIndex * 0x58 + *(longlong *)local_d8;
      pFVar6 = ::FString::FString(&local_40,L"\n  ");
      iVar11 = (pFVar6->Data).ArrayNum;
      iVar10 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar10 = iVar14;
      }
      ::FString::AppendChars(&local_118,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar10);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      iVar11 = *(int *)(lVar9 + 0x10);
      iVar10 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar10 = iVar14;
      }
      ::FString::AppendChars(&local_118,*(wchar_t **)(lVar9 + 8),iVar10);
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
  }
  ::FString::operator=
            (&this->ConsoleDocumentationVisualizationMode,
             L"When the viewport view-mode is set to \'Virtual Shadow Map Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
            );
  iVar11 = local_118.Data.ArrayNum + -1;
  if (local_118.Data.ArrayNum == 0) {
    iVar11 = iVar15;
  }
  ::FString::AppendChars
            (&this->ConsoleDocumentationVisualizationMode,
             (wchar_t *)local_118.Data.AllocatorInstance.Data,iVar11);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->ConsoleDocumentationVisualizationMode).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(this->ConsoleDocumentationVisualizationMode).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 8))
            (IConsoleManager::Singleton,L"r.Shadow.Virtual.Visualize",L"",pwVar12,1);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_80);
  local_68 = &local_140;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_140);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`FVirtualShadowMapVisualizationData::ConfigureConsoleCommand'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = this;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  (*pcVar3)(pIVar4,L"r.Shadow.Virtual.Visualize.NextLight",
            L"Set `r.Shadow.Virtual.Visualize.LightName` to the next light.",&local_148,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_b0);
  if ((local_140.DelegateSize != 0) &&
     (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_140,0,0,0x10);
    local_140.DelegateSize = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_140.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_60);
  local_48 = &local_128;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy,`FVirtualShadowMapVisualizationData::ConfigureConsoleCommand'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar7[3] = this;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  (*pcVar3)(pIVar4,L"r.Shadow.Virtual.Visualize.PrevLight",
            L"Set `r.Shadow.Virtual.Visualize.LightName` to the previous light.",&local_130,1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_98);
  if ((local_128.DelegateSize != 0) &&
     (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_128.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// GetModeDisplayName @ 1489ea9e0

FText * __thiscall
FVirtualShadowMapVisualizationData::GetModeDisplayName
          (FVirtualShadowMapVisualizationData *this,FText *__return_storage_ptr__,FName *param_1)

{
  ITextData *pIVar1;
  FModeRecord *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
           ::Find((TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
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

// GetModeID @ 1489eab30

int __thiscall
FVirtualShadowMapVisualizationData::GetModeID
          (FVirtualShadowMapVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
           ::Find((TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                   *)&this->ModeMap,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ModeID;
  }
  return -1;
}

// GetViewModeIndexForVisualization @ 1489f0800

EViewModeIndex __thiscall
FVirtualShadowMapVisualizationData::GetViewModeIndexForVisualization
          (FVirtualShadowMapVisualizationData *this,FName *param_1)

{
  FModeRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
           ::Find((TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                   *)&this->ModeMap,*param_1);
  if (pFVar1 != (FModeRecord *)0x0) {
    return pFVar1->ViewModeIndex;
  }
  return VMI_VisualizeVirtualShadowMap;
}

// Initialize @ 1489f4d70

void __thiscall
FVirtualShadowMapVisualizationData::Initialize(FVirtualShadowMapVisualizationData *this)

{
  FText *pFVar1;
  FText *pFVar2;
  FText local_28;
  FText local_18;
  
  if (this->bIsInitialized == false) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"ShadowMaskDesc",
                        L"The final shadow mask that is used by shading");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"ShadowMask",L"Shadow Mask"
                       );
    AddVisualizationMode(this,L"mask",pFVar2,pFVar1,Standard,1,VMI_VisualizeVirtualShadowMap);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"ClipmapOrMipDesc",
                        L"The chosen clipmap (for directional lights) or mip (for local lights) level"
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"ClipmapOrMip",
                        L"Clipmap/Mip Level");
    AddVisualizationMode(this,L"mip",pFVar2,pFVar1,Standard,2,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"VirtualPageDesc",
                        L"Visualization of the virtual page address");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"VirtualPage",
                        L"Virtual Page");
    AddVisualizationMode(this,L"vpage",pFVar2,pFVar1,Standard,4,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"CachedPageDesc",
                        L"Cached pages are tinted green, uncached are red. Pages where only the static page is cached (dynamic uncached) are blue."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"CachedPage",L"Cached Page"
                       );
    AddVisualizationMode(this,L"cache",pFVar2,pFVar1,Standard,8,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"NaniteOverdrawDesc",
                        L"Nanite overdraw into mapped pages");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"NaniteOverdraw",
                        L"Nanite Overdraw");
    AddVisualizationMode
              (this,L"naniteoverdraw",pFVar2,pFVar1,Standard,0x400,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"ShadowCastersDesc",
                        L"Visualize objects that cast shadows, and which type of shadow map they invalidate."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"ShadowCasters",
                        L"Shadow Casters");
    AddVisualizationMode(this,L"casters",pFVar2,pFVar1,Standard,0x800,VMI_ShadowCasters);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"SMRTRayCountDesc",
                        L"Rays evaluated per pixel: red is more, green is fewer. Penumbra regions require more rays and are more expensive."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"SMRTRayCount",
                        L"SMRT Ray Count");
    AddVisualizationMode(this,L"raycount",pFVar2,pFVar1,Advanced,0x10,VMI_VisualizeVirtualShadowMap)
    ;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"DirtyPageDebugDesc",
                        L"Show the pages marked as dirty.");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"DirtyPage",L"Dirty Page");
    AddVisualizationMode(this,L"dirty",pFVar2,pFVar1,Advanced,0x80,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"InvalidPageDebugDesc",
                        L"Show the pages marked for GPU-driven invalidation (World Position Offset)."
                       );
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"InvalidPage",
                        L"GPU Invalidated Page");
    AddVisualizationMode(this,L"invalid",pFVar2,pFVar1,Advanced,0x100,VMI_VisualizeVirtualShadowMap)
    ;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"MergedPageDebugDesc",
                        L"Show the pages that were merged.");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"MergedPage",L"Merged Page"
                       );
    AddVisualizationMode(this,L"merged",pFVar2,pFVar1,Advanced,0x200,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"GeneralDebugDesc",
                        L"General-purpose debug for use during shader development");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"GeneralDebug",
                        L"General Debug");
    AddVisualizationMode(this,L"debug",pFVar2,pFVar1,Advanced,0x40,VMI_VisualizeVirtualShadowMap);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"FVirtualShadowMapVisualizationData",L"ClipmapVirtualSpaceDesc",
                        L"Visualization of the clipmap virtual address space and mapped pages");
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"FVirtualShadowMapVisualizationData",L"ClipmapVirtualSpace",
                        L"Clipmap Virtual Address Space");
    AddVisualizationMode
              (this,L"clipmapvirtual",pFVar2,pFVar1,Advanced,0x20,VMI_VisualizeVirtualShadowMap);
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

// IsActive @ 1489f87f0

bool __thiscall
FVirtualShadowMapVisualizationData::IsActive(FVirtualShadowMapVisualizationData *this)

{
  if (this->bIsInitialized != false) {
    return this->ActiveVisualizationModeID != -1;
  }
  return false;
}

// IsVSMViewMode @ 1489fa160

bool __thiscall
FVirtualShadowMapVisualizationData::IsVSMViewMode
          (FVirtualShadowMapVisualizationData *this,EViewModeIndex param_1)

{
  if ((param_1 != VMI_VisualizeVirtualShadowMap) && (param_1 != VMI_ShadowCasters)) {
    return false;
  }
  return true;
}

// SetActiveMode @ 148a14510

void __thiscall
FVirtualShadowMapVisualizationData::SetActiveMode
          (FVirtualShadowMapVisualizationData *this,int param_1,FName *param_2)

{
  this->ActiveVisualizationModeID = param_1;
  this->ActiveVisualizationModeName = *param_2;
  return;
}

// Update @ 148a1dd20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVirtualShadowMapVisualizationData::Update(FVirtualShadowMapVisualizationData *this,FName *param_1)

{
  int iVar1;
  FModeRecord *pFVar2;
  IConsoleManager *pIVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FName local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar5 = false;
  if (this->bIsInitialized == false) {
    return false;
  }
  this->ActiveVisualizationModeID = -1;
  (this->ActiveVisualizationModeName).ComparisonIndex = 0;
  (this->ActiveVisualizationModeName).Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar3 = IConsoleManager::Get();
    ICVarVisualize =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Shadow.Virtual.Visualize",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (ICVarVisualize != (IConsoleVariable *)0x0) {
    (**(code **)(*(longlong *)ICVarVisualize + 0xd8))(ICVarVisualize,&local_18);
    if ((1 < local_10) && (iVar1 = FGenericPlatformStricmp::Stricmp(local_18,L"off"), iVar1 != 0)) {
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
        pFVar2 = TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                 ::Find((TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                         *)&this->ModeMap,local_res8);
        if ((pFVar2 == (FModeRecord *)0x0) || (pFVar2->ModeID == -1)) {
          if (2 < (byte)LogVirtualShadowMapVisualization._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogVirtualShadowMapVisualization);
          }
        }
        else {
          this->ActiveVisualizationModeID = pFVar2->ModeID;
          bVar5 = true;
          this->ActiveVisualizationModeName = local_res8;
        }
      }
    }
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free(local_18);
    }
  }
  if ((((this->ActiveVisualizationModeID == -1) && (*param_1 != (FName)0x0)) &&
      (pFVar2 = TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                ::Find((TMapBase<FName,FVirtualShadowMapVisualizationData::FModeRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVirtualShadowMapVisualizationData::FModeRecord,0>_>
                        *)&this->ModeMap,*param_1), pFVar2 != (FModeRecord *)0x0)) &&
     (pFVar2->ModeID != -1)) {
    this->ActiveVisualizationModeID = pFVar2->ModeID;
    this->ActiveVisualizationModeName = *param_1;
  }
  return bVar5;
}

