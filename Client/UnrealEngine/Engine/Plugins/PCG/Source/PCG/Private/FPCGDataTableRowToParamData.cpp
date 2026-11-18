// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// CanExecuteOnlyOnMainThread @ 149b67c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDataTableRowToParamData::CanExecuteOnlyOnMainThread
          (FPCGDataTableRowToParamData *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149b79260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGDataTableRowToParamData::ExecuteInternal(FPCGDataTableRowToParamData *this,FPCGContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *pFVar4;
  uchar *puVar5;
  FPCGMetadataDomainID FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UPCGDataTableRowToParamDataSettings *pUVar10;
  UObject *this_00;
  UClass *pUVar11;
  TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
  *this_01;
  uchar **ppuVar12;
  UPCGMetadata *this_02;
  FName *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FString *pFVar17;
  FText *pFVar18;
  FPCGDataPtrWrapper *this_03;
  bool bVar19;
  bool bVar20;
  TFieldIterator<FProperty_const_> local_208;
  FName local_1f0;
  uchar *local_1e8;
  long64 local_1e0;
  FName local_1d8;
  UPCGParamData *local_1d0;
  wchar_t *local_1c8;
  int local_1c0;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FString local_170;
  FString local_160;
  FText local_150;
  FText local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FText local_100;
  FName local_f0;
  FPCGMetadataDomainID FStack_e8;
  FPCGAttributeIdentifier local_d8;
  TPersistentObjectPtr<FSoftObjectPath> local_b8;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  bVar3 = false;
  bVar19 = false;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"FPCGDataTableRowToParamData::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
                         ,0x68,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  pUVar10 = FPCGContext::GetInputSettings<UPCGDataTableRowToParamDataSettings>(param_1);
  if ((pUVar10 == (UPCGDataTableRowToParamDataSettings *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
                         ,0x6b,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  local_1f0 = pUVar10->RowName;
  local_b8.WeakPtr.ObjectIndex = *(int *)&(pUVar10->DataTable).SoftObjectPtr.field_0x0;
  local_b8.WeakPtr.ObjectSerialNumber = *(int *)&(pUVar10->DataTable).SoftObjectPtr.field_0x4;
  FSoftObjectPath::FSoftObjectPath
            (&local_b8.ObjectID,(FSoftObjectPath *)&(pUVar10->DataTable).SoftObjectPtr.field_0x8);
  this_00 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_b8);
  if (this_00 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar11->_padding_)) {
      this_01 = (TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                 *)(**(code **)(*(longlong *)this_00 + 0x2d0))(this_00);
      ppuVar12 = TMapBase<FName,unsigned_char_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char_*,0>_>
                 ::Find(this_01,local_1f0);
      if ((ppuVar12 == (uchar **)0x0) || (local_1e8 = *ppuVar12, local_1e8 == (uchar *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar14 = FText::FromName(&local_70,&local_1f0);
          pFVar17 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)this_00,&local_130,(UObject *)0x0);
          pFVar15 = FText::FromString(&local_60,pFVar17);
          pFVar18 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGDataTableRowToParamDataElement",L"NoRowFound",
                               L"FPCGDataTableRowToParamData: Data table \'{0}\' has no row named \'{1}\'"
                              );
          pFVar16 = FTextFormat::FTextFormat(&local_50,pFVar18,Default);
          pFVar14 = FText::Format<FText,FText>(&local_150,pFVar16,pFVar15,pFVar14);
          FText::ToString(pFVar14);
          bVar19 = param_1 != (FPCGContext *)0x0;
          if (bVar19) {
            FPCGContext::GetTaskName(param_1,&local_160);
            FPCGContext::GetExecutionSourceName(param_1,&local_170);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar19) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          if ((bVar19) && (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_150.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_1d0 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
        this_02 = (UPCGMetadata *)(**(code **)(local_1d0->_padding_ + 0x328))(local_1d0);
        if ((this_02 == (UPCGMetadata *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Metadata",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
                               ,0x83,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return (bool)uVar8;
        }
        local_1e0 = UPCGMetadata::AddEntry(this_02,-1);
        local_208.Struct = *(UStruct **)(this_00 + 1);
        if (local_208.Struct == (UStruct *)0x0) {
          local_208.Field = (FField *)0x0;
        }
        else {
          local_208.Field = (local_208.Struct)->ChildProperties;
        }
        local_208.InterfaceIndex = -1;
        local_208.bIncludeSuper = true;
        local_208.bIncludeDeprecated = false;
        local_208.bIncludeInterface = false;
        TFieldIterator<FProperty_const_>::IterateToNext(&local_208);
        puVar5 = local_1e8;
        pFVar4 = (FProperty *)local_208.Field;
        while (local_208.Field = (FField *)pFVar4, pFVar4 != (FProperty *)0x0) {
          (**(code **)(**(longlong **)(this_00 + 1) + 0x328))
                    (*(longlong **)(this_00 + 1),&local_1c8,pFVar4);
          if (local_1c0 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = local_1c0 + -1;
          }
          pFVar13 = ::FName::FName(&local_1b8,iVar9,local_1c8,FNAME_Add);
          local_1d8 = *pFVar13;
          FStack_e8 = PCGMetadataDomainID::Default;
          FVar6 = FStack_e8;
          FStack_e8._0_8_ = PCGMetadataDomainID::Default._0_8_;
          local_d8.MetadataDomain.Flag = FStack_e8.Flag;
          local_d8.MetadataDomain._1_3_ = FStack_e8._1_3_;
          local_d8.MetadataDomain.CustomFlag = FStack_e8.CustomFlag;
          local_d8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
          local_f0 = local_1d8;
          FStack_e8 = FVar6;
          local_d8.Name = local_1d8;
          bVar7 = UPCGMetadata::SetAttributeFromDataProperty
                            (this_02,&local_d8,&local_1e0,puVar5,pFVar4,true);
          if ((!bVar7) && (2 < (byte)LogPCG._0_1_)) {
            pFVar14 = FText::FromName(&local_90,&local_1d8);
            pFVar15 = FText::AsLocalizable_Advanced_LocText
                                (&local_180,L"PCGDataTableRowToParamDataElement",
                                 L"AttributeCreationFailed",
                                 L"Error while creating new attribute \'{0}\'. Either the property type is not supported by PCG or attribute creation failed."
                                );
            pFVar16 = FTextFormat::FTextFormat(&local_80,pFVar15,Default);
            pFVar14 = FText::Format<FText>(&local_190,pFVar16,pFVar14);
            FText::ToString(pFVar14);
            if (param_1 != (FPCGContext *)0x0) {
              FPCGContext::GetTaskName(param_1,&local_1a0);
              bVar3 = true;
              bVar19 = true;
              FPCGContext::GetExecutionSourceName(param_1,&local_1b0);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if ((bVar19) &&
               (bVar19 = false,
               local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
            if ((bVar3) &&
               (bVar3 = false,
               local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            if (local_190.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
            }
            if (local_180.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
            }
          }
          if (local_1c8 != (wchar_t *)0x0) {
            FMemory::Free(local_1c8);
          }
          local_208.Field = (FField *)pFVar4->_padding_;
          TFieldIterator<FProperty_const_>::IterateToNext(&local_208);
          pFVar4 = (FProperty *)local_208.Field;
        }
        iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
        this_03 = (FPCGDataPtrWrapper *)
                  ((param_1->OutputData).TaggedData.AllocatorInstance.Data + (longlong)iVar9 * 0x78)
        ;
        this_03[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_03->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_03->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_03[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_03[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_03[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_03[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_03[4].Data.field0_0x0 + 4) = 0;
        this_03[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_03[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_03[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_03[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_03,(UPCGData *)local_1d0);
      }
      goto LAB_149b79988;
    }
  }
  if (2 < (byte)LogPCG._0_1_) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_100,L"PCGDataTableRowToParamDataElement",L"DataTableInvalid",
                         L"FPCGDataTableRowToParamData: Data table is invalid");
    FText::ToString(pFVar14);
    bVar19 = param_1 != (FPCGContext *)0x0;
    if (bVar19) {
      FPCGContext::GetTaskName(param_1,&local_110);
      FPCGContext::GetExecutionSourceName(param_1,&local_120);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((bVar19) && (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if ((bVar19) && (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
  }
LAB_149b79988:
  if (local_b8.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_b8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149b931d0

bool __thiscall
FPCGDataTableRowToParamData::IsCacheable(FPCGDataTableRowToParamData *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149b96120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGDataTableRowToParamData::PrepareDataInternal
          (FPCGDataTableRowToParamData *this,FPCGContext *param_1)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPCGDataTableRowToParamDataSettings *pUVar4;
  size_t _Size;
  bool bVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_48;
  FSoftObjectPath local_38;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId78,"FPCGDataTableRowToParamData::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
               ,0x4e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId78);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = FPCGContext::GetInputSettings<UPCGDataTableRowToParamDataSettings>(param_1);
  if ((pUVar4 == (UPCGDataTableRowToParamDataSettings *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGDataTableRowToParamData.cpp"
                         ,0x53,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((*(longlong *)&(pUVar4->DataTable).SoftObjectPtr.field_0x8 == 0) ||
     (*(char *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = pUVar4->bSynchronousLoad;
    local_38.AssetPath.PackageName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->DataTable).SoftObjectPtr.field_0x8;
    local_38.AssetPath.PackageName.Number = *(uint *)&(pUVar4->DataTable).SoftObjectPtr.field_0xc;
    local_38.AssetPath.AssetName.ComparisonIndex.Value =
         *(uint *)&(pUVar4->DataTable).SoftObjectPtr.field_0x10;
    local_38.AssetPath.AssetName.Number = *(uint *)&(pUVar4->DataTable).SoftObjectPtr.field_0x14;
    local_38.SubPathString.Data.ArrayNum = *(int *)&(pUVar4->DataTable).SoftObjectPtr.field_0x20;
    _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
    _Src = *(void **)&(pUVar4->DataTable).SoftObjectPtr.field_0x18;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.SubPathString.Data.ArrayNum == 0) {
      local_38.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.SubPathString.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_38.SubPathString,local_38.SubPathString.Data.ArrayNum,
                 &local_38.SubPathString.Data.ArrayMax);
      memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
    }
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
    ConstructItems<FSoftObjectPath,FSoftObjectPath,int>(local_48.AllocatorInstance.Data,&local_38,1)
    ;
    bVar2 = IPCGAsyncLoadingContext::RequestResourceLoad
                      ((IPCGAsyncLoadingContext *)(param_1 + 1),param_1,&local_48,bVar2 == false);
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FSoftObjectPath *)local_48.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

