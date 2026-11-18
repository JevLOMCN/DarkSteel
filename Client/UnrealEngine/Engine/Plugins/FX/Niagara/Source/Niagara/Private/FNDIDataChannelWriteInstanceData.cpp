// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// Init @ 148e737d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNDIDataChannelWriteInstanceData::Init
          (FNDIDataChannelWriteInstanceData *this,UNiagaraDataInterfaceDataChannelWrite *param_1,
          FNiagaraSystemInstance *param_2)

{
  TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  FNDCAccessContextInst *this_00;
  int *piVar2;
  FNDIDataChannelFunctionInfo *pFVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  UScriptStruct *pUVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FNDIDataChannelLayoutManager *this_01;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar12;
  FNDCAccessContextBase *pFVar13;
  USceneComponent *pUVar14;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar15;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar16;
  FNDIDataChannelFunctionInfo *pFVar17;
  undefined1 local_res8 [8];
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> local_48;
  
  this->Owner = param_2;
  uVar4 = (uint)(param_1->CompiledData)._padding_;
  pTVar1 = &this->FunctionToDatSetBindingInfo;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  FVar16 = (this->FunctionToDatSetBindingInfo).AllocatorInstance.SecondaryData;
  iVar5 = (this->FunctionToDatSetBindingInfo).ArrayNum;
  piVar2 = &(this->FunctionToDatSetBindingInfo).ArrayMax;
  if (*piVar2 < (int)uVar4) {
    if (FVar16 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar16 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)pTVar1;
    }
    DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
              ((TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)FVar16,iVar5);
    (this->FunctionToDatSetBindingInfo).ArrayNum = 0;
    if (*piVar2 != uVar4) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>
                (0x10,8,uVar4,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar16 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar16 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)pTVar1;
    }
    DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
              ((TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)FVar16,iVar5);
    (this->FunctionToDatSetBindingInfo).ArrayNum = 0;
  }
  iVar5 = (int)(param_1->CompiledData)._padding_;
  pFVar17 = (FNDIDataChannelFunctionInfo *)(param_1->CompiledData)._padding_;
  pFVar3 = pFVar17 + iVar5;
  do {
    if ((int)(param_1->CompiledData)._padding_ != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNDIDataChannelFunctionInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar17 == pFVar3) {
      puVar6 = (param_1->AccessContext).AccessContext.StructMemory;
      if ((puVar6 != (uchar *)0x0) &&
         (pUVar7 = (param_1->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
         pUVar7 != (UScriptStruct *)0x0)) {
        this_00 = &this->AccessContext;
        if (this_00 != &param_1->AccessContext) {
          FInstancedStruct::InitializeAs(&this_00->AccessContext,pUVar7,puVar6);
        }
        pFVar13 = FNDCAccessContextInst::GetChecked<FNDCAccessContextBase>(this_00);
        pUVar14 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar14 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
        (pFVar13->OwningComponent).field0_0x0.DebugPtr = pUVar14;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return true;
    }
    this_01 = FNDIDataChannelLayoutManager::Get();
    FVar12 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
             FNDIDataChannelLayoutManager::GetLayoutInfo
                       (this_01,&local_48,pFVar17,&(param_1->CompiledData).DataLayout,&local_58);
    FVar16 = (this->FunctionToDatSetBindingInfo).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)pTVar1;
    if (FVar16 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar15 = FVar16;
    }
    if ((ulonglong)FVar15 <= (ulonglong)FVar12) {
      if (FVar16 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
        FVar16 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)pTVar1;
      }
      if (((ulonglong)FVar12 < (ulonglong)((longlong)FVar16 + (longlong)*piVar2 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
    }
    iVar11 = (this->FunctionToDatSetBindingInfo).ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>_>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->FunctionToDatSetBindingInfo).ArrayNum = iVar11 + 1;
    FVar16 = (this->FunctionToDatSetBindingInfo).AllocatorInstance.SecondaryData;
    FVar15 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)pTVar1;
    if (FVar16 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar15 = FVar16;
    }
    *(undefined8 *)((longlong)FVar15 + (longlong)iVar11 * 0x10) = *(undefined8 *)FVar12;
    *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar15 + 8) + (longlong)iVar11 * 0x10) =
         ((FSharedReferencer<1> *)((longlong)FVar12 + 8))->ReferenceController;
    ((FSharedReferencer<1> *)((longlong)FVar12 + 8))->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)FVar12 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar17 = pFVar17 + 1;
  } while( true );
}

// PostSimTick @ 148e76e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNDIDataChannelWriteInstanceData::PostSimTick
          (FNDIDataChannelWriteInstanceData *this,UNiagaraDataInterfaceDataChannelWrite *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong *plVar1;
  atomic<unsigned_int> aVar2;
  FNiagaraDataBuffer *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  TRefCountPtr<FNiagaraDataBuffer> TVar8;
  FNiagaraDataChannelData *this_00;
  atomic<unsigned_int> aVar9;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_138;
  FString local_128;
  FName local_118;
  FNiagaraDataChannelPublishRequest local_110;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [32];
  FString local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  if (this->DestinationData != (FNiagaraDataBuffer *)0x0) {
    pFVar3 = this->DestinationData;
    aVar2 = (atomic<unsigned_int>)pFVar3->NumInstancesAllocated;
    aVar9 = aVar2;
    if ((uint)this->AtomicNumInstances < (uint)aVar2) {
      aVar9 = this->AtomicNumInstances;
    }
    if (((uint)aVar2 < (uint)aVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumInstances <= NumInstancesAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x9c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar3->NumInstances = (uint)aVar9;
    if (GbDebugDumpWriter != 0) {
      pFVar3 = this->DestinationData;
      local_118.ComparisonIndex.Value = 0;
      local_118.Number = 0;
      if ((param_1->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)0x0) {
        local_res20 = 0;
        local_d8 = (FName)&local_res20;
      }
      else {
        local_d8 = UE::CoreUObject::Private::GetFName((UObject *)local_a8);
      }
      local_d8 = *(FName *)local_d8;
      ::FName::ToString(&local_d8,&local_c8);
      ::FString::PrintfImpl(&local_b8,L"=== Data Channle Write: %d Elements --> %s ===");
      FNiagaraDataBuffer::Dump(pFVar3,0,this->DestinationData->NumInstances,&local_b8,&local_118);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    if (((this->DataChannelData).Object == (FNiagaraDataChannelData *)0x0) ||
       ((((param_1->bPublishToGame == false && (param_1->bPublishToCPU == false)) &&
         (param_1->bPublishToGPU == false)) || (this->DestinationData->NumInstances == 0)))) {
      plVar1 = &this->DestinationData->_padding_;
      LOCK();
      bVar6 = (int)*plVar1 == -1;
      if (bVar6) {
        *(undefined4 *)plVar1 = 0;
      }
      UNLOCK();
      if (!bVar6) {
        `FNiagaraSharedObject::Unlock'::__l2::<lambda_1>::operator()(local_res8);
      }
    }
    else {
      TVar8 = FNiagaraDataBuffer::UnlockForRead(this->DestinationData);
      pFVar3 = (FNiagaraDataBuffer *)(TVar8.Reference)->_padding_;
      local_110.Data.Reference = pFVar3;
      if (pFVar3 != (FNiagaraDataBuffer *)0x0) {
        if (((int)pFVar3->_padding_ == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      local_110.GameData.Object = (FNiagaraDataChannelGameData *)0x0;
      local_110.GameData.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_110.LwcTile.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_110.LwcTile.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_110.DebugSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar4 = (TVar8.Reference)->_padding_;
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 8) < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
        UNLOCK();
      }
      local_110.bVisibleToGame = param_1->bPublishToGame;
      local_110.LwcTile.field0_0x0._0_8_ = *(undefined8 *)&(param_2->LWCTile).field0_0x0;
      local_110.bVisibleToCPUSims = param_1->bPublishToCPU;
      local_110.bVisibleToGPUSims = param_1->bPublishToGPU;
      local_110.LwcTile.field0_0x0._s_0.Z = (param_2->LWCTile).field0_0x0._s_0.Z;
      local_d0 = (FName)param_2->System->_padding_;
      ::FName::ToString(&local_d0,(FString *)(local_a8 + 0x10));
      FStringFormatArg::FStringFormatArg(&local_78,(FString *)(local_a8 + 0x10));
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0);
      FStringFormatArg::FStringFormatArg(&local_58,&local_88);
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_138.AllocatorInstance.Data,&local_78,2);
      ::FString::FormatImpl(&local_128,L"{0} ({1})",&local_138);
      if (local_110.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.DebugSource.Data.AllocatorInstance.Data);
      }
      local_110.DebugSource.Data.AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
      local_110.DebugSource.Data.ArrayNum = local_128.Data.ArrayNum;
      local_110.DebugSource.Data.ArrayMax = local_128.Data.ArrayMax;
      local_128.Data.ArrayNum = 0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((FStringFormatArg *)local_138.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
      }
      this_00 = TSharedPtr<FNiagaraDataChannelData,1>::operator->(&this->DataChannelData);
      FNiagaraDataChannelData::Publish(this_00,&local_110);
      if (local_110.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.DebugSource.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.GameData.SharedReferenceCount.ReferenceController);
      TVar8.Reference = local_110.Data.Reference;
      if (local_110.Data.Reference != (FNiagaraDataBuffer *)0x0) {
        if (((int)(local_110.Data.Reference)->_padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        LOCK();
        *(int *)&(TVar8.Reference)->_padding_ = (int)(TVar8.Reference)->_padding_ + -1;
        UNLOCK();
      }
    }
    LOCK();
    this->AtomicNumInstances = (atomic<unsigned_int>)0x0;
    UNLOCK();
  }
  return true;
}

// Tick @ 148e82590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNDIDataChannelWriteInstanceData::Tick
          (FNDIDataChannelWriteInstanceData *this,UNiagaraDataInterfaceDataChannelWrite *param_1,
          FNiagaraSystemInstance *param_2)

{
  FNDIDataChannelFunctionInfo *pFVar1;
  FName *pFVar2;
  int iVar3;
  UNiagaraDataChannelAsset *pUVar4;
  UScriptStruct *pUVar5;
  FNiagaraDataChannelLayoutInfo *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  FNiagaraWorldManager *pFVar12;
  FNDIDataChannelLayoutManager *pFVar13;
  UNiagaraDataChannel *pUVar14;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar15;
  FNiagaraTypeDefinition *pFVar16;
  UObject *pUVar17;
  UScriptStruct *pUVar18;
  undefined8 *puVar19;
  FNiagaraDataChannelData *pFVar20;
  FNiagaraDataBuffer *this_00;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar21;
  ulonglong uVar22;
  ForAnyElementType this_01;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar23;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar24;
  FNiagaraDataSetCompiledData *this_02;
  FNDIDataChannelFunctionInfo *pFVar25;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar30;
  undefined1 local_res10 [8];
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> local_res18;
  undefined1 local_res20 [8];
  UNiagaraDataChannelHandler *local_258;
  undefined1 local_250 [8];
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_248;
  FString local_238;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_210;
  FString local_200;
  UNiagaraDataChannelHandler *local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  undefined1 local_1d0 [16];
  FName local_1c0;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  UObject *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> local_148;
  uint local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> local_118;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_a8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_98;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> local_88;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  
  this->DynamicAllocationCount = 0;
  LOCK();
  this->AtomicNumInstances = (atomic<unsigned_int>)0x0;
  UNLOCK();
  this->DestinationData = (FNiagaraDataBuffer *)0x0;
  this->Owner = param_2;
  *(undefined8 *)&(this->LwcTile).field0_0x0 = *(undefined8 *)&(param_2->LWCTile).field0_0x0;
  (this->LwcTile).field0_0x0._s_0.Z = (param_2->LWCTile).field0_0x0._s_0.Z;
  local_res18 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)param_2;
  if (((param_1->bPublishToGame != false) || (param_1->bPublishToCPU != false)) ||
     (param_1->bPublishToGPU != false)) {
    local_258 = (UNiagaraDataChannelHandler *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (local_258 == (UNiagaraDataChannelHandler *)0x0) {
      pFVar12 = FNiagaraWorldManager::Get(param_2->World);
      if (pFVar12 == (FNiagaraWorldManager *)0x0) goto LAB_148e82f19;
      pUVar4 = (param_1->Channel).field0_0x0.DebugPtr;
      if ((pUVar4 == (UNiagaraDataChannelAsset *)0x0) ||
         (local_258 = FNiagaraDataChannelManager::FindDataChannelHandler
                                ((pFVar12->DataChannelManager).Ptr,
                                 (pUVar4->DataChannel).field0_0x0.DebugPtr),
         local_258 == (UNiagaraDataChannelHandler *)0x0)) {
        if ((byte)LogNiagara._0_1_ < 3) {
          return false;
        }
        if ((param_1->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)0x0) {
          local_228 = 0;
          local_1d8 = (FName)&local_228;
        }
        else {
          local_1d8 = UE::CoreUObject::Private::GetFName((UObject *)(local_138 + 8));
        }
        local_1d8 = *(FName *)local_1d8;
        ::FName::ToString(&local_1d8,&local_190);
        UE::Logging::Private::BasicLog<3>
                  (&`public:_bool___cdecl_FNDIDataChannelWriteInstanceData::Tick(UNiagaraDataInterfaceDataChannelWrite*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                    ::__l46::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        local_180.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
        goto LAB_148e8306a;
      }
      local_1f0 = local_258;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_258);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_1f0);
      pFVar25 = (FNDIDataChannelFunctionInfo *)(param_1->CompiledData)._padding_;
      local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.ArrayNum = 0;
      local_248.ArrayMax = 0;
      iVar3 = (int)(param_1->CompiledData)._padding_;
      pFVar1 = pFVar25 + iVar3;
      while( true ) {
        if ((int)(param_1->CompiledData)._padding_ != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FNDIDataChannelFunctionInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar25 == pFVar1) break;
        pFVar13 = FNDIDataChannelLayoutManager::Get();
        pUVar14 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(local_258->DataChannel).WeakPtr);
        if ((pUVar14 == (UNiagaraDataChannel *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                               ,0x3a,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        pTVar15 = UNiagaraDataChannel::GetLayoutInfo(pUVar14,&local_108);
        if ((pTVar15->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FNDIDataChannelLayoutManager::GetLayoutInfo
                  (pFVar13,&local_118,pFVar25,&pTVar15->Object->CompiledData,&local_248);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        pFVar25 = pFVar25 + 1;
      }
      iVar3 = local_248.ArrayNum;
      uVar22 = (ulonglong)local_248.ArrayNum;
      if (0 < local_248.ArrayNum) {
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        pFVar2 = (FName *)(local_248.AllocatorInstance.Data + uVar22 * 0xc);
        this_01.Data = local_248.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar22 != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          FVar24 = local_res18;
          if ((FName *)this_01.Data == pFVar2) break;
          ::FName::ToString((FName *)this_01.Data,&local_f8);
          pFVar16 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)((longlong)this_01.Data + 8));
          if ((pFVar16->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            ::FString::FString(&local_200,L"Invalid");
          }
          else {
            local_1e8 = UE::CoreUObject::Private::GetFName((UObject *)local_138);
            local_1e8 = *(FName *)local_1e8;
            ::FName::ToString(&local_1e8,&local_200);
          }
          ::FString::PrintfImpl(&local_1b0,L"%s %s\n");
          iVar27 = local_1b0.Data.ArrayNum + -1;
          if (local_1b0.Data.ArrayNum == 0) {
            iVar27 = 0;
          }
          ::FString::AppendChars(&local_238,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar27)
          ;
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          uVar22 = local_248._8_8_ & 0xffffffff;
          this_01.Data = (FScriptContainerElement *)&((FName *)((longlong)this_01.Data + 8))->Number
          ;
        }
        if (2 < (byte)LogNiagara._0_1_) {
          pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)local_res18 + 0x60));
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar17,&local_d8,(UObject *)0x0);
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)((longlong)FVar24 + 0x50),&local_e8,(UObject *)0x0);
          pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar17[1].field_0x8);
          if ((pUVar17 == (UObject *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                                 ,0x3a,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          local_1e0.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
          local_1e0.Number = *(uint *)&pUVar17->field_0x1c;
          ::FName::ToString(&local_1e0,&local_1a0);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_bool___cdecl_FNDIDataChannelWriteInstanceData::Tick(UNiagaraDataInterfaceDataChannelWrite*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
      }
      param_2 = (FNiagaraSystemInstance *)local_res18;
      if ((FName *)local_248.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
        param_2 = (FNiagaraSystemInstance *)local_res18;
      }
    }
    uVar22 = 0;
    pFVar20 = (this->DataChannelData).Object;
    local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.ArrayNum = 0;
    local_210.ArrayMax = 0;
    if (((pFVar20 == (FNiagaraDataChannelData *)0x0) ||
        (bVar8 = FNiagaraDataChannelData::IsLayoutValid(pFVar20,local_258), !bVar8)) ||
       (param_1->bUpdateDestinationDataEveryTick != false)) {
      if ((((this->AccessContext).AccessContext.StructMemory == (uchar *)0x0) ||
          ((this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr ==
           (UScriptStruct *)0x0)) ||
         (pUVar5 = (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
         pUVar18 = FNDCAccessContextLegacy::StaticStruct(), pUVar5 == pUVar18)) {
        local_160 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_2 + 0x60));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_160);
        }
        local_res18 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pcVar7 = *(code **)(local_258->_padding_ + 0x2e0);
        local_1d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_1d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_1d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_1d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_6c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_154 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_160);
          local_158 = local_1d0._0_4_;
          uStack_154 = local_1d0._4_4_;
        }
        local_140 = local_140 & 0xfffffffe;
        uStack_150 = local_1d0._8_4_;
        uStack_14c = local_1d0._12_4_;
        local_148 = local_res18;
        puVar19 = (undefined8 *)(*pcVar7)(local_258,local_b8,&local_160,1);
        if (&this->DataChannelData != (TSharedPtr<FNiagaraDataChannelData,1> *)puVar19) {
          (this->DataChannelData).Object = (FNiagaraDataChannelData *)*puVar19;
          *puVar19 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->DataChannelData).SharedReferenceCount,
                     (FSharedReferencer<1> *)(puVar19 + 1));
        }
      }
      else {
        puVar19 = (undefined8 *)
                  (**(code **)(local_258->_padding_ + 0x2d8))
                            (local_258,local_c8,&this->AccessContext,1);
        local_b0 = local_c0;
        if (&this->DataChannelData != (TSharedPtr<FNiagaraDataChannelData,1> *)puVar19) {
          (this->DataChannelData).Object = (FNiagaraDataChannelData *)*puVar19;
          *puVar19 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->DataChannelData).SharedReferenceCount,
                     (FSharedReferencer<1> *)(puVar19 + 1));
          local_b0 = local_c0;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
    if (((this->DataChannelData).Object != (FNiagaraDataChannelData *)0x0) &&
       (*(char *)((longlong)&(param_1->CompiledData)._padding_ + 4) != '\0')) {
      pFVar20 = TSharedPtr<FNiagaraDataChannelData,1>::operator->(&this->DataChannelData);
      this_00 = FNiagaraDataChannelData::GetBufferForCPUWrite(pFVar20);
      this->DestinationData = this_00;
      if (((this_00 != (FNiagaraDataBuffer *)0x0) && (param_1->AllocationMode == Static)) &&
         ((FNiagaraDataBuffer::Allocate(this_00,param_1->AllocationCount,false),
          GbNDCWriteDIZeroCPUBufferMode == 2 ||
          ((GbNDCWriteDIZeroCPUBufferMode == 1 && ((char)(param_1->CompiledData)._padding_ != '\0'))
          )))) {
        FNiagaraDataBuffer::ZeroCPUBuffers(this->DestinationData);
      }
    }
    pUVar14 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(local_258->DataChannel).WeakPtr);
    if ((pUVar14 == (UNiagaraDataChannel *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                           ,0x3a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar15 = UNiagaraDataChannel::GetLayoutInfo(pUVar14,&local_a8);
    if ((pTVar15->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    this_02 = &pTVar15->Object->CompiledData;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pUVar14 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(local_258->DataChannel).WeakPtr);
    if ((pUVar14 == (UNiagaraDataChannel *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                           ,0x3a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar15 = UNiagaraDataChannel::GetLayoutInfo(pUVar14,&local_98);
    if ((pTVar15->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar6 = pTVar15->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    uVar10 = FNiagaraDataSetCompiledData::GetLayoutHash(this_02);
    if (uVar10 == 0) {
LAB_148e82d5b:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CPUSourceDataCompiledData.GetLayoutHash() && CPUSourceDataCompiledData.GetLayoutHash() == GPUSourceDataCompiledData.GetLayoutHash()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                         ,0x1aa,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
    }
    else {
      uVar10 = FNiagaraDataSetCompiledData::GetLayoutHash(&pFVar6->CompiledDataGPU);
      uVar11 = FNiagaraDataSetCompiledData::GetLayoutHash(this_02);
      if (uVar11 != uVar10) goto LAB_148e82d5b;
    }
    uVar10 = FNiagaraDataSetCompiledData::GetLayoutHash(this_02);
    if ((ulonglong)uVar10 != this->ChachedDataSetLayoutHash) {
      this->ChachedDataSetLayoutHash = (ulonglong)uVar10;
      local_res18 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                    &this->FunctionToDatSetBindingInfo;
      this->bUpdateFunctionBindingRTData =
           *(bool *)((longlong)&(param_1->CompiledData)._padding_ + 5);
      iVar3 = (int)(param_1->CompiledData)._padding_;
      TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum((TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)local_res18,iVar3,Default);
      FVar24 = local_res18;
      local_1d0._0_8_ = (longlong)iVar3;
      uVar26 = uVar22;
      uVar28 = uVar22;
      uVar29 = uVar22;
      if (0 < iVar3) {
        do {
          uVar11 = (uint)uVar26;
          uVar10 = 0;
          if ((int)uVar11 < (int)(param_1->CompiledData)._padding_) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          local_res18 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                        (param_1->CompiledData)._padding_;
          uVar10 = 0;
          if ((int)uVar11 < *(int *)((longlong)FVar24 + 0x88)) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          FVar30 = FVar24;
          if (*(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
               ((longlong)FVar24 + 0x80) !=
              (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
            FVar30 = *(ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> *)
                      ((longlong)FVar24 + 0x80);
          }
          pTVar23 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)
                    ((longlong)FVar30 + uVar28);
          pFVar13 = FNDIDataChannelLayoutManager::Get();
          pTVar21 = FNDIDataChannelLayoutManager::GetLayoutInfo
                              (pFVar13,&local_88,
                               (FNDIDataChannelFunctionInfo *)((longlong)local_res18 + uVar29),
                               this_02,&local_210);
          if (pTVar23 != pTVar21) {
            pTVar23->Object = pTVar21->Object;
            pTVar21->Object = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar23->SharedReferenceCount,&pTVar21->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.SharedReferenceCount.ReferenceController);
          uVar22 = uVar22 + 1;
          uVar26 = (ulonglong)(uVar11 + 1);
          uVar28 = uVar28 + 0x10;
          uVar29 = uVar29 + 0x28;
        } while ((longlong)uVar22 < (longlong)local_1d0._0_8_);
      }
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
  }
LAB_148e82f19:
  iVar3 = (this->FunctionToDatSetBindingInfo).ArrayNum;
  if ((int)(param_1->CompiledData)._padding_ == iVar3) {
    FVar24 = (this->FunctionToDatSetBindingInfo).AllocatorInstance.SecondaryData;
    if (FVar24 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar24 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
               &this->FunctionToDatSetBindingInfo;
    }
    FVar30 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
             ((longlong)iVar3 * 0x10 + (longlong)FVar24);
    while( true ) {
      if ((this->FunctionToDatSetBindingInfo).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_250);
      }
      if (FVar24 == FVar30) {
        return true;
      }
      if (*(longlong *)FVar24 == 0) break;
      FVar24 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
               ((longlong)FVar24 + 0x10);
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return false;
    }
    if ((param_1->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)0x0) {
      local_218 = 0;
      local_1b8 = (FName)&local_218;
    }
    else {
      local_1b8 = UE::CoreUObject::Private::GetFName((UObject *)(local_128 + 8));
    }
    local_1b8 = *(FName *)local_1b8;
    ::FName::ToString(&local_1b8,&local_170);
    UE::Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_FNDIDataChannelWriteInstanceData::Tick(UNiagaraDataInterfaceDataChannelWrite*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                ::__l127::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_180.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5638986249386589753>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                       ,0x1c7,
                       "Interface->GetCompiledData().GetFunctionInfo().Num() == FunctionToDatSetBindingInfo.Num()"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((byte)LogNiagara._0_1_ < 3) {
      return false;
    }
    if ((param_1->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)0x0) {
      local_220 = 0;
      local_1c0 = (FName)&local_220;
    }
    else {
      local_1c0 = UE::CoreUObject::Private::GetFName((UObject *)local_128);
    }
    local_1c0 = *(FName *)local_1c0;
    ::FName::ToString((FName *)(local_1d0 + 0x10),&local_180);
    UE::Logging::Private::BasicLog<3>
              (&`public:_bool___cdecl_FNDIDataChannelWriteInstanceData::Tick(UNiagaraDataInterfaceDataChannelWrite*___ptr64,FNiagaraSystemInstance*___ptr64)___ptr64'
                ::__l102::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
LAB_148e8306a:
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  return false;
}

