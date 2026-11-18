// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 23

// FNetRPC @ 144266b20

FNetRPC * __thiscall UE::Net::Private::FNetRPC::FNetRPC(FNetRPC *this,FNetBlobCreationInfo *param_1)

{
  FNetObjectAttachment::FNetObjectAttachment((FNetObjectAttachment *)this,param_1);
  this->_padding_ = (longlong)&___7FNetRPC_Private_Net_UE__6B_;
  (this->FunctionLocator).DescriptorIndex = 0;
  (this->FunctionLocator).FunctionIndex = 0;
  (this->ObjectPtr).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ReferencesToExport).Ptr =
       (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  this->Function = (UFunction *)0x0;
  return this;
}

// ~FNetRPC @ 144269270

void __thiscall UE::Net::Private::FNetRPC::~FNetRPC(FNetRPC *this)

{
  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<UE::Net::FNetObjectReference> FVar2;
  
  this->_padding_ = (longlong)&___7FNetRPC_Private_Net_UE__6B_;
  pTVar1 = (this->ReferencesToExport).Ptr;
  if (pTVar1 != (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    FVar2 = (pTVar1->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetObjectReference>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(pTVar1,0x50);
  }
  FNetObjectAttachment::~FNetObjectAttachment((FNetObjectAttachment *)this);
  return;
}

// CallFunction @ 14426fab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall UE::Net::Private::FNetRPC::CallFunction(FNetRPC *this,FNetRPCCallContext *param_1)

{
  ushort uVar1;
  ushort uVar2;
  EFunctionFlags EVar3;
  int iVar4;
  FNetSerializationContext *this_00;
  undefined8 *puVar5;
  longlong *plVar6;
  FReplicationStateDescriptor *pFVar7;
  uchar *puVar8;
  FName FVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FInternalNetSerializationContext *pFVar10;
  UReplicationSystem *this_02;
  FObjectReferenceCache *this_03;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  FField *pFVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  FReplicationSystemInternal *pFVar21;
  FReplicatedObjectData *pFVar22;
  FReplicationProtocol *pFVar23;
  UObject *pUVar24;
  ulonglong uVar25;
  UFunction *pUVar26;
  longlong *this_04;
  uint *puVar27;
  FNetRefHandle_u_0 FVar28;
  undefined1 *puVar29;
  short *psVar30;
  void *_Dst;
  longlong lVar31;
  UObject *pUVar32;
  ulonglong uVar33;
  longlong lVar34;
  UObject *pUVar35;
  undefined1 auStackY_368 [32];
  char local_328;
  FScopedRemoteRPCMode local_327;
  FScopedNetContextRPC local_326 [6];
  undefined1 local_320 [16];
  bool local_310 [8];
  UObject *local_308;
  UObject *local_300;
  TFieldIterator<FProperty> local_2f8;
  FString local_2e0;
  UObject *local_2d0;
  UObject *local_2c8;
  UObject *local_2c0;
  UObject *local_2b8;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  longlong *local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FNetRPC *local_208;
  FNetRefHandle_u_0 local_200 [2];
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FName local_140;
  FNetRefHandle_u_0 *local_138;
  undefined1 *local_130;
  FDestructionSentinel local_128;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  ulonglong local_30;
  
  puVar29 = auStackY_368;
  local_30 = __security_cookie.value ^ (ulonglong)&local_328;
  pUVar32 = (UObject *)0x0;
  local_308 = (UObject *)((ulonglong)local_308 & 0xffffffff00000000);
  local_2d0 = (UObject *)param_1;
  local_208 = this;
  if (!__CsvProfilerStat473) {
    FCsvProfilerTrace::OutputInlineStatExclusive("HandleRPC");
    __CsvProfilerStat473 = true;
  }
  FCsvProfiler::BeginExclusiveStat("HandleRPC","CSV_HandleRPC");
  this_00 = param_1->NetContext;
  local_320._8_8_ = this_00->InternalContext->ReplicationSystem;
  local_320._0_8_ = FWeakObjectPtr::Get(&(this->ObjectPtr).WeakPtr);
  plVar6 = &this->_padding_;
  if ((UObject *)local_320._0_8_ == (UObject *)0x0) {
    if ((*plVar6 != 0) || (lVar31 = 0, (this->_padding_ & 0xfffff) != 0)) {
      lVar31 = 1;
    }
    local_2c8 = (UObject *)0x0;
    FObjectReferenceCache::ResolveObjectReference
              (this_00->InternalContext->ObjectReferenceCache,
               (FNetObjectReference *)(&this->_padding_ + lVar31 * 2),
               &this_00->InternalContext->ResolveContext,&local_2c8);
    local_320._0_8_ = local_2c8;
    if (local_2c8 != (UObject *)0x0) goto LAB_14426fc23;
LAB_14426fbac:
    this_04 = &this->_padding_;
    if ((*plVar6 == 0) && ((this->_padding_ & 0xfffff) == 0)) {
      puVar29 = auStackY_368;
      if ((byte)LogIrisRpc._0_1_ < 2) goto LAB_144270c8d;
      pUVar35 = (UObject *)local_320._0_8_;
      if ((UObject *)local_320._0_8_ == (UObject *)0x0) {
        local_2b8 = (UObject *)0x0;
        FObjectReferenceCache::ResolveObjectReference
                  (this_00->InternalContext->ObjectReferenceCache,(FNetObjectReference *)this_04,
                   &this_00->InternalContext->ResolveContext,&local_2b8);
        pUVar35 = local_2b8;
      }
      FNetObjectReference::ToString((FNetObjectReference *)this_04,&local_70);
      if (pUVar35 == (UObject *)0x0) {
        ::FString::FString(&local_290,L"None");
      }
      else {
        local_228.ComparisonIndex.Value = *(uint *)&pUVar35->field_0x18;
        local_228.Number = *(uint *)&pUVar35->field_0x1c;
        ::FName::ToString(&local_228,&local_290);
      }
      ::FString::PrintfImpl(&local_170,L"%s (%s)");
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (this->Function != (UFunction *)0x0) {
        local_220 = (FName)this->Function->_padding_;
        pUVar32 = (UObject *)&DAT_00000001;
        ::FName::ToString(&local_220,&local_180);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
      local_1e0.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
      if ((pUVar32 != (UObject *)0x0) &&
         (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
      }
    }
    else {
      puVar29 = auStackY_368;
      if ((byte)LogIrisRpc._0_1_ < 2) goto LAB_144270c8d;
      NetRPC_GetDebugObjectRefName(&local_50,this_00,(FNetObjectReference *)this_04,(UObject *)0x0);
      pUVar35 = (UObject *)local_320._0_8_;
      if ((UObject *)local_320._0_8_ == (UObject *)0x0) {
        local_300 = (UObject *)0x0;
        FObjectReferenceCache::ResolveObjectReference
                  (this_00->InternalContext->ObjectReferenceCache,(FNetObjectReference *)plVar6,
                   &this_00->InternalContext->ResolveContext,&local_300);
        pUVar35 = local_300;
      }
      FNetObjectReference::ToString((FNetObjectReference *)plVar6,&local_60);
      if (pUVar35 == (UObject *)0x0) {
        ::FString::FString(&local_280,L"None");
      }
      else {
        local_218.ComparisonIndex.Value = *(uint *)&pUVar35->field_0x18;
        local_218.Number = *(uint *)&pUVar35->field_0x1c;
        ::FName::ToString(&local_218,&local_280);
      }
      ::FString::PrintfImpl(&local_150,L"%s (%s)");
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (this->Function != (UFunction *)0x0) {
        local_210 = (FName)this->Function->_padding_;
        pUVar32 = (UObject *)&DAT_00000002;
        ::FName::ToString(&local_210,&local_160);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
      if ((pUVar32 != (UObject *)0x0) &&
         (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      local_1e0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_50.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
LAB_14426fc23:
    if (this->Function == (UFunction *)0x0) goto LAB_14426fbac;
    pFVar21 = UReplicationSystem::GetReplicationSystemInternal
                        ((UReplicationSystem *)local_320._8_8_);
    local_200[0] = (FNetRefHandle_u_0)this->_padding_;
    uVar19 = FNetRefHandleManager::GetInternalIndex
                       (&pFVar21->NetRefHandleManager,(FNetRefHandle)local_200[0]);
    if (uVar19 == 0) {
      local_138 = local_200;
      local_130 = local_320;
      `UE::Net::Private::FNetRPC::CallFunction'::__l53::<lambda_1>::operator()(&local_138);
    }
    else {
      local_308 = (UObject *)
                  (pFVar21->NetRefHandleManager).AssignedInternalIndices.Storage.AllocatorInstance.
                  Data;
      if (((pFVar21->NetRefHandleManager).AssignedInternalIndices.BitCount <= uVar19) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (((*(uint *)((longlong)&local_308->field_0x0 + (ulonglong)(uVar19 >> 5) * 4) >>
            (uVar19 & 0x1f) & 1) == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InternalIndex == InvalidInternalIndex || AssignedInternalIndices.GetBit(InternalIndex)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetRefHandleManager.cpp"
                              ,0x145,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    pFVar22 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
              ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                            *)&(pFVar21->NetRefHandleManager).ReplicatedObjectData,uVar19);
    if (pFVar22->InstanceProtocol == (FReplicationInstanceProtocol *)0x0) {
      puVar29 = auStackY_368;
      if ((byte)LogIrisRpc._0_1_ < 3) goto LAB_144270c8d;
      pUVar32 = (UObject *)local_320._0_8_;
      if ((UObjectBaseUtility *)local_320._0_8_ == (UObjectBaseUtility *)0x0) {
        local_2c0 = (UObject *)0x0;
        FObjectReferenceCache::ResolveObjectReference
                  (this_00->InternalContext->ObjectReferenceCache,
                   (FNetObjectReference *)&this->_padding_,&this_00->InternalContext->ResolveContext
                   ,&local_2c0);
        pUVar32 = local_2c0;
      }
      FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_110);
      if (pUVar32 == (UObject *)0x0) {
        ::FString::FString(&local_2b0,L"None");
      }
      else {
        local_140.ComparisonIndex.Value = *(uint *)&((UObjectBaseUtility *)pUVar32)->field_0x18;
        local_140.Number = *(uint *)&((UObjectBaseUtility *)pUVar32)->field_0x1c;
        ::FName::ToString(&local_140,&local_2b0);
      }
      ::FString::PrintfImpl(&local_1e0,L"%s (%s)");
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (this->Function == (UFunction *)0x0) {
        bVar14 = false;
        bVar17 = true;
        pFVar23 = UReplicationSystem::GetReplicationProtocol
                            ((UReplicationSystem *)local_320._8_8_,(FNetRefHandle)this->_padding_);
        if (pFVar23 == (FReplicationProtocol *)0x0) {
          ::FString::FString(&local_2e0,L"ProtocolNotFound");
        }
        else {
          uVar1 = (this->FunctionLocator).DescriptorIndex;
          if ((uint)uVar1 < pFVar23->ReplicationStateCount) {
            uVar2 = (this->FunctionLocator).FunctionIndex;
            if (uVar2 < pFVar23->ReplicationStateDescriptors[uVar1]->FunctionCount) {
              pUVar26 = pFVar23->ReplicationStateDescriptors[uVar1]->MemberFunctionDescriptors
                        [uVar2].Function;
              if (pUVar26 == (UFunction *)0x0) {
                ::FString::FString(&local_2e0,L"None");
              }
              else {
                local_268 = (FName)pUVar26->_padding_;
                ::FName::ToString(&local_268,&local_2e0);
              }
            }
            else {
              ::FString::FString(&local_2e0,L"InvalidFunctionIndex");
            }
          }
          else {
            ::FString::FString(&local_2e0,L"InvalidDescriptorIndex");
          }
        }
      }
      else {
        local_270 = (FName)this->Function->_padding_;
        bVar14 = true;
        bVar17 = false;
        ::FName::ToString(&local_270,&local_1f0);
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
      if ((bVar17) && (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      if ((bVar14) && (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      goto LAB_144270c83;
    }
    EVar3 = this->Function->FunctionFlags;
    if ((EVar3 & FUNC_Net) == FUNC_None) {
      if (1 < (byte)LogIrisRpc._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)local_320._0_8_,&local_100,(UObject *)0x0,None);
        FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_a0);
        local_260 = (FName)this->Function->_padding_;
        ::FName::ToString(&local_260,&local_1d0);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
      }
      FVar9 = NetError_FunctionCallNotAllowed;
      FNetSerializationContext::SetBitStreamOverflow(this_00);
      FNetErrorContext::SetError(&this_00->ErrorContext,FVar9);
      puVar29 = auStackY_368;
      goto LAB_144270c8d;
    }
    if ((*(longlong *)(local_320._8_8_ + 0x50) & 1) == 0) {
      if ((EVar3 >> 0x15 & 1) == 0) {
LAB_144270293:
        if (5 < (byte)LogIrisRpc._0_1_) {
          bVar17 = true;
          local_240 = (FName)this->Function->_padding_;
          ::FName::ToString(&local_240,&local_2a0);
          iVar20 = ::FString::Find(&local_2a0,L"ServerUpdateCamera",0x12,IgnoreCase,FromStart,-1);
          if (((iVar20 != -1) ||
              (iVar20 = ::FString::Find(&local_2a0,L"ClientAckGoodMove",0x11,IgnoreCase,FromStart,-1
                                       ), iVar20 != -1)) ||
             (iVar20 = ::FString::Find(&local_2a0,L"ServerMove",10,IgnoreCase,FromStart,-1),
             iVar20 != -1)) {
            bVar17 = false;
          }
          if ((5 < (byte)LogIrisRpc._0_1_) && (bVar17)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)local_320._0_8_,&local_80,(UObject *)0x0,None);
            FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_90);
            local_238 = (FName)this->Function->_padding_;
            ::FName::ToString(&local_238,&local_190);
            Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          }
        }
        puVar29 = auStackY_368;
        pUVar35 = pUVar32;
        if (this->Function->ParmsSize != 0) {
          if ((this->_padding_ == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlobDescriptor.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                                  ,0x244,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar1 = this->Function->ParmsSize;
          uVar33 = (ulonglong)uVar1;
          puVar29 = auStackY_368;
          if (uVar1 != 0) {
            uVar25 = uVar33 + 0x1e;
            if (uVar25 <= uVar33 + 0xf) {
              uVar25 = 0xffffffffffffff0;
            }
            puVar29 = auStackY_368 + -(uVar25 & 0xfffffffffffffff0);
            pUVar35 = (UObject *)(local_320 + -(uVar25 & 0xfffffffffffffff0));
          }
          *(undefined8 *)(puVar29 + -8) = 0x1442705ef;
          memset(pUVar35,0,uVar33);
          puVar5 = (undefined8 *)this->_padding_;
          if ((*(uint *)(puVar5 + 0x17) >> 7 & 1) == 0) {
            puVar27 = (uint *)*puVar5;
            if (*(ushort *)((longlong)puVar5 + 0x7c) != 0) {
              pUVar26 = (UFunction *)(puVar5[7] - (longlong)puVar27);
              psVar30 = (short *)(puVar5[8] + 8);
              uVar33 = (ulonglong)*(ushort *)((longlong)puVar5 + 0x7c);
              local_320._8_8_ = pUVar26;
              do {
                if (*psVar30 == 0) {
                  plVar6 = *(longlong **)((longlong)&pUVar26->_padding_ + (longlong)puVar27);
                  if ((plVar6[7] & 0x40000200U) == 0) {
                    _Dst = (void *)((longlong)&pUVar35->field_0x0 + (ulonglong)*puVar27);
                    if (((ulonglong)plVar6[7] >> 9 & 1) == 0) {
                      pcVar13 = *(code **)(*plVar6 + 0x150);
                      *(undefined8 *)(puVar29 + -8) = 0x144270677;
                      (*pcVar13)(plVar6,_Dst);
                      pUVar26 = (UFunction *)local_320._8_8_;
                    }
                    else {
                      iVar20 = *(int *)((longlong)plVar6 + 0x34);
                      lVar31 = plVar6[6];
                      *(undefined8 *)(puVar29 + -8) = 0x144270669;
                      memset(_Dst,0,(longlong)iVar20 * (longlong)(int)lVar31);
                      pUVar26 = (UFunction *)local_320._8_8_;
                    }
                  }
                }
                psVar30 = psVar30 + 8;
                puVar27 = puVar27 + 2;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
            }
          }
          pFVar7 = (FReplicationStateDescriptor *)this->_padding_;
          puVar8 = (uchar *)this->_padding_;
          *(undefined8 *)(puVar29 + -8) = 0x14427069f;
          FReplicationStateOperations::Dequantize(this_00,(uchar *)pUVar35,puVar8,pFVar7);
        }
        uVar16 = local_320._0_8_;
        FVar9 = (FName)this->Function->_padding_;
        *(undefined8 *)(puVar29 + -8) = 0x1442706b0;
        local_320._8_8_ = UObject::FindFunction((UObject *)uVar16,FVar9);
        if ((UFunction *)local_320._8_8_ == (UFunction *)0x0) {
          local_320._8_8_ = this->Function;
        }
        this_01 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)&local_2d0->field_0x8;
        *(undefined8 *)(puVar29 + -8) = 0x1442706d1;
        bVar17 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_01);
        pUVar26 = (UFunction *)local_320._8_8_;
        if (bVar17) {
          pFVar10 = this_00->InternalContext;
          this_02 = pFVar10->ReplicationSystem;
          *(undefined8 *)(puVar29 + -8) = 0x1442706e8;
          pFVar21 = UReplicationSystem::GetReplicationSystemInternal(this_02);
          FVar28 = (FNetRefHandle_u_0)this->_padding_;
          *(undefined8 *)(puVar29 + -8) = 0x1442706fe;
          uVar19 = FNetRefHandleManager::GetInternalIndex
                             (&pFVar21->NetRefHandleManager,(FNetRefHandle)FVar28._s_0);
          local_308 = (UObject *)CONCAT44(local_308._4_4_,uVar19);
          if (uVar19 == 0) {
            local_230 = &this->_padding_;
            *(undefined8 *)(puVar29 + -8) = 0x14427071c;
            bVar17 = `UE::Net::Private::NetRPC_GetRootObject'::__l3::<lambda_1>::operator()
                               (&local_230);
            pUVar24 = pUVar32;
            if (bVar17) {
              uVar19 = (uint)local_308;
              goto LAB_144270728;
            }
          }
          else {
LAB_144270728:
            *(undefined8 *)(puVar29 + -8) = 0x144270736;
            pFVar22 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                    *)&(pFVar21->NetRefHandleManager).ReplicatedObjectData,uVar19);
            uVar19 = pFVar22->SubObjectRootIndex;
            if (uVar19 != 0) {
              *(undefined8 *)(puVar29 + -8) = 0x144270749;
              pFVar22 = TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                        ::operator[]((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
                                      *)&(pFVar21->NetRefHandleManager).ReplicatedObjectData,uVar19)
              ;
              FVar28._s_0 = (pFVar22->RefHandle).field0_0x0._s_0;
            }
            this_03 = pFVar10->ObjectReferenceCache;
            *(undefined8 *)(puVar29 + -8) = 0x144270760;
            pUVar24 = FObjectReferenceCache::ResolveObjectReferenceHandleInternal
                                (this_03,(FNetRefHandle)FVar28._s_0,&pFVar10->ResolveContext,
                                 local_310);
          }
          local_2d0 = pUVar32;
          if ((UObject *)local_320._0_8_ != pUVar24) {
            local_2d0 = (UObject *)local_320._0_8_;
          }
          local_308 = pUVar24;
          *(undefined8 *)(puVar29 + -8) = 0x144270783;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                     (FWriteAccessScope *)&local_128);
          pUVar32 = local_308;
          pUVar26 = (UFunction *)local_320._8_8_;
          this_01->InvocationListLockCount = this_01->InvocationListLockCount + 1;
          iVar20 = (this_01->InvocationList).ArrayNum + -1;
          local_328 = '\0';
          if (-1 < iVar20) {
            lVar31 = (longlong)iVar20;
            lVar34 = lVar31 << 4;
            do {
              iVar4 = (this_01->InvocationList).ArrayNum;
              if (iVar4 <= iVar20) {
                *(longlong *)(puVar29 + 0x28) = (longlong)iVar4;
                *(longlong *)(puVar29 + 0x20) = lVar31;
                *(undefined8 *)(puVar29 + -8) = 0x1442707e2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              pUVar24 = local_2d0;
              pFVar11 = (this_01->InvocationList).AllocatorInstance.Data;
              if ((*(int *)(pFVar11 + lVar34 + 8) == 0) ||
                 (plVar6 = *(longlong **)(pFVar11 + lVar34), plVar6 == (longlong *)0x0)) {
LAB_144270816:
                local_328 = '\x01';
              }
              else {
                lVar12 = *plVar6;
                *(UObject **)(puVar29 + 0x20) = pUVar35;
                pcVar13 = *(code **)(lVar12 + 0x68);
                *(undefined8 *)(puVar29 + -8) = 0x144270812;
                cVar18 = (*pcVar13)(plVar6,pUVar32,pUVar24,pUVar26);
                if (cVar18 == '\0') goto LAB_144270816;
              }
              lVar31 = lVar31 + -1;
              lVar34 = lVar34 + -0x10;
              iVar20 = iVar20 + -1;
              this = local_208;
            } while (-1 < iVar20);
          }
          this_01->InvocationListLockCount = this_01->InvocationListLockCount + -1;
          if (local_328 != '\0') {
            *(undefined8 *)(puVar29 + -8) = 0x144270848;
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_01,false)
            ;
          }
          if (local_128.bDestroyed == false) {
            *(undefined8 *)(puVar29 + -8) = 0x144270864;
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
          }
        }
        *(undefined8 *)(puVar29 + -8) = 0x144270873;
        FScopedNetContextRPC::FScopedNetContextRPC(local_326);
        *(undefined8 *)(puVar29 + -8) = 0x144270885;
        FScopedRemoteRPCMode::FScopedRemoteRPCMode(&local_327,pUVar26,Receiving);
        uVar16 = local_320._0_8_;
        pcVar13 = *(code **)(*(longlong *)local_320._0_8_ + 0x260);
        *(undefined8 *)(puVar29 + -8) = 0x144270898;
        (*pcVar13)(uVar16,pUVar26,pUVar35);
        *(undefined8 *)(puVar29 + -8) = 0x1442708a1;
        FScopedRemoteRPCMode::~FScopedRemoteRPCMode(&local_327);
        *(undefined8 *)(puVar29 + -8) = 0x1442708aa;
        FScopedNetContextRPC::~FScopedNetContextRPC(local_326);
        if ((pUVar35 != (UObject *)0x0) && ((*(uint *)(this->_padding_ + 0xb8) >> 8 & 1) == 0)) {
          local_2f8.Struct = (UStruct *)this->Function;
          if ((UFunction *)local_2f8.Struct == (UFunction *)0x0) {
            local_2f8.Field = (FField *)0x0;
          }
          else {
            local_2f8.Field = (FField *)((UFunction *)local_2f8.Struct)->_padding_;
          }
          local_2f8.InterfaceIndex = -1;
          local_2f8.bIncludeSuper = true;
          local_2f8.bIncludeDeprecated = true;
          local_2f8.bIncludeInterface = false;
          *(undefined8 *)(puVar29 + -8) = 0x1442708fe;
          TFieldIterator<FProperty>::IterateToNext(&local_2f8);
          pFVar15 = local_2f8.Field;
          while ((local_2f8.Field = pFVar15, pFVar15 != (FField *)0x0 &&
                 (((uint)pFVar15[1].ClassPrivate & 0x480) == 0x80))) {
            if ((~(byte)((ulonglong)pFVar15[1].ClassPrivate >> 0x24) & 1) != 0) {
              pcVar13 = *(code **)(pFVar15->_padding_ + 0x138);
              iVar20 = (int)pFVar15[1]._padding_;
              if (iVar20 < 1) {
                *(int *)(puVar29 + 0x28) = iVar20;
                *(undefined4 *)(puVar29 + 0x20) = 0;
                *(undefined8 *)(puVar29 + -8) = 0x144270970;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   );
                if (bVar17) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              iVar20 = *(int *)((longlong)&pFVar15[1].Owner.Container + 4);
              *(undefined8 *)(puVar29 + -8) = 0x144270986;
              (*pcVar13)(pFVar15,(undefined1 *)((longlong)&pUVar35->field_0x0 + (longlong)iVar20));
            }
            local_2f8.Field = pFVar15->Next;
            *(undefined8 *)(puVar29 + -8) = 0x144270997;
            TFieldIterator<FProperty>::IterateToNext(&local_2f8);
            pFVar15 = local_2f8.Field;
          }
        }
        goto LAB_144270c8d;
      }
      if ((byte)LogIrisRpc._0_1_ < 2) goto LAB_144270c8d;
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_320._0_8_,&local_40,(UObject *)0x0,None);
      FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_b0);
      local_248 = (FName)this->Function->_padding_;
      ::FName::ToString(&local_248,&local_1a0);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      local_1e0.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((EVar3 & (FUNC_NetClient|FUNC_NetMulticast)) != FUNC_None) {
        if (1 < (byte)LogIrisRpc._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_320._0_8_,&local_e0,(UObject *)0x0,None);
          FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_f0);
          local_258 = (FName)this->Function->_padding_;
          ::FName::ToString(&local_258,&local_1c0);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        FVar9 = NetError_FunctionCallNotAllowed;
        FNetSerializationContext::SetBitStreamOverflow(this_00);
        FNetErrorContext::SetError(&this_00->ErrorContext,FVar9);
        puVar29 = auStackY_368;
        goto LAB_144270c8d;
      }
      uVar19 = UReplicationSystem::GetOwningNetConnection
                         (this_00->InternalContext->ReplicationSystem,(FNetRefHandle)this->_padding_
                         );
      if (uVar19 == this_00->LocalConnectionId) goto LAB_144270293;
      puVar29 = auStackY_368;
      if ((byte)LogIrisRpc._0_1_ < 6) goto LAB_144270c8d;
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)local_320._0_8_,&local_c0,(UObject *)0x0,None);
      FNetObjectReference::ToString((FNetObjectReference *)&this->_padding_,&local_d0);
      local_250 = (FName)this->Function->_padding_;
      ::FName::ToString(&local_250,&local_1b0);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      local_1e0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        local_1e0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
      }
    }
  }
LAB_144270c83:
  puVar29 = auStackY_368;
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    puVar29 = auStackY_368;
  }
LAB_144270c8d:
  *(undefined8 *)(puVar29 + -8) = 0x144270c99;
  FCsvProfiler::EndExclusiveStat("HandleRPC");
  *(undefined8 *)(puVar29 + -8) = 0x144270ca8;
  return;
}

// Create @ 144271400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNetRPC * __cdecl
UE::Net::Private::FNetRPC::Create
          (UReplicationSystem *param_1,FNetBlobCreationInfo *param_2,FNetObjectReference *param_3,
          UFunction *param_4,void *param_5)

{
  TUniquePtr<TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
  *pTVar1;
  uint *puVar2;
  FReplicationStateDescriptor **ppFVar3;
  uint uVar4;
  FReplicationStateDescriptor *this;
  void *pvVar5;
  code *pcVar6;
  UFunction *pUVar7;
  UFunction *pUVar8;
  bool bVar9;
  UObjectReplicationBridge *pUVar10;
  FReplicationProtocol *pFVar11;
  FNetRPC *pFVar12;
  FReplicationStateMemberFunctionDescriptor *pFVar13;
  FQuantizedBlobState *pFVar14;
  longlong lVar15;
  FNetRPC *pFVar16;
  undefined8 *puVar17;
  FReplicationStateMemberFunctionDescriptor *pFVar18;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar19;
  ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> FVar20;
  FReplicationStateDescriptor **ppFVar21;
  FNetRPC *this_00;
  undefined1 auStackY_be8 [32];
  FFunctionLocator local_bb8;
  FQuantizedBlobState local_bb0;
  FNetSerializerChangeMaskParam local_ba0;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> local_b98;
  longlong local_b90;
  FQuantizedBlobState local_b88;
  FInternalNetSerializationContext local_b78;
  FNetRefHandle_u_0 local_b38;
  undefined8 local_b30;
  undefined8 local_b20 [95];
  undefined4 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  FInternalNetSerializationContext *local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined4 local_7dc;
  uint local_7d8;
  FNetRefHandle_u_0 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b0 [95];
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  uint local_468;
  FNetReferenceCollector local_458;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  pUVar8 = (UFunction *)param_4->_padding_;
  while (pUVar7 = pUVar8, pUVar7 != (UFunction *)0x0) {
    param_4 = pUVar7;
    pUVar8 = (UFunction *)pUVar7->_padding_;
  }
  pUVar10 = UReplicationSystem::GetReplicationBridge(param_1);
  if (pUVar10 == (UObjectReplicationBridge *)0x0) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8608888639159534234>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                       ,0x29a,"Bridge != nullptr");
    if (bVar9) {
code_r0x00014427151a:
      pcVar6 = (code *)swi(3);
      pFVar12 = (FNetRPC *)(*pcVar6)();
      return pFVar12;
    }
  }
  else {
    pFVar11 = UReplicationSystem::GetReplicationProtocol
                        (param_1,(FNetRefHandle)
                                 *(FNetRefHandle_u_0 *)&(param_3->RefHandle).field0_0x0._s_0);
    if (pFVar11 == (FReplicationProtocol *)0x0) {
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8608888639159534240>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                         ,0x2a0,"Protocol != nullptr");
      if (bVar9) goto code_r0x00014427151a;
    }
    else {
      uVar4 = pFVar11->ReplicationStateCount;
      ppFVar21 = pFVar11->ReplicationStateDescriptors;
      if (((int)uVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FNetRPC *)(*pcVar6)();
        return pFVar12;
      }
      bVar9 = bEnableRPCServerStateStompDetection;
      ppFVar3 = ppFVar21 + (int)uVar4;
      for (; ppFVar21 != ppFVar3; ppFVar21 = ppFVar21 + 1) {
        pFVar13 = (*ppFVar21)->MemberFunctionDescriptors;
        pFVar18 = pFVar13 + (*ppFVar21)->FunctionCount;
        for (; pFVar13 != pFVar18; pFVar13 = pFVar13 + 1) {
          if (pFVar13->Function == param_4) {
            this = pFVar13->Descriptor;
            local_bb8.FunctionIndex =
                 (ushort)((longlong)
                          (ulonglong)
                          (uint)((int)pFVar13 - *(int *)&(*ppFVar21)->MemberFunctionDescriptors) >>
                         4);
            local_bb8.DescriptorIndex =
                 (ushort)((longlong)
                          (ulonglong)
                          (uint)((int)ppFVar21 - *(int *)&pFVar11->ReplicationStateDescriptors) >> 3
                         );
            local_bb0.StateBuffer = (uchar *)0x0;
            local_bb0.MemoryAllocationFlags = None;
            local_bb0.AllocationSize = 0;
            if ((this != (FReplicationStateDescriptor *)0x0) && (this->InternalSize != 0)) {
              pFVar14 = FNetBlob::FQuantizedBlobState::FQuantizedBlobState
                                  (&local_b88,pFVar13->Descriptor->InternalSize,
                                   (uint)pFVar13->Descriptor->InternalAlignment,
                                   (uint)(bEnableRPCServerStateStompDetection != false));
              if (local_bb0.StateBuffer != (uchar *)0x0) {
                FNetBlob::FQuantizedBlobState::Unprotect(&local_bb0);
                FMemory::Free(local_bb0.StateBuffer);
              }
              local_bb0.StateBuffer = pFVar14->StateBuffer;
              local_bb0.MemoryAllocationFlags = pFVar14->MemoryAllocationFlags;
              local_bb0.AllocationSize = pFVar14->AllocationSize;
              pFVar14->StateBuffer = (uchar *)0x0;
              pFVar14->MemoryAllocationFlags = None;
              pFVar14->AllocationSize = 0;
              FNetBlob::FQuantizedBlobState::~FQuantizedBlobState(&local_b88);
              puVar17 = local_b20;
              local_b38.Value = 0;
              lVar15 = 0x20;
              local_b30 = 0;
              do {
                *puVar17 = 0;
                puVar17 = puVar17 + 3;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              local_7d8 = local_7d8 & 0xfffffffc;
              local_828 = 0;
              local_820 = 0;
              local_7e8 = 0;
              local_7e0 = 0;
              local_818 = 0;
              uStack_810 = 0;
              local_808 = (FInternalNetSerializationContext *)0x0;
              uStack_800 = 0;
              local_7f8 = 0;
              uStack_7f0 = 0;
              local_7dc = 0xffffffff;
              FInternalNetSerializationContext::FInternalNetSerializationContext(&local_b78,param_1)
              ;
              local_808 = &local_b78;
              FReplicationStateOperations::Quantize
                        ((FNetSerializationContext *)&local_b38._s_0,local_bb0.StateBuffer,param_5,
                         this);
              if (bVar9 != false) {
                FNetBlob::FQuantizedBlobState::Protect(&local_bb0);
              }
            }
            pFVar12 = (FNetRPC *)0x0;
            pFVar16 = ::operator_new(0x70);
            this_00 = pFVar12;
            if (pFVar16 != (FNetRPC *)0x0) {
              FNetObjectAttachment::FNetObjectAttachment((FNetObjectAttachment *)pFVar16,param_2);
              pFVar16->_padding_ = (longlong)&___7FNetRPC_Private_Net_UE__6B_;
              (pFVar16->ObjectPtr).WeakPtr = (FWeakObjectPtr)0x0;
              (pFVar16->ReferencesToExport).Ptr =
                   (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0;
              this_00 = pFVar16;
            }
            this_00->FunctionLocator = local_bb8;
            this_00->Function = param_4;
            if (this == (FReplicationStateDescriptor *)0x0) goto LAB_144271939;
            if ((this->Traits & HasObjectReference) != None) {
              local_7c8.Value = 0;
              puVar17 = local_7b0;
              local_7c0 = 0;
              local_ba0.BitOffset = 0x20;
              local_ba0.BitCount = 0;
              do {
                *puVar17 = 0;
                puVar17 = puVar17 + 3;
                local_ba0 = (FNetSerializerChangeMaskParam)((longlong)local_ba0 + -1);
              } while (local_ba0 != (FNetSerializerChangeMaskParam)0x0);
              local_468 = local_468 & 0xfffffffc;
              local_4b8 = 0;
              local_4a8 = 0;
              uStack_4a0 = 0;
              local_498 = 0;
              uStack_490 = 0;
              local_488 = 0;
              uStack_480 = 0;
              local_4b0 = 0;
              local_478 = 0;
              local_470 = 0;
              local_46c = 0xffffffff;
              local_458.ReferenceInfos.AllocatorInstance.SecondaryData =
                   (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0;
              local_458.ReferenceInfos.ArrayNum = 0;
              local_458.ReferenceInfos.ArrayMax = 0x20;
              local_458.Traits = OnlyCollectReferencesThatCanBeExported;
              FReplicationStateOperationsInternal::CollectReferences
                        ((FNetSerializationContext *)&local_7c8._s_0,&local_458,&local_ba0,
                         local_bb0.StateBuffer,this);
              if (local_458.ReferenceInfos.ArrayNum != 0) {
                pFVar16 = ::operator_new(0x50);
                if (pFVar16 != (FNetRPC *)0x0) {
                  *(undefined8 *)
                   &((ForElementType<UE::Net::FNetObjectReference> *)&pFVar16->_padding_)->field_0x0
                       = 0;
                  *(int *)&pFVar16->_padding_ = 0;
                  *(int *)((longlong)&pFVar16->_padding_ + 4) = 4;
                  pFVar12 = pFVar16;
                }
                pTVar1 = &this_00->ReferencesToExport;
                if (pTVar1 == (TUniquePtr<TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>
                               *)&local_b90) {
                  if (pFVar12 != (FNetRPC *)0x0) {
                    pvVar5 = *(void **)&((ForElementType<UE::Net::FNetObjectReference> *)
                                        &pFVar12->_padding_)->field_0x0;
                    pFVar16 = pFVar12;
                    if (pvVar5 != (void *)0x0) {
                      FMemory::Free(pvVar5);
                    }
                    goto LAB_144271882;
                  }
                }
                else {
                  pFVar16 = (FNetRPC *)pTVar1->Ptr;
                  pTVar1->Ptr = (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                 *)pFVar12;
                  if (pFVar16 != (FNetRPC *)0x0) {
                    pvVar5 = *(void **)&((ForElementType<UE::Net::FNetObjectReference> *)
                                        &pFVar16->_padding_)->field_0x0;
                    if (pvVar5 != (void *)0x0) {
                      FMemory::Free(pvVar5);
                    }
LAB_144271882:
                    ::operator_delete(pFVar16,0x50);
                  }
                }
                lVar15 = (longlong)local_458.ReferenceInfos.ArrayNum;
                FVar19 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)&local_458
                ;
                if (local_458.ReferenceInfos.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
                  FVar19 = local_458.ReferenceInfos.AllocatorInstance.SecondaryData;
                }
                if ((local_458.ReferenceInfos.ArrayNum < 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InCount >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0xeb,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar12 = (FNetRPC *)(*pcVar6)();
                  return pFVar12;
                }
                FVar20 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                         (lVar15 * 0x20 + (longlong)FVar19);
                for (; FVar19 != FVar20;
                    FVar19 = (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)
                             ((longlong)FVar19 + 0x20)) {
                  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  ::AddUniqueImpl<UE::Net::FNetObjectReference_const_&>
                            ((this_00->ReferencesToExport).Ptr,
                             (FNetObjectReference *)((longlong)FVar19 + 8));
                }
                puVar2 = (uint *)((longlong)&this_00->_padding_ + 4);
                *puVar2 = *puVar2 | 4;
              }
              if (local_458.ReferenceInfos.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>)0x0) {
                FMemory::Free((void *)local_458.ReferenceInfos.AllocatorInstance.SecondaryData);
              }
            }
            local_b98.Reference = this;
            FReplicationStateDescriptor::AddRef(this);
            FNetBlob::SetState((FNetBlob *)this_00,&local_b98,&local_bb0);
            if (local_b98.Reference != (FReplicationStateDescriptor *)0x0) {
              FReplicationStateDescriptor::Release(local_b98.Reference);
            }
LAB_144271939:
            FNetBlob::FQuantizedBlobState::~FQuantizedBlobState(&local_bb0);
            return this_00;
          }
        }
      }
    }
  }
  return (FNetRPC *)0x0;
}

// Deserialize @ 1442750b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRPC::Deserialize(FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *pFVar1;
  FNetBitStreamReader *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *pFVar11;
  FNetTraceCollector *pFVar12;
  FString local_48;
  
  pFVar1 = param_1->BitStreamReader;
  pFVar12 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar12 = param_1->TraceCollector;
  }
  uVar6 = 0xffffffff;
  if (pFVar12 != (FNetTraceCollector *)0x0) {
    uVar6 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,pFVar1->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Name = CreatePersistentNetDebugName(L"RPC",3);
      _Init_thread_footer(&::_TSS0);
    }
    uVar7 = FNetTrace::TraceName(::Name);
    FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
    }
    *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar7;
  }
  uVar7 = param_1->BitStreamReader->BufferBitPosition;
  uVar9 = param_1->BitStreamReader->BufferBitStartOffset;
  uVar8 = InternalDeserializeHeader(this,param_1);
  uVar8 = (uVar7 - uVar9) + uVar8;
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar4)) {
    pFVar2 = param_1->BitStreamReader;
    pFVar11 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 == (FNetTraceCollector *)0x0) {
      FNetObjectAttachment::DeserializeObjectReference((FNetObjectAttachment *)this,param_1);
    }
    else {
      uVar7 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,pFVar2->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar9 = FNetTrace::TraceName(TargetObject);
      FVar10 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar7 * 0x10) = uVar9;
      FNetObjectAttachment::DeserializeObjectReference((FNetObjectAttachment *)this,param_1);
      if (uVar7 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar11,uVar7,pFVar2->BufferBitPosition);
      }
    }
    if ((((((param_1->ErrorContext).Error == (FName)0x0) &&
          (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar4)) &&
         (DeserializeFunctionLocator(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) &&
        ((bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar4 &&
         (bVar4 = ResolveFunctionAndObject(this,param_1),
         (param_1->ErrorContext).Error == (FName)0x0)))) &&
       (bVar5 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar5)) {
      if (bVar4) {
        if (uVar6 != 0xffffffff) {
          uVar7 = FNetTrace::TraceName(*(FNetDebugName **)(this->_padding_ + 0x60));
          FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
          if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
          }
          *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar7;
        }
        InternalDeserializeBlob(this,param_1);
        if ((((param_1->ErrorContext).Error == (FName)0x0) &&
            (bVar4 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar4)) &&
           (uVar8 != param_1->BitStreamReader->BufferBitPosition -
                     param_1->BitStreamReader->BufferBitStartOffset)) {
          if (1 < (byte)LogIrisRpc._0_1_) {
            FNetSerializationContext::PrintReadJournal(param_1,&local_48);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          if ((uVar8 != param_1->BitStreamReader->BufferBitPosition -
                        param_1->BitStreamReader->BufferBitStartOffset) &&
             (bVar4 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8608888639159533827>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                                 ,0x103,
                                 "PostNetRPCPos == Context.GetBitStreamReader()->GetPosBits()"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      else {
        if (1 < (byte)LogIrisRpc._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
        }
        FNetBitStreamReader::Seek(param_1->BitStreamReader,uVar8);
      }
    }
  }
  if (uVar6 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar12,uVar6,pFVar1->BufferBitPosition);
  }
  return;
}

// DeserializeFunctionLocator @ 144275590

void __thiscall
UE::Net::Private::FNetRPC::DeserializeFunctionLocator
          (FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  
  this_00 = param_1->BitStreamReader;
  uVar1 = 0xffffffff;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FunctionLocator = CreatePersistentNetDebugName(L"FunctionLocator",0xf);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(FunctionLocator);
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar1 * 0x10) = uVar2;
  }
  uVar2 = FNetBitStreamReader::ReadBits(this_00,2);
  uVar2 = uVar2 * 4 + 4;
  uVar3 = FNetBitStreamReader::ReadBits(this_00,uVar2);
  (this->FunctionLocator).DescriptorIndex = (ushort)uVar3;
  uVar2 = FNetBitStreamReader::ReadBits(this_00,uVar2);
  (this->FunctionLocator).FunctionIndex = (ushort)uVar2;
  if (uVar1 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar5,uVar1,this_00->BufferBitPosition);
  }
  return;
}

// DeserializeWithObject @ 144275b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetRPC::DeserializeWithObject
          (FNetRPC *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FNetTracePacketContentEvent> FVar7;
  FNetTraceCollector *pFVar8;
  FNetTraceCollector *pFVar9;
  FNetBitStreamReader *pFVar10;
  uint local_res10 [4];
  FNetBitStreamReader *local_res20;
  FNetRPC *local_58;
  FNetSerializationContext *local_50;
  uint *local_48;
  
  pFVar10 = param_1->BitStreamReader;
  uVar4 = 0xffffffff;
  pFVar8 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar8 = param_1->TraceCollector;
  }
  local_res20 = pFVar10;
  if (pFVar8 != (FNetTraceCollector *)0x0) {
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar8,NameId,pFVar10->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Name = CreatePersistentNetDebugName(L"RPC",3);
      _Init_thread_footer(&::_TSS0);
    }
    uVar5 = FNetTrace::TraceName(::Name);
    FVar7 = (pFVar8->Events).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
    }
    *(uint *)((longlong)FVar7 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  uVar5 = param_1->BitStreamReader->BufferBitPosition;
  uVar6 = param_1->BitStreamReader->BufferBitStartOffset;
  local_res10[0] = InternalDeserializeHeader(this,param_1);
  local_res10[0] = local_res10[0] + (uVar5 - uVar6);
  if (((((param_1->ErrorContext).Error == (FName)0x0) &&
       (bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar2)) &&
      (DeserializeFunctionLocator(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) &&
     (bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1), !bVar2)) {
    pFVar10 = param_1->BitStreamReader;
    uVar5 = 0xffffffff;
    pFVar9 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar9 = param_1->TraceCollector;
    }
    if (pFVar9 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,pFVar10->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(TargetObject);
      FVar7 = (pFVar9->Events).AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
      }
      *(uint *)((longlong)FVar7 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    FNetObjectAttachment::DeserializeSubObjectReference
              ((FNetObjectAttachment *)this,param_1,param_2);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar9,uVar5,pFVar10->BufferBitPosition);
    }
    pFVar10 = local_res20;
    if ((((param_1->ErrorContext).Error == (FName)0x0) &&
        (bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1), pFVar10 = local_res20,
        !bVar2)) &&
       ((bVar2 = ResolveFunctionAndObject(this,param_1), pFVar10 = local_res20,
        (param_1->ErrorContext).Error == (FName)0x0 &&
        (bVar3 = FNetSerializationContext::IsBitStreamOverflown(param_1), pFVar10 = local_res20,
        !bVar3)))) {
      if (bVar2) {
        if (uVar4 != 0xffffffff) {
          uVar5 = FNetTrace::TraceName(*(FNetDebugName **)(this->_padding_ + 0x60));
          FVar7 = (pFVar8->Events).AllocatorInstance.SecondaryData;
          if (FVar7 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
            FVar7 = (ForElementType<FNetTracePacketContentEvent>)&pFVar8->Events;
          }
          *(uint *)((longlong)FVar7 + (ulonglong)uVar4 * 0x10) = uVar5;
        }
        InternalDeserializeBlob(this,param_1);
        pFVar10 = local_res20;
        if ((((param_1->ErrorContext).Error == (FName)0x0) &&
            (bVar2 = FNetSerializationContext::IsBitStreamOverflown(param_1), pFVar10 = local_res20,
            !bVar2)) &&
           (local_res10[0] !=
            param_1->BitStreamReader->BufferBitPosition -
            param_1->BitStreamReader->BufferBitStartOffset)) {
          if (1 < (byte)LogIrisRpc._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
          }
          if (local_res10[0] !=
              param_1->BitStreamReader->BufferBitPosition -
              param_1->BitStreamReader->BufferBitStartOffset) {
            local_48 = local_res10;
            local_58 = this;
            local_50 = param_1;
            `UE::Net::Private::FNetRPC::DeserializeWithObject'::__l46::<lambda_2>::operator()
                      (&local_58);
          }
          FNetBitStreamReader::Seek(param_1->BitStreamReader,local_res10[0]);
          FVar1 = GNetError_BitStreamError;
          FNetSerializationContext::SetBitStreamOverflow(param_1);
          FNetErrorContext::SetError(&param_1->ErrorContext,FVar1);
          this->Function = (UFunction *)0x0;
          pFVar10 = local_res20;
        }
      }
      else {
        if (1 < (byte)LogIrisRpc._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
        }
        FNetBitStreamReader::Seek(param_1->BitStreamReader,local_res10[0]);
        pFVar10 = local_res20;
      }
    }
  }
  if (uVar4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar8,uVar4,pFVar10->BufferBitPosition);
  }
  return;
}

// GetNetObjectReferenceExports @ 14427a8b0

TArrayView<UE::Net::FNetObjectReference_const_,int> * __thiscall
UE::Net::Private::FNetRPC::GetNetObjectReferenceExports
          (FNetRPC *this,TArrayView<UE::Net::FNetObjectReference_const_,int> *__return_storage_ptr__
          )

{
  int iVar1;
  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::Net::FNetObjectReference_const_,int> *pTVar5;
  TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  undefined4 uStack_1c;
  uint uStack_c;
  
  pTVar6 = (this->ReferencesToExport).Ptr;
  if (pTVar6 == (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    __return_storage_ptr__->DataPtr = (FNetObjectReference *)0x0;
    *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)uStack_c << 0x20;
    return __return_storage_ptr__;
  }
  pTVar2 = *(TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             **)&(pTVar6->AllocatorInstance).SecondaryData.field_0x0;
  iVar1 = pTVar6->ArrayNum;
  if (pTVar2 != (TArray<UE::Net::FNetObjectReference,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pTVar6 = pTVar2;
  }
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::Net::FNetObjectReference_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->DataPtr = (FNetObjectReference *)pTVar6;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return __return_storage_ptr__;
}

// InternalDeserializeBlob @ 14427fcf0

void __thiscall
UE::Net::Private::FNetRPC::InternalDeserializeBlob(FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *pFVar1;
  uint uVar2;
  uint uVar3;
  FNetTraceCollector *pFVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  
  pFVar1 = param_1->BitStreamReader;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 == (FNetTraceCollector *)0x0) {
    FNetBlob::DeserializeBlob((FNetBlob *)this,param_1);
  }
  else {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,pFVar1->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FunctionParams = CreatePersistentNetDebugName(L"FunctionParams",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(FunctionParams);
    FVar5 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)uVar2 * 0x10) = uVar3;
    FNetBlob::DeserializeBlob((FNetBlob *)this,param_1);
    if (uVar2 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar4,uVar2,pFVar1->BufferBitPosition);
    }
  }
  return;
}

// InternalDeserializeHeader @ 14427ff70

uint __thiscall
UE::Net::Private::FNetRPC::InternalDeserializeHeader
          (FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this_00;
  uint uVar1;
  uint uVar2;
  FNetTraceCollector *pFVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  
  this_00 = param_1->BitStreamReader;
  pFVar3 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar3 = param_1->TraceCollector;
  }
  if (pFVar3 != (FNetTraceCollector *)0x0) {
    uVar1 = FNetTrace::BeginPacketContentEvent(pFVar3,NameId,this_00->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        RPCSize = CreatePersistentNetDebugName(L"RPCSize",7);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar2 = FNetTrace::TraceName(RPCSize);
    FVar4 = (pFVar3->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar3->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar1 * 0x10) = uVar2;
    uVar2 = FNetBitStreamReader::ReadBits(this_00,0x18);
    if (uVar1 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar3,uVar1,this_00->BufferBitPosition);
    }
    return uVar2;
  }
  uVar1 = FNetBitStreamReader::ReadBits(this_00,0x18);
  return uVar1;
}

// InternalDeserializeObjectReference @ 1442800a0

void __thiscall
UE::Net::Private::FNetRPC::InternalDeserializeObjectReference
          (FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamReader *pFVar1;
  uint uVar2;
  uint uVar3;
  FNetTraceCollector *pFVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  
  pFVar1 = param_1->BitStreamReader;
  pFVar4 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar4 = param_1->TraceCollector;
  }
  if (pFVar4 == (FNetTraceCollector *)0x0) {
    FNetObjectAttachment::DeserializeObjectReference((FNetObjectAttachment *)this,param_1);
  }
  else {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar4,NameId,pFVar1->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(TargetObject);
    FVar5 = (pFVar4->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar4->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)uVar2 * 0x10) = uVar3;
    FNetObjectAttachment::DeserializeObjectReference((FNetObjectAttachment *)this,param_1);
    if (uVar2 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar4,uVar2,pFVar1->BufferBitPosition);
    }
  }
  return;
}

// InternalDeserializeSubObjectReference @ 1442801d0

void __thiscall
UE::Net::Private::FNetRPC::InternalDeserializeSubObjectReference
          (FNetRPC *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamReader *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  
  pFVar1 = param_1->BitStreamReader;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  uVar2 = 0xffffffff;
  if (pFVar5 != (FNetTraceCollector *)0x0) {
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,pFVar1->BufferBitPosition);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar3 = FNetTrace::TraceName(TargetObject);
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
  }
  FNetObjectAttachment::DeserializeSubObjectReference((FNetObjectAttachment *)this,param_1,param_2);
  if (uVar2 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar5,uVar2,pFVar1->BufferBitPosition);
  }
  return;
}

// InternalSerializeBlob @ 144281dd0

void __thiscall
UE::Net::Private::FNetRPC::InternalSerializeBlob(FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  
  pFVar1 = param_1->BitStreamWriter;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 == (FNetTraceCollector *)0x0) {
    FNetBlob::SerializeBlob((FNetBlob *)this,param_1);
  }
  else {
    uVar2 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FunctionParams = CreatePersistentNetDebugName(L"FunctionParams",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(FunctionParams);
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
    FNetBlob::SerializeBlob((FNetBlob *)this,param_1);
    if (uVar2 != 0xffffffff) {
      uVar3 = pFVar1->BufferBitPosition;
      if (pFVar1->OverflowBitCount != 0) {
        uVar3 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar5,uVar2,uVar3);
    }
  }
  return;
}

// InternalSerializeHeader @ 144282070

void __thiscall
UE::Net::Private::FNetRPC::InternalSerializeHeader
          (FNetRPC *this,FNetSerializationContext *param_1,int param_2)

{
  FNetBitStreamWriter *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  FName local_res10;
  FString local_18;
  
  this_00 = param_1->BitStreamWriter;
  if (param_2 == -1) {
    pFVar6 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar6 = param_1->TraceCollector;
    }
    if (pFVar6 == (FNetTraceCollector *)0x0) {
      FNetBitStreamWriter::WriteBits(this_00,0,0x18);
    }
    else {
      uVar3 = this_00->BufferBitPosition;
      if (this_00->OverflowBitCount != 0) {
        uVar3 = 0;
      }
      uVar3 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,uVar3);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        RPCSize = CreatePersistentNetDebugName(L"RPCSize",7);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(RPCSize);
      FVar5 = (pFVar6->Events).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
      }
      *(uint *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = uVar4;
      FNetBitStreamWriter::WriteBits(this_00,0,0x18);
      if (uVar3 != 0xffffffff) {
        uVar4 = this_00->BufferBitPosition;
        if (this_00->OverflowBitCount != 0) {
          uVar4 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar6,uVar3,uVar4);
      }
    }
    return;
  }
  if ((param_2 < 1) || (0xffffff < (uint)param_2)) {
    local_res10 = (FName)this->Function->_padding_;
    ::FName::ToString(&local_res10,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadSize > 0 && PayloadSize <= MaxRpcSizeInBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                       ,0x115,
                       L"FNetRPC can only support a payload size of %u bits (RPC %s cost %u bits)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNetBitStreamWriter::WriteBits(this_00,param_2,0x18);
  return;
}

// InternalSerializeObjectReference @ 144282260

void __thiscall
UE::Net::Private::FNetRPC::InternalSerializeObjectReference
          (FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FNetTracePacketContentEvent> FVar4;
  FNetTraceCollector *pFVar5;
  
  pFVar1 = param_1->BitStreamWriter;
  pFVar5 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar5 = param_1->TraceCollector;
  }
  if (pFVar5 == (FNetTraceCollector *)0x0) {
    FNetObjectAttachment::SerializeObjectReference((FNetObjectAttachment *)this,param_1);
  }
  else {
    uVar2 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar2 = 0;
    }
    uVar2 = FNetTrace::BeginPacketContentEvent(pFVar5,NameId,uVar2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
      _Init_thread_footer(&::_TSS0);
    }
    uVar3 = FNetTrace::TraceName(TargetObject);
    FVar4 = (pFVar5->Events).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar4 = (ForElementType<FNetTracePacketContentEvent>)&pFVar5->Events;
    }
    *(uint *)((longlong)FVar4 + (ulonglong)uVar2 * 0x10) = uVar3;
    FNetObjectAttachment::SerializeObjectReference((FNetObjectAttachment *)this,param_1);
    if (uVar2 != 0xffffffff) {
      uVar3 = pFVar1->BufferBitPosition;
      if (pFVar1->OverflowBitCount != 0) {
        uVar3 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar5,uVar2,uVar3);
    }
  }
  return;
}

// InternalSerializeSubObjectReference @ 1442823a0

void __thiscall
UE::Net::Private::FNetRPC::InternalSerializeSubObjectReference
          (FNetRPC *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FNetTracePacketContentEvent> FVar5;
  FNetTraceCollector *pFVar6;
  
  pFVar6 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar6 = param_1->TraceCollector;
  }
  puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
  uVar3 = 0xffffffff;
  puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
  if (pFVar6 != (FNetTraceCollector *)0x0) {
    uVar3 = *puVar2;
    if (*puVar1 != 0) {
      uVar3 = 0;
    }
    uVar3 = FNetTrace::BeginPacketContentEvent(pFVar6,NameId,uVar3);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar4 = FNetTrace::TraceName(TargetObject);
    FVar5 = (pFVar6->Events).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar5 = (ForElementType<FNetTracePacketContentEvent>)&pFVar6->Events;
    }
    *(uint *)((longlong)FVar5 + (ulonglong)uVar3 * 0x10) = uVar4;
  }
  FNetObjectAttachment::SerializeSubObjectReference((FNetObjectAttachment *)this,param_1,param_2);
  if (uVar3 != 0xffffffff) {
    uVar4 = *puVar2;
    if (*puVar1 != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar6,uVar3,uVar4);
  }
  return;
}

// IsServerAllowedToExecuteRPC @ 144282f80

bool __thiscall
UE::Net::Private::FNetRPC::IsServerAllowedToExecuteRPC
          (FNetRPC *this,FNetSerializationContext *param_1)

{
  uint uVar1;
  
  uVar1 = UReplicationSystem::GetOwningNetConnection
                    (param_1->InternalContext->ReplicationSystem,(FNetRefHandle)this->_padding_);
  return uVar1 == param_1->LocalConnectionId;
}

// ResolveFunctionAndObject @ 144290bd0

bool __thiscall
UE::Net::Private::FNetRPC::ResolveFunctionAndObject(FNetRPC *this,FNetSerializationContext *param_1)

{
  uint *puVar1;
  uint uVar2;
  UFunction *pUVar3;
  FReplicationStateDescriptor *this_00;
  FReplicationStateDescriptor *this_01;
  FReplicationStateMemberFunctionDescriptor *pFVar4;
  bool bVar5;
  FQuantizedBlobState *pFVar6;
  FReplicationStateMemberFunctionDescriptor *local_res8;
  FQuantizedBlobState local_18;
  
  if (this->_padding_ != 0) {
    local_res8 = (FReplicationStateMemberFunctionDescriptor *)0x0;
    bVar5 = NetRPC_GetFunctionAndObject
                      (param_1,(FNetObjectReference *)&this->_padding_,
                       (FNetObjectReference *)&this->_padding_,&this->FunctionLocator,&local_res8,
                       &this->ObjectPtr);
    pFVar4 = local_res8;
    if (bVar5) {
      pUVar3 = local_res8->Function;
      this->Function = pUVar3;
      if (pUVar3 != (UFunction *)0x0) {
        puVar1 = (uint *)((longlong)&this->_padding_ + 4);
        if ((pUVar3->FunctionFlags & FUNC_NetReliable) != FUNC_None) {
          *puVar1 = *puVar1 | 1;
        }
        if ((pUVar3->FunctionFlags & FUNC_NetMulticast) == FUNC_None) {
          *puVar1 = *puVar1 | 8;
        }
      }
      this_00 = local_res8->Descriptor;
      this_01 = (FReplicationStateDescriptor *)this->_padding_;
      if (this_01 != this_00) {
        this->_padding_ = (longlong)this_00;
        if (this_00 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::AddRef(this_00);
        }
        if (this_01 != (FReplicationStateDescriptor *)0x0) {
          FReplicationStateDescriptor::Release(this_01);
        }
      }
      uVar2 = pFVar4->Descriptor->InternalSize;
      if (uVar2 != 0) {
        pFVar6 = FNetBlob::FQuantizedBlobState::FQuantizedBlobState
                           (&local_18,uVar2,(uint)pFVar4->Descriptor->InternalAlignment,None);
        FNetBlob::FQuantizedBlobState::operator=((FQuantizedBlobState *)&this->_padding_,pFVar6);
        FNetBlob::FQuantizedBlobState::~FQuantizedBlobState(&local_18);
      }
      return true;
    }
  }
  return false;
}

// Serialize @ 1442924f0

void __thiscall
UE::Net::Private::FNetRPC::Serialize(FNetRPC *this,FNetSerializationContext *param_1)

{
  FNetBitStreamWriter *pFVar1;
  FNetBitStreamWriter *this_00;
  FNetBitStreamWriter *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetTraceCollector *pFVar10;
  FNetTraceCollector *pFVar11;
  
  pFVar1 = param_1->BitStreamWriter;
  pFVar11 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar11 = param_1->TraceCollector;
  }
  uVar5 = 0xffffffff;
  if (pFVar11 != (FNetTraceCollector *)0x0) {
    uVar5 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar5 = 0;
    }
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,uVar5);
    uVar6 = FNetTrace::TraceName(*(FNetDebugName **)(this->_padding_ + 0x60));
    FVar9 = (pFVar11->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  this_00 = param_1->BitStreamWriter;
  uVar6 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
  InternalSerializeHeader(this,param_1,-1);
  if ((param_1->ErrorContext).Error == (FName)0x0) {
    pFVar2 = param_1->BitStreamWriter;
    pFVar10 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar10 = param_1->TraceCollector;
    }
    if (pFVar10 == (FNetTraceCollector *)0x0) {
      FNetObjectAttachment::SerializeObjectReference((FNetObjectAttachment *)this,param_1);
    }
    else {
      uVar7 = pFVar2->BufferBitPosition;
      if (pFVar2->OverflowBitCount != 0) {
        uVar7 = 0;
      }
      uVar7 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,uVar7);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar8 = FNetTrace::TraceName(TargetObject);
      FVar9 = (pFVar10->Events).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
      }
      *(uint *)((longlong)FVar9 + (ulonglong)uVar7 * 0x10) = uVar8;
      FNetObjectAttachment::SerializeObjectReference((FNetObjectAttachment *)this,param_1);
      if (uVar7 != 0xffffffff) {
        uVar8 = pFVar2->BufferBitPosition;
        if (pFVar2->OverflowBitCount != 0) {
          uVar8 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar10,uVar7,uVar8);
      }
    }
    if (((((param_1->ErrorContext).Error == (FName)0x0) &&
         (SerializeFunctionLocator(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) &&
        (InternalSerializeBlob(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) &&
       (this_00->OverflowBitCount == 0)) {
      uVar7 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
      FNetBitStreamWriter::Seek(this_00,uVar6);
      InternalSerializeHeader(this,param_1,uVar7 - uVar6);
      if ((uVar7 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Writer.GetPosBits() <= OriginalPos",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                             ,0x21,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNetBitStreamWriter::Seek(this_00,uVar7);
    }
  }
  if (uVar5 != 0xffffffff) {
    uVar6 = pFVar1->BufferBitPosition;
    if (pFVar1->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar11,uVar5,uVar6);
  }
  return;
}

// SerializeFunctionLocator @ 1442928b0

void __thiscall
UE::Net::Private::FNetRPC::SerializeFunctionLocator(FNetRPC *this,FNetSerializationContext *param_1)

{
  ulonglong uVar1;
  FNetBitStreamWriter *this_00;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetTraceCollector *pFVar7;
  
  this_00 = param_1->BitStreamWriter;
  uVar3 = 0xffffffff;
  pFVar7 = (FNetTraceCollector *)0x0;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar7 = param_1->TraceCollector;
  }
  if (pFVar7 != (FNetTraceCollector *)0x0) {
    uVar3 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar3 = 0;
    }
    uVar3 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar3);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FunctionLocator = CreatePersistentNetDebugName(L"FunctionLocator",0xf);
        _Init_thread_footer(&::_TSS0);
      }
    }
    uVar4 = FNetTrace::TraceName(FunctionLocator);
    FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)uVar3 * 0x10) = uVar4;
  }
  uVar5 = (this->FunctionLocator).FunctionIndex;
  if (uVar5 < (this->FunctionLocator).DescriptorIndex) {
    uVar5 = (this->FunctionLocator).DescriptorIndex;
  }
  uVar1 = ((ulonglong)uVar5 | 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = (int)lVar2 + 4U >> 2;
  FNetBitStreamWriter::WriteBits(this_00,uVar4 - 1,2);
  uVar4 = uVar4 * 4;
  FNetBitStreamWriter::WriteBits(this_00,(uint)(this->FunctionLocator).DescriptorIndex,uVar4);
  FNetBitStreamWriter::WriteBits(this_00,(uint)(this->FunctionLocator).FunctionIndex,uVar4);
  if (uVar3 != 0xffffffff) {
    uVar4 = this_00->BufferBitPosition;
    if (this_00->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,uVar3,uVar4);
  }
  return;
}

// SerializeWithObject @ 144293040

void __thiscall
UE::Net::Private::FNetRPC::SerializeWithObject
          (FNetRPC *this,FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *pFVar3;
  FNetBitStreamWriter *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetTraceCollector *pFVar9;
  FNetTraceCollector *pFVar10;
  uint local_res8;
  uint local_res10;
  
  pFVar3 = param_1->BitStreamWriter;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar10 = param_1->TraceCollector;
  }
  local_res10 = 0xffffffff;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar6 = pFVar3->BufferBitPosition;
    if (pFVar3->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    local_res10 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,uVar6);
    uVar6 = FNetTrace::TraceName(*(FNetDebugName **)(this->_padding_ + 0x60));
    FVar8 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)local_res10 * 0x10) = uVar6;
  }
  this_00 = param_1->BitStreamWriter;
  uVar6 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
  InternalSerializeHeader(this,param_1,-1);
  if (((param_1->ErrorContext).Error == (FName)0x0) &&
     (SerializeFunctionLocator(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) {
    pFVar9 = (FNetTraceCollector *)0x0;
    if (GNetTraceRuntimeVerbosity != 0) {
      pFVar9 = param_1->TraceCollector;
    }
    local_res8 = 0xffffffff;
    puVar1 = &param_1->BitStreamWriter->OverflowBitCount;
    puVar2 = &param_1->BitStreamWriter->BufferBitPosition;
    if (pFVar9 != (FNetTraceCollector *)0x0) {
      uVar7 = *puVar2;
      if (*puVar1 != 0) {
        uVar7 = 0;
      }
      local_res8 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,uVar7);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TargetObject = CreatePersistentNetDebugName(L"TargetObject",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar7 = FNetTrace::TraceName(TargetObject);
      FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)local_res8 * 0x10) = uVar7;
    }
    FNetObjectAttachment::SerializeSubObjectReference((FNetObjectAttachment *)this,param_1,param_2);
    if (local_res8 != 0xffffffff) {
      uVar7 = *puVar2;
      if (*puVar1 != 0) {
        uVar7 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar9,local_res8,uVar7);
    }
    if ((((param_1->ErrorContext).Error == (FName)0x0) &&
        (InternalSerializeBlob(this,param_1), (param_1->ErrorContext).Error == (FName)0x0)) &&
       (this_00->OverflowBitCount == 0)) {
      uVar7 = this_00->BufferBitPosition - this_00->BufferBitStartOffset;
      FNetBitStreamWriter::Seek(this_00,uVar6);
      InternalSerializeHeader(this,param_1,uVar7 - uVar6);
      if ((uVar7 < this_00->BufferBitPosition - this_00->BufferBitStartOffset) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Writer.GetPosBits() <= OriginalPos",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\NetBitStreamUtil.h"
                             ,0x21,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNetBitStreamWriter::Seek(this_00,uVar7);
    }
  }
  if (local_res10 != 0xffffffff) {
    uVar6 = pFVar3->BufferBitPosition;
    if (pFVar3->OverflowBitCount != 0) {
      uVar6 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar10,local_res10,uVar6);
  }
  return;
}

// operator() @ 1504b62a0

bool __thiscall `UE::Net::Private::FNetRPC::CallFunction'::__l53::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608888639159534082>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    if ((**(ulonglong **)this == 0) || (**(ulonglong **)this < 0x40000000000000)) {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
    }
    else {
      ::FString::PrintfImpl(&local_28,L"NetRefHandle (Id=%llu):(RepSystemId=%u)");
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608888639159534082>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b63c2;
    }
  }
  bVar4 = false;
LAB_1504b63c2:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504b7090

bool __thiscall
`UE::Net::Private::FNetRPC::DeserializeWithObject'::__l46::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608888639159533731>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8608888639159533731>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

