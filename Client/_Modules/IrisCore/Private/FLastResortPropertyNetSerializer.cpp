// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// AdjustStorageSize @ 144328180

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::AdjustStorageSize
          (FNetSerializationContext *param_1,FFLastResortPropertyNetSerializerQuantizedType *param_2
          ,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_3 + 7 >> 3) + 3;
  uVar3 = uVar2 & 0xfffffffc;
  if (uVar3 == 0) {
    FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free((FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)param_2,param_1);
    FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free(&(param_2->QuantizedExports).NameStorage,param_1);
    FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free(&(param_2->QuantizedExports).NetTokenStorage,param_1);
    FMemory::Free(param_2->Storage);
    param_2->ByteCapacity = 0;
    param_2->BitCount = 0;
    param_2->Storage = (void *)0x0;
  }
  else if (param_2->ByteCapacity < uVar3) {
    FMemory::Free(param_2->Storage);
    pvVar1 = FMemory::Malloc((ulonglong)uVar3,4);
    *(undefined4 *)((longlong)pvVar1 + (ulonglong)((uVar2 >> 2) - 1) * 4) = 0;
    param_2->ByteCapacity = uVar3;
    param_2->BitCount = param_3;
    param_2->Storage = pvVar1;
  }
  else {
    param_2->BitCount = param_3;
    *(undefined4 *)((longlong)param_2->Storage + (ulonglong)((uVar2 >> 2) - 1) * 4) = 0;
  }
  return;
}

// CloneDynamicState @ 1443289a0

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  undefined4 uVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  void *_Dst;
  ushort uVar4;
  
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  pFVar3 = (FIrisPackageMapExportsQuantizedType *)param_2->Target;
  FIrisPackageMapExportsUtil::CloneDynamicState(param_1,pFVar3,pFVar2);
  _Dst = (void *)0x0;
  uVar4 = (short)(*(int *)(pFVar2[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4)
                  + 7U >> 3) + 3U & 0xfffc;
  if (uVar4 != 0) {
    _Dst = FMemory::Malloc((ulonglong)uVar4,4);
    memcpy(_Dst,*(void **)(pFVar2[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 8)
           ,(ulonglong)uVar4);
  }
  *(uint *)pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad = (uint)uVar4;
  uVar1 = *(undefined4 *)(pFVar2[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4);
  *(void **)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 8) = _Dst;
  *(undefined4 *)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4) = uVar1;
  return;
}

// CollectNetReferences @ 144328ec0

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  uint uVar1;
  FQuantizedObjectReference *pFVar2;
  FNetReferenceCollector *this;
  code *pcVar3;
  bool bVar4;
  FQuantizedObjectReference *pFVar5;
  FNetReferenceInfo local_res10 [4];
  
  pFVar2 = (FQuantizedObjectReference *)param_2->Source;
  this = (FNetReferenceCollector *)param_2->Collector;
  local_res10[0].ResolveType = ResolveOnClient;
  local_res10[0].Padding = '\0';
  pFVar5 = (FQuantizedObjectReference *)pFVar2[4].NetReference.RefHandle.field0_0x0.Value;
  uVar1 = pFVar2[4].NetReference.PathToken.field0_0x0.Value;
  if (pFVar5 == (FQuantizedObjectReference *)0x0) {
    pFVar5 = pFVar2;
  }
  if (((int)uVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = pFVar5 + (int)uVar1;
  for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 1) {
    FNetReferenceCollector::Add
              (this,local_res10,pFVar5,(FNetSerializerChangeMaskParam *)&param_2->_padding_);
  }
  return;
}

// Dequantize @ 14432a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  longlong lVar2;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  FInternalNetSerializationContext *pFVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  UIrisObjectReferencePackageMap *pUVar7;
  UIrisObjectReferencePackageMap *pUVar8;
  UIrisObjectReferencePackageMap *pUVar9;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  FNetBitReader local_158;
  FIrisPackageMapExports local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar2 = param_2->_padding_;
  pFVar5 = FProperty::StaticClass();
  pFVar6 = FFieldPath::GetTyped((FFieldPath *)(lVar2 + 0x10),pFVar5,(UStruct *)0x0);
  pUVar7 = (UIrisObjectReferencePackageMap *)0x0;
  pFVar3 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  pUVar9 = pUVar7;
  if (param_1->InternalContext != (FInternalNetSerializationContext *)0x0) {
    pUVar9 = param_1->InternalContext->PackageMap;
  }
  local_98.References.AllocatorInstance.SecondaryData = (ForElementType<TObjectPtr<UObject>_>)0x0;
  local_98.References.ArrayNum = 0;
  local_98.References.ArrayMax = 4;
  local_98.Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_98.Names.ArrayNum = 0;
  local_98.Names.ArrayMax = 4;
  FIrisPackageMapExportsUtil::Dequantize(param_1,pFVar3,&local_98);
  pFVar4 = param_1->InternalContext;
  pUVar8 = pUVar7;
  if (pFVar4 != (FInternalNetSerializationContext *)0x0) {
    pUVar8 = (UIrisObjectReferencePackageMap *)(pFVar4->ResolveContext).RemoteNetTokenStoreState;
    if (pFVar4->ReplicationSystem != (UReplicationSystem *)0x0) {
      pUVar7 = (UIrisObjectReferencePackageMap *)
               UReplicationSystem::GetNetTokenStore(pFVar4->ReplicationSystem);
    }
  }
  pUVar9->PackageMapExportsForReading = &local_98;
  (pUVar9->NetTokenResolveContext).NetTokenStore = (FNetTokenStore *)pUVar7;
  (pUVar9->NetTokenResolveContext).RemoteNetTokenStoreState = (FNetTokenStoreState *)pUVar8;
  uVar1 = *(uint *)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4);
  if (uVar1 == 0) {
    if (((ulonglong)pFVar6[1].ClassPrivate & 0x1000000200) == 0x1000000200) {
      memset((void *)param_2->Target,0,(longlong)*(int *)((longlong)&pFVar6[1]._padding_ + 4));
    }
    else {
      (**(code **)(pFVar6->_padding_ + 0x130))(pFVar6,(void *)param_2->Target);
    }
  }
  else {
    FNetBitReader::FNetBitReader
              (&local_158,(UPackageMap *)pUVar9,
               *(uchar **)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 8)
               ,(ulonglong)uVar1);
    local_168 = 0;
    (**(code **)(pFVar6->_padding_ + 200))(pFVar6,&local_158,pUVar9,param_2->Target);
    FNetBitReader::~FNetBitReader(&local_158);
  }
  if (local_98.Names.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_98.Names.AllocatorInstance.SecondaryData);
  }
  if (local_98.References.AllocatorInstance.SecondaryData !=
      (ForElementType<TObjectPtr<UObject>_>)0x0) {
    FMemory::Free((void *)local_98.References.AllocatorInstance.SecondaryData);
  }
  return;
}

// Deserialize @ 14432cbf0

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FFLastResortPropertyNetSerializerQuantizedType *pFVar1;
  FNetBitStreamReader *this;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FFieldClass *pFVar6;
  FField *pFVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  FNetTraceCollector *pFVar10;
  uint local_res8 [2];
  longlong local_res18;
  undefined1 local_38 [16];
  
  if (param_1->bIsInitializingDefaultState != 0) {
    return;
  }
  local_res18 = param_2->_padding_;
  uVar4 = 0xffffffff;
  pFVar10 = (FNetTraceCollector *)0x0;
  if (2 < GNetTraceRuntimeVerbosity) {
    pFVar10 = param_1->TraceCollector;
  }
  pFVar1 = (FFLastResortPropertyNetSerializerQuantizedType *)param_2->Target;
  this = param_1->BitStreamReader;
  if (pFVar10 != (FNetTraceCollector *)0x0) {
    uVar4 = FNetTrace::BeginPacketContentEvent(pFVar10,NameId,this->BufferBitPosition);
    lVar2 = local_res18;
    pFVar6 = FProperty::StaticClass();
    pFVar7 = FFieldPath::GetTyped((FFieldPath *)(lVar2 + 0x10),pFVar6,(UStruct *)0x0);
    bVar3 = IsThisNotNull(pFVar7,"FField::GetName");
    if (bVar3) {
      ::FName::ToString(&pFVar7->NamePrivate,(FString *)local_38);
    }
    else {
      ::FString::FString((FString *)local_38,L"None");
    }
    pFVar8 = (FScriptContainerElement *)L"";
    if (local_38._8_4_ != 0) {
      pFVar8 = (FScriptContainerElement *)local_38._0_8_;
    }
    uVar5 = FNetTrace::TraceName((wchar_t *)pFVar8);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    FVar9 = (pFVar10->Events).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar10->Events;
    }
    *(uint *)((longlong)FVar9 + (ulonglong)uVar4 * 0x10) = uVar5;
  }
  FIrisPackageMapExportsUtil::Deserialize(param_1,(FIrisPackageMapExportsQuantizedType *)pFVar1);
  uVar5 = FNetBitStreamReader::ReadBits(this,2);
  local_res8[0] = FNetBitStreamReader::ReadBits(this,uVar5 * 8 + 8);
  if (*(uint *)(local_res18 + 0x34) < local_res8[0]) {
    local_38._0_8_ = local_res8;
    local_38._8_8_ = &local_res18;
    bVar3 = `UE::Net::FLastResortPropertyNetSerializer::Deserialize'::__l6::<lambda_2>::operator()
                      (local_38);
    if (!bVar3) {
      FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
      goto LAB_14432cd95;
    }
  }
  AdjustStorageSize(param_1,pFVar1,local_res8[0]);
  FNetBitStreamReader::ReadBitStream(this,pFVar1->Storage,local_res8[0]);
LAB_14432cd95:
  if (uVar4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar10,uVar4,this->BufferBitPosition);
  }
  return;
}

// FreeDynamicState @ 14432fe70

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *this;
  TTypeCompatibleBytes<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *pTVar1;
  
  this = (FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
          *)param_2->Source;
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(this,param_1);
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free((FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
          *)(this + 1),param_1);
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free((FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
          *)(this + 2),param_1);
  FMemory::Free(*(void **)(this[2].AllocatorInstance.InlineData[1].Pad + 0x10));
  pTVar1 = this[2].AllocatorInstance.InlineData;
  pTVar1[1].Pad[8] = '\0';
  pTVar1[1].Pad[9] = '\0';
  pTVar1[1].Pad[10] = '\0';
  pTVar1[1].Pad[0xb] = '\0';
  pTVar1[1].Pad[0xc] = '\0';
  pTVar1[1].Pad[0xd] = '\0';
  pTVar1[1].Pad[0xe] = '\0';
  pTVar1[1].Pad[0xf] = '\0';
  pTVar1 = this[2].AllocatorInstance.InlineData;
  pTVar1[1].Pad[0x10] = '\0';
  pTVar1[1].Pad[0x11] = '\0';
  pTVar1[1].Pad[0x12] = '\0';
  pTVar1[1].Pad[0x13] = '\0';
  pTVar1[1].Pad[0x14] = '\0';
  pTVar1[1].Pad[0x15] = '\0';
  pTVar1[1].Pad[0x16] = '\0';
  pTVar1[1].Pad[0x17] = '\0';
  return;
}

// FreeDynamicStateInternal @ 1443300a0

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::FreeDynamicStateInternal
          (FNetSerializationContext *param_1,FFLastResortPropertyNetSerializerQuantizedType *param_2
          )

{
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free((FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
          *)param_2,param_1);
  FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&(param_2->QuantizedExports).NameStorage,param_1);
  FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&(param_2->QuantizedExports).NetTokenStorage,param_1);
  FMemory::Free(param_2->Storage);
  param_2->ByteCapacity = 0;
  param_2->BitCount = 0;
  param_2->Storage = (void *)0x0;
  return;
}

// GrowDynamicStateInternal @ 1443318e0

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::GrowDynamicStateInternal
          (FNetSerializationContext *param_1,FFLastResortPropertyNetSerializerQuantizedType *param_2
          ,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_3 + 7 >> 3) + 3;
  uVar3 = uVar2 & 0xfffffffc;
  FMemory::Free(param_2->Storage);
  pvVar1 = FMemory::Malloc((ulonglong)uVar3,4);
  *(undefined4 *)((longlong)pvVar1 + (ulonglong)((uVar2 >> 2) - 1) * 4) = 0;
  param_2->ByteCapacity = uVar3;
  param_2->BitCount = param_3;
  param_2->Storage = pvVar1;
  return;
}

// IsEqual @ 144333b10

bool __cdecl
UE::Net::FLastResortPropertyNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  void *pvVar11;
  void *pvVar12;
  
  if (param_2->bStateIsQuantized == false) {
    lVar5 = param_2->_padding_;
    pFVar9 = FProperty::StaticClass();
    pFVar10 = FFieldPath::GetTyped((FFieldPath *)(lVar5 + 0x10),pFVar9,(UStruct *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000144333c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(pFVar10->_padding_ + 0xb8))(pFVar10,param_2->Source0,param_2->Source1,0);
    return (bool)uVar6;
  }
  pvVar3 = (void *)param_2->Source1;
  pvVar4 = (void *)param_2->Source0;
  iVar8 = *(int *)((longlong)pvVar4 + 0x104);
  if (iVar8 == *(int *)((longlong)pvVar3 + 0x104)) {
    uVar1 = *(uint *)((longlong)pvVar4 + 0x68);
    if (uVar1 == *(uint *)((longlong)pvVar3 + 0x68)) {
      uVar2 = *(uint *)((longlong)pvVar4 + 0xd8);
      if ((uVar2 == *(uint *)((longlong)pvVar3 + 0xd8)) &&
         (*(int *)((longlong)pvVar4 + 0xf8) == *(int *)((longlong)pvVar3 + 0xf8))) {
        if (uVar1 != 0) {
          pvVar12 = *(void **)((longlong)pvVar3 + 0x60);
          if (*(void **)((longlong)pvVar3 + 0x60) == (void *)0x0) {
            pvVar12 = pvVar3;
          }
          pvVar11 = *(void **)((longlong)pvVar4 + 0x60);
          if (*(void **)((longlong)pvVar4 + 0x60) == (void *)0x0) {
            pvVar11 = pvVar4;
          }
          iVar7 = memcmp(pvVar11,pvVar12,(ulonglong)uVar1 << 4);
          if (iVar7 != 0) {
            return false;
          }
        }
        if (uVar2 != 0) {
          pvVar12 = *(void **)((longlong)pvVar3 + 0xd0);
          if (*(void **)((longlong)pvVar3 + 0xd0) == (void *)0x0) {
            pvVar12 = (void *)((longlong)pvVar3 + 0x70);
          }
          pvVar11 = *(void **)((longlong)pvVar4 + 0xd0);
          if (*(void **)((longlong)pvVar4 + 0xd0) == (void *)0x0) {
            pvVar11 = (void *)((longlong)pvVar4 + 0x70);
          }
          iVar7 = memcmp(pvVar11,pvVar12,(ulonglong)uVar2 << 3);
          if (iVar7 != 0) {
            return false;
          }
        }
        if ((iVar8 == 0) ||
           (iVar8 = memcmp(*(void **)((longlong)pvVar4 + 0x108),*(void **)((longlong)pvVar3 + 0x108)
                           ,(ulonglong)((iVar8 + 7U >> 3) + 3) & 0xfffffffc), iVar8 == 0)) {
          return true;
        }
      }
    }
  }
  return false;
}

// Quantize @ 1443362f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001443363c7) */
/* WARNING: Removing unreachable block (ram,0x0001443363fe) */

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  longlong lVar1;
  FFLastResortPropertyNetSerializerQuantizedType *pFVar2;
  UReplicationSystem *this;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FFieldClass *pFVar6;
  FField *pFVar7;
  UIrisObjectReferencePackageMap *pUVar8;
  UIrisObjectReferencePackageMap *pUVar9;
  ulonglong uVar10;
  undefined1 auStackY_238 [32];
  longlong local_208;
  ulonglong local_200;
  longlong *local_1f8;
  ulonglong *local_1f0;
  longlong *local_1e8;
  ForElementType<UE::Net::FNetToken> local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<UE::Net::FNetToken_const_,int> local_1c8;
  FNetTokenExportScope local_1b8;
  FNetBitWriter local_188;
  TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_b8;
  FIrisPackageMapExports local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar1 = param_2->_padding_;
  local_208 = lVar1;
  pFVar6 = FProperty::StaticClass();
  pFVar7 = FFieldPath::GetTyped((FFieldPath *)(lVar1 + 0x10),pFVar6,(UStruct *)0x0);
  pUVar8 = (UIrisObjectReferencePackageMap *)0x0;
  pFVar2 = (FFLastResortPropertyNetSerializerQuantizedType *)param_2->Target;
  pUVar9 = pUVar8;
  if (param_1->InternalContext != (FInternalNetSerializationContext *)0x0) {
    pUVar9 = param_1->InternalContext->PackageMap;
  }
  if (pUVar9 != (UIrisObjectReferencePackageMap *)0x0) {
    pUVar9->PackageMapExportsForWriting = &local_98;
  }
  local_98.Names.ArrayMax = 4;
  local_98.Names.ArrayNum = 0;
  local_98.Names.AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  local_98.References.ArrayMax = 4;
  local_98.References.ArrayNum = 0;
  local_98.References.AllocatorInstance.SecondaryData = (ForElementType<TObjectPtr<UObject>_>)0x0;
  local_b8.ArrayMax = 4;
  local_b8.ArrayNum = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<UE::Net::FNetToken>)0x0;
  FNetBitWriter::FNetBitWriter(&local_188,(UPackageMap *)pUVar9,0x2000);
  if ((param_1->InternalContext != (FInternalNetSerializationContext *)0x0) &&
     (this = param_1->InternalContext->ReplicationSystem, this != (UReplicationSystem *)0x0)) {
    pUVar8 = (UIrisObjectReferencePackageMap *)UReplicationSystem::GetNetTokenStore(this);
  }
  FNetTokenExportScope::FNetTokenExportScope
            (&local_1b8,&local_188,(FNetTokenStore *)pUVar8,&local_b8,"None");
  (**(code **)(pFVar7->_padding_ + 200))(pFVar7,&local_188,pUVar9,param_2->Source);
  local_200 = local_188._padding_;
  if ((ulonglong)*(uint *)(local_208 + 0x34) < (ulonglong)local_188._padding_) {
    local_1f0 = &local_200;
    local_1e8 = &local_208;
    bVar5 = `UE::Net::FLastResortPropertyNetSerializer::Quantize'::__l6::<lambda_1>::operator()
                      (&local_1f0);
    if (bVar5) goto LAB_1443364cf;
LAB_1443364ed:
    FNetSerializationContext::SetError(param_1,GNetError_ArraySizeTooLarge,true);
  }
  else {
LAB_1443364cf:
    if ((local_188._padding_._1_1_ & 2) != 0) {
      local_1f8 = &local_208;
      bVar5 = `UE::Net::FLastResortPropertyNetSerializer::Quantize'::__l9::<lambda_2>::operator()
                        (&local_1f8);
      if (!bVar5) goto LAB_1443364ed;
    }
    iVar4 = local_b8.ArrayNum;
    local_1d8 = (ForElementType<UE::Net::FNetToken>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<UE::Net::FNetToken>)0x0) {
      local_1d8 = local_b8.AllocatorInstance.SecondaryData;
    }
    if ((local_b8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_1d0 = iVar4;
    local_1c8._12_4_ = uStack_1cc;
    local_1c8.ArrayNum = iVar4;
    local_1c8.DataPtr = (FNetToken *)local_1d8;
    FIrisPackageMapExportsUtil::Quantize
              (param_1,&local_98,&local_1c8,(FIrisPackageMapExportsQuantizedType *)pFVar2);
    AdjustStorageSize(param_1,pFVar2,(uint)local_200);
    if (local_200 != 0) {
      uVar10 = local_200 + 7;
      if (((local_188._padding_._1_1_ & 2) != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                             ,0x49,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy(pFVar2->Storage,(void *)local_188._padding_,uVar10 >> 3);
    }
  }
  FNetTokenExportScope::~FNetTokenExportScope(&local_1b8);
  FBitWriter::~FBitWriter((FBitWriter *)&local_188);
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<UE::Net::FNetToken>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if (local_98.Names.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_98.Names.AllocatorInstance.SecondaryData);
  }
  if (local_98.References.AllocatorInstance.SecondaryData !=
      (ForElementType<TObjectPtr<UObject>_>)0x0) {
    FMemory::Free((void *)local_98.References.AllocatorInstance.SecondaryData);
  }
  return;
}

// Serialize @ 14433bf80

void __cdecl
UE::Net::FLastResortPropertyNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  FNetBitStreamWriter *this;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  ForAnyElementType FVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  uint uVar11;
  FNetTraceCollector *pFVar12;
  FString local_28;
  
  lVar2 = param_2->_padding_;
  pFVar3 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  this = param_1->BitStreamWriter;
  if ((param_1->bIsInitializingDefaultState == 0) ||
     ((*(char *)(lVar2 + 0x30) == '\0' && ((pFVar3->NetTokenStorage).ArrayNum == 0)))) {
    uVar5 = 0xffffffff;
    pFVar12 = (FNetTraceCollector *)0x0;
    if (2 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar5 = 0;
      }
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar5);
      pFVar7 = FProperty::StaticClass();
      pFVar8 = FFieldPath::GetTyped((FFieldPath *)(lVar2 + 0x10),pFVar7,(UStruct *)0x0);
      bVar4 = IsThisNotNull(pFVar8,"FField::GetName");
      if (bVar4) {
        ::FName::ToString(&pFVar8->NamePrivate,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar9.Data = local_28.Data.AllocatorInstance.Data;
      }
      uVar6 = FNetTrace::TraceName((wchar_t *)FVar9.Data);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    FIrisPackageMapExportsUtil::Serialize(param_1,pFVar3);
    uVar6 = *(uint *)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4);
    uVar1 = ((ulonglong)uVar6 | 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = (int)lVar2 + 7U >> 3;
    FNetBitStreamWriter::WriteBits(this,uVar11 - 1,2);
    FNetBitStreamWriter::WriteBits(this,uVar6,uVar11 * 8);
    uVar6 = *(uint *)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].Pad + 4);
    if (uVar6 != 0) {
      FNetBitStreamWriter::WriteBitStream
                (this,*(uint **)(pFVar3[1].ObjectReferenceStorage.AllocatorInstance.InlineData[0].
                                 Pad + 8),0,uVar6);
    }
    if (uVar5 != 0xffffffff) {
      uVar6 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar6 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,uVar6);
    }
  }
  return;
}

// operator() @ 1504bc9d0

bool __thiscall
`UE::Net::FLastResortPropertyNetSerializer::Quantize'::__l6::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  bool bVar7;
  FString local_18;
  
  bVar7 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1074009396167573329>);
  if (bVar3) {
    lVar1 = **(longlong **)((longlong)this + 8);
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped((FFieldPath *)(lVar1 + 0x10),pFVar5,(UStruct *)0x0);
    bVar3 = IsThisNotNull(pFVar6,"FField::GetName");
    if (bVar3) {
      ::FName::ToString(&pFVar6->NamePrivate,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar7 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1074009396167573329>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504bca97;
    }
  }
  bVar3 = false;
LAB_1504bca97:
  if ((bVar7) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504bcc30

bool __thiscall
`UE::Net::FLastResortPropertyNetSerializer::Deserialize'::__l6::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  bool bVar7;
  FString local_18;
  
  bVar7 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1074009396167573368>);
  if (bVar3) {
    lVar1 = **(longlong **)((longlong)this + 8);
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped((FFieldPath *)(lVar1 + 0x10),pFVar5,(UStruct *)0x0);
    bVar3 = IsThisNotNull(pFVar6,"FField::GetName");
    if (bVar3) {
      ::FName::ToString(&pFVar6->NamePrivate,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar7 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1074009396167573368>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504bccf7;
    }
  }
  bVar3 = false;
LAB_1504bccf7:
  if ((bVar7) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 1504bcd30

bool __thiscall
`UE::Net::FLastResortPropertyNetSerializer::Quantize'::__l9::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  bool bVar7;
  FString local_18;
  
  bVar7 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1074009396167573323>);
  if (bVar3) {
    lVar1 = **(longlong **)this;
    pFVar5 = FProperty::StaticClass();
    pFVar6 = FFieldPath::GetTyped((FFieldPath *)(lVar1 + 0x10),pFVar5,(UStruct *)0x0);
    bVar3 = IsThisNotNull(pFVar6,"FField::GetName");
    if (bVar3) {
      ::FName::ToString(&pFVar6->NamePrivate,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar7 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1074009396167573323>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504bcde0;
    }
  }
  bVar3 = false;
LAB_1504bcde0:
  if ((bVar7) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

