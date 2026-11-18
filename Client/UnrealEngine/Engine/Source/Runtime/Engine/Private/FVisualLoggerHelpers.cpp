// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GenerateFilename @ 1489e4b70

FString * __cdecl
FVisualLoggerHelpers::GenerateFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,double param_3,
          double param_4)

{
  ForAnyElementType FVar1;
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"%s_%s");
  ::FString::PrintfImpl(&local_38,L"%lld-%lld_");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::Replace(local_28,__return_storage_ptr__,L"VTEMP_",(wchar_t *)FVar1.Data,CaseSensitive);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GenerateTemporaryFilename @ 1489e4c40

FString * __cdecl
FVisualLoggerHelpers::GenerateTemporaryFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FDateTime this;
  FString local_18;
  
  this = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this.Ticks,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"VTEMP_%s.%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCategories @ 1489e6c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLoggerHelpers::GetCategories
          (FVisualLogEntry *param_1,
          TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FName local_res18 [2];
  FVisualLoggerCategoryVerbosityPair local_38;
  
  iVar2 = (param_1->Events).ArrayNum;
  pFVar7 = (param_1->Events).AllocatorInstance.Data;
  pFVar5 = pFVar7 + (longlong)iVar2 * 0x90;
  while( true ) {
    if ((param_1->Events).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVisualLogEvent_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    FVar1 = pFVar7[0x20];
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)pFVar7;
    }
    pFVar3 = ::FName::FName(local_res18,pwVar4);
    local_38.CategoryName = *pFVar3;
    local_38.Verbosity = (Type)FVar1;
    TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLoggerCategoryVerbosityPair>(param_2,&local_38);
    pFVar7 = pFVar7 + 0x90;
  }
  iVar2 = (param_1->LogLines).ArrayNum;
  pFVar7 = (param_1->LogLines).AllocatorInstance.Data;
  pFVar5 = pFVar7 + (longlong)iVar2 * 0x38;
  while( true ) {
    if ((param_1->LogLines).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVisualLogLine_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    local_38.CategoryName = *(FName *)(pFVar7 + 0x10);
    local_38.Verbosity = *(Type *)(pFVar7 + 0x18);
    TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLoggerCategoryVerbosityPair>(param_2,&local_38);
    pFVar7 = pFVar7 + 0x38;
  }
  iVar2 = (param_1->ElementsToDraw).ArrayNum;
  pFVar7 = (param_1->ElementsToDraw).AllocatorInstance.Data;
  pFVar5 = pFVar7 + (longlong)iVar2 * 0xc0;
  while( true ) {
    if ((param_1->ElementsToDraw).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVisualLogShapeElement_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    local_38.CategoryName = *(FName *)(pFVar7 + 0x10);
    local_38.Verbosity = *(Type *)(pFVar7 + 0x18);
    TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLoggerCategoryVerbosityPair>(param_2,&local_38);
    pFVar7 = pFVar7 + 0xc0;
  }
  iVar2 = (param_1->HistogramSamples).ArrayNum;
  pFVar3 = (FName *)(param_1->HistogramSamples).AllocatorInstance.Data;
  pFVar6 = pFVar3 + (longlong)iVar2 * 7;
  while( true ) {
    if ((param_1->HistogramSamples).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVisualLogHistogramSample_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar6) break;
    local_38.CategoryName = *pFVar3;
    local_38.Verbosity = *(Type *)&pFVar3[1].ComparisonIndex.Value;
    TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLoggerCategoryVerbosityPair>(param_2,&local_38);
    pFVar3 = pFVar3 + 7;
  }
  iVar2 = (param_1->DataBlocks).ArrayNum;
  pFVar7 = (param_1->DataBlocks).AllocatorInstance.Data;
  pFVar5 = pFVar7 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((param_1->DataBlocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FVisualLogDataBlock_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar5) break;
    local_38.CategoryName = *(FName *)(pFVar7 + 8);
    local_38.Verbosity = *(Type *)(pFVar7 + 0x10);
    TArray<FVisualLoggerCategoryVerbosityPair,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FVisualLoggerCategoryVerbosityPair>(param_2,&local_38);
    pFVar7 = pFVar7 + 0x30;
  }
  return;
}

// GetHistogramCategories @ 1489e9670

void __cdecl
FVisualLoggerHelpers::GetHistogramCategories
          (FVisualLogEntry *param_1,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *this;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FName *this_01;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pFVar10 = (param_1->HistogramSamples).AllocatorInstance.Data;
  local_res18 = (param_1->HistogramSamples).ArrayNum;
  uVar7 = (ulonglong)(int)local_res18;
  this_01 = (FName *)(pFVar10 + 0x14);
  local_res20 = pFVar10 + uVar7 * 0x38;
  local_res10 = param_2;
  do {
    pFVar2 = local_res20;
    this = local_res10;
    if ((param_1->HistogramSamples).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FVisualLogHistogramSample_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) {
      return;
    }
    pFVar5 = ::FName::ToString(this_01 + -1,&local_78);
    iVar4 = (pFVar5->Data).ArrayNum;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      pwVar8 = L"";
      iVar6 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
    this_00 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<FString>
                        ((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                          *)this,uVar3,pFVar5);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::ToString(this_01,&local_68);
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar6 = this_00->ArrayNum;
    for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)iVar6 * 0x10; pFVar9 = pFVar9 + 0x10) {
      iVar4 = *(int *)(pFVar9 + 8);
      iVar1 = (pFVar5->Data).ArrayNum;
      if (iVar4 == iVar1) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar9,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
          bVar11 = iVar4 == 0;
          goto LAB_1489e9777;
        }
LAB_1489e97eb:
        iVar6 = (int)((longlong)pFVar9 - (longlong)pFVar2 >> 4);
        goto LAB_1489e978c;
      }
      bVar11 = iVar4 + iVar1 == 1;
LAB_1489e9777:
      if (bVar11) goto LAB_1489e97eb;
    }
    iVar6 = -1;
LAB_1489e978c:
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (iVar6 == -1) {
      pFVar5 = ::FName::ToString(this_01,&local_58);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(this_00,pFVar5);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    pFVar10 = pFVar10 + 0x38;
    uVar7 = (ulonglong)local_res18;
    this_01 = this_01 + 7;
  } while( true );
}

// Serialize @ 148a12b90

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

FArchive * __cdecl
FVisualLoggerHelpers::Serialize
          (FArchive *param_1,
          TArray<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  void *_Src;
  code *pcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FArchive *pFVar8;
  undefined8 *puVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  TArray<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_> local_58;
  FCustomVersionContainer local_48;
  FCustomVersionContainer local_38;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&EVisualLoggerVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) == 0) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = 0xbfbfbbfb;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    local_48.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Versions.ArrayNum = *(int *)(puVar9 + 1);
    lVar11 = (longlong)local_48.Versions.ArrayNum;
    _Src = (void *)*puVar9;
    if (local_48.Versions.ArrayNum == 0) {
      local_48.Versions.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_48.Versions.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_48.Versions.ArrayNum,&local_48.Versions.ArrayMax);
      memcpy(local_48.Versions.AllocatorInstance.Data,_Src,lVar11 * 0x28);
    }
    FCustomVersionContainer::Serialize(&local_48,param_1,Latest);
    TArrayPrivateFriend::
    Serialize<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_>(param_1,param_2);
    FVar10.Data = local_48.Versions.AllocatorInstance.Data;
  }
  else {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    while (cVar4 == '\0') {
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0xbfbfbbfb;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      if ((local_res8[0] == 0xfafaafaf) || (local_res8[0] == 0xafaffafa)) {
        if (local_res8[0] == 0xbfbfbbfb) goto LAB_148a12c87;
        pFVar7 = ::FName::FName(&local_78,L"VisualLogger");
        FArchiveState::SetCustomVersion
                  ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID,0,*pFVar7);
        pFVar7 = ::FName::FName(&local_70,L"VisualLogger");
        FArchiveState::SetCustomVersion
                  ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID,0,*pFVar7);
        if (local_res8[0] == 0xafaffafa) {
          plVar1 = *(longlong **)&param_1->field_0x8;
          local_res18[0] = 0xffffffff;
          if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_res18);
            }
          }
          else {
            local_res18[0] = *(uint *)*plVar1;
            *plVar1 = *plVar1 + 4;
          }
          if (((int)local_res18[0] < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArchiveOldVer >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerTypes.cpp"
                                 ,0x2cb,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FArchive *)(*pcVar2)();
            return pFVar8;
          }
          pFVar7 = ::FName::FName(&local_68,L"VisualLogger");
          uVar12 = local_res18[0];
        }
        else {
          pFVar7 = ::FName::FName(&local_60,L"VisualLogger");
          uVar12 = 0;
        }
        FArchiveState::SetCustomVersion
                  ((FArchiveState *)param_1,&EVisualLoggerVersion::GUID,uVar12,*pFVar7);
      }
      else {
        if (local_res8[0] != 0xbfbfbbfb) break;
LAB_148a12c87:
        local_38.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Versions.ArrayNum = 0;
        local_38.Versions.ArrayMax = 0;
        FCustomVersionContainer::Serialize(&local_38,param_1,Latest);
        (**(code **)(*(longlong *)param_1 + 0x68))(param_1,&local_38);
        if (local_38.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Versions.AllocatorInstance.Data);
        }
      }
      TArrayPrivateFriend::
      Serialize<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_>
                (param_1,&local_58);
      if ((param_2 == &local_58) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar2)();
        return pFVar8;
      }
      iVar3 = local_58.ArrayNum;
      iVar6 = 0;
      if (local_58.ArrayNum != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xa8,8,local_58.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<FVisualLogDevice::FVisualLogEntryItem,FVisualLogDevice::FVisualLogEntryItem,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xa8,
                   (FVisualLogEntryItem *)local_58.AllocatorInstance.Data,iVar3);
        iVar6 = local_58.ArrayNum;
      }
      if ((longlong)local_58._8_8_ < 0) {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>
                  ((FVisualLogEntryItem *)local_58.AllocatorInstance.Data,iVar6);
        iVar3 = local_58.ArrayMax;
        local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa8,8,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
        }
      }
      else {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>
                  ((FVisualLogEntryItem *)local_58.AllocatorInstance.Data,iVar6);
        local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
      }
      cVar4 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
    }
    DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>
              ((FVisualLogEntryItem *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    FVar10.Data = local_58.AllocatorInstance.Data;
  }
  if ((FVisualLogEntryItem *)FVar10.Data != (FVisualLogEntryItem *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  return param_1;
}

// Serialize @ 148a12fb0

FArchive * __cdecl FVisualLoggerHelpers::Serialize(FArchive *param_1,FName *param_2)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_18;
  
  if ((param_1->field_0x28 & 1) == 0) {
    ::FName::ToString(param_2,&local_18);
    ::operator<<(param_1,&local_18);
  }
  else {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_18);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
    *param_2 = *pFVar1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

