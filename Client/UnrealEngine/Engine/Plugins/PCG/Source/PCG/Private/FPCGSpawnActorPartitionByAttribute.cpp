// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// Finalize @ 149c75be0

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
FPCGSpawnActorPartitionByAttribute::Finalize
          (FPCGSpawnActorPartitionByAttribute *this,UPCGData *param_1,UPCGData *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGBasePointData *this_00;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res10 [16];
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TArrayView<int_const_,int> local_90;
  FPCGInitializeFromDataParams local_78;
  
  if (param_1 != (UPCGData *)0x0) {
    pUVar9 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar9->_padding_)) {
      iVar3 = (int)this->_padding_;
      iVar12 = 0;
      uVar7 = 1;
      iVar14 = 0;
      plVar1 = &this->_padding_;
      iVar8 = 0;
      if (iVar3 != 0) {
        plVar13 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        uVar11 = (uint)*plVar13;
        while (uVar11 == 0) {
          iVar12 = iVar12 + 1;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar3;
          if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar12) goto LAB_149c75ccf;
          uVar11 = *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
        }
        uVar7 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_res20 = (int)lVar4;
        iVar8 = local_res20 + -1 + iVar14;
        if (iVar3 < iVar8) {
          iVar8 = iVar3;
        }
      }
LAB_149c75ccf:
      uVar11 = (uint)this->_padding_;
      uVar10 = uVar11 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uVar7,iVar12);
      TStack_b8.CurrentBitIndex = iVar8;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar11 >> 5;
      TStack_b8._28_4_ = iVar8;
      TStack_b8.BaseBitIndex = iVar14;
      uStack_98 = CONCAT44(uStack_cc,(int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4)
                          );
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)this->_padding_;
      if (uVar11 != uVar7) {
        plVar13 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
        while (uVar11 == 0) {
          iVar12 = iVar12 + 1;
          uVar10 = uVar10 + 0x20;
          uVar11 = uVar7;
          if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar12)
          goto LAB_149c75de0;
          uVar11 = *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
        }
        uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar11 = (int)lVar4 + -1 + uVar10;
        if ((int)uVar7 < (int)uVar11) {
          uVar11 = uVar7;
        }
      }
LAB_149c75de0:
      while( true ) {
        if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) != (int)uStack_98) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_b8.CurrentBitIndex == uVar11) &&
           (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
        lVar4 = this->_padding_ + (longlong)TStack_b8.CurrentBitIndex * 0x28;
        if (*(int *)(this->_padding_ + 0x10 + (longlong)TStack_b8.CurrentBitIndex * 0x28) != 0) {
          if ((*(longlong *)(lVar4 + 0x18) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!Element.PartitionData",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSpawnActor.cpp"
                                 ,0x51,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = FPCGContext::NewPointData_AnyThread(this->Context);
          *(UPCGBasePointData **)(lVar4 + 0x18) = this_00;
          FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                    (&local_78,(UPCGSpatialData *)param_1);
          local_78.bInheritSpatialData = false;
          UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_00,&local_78);
          local_90.DataPtr = *(int **)(lVar4 + 8);
          iVar3 = *(int *)(lVar4 + 0x10);
          if ((iVar3 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_90.ArrayNum = iVar3;
          UPCGBasePointData::SetPointsFrom(this_00,(UPCGBasePointData *)param_1,&local_90);
          DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                    ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                     local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data
                     ,local_78.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
          if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
              local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
              (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
            FMemory::Free(local_78.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance
                          .Data);
          }
          if (local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
          }
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
    }
  }
  return;
}

// InitializeForData @ 149c7d700

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
FPCGSpawnActorPartitionByAttribute::InitializeForData
          (FPCGSpawnActorPartitionByAttribute *this,UPCGData *param_1,UPCGData *param_2)

{
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *pTVar1;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  *pTVar2;
  int iVar3;
  IPCGAttributeAccessor *pIVar4;
  IPCGAttributeAccessorKeys *pIVar5;
  UClass *pUVar6;
  FPCGAttributePropertySelector *pFVar7;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar8;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar9;
  bool bVar10;
  undefined8 *local_res10;
  FPCGAttributePropertySelector local_88;
  undefined1 local_48 [48];
  int local_18;
  
  if (param_1 != (UPCGData *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar6->_padding_)) {
      FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                ((FPCGAttributePropertyInputSelector *)&local_88);
      FPCGAttributePropertySelector::SetAttributeName(&local_88,this->SpawnAttribute,true);
      pFVar7 = (FPCGAttributePropertySelector *)
               FPCGAttributePropertyInputSelector::CopyAndFixLast
                         ((FPCGAttributePropertyInputSelector *)&local_88,
                          (FPCGAttributePropertyInputSelector *)local_48,param_1);
      FPCGAttributePropertySelector::operator=(&local_88,pFVar7);
      DestructItems<FString,int>((FString *)local_48._40_8_,local_18);
      if ((FString *)local_48._40_8_ != (FString *)0x0) {
        FMemory::Free((void *)local_48._40_8_);
      }
      TVar8 = PCGAttributeAccessorHelpers::CreateConstAccessor
                        ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)param_1,
                         SUB81(&local_88,0));
      pTVar1 = &this->SpawnAttributeAccessor;
      if ((IPCGAttributeAccessor *)pTVar1 != TVar8.Ptr) {
        pIVar4 = pTVar1->Ptr;
        pTVar1->Ptr = (IPCGAttributeAccessor *)(TVar8.Ptr)->_padding_;
        (TVar8.Ptr)->_padding_ = 0;
        if (pIVar4 != (IPCGAttributeAccessor *)0x0) {
          (**(code **)pIVar4->_padding_)(pIVar4,1);
        }
      }
      if (local_res10 != (undefined8 *)0x0) {
        (**(code **)*local_res10)(local_res10,1);
      }
      TVar9 = PCGAttributeAccessorHelpers::CreateConstKeys
                        ((UPCGData *)&local_res10,(FPCGAttributePropertySelector *)param_1);
      pTVar2 = &this->SpawnAttributeKeys;
      if ((IPCGAttributeAccessorKeys *)pTVar2 != TVar9.Ptr) {
        pIVar5 = pTVar2->Ptr;
        pTVar2->Ptr = (IPCGAttributeAccessorKeys *)(TVar9.Ptr)->_padding_;
        (TVar9.Ptr)->_padding_ = 0;
        if (pIVar5 != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)pIVar5->_padding_)(pIVar5,1);
        }
      }
      if (local_res10 != (undefined8 *)0x0) {
        (**(code **)*local_res10)(local_res10,1);
      }
      if ((pTVar1->Ptr == (IPCGAttributeAccessor *)0x0) ||
         (pTVar2->Ptr == (IPCGAttributeAccessorKeys *)0x0)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      DestructItems<FString,int>
                ((FString *)local_88.ExtraNames.AllocatorInstance.Data,local_88.ExtraNames.ArrayNum)
      ;
      if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
      }
      return bVar10;
    }
  }
  return false;
}

// Select @ 149c8b690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

Element * __thiscall
FPCGSpawnActorPartitionByAttribute::Select(FPCGSpawnActorPartitionByAttribute *this,int param_1)

{
  int iVar1;
  FPCGContext *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  TObjectPtr<UClass>_u_0 TVar7;
  FUObjectItem *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FString *pFVar11;
  TObjectPtr<UClass>_u_0 TVar12;
  FText *pFVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  size_t sVar16;
  TObjectPtr<UClass>_u_0 local_res8;
  TPersistentObjectPtr<FSoftObjectPath> local_c8;
  TArrayView<FSoftClassPath,int> local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  FScriptContainerElement *local_60;
  TPersistentObjectPtr<FSoftObjectPath> local_58;
  FText local_30;
  
  TVar12.DebugPtr = (UClass *)0x0;
  iVar5 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_58.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.ObjectID.AssetPath.AssetName.Number = 0;
  local_58.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.ObjectID.AssetPath.PackageName.Number = 0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_78._16_4_ = 0;
  local_78._20_4_ = 0;
  local_60 = (FScriptContainerElement *)0x0;
  local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_58.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_58.WeakPtr.ObjectIndex = 0;
  local_58.WeakPtr.ObjectSerialNumber = 0;
  local_res8.DebugPtr = (UClass *)0x0;
  FUtf8String::Reset(&local_58.ObjectID.SubPathString,0);
  local_98.DataPtr = (FSoftClassPath *)local_78;
  local_88._8_4_ = 1;
  local_98.ArrayNum = 1;
  local_98._12_4_ = local_88._12_4_;
  local_88._0_8_ = local_98.DataPtr;
  bVar4 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                    ((this->SpawnAttributeAccessor).Ptr,&local_98,param_1,
                     (this->SpawnAttributeKeys).Ptr,StrictType);
  uVar3 = local_78._16_8_;
  if (bVar4) {
    sVar16 = (size_t)(int)local_60;
    local_c8.WeakPtr.ObjectIndex = 0;
    local_c8.WeakPtr.ObjectSerialNumber = 0;
    local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ObjectID.SubPathString.Data.ArrayNum = (int)local_60;
    local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = local_78._0_4_;
    local_c8.ObjectID.AssetPath.PackageName.Number = local_78._4_4_;
    local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = local_78._8_4_;
    local_c8.ObjectID.AssetPath.AssetName.Number = local_78._12_4_;
    if ((int)local_60 == 0) {
      local_c8.ObjectID.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_60,0,(ForAnyElementType *)&local_c8.ObjectID.SubPathString,
                 (int)local_60,&local_c8.ObjectID.SubPathString.Data.ArrayMax);
      memcpy(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data,(void *)uVar3,sVar16);
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=(&local_58,&local_c8);
    FVar15.Data = local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data;
  }
  else {
    local_98.DataPtr = (FSoftClassPath *)local_88;
    local_98.ArrayNum = 1;
    local_88._0_8_ = (FSoftClassPath *)0x0;
    local_88._8_4_ = 0;
    local_88._12_4_ = 0;
    bVar4 = IPCGAttributeAccessor::GetRange<FString>
                      ((this->SpawnAttributeAccessor).Ptr,(TArrayView<FString,int> *)&local_98,
                       param_1,(this->SpawnAttributeKeys).Ptr,StrictType);
    FVar15.Data = (FScriptContainerElement *)local_88._0_8_;
    if (bVar4) {
      local_c8.WeakPtr.ObjectIndex = 0;
      local_c8.WeakPtr.ObjectSerialNumber = 0;
      local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_c8.ObjectID.AssetPath.PackageName.Number = 0;
      local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_c8.ObjectID.AssetPath.AssetName.Number = 0;
      local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = iVar5;
      if (local_88._8_4_ != 0) {
        local_98.ArrayNum = local_88._8_4_ + -1;
      }
      local_98.DataPtr = (FSoftClassPath *)local_88._0_8_;
      FSoftObjectPath::SetPath((FSoftObjectPath *)&local_c8,(TStringView<wchar_t> *)&local_98);
      FSoftClassPath::operator=((FSoftClassPath *)local_78,(FSoftClassPath *)&local_c8);
      if (local_c8.ObjectID.AssetPath.AssetName != (FName)0x0) {
        FMemory::Free((void *)local_c8.ObjectID.AssetPath.AssetName);
      }
      uVar3 = local_78._16_8_;
      sVar16 = (size_t)(int)local_60;
      local_c8.WeakPtr.ObjectIndex = 0;
      local_c8.WeakPtr.ObjectSerialNumber = 0;
      local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ObjectID.SubPathString.Data.ArrayNum = (int)local_60;
      local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = local_78._0_4_;
      local_c8.ObjectID.AssetPath.PackageName.Number = local_78._4_4_;
      local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = local_78._8_4_;
      local_c8.ObjectID.AssetPath.AssetName.Number = local_78._12_4_;
      if ((int)local_60 == 0) {
        local_c8.ObjectID.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_60,0,(ForAnyElementType *)&local_c8.ObjectID.SubPathString,
                   (int)local_60,&local_c8.ObjectID.SubPathString.Data.ArrayMax);
        memcpy(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data,(void *)uVar3,sVar16);
      }
      TPersistentObjectPtr<FSoftObjectPath>::operator=(&local_58,&local_c8);
      FVar15.Data = (FScriptContainerElement *)local_88._0_8_;
      if ((FSoftClassPath *)local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FSoftClassPath *)0x0) {
        FMemory::Free(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        FVar15.Data = (FScriptContainerElement *)local_88._0_8_;
      }
    }
  }
  if ((FSoftClassPath *)FVar15.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  if ((FName)local_78._0_8_ == (FName)0x0) goto LAB_149c8bedf;
  TVar6.DebugPtr = (UClass *)FWeakObjectPtr::Get(&local_58.WeakPtr);
  if (TVar6.DebugPtr == (UClass *)0x0) {
    if (local_58.ObjectID.AssetPath.PackageName != (FName)0x0) {
      TVar7.DebugPtr = (UClass *)FSoftObjectPath::ResolveObject(&local_58.ObjectID);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar7.DebugPtr != (UClass *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
      }
      bVar4 = (*IsInAsyncLoadingThread)();
      if (((bVar4) && (TVar7.DebugPtr != (UClass *)0x0)) &&
         (pFVar8 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4)),
         ((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_149c8b959:
        if (((uint)(TVar7.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_149c8b967;
        bVar4 = true;
      }
      else {
        local_res8.DebugPtr = TVar7.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar7.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        FWeakObjectPtr::operator=(&local_58.WeakPtr,(FObjectPtr)&local_res8);
        if (TVar7.DebugPtr != (UClass *)0x0) goto LAB_149c8b959;
LAB_149c8b967:
        bVar4 = false;
      }
      TVar6.DebugPtr = TVar12.DebugPtr;
      if (bVar4) {
        TVar6.DebugPtr = TVar7.DebugPtr;
      }
    }
    if (TVar6.DebugPtr != (UClass *)0x0) goto LAB_149c8ba4b;
    if (local_58.ObjectID.AssetPath.PackageName != (FName)0x0) {
      FSoftObjectPath::TryLoad(&local_58.ObjectID,(FUObjectSerializeContext *)0x0);
      TVar6.DebugPtr = (UClass *)FWeakObjectPtr::Get(&local_58.WeakPtr);
      if ((TVar6.DebugPtr == (UClass *)0x0) &&
         (local_58.ObjectID.AssetPath.PackageName != (FName)0x0)) {
        TVar7.DebugPtr = (UClass *)FSoftObjectPath::ResolveObject(&local_58.ObjectID);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar7.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        bVar4 = (*IsInAsyncLoadingThread)();
        if (((bVar4) && (TVar7.DebugPtr != (UClass *)0x0)) &&
           (pFVar8 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4))
           , ((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_149c8ba2d:
          if (((uint)(TVar7.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_149c8ba3b;
          bVar4 = true;
        }
        else {
          local_res8.DebugPtr = TVar7.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          FWeakObjectPtr::operator=(&local_58.WeakPtr,(FObjectPtr)&local_res8);
          if (TVar7.DebugPtr != (UClass *)0x0) goto LAB_149c8ba2d;
LAB_149c8ba3b:
          bVar4 = false;
        }
        TVar6.DebugPtr = (UClass *)0x0;
        if (bVar4) {
          TVar6.DebugPtr = TVar7.DebugPtr;
        }
      }
      if (TVar6.DebugPtr != (UClass *)0x0) goto LAB_149c8ba4b;
    }
LAB_149c8baa0:
    pUVar10 = FSoftObjectPath::TryLoad((FSoftObjectPath *)local_78,(FUObjectSerializeContext *)0x0);
    if (pUVar10 != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_UBlueprint_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar9->_padding_)) &&
         (TVar6.DebugPtr =
               TSubclassOf<UObject>::operator*((TSubclassOf<UObject> *)&pUVar10[1].field_0x8),
         TVar6.DebugPtr != (UClass *)0x0)) goto LAB_149c8be03;
    }
    pFVar11 = FSoftObjectPath::ToString((FSoftObjectPath *)local_78,(FString *)&local_30);
    ::FString::ConcatFC((FString *)local_88,pFVar11,L"_C");
    local_c8.WeakPtr.ObjectIndex = 0;
    local_c8.WeakPtr.ObjectSerialNumber = 0;
    local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_c8.ObjectID.AssetPath.PackageName.Number = 0;
    local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_c8.ObjectID.AssetPath.AssetName.Number = 0;
    local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_88._8_4_ != 0) {
      iVar5 = local_88._8_4_ + -1;
    }
    local_98.DataPtr = (FSoftClassPath *)local_88._0_8_;
    local_98.ArrayNum = iVar5;
    FSoftObjectPath::SetPath((FSoftObjectPath *)&local_c8,(TStringView<wchar_t> *)&local_98);
    local_78._0_4_ = local_c8.WeakPtr.ObjectIndex;
    local_78._4_4_ = local_c8.WeakPtr.ObjectSerialNumber;
    local_78._8_4_ = local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
    local_78._12_4_ = local_c8.ObjectID.AssetPath.PackageName.Number;
    if ((FName)local_78._16_8_ != (FName)0x0) {
      FMemory::Free((void *)local_78._16_8_);
    }
    local_60 = local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data;
    iVar5 = (int)local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data;
    local_78._16_4_ = local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value;
    local_78._20_4_ = local_c8.ObjectID.AssetPath.AssetName.Number;
    local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_c8.ObjectID.AssetPath.AssetName.Number = 0;
    if ((FSoftClassPath *)local_88._0_8_ != (FSoftClassPath *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
      iVar5 = (int)local_60;
    }
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_30.TextData.Reference);
      iVar5 = (int)local_60;
    }
    uVar3 = local_78._16_8_;
    local_c8.WeakPtr.ObjectIndex = 0;
    local_c8.WeakPtr.ObjectSerialNumber = 0;
    local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = local_78._0_4_;
    local_c8.ObjectID.AssetPath.PackageName.Number = local_78._4_4_;
    local_c8.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = local_78._8_4_;
    local_c8.ObjectID.AssetPath.AssetName.Number = local_78._12_4_;
    local_c8.ObjectID.SubPathString.Data.ArrayNum = iVar5;
    if (iVar5 == 0) {
      local_c8.ObjectID.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,0,(ForAnyElementType *)&local_c8.ObjectID.SubPathString,iVar5,
                 &local_c8.ObjectID.SubPathString.Data.ArrayMax);
      memcpy(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data,(void *)uVar3,
             (longlong)iVar5);
    }
    TPersistentObjectPtr<FSoftObjectPath>::operator=(&local_58,&local_c8);
    if ((FSoftClassPath *)local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FSoftClassPath *)0x0) {
      FMemory::Free(local_c8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    TVar6.DebugPtr = (UClass *)FWeakObjectPtr::Get(&local_58.WeakPtr);
    if (TVar6.DebugPtr == (UClass *)0x0) {
      if (local_58.ObjectID.AssetPath.PackageName != (FName)0x0) {
        TVar7.DebugPtr = (UClass *)FSoftObjectPath::ResolveObject(&local_58.ObjectID);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar7.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
        }
        bVar4 = (*IsInAsyncLoadingThread)();
        if (((bVar4) && (TVar7.DebugPtr != (UClass *)0x0)) &&
           (pFVar8 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4))
           , ((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_149c8bcac:
          if (((uint)(TVar7.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_149c8bcba;
          bVar4 = true;
        }
        else {
          local_res8.DebugPtr = TVar7.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          FWeakObjectPtr::operator=(&local_58.WeakPtr,(FObjectPtr)&local_res8);
          if (TVar7.DebugPtr != (UClass *)0x0) goto LAB_149c8bcac;
LAB_149c8bcba:
          bVar4 = false;
        }
        TVar6.DebugPtr = TVar12.DebugPtr;
        if (bVar4) {
          TVar6.DebugPtr = TVar7.DebugPtr;
        }
      }
      if (TVar6.DebugPtr != (UClass *)0x0) goto LAB_149c8bda2;
      if (local_58.ObjectID.AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&local_58.ObjectID,(FUObjectSerializeContext *)0x0);
        TVar6.DebugPtr = (UClass *)FWeakObjectPtr::Get(&local_58.WeakPtr);
        if ((TVar6.DebugPtr == (UClass *)0x0) &&
           (local_58.ObjectID.AssetPath.PackageName != (FName)0x0)) {
          TVar7.DebugPtr = (UClass *)FSoftObjectPath::ResolveObject(&local_58.ObjectID);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          bVar4 = (*IsInAsyncLoadingThread)();
          if (((bVar4) && (TVar7.DebugPtr != (UClass *)0x0)) &&
             (pFVar8 = FUObjectArray::IndexToObject
                                 (&GUObjectArray,
                                  *(int *)((longlong)&(TVar7.DebugPtr)->_padding_ + 4)),
             ((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_149c8bd80:
            if (((uint)(TVar7.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_149c8bd8e;
            bVar4 = true;
          }
          else {
            local_res8.DebugPtr = TVar7.DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar7.DebugPtr != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
            }
            FWeakObjectPtr::operator=(&local_58.WeakPtr,(FObjectPtr)&local_res8);
            if (TVar7.DebugPtr != (UClass *)0x0) goto LAB_149c8bd80;
LAB_149c8bd8e:
            bVar4 = false;
          }
          TVar6.DebugPtr = (UClass *)0x0;
          if (bVar4) {
            TVar6.DebugPtr = TVar7.DebugPtr;
          }
        }
        if (TVar6.DebugPtr != (UClass *)0x0) goto LAB_149c8bda2;
      }
    }
    else {
LAB_149c8bda2:
      pUVar9 = Z_Construct_UClass_UClass_NoRegister();
      iVar5 = (int)pUVar9->_padding_;
      if (((iVar5 <= *(int *)((TVar6.DebugPtr)->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)((TVar6.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
           == &pUVar9->_padding_)) &&
         (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 != (UClass *)0x0)) {
        iVar5 = (int)pUVar9->_padding_;
        if (((int)(TVar6.DebugPtr)->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar9->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_149c8be03;
      }
    }
  }
  else {
LAB_149c8ba4b:
    pUVar9 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if (((*(int *)((TVar6.DebugPtr)->_padding_ + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)((TVar6.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar9->_padding_)) ||
       (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 == (UClass *)0x0))
    goto LAB_149c8baa0;
    iVar1 = (int)pUVar9->_padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_149c8baa0;
LAB_149c8be03:
    pUVar9 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar9 != (UClass *)0x0) {
      iVar5 = (int)pUVar9->_padding_;
      if (((int)(TVar6.DebugPtr)->_padding_ < iVar5) ||
         ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar5 * 8) !=
          &pUVar9->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_res8 = TVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar6.DebugPtr != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
          }
          TVar6 = local_res8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res8.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
          }
        }
        uVar14 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        TVar12.DebugPtr =
             (UClass *)
             TMapBase<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>_>
             ::FindOrAddImpl<TSubclassOf<AActor>_>
                       ((TMapBase<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<AActor>,FPCGDataPartitionBase<FPCGSpawnActorPartitionByAttribute,TSubclassOf<AActor>_>::Element,0>_>
                         *)this,uVar14 >> 0x10 ^ uVar14,(TSubclassOf<AActor> *)&local_res8.ObjectPtr
                       );
        goto LAB_149c8bedf;
      }
    }
  }
  pFVar2 = this->Context;
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_30,L"PCGSpawnActorElement",L"InvalidActorClass",
                       L"Invalid actor class in Spawn Actor by Attribute");
  PCGLog::LogErrorOnGraph(pFVar13,pFVar2);
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    TVar12.DebugPtr = (UClass *)0x0;
  }
LAB_149c8bedf:
  if (local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_58.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((FName)local_78._16_8_ != (FName)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  return (Element *)TVar12.DebugPtr;
}

