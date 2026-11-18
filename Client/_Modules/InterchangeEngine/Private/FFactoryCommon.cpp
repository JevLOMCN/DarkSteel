// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 7

// ApplyReimportStrategyToAsset @ 14e4e43b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Interchange::FFactoryCommon::ApplyReimportStrategyToAsset
          (UObject *param_1,UInterchangeFactoryBaseNode *param_2,
          UInterchangeFactoryBaseNode *param_3,UInterchangeFactoryBaseNode *param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  EReimportStrategyFlags EVar4;
  bool bVar5;
  undefined1 auStackY_168 [32];
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_138;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Interchange::FAttributeKey,TSizedDefaultAllocator<32>_> local_118;
  FName local_108;
  FString local_100;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  ForAnyElementType local_98;
  long64 lStack_90;
  long64 local_88;
  ulong64 local_80;
  undefined8 local_78;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId352,
               "UE::Interchange::FFactoryCommon::ApplyReimportStrategyToAsset",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0x160);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId352);
  }
  if (param_4 == (UInterchangeFactoryBaseNode *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682335>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x161,"PipelineAssetNode");
    if (bVar3) {
code_r0x00014e4e4499:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_3 == (UInterchangeFactoryBaseNode *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682335>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x161,"CurrentAssetNode");
    if (bVar3) goto code_r0x00014e4e4499;
  }
  else {
    EVar4 = UInterchangeFactoryBaseNode::GetReimportStrategyFlags(param_4);
    if (EVar4 == ApplyPipelineProperties) {
      UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_4,param_1);
    }
    else if (EVar4 == ApplyEditorChangedProperties) {
      if (param_2 == (UInterchangeFactoryBaseNode *)0x0) {
        if (1 < (byte)LogInterchangeEngine._0_1_) {
          local_108.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_108.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_108,&local_100);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 0;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        UInterchangeBaseNode::CompareNodeStorage
                  ((UInterchangeBaseNode *)param_2,(UInterchangeBaseNode *)param_3,&local_118,
                   &local_128,&local_138);
        local_e8._0_8_ = (FScriptContainerElement *)0x0;
        local_98.Data = (FScriptContainerElement *)0x0;
        lStack_90 = 0;
        local_e8._8_8_ = 0;
        local_c8 = (void *)0x0;
        local_c0 = 0;
        local_bc = 0x80;
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_a8 = (void *)0x0;
        local_a0 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78._0_4_ = 0.1;
        local_78._4_4_ = 0;
        InitializeCriticalSectionAndSpinCount(&local_70,4000);
        UInterchangeBaseNode::CopyStorageAttributes
                  ((UInterchangeBaseNode *)param_4,(FAttributeStorage *)local_e8,&local_138);
        UInterchangeBaseNode::CopyStorageAttributes
                  ((UInterchangeBaseNode *)param_3,(UInterchangeBaseNode *)param_4,&local_138);
        UInterchangeFactoryBaseNode::ApplyAllCustomAttributeToObject(param_4,param_1);
        UInterchangeBaseNode::CopyStorageAttributes
                  ((FAttributeStorage *)local_e8,(UInterchangeBaseNode *)param_4,&local_138);
        DeleteCriticalSection(&local_70);
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_e8,0,local_e8._8_4_);
        iVar2 = SUB84(local_e8._8_8_,4);
        local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
        if (iVar2 != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
        }
        local_b4 = 0;
        local_c0 = 0;
        local_b8 = 0xffffffff;
        if (0x80 < local_bc) {
          local_bc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
        }
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e8._0_8_);
        }
        DestructItems<UE::Interchange::FAttributeKey,int>
                  ((FAttributeKey *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        DestructItems<UE::Interchange::FAttributeKey,int>
                  ((FAttributeKey *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        DestructItems<UE::Interchange::FAttributeKey,int>
                  ((FAttributeKey *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
      }
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AsyncFindObject @ 14e4e4760

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
UE::Interchange::FFactoryCommon::AsyncFindObject
          (UInterchangeFactoryBaseNode *param_1,UClass *param_2,UObject *param_3,FString *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FName local_res8;
  FString local_68;
  FString local_58;
  FSoftObjectPath local_48;
  
  pUVar6 = (UObject *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1 != (UInterchangeFactoryBaseNode *)0x0) {
    lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if ((lVar4 != 0) && (param_2 != (UClass *)0x0)) {
      iVar1 = (int)param_2->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &param_2->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_48.AssetPath.PackageName.Number = 0;
        local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_48.AssetPath.AssetName.Number = 0;
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
        bVar3 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(param_1,&local_48);
        if ((bVar3) &&
           (pUVar5 = FSoftObjectPath::TryLoad(&local_48,(FUObjectSerializeContext *)0x0),
           pUVar5 != (UObject *)0x0)) {
          lVar2 = *(longlong *)&pUVar5->field_0x10;
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
              (*(longlong **)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
               (longlong *)(lVar4 + 0x30))) ||
             (pUVar5 = pUVar6, (byte)LogInterchangeEngine._0_1_ < 2)) goto LAB_14e4e4926;
          local_res8 = *(FName *)(lVar2 + 0x18);
          ::FName::ToString(&local_res8,&local_58);
          local_res8 = *(FName *)(lVar4 + 0x18);
          ::FName::ToString(&local_res8,&local_68);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        else {
          pUVar5 = pUVar6;
          if ((byte)LogInterchangeEngine._0_1_ < 2) goto LAB_14e4e4926;
          local_res8 = *(FName *)(lVar4 + 0x18);
          ::FName::ToString(&local_res8,&local_58);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
        }
        pUVar5 = pUVar6;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
LAB_14e4e4926:
        if (local_48.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pUVar5;
        }
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        return pUVar5;
      }
    }
    if (1 < (byte)LogInterchangeEngine._0_1_) {
      if (param_2 != (UClass *)0x0) {
        local_res8 = (FName)param_2->_padding_;
        ::FName::ToString(&local_res8,&local_68);
        pUVar6 = (UObject *)&DAT_00000001;
      }
      if (lVar4 != 0) {
        local_res8 = *(FName *)(lVar4 + 0x18);
        pUVar6 = (UObject *)(ulonglong)((uint)pUVar6 | 2);
        ::FName::ToString(&local_res8,&local_58);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
      if ((((ulonglong)pUVar6 & 2) != 0) &&
         (pUVar6 = (UObject *)(ulonglong)((uint)pUVar6 & 0xfffffffd),
         local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar6 & 1) != 0) &&
         (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return (UObject *)0x0;
}

// CanProceedWithFactoryNode @ 14e4e5470

bool __cdecl
UE::Interchange::FFactoryCommon::CanProceedWithFactoryNode
          (UInterchangeFactoryBaseNode *param_1,UObject *param_2,UObject *param_3,FString *param_4,
          FString *param_5,FString *param_6)

{
  return true;
}

// GetFactoryNode @ 14e4f6390

UInterchangeFactoryBaseNode * __cdecl
UE::Interchange::FFactoryCommon::GetFactoryNode
          (UObject *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  return (UInterchangeFactoryBaseNode *)0x0;
}

// GetObjectToReimport @ 14e4f71a0

UObject * __cdecl
UE::Interchange::FFactoryCommon::GetObjectToReimport
          (UInterchangeFactoryBase *param_1,UObject *param_2,UInterchangeFactoryBaseNode *param_3,
          FString *param_4,FString *param_5,FString *param_6)

{
  UObject *pUVar1;
  
  pUVar1 = (UObject *)(**(code **)(param_1->_padding_ + 0x348))();
  if (pUVar1 != param_2) {
    param_2 = pUVar1;
  }
  return param_2;
}

// UpdateImportAssetData @ 14e50b860

UAssetImportData * __cdecl
UE::Interchange::FFactoryCommon::UpdateImportAssetData(FUpdateImportAssetDataParameters *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId150,
               "UE::Interchange::FFactoryCommon::UpdateImportAssetData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId166,
               "UE::Interchange::FFactoryCommon::UpdateImportAssetData2",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId166);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UAssetImportData *)0x0;
}

// UpdateImportAssetData @ 14e50b900

UAssetImportData * __cdecl
UE::Interchange::FFactoryCommon::UpdateImportAssetData
          (FUpdateImportAssetDataParameters *param_1,
          TFunctionRef<void___cdecl(UInterchangeAssetImportData_*)> *param_2)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId166,
               "UE::Interchange::FFactoryCommon::UpdateImportAssetData2",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId166);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UAssetImportData *)0x0;
}

