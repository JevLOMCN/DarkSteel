// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// CloneDynamicState @ 147bcc630

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  FIrisPackageMapExportsQuantizedType *this;
  uint uVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  uint uVar3;
  ForElementType<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pFVar4;
  FIrisPackageMapExportsQuantizedType *_Dst;
  FIrisPackageMapExportsQuantizedType *pFVar5;
  FIrisPackageMapExportsQuantizedType *_Src;
  
  pFVar5 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Target;
  FIrisPackageMapExportsUtil::CloneDynamicState(param_1,pFVar2,pFVar5);
  this = pFVar2 + 1;
  pFVar4 = &pFVar2[1].NameStorage.AllocatorInstance;
  pFVar4->InlineData[0].Pad[0x10] = '\0';
  pFVar4->InlineData[0].Pad[0x11] = '\0';
  pFVar4->InlineData[0].Pad[0x12] = '\0';
  pFVar4->InlineData[0].Pad[0x13] = '\0';
  pFVar4->InlineData[0].Pad[0x14] = '\0';
  pFVar4->InlineData[0].Pad[0x15] = '\0';
  pFVar4->InlineData[0].Pad[0x16] = '\0';
  pFVar4->InlineData[0].Pad[0x17] = '\0';
  uVar1 = *(uint *)pFVar5[1].NameStorage.AllocatorInstance.InlineData[1].Pad;
  uVar3 = uVar1;
  if (uVar1 < 0x21) {
    uVar3 = 0x20;
  }
  AllocationPolicies::
  TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>::
  ForElementType<unsigned_int>::ResizeAllocation
            ((ForElementType<unsigned_int> *)this,param_1,0,uVar3);
  _Src = *(FIrisPackageMapExportsQuantizedType **)
          (pFVar5[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
  _Dst = *(FIrisPackageMapExportsQuantizedType **)
          (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
  if (_Src == (FIrisPackageMapExportsQuantizedType *)0x0) {
    _Src = pFVar5 + 1;
  }
  if (_Dst == (FIrisPackageMapExportsQuantizedType *)0x0) {
    _Dst = this;
  }
  memcpy(_Dst,_Src,(ulonglong)uVar1 * 4);
  if (uVar1 < uVar3) {
    pFVar5 = *(FIrisPackageMapExportsQuantizedType **)
              (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
    if (pFVar5 == (FIrisPackageMapExportsQuantizedType *)0x0) {
      pFVar5 = this;
    }
    memset((pFVar5->ObjectReferenceStorage).AllocatorInstance.InlineData[0].Pad +
           (ulonglong)uVar1 * 4,0,(ulonglong)(uVar3 - uVar1) << 2);
  }
  *(uint *)pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad = uVar1;
  *(uint *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 4) = uVar3;
  return;
}

// CollectNetReferences @ 147bccc20

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FIrisPackageMapExportsUtil::CollectNetReferences
            (param_1,(FIrisPackageMapExportsQuantizedType *)param_2->Source,
             (FNetSerializerChangeMaskParam *)&param_2->_padding_,
             (FNetReferenceCollector *)param_2->Collector);
  return;
}

// Dequantize @ 147bd51f0

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> this;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  FIrisPackageMapExportsQuantizedType *pFVar6;
  
  this = (ForElementType<unsigned_int>)param_2->Target;
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  FIrisPackageMapExportsUtil::Dequantize
            (param_1,pFVar2,(FIrisPackageMapExports *)((longlong)this + 0x90));
  TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumUninitialized
            ((TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)this,
             *(int *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8));
  pFVar6 = *(FIrisPackageMapExportsQuantizedType **)
            (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
  uVar1 = *(uint *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8);
  if (pFVar6 == (FIrisPackageMapExportsQuantizedType *)0x0) {
    pFVar6 = pFVar2 + 1;
  }
  if (((int)uVar1 < 0) || (*(int *)((longlong)this + 0x88) < (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uVar1 != 0) && (pFVar6 == (FIrisPackageMapExportsQuantizedType *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBitsToSet == 0 || ReadBits != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x3bd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5 = *(ForElementType<unsigned_int> *)((longlong)this + 0x80);
  if (*(ForElementType<unsigned_int> *)((longlong)this + 0x80) == (ForElementType<unsigned_int>)0x0)
  {
    FVar5 = this;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar5,0,(uint *)pFVar6,0,uVar1);
  return;
}

// Deserialize @ 147bd5d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  longlong lVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  FNetBitStreamReader *this;
  TTypeCompatibleBytes<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pTVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  FIrisPackageMapExportsQuantizedType *pFVar7;
  undefined1 local_res8 [8];
  
  if (param_1->bIsInitializingDefaultState == 0) {
    lVar1 = param_2->_padding_;
    pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Target;
    this = param_1->BitStreamReader;
    FIrisPackageMapExportsUtil::Deserialize(param_1,pFVar2);
    uVar5 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar5 & 1) == 0) {
      FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
      ::Free((FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
              *)(pFVar2 + 1),param_1);
      pTVar3 = pFVar2[1].NameStorage.AllocatorInstance.InlineData;
      pTVar3[1].Pad[8] = '\0';
      pTVar3[1].Pad[9] = '\0';
      pTVar3[1].Pad[10] = '\0';
      pTVar3[1].Pad[0xb] = '\0';
    }
    else {
      uVar5 = ReadPackedUint32(this);
      if (CVarNetPackedMovementMaxBits == (IConsoleVariable *)0x0) {
        uVar6 = *(uint *)(lVar1 + 0x10);
      }
      else {
        uVar6 = (**(code **)(*(longlong *)CVarNetPackedMovementMaxBits + 200))();
      }
      FVar4 = GNetError_ArraySizeTooLarge;
      if (uVar6 < uVar5) {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar4);
        if (1 < (byte)LogNetPlayerMovement._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
        }
        `UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Deserialize'::__l11::
        <lambda_1>::operator()(local_res8);
      }
      else {
        FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
        ::AdjustSize((FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                      *)(pFVar2 + 1),param_1,uVar5 + 0x1f >> 5);
        pFVar7 = *(FIrisPackageMapExportsQuantizedType **)
                  (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
        if (pFVar7 == (FIrisPackageMapExportsQuantizedType *)0x0) {
          pFVar7 = pFVar2 + 1;
        }
        FNetBitStreamReader::ReadBitStream(this,(uint *)pFVar7,uVar5);
        *(uint *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8) = uVar5;
      }
    }
  }
  return;
}

// FreeDynamicState @ 147bdd700

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,
          FCharacterNetworkSerializationPackedBitsNetSerializerQuantizedType *param_2)

{
  FIrisPackageMapExportsUtil::FreeDynamicState(param_1,&param_2->QuantizedExports);
  FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free(&param_2->DataBitsStorage,param_1);
  param_2->NumDataBits = 0;
  return;
}

// FreeDynamicState @ 147bdd740

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FIrisPackageMapExportsQuantizedType *pFVar1;
  TTypeCompatibleBytes<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pTVar2;
  
  pFVar1 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  FIrisPackageMapExportsUtil::FreeDynamicState(param_1,pFVar1);
  FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  ::Free((FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
          *)(pFVar1 + 1),param_1);
  pTVar2 = pFVar1[1].NameStorage.AllocatorInstance.InlineData;
  pTVar2[1].Pad[8] = '\0';
  pTVar2[1].Pad[9] = '\0';
  pTVar2[1].Pad[10] = '\0';
  pTVar2[1].Pad[0xb] = '\0';
  return;
}

// IsEqual @ 147bf09c0

bool __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  FIrisPackageMapExportsQuantizedType *pFVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FIrisPackageMapExportsQuantizedType *_Buf1;
  FIrisPackageMapExportsQuantizedType *_Buf2;
  size_t _Size;
  
  pFVar1 = (FIrisPackageMapExportsQuantizedType *)param_2->Source0;
  pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    iVar5 = *(int *)(pFVar1->NameStorage).AllocatorInstance.InlineData[1].Pad;
    if (iVar5 == *(int *)(pFVar2->NameStorage).AllocatorInstance.InlineData[1].Pad) {
      _Buf2 = *(FIrisPackageMapExportsQuantizedType **)
               ((pFVar2->NameStorage).AllocatorInstance.InlineData[0].Pad + 0x10);
      _Buf1 = *(FIrisPackageMapExportsQuantizedType **)
               ((pFVar1->NameStorage).AllocatorInstance.InlineData[0].Pad + 0x10);
      _Size = (ulonglong)(iVar5 + 0x1fU >> 5) << 2;
      if (_Buf2 == (FIrisPackageMapExportsQuantizedType *)0x0) {
        _Buf2 = pFVar2;
      }
      if (_Buf1 == (FIrisPackageMapExportsQuantizedType *)0x0) {
        _Buf1 = pFVar1;
      }
      goto LAB_147bf0a88;
    }
  }
  else if ((*(int *)(pFVar1[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8) ==
            *(int *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8)) &&
          (bVar3 = FIrisPackageMapExportsUtil::IsEqual(param_1,pFVar1,pFVar2), bVar3)) {
    uVar4 = *(int *)(pFVar1[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8) + 0x1f;
    if (uVar4 >> 5 == 0) {
      return true;
    }
    _Buf2 = *(FIrisPackageMapExportsQuantizedType **)
             (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
    _Buf1 = *(FIrisPackageMapExportsQuantizedType **)
             (pFVar1[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
    _Size = (ulonglong)(uVar4 >> 5) << 2;
    if (_Buf2 == (FIrisPackageMapExportsQuantizedType *)0x0) {
      _Buf2 = pFVar2 + 1;
    }
    if (_Buf1 == (FIrisPackageMapExportsQuantizedType *)0x0) {
      _Buf1 = pFVar1 + 1;
    }
LAB_147bf0a88:
    iVar5 = memcmp(_Buf1,_Buf2,_Size);
    return iVar5 == 0;
  }
  return false;
}

// Quantize @ 147bf90f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  FIrisPackageMapExportsQuantizedType *pFVar4;
  code *pcVar5;
  TTypeCompatibleBytes<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName> *pTVar6;
  bool bVar7;
  uint uVar8;
  FNetToken *pFVar9;
  FIrisPackageMapExportsQuantizedType *_Dst;
  void *_Src;
  undefined1 local_res10 [8];
  undefined4 uStack_2c;
  TArrayView<UE::Net::FNetToken_const_,int> local_28;
  
  pvVar3 = (void *)param_2->Source;
  pFVar4 = (FIrisPackageMapExportsQuantizedType *)param_2->Target;
  iVar1 = *(int *)((longlong)pvVar3 + 0x108);
  pFVar9 = *(FNetToken **)((longlong)pvVar3 + 0x100);
  if (*(FNetToken **)((longlong)pvVar3 + 0x100) == (FNetToken *)0x0) {
    pFVar9 = (FNetToken *)((longlong)pvVar3 + 0xf0);
  }
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = pFVar9;
  FIrisPackageMapExportsUtil::Quantize
            (param_1,(FIrisPackageMapExports *)((longlong)pvVar3 + 0x90),&local_28,pFVar4);
  uVar2 = *(uint *)((longlong)pvVar3 + 0x88);
  if (CVarNetPackedMovementMaxBits == (IConsoleVariable *)0x0) {
    uVar8 = *(uint *)(param_2->_padding_ + 0x10);
  }
  else {
    uVar8 = (**(code **)(*(longlong *)CVarNetPackedMovementMaxBits + 200))();
  }
  if (uVar8 < uVar2) {
    if (1 < (byte)LogNetPlayerMovement._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetPlayerMovement);
    }
    `UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Quantize'::__l5::<lambda_1>::
    operator()(local_res10);
    FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::AdjustSize((FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                  *)(pFVar4 + 1),param_1,0);
    pTVar6 = pFVar4[1].NameStorage.AllocatorInstance.InlineData;
    pTVar6[1].Pad[8] = '\0';
    pTVar6[1].Pad[9] = '\0';
    pTVar6[1].Pad[10] = '\0';
    pTVar6[1].Pad[0xb] = '\0';
  }
  else {
    FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::AdjustSize((FNetSerializerArrayStorage<unsigned_int,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<32,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
                  *)(pFVar4 + 1),param_1,uVar2 + 0x1f >> 5);
    if (uVar2 != 0) {
      _Dst = *(FIrisPackageMapExportsQuantizedType **)
              (pFVar4[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
      _Src = *(void **)((longlong)pvVar3 + 0x80);
      if (*(void **)((longlong)pvVar3 + 0x80) == (void *)0x0) {
        _Src = pvVar3;
      }
      if (_Dst == (FIrisPackageMapExportsQuantizedType *)0x0) {
        _Dst = pFVar4 + 1;
      }
      memcpy(_Dst,_Src,(ulonglong)(uVar2 + 7 >> 3));
    }
    *(uint *)(pFVar4[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8) = uVar2;
  }
  return;
}

// Serialize @ 147bfed50

void __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint uVar1;
  FIrisPackageMapExportsQuantizedType *pFVar2;
  FNetBitStreamWriter *this;
  FIrisPackageMapExportsQuantizedType *pFVar3;
  
  if (param_1->bIsInitializingDefaultState == 0) {
    pFVar2 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
    this = param_1->BitStreamWriter;
    FIrisPackageMapExportsUtil::Serialize(param_1,pFVar2);
    uVar1 = *(uint *)(pFVar2[1].NameStorage.AllocatorInstance.InlineData[1].Pad + 8);
    FNetBitStreamWriter::WriteBits(this,(uint)(uVar1 != 0),1);
    if (uVar1 != 0) {
      WritePackedUint32(this,uVar1);
      pFVar3 = *(FIrisPackageMapExportsQuantizedType **)
                (pFVar2[1].NameStorage.AllocatorInstance.InlineData[0].Pad + 0x10);
      if (pFVar3 == (FIrisPackageMapExportsQuantizedType *)0x0) {
        pFVar3 = pFVar2 + 1;
      }
      FNetBitStreamWriter::WriteBitStream(this,(uint *)pFVar3,0,uVar1);
    }
  }
  return;
}

// Validate @ 147c0bd60

bool __cdecl
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  FIrisPackageMapExportsQuantizedType *pFVar1;
  bool bVar2;
  
  pFVar1 = (FIrisPackageMapExportsQuantizedType *)param_2->Source;
  if (CVarNetPackedMovementMaxBits != (IConsoleVariable *)0x0) {
    (**(code **)(*(longlong *)CVarNetPackedMovementMaxBits + 200))();
  }
  bVar2 = FIrisPackageMapExportsUtil::Validate(param_1,pFVar1);
  return bVar2;
}

// operator() @ 15051a1b0

bool __thiscall
`UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Quantize'::__l5::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180746727920238396>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180746727920238396>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051a300

bool __thiscall
`UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::Deserialize'::__l11::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180746727920238431>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180746727920238431>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

