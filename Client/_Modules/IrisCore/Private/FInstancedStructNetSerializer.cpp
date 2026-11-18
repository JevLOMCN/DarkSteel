// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 24

// Apply @ 1442fb5c0

void __cdecl
UE::Net::FInstancedStructNetSerializer::Apply
          (FNetSerializationContext *param_1,FNetApplyArgs *param_2)

{
  undefined8 *puVar1;
  FInstancedStruct *this;
  longlong lVar2;
  UScriptStruct *pUVar3;
  FReplicationStateDescriptor *local_res10;
  
  puVar1 = (undefined8 *)param_2->Source;
  this = (FInstancedStruct *)param_2->Target;
  lVar2 = param_2->_padding_;
  pUVar3 = (UScriptStruct *)*puVar1;
  if (pUVar3 != (this->ScriptStruct).field0_0x0.DebugPtr) {
    FInstancedStruct::InitializeAs(this,pUVar3,(uchar *)0x0);
  }
  if (pUVar3 != (UScriptStruct *)0x0) {
    Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
              ((FInstancedStructDescriptorCache *)(lVar2 + 0x20),(UScriptStruct *)&local_res10);
    FReplicationStateOperations::ApplyStruct
              (param_1,this->StructMemory,(uchar *)puVar1[1],local_res10);
    if (local_res10 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_res10);
    }
  }
  return;
}

// CloneDynamicState @ 1442fcb30

void __cdecl
UE::Net::FInstancedStructNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  FNetSerializerAlignedStorage *this;
  longlong lVar2;
  FReplicationStateDescriptor *pFVar3;
  undefined8 this_00;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar4;
  bool bVar5;
  FReplicationStateDescriptor *local_res10;
  undefined1 local_58 [24];
  FNetCloneDynamicStateArgs local_40;
  
  pFVar1 = (FReplicationStateDescriptor *)param_2->Source;
  this = (FNetSerializerAlignedStorage *)param_2->Target;
  lVar2 = param_2->_padding_;
  FNetSerializerAlignedStorage::Clone(this,param_1,(FNetSerializerAlignedStorage *)pFVar1);
  if (((ulonglong)pFVar1->MemberProperties & 0x40) != 0) {
    FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
    TVar4 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                      ((FInstancedStructDescriptorCache *)(lVar2 + 0x20),(FName)&local_res10);
    this_00 = local_58._16_8_;
    if ((FReplicationStateDescriptor *)(local_58 + 0x10) != TVar4.Reference) {
      pFVar3 = (FReplicationStateDescriptor *)(TVar4.Reference)->MemberDescriptors;
      (TVar4.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
      bVar5 = (FReplicationStateDescriptor *)local_58._16_8_ != (FReplicationStateDescriptor *)0x0;
      local_58._16_8_ = pFVar3;
      if (bVar5) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_00);
      }
    }
    if (local_res10 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_res10);
    }
    if (((FReplicationStateDescriptor *)local_58._16_8_ != (FReplicationStateDescriptor *)0x0) ||
       (local_res10 = pFVar1,
       bVar5 = `UE::Net::FInstancedStructNetSerializer::CloneDynamicState'::__l6::<lambda_1>::
               operator()(&local_res10), bVar5)) {
      local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_40._padding_ = (longlong)local_58;
      local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_40.Source = (ulong64)pFVar1->MemberDescriptors;
      local_40.Target = (ulong64)this->Data;
      (*StructNetSerializer->CloneDynamicState)(param_1,&local_40);
    }
    FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
    return;
  }
  return;
}

// CollectNetReferences @ 1442fd440

void __cdecl
UE::Net::FInstancedStructNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  longlong lVar2;
  FReplicationStateDescriptor *pFVar3;
  undefined8 this;
  bool bVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FReplicationStateDescriptor *local_res10;
  undefined1 local_58 [24];
  FNetCollectReferencesArgs local_40;
  
  pFVar1 = (FReplicationStateDescriptor *)param_2->Source;
  lVar2 = param_2->_padding_;
  bVar4 = FQuantizedObjectReference::IsValid
                    ((FQuantizedObjectReference *)&pFVar1->MemberTraitsDescriptors);
  if (bVar4) {
    local_res10 = (FReplicationStateDescriptor *)CONCAT62(local_res10._2_6_,1);
    FNetReferenceCollector::Add
              ((FNetReferenceCollector *)param_2->Collector,(FNetReferenceInfo *)&local_res10,
               (FQuantizedObjectReference *)&pFVar1->MemberTraitsDescriptors,
               (FNetSerializerChangeMaskParam *)&param_2->_padding_);
  }
  if (((ulonglong)pFVar1->MemberProperties & 4) != 0) {
    FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
    TVar5 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                      ((FInstancedStructDescriptorCache *)(lVar2 + 0x20),(FName)&local_res10);
    this = local_58._16_8_;
    if ((FReplicationStateDescriptor *)(local_58 + 0x10) != TVar5.Reference) {
      pFVar3 = (FReplicationStateDescriptor *)(TVar5.Reference)->MemberDescriptors;
      (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
      bVar4 = (FReplicationStateDescriptor *)local_58._16_8_ != (FReplicationStateDescriptor *)0x0;
      local_58._16_8_ = pFVar3;
      if (bVar4) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this);
      }
    }
    if (local_res10 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_res10);
    }
    if (((FReplicationStateDescriptor *)local_58._16_8_ != (FReplicationStateDescriptor *)0x0) ||
       (local_res10 = pFVar1,
       bVar4 = `UE::Net::FInstancedStructNetSerializer::CollectNetReferences'::__l9::<lambda_1>::
               operator()(&local_res10), bVar4)) {
      local_40._padding_ = param_2->_padding_;
      local_40._padding_ = (longlong)local_58;
      local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_40.Source = (ulong64)pFVar1->MemberDescriptors;
      local_40.Collector = param_2->Collector;
      (*StructNetSerializer->CollectNetReferences)(param_1,&local_40);
    }
    FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
    return;
  }
  return;
}

// Dequantize @ 1442fef50

void __cdecl
UE::Net::FInstancedStructNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  int iVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  FInstancedStruct *this;
  longlong lVar3;
  FReplicationStateDescriptor *pFVar4;
  undefined8 this_00;
  bool bVar5;
  UClass *pUVar6;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18 [2];
  undefined1 local_78 [24];
  FNetDequantizeArgs local_60;
  
  TVar2 = (TObjectPtr<UScriptStruct_const_>_u_0)param_2->Source;
  this = (FInstancedStruct *)param_2->Target;
  lVar3 = param_2->_padding_;
  bVar5 = FQuantizedObjectReference::IsValid
                    ((FQuantizedObjectReference *)&(TVar2.DebugPtr)->_padding_);
  if (!bVar5) {
    FInstancedStruct::Reset(this);
    return;
  }
  local_res10.DebugPtr = (UScriptStruct *)0x0;
  local_60._padding_ = 0;
  local_60._padding_._0_4_ = 0;
  local_60.Target = (ulong64)&local_res10;
  local_60._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
  local_60.Source = (ulong64)&(TVar2.DebugPtr)->_padding_;
  (*ObjectNetSerializer->Dequantize)(param_1,&local_60);
  TVar8 = local_res10;
  TVar9.DebugPtr = (UScriptStruct *)0x0;
  if ((FReplicationStateDescriptor *)local_res10.DebugPtr != (FReplicationStateDescriptor *)0x0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&((FReplicationStateMemberSerializerDescriptor *)(TVar8.DebugPtr)->_padding_)[3].
                  SerializerConfig < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (&(((FReplicationStateMemberSerializerDescriptor *)(TVar8.DebugPtr)->_padding_)[3].
           Serializer)->Version + (longlong)iVar1 * 2) != &pUVar6->_padding_)) {
      TVar8.DebugPtr = (UScriptStruct *)0x0;
    }
    else {
      TVar9 = TVar8;
      if ((FReplicationStateDescriptor *)TVar8.DebugPtr != (FReplicationStateDescriptor *)0x0)
      goto LAB_1442ff03f;
    }
    local_res18[0].DebugPtr = (UScriptStruct *)&local_res10;
    `UE::Net::FInstancedStructNetSerializer::Dequantize'::__l9::<lambda_1>::operator()(local_res18);
    TVar9 = TVar8;
  }
  local_res18[0] = TVar2;
  bVar5 = `UE::Net::FInstancedStructNetSerializer::Dequantize'::__l10::<lambda_2>::operator()
                    (local_res18);
  if (!bVar5) {
    return;
  }
LAB_1442ff03f:
  if ((FReplicationStateDescriptor *)TVar9.DebugPtr !=
      (FReplicationStateDescriptor *)(this->ScriptStruct).field0_0x0.DebugPtr) {
    FInstancedStruct::InitializeAs(this,TVar9.DebugPtr,(uchar *)0x0);
  }
  FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)local_78);
  TVar7 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                    ((FInstancedStructDescriptorCache *)(lVar3 + 0x20),
                     (UScriptStruct *)&local_res18[0].ObjectPtr);
  this_00 = local_78._16_8_;
  if ((FReplicationStateDescriptor *)(local_78 + 0x10) != TVar7.Reference) {
    pFVar4 = (FReplicationStateDescriptor *)(TVar7.Reference)->MemberDescriptors;
    (TVar7.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    bVar5 = (FReplicationStateDescriptor *)local_78._16_8_ != (FReplicationStateDescriptor *)0x0;
    local_78._16_8_ = pFVar4;
    if (bVar5) {
      FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_00);
    }
  }
  if ((FReplicationStateDescriptor *)local_res18[0].DebugPtr != (FReplicationStateDescriptor *)0x0)
  {
    FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)local_res18[0].DebugPtr);
  }
  if (((FReplicationStateDescriptor *)local_78._16_8_ != (FReplicationStateDescriptor *)0x0) ||
     (local_res10 = TVar2,
     bVar5 = `UE::Net::FInstancedStructNetSerializer::Dequantize'::__l16::<lambda_3>::operator()
                       (&local_res10), bVar5)) {
    local_60._padding_ = param_2->_padding_;
    local_60._padding_ = (longlong)local_78;
    local_60._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_60._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_60.Source = (TVar2.DebugPtr)->_padding_;
    local_60.Target = (ulong64)this->StructMemory;
    (*StructNetSerializer->Dequantize)(param_1,&local_60);
  }
  FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)local_78);
  return;
}

// Deserialize @ 1442ffc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FInstancedStructNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  int iVar1;
  FFInstancedStructNetSerializerQuantizedData *this;
  FInstancedStructNetSerializerConfig *pFVar2;
  FReplicationStateDescriptor *pFVar3;
  code *pcVar4;
  FName FVar5;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> this_00;
  uint uVar6;
  UClass *pUVar7;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar8;
  FName *pFVar9;
  int iVar10;
  bool bVar11;
  FReplicationStateMemberFunctionDescriptor local_res8;
  FReplicationStateDescriptor **local_res18;
  FReplicationStateDescriptor *local_res20;
  FStructNetSerializerConfig local_108;
  FNetRefHandle_u_0 local_f0;
  undefined8 uStack_e8;
  FQuantizedRemoteObjectReference *local_e0;
  FReplicationStateMemberFunctionDescriptor *local_d8;
  FString local_d0;
  FNetDequantizeArgs local_c0;
  FNetDeserializeArgs local_98;
  FNetDeserializeArgs local_78;
  FName local_58;
  FString local_50;
  
  this = (FFInstancedStructNetSerializerQuantizedData *)param_2->Target;
  pFVar2 = (FInstancedStructNetSerializerConfig *)param_2->_padding_;
  uVar6 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar6 & 1) == 0) {
    InternalFreeStructInstance(param_1,pFVar2,this);
    FNetSerializerAlignedStorage::Free((FNetSerializerAlignedStorage *)this,param_1);
    (this->StructData).Data = (uchar *)0x0;
    (this->StructData).StorageNum = 0;
    (this->StructData).StorageMaxCapacity = 0;
    *(undefined8 *)&(this->StructData).StorageAlignment = 0;
    (this->StructType).NetReference.RefHandle.field0_0x0.Value = 0;
    (this->StructType).NetReference.PathToken = (FNetToken_u_0)0x0;
    (this->StructType).NetReference.Traits = None;
    (this->StructType).RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
    (this->StructName).ComparisonIndex = 0;
    (this->StructName).Number = 0;
    *(undefined8 *)&this->StructDescriptorTraits = 0;
    return;
  }
  local_98.Target = (ulong64)&local_f0;
  local_98._padding_ = param_2->_padding_;
  iVar10 = 0;
  local_98._padding_ = param_2->_padding_;
  local_f0.Value = 0;
  uStack_e8 = 0;
  local_e0 = (FQuantizedRemoteObjectReference *)0x0;
  local_res8.Function = (UFunction *)0x0;
  local_98._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
  (*ObjectNetSerializer->Deserialize)(param_1,&local_98);
  local_c0.Source = (ulong64)&local_f0;
  local_res8.Descriptor = (FReplicationStateDescriptor *)0x0;
  local_c0._padding_ = 0;
  local_c0.Target = (ulong64)&local_res8.Descriptor;
  local_c0._padding_._0_4_ = 0;
  local_c0._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
  (*ObjectNetSerializer->Dequantize)(param_1,&local_c0);
  pFVar3 = local_res8.Descriptor;
  if ((UFunction *)local_res8.Descriptor == (UFunction *)0x0) {
    if (local_res8.Function != (UFunction *)0x0) goto LAB_1442ffd57;
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString((FQuantizedObjectReference *)&local_f0._s_0,&local_50);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_res8.Function != (UFunction *)0x0) goto LAB_1442fff73;
    }
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8078501384019771151>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InstancedStructNetSerializer.cpp"
                        ,0xf1,"Struct != nullptr");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)((longlong)pFVar3->MemberSerializerDescriptors + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)pFVar3->MemberSerializerDescriptors + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      local_res8.Function = (UFunction *)0x0;
    }
    else {
      local_res8.Function = (UFunction *)pFVar3;
      if ((UFunction *)pFVar3 != (UFunction *)0x0) goto LAB_1442ffd57;
    }
    local_res18 = &local_res8.Descriptor;
    `UE::Net::FInstancedStructNetSerializer::Deserialize'::__l10::<lambda_1>::operator()
              (&local_res18);
    if (local_res8.Function != (UFunction *)0x0) {
LAB_1442ffd57:
      FStructNetSerializerConfig::FStructNetSerializerConfig(&local_108);
      TVar8 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                        (&pFVar2->DescriptorCache,(UScriptStruct *)&local_res20);
      this_00.Reference = local_108.StateDescriptor.Reference;
      if ((FReplicationStateDescriptor *)&local_108.StateDescriptor != TVar8.Reference) {
        pFVar3 = (FReplicationStateDescriptor *)(TVar8.Reference)->MemberDescriptors;
        (TVar8.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
        bVar11 = local_108.StateDescriptor.Reference != (FReplicationStateDescriptor *)0x0;
        local_108.StateDescriptor.Reference = pFVar3;
        if (bVar11) {
          FReplicationStateDescriptor::Release(this_00.Reference);
        }
      }
      if (local_res20 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::Release(local_res20);
      }
      if (local_108.StateDescriptor.Reference == (FReplicationStateDescriptor *)0x0) {
        local_d8 = &local_res8;
        `UE::Net::FInstancedStructNetSerializer::Deserialize'::__l19::<lambda_2>::operator()
                  (&local_d8);
        FVar5 = GNetError_InvalidValue;
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar5);
      }
      else {
        bVar11 = FQuantizedObjectReference::operator==
                           ((FQuantizedObjectReference *)&local_f0._s_0,&this->StructType);
        if (!bVar11) {
          InternalFreeStructInstance(param_1,pFVar2,this);
          uVar6 = (this->StructData).StorageNum;
          if (uVar6 != 0) {
            memset((this->StructData).Data,0,(ulonglong)uVar6);
          }
          FNetSerializerAlignedStorage::AdjustSize
                    ((FNetSerializerAlignedStorage *)this,param_1,
                     (local_108.StateDescriptor.Reference)->InternalSize,
                     (uint)(local_108.StateDescriptor.Reference)->InternalAlignment);
          (this->StructType).NetReference.RefHandle.field0_0x0 = local_f0;
          (this->StructType).NetReference.PathToken = (FNetToken)(undefined4)uStack_e8;
          (this->StructType).NetReference.Traits = uStack_e8._4_4_;
          (this->StructType).RemoteReferencePtr = local_e0;
          this->StructDescriptorTraits = (local_108.StateDescriptor.Reference)->Traits;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)local_res8.Function,&local_d0,(UObject *)0x0);
          if (local_d0.Data.ArrayNum != 0) {
            iVar10 = local_d0.Data.ArrayNum + -1;
          }
          pFVar9 = ::FName::FName(&local_58,iVar10,(wchar_t *)local_d0.Data.AllocatorInstance.Data,
                                  FNAME_Add);
          this->StructName = *pFVar9;
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        local_78.Target = (ulong64)(this->StructData).Data;
        local_78._padding_ = param_2->_padding_;
        local_78._padding_ = param_2->_padding_;
        local_78._padding_ = (longlong)&local_108;
        (*StructNetSerializer->Deserialize)(param_1,&local_78);
      }
      FStructNetSerializerConfig::~FStructNetSerializerConfig(&local_108);
      return;
    }
  }
LAB_1442fff73:
  FVar5 = GNetError_InvalidValue;
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar5);
  return;
}

// DeserializeDelta @ 144300c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FInstancedStructNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  int iVar1;
  FFInstancedStructNetSerializerQuantizedData *this;
  FInstancedStructNetSerializerConfig *pFVar2;
  FReplicationStateDescriptor *pFVar3;
  code *pcVar4;
  FName FVar5;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> this_00;
  uint uVar6;
  UClass *pUVar7;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar8;
  FName *pFVar9;
  int iVar10;
  bool bVar11;
  FReplicationStateMemberFunctionDescriptor FStackX_8;
  FReplicationStateDescriptor **ppFStackX_18;
  FReplicationStateDescriptor *pFStackX_20;
  FStructNetSerializerConfig FStack_108;
  FNetRefHandle_u_0 FStack_f0;
  undefined8 uStack_e8;
  FQuantizedRemoteObjectReference *pFStack_e0;
  FReplicationStateMemberFunctionDescriptor *pFStack_d8;
  FString FStack_d0;
  FNetDequantizeArgs FStack_c0;
  FNetDeserializeArgs FStack_98;
  FNetDeserializeArgs FStack_78;
  FName FStack_58;
  FString FStack_50;
  
  this = (FFInstancedStructNetSerializerQuantizedData *)param_2->_padding_;
  pFVar2 = (FInstancedStructNetSerializerConfig *)param_2->_padding_;
  uVar6 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar6 & 1) == 0) {
    InternalFreeStructInstance(param_1,pFVar2,this);
    FNetSerializerAlignedStorage::Free((FNetSerializerAlignedStorage *)this,param_1);
    (this->StructData).Data = (uchar *)0x0;
    (this->StructData).StorageNum = 0;
    (this->StructData).StorageMaxCapacity = 0;
    *(undefined8 *)&(this->StructData).StorageAlignment = 0;
    (this->StructType).NetReference.RefHandle.field0_0x0.Value = 0;
    (this->StructType).NetReference.PathToken = (FNetToken_u_0)0x0;
    (this->StructType).NetReference.Traits = None;
    (this->StructType).RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
    (this->StructName).ComparisonIndex = 0;
    (this->StructName).Number = 0;
    *(undefined8 *)&this->StructDescriptorTraits = 0;
    return;
  }
  FStack_98.Target = (ulong64)&FStack_f0;
  FStack_98._padding_ = param_2->_padding_;
  iVar10 = 0;
  FStack_98._padding_ = param_2->_padding_;
  FStack_f0.Value = 0;
  uStack_e8 = 0;
  pFStack_e0 = (FQuantizedRemoteObjectReference *)0x0;
  FStackX_8.Function = (UFunction *)0x0;
  FStack_98._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
  (*ObjectNetSerializer->Deserialize)(param_1,&FStack_98);
  FStack_c0.Source = (ulong64)&FStack_f0;
  FStackX_8.Descriptor = (FReplicationStateDescriptor *)0x0;
  FStack_c0._padding_ = 0;
  FStack_c0.Target = (ulong64)&FStackX_8.Descriptor;
  FStack_c0._padding_._0_4_ = 0;
  FStack_c0._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
  (*ObjectNetSerializer->Dequantize)(param_1,&FStack_c0);
  pFVar3 = FStackX_8.Descriptor;
  if ((UFunction *)FStackX_8.Descriptor == (UFunction *)0x0) {
    if (FStackX_8.Function != (UFunction *)0x0) goto LAB_1442ffd57;
    if (1 < (byte)LogIris._0_1_) {
      FQuantizedObjectReference::ToString((FQuantizedObjectReference *)&FStack_f0._s_0,&FStack_50);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
      }
      if (FStackX_8.Function != (UFunction *)0x0) goto LAB_1442fff73;
    }
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8078501384019771151>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InstancedStructNetSerializer.cpp"
                        ,0xf1,"Struct != nullptr");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)((longlong)pFVar3->MemberSerializerDescriptors + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)((longlong)pFVar3->MemberSerializerDescriptors + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      FStackX_8.Function = (UFunction *)0x0;
    }
    else {
      FStackX_8.Function = (UFunction *)pFVar3;
      if ((UFunction *)pFVar3 != (UFunction *)0x0) goto LAB_1442ffd57;
    }
    ppFStackX_18 = &FStackX_8.Descriptor;
    `UE::Net::FInstancedStructNetSerializer::Deserialize'::__l10::<lambda_1>::operator()
              (&ppFStackX_18);
    if (FStackX_8.Function != (UFunction *)0x0) {
LAB_1442ffd57:
      FStructNetSerializerConfig::FStructNetSerializerConfig(&FStack_108);
      TVar8 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                        (&pFVar2->DescriptorCache,(UScriptStruct *)&pFStackX_20);
      this_00.Reference = FStack_108.StateDescriptor.Reference;
      if ((FReplicationStateDescriptor *)&FStack_108.StateDescriptor != TVar8.Reference) {
        pFVar3 = (FReplicationStateDescriptor *)(TVar8.Reference)->MemberDescriptors;
        (TVar8.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
        bVar11 = FStack_108.StateDescriptor.Reference != (FReplicationStateDescriptor *)0x0;
        FStack_108.StateDescriptor.Reference = pFVar3;
        if (bVar11) {
          FReplicationStateDescriptor::Release(this_00.Reference);
        }
      }
      if (pFStackX_20 != (FReplicationStateDescriptor *)0x0) {
        FReplicationStateDescriptor::Release(pFStackX_20);
      }
      if (FStack_108.StateDescriptor.Reference == (FReplicationStateDescriptor *)0x0) {
        pFStack_d8 = &FStackX_8;
        `UE::Net::FInstancedStructNetSerializer::Deserialize'::__l19::<lambda_2>::operator()
                  (&pFStack_d8);
        FVar5 = GNetError_InvalidValue;
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar5);
      }
      else {
        bVar11 = FQuantizedObjectReference::operator==
                           ((FQuantizedObjectReference *)&FStack_f0._s_0,&this->StructType);
        if (!bVar11) {
          InternalFreeStructInstance(param_1,pFVar2,this);
          uVar6 = (this->StructData).StorageNum;
          if (uVar6 != 0) {
            memset((this->StructData).Data,0,(ulonglong)uVar6);
          }
          FNetSerializerAlignedStorage::AdjustSize
                    ((FNetSerializerAlignedStorage *)this,param_1,
                     (FStack_108.StateDescriptor.Reference)->InternalSize,
                     (uint)(FStack_108.StateDescriptor.Reference)->InternalAlignment);
          (this->StructType).NetReference.RefHandle.field0_0x0 = FStack_f0;
          (this->StructType).NetReference.PathToken = (FNetToken)(undefined4)uStack_e8;
          (this->StructType).NetReference.Traits = uStack_e8._4_4_;
          (this->StructType).RemoteReferencePtr = pFStack_e0;
          this->StructDescriptorTraits = (FStack_108.StateDescriptor.Reference)->Traits;
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)FStackX_8.Function,&FStack_d0,(UObject *)0x0);
          if (FStack_d0.Data.ArrayNum != 0) {
            iVar10 = FStack_d0.Data.ArrayNum + -1;
          }
          pFVar9 = ::FName::FName(&FStack_58,iVar10,(wchar_t *)FStack_d0.Data.AllocatorInstance.Data
                                  ,FNAME_Add);
          this->StructName = *pFVar9;
          if (FStack_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d0.Data.AllocatorInstance.Data);
          }
        }
        FStack_78.Target = (ulong64)(this->StructData).Data;
        FStack_78._padding_ = param_2->_padding_;
        FStack_78._padding_ = param_2->_padding_;
        FStack_78._padding_ = (longlong)&FStack_108;
        (*StructNetSerializer->Deserialize)(param_1,&FStack_78);
      }
      FStructNetSerializerConfig::~FStructNetSerializerConfig(&FStack_108);
      return;
    }
  }
LAB_1442fff73:
  FVar5 = GNetError_InvalidValue;
  FNetSerializationContext::SetBitStreamOverflow(param_1);
  FNetErrorContext::SetError(&param_1->ErrorContext,FVar5);
  return;
}

// FreeDynamicState @ 144302d20

void __cdecl
UE::Net::FInstancedStructNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FFInstancedStructNetSerializerQuantizedData *this;
  
  this = (FFInstancedStructNetSerializerQuantizedData *)param_2->Source;
  InternalFreeStructInstance(param_1,(FInstancedStructNetSerializerConfig *)param_2->_padding_,this)
  ;
  FNetSerializerAlignedStorage::Free((FNetSerializerAlignedStorage *)this,param_1);
  return;
}

// FreeStructInstance @ 144302f00

void __cdecl
UE::Net::FInstancedStructNetSerializer::FreeStructInstance
          (FNetSerializationContext *param_1,FInstancedStructNetSerializerConfig *param_2,
          FFInstancedStructNetSerializerQuantizedData *param_3)

{
  uint uVar1;
  
  InternalFreeStructInstance(param_1,param_2,param_3);
  uVar1 = (param_3->StructData).StorageNum;
  if (uVar1 != 0) {
    memset((param_3->StructData).Data,0,(ulonglong)uVar1);
    return;
  }
  return;
}

// InternalFreeStructInstance @ 144307a10

void __cdecl
UE::Net::FInstancedStructNetSerializer::InternalFreeStructInstance
          (FNetSerializationContext *param_1,FInstancedStructNetSerializerConfig *param_2,
          FFInstancedStructNetSerializerQuantizedData *param_3)

{
  FReplicationStateDescriptor *pFVar1;
  undefined8 this;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar2;
  bool bVar3;
  FReplicationStateDescriptor *local_res18 [2];
  undefined1 local_48 [24];
  FNetFreeDynamicStateArgs local_30;
  
  if (((param_3->StructData).StorageNum != 0) &&
     ((param_3->StructDescriptorTraits & HasDynamicState) != None)) {
    FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)local_48);
    TVar2 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                      (&param_2->DescriptorCache,(FName)local_res18);
    this = local_48._16_8_;
    if ((FReplicationStateDescriptor *)(local_48 + 0x10) != TVar2.Reference) {
      pFVar1 = (FReplicationStateDescriptor *)(TVar2.Reference)->MemberDescriptors;
      (TVar2.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
      bVar3 = (FReplicationStateDescriptor *)local_48._16_8_ != (FReplicationStateDescriptor *)0x0;
      local_48._16_8_ = pFVar1;
      if (bVar3) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this);
      }
    }
    if (local_res18[0] != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_res18[0]);
    }
    local_30._padding_ = (longlong)local_48;
    local_30._padding_ = 0;
    local_30.Source = (ulong64)(param_3->StructData).Data;
    local_30._padding_._0_4_ = 0;
    (*StructNetSerializer->FreeDynamicState)(param_1,&local_30);
    FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)local_48);
  }
  return;
}

// IsEqual @ 144308960

bool __cdecl
UE::Net::FInstancedStructNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  FInstancedStruct *this;
  FInstancedStruct *pFVar1;
  bool bVar2;
  int iVar3;
  
  this = (FInstancedStruct *)param_2->Source0;
  pFVar1 = (FInstancedStruct *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    bVar2 = FInstancedStruct::Identical(this,pFVar1,0);
    return bVar2;
  }
  if (*(int *)&this->StructMemory == *(int *)&pFVar1->StructMemory) {
    bVar2 = FQuantizedObjectReference::operator==
                      ((FQuantizedObjectReference *)&this[1].StructMemory,
                       (FQuantizedObjectReference *)&pFVar1[1].StructMemory);
    if (bVar2) {
      iVar3 = memcmp((this->ScriptStruct).field0_0x0.DebugPtr,
                     (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                     (ulonglong)*(uint *)&this->StructMemory);
      return iVar3 == 0;
    }
  }
  return false;
}

// Quantize @ 14430cbd0

void __cdecl
UE::Net::FInstancedStructNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  uint uVar1;
  longlong *plVar2;
  FFInstancedStructNetSerializerQuantizedData *this;
  FInstancedStructNetSerializerConfig *pFVar3;
  FName FVar4;
  FName this_00;
  longlong this_01;
  bool bVar5;
  FName *pFVar6;
  int iVar7;
  UObjectBaseUtility *local_res10;
  FName local_res18 [2];
  FString local_98;
  FNetQuantizeArgs local_88;
  FNetQuantizeArgs local_60;
  
  plVar2 = (longlong *)param_2->Source;
  this = (FFInstancedStructNetSerializerQuantizedData *)param_2->Target;
  pFVar3 = (FInstancedStructNetSerializerConfig *)param_2->_padding_;
  if ((plVar2[1] == 0) || ((UObjectBaseUtility *)*plVar2 == (UObjectBaseUtility *)0x0)) {
LAB_14430cdab:
    InternalFreeStructInstance(param_1,pFVar3,this);
    FNetSerializerAlignedStorage::Free((FNetSerializerAlignedStorage *)this,param_1);
    (this->StructData).Data = (uchar *)0x0;
    (this->StructData).StorageNum = 0;
    (this->StructData).StorageMaxCapacity = 0;
    *(undefined8 *)&(this->StructData).StorageAlignment = 0;
    (this->StructType).NetReference.RefHandle.field0_0x0.Value = 0;
    (this->StructType).NetReference.PathToken = (FNetToken_u_0)0x0;
    (this->StructType).NetReference.Traits = None;
    (this->StructType).RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
    (this->StructName).ComparisonIndex = 0;
    (this->StructName).Number = 0;
    *(undefined8 *)&this->StructDescriptorTraits = 0;
  }
  else {
    local_res10 = (UObjectBaseUtility *)*plVar2;
    Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
              (&pFVar3->DescriptorCache,(UScriptStruct *)local_res18);
    this_00 = local_res18[0];
    if (local_res18[0] == (FName)0x0) {
      local_res18[0] = (FName)&local_res10;
      bVar5 = `UE::Net::FInstancedStructNetSerializer::Quantize'::__l6::<lambda_1>::operator()
                        (local_res18);
      if (!bVar5) goto LAB_14430cdab;
    }
    UObjectBaseUtility::GetPathName(local_res10,&local_98,(UObject *)0x0);
    iVar7 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar6 = ::FName::FName(local_res18,iVar7,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar4 = *pFVar6;
    if (FVar4 != this->StructName) {
      InternalFreeStructInstance(param_1,pFVar3,this);
      uVar1 = (this->StructData).StorageNum;
      if (uVar1 != 0) {
        memset((this->StructData).Data,0,(ulonglong)uVar1);
      }
      FNetSerializerAlignedStorage::AdjustSize
                ((FNetSerializerAlignedStorage *)this,param_1,*(uint *)((longlong)this_00 + 0x74),
                 (uint)*(ushort *)((longlong)this_00 + 0x7a));
      this->StructName = FVar4;
      this->StructDescriptorTraits = *(EReplicationStateTraits *)((longlong)this_00 + 0xb8);
      local_88.Source = (ulong64)&local_res10;
      local_88._padding_ = param_2->_padding_;
      local_88._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_88._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_88.Target = (ulong64)&this->StructType;
      local_88._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
      (*ObjectNetSerializer->Quantize)(param_1,&local_88);
    }
    if ((this->StructData).StorageNum != 0) {
      FStructNetSerializerConfig::FStructNetSerializerConfig
                ((FStructNetSerializerConfig *)&local_88);
      this_01 = local_88._padding_;
      FVar4 = local_res18[0];
      if ((FName)local_88._padding_ != this_00) {
        local_res18[0].ComparisonIndex = this_00.ComparisonIndex.Value;
        local_res18[0].Number = this_00.Number;
        local_88._padding_._0_4_ = local_res18[0].ComparisonIndex.Value;
        local_88._padding_._4_4_ = local_res18[0].Number;
        local_res18[0] = FVar4;
        if (this_00 != (FName)0x0) {
          FReplicationStateDescriptor::AddRef((FReplicationStateDescriptor *)this_00);
        }
        if ((FName)this_01 != (FName)0x0) {
          FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_01);
        }
      }
      local_60.Source = plVar2[1];
      local_60._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_60._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_60._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_60._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_60.Target = (ulong64)(this->StructData).Data;
      local_60._padding_ = (longlong)&local_88;
      (*StructNetSerializer->Quantize)(param_1,&local_60);
      FStructNetSerializerConfig::~FStructNetSerializerConfig
                ((FStructNetSerializerConfig *)&local_88);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (this_00 != (FName)0x0) {
      FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_00);
    }
  }
  return;
}

// Reset @ 14430f050

void __cdecl
UE::Net::FInstancedStructNetSerializer::Reset
          (FNetSerializationContext *param_1,FInstancedStructNetSerializerConfig *param_2,
          FFInstancedStructNetSerializerQuantizedData *param_3)

{
  InternalFreeStructInstance(param_1,param_2,param_3);
  FNetSerializerAlignedStorage::Free(&param_3->StructData,param_1);
  (param_3->StructData).Data = (uchar *)0x0;
  (param_3->StructData).StorageNum = 0;
  (param_3->StructData).StorageMaxCapacity = 0;
  *(undefined8 *)&(param_3->StructData).StorageAlignment = 0;
  (param_3->StructType).NetReference.RefHandle.field0_0x0.Value = 0;
  (param_3->StructType).NetReference.PathToken = (FNetToken_u_0)0x0;
  (param_3->StructType).NetReference.Traits = None;
  (param_3->StructType).RemoteReferencePtr = (FQuantizedRemoteObjectReference *)0x0;
  (param_3->StructName).ComparisonIndex = 0;
  (param_3->StructName).Number = 0;
  *(undefined8 *)&param_3->StructDescriptorTraits = 0;
  return;
}

// Serialize @ 144310ba0

void __cdecl
UE::Net::FInstancedStructNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  FNetBitStreamWriter *this;
  FReplicationStateDescriptor *pFVar1;
  longlong lVar2;
  FReplicationStateDescriptor *pFVar3;
  undefined8 this_00;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar4;
  bool bVar5;
  FReplicationStateDescriptor *local_res8;
  undefined1 local_58 [24];
  FNetSerializeArgs local_40;
  
  this = param_1->BitStreamWriter;
  pFVar1 = (FReplicationStateDescriptor *)param_2->Source;
  lVar2 = param_2->_padding_;
  FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
  if (pFVar1->MemberReferenceDescriptors != (FReplicationStateMemberReferenceDescriptor *)0x0) {
    TVar4 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                      ((FInstancedStructDescriptorCache *)(lVar2 + 0x20),(FName)&local_res8);
    this_00 = local_58._16_8_;
    if ((FReplicationStateDescriptor *)(local_58 + 0x10) != TVar4.Reference) {
      pFVar3 = (FReplicationStateDescriptor *)(TVar4.Reference)->MemberDescriptors;
      (TVar4.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
      bVar5 = (FReplicationStateDescriptor *)local_58._16_8_ != (FReplicationStateDescriptor *)0x0;
      local_58._16_8_ = pFVar3;
      if (bVar5) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_00);
      }
    }
    if (local_res8 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_res8);
    }
    bVar5 = (FReplicationStateDescriptor *)local_58._16_8_ == (FReplicationStateDescriptor *)0x0;
    if (!bVar5) goto LAB_144310c4a;
    local_res8 = pFVar1;
    `UE::Net::FInstancedStructNetSerializer::Serialize'::__l5::<lambda_1>::operator()(&local_res8);
  }
  bVar5 = (FReplicationStateDescriptor *)local_58._16_8_ == (FReplicationStateDescriptor *)0x0;
LAB_144310c4a:
  local_res8 = (FReplicationStateDescriptor *)CONCAT71(local_res8._1_7_,!bVar5);
  FNetBitStreamWriter::WriteBits(this,(uint)!bVar5,1);
  if ((char)local_res8 != '\0') {
    local_40.Source = (ulong64)&pFVar1->MemberTraitsDescriptors;
    local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_40._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
    (*ObjectNetSerializer->Serialize)(param_1,&local_40);
    local_40.Source = (ulong64)pFVar1->MemberDescriptors;
    local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_40._padding_ = (longlong)local_58;
    (*StructNetSerializer->Serialize)(param_1,&local_40);
  }
  FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)local_58);
  return;
}

// SerializeDelta @ 144311a70

void __cdecl
UE::Net::FInstancedStructNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  FReplicationStateDescriptor *pFVar1;
  longlong lVar2;
  FReplicationStateDescriptor *pFVar3;
  undefined8 this_00;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar4;
  bool bVar5;
  FReplicationStateDescriptor *pFStackX_8;
  undefined1 auStack_58 [24];
  FNetSerializeArgs FStack_40;
  
  this = param_1->BitStreamWriter;
  pFVar1 = (FReplicationStateDescriptor *)param_2->_padding_;
  lVar2 = param_2->_padding_;
  FStructNetSerializerConfig::FStructNetSerializerConfig((FStructNetSerializerConfig *)auStack_58);
  if (pFVar1->MemberReferenceDescriptors != (FReplicationStateMemberReferenceDescriptor *)0x0) {
    TVar4 = Net::Private::FInstancedStructDescriptorCache::FindOrAddDescriptor
                      ((FInstancedStructDescriptorCache *)(lVar2 + 0x20),(FName)&pFStackX_8);
    this_00 = auStack_58._16_8_;
    if ((FReplicationStateDescriptor *)(auStack_58 + 0x10) != TVar4.Reference) {
      pFVar3 = (FReplicationStateDescriptor *)(TVar4.Reference)->MemberDescriptors;
      (TVar4.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
      bVar5 = (FReplicationStateDescriptor *)auStack_58._16_8_ != (FReplicationStateDescriptor *)0x0
      ;
      auStack_58._16_8_ = pFVar3;
      if (bVar5) {
        FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)this_00);
      }
    }
    if (pFStackX_8 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(pFStackX_8);
    }
    bVar5 = (FReplicationStateDescriptor *)auStack_58._16_8_ == (FReplicationStateDescriptor *)0x0;
    if (!bVar5) goto LAB_144310c4a;
    pFStackX_8 = pFVar1;
    `UE::Net::FInstancedStructNetSerializer::Serialize'::__l5::<lambda_1>::operator()(&pFStackX_8);
  }
  bVar5 = (FReplicationStateDescriptor *)auStack_58._16_8_ == (FReplicationStateDescriptor *)0x0;
LAB_144310c4a:
  pFStackX_8 = (FReplicationStateDescriptor *)CONCAT71(pFStackX_8._1_7_,!bVar5);
  FNetBitStreamWriter::WriteBits(this,(uint)!bVar5,1);
  if ((char)pFStackX_8 != '\0') {
    FStack_40.Source = (ulong64)&pFVar1->MemberTraitsDescriptors;
    FStack_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    FStack_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    FStack_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    FStack_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    FStack_40._padding_ = (longlong)ObjectNetSerializer->DefaultConfig;
    (*ObjectNetSerializer->Serialize)(param_1,&FStack_40);
    FStack_40.Source = (ulong64)pFVar1->MemberDescriptors;
    FStack_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    FStack_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    FStack_40._padding_._0_4_ = (undefined4)param_2->_padding_;
    FStack_40._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    FStack_40._padding_ = (longlong)auStack_58;
    (*StructNetSerializer->Serialize)(param_1,&FStack_40);
  }
  FStructNetSerializerConfig::~FStructNetSerializerConfig((FStructNetSerializerConfig *)auStack_58);
  return;
}

// Validate @ 144318280

bool __cdecl
UE::Net::FInstancedStructNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  return true;
}

// operator() @ 1504b9ed0

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Serialize'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771250>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x30),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771250>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b9f3b;
    }
  }
  bVar2 = false;
LAB_1504b9f3b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ba250

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::CloneDynamicState'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019770962>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x30),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019770962>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba2bb;
    }
  }
  bVar2 = false;
LAB_1504ba2bb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504ba3e0

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Quantize'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771115>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771115>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504ba450;
    }
  }
  bVar2 = false;
LAB_1504ba450:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bace0

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::CollectNetReferences'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019770923>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x30),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019770923>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bad4b;
    }
  }
  bVar2 = false;
LAB_1504bad4b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bad80

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Dequantize'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771040>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771040>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504baded;
    }
  }
  bVar2 = false;
LAB_1504baded:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bae20

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Deserialize'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771192>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771192>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bae8d;
    }
  }
  bVar2 = false;
LAB_1504bae8d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb520

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Dequantize'::__l10::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771036>);
  if (bVar2) {
    UE::Net::FQuantizedObjectReference::ToString
              ((FQuantizedObjectReference *)(*(longlong *)this + 0x18),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771036>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb58b;
    }
  }
  bVar2 = false;
LAB_1504bb58b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb610

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Deserialize'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771176>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771176>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bb67d;
    }
  }
  bVar2 = false;
LAB_1504bb67d:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504bb9b0

bool __thiscall
`UE::Net::FInstancedStructNetSerializer::Dequantize'::__l16::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8078501384019771025>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x30),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8078501384019771025>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bba1b;
    }
  }
  bVar2 = false;
LAB_1504bba1b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

