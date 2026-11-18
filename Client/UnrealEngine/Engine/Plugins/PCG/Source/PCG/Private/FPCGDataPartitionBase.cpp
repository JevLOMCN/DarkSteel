// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// SelectMultiple @ 149c33760

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
FPCGDataPartitionBase<FPCGMatchAndSetPartition,int>::SelectMultiple
          (FPCGDataPartitionBase<FPCGMatchAndSetPartition,int> *this,FPCGContext *param_1,
          UPCGData *param_2,int *param_3,int param_4,UPCGData *param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  FText *this_00;
  UClass *pUVar4;
  UPCGMetadata *this_01;
  long64 lVar5;
  int iVar6;
  bool bVar7;
  FString local_58;
  FString local_48;
  FText local_38;
  
  if (param_2 == (UPCGData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_38,L"PCGDataPartition",L"InputMissingData",L"Missing input data");
      FText::ToString(this_00);
      bVar7 = param_1 != (FPCGContext *)0x0;
      if (bVar7) {
        FPCGContext::GetTaskName(param_1,&local_48);
        FPCGContext::GetExecutionSourceName(param_1,&local_58);
      }
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGDataPartitionBase<FPCGMatchAndSetPartition,int>::SelectMultiple(FPCGContext&___ptr64,UPCGData_const*___ptr64,int&___ptr64,int,UPCGData*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar7) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        return true;
      }
    }
  }
  else if ((*param_3 != 0) ||
          (bVar7 = FPCGMatchAndSetPartition::InitializeForData
                             ((FPCGMatchAndSetPartition *)this,param_2,param_5), bVar7)) {
    iVar6 = *param_3;
    iVar3 = iVar6;
    do {
      if (param_4 <= iVar6) break;
      iVar6 = iVar6 + 1;
    } while ((iVar6 - iVar3 < 0x400) ||
            (bVar7 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), iVar3 = iVar6, !bVar7));
    *param_3 = iVar6;
    if (iVar6 == param_4) {
      if ((param_5 == (UPCGData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InData && OutData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                             ,0x32d,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return (bool)uVar2;
      }
      pUVar4 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      iVar3 = (int)pUVar4->_padding_;
      if ((*(int *)(param_2->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar4->_padding_)) {
        this_01 = (UPCGMetadata *)(**(code **)(param_2->_padding_ + 800))(param_2);
        if (this_01 == (UPCGMetadata *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGMatchAndSetAttributes.cpp"
                             ,0x338,L"");
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            uVar2 = (*pcVar1)();
            return (bool)uVar2;
          }
        }
        else {
          lVar5 = UPCGMetadata::GetItemCountForChild(this_01);
          FPCGMatchAndSetPartition::FinalizeInternal<UPCGData>
                    ((FPCGMatchAndSetPartition *)this,param_2,param_5,(int)lVar5);
        }
      }
      else {
        iVar3 = (**(code **)(param_2->_padding_ + 0x488))(param_2);
        FPCGMatchAndSetPartition::FinalizeInternal<UPCGBasePointData>
                  ((FPCGMatchAndSetPartition *)this,(UPCGBasePointData *)param_2,
                   (UPCGBasePointData *)param_5,iVar3);
      }
    }
    return iVar6 == param_4;
  }
  return true;
}

// SelectMultiple @ 149c8bf30

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
FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::SelectMultiple
          (FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_> *this,
          FPCGContext *param_1,UPCGData *param_2,int *param_3,int param_4,UPCGData *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  FText *this_00;
  Element *pEVar7;
  bool bVar8;
  int local_68 [2];
  FString local_60;
  FString local_50;
  FText local_40;
  
  if (param_2 == (UPCGData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_40,L"PCGDataPartition",L"InputMissingData",L"Missing input data");
      FText::ToString(this_00);
      bVar8 = param_1 != (FPCGContext *)0x0;
      if (bVar8) {
        FPCGContext::GetTaskName(param_1,&local_50);
        FPCGContext::GetExecutionSourceName(param_1,&local_60);
      }
      UE::Logging::Private::BasicLog<2>
                (&`public:_bool___cdecl_FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::SelectMultiple(FPCGContext&___ptr64,UPCGData_const*___ptr64,int&___ptr64,int,UPCGData*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar8) && (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if ((bVar8) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
        return true;
      }
    }
  }
  else if ((*param_3 != 0) ||
          (bVar8 = FPCGSpawnActorPartitionByAttribute::InitializeForData
                             ((FPCGSpawnActorPartitionByAttribute *)this,param_2,param_5), bVar8)) {
    local_68[0] = *param_3;
    iVar4 = local_68[0];
    do {
      if (param_4 <= local_68[0]) break;
      pEVar7 = FPCGSpawnActorPartitionByAttribute::Select
                         ((FPCGSpawnActorPartitionByAttribute *)this,local_68[0]);
      if (pEVar7 != (Element *)0x0) {
        pFVar2 = (pEVar7->Indices).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 < pFVar2 + (longlong)(pEVar7->Indices).ArrayMax * 4
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = (pEVar7->Indices).ArrayNum;
        piVar1 = &(pEVar7->Indices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pEVar7,piVar1);
        }
        (pEVar7->Indices).ArrayNum = iVar6 + 1;
        *(int *)((pEVar7->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_68[0];
      }
      local_68[0] = local_68[0] + 1;
    } while ((local_68[0] - iVar4 < 0x7fffffff) ||
            (bVar8 = FPCGAsyncState::ShouldStop(&param_1->AsyncState), iVar4 = local_68[0], !bVar8))
    ;
    *param_3 = local_68[0];
    if (local_68[0] != param_4) {
      return false;
    }
    FPCGSpawnActorPartitionByAttribute::Finalize
              ((FPCGSpawnActorPartitionByAttribute *)this,param_2,param_5);
    return local_68[0] == param_4;
  }
  return true;
}

