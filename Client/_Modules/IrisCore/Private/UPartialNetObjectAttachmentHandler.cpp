// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 10

// StaticClass @ 14425e210

UClass * __cdecl UPartialNetObjectAttachmentHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandler",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton,
               StaticRegisterNativesUPartialNetObjectAttachmentHandler,0x150,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandler>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandler>,local_res8,
               USequentialPartialNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton;
}

// UPartialNetObjectAttachmentHandler @ 144268770

UPartialNetObjectAttachmentHandler * __thiscall
UPartialNetObjectAttachmentHandler::UPartialNetObjectAttachmentHandler
          (UPartialNetObjectAttachmentHandler *this,FVTableHelper *param_1)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UE::Net::Private::FNetExports::FNetExports(&this->NetExports);
  return this;
}

// UPartialNetObjectAttachmentHandler @ 1442687b0

UPartialNetObjectAttachmentHandler * __thiscall
UPartialNetObjectAttachmentHandler::UPartialNetObjectAttachmentHandler
          (UPartialNetObjectAttachmentHandler *this)

{
  UNetBlobHandler::UNetBlobHandler((UNetBlobHandler *)this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UE::Net::Private::FNetExports::FNetExports(&this->NetExports);
  return this;
}

// ~UPartialNetObjectAttachmentHandler @ 1442697f0

void __thiscall
UPartialNetObjectAttachmentHandler::~UPartialNetObjectAttachmentHandler
          (UPartialNetObjectAttachmentHandler *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INetBlobReceiver__;
  UE::Net::Private::FNetExports::~FNetExports(&this->NetExports);
  this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__UObject__;
  this->_padding_ = (longlong)&USequentialPartialNetBlobHandler::_vftable__for__INetBlobReceiver__;
  UNetBlobHandler::~UNetBlobHandler((UNetBlobHandler *)this);
  return;
}

// GetConfig @ 144279cb0

UPartialNetObjectAttachmentHandlerConfig * __thiscall
UPartialNetObjectAttachmentHandler::GetConfig(UPartialNetObjectAttachmentHandler *this)

{
  int iVar1;
  UPartialNetObjectAttachmentHandlerConfig *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UPartialNetObjectAttachmentHandlerConfig *)this->_padding_;
  if (pUVar2 != (UPartialNetObjectAttachmentHandlerConfig *)0x0) {
    pUVar3 = UPartialNetObjectAttachmentHandlerConfig::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UPartialNetObjectAttachmentHandlerConfig_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<USequentialPartialNetBlobHandlerConfig_const_>
                         (&local_18,(USequentialPartialNetBlobHandlerConfig *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 14427c400

UClass * __cdecl UPartialNetObjectAttachmentHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"PartialNetObjectAttachmentHandler",
               &Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton,
               StaticRegisterNativesUPartialNetObjectAttachmentHandler,0x150,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPartialNetObjectAttachmentHandler>,
               InternalVTableHelperCtorCaller<UPartialNetObjectAttachmentHandler>,local_res8,
               USequentialPartialNetBlobHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPartialNetObjectAttachmentHandler.InnerSingleton;
}

// Init @ 14427e310

void __thiscall
UPartialNetObjectAttachmentHandler::Init
          (UPartialNetObjectAttachmentHandler *this,
          FPartialNetObjectAttachmentHandlerInitParams *param_1)

{
  UPartialNetObjectAttachmentHandlerConfig *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (0x10000 < param_1->Config->BitCountSplitThreshold) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6747963439622127591>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\PartialNetObjectAttachmentHandler.cpp"
                       ,0x19,"InitParams.Config->GetBitCountSplitThreshold() <= 65536");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = param_1->Config;
  this->_padding_ = (longlong)param_1->ReplicationSystem;
  this->_padding_ = (longlong)pUVar1;
  return;
}

// PreSerializeAndSplitNetBlob @ 144286fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPartialNetObjectAttachmentHandler::PreSerializeAndSplitNetBlob
          (UPartialNetObjectAttachmentHandler *this,uint param_1,
          TRefCountPtr<UE::Net::FNetObjectAttachment> *param_2,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  ENetBlobFlags *pEVar1;
  FScriptContainerElement *pFVar2;
  FNetObjectAttachment *pFVar3;
  bool bVar4;
  int iVar5;
  UPartialNetObjectAttachmentHandlerConfig *pUVar6;
  longlong lVar7;
  FNetBlob *pFVar8;
  undefined8 *puVar9;
  FNetBlob *pFVar10;
  uint uVar11;
  undefined1 auStackY_8e8 [32];
  ForAnyElementType local_8b8;
  int local_8b0 [2];
  FNetBlobCreationInfo local_8a8;
  FNetRefHandle_u_0 *local_8a0;
  FNetRefHandle_u_0 local_898;
  undefined8 uStack_890;
  wchar_t *local_888;
  ulonglong uStack_880;
  undefined8 local_878;
  FNetBitStreamWriter local_870;
  FNetExportContext local_850;
  FNetRefHandle_u_0 *local_840;
  FNetRefHandle_u_0 local_838;
  FInternalNetSerializationContext local_830;
  FNetRefHandle_u_0 local_7f8;
  longlong local_7f0;
  undefined8 local_7e0 [95];
  undefined4 local_4e8;
  undefined8 local_4e0;
  FNetBitStreamWriter *local_4d8;
  undefined8 local_4d0;
  FInternalNetSerializationContext *local_4c8;
  FNetExportContext *local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  uint local_4a0;
  undefined4 local_49c;
  uint local_498;
  FBatchExports local_488;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  pUVar6 = GetConfig(this);
  uVar11 = pUVar6->BitCountSplitThreshold;
  if ((param_2->Reference->_padding_ & 0x100000000) == 0) {
    if ((*(byte *)(this->_padding_ + 0x50) & 1) == 0) {
      pUVar6 = GetConfig(this);
      uVar11 = pUVar6->ClientUnreliableBitCountSplitThreshold;
    }
    else {
      pUVar6 = GetConfig(this);
      uVar11 = pUVar6->ServerUnreliableBitCountSplitThreshold;
    }
  }
  pFVar10 = (FNetBlob *)0x0;
  local_8b8.Data = (FScriptContainerElement *)0x0;
  local_8b0[0] = 0;
  local_8b0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar11 >> 5,&local_8b8,local_8b0,local_8b0 + 1);
  UE::Net::FNetBitStreamWriter::FNetBitStreamWriter(&local_870);
  UE::Net::FNetBitStreamWriter::InitBytes(&local_870,local_8b8.Data,local_8b0[0] * 4);
  UE::Net::Private::FInternalNetSerializationContext::FInternalNetSerializationContext
            (&local_830,(UReplicationSystem *)this->_padding_);
  lVar7 = 0x20;
  local_7f8.Value = 0;
  puVar9 = local_7e0;
  local_7f0 = 0;
  do {
    *puVar9 = 0;
    puVar9 = puVar9 + 3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  local_498 = local_498 & 0xfffffffc;
  local_4d8 = &local_870;
  pFVar3 = param_2->Reference;
  local_4c8 = &local_830;
  local_850.AcknowledgedExports = &(this->NetExports).AcknowledgedExports;
  local_850.BatchExports = &local_488;
  local_840 = &local_7f8;
  local_4c0 = &local_850;
  local_8a0 = &local_7f8;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4d0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  local_49c = 0xffffffff;
  local_488.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetRefHandle>)0x0;
  local_488.HandlesExportedInCurrentBatch.ArrayNum = 0;
  local_488.HandlesExportedInCurrentBatch.ArrayMax = 0x20;
  local_488.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_488.NetTokensExportedInCurrentBatch.ArrayNum = 0;
  local_488.NetTokensExportedInCurrentBatch.ArrayMax = 0x20;
  local_488.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetObjectReference>)0x0;
  local_488.ReferencesPendingExportInCurrentBatch.ArrayNum = 0;
  local_488.ReferencesPendingExportInCurrentBatch.ArrayMax = 0x20;
  local_488.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FNetToken>)0x0;
  local_488.NetTokensPendingExportInCurrentBatch.ArrayNum = 0;
  local_488.NetTokensPendingExportInCurrentBatch.ArrayMax = 0x20;
  local_838.Value = 0;
  local_898.Value = 0;
  uStack_890._0_4_ = (FNetToken_u_0)0x0;
  uStack_890._4_4_ = None;
  local_4a0 = param_1;
  if (param_4) {
    (**(code **)pFVar3->_padding_)
              (pFVar3,&local_7f8,(pFVar3->NetObjectReference).RefHandle.field0_0x0.Value);
  }
  else {
    (*(code *)((undefined8 *)pFVar3->_padding_)[2])(pFVar3,&local_7f8);
  }
  if (local_7f0 == 0) {
    bVar4 = UE::Net::FNetSerializationContext::IsBitStreamOverflown
                      ((FNetSerializationContext *)&local_7f8._s_0);
    if (bVar4) {
      UE::Net::Private::FNetExportRollbackScope::Rollback((FNetExportRollbackScope *)&local_8a0);
    }
    UE::Net::FNetBitStreamWriter::CommitWrites(&local_870);
    if (local_870.OverflowBitCount == 0) {
      pFVar8 = ::operator_new(0x70);
      if (pFVar8 != (FNetBlob *)0x0) {
        UE::Net::FNetBlob::FNetBlob(pFVar8,(FNetBlobCreationInfo *)&param_2->Reference->_padding_);
        pFVar8->_padding_ = (longlong)&___7FShrinkWrapNetObjectAttachment_Net_UE__6B_;
        pFVar8[1]._padding_ = 0;
        pFVar3 = param_2->Reference;
        pFVar8[1]._padding_ = (longlong)pFVar3;
        if (pFVar3 != (FNetObjectAttachment *)0x0) {
          *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        }
        pFVar8[1].QuantizedBlobState.StateBuffer = (uchar *)0x0;
        pFVar8[1].QuantizedBlobState.MemoryAllocationFlags = None;
        pFVar8[1].QuantizedBlobState.AllocationSize = 4;
        *(FScriptContainerElement **)&pFVar8[1].RefCount = local_8b8.Data;
        local_8b8.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar8[2]._padding_ = local_8b0[0];
        *(int *)((longlong)&pFVar8[2]._padding_ + 4) = local_8b0[1];
        local_8b0[0] = 0;
        local_8b0[1] = 0;
        pFVar8[2].CreationInfo.Type = local_870.BufferBitPosition - local_870.BufferBitStartOffset;
        TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        operator=<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                  ((TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)&pFVar8[1].CreationInfo,
                   &local_4c0->BatchExports->NetTokensPendingExportInCurrentBatch);
        pEVar1 = &(pFVar8->CreationInfo).Flags;
        *pEVar1 = *pEVar1 | -(uint)(pFVar8[1].QuantizedBlobState.MemoryAllocationFlags != None) &
                            HasExports;
        pFVar10 = pFVar8;
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      pFVar2 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 8;
      DefaultConstructItems<TRefCountPtr<UE::Net::FNetBlob>,int>(pFVar2,1);
      pFVar8 = *(FNetBlob **)pFVar2;
      if (pFVar8 != pFVar10) {
        *(FNetBlob **)pFVar2 = pFVar10;
        if (pFVar10 != (FNetBlob *)0x0) {
          pFVar10->RefCount = pFVar10->RefCount + 1;
        }
        if (pFVar8 != (FNetBlob *)0x0) {
          UE::Net::FNetBlob::Release(pFVar8);
        }
      }
      bVar4 = true;
    }
    else {
      pFVar3 = param_2->Reference;
      local_8a8.Type = (uint)this->_padding_;
      local_8a8.Flags = *(ENetBlobFlags *)((longlong)&pFVar3->_padding_ + 4) & (Ordered|Reliable);
      local_888 = (wchar_t *)0x0;
      local_878._0_1_ = false;
      local_878._1_7_ = 0;
      local_8a0 = *(FNetRefHandle_u_0 **)(this->_padding_ + 0x28);
      lVar7 = pFVar3->_padding_;
      uStack_880 = uStack_880 & 0xffffffff00000000;
      if (param_4) {
        local_878._0_1_ = true;
        local_878._1_7_ = 0;
        local_898 = (pFVar3->NetObjectReference).RefHandle.field0_0x0;
        uStack_890._0_4_ = (pFVar3->NetObjectReference).PathToken.field0_0x0;
        uStack_890._4_4_ = (pFVar3->NetObjectReference).Traits;
        if ((lVar7 != 0) && (puVar9 = *(undefined8 **)(lVar7 + 0x60), puVar9 != (undefined8 *)0x0))
        {
          local_888 = (wchar_t *)*puVar9;
          uStack_880 = puVar9[1];
        }
        bVar4 = UE::Net::FPartialNetBlob::SplitNetBlob
                          ((FNetSerializationContext *)&local_7f8._s_0,&local_8a8,
                           (FSplitParams *)&local_8a0,(TRefCountPtr<UE::Net::FNetBlob> *)param_2,
                           param_3);
      }
      else {
        local_898.Value = 0;
        uStack_890._0_4_ = (FNetToken_u_0)0x0;
        uStack_890._4_4_ = None;
        if ((lVar7 != 0) && (puVar9 = *(undefined8 **)(lVar7 + 0x60), puVar9 != (undefined8 *)0x0))
        {
          local_888 = (wchar_t *)*puVar9;
          uStack_880 = puVar9[1];
        }
        bVar4 = UE::Net::FPartialNetBlob::SplitNetBlob
                          ((FNetSerializationContext *)&local_7f8._s_0,&local_8a8,
                           (FSplitParams *)&local_8a0,(TRefCountPtr<UE::Net::FNetBlob> *)param_2,
                           param_3);
      }
    }
  }
  else {
    UE::Net::Private::FNetExportRollbackScope::Rollback((FNetExportRollbackScope *)&local_8a0);
    bVar4 = false;
  }
  local_840[0x67] = local_838;
  if (local_488.NetTokensPendingExportInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_488.NetTokensPendingExportInCurrentBatch.AllocatorInstance.
                          SecondaryData);
  }
  if (local_488.ReferencesPendingExportInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetObjectReference>)0x0) {
    FMemory::Free((void *)local_488.ReferencesPendingExportInCurrentBatch.AllocatorInstance.
                          SecondaryData);
  }
  if (local_488.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_488.NetTokensExportedInCurrentBatch.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_488.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FNetRefHandle>)0x0) {
    FMemory::Free((void *)local_488.HandlesExportedInCurrentBatch.AllocatorInstance.SecondaryData);
  }
  UE::Net::FNetBitStreamWriter::~FNetBitStreamWriter(&local_870);
  if (local_8b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data);
  }
  return bVar4;
}

// SplitRawDataNetBlob @ 144295df0

bool __thiscall
UPartialNetObjectAttachmentHandler::SplitRawDataNetBlob
          (UPartialNetObjectAttachmentHandler *this,TRefCountPtr<UE::Net::FRawDataNetBlob> *param_1,
          TArray<TRefCountPtr<UE::Net::FNetBlob>,TSizedDefaultAllocator<32>_> *param_2,
          FNetDebugName *param_3)

{
  FRawDataNetBlob *pFVar1;
  FScriptContainerElement *pFVar2;
  FRawDataNetBlob *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPartialNetObjectAttachmentHandlerConfig *pUVar7;
  wchar_t *local_90;
  ulonglong uStack_88;
  FPayloadSplitParams local_78;
  
  pUVar7 = GetConfig(this);
  pFVar1 = param_1->Reference;
  if ((pUVar7->BitCountSplitThreshold & 0xffffffe0) < pFVar1->RawDataBitCount) {
    pUVar7 = GetConfig(this);
    local_78.CreationInfo.Type = (uint)this->_padding_;
    iVar6 = (int)pUVar7->_padding_;
    local_90 = (wchar_t *)0x0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    if (param_3 != (FNetDebugName *)0x0) {
      local_90 = param_3->Name;
      uStack_88 = *(ulonglong *)&param_3->DebugNameId;
    }
    if (((0xffdf < iVar6 - 0x20U) || (0xfffe < *(int *)((longlong)&pUVar7->_padding_ + 4) - 1U)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SplitParams.MaxPartBitCount > 31U && SplitParams.MaxPartBitCount < 65536U && SplitParams.MaxPartCount > 0 && SplitParams.MaxPartCount < 65536U"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\PartialNetBlob.cpp"
                           ,0xf9,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_78.OriginalBlob = (FNetBlob *)param_1->Reference;
    if ((FRawDataNetBlob *)local_78.OriginalBlob == (FRawDataNetBlob *)0x0) {
      return false;
    }
    local_78.ObjectReferencesPendingExport.DataPtr = (FNetObjectReference *)0x0;
    local_78.ObjectReferencesPendingExport.ArrayNum = 0;
    local_78.DebugName.Name = local_90;
    local_78.DebugName._8_8_ = uStack_88;
    local_78.NetTokensPendingExport.DataPtr = (FNetToken *)0x0;
    local_78.NetTokensPendingExport.ArrayNum = 0;
    local_78.Payload = (uint *)0x0;
    local_78.PayloadBitCount = 0;
    local_78.PartBitCount = 0;
    local_78.CreationInfo.Flags = Reliable;
    local_78.OriginalCreationInfo =
         (FNetBlobCreationInfo)((FRawDataNetBlob *)local_78.OriginalBlob)->_padding_;
    pFVar2 = (((FRawDataNetBlob *)local_78.OriginalBlob)->RawData).AllocatorInstance.Data;
    if (((((FRawDataNetBlob *)local_78.OriginalBlob)->RawData).ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_78._80_8_ = CONCAT44(iVar6,param_1->Reference->RawDataBitCount) & 0xffffffe0ffffffff;
    local_78.Payload = (uint *)pFVar2;
    UE::Net::FPartialNetBlob::SplitPayload(&local_78,param_2);
  }
  else {
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 8;
    DefaultConstructItems<TRefCountPtr<UE::Net::FNetBlob>,int>(pFVar2,1);
    this_00 = *(FRawDataNetBlob **)pFVar2;
    if (this_00 != pFVar1) {
      *(FRawDataNetBlob **)pFVar2 = pFVar1;
      if (pFVar1 != (FRawDataNetBlob *)0x0) {
        *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
      }
      if (this_00 != (FRawDataNetBlob *)0x0) {
        UE::Net::FNetBlob::Release((FNetBlob *)this_00);
      }
    }
  }
  return true;
}

// StaticRegisterNativesUPartialNetObjectAttachmentHandler @ 144297ad0

void __cdecl
UPartialNetObjectAttachmentHandler::StaticRegisterNativesUPartialNetObjectAttachmentHandler(void)

{
  return;
}

