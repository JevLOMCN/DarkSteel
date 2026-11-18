// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 729

// Construct<FSupportsStructNetSerializerConfig> @ 1441f2210

void __cdecl UE::CoreUObject::Private::Construct<FSupportsStructNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FSupportsStructNetSerializerConfig> @ 1441f2230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSupportsStructNetSerializerConfig>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FSupportsStructNetSerializerConfig> @ 1441f2240

void __cdecl UE::CoreUObject::Private::Destruct<FSupportsStructNetSerializerConfig>(void *param_1)

{
  return;
}

// Copy<FSupportsStructNetSerializerConfig> @ 1441f2250

bool __cdecl
UE::CoreUObject::Private::Copy<FSupportsStructNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FReplicationStateDescriptorClassPushModelConfig> @ 1441f2900

void __cdecl
UE::CoreUObject::Private::Construct<FReplicationStateDescriptorClassPushModelConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FReplicationStateDescriptorClassPushModelConfig> @ 1441f2910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FReplicationStateDescriptorClassPushModelConfig>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FReplicationStateDescriptorClassPushModelConfig> @ 1441f2920

void __cdecl
UE::CoreUObject::Private::Destruct<FReplicationStateDescriptorClassPushModelConfig>(void *param_1)

{
  return;
}

// Copy<FReplicationStateDescriptorClassPushModelConfig> @ 1441f2930

bool __cdecl
UE::CoreUObject::Private::Copy<FReplicationStateDescriptorClassPushModelConfig>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectScopeHysteresisProfile> @ 1441f2a80

void __cdecl UE::CoreUObject::Private::Construct<FObjectScopeHysteresisProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FObjectScopeHysteresisProfile> @ 1441f2a90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectScopeHysteresisProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FObjectScopeHysteresisProfile> @ 1441f2aa0

void __cdecl UE::CoreUObject::Private::Destruct<FObjectScopeHysteresisProfile>(void *param_1)

{
  return;
}

// Copy<FObjectScopeHysteresisProfile> @ 1441f2ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectScopeHysteresisProfile>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetSerializerConfig> @ 1441f2af0

void __cdecl UE::CoreUObject::Private::Construct<FNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FNetSerializerConfig> @ 1441f2b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Destruct<FNetSerializerConfig> @ 1441f2b30

void __cdecl UE::CoreUObject::Private::Destruct<FNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FNetSerializerConfig> @ 1441f2b40

bool __cdecl
UE::CoreUObject::Private::Copy<FNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FIrisFastArraySerializer> @ 1441f2b70

void __cdecl UE::CoreUObject::Private::Construct<FIrisFastArraySerializer>(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FFastArraySerializer::FFastArraySerializer(param_1);
  puVar1 = (undefined4 *)((longlong)param_1 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (puVar1 != (undefined4 *)((longlong)param_1 + 0x11c)) {
    do {
      uVar2 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)param_1) + (longlong)puVar1 >> 2)) {
        uVar2 = 0xffffffff;
      }
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)((longlong)param_1 + 0x11c));
  }
  return;
}

// ConstructForTests<FIrisFastArraySerializer> @ 1441f2b80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIrisFastArraySerializer>(void *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FFastArraySerializer::FFastArraySerializer(param_1);
  puVar1 = (undefined4 *)((longlong)param_1 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (puVar1 != (undefined4 *)((longlong)param_1 + 0x11c)) {
    do {
      uVar2 = 0;
      if (1 < (ulonglong)((-0x10c - (longlong)param_1) + (longlong)puVar1 >> 2)) {
        uVar2 = 0xffffffff;
      }
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)((longlong)param_1 + 0x11c));
  }
  return;
}

// Destruct<FIrisFastArraySerializer> @ 1441f2b90

void __cdecl UE::CoreUObject::Private::Destruct<FIrisFastArraySerializer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FIrisFastArraySerializer> @ 1441f2ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FIrisFastArraySerializer>(void *param_1,void *param_2,int param_3)

{
  FIrisFastArraySerializer *pFVar1;
  FIrisFastArraySerializer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FIrisFastArraySerializer *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if ((this != pFVar1) &&
         (FFastArraySerializer::operator=
                    ((FFastArraySerializer *)this,(FFastArraySerializer *)pFVar1),
         (this->ReplicationStateHeader).NetHandleId != 0)) {
        FIrisFastArraySerializer::InternalMarkAllItemsChanged(this);
      }
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDataStreamDefinition> @ 1441f4390

void __cdecl UE::CoreUObject::Private::Construct<FDataStreamDefinition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// ConstructForTests<FDataStreamDefinition> @ 1441f43c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataStreamDefinition>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// Destruct<FDataStreamDefinition> @ 1441f43f0

void __cdecl UE::CoreUObject::Private::Destruct<FDataStreamDefinition>(void *param_1)

{
  return;
}

// Copy<FDataStreamDefinition> @ 1441f4450

bool __cdecl
UE::CoreUObject::Private::Copy<FDataStreamDefinition>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined8 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      puVar2[2] = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 0x18);
      *(undefined1 *)((longlong)puVar2 + 0x19) = *(undefined1 *)((longlong)pvVar1 + 0x19);
      *(undefined1 *)((longlong)puVar2 + 0x1a) = *(undefined1 *)((longlong)pvVar1 + 0x1a);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<UDataStreamManager::FImpl> @ 1441f5820

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<UDataStreamManager::FImpl>(void *param_1)

{
  UDataStreamManager::FImpl::~FImpl((FImpl *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x1b0);
  return;
}

// DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&> @ 1441f5850

FIrisCoreModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
          (FIrisCoreModule **param_1)

{
  return *param_1;
}

// GetBitsNeeded<unsigned_short,1> @ 1441f6500

uint __cdecl UE::Net::GetBitsNeeded<unsigned_short,1>(ushort param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_> @ 1441f70e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
          *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UStruct_const_*>_> @ 1441f7180

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UStruct_const_*>_>
          (ushort param_1,ForElementType<UStruct_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UStruct_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_> @ 1441f7320

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
          (ushort param_1,
          ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1441f73f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (ushort param_1,ForElementType<UE::Net::FNetToken> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1441f74c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x100;
    uVar8 = (ulonglong)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x101) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_> @ 1441f75a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDataStreamRecord_const_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDataStreamRecord_const_*>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 1441f7680

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FNetObjectReference> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1441f7760

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetRefHandle> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1441f7840

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetToken> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1441f7920

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x100;
  if (0x100 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_> @ 1441f79e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FDataStreamRecord_const_*>_>
          (uint param_1,uint param_2,ForElementType<FDataStreamRecord_const_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FDataStreamRecord_const_*>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 1441f7aa0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (uint param_1,uint param_2,ForElementType<UE::Net::FNetObjectReference> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1441f7b60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,ForElementType<UE::Net::FNetRefHandle> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1441f7c20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,ForElementType<UE::Net::FNetToken> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_> @ 1441f7ce0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FPropertyReplicationStateDescriptorBuilder::FMemberProperty>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 1441fa970

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __thiscall
`UE::Net::IrisDebugHelper::NetObjectProtocolReferencesToString'::__l2::<lambda_1>::operator()
          (void *this,FReplicationProtocol *param_1,FObjectKey param_2)

{
  FNetRefHandleManager *this_00;
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  FReplicatedObjectData *pFVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  uint uVar7;
  uint uVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint *puVar14;
  FObjectKey local_res8;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  FNetBitArrayView local_60 [2];
  
  pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
  pwVar12 = pTVar4->CurPos;
  if (pTVar4->End < pwVar12 + 10) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,10);
    pwVar12 = pTVar4->CurPos;
  }
  pvVar2 = FGenericPlatformString::Memcpy(pwVar12,L"Protocol: ",0x14);
  pTVar4->CurPos = (wchar_t *)((longlong)pvVar2 + 0x14);
  if ((param_1->DebugName == (FNetDebugName *)0x0) ||
     (pwVar12 = param_1->DebugName->Name, pwVar12 == (wchar_t *)0x0)) {
    pwVar12 = L"N/A";
  }
  sVar3 = wcslen(pwVar12);
  uVar9 = (ulong64)(int)sVar3;
  if (pTVar4->End < (wchar_t *)((longlong)pvVar2 + 0x14) + uVar9) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,uVar9);
  }
  if ((int)sVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(pTVar4->CurPos,pwVar12,uVar9 * 2);
    pTVar4->CurPos = (wchar_t *)((longlong)pvVar2 + uVar9 * 2);
  }
  pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
  local_res8 = param_2;
  FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8,true);
  pTVar4 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar4,L"Id: 0x%x Created From : 0x%p");
  if (pTVar4->End < pTVar4->CurPos + 0xc) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,0xc);
  }
  pvVar2 = FGenericPlatformString::Memcpy(pTVar4->CurPos,L" Used by : \n",0x18);
  pTVar4->CurPos = (wchar_t *)((longlong)pvVar2 + 0x18);
  this_00 = *(FNetRefHandleManager **)((longlong)this + 8);
  pTVar4 = *(TStringBuilderBase<wchar_t> **)this;
  UE::Net::FNetBitArrayView::FNetBitArrayView
            (local_60,(uint *)(this_00->AssignedInternalIndices).Storage.AllocatorInstance.Data,
             (this_00->AssignedInternalIndices).BitCount);
  uVar13 = 0;
  local_res10 = local_60[0].WordCount;
  uVar8 = 0xffffffff >> (-(char)local_60[0].BitCount & 0x1fU);
  uVar11 = 0;
  local_res20 = local_60[0].WordCount - 1;
  local_res8 = (FObjectKey)((ulonglong)local_res8 & 0xffffffff00000000);
  puVar14 = local_60[0].Storage;
  local_res18 = uVar8;
  uVar7 = local_res20;
  if (local_60[0].WordCount != 0) {
    do {
      uVar10 = 0xffffffff;
      if (uVar11 == uVar7) {
        uVar10 = uVar8;
      }
      uVar10 = uVar10 & *puVar14;
      uVar1 = uVar13;
      if (uVar10 != 0) {
        do {
          if (((uVar10 & 1) != 0) &&
             (pFVar5 = UE::Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                                 (this_00,uVar1), pFVar5->Protocol == param_1)) {
            pTVar6 = ::operator<<(pTVar4,&pFVar5->RefHandle);
            if (pTVar6->End < pTVar6->CurPos + 0x12) {
              TStringBuilderBase<wchar_t>::Extend(pTVar6,0x12);
            }
            pvVar2 = FGenericPlatformString::Memcpy(pTVar6->CurPos,L" ( InternalIndex: ",0x24);
            pTVar6->CurPos = (wchar_t *)((longlong)pvVar2 + 0x24);
            pTVar6 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar6,L"%u");
            if (pTVar6->End < pTVar6->CurPos + 4) {
              TStringBuilderBase<wchar_t>::Extend(pTVar6,4);
            }
            pvVar2 = FGenericPlatformString::Memcpy(pTVar6->CurPos,L", )\n",8);
            pTVar6->CurPos = (wchar_t *)((longlong)pvVar2 + 8);
          }
          uVar10 = uVar10 >> 1;
          uVar1 = uVar1 + 1;
        } while (uVar10 != 0);
        local_60[0].WordCount = local_res10;
        uVar8 = local_res18;
        uVar11 = local_res8.ObjectIndex;
        uVar7 = local_res20;
      }
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 + 0x20;
      local_res8.ObjectIndex = uVar11;
      puVar14 = puVar14 + 1;
    } while (uVar11 < local_60[0].WordCount);
  }
  return;
}

// BreakOnInternalNetRefIndex @ 1441fc050

bool __cdecl UE::Net::IrisDebugHelper::BreakOnInternalNetRefIndex(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((IrisDebugHelperInternal::GIrisDebugInternalIndex != 0) &&
     (IrisDebugHelperInternal::GIrisDebugInternalIndex == param_1)) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  return false;
}

// BreakOnNetRefHandle @ 1441fc090

bool __cdecl UE::Net::IrisDebugHelper::BreakOnNetRefHandle(FNetRefHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 != 0) &&
     ((((ulonglong)IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0 ^
       (ulonglong)param_1.field0_0x0) & 0x3fffffffffffff) == 0)) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  return false;
}

// BreakOnObjectName @ 1441fc0e0

bool __cdecl UE::Net::IrisDebugHelper::BreakOnObjectName(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  size_t sVar6;
  ForAnyElementType _Str;
  FName local_res10 [3];
  FString local_18;
  
  bVar3 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  if (1 < IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum) {
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
    }
    if (IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum == 0) {
      _Str.Data = (FScriptContainerElement *)L"";
    }
    else {
      _Str.Data = IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.Data;
      if (IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.Data ==
          (FScriptContainerElement *)0x0) {
        bVar3 = true;
        goto LAB_1441fc142;
      }
    }
    sVar6 = wcslen((wchar_t *)_Str.Data);
    bVar3 = true;
    iVar5 = ::FString::Find(&local_18,(wchar_t *)_Str.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar5 != -1) {
      bVar2 = true;
      goto LAB_1441fc145;
    }
  }
LAB_1441fc142:
  bVar2 = false;
LAB_1441fc145:
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return true;
  }
  return false;
}

// BreakOnRPCName @ 1441fc1d0

bool __cdecl UE::Net::IrisDebugHelper::BreakOnRPCName(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *this;
  size_t sVar6;
  ForAnyElementType _Str;
  FName local_res8;
  undefined4 local_res10;
  FString local_18;
  
  bVar3 = false;
  local_res10 = 0;
  local_res8 = param_1;
  if (1 < IrisDebugHelperInternal::GIrisDebugRPCName.Data.ArrayNum) {
    this = ::FName::GetPlainNameString(&local_res8,&local_18);
    if (IrisDebugHelperInternal::GIrisDebugRPCName.Data.ArrayNum == 0) {
      _Str.Data = (FScriptContainerElement *)L"";
    }
    else {
      _Str = IrisDebugHelperInternal::GIrisDebugRPCName.Data.AllocatorInstance;
      if (IrisDebugHelperInternal::GIrisDebugRPCName.Data.AllocatorInstance.Data ==
          (FScriptContainerElement *)0x0) {
        bVar3 = true;
        goto LAB_1441fc222;
      }
    }
    sVar6 = wcslen((wchar_t *)_Str.Data);
    bVar3 = true;
    iVar5 = ::FString::Find(this,(wchar_t *)_Str.Data,(int)sVar6,IgnoreCase,FromStart,-1);
    if (iVar5 != -1) {
      bVar2 = true;
      goto LAB_1441fc225;
    }
  }
LAB_1441fc222:
  bVar2 = false;
LAB_1441fc225:
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    return true;
  }
  return false;
}

// ConstructPropertyReplicationState @ 144201880

void __cdecl
UE::Net::Private::ConstructPropertyReplicationState
          (uchar *param_1,FReplicationStateDescriptor *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint *_Dst;
  FReplicationStateMemberDescriptor *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort *puVar7;
  uint uVar8;
  uint local_1c;
  uint *local_18;
  uint local_10;
  uint local_c;
  
  if (((ulonglong)param_1 & (ulonglong)param_2->ExternalAlignment - 1) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAligned(StateBuffer, Descriptor->ExternalAlignment)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\InternalPropertyReplicationState.cpp"
                       ,0x40,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  local_c = (uint)param_2->ChangeMaskBitCount;
  local_10 = param_2->ChangeMaskBitCount + 0x1f >> 5;
  local_18 = &local_c;
  if (local_c != 0) {
    local_18 = (uint *)(param_1 + param_2->ChangeMasksExternalOffset);
  }
  memset(local_18,0,(ulonglong)local_10 << 2);
  if ((param_2->Traits & HasLifetimeConditionals) != None) {
    local_1c = (uint)param_2->ChangeMaskBitCount;
    uVar8 = param_2->ChangeMaskBitCount + 0x1f >> 5;
    _Dst = &local_1c;
    if (local_1c != 0) {
      _Dst = (uint *)(param_1 + (param_2->ChangeMasksExternalOffset + uVar8 * 4));
    }
    memset(_Dst,0xff,(ulonglong)uVar8 << 2);
    if (local_1c != 0) {
      _Dst[uVar8 - 1] = _Dst[uVar8 - 1] & 0xffffffffU >> (-(char)local_1c & 0x1fU);
    }
  }
  pFVar4 = param_2->MemberDescriptors;
  if (param_2->MemberCount != 0) {
    puVar7 = &param_2->MemberPropertyDescriptors->ArrayIndex;
    lVar5 = (longlong)param_2->MemberProperties - (longlong)pFVar4;
    uVar6 = (ulonglong)param_2->MemberCount;
    do {
      if (*puVar7 == 0) {
        plVar1 = *(longlong **)((longlong)pFVar4 + lVar5);
        if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
          (**(code **)(*plVar1 + 0x150))();
        }
        else {
          memset(param_1 + pFVar4->ExternalMemberOffset,0,
                 (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
        }
      }
      puVar7 = puVar7 + 8;
      pFVar4 = pFVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// CopyDirtyMembers @ 144201a90

void __cdecl
UE::Net::Private::CopyDirtyMembers
          (uchar *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  uchar *_Src;
  uchar *_Dst;
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  EReplicationStateTraits EVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FReplicationStateMemberPropertyDescriptor *pFVar14;
  FReplicationStateMemberDescriptor *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  uint local_3c;
  
  uVar9 = (ulonglong)param_3->ExternalAlignment - 1;
  if (((((ulonglong)param_1 & uVar9) != 0) || (((ulonglong)param_2 & uVar9) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(DstStateBuffer, Descriptor->ExternalAlignment) && IsAligned(SrcStateBuffer, Descriptor->ExternalAlignment)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\InternalPropertyReplicationState.cpp"
                         ,0x8d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  CopyPropertyReplicationStateInternals(param_1,param_2,param_3,false);
  uVar1 = param_3->ChangeMaskBitCount;
  uVar17 = (uint)uVar1;
  pFVar15 = param_3->MemberDescriptors;
  pFVar14 = param_3->MemberPropertyDescriptors;
  uVar7 = uVar1 + 0x1f >> 5;
  local_3c = (uint)uVar1;
  puVar10 = &local_3c;
  if (uVar1 != 0) {
    puVar10 = (uint *)(param_2 + param_3->ChangeMasksExternalOffset);
  }
  EVar5 = param_3->Traits;
  if (param_3->MemberCount != 0) {
    lVar12 = (longlong)param_3->MemberProperties - (longlong)pFVar15;
    uVar9 = (ulonglong)param_3->MemberCount;
    lVar19 = 0;
    do {
      if ((EVar5 & InitOnly) == None) {
        uVar1 = *(ushort *)((longlong)&param_3->MemberChangeMaskDescriptors->BitCount + lVar19);
        uVar2 = *(ushort *)((longlong)&param_3->MemberChangeMaskDescriptors->BitOffset + lVar19);
        if (uVar1 == 1) {
          puVar20 = puVar10;
          if ((uVar17 <= uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), uVar17 = local_3c, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = (puVar10[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0;
          puVar10 = puVar20;
        }
        else {
          if (uVar2 < uVar17 && uVar1 != 0) {
            uVar8 = uVar17;
            if (((ulonglong)uVar2 - 1) + (ulonglong)uVar1 < (ulonglong)uVar17 - 1) {
              uVar8 = (uint)uVar2 + (uint)uVar1;
            }
            uVar18 = -1 << ((byte)uVar2 & 0x1f);
            uVar16 = uVar8 - 1 >> 5;
            for (uVar13 = (uint)(uVar2 >> 5); uVar13 <= uVar16; uVar13 = uVar13 + 1) {
              uVar11 = 0xffffffff;
              if (uVar13 == uVar16) {
                uVar11 = 0xffffffff >> (~(byte)(uVar8 - 1) & 0x1f);
              }
              uVar11 = uVar11 & uVar18;
              uVar18 = 0xffffffff;
              if ((puVar10[uVar13] & uVar11) != 0) {
                bVar6 = true;
                goto LAB_144201c80;
              }
            }
          }
          bVar6 = false;
        }
LAB_144201c80:
        if (bVar6) goto LAB_144201c89;
      }
      else {
LAB_144201c89:
        if (pFVar14->ArrayIndex == 0) {
          plVar3 = *(longlong **)((longlong)pFVar15 + lVar12);
          _Src = param_2 + pFVar15->ExternalMemberOffset;
          _Dst = param_1 + pFVar15->ExternalMemberOffset;
          if (_Dst != _Src) {
            if ((*(uint *)(plVar3 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar3 + 0xf0))(plVar3,_Dst,_Src,(int)plVar3[6],puVar10,uVar7);
              uVar17 = local_3c;
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)*(int *)((longlong)plVar3 + 0x34) * (longlong)(int)plVar3[6]);
              uVar17 = local_3c;
            }
          }
        }
      }
      pFVar14 = pFVar14 + 1;
      lVar19 = lVar19 + 4;
      pFVar15 = pFVar15 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

// CopyPropertyReplicationState @ 144201e10

void __cdecl
UE::Net::Private::CopyPropertyReplicationState
          (uchar *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  uchar *_Src;
  uchar *_Dst;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  ushort *puVar6;
  longlong lVar7;
  
  uVar4 = (ulonglong)param_3->ExternalAlignment - 1;
  if (((((ulonglong)param_1 & uVar4) != 0) || (((ulonglong)param_2 & uVar4) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(DstStateBuffer, Descriptor->ExternalAlignment) && IsAligned(SrcStateBuffer, Descriptor->ExternalAlignment)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\InternalPropertyReplicationState.cpp"
                         ,0x74,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CopyPropertyReplicationStateInternals(param_1,param_2,param_3,true);
  pFVar5 = param_3->MemberDescriptors;
  if (param_3->MemberCount != 0) {
    puVar6 = &param_3->MemberPropertyDescriptors->ArrayIndex;
    uVar4 = (ulonglong)param_3->MemberCount;
    lVar7 = (longlong)param_3->MemberProperties - (longlong)pFVar5;
    do {
      if (*puVar6 == 0) {
        plVar1 = *(longlong **)(lVar7 + (longlong)pFVar5);
        _Src = param_2 + pFVar5->ExternalMemberOffset;
        _Dst = param_1 + pFVar5->ExternalMemberOffset;
        if (_Dst != _Src) {
          if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar1 + 0xf0))(plVar1,_Dst,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6])
            ;
          }
        }
      }
      puVar6 = puVar6 + 8;
      pFVar5 = pFVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// CopyPropertyReplicationStateInternals @ 144201f20

void __cdecl
UE::Net::Private::CopyPropertyReplicationStateInternals
          (uchar *param_1,uchar *param_2,FReplicationStateDescriptor *param_3,bool param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_3c;
  uint *local_38;
  uint local_30;
  uint local_2c;
  uint *local_28;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_10;
  uint local_c;
  
  uVar1 = param_3->ChangeMaskBitCount;
  local_3c = (uint)uVar1;
  puVar4 = (uint *)(param_1 + param_3->ChangeMasksExternalOffset);
  local_2c = (uint)uVar1;
  uVar6 = uVar1 + 0x1f >> 5;
  local_38 = (uint *)(param_2 + param_3->ChangeMasksExternalOffset);
  local_30 = uVar6;
  if (uVar1 == 0) {
    puVar4 = &local_3c;
    local_38 = &local_2c;
  }
  if (param_4) {
    if ((puVar4 == local_38) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x5d8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar6 != 0) && (local_30 != 0)) {
      memcpy(puVar4,local_38,(ulonglong)uVar6 << 2);
    }
  }
  else {
    if ((puVar4 == local_38) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x64b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = (ulonglong)uVar6;
    puVar5 = local_38;
    if (uVar6 != 0) {
      do {
        *puVar4 = *puVar4 | *puVar5;
        puVar4 = puVar4 + 1;
        uVar7 = uVar7 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
    }
  }
  if ((param_3->Traits & HasLifetimeConditionals) != None) {
    uVar1 = param_3->ChangeMaskBitCount;
    local_1c = (uint)uVar1;
    local_c = (uint)uVar1;
    local_20 = uVar1 + 0x1f >> 5;
    uVar7 = (ulonglong)local_20;
    local_10 = local_20;
    uVar6 = param_3->ChangeMasksExternalOffset + local_20 * 4;
    local_28 = (uint *)(param_1 + uVar6);
    if (uVar1 == 0) {
      local_28 = &local_1c;
      local_18 = &local_c;
    }
    else {
      local_18 = (uint *)(param_2 + uVar6);
    }
    if (param_4) {
      if (local_28 == local_18) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x5d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = (ulonglong)local_20;
      }
      if (((int)uVar7 != 0) && (local_10 != 0)) {
        memcpy(local_28,local_18,uVar7 << 2);
      }
    }
    else {
      puVar4 = local_18;
      if (local_28 == local_18) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x64b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = (ulonglong)local_20;
        puVar4 = local_18;
      }
      if ((int)uVar7 != 0) {
        do {
          uVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          *local_28 = *local_28 | uVar6;
          local_28 = local_28 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}

// DescribeReplicationDescriptor @ 144206e50

void __cdecl
UE::Net::DescribeReplicationDescriptor(FString *param_1,FReplicationStateDescriptor *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FString local_88;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58 [3];
  ulonglong uVar6;
  
  uVar1 = param_2->MemberCount;
  ::FString::PrintfImpl(&local_88,L"FReplicationStateDescriptor : %llu\n");
  uVar6 = 0;
  iVar7 = 0;
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"MemberCount : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"ExternalBufferSize : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"ExternalAlignment : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = iVar7;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"InternalBufferSize : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"InternalAlignment : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"ChangeMaskBitCount : %u\n");
  iVar8 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar9 = uVar6;
  if (uVar1 != 0) {
    do {
      if (param_2->MemberProperties == (FProperty **)0x0) {
        ::FString::PrintfImpl
                  (&local_68,
                   L"..Member:%u Serializer: %s: ExternalOffset %u, InternalOffset %u ChangeMaskBits: %u\n"
                  );
        iVar8 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
        FVar4.Data = local_68.Data.AllocatorInstance.Data;
      }
      else {
        plVar2 = *(longlong **)((longlong)param_2->MemberProperties + uVar9);
        (**(code **)(*plVar2 + 0x68))(plVar2,local_58,0,0);
        bVar3 = IsThisNotNull(plVar2,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)(plVar2 + 4),&local_88);
        }
        else {
          ::FString::FString(&local_88,L"None");
        }
        ::FString::PrintfImpl
                  (&local_78,
                   L"..%s Type: %s: Serializer: %s ExternalOffset %u, InternalOffset %u ChangeMaskBits: %u\n"
                  );
        iVar8 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar8);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        FVar4.Data = local_58[0];
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
          FVar4.Data = local_58[0];
        }
      }
      if (FVar4.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar4.Data);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar9 = uVar9 + 8;
    } while (uVar5 < uVar1);
  }
  return;
}

// DestructPropertyReplicationState @ 144207f80

void __cdecl
UE::Net::Private::DestructPropertyReplicationState
          (uchar *param_1,FReplicationStateDescriptor *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FReplicationStateMemberDescriptor *pFVar4;
  ulonglong uVar5;
  ushort *puVar6;
  longlong lVar7;
  
  if ((((ulonglong)param_1 & (ulonglong)param_2->ExternalAlignment - 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(StateBuffer, Descriptor->ExternalAlignment)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\InternalPropertyReplicationState.cpp"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->Traits & IsSourceTriviallyDestructible) == None) {
    pFVar4 = param_2->MemberDescriptors;
    if (param_2->MemberCount != 0) {
      puVar6 = &param_2->MemberPropertyDescriptors->ArrayIndex;
      lVar7 = (longlong)param_2->MemberProperties - (longlong)pFVar4;
      uVar5 = (ulonglong)param_2->MemberCount;
      do {
        if ((*puVar6 == 0) &&
           (plVar1 = *(longlong **)(lVar7 + (longlong)pFVar4), (plVar1[7] & 0x1000000000U) == 0)) {
          (**(code **)(*plVar1 + 0x138))(plVar1,param_1 + pFVar4->ExternalMemberOffset);
        }
        puVar6 = puVar6 + 8;
        pFVar4 = pFVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// FilterDebuggedObject @ 144208c60

bool __cdecl UE::Net::IrisDebugHelper::FilterDebuggedObject(UObject *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  bool bVar4;
  wchar_t *_Str;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  if (IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum < 2) {
LAB_144208d08:
    bVar1 = true;
  }
  else {
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res10[0].Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
    }
    if (IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum == 0) {
      _Str = L"";
LAB_144208cca:
      sVar3 = wcslen(_Str);
      iVar2 = ::FString::Find(&local_18,_Str,(int)sVar3,IgnoreCase,FromStart,-1);
      bVar4 = true;
      if (iVar2 != -1) goto LAB_144208d08;
    }
    else {
      _Str = (wchar_t *)IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.Data;
      if (IrisDebugHelperInternal::GIrisDebugName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) goto LAB_144208cca;
    }
    bVar1 = false;
    bVar4 = true;
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// GetDebugInternalNetRefIndex @ 14420a1a0

uint __cdecl UE::Net::IrisDebugHelper::GetDebugInternalNetRefIndex(void)

{
  return IrisDebugHelperInternal::GIrisDebugInternalIndex;
}

// GetDebugNetRefHandle @ 14420a1b0

FNetRefHandle __cdecl UE::Net::IrisDebugHelper::GetDebugNetRefHandle(void)

{
  FNetRefHandle_u_0 in_RCX;
  
  *(FNetRefHandle_u_0 *)in_RCX =
       (FNetRefHandle_u_0_s_0)IrisDebugHelperInternal::GIrisDebugNetRefHandle.field0_0x0;
  return (FNetRefHandle)in_RCX;
}

// GetOrCreateIrisObjectReferencePackageMap @ 14420b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UIrisObjectReferencePackageMap * __cdecl
UE::Net::Private::GetOrCreateIrisObjectReferencePackageMap(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UIrisObjectReferencePackageMap *this;
  TStrongObjectPtr<UIrisObjectReferencePackageMap,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  TVar3.Object = s_IrisObjectReferencePackageMap.Object;
  if (s_IrisObjectReferencePackageMap.Object == (UObject *)0x0) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    this = (UIrisObjectReferencePackageMap *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    TVar3.Object = (UObject *)(UIrisObjectReferencePackageMap *)0x0;
    if (this != (UIrisObjectReferencePackageMap *)0x0) {
      UObjectBase::AddRef((UObjectBase *)this);
      TVar3.Object = (UObject *)this;
    }
    if (s_IrisObjectReferencePackageMap.Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(s_IrisObjectReferencePackageMap.Object);
    }
  }
  s_IrisObjectReferencePackageMap.Object = TVar3.Object;
  return (UIrisObjectReferencePackageMap *)TVar3.Object;
}

// GetPropertyNetSerializerInfo_FBitFieldPropertyNetSerializerInfo @ 14420bdc0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FBitFieldPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FDefaultArrayPropertyNetSerializerInfo @ 14420bdd0

FPropertyNetSerializerInfo * __cdecl
UE::Net::GetPropertyNetSerializerInfo_FDefaultArrayPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FDefaultStructPropertyNetSerializerInfo @ 14420bde0

FPropertyNetSerializerInfo * __cdecl
UE::Net::GetPropertyNetSerializerInfo_FDefaultStructPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FDoubleProperty @ 14420bdf0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FDoubleProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FEnumAsBytePropertyNetSerializerInfo @ 14420be00

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FEnumAsBytePropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FEnumPropertyNetSerializerInfo @ 14420be10

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FEnumPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FFieldPathProperty @ 14420be20

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FFieldPathProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FFloatProperty @ 14420be30

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FFloatProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FInt16Property @ 14420be40

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FInt16Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FInt64Property @ 14420be50

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FInt64Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FInt8Property @ 14420be60

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FInt8Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FIntProperty @ 14420be70

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FIntProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FLastResortPropertyNetSerializerInfo @ 14420be80

FPropertyNetSerializerInfo * __cdecl
UE::Net::GetPropertyNetSerializerInfo_FLastResortPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FNameProperty @ 14420be90

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FNameProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FNativeBoolPropertyNetSerializerInfo @ 14420bea0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FNativeBoolPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FNetRoleNetSerializerInfo @ 14420beb0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FNetRoleNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FObjectPropertyNetSerializerInfo @ 14420bec0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FObjectPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FObjectPtrPropertyNetSerializerInfo @ 14420bed0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FObjectPtrPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FScriptInterfacePropertyNetSerializerInfo @ 14420bee0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FScriptInterfacePropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FSoftClassProperty @ 14420bef0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FSoftClassProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FSoftObjectProperty @ 14420bf00

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FSoftObjectProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FStrProperty @ 14420bf10

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FStrProperty(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FTextPropertyNetSerializerInfo @ 14420bf20

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FTextPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FUInt16Property @ 14420bf30

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FUInt16Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FUInt32Property @ 14420bf40

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FUInt32Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FUInt64Property @ 14420bf50

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FUInt64Property(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FUint8PropertyNetSerializerInfo @ 14420bf60

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FUint8PropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_FWeakObjectPtrPropertyNetSerializerInfo @ 14420bf70

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_FWeakObjectPtrPropertyNetSerializerInfo(void)

{
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Quat4d @ 14420bf80

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Quat4d(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FUnitQuat4dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Quat4f @ 14420c030

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Quat4f(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FUnitQuat4fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Quat @ 14420c0e0

FPropertyNetSerializerInfo * __cdecl UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Quat(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FUnitQuatNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Rotator3d @ 14420c190

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Rotator3d(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FRotator3dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Rotator3f @ 14420c240

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Rotator3f(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FRotator3fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Rotator @ 14420c2f0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Rotator(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FRotatorNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Vector3d @ 14420c3a0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Vector3d(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FVector3dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Vector3f @ 14420c450

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Vector3f(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FVector3fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_NAME_Vector @ 14420c500

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_NAME_Vector(void)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  uint local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
      local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar1.Value);
      ::StaticInstance._padding_ = (longlong)&FVectorNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      local_res8[1] = 0;
      ::StaticInstance._padding_ = (longlong)local_res8[0];
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_DateTime @ 14420c5b0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_DateTime(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_DateTime.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_DateTime.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Guid @ 14420c620

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Guid(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Guid.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_Guid.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteObjectId @ 14420c690

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteObjectId
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectId.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_RemoteObjectId.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteObjectReference @ 14420c700

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteObjectReference(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectReference.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectReference.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteServerId @ 14420c770

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RemoteServerId
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteServerId.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_RemoteServerId.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_SoftClassPath @ 14420c7e0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_SoftClassPath
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_SoftClassPath.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_SoftClassPath.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_SoftObjectPath @ 14420c850

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_SoftObjectPath
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_SoftObjectPath.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_SoftObjectPath.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100 @ 14420c8c0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10 @ 14420c930

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize @ 14420c9a0

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantize
          (void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal @ 14420ca10

FPropertyNetSerializerInfo * __cdecl
UE::Net::Private::
GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (FPropertyNetSerializerInfo *)&::StaticInstance;
}

// GetReplicationSystem @ 14420d4b0

UReplicationSystem * __cdecl UE::Net::GetReplicationSystem(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  UReplicationSystem *pUVar3;
  uint uVar4;
  TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  
  if ((uint)FReplicationSystemFactory::ReplicationSystems.ArrayNum <= param_1) {
    return (UReplicationSystem *)0x0;
  }
  uVar4 = 0;
  if ((int)param_1 < FReplicationSystemFactory::ReplicationSystems.ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UReplicationSystem *)(*pcVar1)();
      return pUVar3;
    }
  }
  pTVar5 = &FReplicationSystemFactory::ReplicationSystems;
  if (FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData !=
      (ForElementType<UReplicationSystem_*>)0x0) {
    pTVar5 = (TArray<UReplicationSystem_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FReplicationSystemFactory::ReplicationSystems.AllocatorInstance.SecondaryData;
  }
  return *(UReplicationSystem **)((longlong)pTVar5 + (longlong)(int)param_1 * 8);
}

// GetUseIrisReplicationCmdlineValue @ 14420df90

EReplicationSystem __cdecl UE::Net::GetUseIrisReplicationCmdlineValue(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  int local_res8 [8];
  
  local_res8[0] = 0;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar2,L"UseIrisReplication=",local_res8);
  if (bVar1) {
    return (0 < local_res8[0]) + Generic;
  }
  return Default;
}

// Init @ 14420f790

ulong64 __cdecl UE::Net::IrisDebugHelper::Init(void)

{
  return 0x14421e3c40;
}

// InitReplicationStateInternals @ 14420fc40

void __cdecl
UE::Net::Private::InitReplicationStateInternals(uchar *param_1,FReplicationStateDescriptor *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint local_1c;
  uint *local_18;
  uint local_10;
  uint local_c;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  local_c = (uint)param_2->ChangeMaskBitCount;
  local_10 = param_2->ChangeMaskBitCount + 0x1f >> 5;
  local_18 = &local_c;
  if (local_c != 0) {
    local_18 = (uint *)(param_1 + param_2->ChangeMasksExternalOffset);
  }
  memset(local_18,0,(ulonglong)local_10 << 2);
  if ((param_2->Traits & HasLifetimeConditionals) != None) {
    local_1c = (uint)param_2->ChangeMaskBitCount;
    uVar1 = param_2->ChangeMaskBitCount + 0x1f >> 5;
    _Dst = &local_1c;
    if (local_1c != 0) {
      _Dst = (uint *)(param_1 + (param_2->ChangeMasksExternalOffset + uVar1 * 4));
    }
    memset(_Dst,0xff,(ulonglong)uVar1 << 2);
    if (local_1c != 0) {
      _Dst[uVar1 - 1] = _Dst[uVar1 - 1] & 0xffffffffU >> (-(char)local_1c & 0x1fU);
    }
  }
  return;
}

// InternalApplyPropertyValue @ 1442100a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::InternalApplyPropertyValue
          (FReplicationStateDescriptor *param_1,uint param_2,void *param_3,void *param_4)

{
  ENetSerializerConfigTraits *this;
  EArrayPropertyFlags EVar1;
  uint uVar2;
  FNetSerializer *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *pvVar13;
  void *pvVar14;
  longlong lVar15;
  void *pvVar16;
  FReplicationStateMemberSerializerDescriptor *pFVar17;
  ENetSerializerTraits EVar18;
  int iVar19;
  undefined1 auStack_7d8 [32];
  byte local_7b8;
  int local_7b4;
  FScriptArrayHelper local_7b0;
  longlong *local_790;
  FNetApplyArgs local_788;
  longlong local_760 [2];
  undefined4 local_750;
  void *local_748;
  void *local_740;
  FNetRefHandle_u_0 local_738;
  undefined8 local_730;
  undefined8 local_720 [95];
  undefined4 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0 [95];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_7d8;
  pFVar17 = param_1->MemberSerializerDescriptors + param_2;
  pFVar3 = pFVar17->Serializer;
  if ((pFVar3->Traits & HasApply) == None) {
    if (pFVar3 == &FStructNetSerializerNetSerializerInfo::Serializer) {
      pFVar4 = (FReplicationStateDescriptor *)pFVar17->SerializerConfig[1]._padding_;
      if ((pFVar4->Traits & AllMembersAreReplicated) == None) {
        InternalApplyStructProperty(pFVar4,param_3,param_4);
        return;
      }
    }
    else if (pFVar3 == &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
      lVar15 = *(longlong *)&pFVar17->SerializerConfig[3].ConfigTraits;
      local_790 = *(longlong **)(lVar15 + 0x10);
      EVar18 = ((FNetSerializer *)*local_790)->Traits & HasApply;
      if (((FNetSerializer *)*local_790 == &FStructNetSerializerNetSerializerInfo::Serializer) &&
         ((*(uint *)(lVar15 + 0xb8) & 0x200) == 0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((EVar18 != None) || (bVar7)) {
        this = &pFVar17->SerializerConfig[1].ConfigTraits;
        pFVar4 = *(FReplicationStateDescriptor **)(local_790[1] + 0x10);
        pFVar9 = FArrayProperty::StaticClass();
        pFVar10 = FFieldPath::GetTyped((FFieldPath *)this,pFVar9,(UStruct *)0x0);
        local_7b8 = *(byte *)&pFVar10[2].Owner.Container;
        (**(code **)((pFVar10[2].Next)->_padding_ + 0x168))();
        pFVar10 = pFVar10[2].Next;
        local_7b4 = *(int *)((longlong)&pFVar10[1]._padding_ + 4);
        if ((local_7b4 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar10 == (FField *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar9 = FArrayProperty::StaticClass();
        pFVar10 = FFieldPath::GetTyped((FFieldPath *)this,pFVar9,(UStruct *)0x0);
        EVar1 = *(EArrayPropertyFlags *)&pFVar10[2].Owner.Container;
        local_7b0.ElementAlignment = (**(code **)((pFVar10[2].Next)->_padding_ + 0x168))();
        local_7b0.InnerProperty = (FProperty *)pFVar10[2].Next;
        local_7b0.ElementSize = (local_7b0.InnerProperty)->ElementSize;
        local_7b0.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
        local_7b0.ArrayFlags = EVar1;
        if ((local_7b0.ElementSize < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((local_7b0.InnerProperty == (FProperty *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar2 = *(uint *)((longlong)param_4 + 8);
        local_7b8 = local_7b8 & 1;
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((longlong)(int)uVar2);
        }
        iVar19 = (local_7b0.field1_0x8.FreezableArray)->ArrayNum;
        if (iVar19 < (int)uVar2) {
          FScriptArrayHelper::AddValues(&local_7b0,uVar2 - iVar19);
        }
        else if ((int)uVar2 < iVar19) {
          FScriptArrayHelper::RemoveValues(&local_7b0,uVar2,iVar19 - uVar2);
        }
        pvVar14 = (void *)0x0;
        if (EVar18 != None) {
          if (uVar2 == 0) {
            return;
          }
          lVar15 = (longlong)local_7b4;
          pvVar16 = pvVar14;
          do {
            iVar19 = (int)pvVar16;
            local_748 = pvVar14;
            if (*(int *)((longlong)param_4 + 8) != 0) {
              uVar12 = *(ulonglong *)param_4;
              if ((local_7b8 != 0) && ((uVar12 & 1) != 0)) {
                uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_4;
              }
              local_748 = (void *)(lVar15 * iVar19 + uVar12);
            }
            local_740 = pvVar14;
            if ((local_7b0.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar12 = (local_7b0.field1_0x8.FreezableArray)->_padding_;
              if (((local_7b0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar12 & 1) != 0)
                 ) {
                uVar12 = (longlong)&(local_7b0.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar12 >> 0x18);
              }
              local_740 = (void *)((longlong)local_7b0.ElementSize * (longlong)iVar19 + uVar12);
            }
            local_3c8 = 0;
            puVar8 = local_3b0;
            local_3c0 = 0;
            lVar11 = 0x20;
            do {
              *puVar8 = 0;
              puVar8 = puVar8 + 3;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            local_68 = local_68 & 0xfffffffc;
            local_b8 = 0;
            local_760[0] = local_790[1];
            local_b0 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            local_6c = 0xffffffff;
            local_760[1] = 0;
            local_750 = 0;
            (**(code **)(*local_790 + 0x60))(&local_3c8,local_760);
            pvVar16 = (void *)(ulonglong)(iVar19 + 1U);
          } while (iVar19 + 1U < uVar2);
          return;
        }
        pvVar16 = pvVar14;
        if (uVar2 == 0) {
          return;
        }
        do {
          iVar19 = (int)pvVar16;
          pvVar16 = pvVar14;
          if (*(int *)((longlong)param_4 + 8) != 0) {
            uVar12 = *(ulonglong *)param_4;
            if ((local_7b8 != 0) && ((uVar12 & 1) != 0)) {
              uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_4;
            }
            pvVar16 = (void *)((longlong)local_7b4 * (longlong)iVar19 + uVar12);
          }
          pvVar13 = pvVar14;
          if ((local_7b0.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar12 = (local_7b0.field1_0x8.FreezableArray)->_padding_;
            if (((local_7b0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar12 & 1) != 0))
            {
              uVar12 = (longlong)&(local_7b0.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar12 >> 0x18);
            }
            pvVar13 = (void *)((longlong)local_7b0.ElementSize * (longlong)iVar19 + uVar12);
          }
          InternalApplyStructProperty(pFVar4,pvVar13,pvVar16);
          pvVar16 = (void *)(ulonglong)(iVar19 + 1U);
        } while (iVar19 + 1U < uVar2);
        return;
      }
    }
    pFVar5 = param_1->MemberProperties[param_2];
    if (param_3 != param_4) {
      if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
        (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,param_3,param_4,1);
      }
      else {
        memcpy(param_3,param_4,(longlong)pFVar5->ElementSize);
      }
    }
  }
  else {
    puVar8 = local_720;
    local_738.Value = 0;
    lVar15 = 0x20;
    local_730 = 0;
    do {
      *puVar8 = 0;
      puVar8 = puVar8 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    local_788._padding_ = (longlong)pFVar17->SerializerConfig;
    local_3d8 = local_3d8 & 0xfffffffc;
    local_418 = 0;
    uStack_410 = 0;
    local_408 = 0;
    uStack_400 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_428 = 0;
    local_420 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3dc = 0xffffffff;
    local_788._padding_ = 0;
    local_788._padding_._0_4_ = 0;
    local_788.Source = (ulong64)param_4;
    local_788.Target = (ulong64)param_3;
    (*pFVar3->Apply)((FNetSerializationContext *)&local_738._s_0,&local_788);
  }
  return;
}

// InternalApplyStructProperty @ 144210600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::InternalApplyStructProperty
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  FReplicationStateMemberSerializerDescriptor *pFVar2;
  FNetSerializer *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  FProperty **ppFVar9;
  undefined1 auStack_408 [32];
  FNetApplyArgs local_3e8;
  FNetRefHandle_u_0 local_3b8;
  FName local_3b0;
  undefined8 local_3a0 [95];
  uint local_a8;
  FNetBitStreamReader *local_a0;
  FNetBitStreamWriter *local_98;
  FNetTraceCollector *pFStack_90;
  FInternalNetSerializationContext *local_88;
  FNetExportContext *pFStack_80;
  FNetStatsContext *local_78;
  FNetBitArrayView *pFStack_70;
  INetBlobReceiver *local_68;
  uint local_60;
  int local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  uVar7 = 0;
  if ((param_1->Traits & (IsStructWithCustomSerializer|IsDerivedFromStructWithCustomSerializer)) !=
      None) {
    pFVar2 = param_1->MemberSerializerDescriptors;
    uVar7 = 1;
    pFVar3 = pFVar2->Serializer;
    if ((pFVar3->Traits & HasApply) == None) {
      UScriptStruct::CopyScriptStruct(param_1->BaseStruct,param_2,param_3,1);
    }
    else {
      local_3b8.Value = 0;
      puVar5 = local_3a0;
      local_3b0.ComparisonIndex.Value = 0;
      local_3b0.Number = 0;
      lVar4 = 0x20;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      local_3e8._padding_ = (longlong)pFVar2->SerializerConfig;
      local_58 = local_58 & 0xfffffffc;
      local_98 = (FNetBitStreamWriter *)0x0;
      pFStack_90 = (FNetTraceCollector *)0x0;
      local_88 = (FInternalNetSerializationContext *)0x0;
      pFStack_80 = (FNetExportContext *)0x0;
      local_78 = (FNetStatsContext *)0x0;
      pFStack_70 = (FNetBitArrayView *)0x0;
      local_a8 = 0;
      local_a0 = (FNetBitStreamReader *)0x0;
      local_68 = (INetBlobReceiver *)0x0;
      local_60 = 0;
      local_5c = 0xffffffff;
      local_3e8._padding_ = 0;
      local_3e8._padding_._0_4_ = 0;
      local_3e8.Source = (ulong64)param_3;
      local_3e8.Target = (ulong64)param_2;
      (*pFVar3->Apply)((FNetSerializationContext *)&local_3b8._s_0,&local_3e8);
    }
  }
  uVar1 = param_1->MemberCount;
  if ((uint)uVar7 < (uint)uVar1) {
    ppFVar9 = param_1->MemberProperties + uVar7;
    puVar8 = &param_1->MemberPropertyDescriptors[uVar7].ArrayIndex;
    do {
      lVar4 = (longlong)(int)((uint)*puVar8 * (*ppFVar9)->ElementSize + (*ppFVar9)->Offset_Internal)
      ;
      InternalApplyPropertyValue
                (param_1,(uint)uVar7,(void *)(lVar4 + (longlong)param_2),
                 (void *)(lVar4 + (longlong)param_3));
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      ppFVar9 = ppFVar9 + 1;
      puVar8 = puVar8 + 8;
    } while (uVar6 < uVar1);
  }
  return;
}

// InternalCompareAndCopyArrayWithElementChangeMask @ 1442107c0

bool __cdecl
UE::Net::Private::InternalCompareAndCopyArrayWithElementChangeMask
          (FReplicationStateDescriptor *param_1,uint param_2,void *param_3,void *param_4,
          FNetBitArrayView *param_5)

{
  ENetSerializerConfigTraits *this;
  FReplicationStateMemberChangeMaskDescriptor *pFVar1;
  byte bVar2;
  EArrayPropertyFlags EVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FNetSerializerConfig *pFVar8;
  uint *puVar9;
  FReplicationStateDescriptor *pFVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  FFieldClass *pFVar14;
  FField *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  void *pvVar21;
  void *pvVar22;
  uint uVar23;
  uint uVar24;
  bool local_res8;
  FScriptArrayHelper local_58;
  
  local_res8 = true;
  pFVar1 = param_1->MemberChangeMaskDescriptors + param_2;
  pFVar8 = param_1->MemberSerializerDescriptors[param_2].SerializerConfig;
  this = &pFVar8[1].ConfigTraits;
  pFVar14 = FArrayProperty::StaticClass();
  pFVar15 = FFieldPath::GetTyped((FFieldPath *)this,pFVar14,(UStruct *)0x0);
  bVar2 = *(byte *)&pFVar15[2].Owner.Container;
  (**(code **)((pFVar15[2].Next)->_padding_ + 0x168))();
  pFVar15 = pFVar15[2].Next;
  iVar5 = *(int *)((longlong)&pFVar15[1]._padding_ + 4);
  if ((iVar5 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if ((pFVar15 == (FField *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  pFVar14 = FArrayProperty::StaticClass();
  pFVar15 = FFieldPath::GetTyped((FFieldPath *)this,pFVar14,(UStruct *)0x0);
  EVar3 = *(EArrayPropertyFlags *)&pFVar15[2].Owner.Container;
  local_58.ElementAlignment = (**(code **)((pFVar15[2].Next)->_padding_ + 0x168))();
  local_58.InnerProperty = (FProperty *)pFVar15[2].Next;
  local_58.ElementSize = (local_58.InnerProperty)->ElementSize;
  local_58.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
  local_58.ArrayFlags = EVar3;
  if ((local_58.ElementSize < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  if ((local_58.InnerProperty == (FProperty *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar13 = (*pcVar11)();
    return (bool)uVar13;
  }
  uVar6 = (local_58.field1_0x8.FreezableArray)->ArrayNum;
  uVar7 = *(uint *)((longlong)param_4 + 8);
  if (uVar7 != uVar6) {
    local_res8 = false;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((longlong)(int)uVar7);
    }
    if ((int)uVar6 < (int)uVar7) {
      FScriptArrayHelper::AddValues(&local_58,uVar7 - uVar6);
    }
    else if ((int)uVar7 < (int)uVar6) {
      FScriptArrayHelper::RemoveValues(&local_58,uVar7,uVar6 - uVar7);
    }
    if ((uVar7 < uVar6) && (uVar7 + 1 < (uint)pFVar1->BitCount)) {
      uVar20 = pFVar1->BitOffset + 1 + uVar7;
      uVar23 = param_5->BitCount;
      uVar24 = (pFVar1->BitCount - uVar7) - 1;
      puVar9 = param_5->Storage;
      if ((uVar24 == 0 || uVar23 <= uVar20) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count > 0) & (StartIndex < BitCount)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x28c,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      lVar19 = (ulonglong)uVar24 + (ulonglong)uVar20;
      uVar24 = -1 << ((byte)uVar20 & 0x1f);
      if (lVar19 - 1U < (ulonglong)uVar23 - 1) {
        uVar23 = (uint)lVar19;
      }
      uVar18 = uVar23 - 1 >> 5;
      for (uVar20 = uVar20 >> 5; uVar20 <= uVar18; uVar20 = uVar20 + 1) {
        uVar16 = 0xffffffff;
        if (uVar20 == uVar18) {
          uVar16 = 0xffffffff >> (~(byte)(uVar23 - 1) & 0x1f);
        }
        uVar16 = uVar16 & uVar24;
        uVar24 = 0xffffffff;
        puVar9[uVar20] = puVar9[uVar20] & ~uVar16;
      }
    }
  }
  uVar24 = 0;
  uVar4 = pFVar1->BitOffset;
  pFVar10 = *(FReplicationStateDescriptor **)&pFVar8[3].ConfigTraits;
  if (uVar7 != 0) {
    do {
      if (*(int *)((longlong)param_4 + 8) == 0) {
        pvVar22 = (void *)0x0;
      }
      else {
        uVar17 = *(ulonglong *)param_4;
        if (((bVar2 & 1) != 0) && ((uVar17 & 1) != 0)) {
          uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)param_4;
        }
        pvVar22 = (void *)((longlong)iVar5 * (longlong)(int)uVar24 + uVar17);
      }
      if ((local_58.field1_0x8.FreezableArray)->ArrayNum == 0) {
        pvVar21 = (void *)0x0;
      }
      else {
        uVar17 = (local_58.field1_0x8.FreezableArray)->_padding_;
        if (((local_58.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar17 & 1) != 0)) {
          uVar17 = (longlong)&(local_58.field1_0x8.HeapArray)->field_0x0 +
                   ((longlong)uVar17 >> 0x18);
        }
        pvVar21 = (void *)((longlong)local_58.ElementSize * (longlong)(int)uVar24 + uVar17);
      }
      if ((uVar6 <= uVar24) ||
         (bVar12 = InternalCompareStructProperty(pFVar10,pvVar21,pvVar22), !bVar12)) {
        local_res8 = false;
        uVar23 = uVar24 % 0x3f + uVar4 + 1;
        puVar9 = param_5->Storage;
        if ((param_5->BitCount <= uVar23) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < BitCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                ,0x2a2,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
        puVar9[uVar23 >> 5] = puVar9[uVar23 >> 5] | 1 << (uVar23 & 0x1f);
        InternalCopyStructProperty(pFVar10,pvVar21,pvVar22);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar7);
  }
  return local_res8;
}

// InternalCompareMember @ 144210bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::Private::InternalCompareMember
          (FReplicationStateDescriptor *param_1,uint param_2,void *param_3,void *param_4)

{
  FNetSerializer *pFVar1;
  FReplicationStateDescriptor *pFVar2;
  undefined1 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FReplicationStateMemberSerializerDescriptor *pFVar7;
  undefined1 auStack_3e8 [32];
  FNetIsEqualArgs local_3c8;
  FNetRefHandle_u_0 local_398;
  undefined8 local_390;
  undefined8 local_380 [95];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  pFVar7 = param_1->MemberSerializerDescriptors + param_2;
  pFVar1 = pFVar7->Serializer;
  if ((pFVar1->Traits & UseSerializerIsEqual) == None) {
    if (pFVar1 == &FStructNetSerializerNetSerializerInfo::Serializer) {
      pFVar2 = (FReplicationStateDescriptor *)pFVar7->SerializerConfig[1]._padding_;
      if ((pFVar2->Traits & AllMembersAreReplicated) == None) {
        bVar4 = InternalCompareStructProperty(pFVar2,param_3,param_4);
        return bVar4;
      }
    }
    else if ((pFVar1 == &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) &&
            (local_3c8._padding_ = (longlong)pFVar7->SerializerConfig,
            (*(uint *)(*(longlong *)
                        &((FNetSerializerConfig *)(local_3c8._padding_ + 0x30))->ConfigTraits + 0xb8
                      ) & 0x200) == 0)) {
      puVar6 = local_380;
      lVar5 = 0x20;
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      goto LAB_144210c66;
    }
    uVar3 = (**(code **)(param_1->MemberProperties[param_2]->_padding_ + 0xb8))
                      (param_1->MemberProperties[param_2],param_3,param_4,0);
  }
  else {
    puVar6 = local_380;
    lVar5 = 0x20;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    local_3c8._padding_ = (longlong)pFVar7->SerializerConfig;
LAB_144210c66:
    local_390 = 0;
    local_398.Value = 0;
    local_38 = local_38 & 0xfffffffc;
    local_3c8._padding_._0_4_ = 0;
    local_3c8._padding_ = 0;
    local_40 = 0;
    local_48 = 0;
    local_80 = 0;
    local_88 = 0;
    local_3c8.bStateIsQuantized = false;
    local_3c = 0xffffffff;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_3c8.Source0 = (ulong64)param_3;
    local_3c8.Source1 = (ulong64)param_4;
    uVar3 = (*pFVar7->Serializer->IsEqual)((FNetSerializationContext *)&local_398._s_0,&local_3c8);
  }
  return (bool)uVar3;
}

// InternalCompareStructProperty @ 144210da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::Private::InternalCompareStructProperty
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FReplicationStateMemberPropertyDescriptor *pFVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  FProperty **ppFVar12;
  undefined1 auStack_408 [32];
  FNetIsEqualArgs local_3e8;
  FNetRefHandle_u_0 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  ppFVar12 = param_1->MemberProperties;
  uVar10 = 0;
  pFVar2 = param_1->MemberDescriptors;
  pFVar3 = param_1->MemberPropertyDescriptors;
  if ((param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None) {
    pFVar4 = param_1->MemberSerializerDescriptors;
    uVar10 = 1;
    puVar7 = local_3a0;
    local_3b8.Value = 0;
    local_3b0 = 0;
    lVar6 = 0x20;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar8 = (ulonglong)pFVar2->ExternalMemberOffset;
    local_3e8._padding_ = (longlong)pFVar4->SerializerConfig;
    local_58 = local_58 & 0xfffffffc;
    local_3e8.Source0 = uVar8 + (longlong)param_2;
    local_a8 = 0;
    local_3e8.Source1 = uVar8 + (longlong)param_3;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0xffffffff;
    local_3e8._padding_ = 0;
    local_3e8._padding_._0_4_ = 0;
    local_3e8.bStateIsQuantized = false;
    bVar5 = (*pFVar4->Serializer->IsEqual)((FNetSerializationContext *)&local_3b8._s_0,&local_3e8);
    if (!bVar5) {
      return false;
    }
  }
  uVar1 = param_1->MemberCount;
  if ((uint)uVar10 < (uint)uVar1) {
    ppFVar12 = ppFVar12 + uVar10;
    puVar11 = &pFVar3[uVar10].ArrayIndex;
    do {
      lVar6 = (longlong)
              (int)((uint)*puVar11 * (*ppFVar12)->ElementSize + (*ppFVar12)->Offset_Internal);
      bVar5 = InternalCompareMember
                        (param_1,(uint)uVar10,(void *)(lVar6 + (longlong)param_2),
                         (void *)(lVar6 + (longlong)param_3));
      if (!bVar5) {
        return false;
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      ppFVar12 = ppFVar12 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar9 < uVar1);
  }
  return true;
}

// InternalCopyPropertyValue @ 144210f40

void __cdecl
UE::Net::Private::InternalCopyPropertyValue
          (FReplicationStateDescriptor *param_1,uint param_2,void *param_3,void *param_4)

{
  ENetSerializerConfigTraits *this;
  byte bVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FReplicationStateDescriptor *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  FProperty *pFVar9;
  code *pcVar10;
  bool bVar11;
  FFieldClass *pFVar12;
  FField *pFVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint uVar16;
  FReplicationStateMemberSerializerDescriptor *pFVar17;
  void *pvVar18;
  FScriptArrayHelper local_38;
  
  pFVar17 = param_1->MemberSerializerDescriptors + param_2;
  if (pFVar17->Serializer == &FStructNetSerializerNetSerializerInfo::Serializer) {
    pFVar6 = (FReplicationStateDescriptor *)pFVar17->SerializerConfig[1]._padding_;
    if ((pFVar6->Traits & AllMembersAreReplicated) == None) {
      InternalCopyStructProperty(pFVar6,param_3,param_4);
      return;
    }
  }
  else if (pFVar17->Serializer == &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    lVar7 = *(longlong *)&pFVar17->SerializerConfig[3].ConfigTraits;
    plVar8 = *(longlong **)(lVar7 + 0x10);
    if (((FNetSerializer *)*plVar8 == &FStructNetSerializerNetSerializerInfo::Serializer) &&
       ((*(uint *)(lVar7 + 0xb8) & 0x200) == 0)) {
      this = &pFVar17->SerializerConfig[1].ConfigTraits;
      pFVar6 = *(FReplicationStateDescriptor **)(plVar8[1] + 0x10);
      pFVar12 = FArrayProperty::StaticClass();
      pFVar13 = FFieldPath::GetTyped((FFieldPath *)this,pFVar12,(UStruct *)0x0);
      bVar1 = *(byte *)&pFVar13[2].Owner.Container;
      (**(code **)((pFVar13[2].Next)->_padding_ + 0x168))();
      pFVar13 = pFVar13[2].Next;
      iVar3 = *(int *)((longlong)&pFVar13[1]._padding_ + 4);
      if ((iVar3 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((pFVar13 == (FField *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar12 = FArrayProperty::StaticClass();
      pFVar13 = FFieldPath::GetTyped((FFieldPath *)this,pFVar12,(UStruct *)0x0);
      EVar2 = *(EArrayPropertyFlags *)&pFVar13[2].Owner.Container;
      local_38.ElementAlignment = (**(code **)((pFVar13[2].Next)->_padding_ + 0x168))();
      local_38.InnerProperty = (FProperty *)pFVar13[2].Next;
      local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
      local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_3;
      local_38.ArrayFlags = EVar2;
      if ((local_38.ElementSize < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1177,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((local_38.InnerProperty == (FProperty *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InnerProperty",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x1178,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar4 = *(uint *)((longlong)param_4 + 8);
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((longlong)(int)uVar4);
      }
      iVar5 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
      if (iVar5 < (int)uVar4) {
        FScriptArrayHelper::AddValues(&local_38,uVar4 - iVar5);
      }
      else if ((int)uVar4 < iVar5) {
        FScriptArrayHelper::RemoveValues(&local_38,uVar4,iVar5 - uVar4);
      }
      uVar16 = 0;
      if (uVar4 == 0) {
        return;
      }
      do {
        if (*(int *)((longlong)param_4 + 8) == 0) {
          pvVar18 = (void *)0x0;
        }
        else {
          uVar14 = *(ulonglong *)param_4;
          if (((bVar1 & 1) != 0) && ((uVar14 & 1) != 0)) {
            uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)param_4;
          }
          pvVar18 = (void *)((longlong)iVar3 * (longlong)(int)uVar16 + uVar14);
        }
        if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
          pvVar15 = (void *)0x0;
        }
        else {
          uVar14 = (local_38.field1_0x8.FreezableArray)->_padding_;
          if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar14 & 1) != 0)) {
            uVar14 = (longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar14 >> 0x18);
          }
          pvVar15 = (void *)((longlong)local_38.ElementSize * (longlong)(int)uVar16 + uVar14);
        }
        InternalCopyStructProperty(pFVar6,pvVar15,pvVar18);
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar4);
      return;
    }
  }
  pFVar9 = param_1->MemberProperties[param_2];
  if (param_3 == param_4) {
    return;
  }
  if (((uint)(int)pFVar9->PropertyFlags >> 0x1e & 1) != 0) {
    memcpy(param_3,param_4,(longlong)pFVar9->ElementSize);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144211228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar9->_padding_ + 0xf0))(pFVar9,param_3,param_4,1);
  return;
}

// InternalCopyStructProperty @ 144211260

void __cdecl
UE::Net::Private::InternalCopyStructProperty
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ushort *puVar4;
  FProperty **ppFVar5;
  bool bVar6;
  
  bVar6 = (param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None;
  if (bVar6) {
    UScriptStruct::CopyScriptStruct(param_1->BaseStruct,param_2,param_3,1);
  }
  uVar3 = (uint)bVar6;
  uVar1 = param_1->MemberCount;
  if (uVar3 < uVar1) {
    ppFVar5 = param_1->MemberProperties + uVar3;
    puVar4 = &param_1->MemberPropertyDescriptors[uVar3].ArrayIndex;
    do {
      lVar2 = (longlong)(int)((uint)*puVar4 * (*ppFVar5)->ElementSize + (*ppFVar5)->Offset_Internal)
      ;
      InternalCopyPropertyValue
                (param_1,uVar3,(void *)(lVar2 + (longlong)param_2),
                 (void *)(lVar2 + (longlong)param_3));
      uVar3 = uVar3 + 1;
      ppFVar5 = ppFVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar3 < uVar1);
  }
  return;
}

// MarkDirty @ 144212930

void __cdecl
UE::Net::Private::MarkDirty
          (FReplicationStateHeader *param_1,FNetBitArrayView *param_2,
          FReplicationStateMemberChangeMaskDescriptor *param_3)

{
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->NetHandleId != 0) {
    uVar1 = param_3->BitOffset;
    puVar2 = param_2->Storage;
    if (param_2->BitCount <= (uint)uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((puVar2[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
      param_1->bStateIsDirty = 1;
    }
  }
  FNetBitArrayView::SetBits(param_2,(uint)param_3->BitOffset,(uint)param_3->BitCount);
  return;
}

// NetObjectProtocolReferencesToString @ 144212a00

void __cdecl
UE::Net::IrisDebugHelper::NetObjectProtocolReferencesToString
          (TStringBuilderBase<wchar_t> *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  FReplicationSystemInternal *pFVar2;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  TStringBuilderBase<wchar_t> *local_48;
  FNetRefHandleManager *local_40;
  undefined8 local_38;
  uint uStack_30;
  int iStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  this = GetReplicationSystem(param_3);
  if (this != (UReplicationSystem *)0x0) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this);
    iVar6 = -1;
    local_40 = &pFVar3->NetRefHandleManager;
    iStack_2c = -1;
    iVar4 = *(int *)&(pFVar3->ReplicationProtocolManager).RegisteredProtocols.field_0x48;
    if (iVar4 != 0) {
      puVar5 = *(undefined1 **)&(pFVar3->ReplicationProtocolManager).RegisteredProtocols.field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pFVar3->ReplicationProtocolManager).RegisteredProtocols.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + ((longlong)iVar4 - 1U & (longlong)(int)param_2) * 4);
      iStack_2c = iVar6;
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(pFVar3->ReplicationProtocolManager).RegisteredProtocols;
        do {
          iVar6 = *(int *)((longlong)iStack_2c * 0x20 + 0x18 + lVar1);
          if (*(uint *)((longlong)iStack_2c * 0x20 + lVar1) == param_2) break;
          iStack_2c = iVar6;
        } while (iVar6 != -1);
      }
    }
    local_38._0_4_ = SUB84(pFVar3,0);
    local_38._4_4_ = (undefined4)((ulonglong)pFVar3 >> 0x20);
    local_48 = param_1;
    uStack_30 = param_2;
    uStack_18 = param_2;
    pFVar2 = pFVar3;
    local_20 = (undefined4)local_38;
    uStack_1c = local_38._4_4_;
    iStack_14 = iStack_2c;
    iVar4 = iStack_2c;
joined_r0x000144212ac5:
    local_38 = pFVar2;
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(pFVar3->ReplicationProtocolManager).RegisteredProtocols;
      `UE::Net::IrisDebugHelper::NetObjectProtocolReferencesToString'::__l2::<lambda_1>::operator()
                (&local_48,*(FReplicationProtocol **)((longlong)iVar4 * 0x20 + 8 + lVar1),
                 *(FObjectKey *)((longlong)iVar4 * 0x20 + 0x10 + lVar1));
      pFVar2 = local_38;
      iVar4 = iVar6;
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&(pFVar3->ReplicationProtocolManager).RegisteredProtocols;
        do {
          iVar6 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
          if (*(uint *)((longlong)iVar4 * 0x20 + lVar1) == param_2) break;
          iVar4 = iVar6;
        } while (iVar6 != -1);
      }
      goto joined_r0x000144212ac5;
    }
  }
  return;
}

// NetObjectStateToString @ 144212b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

void __cdecl
UE::Net::IrisDebugHelper::NetObjectStateToString
          (TStringBuilderBase<wchar_t> *param_1,FNetRefHandle param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uchar *puVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar9;
  FReplicatedObjectData *pFVar10;
  uchar **ppuVar11;
  FScriptContainerElement *pFVar12;
  FNetTokenStore *this_00;
  undefined8 *puVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FNetRefHandle_u_0 local_res10;
  undefined1 auStackY_458 [32];
  FInitParameters local_420;
  FInternalNetSerializationContext local_3f8;
  FNetRefHandle_u_0 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FInternalNetSerializationContext *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  if (param_2.field0_0x0 != 0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
    local_res10 = param_2.field0_0x0;
    if ((((ulonglong)param_2.field0_0x0 & 0xffc0000000000000) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReplicationSystemId != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\NetRefHandle.h"
                           ,0x2b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = GetReplicationSystem((uint)((ulonglong)local_res10 >> 0x36) - 1);
    if (this != (UReplicationSystem *)0x0) {
      pFVar9 = UReplicationSystem::GetReplicationSystemInternal(this);
      uVar7 = Net::Private::FNetRefHandleManager::GetInternalIndex
                        (&pFVar9->NetRefHandleManager,(FNetRefHandle)local_res10._s_0);
      if (uVar7 != 0) {
        pFVar10 = Net::Private::FNetRefHandleManager::GetReplicatedObjectDataNoCheck
                            (&pFVar9->NetRefHandleManager,uVar7);
        if (this->bIsServer == 0) {
          ppuVar11 = &pFVar10->ReceiveStateBuffer;
        }
        else {
          ppuVar11 = TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_>::operator[]
                               ((TChunkedArray<unsigned_char_*,800,TSizedDefaultAllocator<32>_> *)
                                &(pFVar9->NetRefHandleManager).ReplicatedObjectStateBuffers,uVar7);
        }
        puVar3 = *ppuVar11;
        if ((pFVar10->InstanceProtocol != (FReplicationInstanceProtocol *)0x0) &&
           (puVar3 != (uchar *)0x0)) {
          uVar16 = 0;
          uVar7 = (pFVar9->Connections).ValidConnections.Storage.ArrayNum;
          pFVar12 = (pFVar9->Connections).ValidConnections.Storage.AllocatorInstance.Data;
          lVar17 = 0x20;
          uVar15 = uVar16;
          if (uVar7 != 0) {
LAB_144212ca3:
            uVar2 = *(uint *)pFVar12;
            if (uVar2 == 0) goto code_r0x000144212cab;
            iVar4 = 0;
            if (uVar2 != 0) {
              for (; (uVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
              }
            }
            iVar8 = 0x20;
            if (uVar2 != 0) {
              iVar8 = iVar4;
            }
            uVar7 = 0xffffffff;
            if (iVar8 + uVar16 < (pFVar9->Connections).ValidConnections.BitCount) {
              uVar7 = iVar8 + uVar16;
            }
            goto LAB_144212cbd;
          }
LAB_144212cb8:
          uVar7 = 0xffffffff;
LAB_144212cbd:
          local_3f8.bSerializeObjectReferencesAsRemoteIds = 0;
          local_3f8.bInlineObjectReferenceExports = 0;
          local_3f8.bDowngradeAutonomousProxyRole = 0;
          local_3f8.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
          local_3f8.ResolveContext.ConnectionId = 0;
          local_3f8.ResolveContext.AsyncLoadingPriority = -1;
          local_3f8.ResolveContext.bForceSyncLoad = false;
          local_3f8.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
          local_420.ObjectResolveContext.AsyncLoadingPriority = -1;
          local_420.ObjectResolveContext.bForceSyncLoad = false;
          local_3f8.ReplicationSystem = (UReplicationSystem *)0x0;
          local_3f8.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
          local_420.PackageMap = pFVar9->IrisObjectReferencePackageMap;
          local_420.ReplicationSystem = this;
          if (uVar7 == 0xffffffff) {
            local_420.ObjectResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
          }
          else {
            this_00 = UReplicationSystem::GetNetTokenStore(this);
            local_420.ObjectResolveContext.RemoteNetTokenStoreState =
                 FNetTokenStore::GetRemoteNetTokenStoreState(this_00,uVar7);
          }
          local_420.ObjectResolveContext.ConnectionId = uVar7;
          if (uVar7 == 0xffffffff) {
            local_420.ObjectResolveContext.ConnectionId = 0;
          }
          Net::Private::FInternalNetSerializationContext::Init(&local_3f8,&local_420);
          puVar13 = local_3a0;
          local_3b8.Value = 0;
          local_3b0 = 0;
          do {
            *puVar13 = 0;
            puVar13 = puVar13 + 3;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          local_58 = local_58 & 0xfffffffc;
          local_88 = &local_3f8;
          local_60 = local_420.ObjectResolveContext.ConnectionId;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_5c = 0xffffffff;
          if (param_1->End < param_1->CurPos + 10) {
            TStringBuilderBase<wchar_t>::Extend(param_1,10);
          }
          pvVar14 = FGenericPlatformString::Memcpy(param_1->CurPos,L"State for ",0x14);
          param_1->CurPos = (wchar_t *)((longlong)pvVar14 + 0x14);
          ::operator<<(param_1,(FNetRefHandle *)&local_res10._s_0);
          TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L" of type %s\n");
          FReplicationInstanceOperations::OutputInternalStateToString
                    ((FNetSerializationContext *)&local_3b8._s_0,param_1,(uint *)0x0,puVar3,
                     pFVar10->InstanceProtocol,pFVar10->Protocol);
        }
      }
    }
  }
  return;
code_r0x000144212cab:
  uVar15 = uVar15 + 1;
  pFVar12 = pFVar12 + 4;
  uVar16 = uVar16 + 0x20;
  if (uVar7 <= uVar15) goto LAB_144212cb8;
  goto LAB_144212ca3;
}

// PropertyNetSerializerInfo_ShouldUseNetRoleSerializer @ 1442149e0

bool __cdecl
UE::Net::Private::PropertyNetSerializerInfo_ShouldUseNetRoleSerializer(FByteProperty *param_1)

{
  int iVar1;
  UEnum *pUVar2;
  longlong lVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  UClass *pUVar6;
  ulonglong uVar7;
  ulonglong local_res10;
  
  bVar4 = IsThisNotNull(param_1,"FField::GetFName");
  uVar7 = 0;
  if (bVar4) {
    uVar7 = param_1->_padding_;
  }
  else {
    local_res10 = 0;
  }
  FVar5 = FNameEntryId::FromValidEName((EName)&local_res10);
  local_res10 = (ulonglong)*(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (uVar7 != local_res10) {
    FVar5 = FNameEntryId::FromValidEName((EName)&local_res10);
    local_res10 = (ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    if (uVar7 != local_res10) {
      return false;
    }
  }
  pUVar2 = (param_1->Enum).field0_0x0.DebugPtr;
  if ((pUVar2 != (UEnum *)0x0) &&
     ((FName)pUVar2->_padding_ == PropertyNetSerializerRegistry_NAME_NetRole)) {
    pUVar6 = Z_Construct_UClass_UObject_NoRegister();
    bVar4 = FFieldVariant::IsA((FFieldVariant *)&param_1->_padding_,pUVar6);
    if ((bVar4) && (uVar7 = param_1->_padding_ & 0xfffffffffffffffe, uVar7 != 0)) {
      pUVar6 = Z_Construct_UClass_UClass_NoRegister();
      lVar3 = *(longlong *)(uVar7 + 0x10);
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// RegisterDefaultPropertyNetSerializerInfos @ 144215a20

void __cdecl UE::Net::Private::RegisterDefaultPropertyNetSerializerInfos(void)

{
  code *pcVar1;
  bool bVar2;
  FNameEntryId FVar3;
  FFieldClass *pFVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  undefined1 local_300 [8];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  FFieldClass *local_1c8;
  FNamedStructPropertyNetSerializerInfo *local_1c0;
  FFieldClass *local_1b8;
  FNamedStructPropertyNetSerializerInfo *local_1b0;
  FFieldClass *local_1a8;
  FNamedStructPropertyNetSerializerInfo *local_1a0;
  FFieldClass *local_198;
  FNamedStructPropertyNetSerializerInfo *local_190;
  FFieldClass *local_188;
  FNamedStructPropertyNetSerializerInfo *local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  FFieldClass *local_128;
  FNamedStructPropertyNetSerializerInfo *local_120;
  FFieldClass *local_118;
  FNamedStructPropertyNetSerializerInfo *local_110;
  FFieldClass *local_108;
  FNamedStructPropertyNetSerializerInfo *local_100;
  FFieldClass *local_f8;
  FNamedStructPropertyNetSerializerInfo *local_f0;
  FFieldClass *local_e8;
  FNamedStructPropertyNetSerializerInfo *local_e0;
  FFieldClass *local_d8;
  FNamedStructPropertyNetSerializerInfo *local_d0;
  FFieldClass *local_c8;
  FNamedStructPropertyNetSerializerInfo *local_c0;
  FFieldClass *local_b8;
  FNamedStructPropertyNetSerializerInfo *local_b0;
  FFieldClass *local_a8;
  FNamedStructPropertyNetSerializerInfo *local_a0;
  FFieldClass *local_98;
  FNamedStructPropertyNetSerializerInfo *local_90;
  FFieldClass *local_88;
  FNamedStructPropertyNetSerializerInfo *local_80;
  FFieldClass *local_78;
  FNamedStructPropertyNetSerializerInfo *local_70;
  FFieldClass *local_68;
  FNamedStructPropertyNetSerializerInfo *local_60;
  FFieldClass *local_58;
  FNamedStructPropertyNetSerializerInfo *local_50;
  FFieldClass *local_48;
  FNamedStructPropertyNetSerializerInfo *local_40;
  
  local_2f8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_2f8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2f8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2f8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_2e8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_2e8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2e8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2e8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_2d8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_2d8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2d8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2d8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_2c8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_2c8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2c8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2c8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_2b8._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_2b8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2b8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2b8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_2a8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_2a8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2a8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_2a8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_298._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_298._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_298._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_298);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_288._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_288._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_288._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_288);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_278._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_278._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_278._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_278);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_268._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_268._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_268._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_268);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_258._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_258._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_258._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_258);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_248._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_248._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_248._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_248);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_238._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_238._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_238._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_238);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_228._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_228._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_228._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_228);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_218._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_218._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_218._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_218);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_208._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_208._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_208._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_208);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_1f8._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_1f8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1f8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_1f8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_1e8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_1e8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1e8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_1e8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_1d8._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_1d8._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1d8._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_1d8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FSoftObjectPathNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_SoftObjectPath.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_SoftObjectPath.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1c0 = &::StaticInstance;
  local_1c8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_1c8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FSoftClassPathNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_SoftClassPath.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_SoftClassPath.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1b0 = &::StaticInstance;
  local_1b8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_1b8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectReference.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectReference.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_1a0 = &::StaticInstance;
  local_1a8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_1a8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FRemoteServerIdNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteServerId.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_RemoteServerId.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_190 = &::StaticInstance;
  local_198 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_198);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FRemoteObjectIdNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RemoteObjectId.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_RemoteObjectId.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_180 = &::StaticInstance;
  local_188 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_188);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_178._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_178._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_178._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_178);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_168._0_8_ = (**(code **)::StaticInstance._padding_)(&::StaticInstance);
  if (local_168._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_168._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_168);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_158._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_158._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_158._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_158);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_148._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_148._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_148._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_148);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  local_138._0_8_ = (**(code **)::StaticInstance._0_8_)(&::StaticInstance);
  if (local_138._0_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_138._8_8_ = &::StaticInstance;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)local_138);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ = (longlong)&FGuidNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Guid.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_Guid.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_120 = &::StaticInstance;
  local_128 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_128);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
      ::StaticInstance._padding_ = (longlong)&FVectorNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_110 = &::StaticInstance;
  local_118 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_118);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
      ::StaticInstance._padding_ = (longlong)&FVector3fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_00,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_100 = &::StaticInstance;
  local_108 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_108);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_res18);
      ::StaticInstance._padding_ = (longlong)&FVector3dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_01,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_f0 = &::StaticInstance;
  local_f8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_f8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
      ::StaticInstance._padding_ = (longlong)&FRotatorNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_02,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_e0 = &::StaticInstance;
  local_e8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_e8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_300);
      ::StaticInstance._padding_ = (longlong)&FRotator3fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_03,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_d0 = &::StaticInstance;
  local_d8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_d8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_310);
      ::StaticInstance._padding_ = (longlong)&FRotator3dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_04,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_c0 = &::StaticInstance;
  local_c8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_c8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_30c);
      ::StaticInstance._padding_ = (longlong)&FUnitQuatNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_05,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_b0 = &::StaticInstance;
  local_b8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_b8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_308);
      ::StaticInstance._padding_ = (longlong)&FUnitQuat4fNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_06,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_a0 = &::StaticInstance;
  local_a8 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_a8);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FVar3 = FNameEntryId::FromValidEName((EName)local_304);
      ::StaticInstance._padding_ = (longlong)&FUnitQuat4dNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)*(uint *)CONCAT44(extraout_var_07,FVar3.Value);
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_90 = &::StaticInstance;
  local_98 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_98);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize100.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_80 = &::StaticInstance;
  local_88 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_88);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize10.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_70 = &::StaticInstance;
  local_78 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_78);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FVectorNetQuantizeNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantize.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = &::StaticInstance;
  local_68 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_68);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ =
           (longlong)&FVectorNetQuantizeNormalNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_Vector_NetQuantizeNormal.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_50 = &::StaticInstance;
  local_58 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_58);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_ = (longlong)&FDateTimeNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_DateTime.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_DateTime.Number;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(code **)::StaticInstance._padding_ ==
      TSimplePropertyNetSerializerInfo<FStructProperty,FNetSerializerConfig>::GetPropertyTypeClass)
  {
    pFVar4 = FStructProperty::StaticClass();
  }
  else {
    pFVar4 = (FFieldClass *)(**(code **)::StaticInstance._padding_)(&::StaticInstance);
  }
  if (pFVar4 == (FFieldClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PropertyClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_40 = &::StaticInstance;
  local_48 = pFVar4;
  TArray<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>,TSizedDefaultAllocator<32>_>
  ::AddUniqueImpl<TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*>_>
            (&FPropertyNetSerializerInfoRegistry::Registry,
             (TTuple<FFieldClass_const_*,UE::Net::FPropertyNetSerializerInfo_const_*> *)&local_48);
  FPropertyNetSerializerInfoRegistry::bRegistryIsDirty = true;
  return;
}

// SetUseIrisReplication @ 14421bc30

void __cdecl UE::Net::SetUseIrisReplication(bool param_1)

{
  CVarUseIrisReplication = (uint)param_1;
  return;
}

// ShouldUseIrisReplication @ 14421bce0

bool __cdecl UE::Net::ShouldUseIrisReplication(void)

{
  return 0 < CVarUseIrisReplication;
}

// ValidateForwardingNetSerializerTraits @ 14421c6e0

void __cdecl
UE::Net::ValidateForwardingNetSerializerTraits
          (FNetSerializer *param_1,EReplicationStateTraits param_2)

{
  ENetSerializerTraits EVar1;
  
  EVar1 = param_1->Traits;
  if (((param_2 & HasDynamicState) != None) && ((EVar1 & HasDynamicState) == None)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
               ,0xe0,
               L"FNetSerializer: %s is using serializer(s) that HasDynamicState without setting trait: static constexpr bool bHasDynamicState = true; in the serializer declaration."
              );
  }
  if (((param_2 & HasObjectReference) != None) && ((EVar1 & HasCustomNetReference) == None)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
               ,0xe4,
               L"FNetSerializer: %s is using serializer(s) that has trait HasCustomNetReference without setting trait: static constexpr bool bHasCustomNetReference = true; in the serializer declaration."
              );
  }
  if (((param_2 >> 0xc & 1) != 0) && ((EVar1 & HasConnectionSpecificSerialization) == None)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyNetSerializerInfoRegistry.cpp"
               ,0xe8,
               L"FNetSerializer: %s is using serializer(s) that has HasConnectionSpecificSerialization without setting trait: static constexpr bool bHasConnectionSpecificSerialization = true; in the serializer declaration."
              );
  }
  return;
}

// Construct<FNetObjectGridFilterProfile> @ 14421e970

void __cdecl UE::CoreUObject::Private::Construct<FNetObjectGridFilterProfile>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 4;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FNetObjectGridFilterProfile> @ 14421e990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetObjectGridFilterProfile>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 4;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FNetObjectGridFilterProfile> @ 14421e9b0

void __cdecl UE::CoreUObject::Private::Destruct<FNetObjectGridFilterProfile>(void *param_1)

{
  return;
}

// Copy<FNetObjectGridFilterProfile> @ 14421e9c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetObjectGridFilterProfile>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetObjectFilterDefinition> @ 14421ea00

void __cdecl UE::CoreUObject::Private::Construct<FNetObjectFilterDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FNetObjectFilterDefinition> @ 14421ea20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetObjectFilterDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNetObjectFilterDefinition> @ 14421ea40

void __cdecl UE::CoreUObject::Private::Destruct<FNetObjectFilterDefinition>(void *param_1)

{
  return;
}

// Copy<FNetObjectFilterDefinition> @ 14421ea50

bool __cdecl
UE::CoreUObject::Private::Copy<FNetObjectFilterDefinition>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetBlobHandlerDefinition> @ 14421f9a0

void __cdecl UE::CoreUObject::Private::Construct<FNetBlobHandlerDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FNetBlobHandlerDefinition> @ 14421f9b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetBlobHandlerDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FNetBlobHandlerDefinition> @ 14421f9c0

void __cdecl UE::CoreUObject::Private::Destruct<FNetBlobHandlerDefinition>(void *param_1)

{
  return;
}

// Copy<FNetBlobHandlerDefinition> @ 14421f9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetBlobHandlerDefinition>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&> @ 1442211d0

FDirtyNetObjectTracker * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&>
          (FDirtyNetObjectTracker **param_1)

{
  return *param_1;
}

// GetLeastSignificantBit<unsigned_int,1> @ 144225470

uint __cdecl UE::Net::GetLeastSignificantBit<unsigned_int,1>(uint param_1)

{
  return -param_1 & param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_> @ 144226620

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UNetObjectGridFilter::FCellAndTimestamp>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_> @ 1442266c0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FReplicationView::FView> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<UE::Net::FReplicationView::FView>)0x0)
    goto LAB_144226731;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_144226731:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144226770

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144226840

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144226910

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x280;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x280 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x281) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442269e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0xc0;
    uVar7 = (ulonglong)(byte)param_1;
    if (0xc0 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xc1) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_> @ 144226ab0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
          (ushort param_1,ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_> @ 144226b70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
          (ushort param_1,ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UNetObjectGridFilter::FCellAndTimestamp>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationFragmentInfo>_> @ 144226c40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationFragmentInfo>_>
          (ushort param_1,ForElementType<UE::Net::FReplicationFragmentInfo> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FReplicationFragmentInfo>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 144226d10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (ushort param_1,ForElementType<UE::Net::FNetRefHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_> @ 144226dd0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_> @ 144226ea0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>_> @ 144226f70

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TAlignedHeapAllocator<4>::ForAnyElementType> @ 144227050

int __cdecl
UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  iVar7 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar7 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar8 = (ulonglong)param_1;
    uVar5 = (ulonglong)(int)uVar1;
    if (iVar7 == 0) {
      uVar6 = 4;
      if (4 < uVar5) {
        uVar6 = uVar5;
      }
    }
    else {
      uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar3 = FMemory::QuantizeSize(uVar8 * uVar6,4);
    iVar7 = (int)(uVar3 / uVar8);
    if (iVar7 < (int)uVar1) {
      iVar7 = 0x7fffffff;
    }
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar7 != 0)) {
      if ((iVar7 < 0) || (0x7ffffffe < uVar8 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar7,uVar8);
      }
      pFVar4 = FMemory::Realloc(param_4->Data,(longlong)iVar7 * uVar8,4);
      param_4->Data = pFVar4;
    }
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TAlignedHeapAllocator<0>::ForAnyElementType> @ 144227150

int __cdecl
UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<0>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  iVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)(iVar6 - iVar1) < (uint)param_3) {
    if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar8);
    }
    uVar7 = (ulonglong)param_1;
    uVar5 = (ulonglong)(int)uVar8;
    if (iVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar5) {
        uVar2 = uVar5;
      }
    }
    else {
      uVar2 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    iVar6 = (int)(uVar3 / uVar7);
    if (iVar6 < (int)uVar8) {
      iVar6 = 0x7fffffff;
    }
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar6 != 0)) {
      if ((iVar6 < 0) || (0x7ffffffe < uVar7 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar6,uVar7);
      }
      pFVar4 = FMemory::Realloc(param_4->Data,(longlong)iVar6 * uVar7,0);
      param_4->Data = pFVar4;
    }
    *param_6 = iVar6;
  }
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144227250

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 3) {
    iVar2 = 2;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_> @ 144227310

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_> @ 1442273d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
          (uint param_1,uint param_2,
          ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UNetObjectGridFilter::FCellAndTimestamp>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>_> @ 144227490

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationFiltering::FUpdateDirtyObjectsBatchHelper::FPerFilterInfo>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TAlignedHeapAllocator<0>::ForAnyElementType> @ 144227550

void __cdecl
UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<0>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int param_4,int *param_5)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if (((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
     ((0x40 < iVar1 - param_4 || (param_4 == 0)))) {
    if (0 < param_4) {
      uVar2 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      param_4 = (int)(uVar2 / uVar4);
    }
    if (param_4 != iVar1) {
      *param_5 = param_4;
      if ((param_3->Data != (FScriptContainerElement *)0x0) || (param_4 != 0)) {
        if ((param_4 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
          OnInvalidAlignedHeapAllocatorNum(param_4,uVar4);
        }
        pFVar3 = FMemory::Realloc(param_3->Data,(longlong)param_4 * uVar4,0);
        param_3->Data = pFVar3;
      }
    }
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144227620

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442276a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144227720

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x281) {
      iVar1 = 0x280;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<640,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442277a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xc1) {
      iVar1 = 0xc0;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<192,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_> @ 144227820

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_> @ 1442278a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TObjectPtr<UObject>_> *param_4,
          int param_5,int *param_6)

{
  ForElementType<TObjectPtr<UObject>_> _Src;
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = param_4->SecondaryData;
    if (uVar1 < 5) {
      if (_Src == (ForElementType<TObjectPtr<UObject>_>)0x0) {
        return;
      }
      memmove(param_4,(void *)_Src,(longlong)param_5 << 3);
      uVar1 = 0;
      param_5 = 0;
    }
    else if (_Src == (ForElementType<TObjectPtr<UObject>_>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_4->SecondaryData,0,uVar1,uVar3);
      memmove((void *)param_4->SecondaryData,param_4,(longlong)param_5 << 3);
      return;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_4->SecondaryData,param_5,uVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_> @ 144227980

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UNetObjectGridFilter::FCellAndTimestamp>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UNetObjectGridFilter::FCellAndTimestamp> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UNetObjectGridFilter::FCellAndTimestamp>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 144227a00

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  ForElementType<FName> _Src;
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = param_4->SecondaryData;
    if (uVar1 < 5) {
      if (_Src == (ForElementType<FName>)0x0) {
        return;
      }
      memmove(param_4,(void *)_Src,(longlong)param_5 << 3);
      uVar1 = 0;
      param_5 = 0;
    }
    else if (_Src == (ForElementType<FName>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_4->SecondaryData,0,uVar1,uVar3);
      memmove((void *)param_4->SecondaryData,param_4,(longlong)param_5 << 3);
      return;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_4->SecondaryData,param_5,uVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 144227ae0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetToken> *param_4,
          int param_5,int *param_6)

{
  ForElementType<UE::Net::FNetToken> _Src;
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if (uVar1 != *param_6) {
    *param_6 = uVar1;
    _Src = param_4->SecondaryData;
    if (uVar1 < 5) {
      if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
        return;
      }
      memmove(param_4,(void *)_Src,(longlong)param_5 << 2);
      uVar1 = 0;
      param_5 = 0;
    }
    else if (_Src == (ForElementType<UE::Net::FNetToken>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&param_4->SecondaryData,0,uVar1,uVar3);
      memmove((void *)param_4->SecondaryData,param_4,(longlong)param_5 << 2);
      return;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_4->SecondaryData,param_5,uVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TAlignedHeapAllocator<4>::ForAnyElementType> @ 144227bc0

void __cdecl
UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar4,4);
    iVar1 = (int)(uVar2 / uVar4);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar1 != 0)) {
      if ((iVar1 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar1,uVar4);
      }
      pFVar3 = FMemory::Realloc(param_4->Data,(longlong)iVar1 * uVar4,4);
      param_4->Data = pFVar3;
    }
  }
  return;
}

// Rehash<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_> @ 144227c60

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_2;
  if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->SecondaryData,0,0,4);
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
    ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar3 = 0;
      do {
        FVar2 = (ForElementType<FSetElementId>)param_1;
        if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar2 = param_1->SecondaryData;
        }
        uVar1 = uVar3 & (longlong)param_2 - 1U;
        uVar3 = uVar3 + 1;
        *(undefined4 *)((longlong)FVar2 + uVar1 * 4) = 0xffffffff;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// ForceNetUpdate @ 14423a5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Net::Private::ForceNetUpdate(uint param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar6;
  FString local_28;
  
  this = GetReplicationSystem(param_1);
  if (this != (UReplicationSystem *)0x0) {
    pFVar6 = UReplicationSystem::GetReplicationSystemInternal(this);
    if (((pFVar6->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DirtyNetObjectTracker.IsInit()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                           ,0x41,
                           L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (pFVar6->DirtyNetObjectTracker).ForceNetUpdateObjects.Storage.AllocatorInstance.Data;
    if (((pFVar6->DirtyNetObjectTracker).ForceNetUpdateObjects.BitCount <= param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = (ulonglong)(param_2 >> 5) * 4;
    piVar1 = &(pFVar6->DirtyNetObjectTracker).ForceNetUpdateObjectsCount;
    *piVar1 = *piVar1 + (uint)((*(uint *)(pFVar3 + lVar2) >> (param_2 & 0x1f) & 1) == 0);
    pFVar3 = (pFVar6->DirtyNetObjectTracker).ForceNetUpdateObjects.Storage.AllocatorInstance.Data;
    if (((pFVar6->DirtyNetObjectTracker).ForceNetUpdateObjects.BitCount <= param_2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(pFVar3 + lVar2) = *(uint *)(pFVar3 + lVar2) | 1 << (param_2 & 0x1f);
    FDirtyNetObjectTracker::MarkNetObjectDirty(&pFVar6->DirtyNetObjectTracker,param_2);
    if (5 < (byte)LogIrisDirtyTracker._0_1_) {
      FNetRefHandleManager::PrintObjectFromIndex
                ((pFVar6->DirtyNetObjectTracker).NetRefHandleManager,&local_28,param_2);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisDirtyTracker);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetDependentObjectFilterStatus @ 14423bd90

ENetFilterStatus __cdecl
UE::Net::Private::GetDependentObjectFilterStatus
          (FNetRefHandleManager *param_1,FNetBitArray *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ENetFilterStatus EVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  
  puVar9 = (uint *)0x0;
  if (*(int *)&(param_1->SubObjects).DependencyInfos.field_0x8 !=
      *(int *)&(param_1->SubObjects).DependencyInfos.field_0x34) {
    puVar11 = *(undefined1 **)&(param_1->SubObjects).DependencyInfos.field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(param_1->SubObjects).DependencyInfos.field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(param_1->SubObjects).DependencyInfos.field_0x48 - 1U & param_3) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(param_1->SubObjects).DependencyInfos;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x28;
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x28) == param_3) {
          puVar8 = (uint *)(lVar1 + 4);
          if (lVar1 == 0) {
            puVar8 = puVar9;
          }
          if ((puVar8 != (uint *)0x0) && (puVar8[2] != 0xffffffff)) {
            puVar8 = (uint *)((longlong)(int)puVar8[2] * 0x30 +
                             *(longlong *)&(param_1->SubObjects).DependentObjectsStorage);
            uVar10 = puVar8[10];
            puVar9 = *(uint **)(puVar8 + 8);
            if (*(uint **)(puVar8 + 8) == (uint *)0x0) {
              puVar9 = puVar8;
            }
            if (((int)uVar10 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              EVar7 = (*pcVar4)();
              return EVar7;
            }
            goto LAB_14423be13;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x20);
      } while (iVar6 != -1);
    }
  }
  uVar10 = 0;
LAB_14423be13:
  puVar8 = puVar9 + (int)uVar10;
  for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
    EVar7 = GetDependentObjectFilterStatus(param_1,param_2,*puVar9);
    if (EVar7 == Allow) {
      return Allow;
    }
  }
  pFVar3 = (param_2->Storage).AllocatorInstance.Data;
  if ((param_2->BitCount <= param_3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  return (uint)((*(uint *)(pFVar3 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0);
}

// GetStaticFilterName @ 14423f320

FName __cdecl UE::Net::Private::GetStaticFilterName(uint param_1)

{
  uint in_register_0000000c;
  FName FVar1;
  int in_EDX;
  undefined1 local_res10 [8];
  undefined1 *local_res18 [2];
  
  FVar1.Number = in_register_0000000c;
  FVar1.ComparisonIndex.Value = param_1;
  if (in_EDX == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&NoFilterName,L"NoFilter");
        _Init_thread_footer(&::_TSS0);
      }
    }
    *(FName *)FVar1 = NoFilterName;
    return FVar1;
  }
  if (in_EDX != 1) {
    if (in_EDX != 2) {
      local_res18[0] = local_res10;
      `UE::Net::Private::GetStaticFilterName'::__l8::<lambda_1>::operator()(local_res18);
      *(FName *)FVar1 = (FName)0x0;
      return FVar1;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS2) {
      _Init_thread_header(&::_TSS2);
      if (::_TSS2 == -1) {
        ::FName::FName(&ConnectionFilterName,L"ConnectionFilter");
        _Init_thread_footer(&::_TSS2);
      }
    }
    *(FName *)FVar1 = ConnectionFilterName;
    return FVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&ToOwnerFilterName,L"ToOwnerFilter");
      _Init_thread_footer(&::_TSS1);
    }
  }
  *(FName *)FVar1 = ToOwnerFilterName;
  return FVar1;
}

// IsDeltaCompressionEnabled @ 144243c80

bool __cdecl UE::Net::Private::IsDeltaCompressionEnabled(void)

{
  return bIsDeltaCompressionEnabled;
}

// LexToString @ 1442442c0

wchar_t * __cdecl UE::Net::LexToString(ENetFilterStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Disallow) {
    return L"Disallow";
  }
  if (param_1 != Allow) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4417929327761424412>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Filtering\\NetObjectFilter.cpp"
                       ,0x1c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Missing";
  }
  return L"Allow";
}

// MarkNetObjectStateDirty @ 144244620

void __cdecl UE::Net::Private::MarkNetObjectStateDirty(uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  UReplicationSystem *this;
  FReplicationSystemInternal *pFVar3;
  
  this = GetReplicationSystem(param_1);
  if (this != (UReplicationSystem *)0x0) {
    pFVar3 = UReplicationSystem::GetReplicationSystemInternal(this);
    if ((pFVar3->DirtyNetObjectTracker).NetRefHandleManager == (FNetRefHandleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DirtyNetObjectTracker.IsInit()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationSystemInternal.h"
                         ,0x41,
                         L"Not allowed to access the DirtyNetObjectTracker unless object replication is enabled."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FDirtyNetObjectTracker::MarkNetObjectDirty(&pFVar3->DirtyNetObjectTracker,param_2);
  }
  return;
}

// Construct<FNetTokenStoreTypeIdPair> @ 14425dc70

void __cdecl UE::CoreUObject::Private::Construct<FNetTokenStoreTypeIdPair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNetTokenStoreTypeIdPair> @ 14425dc90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetTokenStoreTypeIdPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNetTokenStoreTypeIdPair> @ 14425dcb0

void __cdecl UE::CoreUObject::Private::Destruct<FNetTokenStoreTypeIdPair>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FNetTokenStoreTypeIdPair> @ 14425dcd0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetTokenStoreTypeIdPair>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UObjectReplicationBridge,UObjectReplicationBridge_*_&> @ 14425f680

UObjectReplicationBridge * __cdecl
UE::Core::Private::DereferenceIfNecessary<UObjectReplicationBridge,UObjectReplicationBridge_*_&>
          (UObjectReplicationBridge **param_1)

{
  return *param_1;
}

// GetBitsNeeded<enum_EIrisAsyncLoadingPriority,1> @ 1442632f0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

uint __cdecl
UE::Net::GetBitsNeeded<enum_EIrisAsyncLoadingPriority,1>(EIrisAsyncLoadingPriority param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 144263f70

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FNetToken> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_> @ 144264010

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_>
          (ushort param_1,ForElementType<signed_char> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442640e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x180;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x180 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x181) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442641b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_> @ 144264280

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_>
          (ushort param_1,ForElementType<UE::Net::Private::FDependentObjectInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FDependentObjectInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 144264350

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (ushort param_1,ForElementType<UE::Net::FNetObjectReference> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 144264420

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (ushort param_1,ForElementType<UE::Net::FNetObjectReference> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 1442644e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (ushort param_1,ForElementType<UE::Net::FNetObjectReference> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442645b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (ushort param_1,ForElementType<UE::Net::FNetRefHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x180;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x180 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x181) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<384,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetRefHandle>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 144264680

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (ushort param_1,ForElementType<UE::Net::FNetRefHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 144264750

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (ushort param_1,ForElementType<unsigned___int64> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<16>::ForElementType<UE::Net::FNetObjectFactoryRegistry::FFactoryData>_> @ 144264820

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<16>::ForElementType<UE::Net::FNetObjectFactoryRegistry::FFactoryData>_>
          (ushort param_1,ForElementType<UE::Net::FNetObjectFactoryRegistry::FFactoryData> *param_2,
          int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0x10 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 0x10;
  return iVar4;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_> @ 144264890

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<signed_char> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 144264970

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FNetObjectReference> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_> @ 144264a50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>_>
          (uint param_1,uint param_2,ForElementType<signed_char> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<signed_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144264b10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_> @ 144264bd0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_>
          (uint param_1,uint param_2,ForElementType<UE::Net::Private::FDependentObjectInfo> *param_3
          ,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FDependentObjectInfo>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 144264c90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_> @ 144264d10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FDependentObjectInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FDependentObjectInfo> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FDependentObjectInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 144264d90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FNetObjectReference> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 144264e10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetToken> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// CallRegisterReplicationFragments @ 144270ce0

void __cdecl
UE::Net::Private::CallRegisterReplicationFragments
          (UObject *param_1,FFragmentRegistrationContext *param_2,EFragmentRegistrationFlags param_3
          )

{
  code *pcVar1;
  bool bVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x1f8))();
  if (((param_2->Fragments).ArrayNum < 1) && (param_2->bIsAFragmentlessNetObject == false)) {
    FReplicationFragmentUtil::CreateAndRegisterFragmentsForObject
              (param_1,param_2,param_3,
               (TArray<UE::Net::FReplicationFragment_*,TSizedDefaultAllocator<32>_> *)0x0);
    if (((param_2->Fragments).ArrayNum < 1) && (param_2->bIsAFragmentlessNetObject == false)) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3515033580445106346>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ObjectReplicationBridge.cpp"
                         ,0xaa,"Context.WasRegistered()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// LexToString @ 144283100

wchar_t * __cdecl UE::Net::LexToString(EDependentObjectSchedulingHint param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Default) {
    return L"Default";
  }
  if (param_1 == ScheduleBeforeParent) {
    return L"BeforeParent";
  }
  if (param_1 == ScheduleBeforeParentIfInitialState) {
    return L"BeforeParentIfInitialState";
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5859160669709926312>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\ReplicationSystem\\ReplicationSystemTypes.h"
                     ,0x58,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  return L"Missing";
}

// NetRPC_GetDebugObjectRefName @ 1442842b0

FString * __cdecl
UE::Net::Private::NetRPC_GetDebugObjectRefName
          (FString *__return_storage_ptr__,FNetSerializationContext *param_1,
          FNetObjectReference *param_2,UObject *param_3)

{
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (param_3 == (UObject *)0x0) {
    local_res8 = (FName)param_3;
    FObjectReferenceCache::ResolveObjectReference
              (param_1->InternalContext->ObjectReferenceCache,param_2,
               &param_1->InternalContext->ResolveContext,(UObject **)&local_res8);
    param_3 = (UObject *)local_res8;
  }
  FNetObjectReference::ToString(param_2,&local_18);
  if ((FName)param_3 == (FName)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8 = *(FName *)((longlong)param_3 + 0x18);
    ::FName::ToString(&local_res8,&local_28);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NetRPC_GetFunctionAndObject @ 1442843b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Net::Private::NetRPC_GetFunctionAndObject
          (FNetSerializationContext *param_1,FNetObjectReference *param_2,
          FNetObjectReference *param_3,FFunctionLocator *param_4,
          FReplicationStateMemberFunctionDescriptor **param_5,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_6)

{
  UReplicationSystem *this;
  code *pcVar1;
  FName FVar2;
  UObject *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  UObjectReplicationBridge *pUVar6;
  FReplicationProtocol *pFVar7;
  atomic<unsigned_char> *paVar8;
  FNetObjectReference *pFVar9;
  int iVar10;
  UObject *local_res8;
  char *pcVar11;
  FName local_58;
  UObject *local_50;
  FString local_48;
  FString local_38;
  
  this = param_1->InternalContext->ReplicationSystem;
  pUVar6 = UReplicationSystem::GetReplicationBridge(this);
  if (pUVar6 == (UObjectReplicationBridge *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8608888639159534300>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                       ,0x2dc,"Bridge != nullptr");
    FVar2 = NetError_InvalidNetObjectReference;
    if (!bVar4) {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
      return false;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if (((param_3->RefHandle).field0_0x0.Value == 0) &&
     (((param_3->PathToken).field0_0x0.Value & 0xfffff) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_res8 = (UObject *)0x0;
  pFVar9 = param_2;
  if (bVar4) {
    pFVar9 = param_3;
  }
  FObjectReferenceCache::ResolveObjectReference
            (param_1->InternalContext->ObjectReferenceCache,pFVar9,
             &param_1->InternalContext->ResolveContext,&local_res8);
  pUVar3 = local_res8;
  if (local_res8 != (UObject *)0x0) {
    pFVar7 = UReplicationSystem::GetReplicationProtocol
                       (this,(FNetRefHandle)
                             *(FNetRefHandle_u_0 *)&(param_2->RefHandle).field0_0x0._s_0);
    if (pFVar7 == (FReplicationProtocol *)0x0) {
      if (5 < (byte)LogIrisRpc._0_1_) {
        FNetObjectReference::ToString(param_2,&local_38);
        local_58.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_58.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_58,&local_48);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRpc);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((uint)param_4->DescriptorIndex < pFVar7->ReplicationStateCount) {
        if (param_4->FunctionIndex <
            pFVar7->ReplicationStateDescriptors[param_4->DescriptorIndex]->FunctionCount) {
          local_50 = pUVar3;
          *param_5 = pFVar7->ReplicationStateDescriptors[param_4->DescriptorIndex]->
                     MemberFunctionDescriptors + param_4->FunctionIndex;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar3);
          }
          FWeakObjectPtr::operator=(&param_6->WeakPtr,(FObjectPtr)&local_50);
          return true;
        }
        iVar10 = 0x2f8;
        pcVar11 = "FunctionLocator.FunctionIndex < Descriptor->FunctionCount";
        paVar8 = &bGEnsureHasExecuted<8608888639159534328>;
      }
      else {
        iVar10 = 0x2f1;
        pcVar11 = "FunctionLocator.DescriptorIndex < Protocol->ReplicationStateCount";
        paVar8 = &bGEnsureHasExecuted<8608888639159534321>;
      }
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (paVar8,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\NetBlob\\NetRPC.cpp"
                         ,iVar10,pcVar11);
      FVar2 = NetError_UnknownFunction;
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar2);
    }
  }
  return false;
}

// Copy<FObjectReplicationBridgeAsyncLoadingClassConfig> @ 14429e430

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgeAsyncLoadingClassConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicatedBridgeCriticalClassConfig> @ 14429eb70

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicatedBridgeCriticalClassConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FObjectReplicatedBridgeCriticalClassConfig> @ 14429eb90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicatedBridgeCriticalClassConfig>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FObjectReplicatedBridgeCriticalClassConfig> @ 14429eba0

void __cdecl
UE::CoreUObject::Private::Destruct<FObjectReplicatedBridgeCriticalClassConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicatedBridgeCriticalClassConfig> @ 14429ebb0

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicatedBridgeCriticalClassConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgeDeltaCompressionConfig> @ 14429f160

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicationBridgeDeltaCompressionConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FObjectReplicationBridgeDeltaCompressionConfig> @ 14429f1c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeDeltaCompressionConfig>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FObjectReplicationBridgeDeltaCompressionConfig> @ 14429f1d0

void __cdecl
UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeDeltaCompressionConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicationBridgeDeltaCompressionConfig> @ 14429f1e0

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgeDeltaCompressionConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgePrioritizerConfig> @ 14429f310

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicationBridgePrioritizerConfig>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FObjectReplicationBridgePrioritizerConfig> @ 14429f330

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgePrioritizerConfig>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FObjectReplicationBridgePrioritizerConfig> @ 14429f350

void __cdecl
UE::CoreUObject::Private::Destruct<FObjectReplicationBridgePrioritizerConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicationBridgePrioritizerConfig> @ 14429f360

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgePrioritizerConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgeFilterConfig> @ 14429f570

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicationBridgeFilterConfig>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FObjectReplicationBridgeFilterConfig> @ 14429f590

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeFilterConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FObjectReplicationBridgeFilterConfig> @ 14429f5b0

void __cdecl UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeFilterConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicationBridgeFilterConfig> @ 14429f5c0

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgeFilterConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgePollConfig> @ 14429f9a0

void __cdecl UE::CoreUObject::Private::Construct<FObjectReplicationBridgePollConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FObjectReplicationBridgePollConfig> @ 14429f9c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgePollConfig>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FObjectReplicationBridgePollConfig> @ 14429f9e0

void __cdecl UE::CoreUObject::Private::Destruct<FObjectReplicationBridgePollConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicationBridgePollConfig> @ 14429f9f0

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgePollConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetObjectPrioritizerDefinition> @ 1442a0090

void __cdecl UE::CoreUObject::Private::Construct<FNetObjectPrioritizerDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FNetObjectPrioritizerDefinition> @ 1442a00b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNetObjectPrioritizerDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FNetObjectPrioritizerDefinition> @ 1442a00d0

void __cdecl UE::CoreUObject::Private::Destruct<FNetObjectPrioritizerDefinition>(void *param_1)

{
  return;
}

// Copy<FNetObjectPrioritizerDefinition> @ 1442a00e0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetObjectPrioritizerDefinition>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x20);
      param_2 = (void *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgeTypeStatsConfig> @ 1442a0a00

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicationBridgeTypeStatsConfig>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FObjectReplicationBridgeTypeStatsConfig> @ 1442a0a20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeTypeStatsConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FObjectReplicationBridgeTypeStatsConfig> @ 1442a0a40

void __cdecl
UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeTypeStatsConfig>(void *param_1)

{
  return;
}

// Copy<FObjectReplicationBridgeTypeStatsConfig> @ 1442a0a50

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectReplicationBridgeTypeStatsConfig>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectReplicationBridgeAsyncLoadingClassConfig> @ 1442a14b0

void __cdecl
UE::CoreUObject::Private::Construct<FObjectReplicationBridgeAsyncLoadingClassConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FObjectReplicationBridgeAsyncLoadingClassConfig> @ 1442a14c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectReplicationBridgeAsyncLoadingClassConfig>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FObjectReplicationBridgeAsyncLoadingClassConfig> @ 1442a14d0

void __cdecl
UE::CoreUObject::Private::Destruct<FObjectReplicationBridgeAsyncLoadingClassConfig>(void *param_1)

{
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442aaff0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FNetRefHandle> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442ab090

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol_const_*>_> @ 1442ab160

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol_const_*>_>
          (ushort param_1,ForElementType<UE::Net::FReplicationProtocol_const_*> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FReplicationProtocol_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_> @ 1442ab230

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
          (ushort param_1,ForElementType<UObject_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_> @ 1442ab300

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
          (ushort param_1,ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationBridge::FPendingEndReplicationInfo>_> @ 1442ab3d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationBridge::FPendingEndReplicationInfo>_>
          (ushort param_1,ForElementType<UReplicationBridge::FPendingEndReplicationInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UReplicationBridge::FPendingEndReplicationInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FQueuedDataChunk>_> @ 1442ab4a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FQueuedDataChunk>_>
          (ushort param_1,ForElementType<UE::Net::Private::FQueuedDataChunk> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FQueuedDataChunk>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>_> @ 1442ab560

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>_>
          (ushort param_1,ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetReferenceCollector::FReferenceInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_> @ 1442ab630

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_>
          (ushort param_1,ForElementType<VectorRegister4Double> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_> @ 1442ab700

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_>
          (ushort param_1,ForElementType<VectorRegister4Double> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetHandle>_> @ 1442ab7d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetHandle>_>
          (ushort param_1,ForElementType<UE::Net::FNetHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetHandle>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442ab8a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (ushort param_1,ForElementType<UE::Net::FNetRefHandle> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442ab970

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<unsigned_int> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<unsigned_int> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x21) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x20;
LAB_1442aba2b:
    uVar6 = uVar8;
    if (_Src == (ForElementType<unsigned_int>)0x0) goto LAB_1442aba7f;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 2);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x21) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x21) goto LAB_1442aba2b;
    iVar5 = iVar1;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 2);
      goto LAB_1442aba7f;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1442aba7f:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>_> @ 1442abab0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_> @ 1442abb90

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_> @ 1442abc70

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>::ResizeAllocation
              (param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442abd50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_> @ 1442abe10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>_> @ 1442abed0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationPrioritization::FPrioritizerBatchHelper::FPerPrioritizerInfo>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_> @ 1442abf90

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationPrioritization::FUpdateDirtyObjectsBatchHelper::FPerPrioritizerInfo>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_> @ 1442ac050

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x80;
  if (0x80 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FReplicationProtocol::FRepIndexToFragmentIndex>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442ac110

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_> @ 1442ac190

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Net::FNetRefHandle,UObject_*>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442ac210

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetRefHandle> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 1442b23c0

bool __thiscall
`UE::Net::Private::ObjectBridgeDebugging::SortByClassName'::__l2::<lambda_1>::operator()
          (void *this,FRootObjectData *param_1,FRootObjectData *param_2)

{
  UClass *pUVar1;
  int iVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  pUVar1 = param_2->Class;
  if ((param_1->Class != pUVar1) && (param_1->Class != (UClass *)0x0)) {
    if (pUVar1 == (UClass *)0x0) {
      return true;
    }
    local_res10[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res10,&local_18);
    local_res10[0] = (FName)param_1->Class->_padding_;
    ::FName::ToString(local_res10,&local_28);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return SUB41((uint)iVar2 >> 0x1f,0);
  }
  return false;
}

// AppendMemberChangeMasks @ 1442b6220

bool __cdecl
UE::Net::Private::AppendMemberChangeMasks
          (FNetBitStreamWriter *param_1,FNetBitStreamWriter *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_4->ChangeMaskBitCount;
  if (uVar1 != 0) {
    uVar3 = (uint)uVar1;
    uVar4 = (uint)uVar1;
    if (uVar3 < 0x21) {
      FNetBitStreamWriter::WriteBits
                (param_1,*(uint *)(param_3 + param_4->ChangeMasksExternalOffset),uVar4);
    }
    else {
      FNetBitStreamWriter::WriteBitStream
                (param_1,(uint *)(param_3 + param_4->ChangeMasksExternalOffset),0,uVar3);
    }
    if (param_2 != (FNetBitStreamWriter *)0x0) {
      if ((param_4->Traits & HasLifetimeConditionals) == None) {
        FNetBitStreamWriter::Seek
                  (param_2,(param_2->BufferBitPosition - param_2->BufferBitStartOffset) + uVar4);
      }
      else if (uVar3 < 0x21) {
        FNetBitStreamWriter::WriteBits
                  (param_2,*(uint *)(param_3 +
                                    (param_4->ChangeMasksExternalOffset +
                                    (param_4->ChangeMaskBitCount + 0x1f >> 5) * 4)),uVar4);
      }
      else {
        FNetBitStreamWriter::WriteBitStream
                  (param_2,(uint *)(param_3 +
                                   (param_4->ChangeMasksExternalOffset +
                                   (param_4->ChangeMaskBitCount + 0x1f >> 5) * 4)),0,uVar3);
      }
    }
  }
  if ((param_4->Traits & IsNativeFastArrayReplicationState) == None) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)param_4->ChangeMasksExternalOffset - 4;
  }
  return SUB41((uint)*(undefined4 *)(param_3 + lVar2) >> 0x1f,0);
}

// FillRootObjectArrayFromBitArray @ 1442bfe80

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::FillRootObjectArrayFromBitArray
          (TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
           *param_1,FNetBitArrayView *param_2,FNetRefHandleManager *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FNetRefHandle FVar7;
  UObject *pUVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  undefined4 uStack_54;
  undefined8 uStack_40;
  
  uVar2 = param_2->WordCount;
  uVar3 = param_2->BitCount;
  puVar12 = param_2->Storage;
  uVar13 = 0;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar9 = 0xffffffff;
      if (uVar10 == uVar2 - 1) {
        uVar9 = 0xffffffff >> (-(char)uVar3 & 0x1fU);
      }
      uVar11 = uVar13;
      for (uVar9 = uVar9 & *puVar12; uVar9 != 0; uVar9 = uVar9 >> 1) {
        if ((uVar9 & 1) != 0) {
          FVar7 = FNetRefHandleManager::GetNetRefHandleFromInternalIndex(param_3,(uint)local_res10);
          uVar4 = *(undefined8 *)FVar7.field0_0x0;
          pUVar8 = FNetRefHandleManager::GetReplicatedObjectInstance(param_3,uVar11);
          if (pUVar8 == (UObject *)0x0) {
            uStack_40 = 0;
          }
          else {
            uStack_40 = *(undefined8 *)&pUVar8->field_0x10;
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar6 + 1;
          pFVar5 = (param_1->AllocatorInstance).Data;
          pFVar1 = pFVar5 + (longlong)iVar6 * 0x20;
          *(ulonglong *)pFVar1 = CONCAT44(uStack_54,uVar11);
          *(undefined8 *)(pFVar1 + 8) = uVar4;
          pFVar5 = pFVar5 + (longlong)iVar6 * 0x20 + 0x10;
          *(UObject **)pFVar5 = pUVar8;
          *(undefined8 *)(pFVar5 + 8) = uStack_40;
        }
        uVar11 = uVar11 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar12 = puVar12 + 1;
      uVar13 = uVar13 + 0x20;
    } while (uVar10 < uVar2);
  }
  return;
}

// FindDynamicFilterPrintTraitsFromArgs @ 1442c0590

EDynamicFilterPrintTraits __cdecl
UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  EDynamicFilterPrintTraits EVar3;
  EDynamicFilterPrintTraits EVar4;
  undefined1 local_res10;
  
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l3::<lambda_1>_>
                     (param_1,local_res10);
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l6::<lambda_2>_>
                     (param_1,(<lambda_2>)local_res10);
  EVar3 = pFVar1 != (FString *)0x0 | IssueDetection;
  if (pFVar2 == (FString *)0x0) {
    EVar3 = (uint)(pFVar1 != (FString *)0x0);
  }
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l9::<lambda_3>_>
                     (param_1,(<lambda_3>)local_res10);
  EVar4 = EVar3 | SkipBPIssueDetection;
  if (pFVar1 == (FString *)0x0) {
    EVar4 = EVar3;
  }
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindDynamicFilterPrintTraitsFromArgs_::__l12::<lambda_4>_>
                     (param_1,(<lambda_4>)local_res10);
  EVar3 = EVar4 | SkipActorChildIssueDetection;
  if (pFVar1 == (FString *)0x0) {
    EVar3 = EVar4;
  }
  return EVar3;
}

// FindNetRefHandlesFromArg @ 1442c0870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> * __cdecl
UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg
          (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UReplicationSystem *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
  *pTVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  UObjectBaseUtility *this;
  undefined8 uVar6;
  code *pcVar7;
  FUObjectItem *pFVar8;
  TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FReplicationSystemInternal *pFVar14;
  FString *pFVar15;
  TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  size_t sVar18;
  UClass *pUVar19;
  FUObjectItem *pFVar20;
  UClass *pUVar21;
  UObjectReplicationBridge *this_00;
  wchar_t *pwVar22;
  undefined1 *puVar23;
  int *piVar24;
  UObjectBase *pUVar25;
  uint uVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  uint *puVar31;
  <lambda_1> local_res8 [8];
  UReplicationSystem *local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  ForAnyElementType local_160;
  undefined8 local_158;
  TIterator local_150;
  undefined8 uStack_138;
  EObjectFlags local_130;
  EInternalObjectFlags EStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  FString local_100;
  FReplicationSystemInternal *local_f0;
  undefined1 local_e8 [8];
  FString local_e0;
  int local_d0;
  int local_cc;
  FName local_c8;
  undefined8 local_c0;
  FString local_b8;
  TMap<UE::Net::FNetRefHandle,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,unsigned_int,0>_>
  *local_a8;
  undefined1 auStack_a0 [20];
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  FString local_78 [2];
  EInternalObjectFlags local_4c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar14 = UReplicationSystem::GetReplicationSystemInternal(param_1);
  local_f0 = pFVar14;
  pFVar15 = TArray<FString,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l3::<lambda_1>_>
                      (local_res18,local_res8[0]);
  if (pFVar15 != (FString *)0x0) {
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar22,L"FindByClass=",&local_110,true,(wchar_t **)0x0);
    pTVar2 = &(pFVar14->NetRefHandleManager).RefHandleToInternalIndex;
    local_150.Index = 0;
    iVar13 = *(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x28;
    puVar1 = &(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x10;
    local_130 = RF_NoFlags;
    local_150._12_4_ = 1;
    iVar11 = 0;
    if (iVar13 != 0) {
      puVar31 = *(uint **)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x20;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)puVar1;
      }
      uVar27 = *puVar31;
      while (uVar27 == 0) {
        local_150.Index = local_150.Index + 1;
        local_130 = local_130 + RF_ArchetypeObject;
        iVar11 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_150.Index)
        goto LAB_1442c098c;
        uVar27 = puVar31[local_150.Index];
      }
      local_150._12_4_ = ~(uVar27 - 1) & uVar27;
      uVar30 = (ulonglong)(uint)local_150._12_4_ * 2 + 1;
      lVar17 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_d0 = (int)lVar17;
      iVar11 = local_d0 + -1 + local_130;
      if (iVar13 < iVar11) {
        iVar11 = iVar13;
      }
    }
LAB_1442c098c:
    uVar27 = *(uint *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x28;
    EStack_12c = local_4c;
    uVar26 = uVar27 & 0xffffffe0;
    iStack_128 = *(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x8 -
                 *(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x34;
    uStack_138 = (UClass *)CONCAT44(iVar11,0xffffffff);
    auStack_a0._0_8_ = CONCAT44(local_150._12_4_,local_150.Index);
    iVar11 = (int)uVar27 >> 5;
    local_88._4_4_ = local_4c;
    local_88._0_4_ = local_130;
    uStack_80 = CONCAT44(uStack_124,iStack_128);
    stack0xffffffffffffff70 = uStack_138;
    local_150.Array = (FUObjectArray *)pTVar2;
    local_150.CurrentObject = (FUObjectItem *)puVar1;
    local_a8 = pTVar2;
    auStack_a0._8_8_ = puVar1;
    if ((((int)uVar27 < 0) || (iVar13 < (int)uVar27)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar16;
    }
    uVar12 = *(uint *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x28;
    if (uVar27 != uVar12) {
      puVar3 = *(undefined1 **)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x20;
      puVar23 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar23 = puVar3;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar11 * 4);
      while (uVar27 == 0) {
        iVar11 = iVar11 + 1;
        uVar26 = uVar26 + 0x20;
        uVar27 = uVar12;
        if ((int)(((int)(uVar12 - 1) >> 0x1f & 0x1fU) + (uVar12 - 1)) >> 5 < iVar11)
        goto LAB_1442c0a8f;
        uVar27 = *(uint *)(puVar23 + (longlong)iVar11 * 4);
      }
      uVar30 = (ulonglong)(~(uVar27 - 1) & uVar27) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_cc = (int)lVar17;
      uVar27 = local_cc + -1 + uVar26;
      if ((int)uVar12 < (int)uVar27) {
        uVar27 = uVar12;
      }
    }
LAB_1442c0a8f:
    while( true ) {
      pTVar9 = local_a8;
      if (*(int *)&local_a8->field_0x8 - *(int *)(&local_a8->field_0x30 + 4) != (int)uStack_80) {
        local_res8[0] = (<lambda_1>)0x0;
        `TSparseArray<TSparseSetElement<TTuple<UE::Net::FNetRefHandle,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar17 = (longlong)(int)uStack_8c;
      if (((uStack_8c == uVar27) && ((undefined1 *)auStack_a0._8_8_ == puVar1)) &&
         (pTVar9 == pTVar2)) break;
      lVar4 = *(longlong *)pTVar9;
      uVar30 = *(ulonglong *)(lVar4 + lVar17 * 0x18) & 0x3fffffffffffff;
      if (*(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x8 !=
          *(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x40
        ;
        puVar23 = &(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar23 = puVar3;
        }
        iVar13 = *(int *)(puVar23 +
                         ((ulonglong)
                          (*(int *)&(pFVar14->NetRefHandleManager).RefHandleToInternalIndex.
                                    field_0x48 - 1) & (uVar30 >> 0x20) * 0x17 + uVar30) * 4);
        if (iVar13 != -1) {
          lVar5 = *(longlong *)pTVar2;
          do {
            if ((*(ulonglong *)(lVar5 + (longlong)iVar13 * 0x18) & 0x3fffffffffffff) == uVar30) {
              if (((iVar13 != -1) && (lVar5 = lVar5 + (longlong)iVar13 * 0x18, lVar5 != 0)) &&
                 (piVar24 = (int *)(lVar5 + 8), piVar24 != (int *)0x0)) {
                iVar13 = *piVar24;
                goto LAB_1442c0b54;
              }
              break;
            }
            iVar13 = *(int *)(lVar5 + 0x10 + (longlong)iVar13 * 0x18);
          } while (iVar13 != -1);
        }
      }
      iVar13 = 0;
LAB_1442c0b54:
      uVar26 = iVar13 / 100;
      uVar12 = 0;
      if ((int)uVar26 < (int)(local_f0->NetRefHandleManager).ReplicatedInstances._padding_) {
        uVar12 = ~uVar26 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar16 = (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar16;
      }
      lVar5 = *(longlong *)
               (*(longlong *)
                 ((local_f0->NetRefHandleManager).ReplicatedInstances._padding_ +
                 (longlong)(int)uVar26 * 8) + (longlong)(iVar13 % 100) * 8);
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
        for (this = *(UObjectBaseUtility **)(lVar5 + 0x10); this != (UObjectBaseUtility *)0x0;
            this = *(UObjectBaseUtility **)&this[1].field_0x18) {
          UObjectBaseUtility::GetPathName(this,&local_b8,(UObject *)0x0);
          if (local_110.Data.ArrayNum == 0) {
            FVar28.Data = (FScriptContainerElement *)L"";
LAB_1442c0c56:
            sVar18 = wcslen((wchar_t *)FVar28.Data);
            iVar13 = ::FString::Find(&local_b8,(wchar_t *)FVar28.Data,(int)sVar18,IgnoreCase,
                                     FromStart,-1);
            if (iVar13 != -1) {
              iVar13 = __return_storage_ptr__->ArrayNum;
              if (iVar13 == __return_storage_ptr__->ArrayMax) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&__return_storage_ptr__->AllocatorInstance,
                                    &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar13 + 1;
              *(undefined8 *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 8) =
                   *(undefined8 *)(lVar4 + lVar17 * 0x18);
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              break;
            }
          }
          else {
            FVar28.Data = local_110.Data.AllocatorInstance.Data;
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_1442c0c56;
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
      }
      stack0xffffffffffffff70 = (UClass *)CONCAT44(uStack_8c,auStack_a0._16_4_ & ~auStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
    }
    param_1 = local_res10;
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
      param_1 = local_res10;
    }
  }
  piVar24 = &__return_storage_ptr__->ArrayMax;
  pFVar15 = TArray<FString,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l18::<lambda_2>_>
                      (local_res18,(<lambda_2>)local_res8[0]);
  if (pFVar15 != (FString *)0x0) {
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar22,L"FindByName=",&local_100,true,(wchar_t **)0x0);
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    pUVar19 = Z_Construct_UClass_UObject_NoRegister();
    local_150.Index = -1;
    local_150.CurrentObject = (FUObjectItem *)0x0;
    local_150.Array = &GUObjectArray;
    FUObjectArray::TIterator::Advance(&local_150);
    local_130 = RF_NoFlags;
    uStack_138 = pUVar19;
    EStack_12c = GetAsyncLoadingInternalFlagsExclusion();
    EStack_12c = EStack_12c | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar19 == (UClass *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Class",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                            ,0x70,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar16 = (TArray<UE::Net::FNetRefHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar16;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_150.Array)->ObjObjectsCritical);
    do {
      pFVar8 = local_150.CurrentObject;
      pUVar25 = (UObjectBase *)0x0;
      if (local_150.CurrentObject != (FUObjectItem *)0x0) {
        pUVar25 = ((local_150.CurrentObject)->field1_0x8).Object;
      }
      if (((local_130 & pUVar25->ObjectFlags) == RF_NoFlags) &&
         (pFVar20 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar25->InternalIndex),
         (EStack_12c &
         (EInternalObjectFlags)((ulonglong)(pFVar20->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar21 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar19 == pUVar21) break;
        pUVar21 = (pUVar25->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar13 = (int)pUVar19->_padding_;
        if ((iVar13 <= (int)pUVar21->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar13 * 8) ==
            &pUVar19->_padding_)) break;
      }
      bVar10 = FUObjectArray::TIterator::Advance(&local_150);
      pUVar19 = uStack_138;
      pFVar8 = local_150.CurrentObject;
    } while (bVar10);
joined_r0x0001442c0e70:
    if (pFVar8 != (FUObjectItem *)0x0) {
      pUVar25 = (pFVar8->field1_0x8).Object;
      if (((pUVar25 != (UObjectBase *)0x0) && ((pUVar25->ObjectFlags >> 0x1e & 1) == 0)) &&
         ((pUVar25->ObjectFlags & (RF_ArchetypeObject|RF_ClassDefaultObject)) == RF_NoFlags)) {
        local_c8 = (pUVar25->NamePrivate).Name;
        ::FName::ToString(&local_c8,local_78);
        if (local_100.Data.ArrayNum == 0) {
          FVar28.Data = (FScriptContainerElement *)L"";
LAB_1442c0ec9:
          sVar18 = wcslen((wchar_t *)FVar28.Data);
          iVar13 = ::FString::Find(local_78,(wchar_t *)FVar28.Data,(int)sVar18,IgnoreCase,FromStart,
                                   -1);
          if (iVar13 != -1) {
            iVar13 = (int)local_158;
            if ((int)local_158 == local_158._4_4_) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_160,(int *)((longlong)&local_158 + 4));
            }
            local_158 = CONCAT44(local_158._4_4_,iVar13 + 1);
            *(UObjectBase **)(local_160.Data + (longlong)iVar13 * 8) = pUVar25;
          }
        }
        else {
          FVar28.Data = local_100.Data.AllocatorInstance.Data;
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1442c0ec9;
        }
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
      }
LAB_1442c0f40:
      do {
        do {
          bVar10 = FUObjectArray::TIterator::Advance(&local_150);
          pFVar8 = local_150.CurrentObject;
          if (!bVar10) goto joined_r0x0001442c0e70;
          pUVar25 = (UObjectBase *)0x0;
          if (local_150.CurrentObject != (FUObjectItem *)0x0) {
            pUVar25 = ((local_150.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_130 & pUVar25->ObjectFlags) != RF_NoFlags);
        pUVar19 = Z_Construct_UClass_UObject_NoRegister();
        if (uStack_138 != pUVar19) {
          pUVar19 = (pUVar25->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar13 = (int)uStack_138->_padding_;
          if (((int)pUVar19->_padding_ < iVar13) ||
             ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar13 * 8) !=
              &uStack_138->_padding_)) goto LAB_1442c0f40;
        }
        pFVar20 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar25->InternalIndex);
      } while ((EStack_12c &
               (EInternalObjectFlags)((ulonglong)(pFVar20->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x0001442c0e70;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_150.Array)->ObjObjectsCritical);
    iVar13 = (int)local_158;
    uVar30 = (ulonglong)(int)local_158;
    pFVar29 = local_160.Data + uVar30 * 8;
    FVar28.Data = local_160.Data;
    while( true ) {
      if ((int)uVar30 != iVar13) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar28.Data == pFVar29) break;
      uVar6 = *(undefined8 *)FVar28.Data;
      this_00 = UReplicationSystem::GetReplicationBridge(param_1);
      UObjectReplicationBridge::GetReplicatedRefHandle
                (this_00,(UObject *)local_e8,(EGetRefHandleFlags)uVar6);
      if (local_e8 != (undefined1  [8])0x0) {
        iVar11 = __return_storage_ptr__->ArrayNum;
        if (iVar11 == *piVar24) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&__return_storage_ptr__->AllocatorInstance,piVar24);
        }
        __return_storage_ptr__->ArrayNum = iVar11 + 1;
        *(undefined1 (*) [8])
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_e8;
      }
      uVar30 = local_158 & 0xffffffff;
      FVar28.Data = FVar28.Data + 8;
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  pFVar15 = TArray<FString,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindNetRefHandlesFromArg_::__l38::<lambda_3>_>
                      (local_res18,(<lambda_3>)local_res8[0]);
  if (pFVar15 != (FString *)0x0) {
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar22,L"FindById=",&local_e0,false,(wchar_t **)0x0);
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_e0,&local_120,L",",true);
    iVar13 = local_120.ArrayNum;
    pFVar29 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 0x10;
    FVar28.Data = local_120.AllocatorInstance.Data;
    while( true ) {
      if (local_120.ArrayNum != iVar13) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_168);
      }
      if (FVar28.Data == pFVar29) break;
      ::FString::TrimStartAndEndInline((FString *)FVar28.Data);
      if (*(int *)(FVar28.Data + 8) == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)FVar28.Data;
      }
      lVar17 = _wtoi64(pwVar22);
      FNetRefHandleManager::MakeNetRefHandle((ulong64)&local_c0,(uint)lVar17);
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == *piVar24) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar24);
      }
      FVar28.Data = FVar28.Data + 0x10;
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) =
           local_c0;
    }
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindPrintTraitsFromArgs @ 1442c1590

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

EPrintTraits __cdecl
UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  EPrintTraits EVar3;
  undefined1 local_res10;
  
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l3::<lambda_1>_>
                     (param_1,local_res10);
  pFVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l6::<lambda_2>_>
                     (param_1,(<lambda_2>)local_res10);
  EVar3 = (EPrintTraits)(pFVar1 != (FString *)0x0);
  if (pFVar2 != (FString *)0x0) {
    return EVar3 | SortByClass;
  }
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindPrintTraitsFromArgs_::__l10::<lambda_3>_>
                     (param_1,(<lambda_3>)local_res10);
  if (pFVar1 != (FString *)0x0) {
    EVar3 = EVar3 | SortByNetRefHandle;
  }
  return EVar3;
}

// FindReplicationSystemFromArg @ 1442c1600

UReplicationSystem * __cdecl
UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  UReplicationSystem *pUVar2;
  wchar_t *pwVar3;
  uint local_res10 [6];
  
  local_res10[0] = 0;
  pFVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::Net::Private::ObjectBridgeDebugging::FindReplicationSystemFromArg_::__l3::<lambda_1>_>
                     (param_1,(<lambda_1>)0x0);
  if (pFVar1 != (FString *)0x0) {
    if ((pFVar1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    FParse::Value(pwVar3,L"RepSystemId=",local_res10);
  }
  pUVar2 = GetReplicationSystem(local_res10[0]);
  return pUVar2;
}

// LogRootObjectList @ 1442c7a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::LogRootObjectList(FLogContext *param_1,bool param_2)

{
  longlong lVar1;
  uint uVar2;
  TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FNetRefHandleManager *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint local_res8 [2];
  char local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  void *local_90 [2];
  void *local_80 [2];
  FString local_70;
  FString local_60 [2];
  
  bVar10 = false;
  bVar9 = false;
  local_res8[0] = 0;
  pTVar3 = param_1->RootObjectArray;
  pFVar4 = param_1->NetRefHandleManager;
  uVar2 = pTVar3->ArrayNum;
  uVar14 = (ulonglong)(int)uVar2;
  pFVar21 = (pTVar3->AllocatorInstance).Data;
  pFVar19 = pFVar21 + uVar14 * 0x20;
  local_res10 = param_2;
  do {
    puVar18 = (uint *)0x0;
    if (pTVar3->ArrayNum != (int)uVar14) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar21 == pFVar19) {
      return;
    }
    if (3 < (byte)LogIris._0_1_) {
      if (*(void **)&param_1->OptionalObjectPrint != (void *)0x0) {
        local_res18[0] = *(uint *)pFVar21;
        bVar9 = true;
        Core::Private::Function::CheckCallable(*(void **)&param_1->OptionalObjectPrint);
        plVar5 = *(longlong **)&(param_1->OptionalObjectPrint).field_0x28;
        pcVar6 = *(code **)&param_1->OptionalObjectPrint;
        plVar15 = (longlong *)&(param_1->OptionalObjectPrint).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar15 = plVar5;
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        (*pcVar6)(local_90,uVar13,local_res18);
      }
      PrintNetObject(&local_70,pFVar4,*(uint *)pFVar21);
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if ((bVar9) && (bVar9 = false, local_90[0] != (void *)0x0)) {
        FMemory::Free(local_90[0]);
      }
    }
    param_1->NumRootObjects = param_1->NumRootObjects + 1;
    if (param_2 != false) {
      if (*(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x8 !=
          *(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x34) {
        puVar7 = *(undefined1 **)&(pFVar4->SubObjects).DependencyInfos.field_0x40;
        puVar17 = &(pFVar4->SubObjects).DependencyInfos.field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar17 = puVar7;
        }
        iVar12 = *(int *)(puVar17 +
                         (ulonglong)
                         (*(int *)&(pFVar4->SubObjects).DependencyInfos.field_0x48 - 1U &
                         *(uint *)pFVar21) * 4);
        if (iVar12 != -1) {
          lVar8 = *(longlong *)&(pFVar4->SubObjects).DependencyInfos;
          do {
            lVar1 = lVar8 + (longlong)iVar12 * 0x28;
            if (*(uint *)(lVar8 + (longlong)iVar12 * 0x28) == *(uint *)pFVar21) {
              puVar16 = (uint *)(lVar1 + 4);
              if (lVar1 == 0) {
                puVar16 = puVar18;
              }
              if ((puVar16 != (uint *)0x0) && (*puVar16 != 0xffffffff)) {
                puVar18 = (uint *)((longlong)(int)*puVar16 * 0x30 +
                                  *(longlong *)&(pFVar4->SubObjects).DependentObjectsStorage);
                uVar20 = puVar18[10];
                if (*(uint **)(puVar18 + 8) != (uint *)0x0) {
                  puVar18 = *(uint **)(puVar18 + 8);
                }
                if (((int)uVar20 < 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                goto LAB_1442c7c12;
              }
              break;
            }
            iVar12 = *(int *)(lVar1 + 0x20);
          } while (iVar12 != -1);
        }
      }
      uVar20 = 0;
LAB_1442c7c12:
      puVar16 = puVar18 + (int)uVar20;
      param_2 = (bool)local_res10;
      for (; local_res10 = param_2, puVar18 != puVar16; puVar18 = puVar18 + 1) {
        uVar20 = *puVar18;
        if (3 < (byte)LogIris._0_1_) {
          if (*(void **)&param_1->OptionalObjectPrint != (void *)0x0) {
            bVar10 = true;
            local_res20[0] = uVar20;
            Core::Private::Function::CheckCallable(*(void **)&param_1->OptionalObjectPrint);
            plVar5 = *(longlong **)&(param_1->OptionalObjectPrint).field_0x28;
            pcVar6 = *(code **)&param_1->OptionalObjectPrint;
            plVar15 = (longlong *)&(param_1->OptionalObjectPrint).field_0x10;
            if (plVar5 != (longlong *)0x0) {
              plVar15 = plVar5;
            }
            uVar13 = (**(code **)(*plVar15 + 8))();
            (*pcVar6)(local_80,uVar13,local_res20);
          }
          PrintNetObject(local_60,pFVar4,uVar20);
          Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
          if ((bVar10) && (bVar10 = false, local_80[0] != (void *)0x0)) {
            FMemory::Free(local_80[0]);
          }
        }
        param_1->NumSubObjects = param_1->NumSubObjects + 1;
        param_2 = (bool)local_res10;
      }
    }
    pFVar21 = pFVar21 + 0x20;
    uVar14 = (ulonglong)uVar2;
  } while( true );
}

// LogViaTrait @ 1442c7dd0

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::LogViaTrait
          (FLogContext *param_1,EPrintTraits param_2,EPrintTraits param_3)

{
  byte bVar1;
  
  bVar1 = (byte)(param_2 & LogSubObjects);
  if ((param_2 & LogSubObjects) == Default) {
    bVar1 = (byte)param_3;
  }
  LogRootObjectList(param_1,(bool)(bVar1 & 1));
  return;
}

// OutputDescriptorMemberHashToString @ 1442c8d50

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Net::OutputDescriptorMemberHashToString
          (FNetSerializationContext *param_1,uint *param_2,uint param_3,
          TStringBuilderBase<wchar_t> *param_4,uchar *param_5,FReplicationStateDescriptor *param_6)

{
  ushort uVar1;
  FReplicationStateMemberDebugDescriptor *pFVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  FNetBitStreamWriter *this;
  FReplicationStateDescriptor *pFVar4;
  FName FVar5;
  wchar_t *pwVar6;
  FNetRefHandle_u_0 FVar7;
  wchar_t *pwVar8;
  FNetRefHandle_u_0 FVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  FNetSerializationContext *pFVar14;
  FNetSerializationContext *pFVar15;
  longlong lVar16;
  FNetSerializationContext *pFVar17;
  uint uVar18;
  uint uVar19;
  FReplicationStateMemberSerializerDescriptor *pFVar20;
  FReplicationStateMemberDebugDescriptor *pFVar21;
  FNetSerializeArgs local_3e0;
  FNetSerializationContext local_3b8;
  
  uVar18 = 0;
  pFVar2 = param_6->MemberDebugDescriptors;
  pFVar3 = param_6->MemberDescriptors;
  pFVar20 = param_6->MemberSerializerDescriptors;
  uVar1 = param_6->MemberCount;
  this = param_1->BitStreamWriter;
  uVar19 = param_3;
  pFVar21 = pFVar2;
  if (uVar1 != 0) {
    do {
      for (; uVar19 != 0; uVar19 = uVar19 - 1) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_4,L"    ",4);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_4,L"Member: %u ");
      if (pFVar20->Serializer == &FStructNetSerializerNetSerializerInfo::Serializer) {
        pFVar4 = (FReplicationStateDescriptor *)pFVar20->SerializerConfig[1]._padding_;
        TStringBuilderBase<wchar_t>::AppendfImpl(param_4,L"%s\n");
        lVar16 = 6;
        pFVar14 = &local_3b8;
        do {
          pFVar17 = param_1;
          pFVar15 = pFVar14;
          FVar5 = (pFVar17->ErrorContext).Error;
          pwVar6 = (pFVar17->ReadJournal).Entries[0].Name;
          FVar7 = (pFVar17->ReadJournal).Entries[0].NetRefHandle.field0_0x0;
          (pFVar15->ErrorContext).ObjectHandle.field0_0x0 =
               (pFVar17->ErrorContext).ObjectHandle.field0_0x0;
          (pFVar15->ErrorContext).Error = FVar5;
          uVar19 = (pFVar17->ReadJournal).Entries[0].BitOffset;
          uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[0].field_0x14;
          pwVar8 = (pFVar17->ReadJournal).Entries[1].Name;
          (pFVar15->ReadJournal).Entries[0].Name = pwVar6;
          (pFVar15->ReadJournal).Entries[0].NetRefHandle.field0_0x0 = FVar7;
          FVar7 = (pFVar17->ReadJournal).Entries[1].NetRefHandle.field0_0x0;
          uVar18 = (pFVar17->ReadJournal).Entries[1].BitOffset;
          uVar11 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[1].field_0x14;
          (pFVar15->ReadJournal).Entries[0].BitOffset = uVar19;
          *(undefined4 *)&(pFVar15->ReadJournal).Entries[0].field_0x14 = uVar10;
          (pFVar15->ReadJournal).Entries[1].Name = pwVar8;
          pwVar6 = (pFVar17->ReadJournal).Entries[2].Name;
          FVar9 = (pFVar17->ReadJournal).Entries[2].NetRefHandle.field0_0x0;
          (pFVar15->ReadJournal).Entries[1].NetRefHandle.field0_0x0 = FVar7;
          (pFVar15->ReadJournal).Entries[1].BitOffset = uVar18;
          *(undefined4 *)&(pFVar15->ReadJournal).Entries[1].field_0x14 = uVar11;
          uVar19 = (pFVar17->ReadJournal).Entries[2].BitOffset;
          uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[2].field_0x14;
          pwVar8 = (pFVar17->ReadJournal).Entries[3].Name;
          (pFVar15->ReadJournal).Entries[2].Name = pwVar6;
          (pFVar15->ReadJournal).Entries[2].NetRefHandle.field0_0x0 = FVar9;
          FVar7 = (pFVar17->ReadJournal).Entries[3].NetRefHandle.field0_0x0;
          uVar18 = (pFVar17->ReadJournal).Entries[3].BitOffset;
          uVar11 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[3].field_0x14;
          (pFVar15->ReadJournal).Entries[2].BitOffset = uVar19;
          *(undefined4 *)&(pFVar15->ReadJournal).Entries[2].field_0x14 = uVar10;
          (pFVar15->ReadJournal).Entries[3].Name = pwVar8;
          pwVar6 = (pFVar17->ReadJournal).Entries[4].Name;
          FVar9 = (pFVar17->ReadJournal).Entries[4].NetRefHandle.field0_0x0;
          (pFVar15->ReadJournal).Entries[3].NetRefHandle.field0_0x0 = FVar7;
          (pFVar15->ReadJournal).Entries[3].BitOffset = uVar18;
          *(undefined4 *)&(pFVar15->ReadJournal).Entries[3].field_0x14 = uVar11;
          (pFVar15->ReadJournal).Entries[4].Name = pwVar6;
          (pFVar15->ReadJournal).Entries[4].NetRefHandle.field0_0x0 = FVar9;
          lVar16 = lVar16 + -1;
          pFVar14 = (FNetSerializationContext *)&(pFVar15->ReadJournal).Entries[4].BitOffset;
          param_1 = (FNetSerializationContext *)&(pFVar17->ReadJournal).Entries[4].BitOffset;
        } while (lVar16 != 0);
        uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[4].field_0x14;
        pwVar6 = (pFVar17->ReadJournal).Entries[5].Name;
        uVar12 = (pFVar17->ReadJournal).Entries[8].BitOffset;
        uVar13 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[8].field_0x14;
        FVar7 = (pFVar17->ReadJournal).Entries[5].NetRefHandle.field0_0x0;
        uVar19 = (pFVar17->ReadJournal).Entries[5].BitOffset;
        uVar11 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[5].field_0x14;
        (pFVar15->ReadJournal).Entries[4].BitOffset = (pFVar17->ReadJournal).Entries[4].BitOffset;
        *(undefined4 *)&(pFVar15->ReadJournal).Entries[4].field_0x14 = uVar10;
        (pFVar15->ReadJournal).Entries[5].Name = pwVar6;
        pwVar6 = (pFVar17->ReadJournal).Entries[6].Name;
        FVar9 = (pFVar17->ReadJournal).Entries[6].NetRefHandle.field0_0x0;
        (pFVar15->ReadJournal).Entries[5].NetRefHandle.field0_0x0 = FVar7;
        (pFVar15->ReadJournal).Entries[5].BitOffset = uVar19;
        *(undefined4 *)&(pFVar15->ReadJournal).Entries[5].field_0x14 = uVar11;
        uVar19 = (pFVar17->ReadJournal).Entries[6].BitOffset;
        uVar10 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[6].field_0x14;
        pwVar8 = (pFVar17->ReadJournal).Entries[7].Name;
        (pFVar15->ReadJournal).Entries[6].Name = pwVar6;
        (pFVar15->ReadJournal).Entries[6].NetRefHandle.field0_0x0 = FVar9;
        FVar7 = (pFVar17->ReadJournal).Entries[7].NetRefHandle.field0_0x0;
        uVar18 = (pFVar17->ReadJournal).Entries[7].BitOffset;
        uVar11 = *(undefined4 *)&(pFVar17->ReadJournal).Entries[7].field_0x14;
        (pFVar15->ReadJournal).Entries[6].BitOffset = uVar19;
        *(undefined4 *)&(pFVar15->ReadJournal).Entries[6].field_0x14 = uVar10;
        (pFVar15->ReadJournal).Entries[7].Name = pwVar8;
        pwVar6 = (pFVar17->ReadJournal).Entries[8].Name;
        FVar9 = (pFVar17->ReadJournal).Entries[8].NetRefHandle.field0_0x0;
        (pFVar15->ReadJournal).Entries[7].NetRefHandle.field0_0x0 = FVar7;
        (pFVar15->ReadJournal).Entries[7].BitOffset = uVar18;
        *(undefined4 *)&(pFVar15->ReadJournal).Entries[7].field_0x14 = uVar11;
        (pFVar15->ReadJournal).Entries[8].Name = pwVar6;
        (pFVar15->ReadJournal).Entries[8].NetRefHandle.field0_0x0 = FVar9;
        (pFVar15->ReadJournal).Entries[8].BitOffset = uVar12;
        *(undefined4 *)&(pFVar15->ReadJournal).Entries[8].field_0x14 = uVar13;
        OutputDescriptorMemberHashToString
                  (&local_3b8,param_2,param_3 + 1,param_4,
                   param_5 + *(uint *)((longlong)pFVar21 + (longlong)pFVar3 + (4 - (longlong)pFVar2)
                                      ),pFVar4);
        return;
      }
      FNetBitStreamWriter::Seek(this,0);
      local_3e0._padding_ = 0;
      local_3e0._padding_._0_4_ = 0;
      local_3e0._padding_ = (longlong)pFVar20->SerializerConfig;
      local_3e0.Source =
           (ulong64)(param_5 +
                    *(uint *)((longlong)pFVar21 + (longlong)pFVar3 + (4 - (longlong)pFVar2)));
      (*pFVar20->Serializer->Serialize)(param_1,&local_3e0);
      uVar19 = -(this->BufferBitPosition - this->BufferBitStartOffset) & 7;
      if (uVar19 != 0) {
        FNetBitStreamWriter::WriteBits(this,0,uVar19);
      }
      FNetBitStreamWriter::CommitWrites(this);
      CityHash64((char *)param_2,(this->BufferBitPosition - this->BufferBitStartOffset) + 7 >> 3);
      TStringBuilderBase<wchar_t>::AppendfImpl(param_4,L"%s Serializer: %s Hash: 0x%llx\n");
      uVar18 = uVar18 + 1;
      pFVar20 = pFVar20 + 1;
      uVar19 = param_3;
      pFVar21 = pFVar21 + 1;
    } while (uVar18 < uVar1);
  }
  return;
}

// PrintDefaultNetObjectState @ 1442cd4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::PrintDefaultNetObjectState
          (UReplicationSystem *param_1,uint param_2,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_3,TStringBuilderBase<wchar_t> *param_4)

{
  FReplicationSystemInternal *pFVar1;
  FNetTokenStore *this;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_438 [32];
  FInternalNetSerializationContext local_418;
  FInitParameters local_3e0;
  FNetRefHandle_u_0 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FInternalNetSerializationContext *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
  pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1);
  local_418._48_4_ = local_418._48_4_ & 0xfffffff8;
  local_418.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
  local_418.ReplicationSystem = (UReplicationSystem *)0x0;
  local_418.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
  local_418.ResolveContext.ConnectionId = 0;
  local_418.ResolveContext.AsyncLoadingPriority = -1;
  local_418.ResolveContext.bForceSyncLoad = false;
  local_418.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
  local_3e0.ObjectResolveContext.AsyncLoadingPriority = -1;
  local_3e0.ObjectResolveContext.bForceSyncLoad = false;
  local_3e0.PackageMap = pFVar1->IrisObjectReferencePackageMap;
  local_3e0.ReplicationSystem = param_1;
  this = UReplicationSystem::GetNetTokenStore(param_1);
  local_3e0.ObjectResolveContext.RemoteNetTokenStoreState =
       FNetTokenStore::GetRemoteNetTokenStoreState(this,param_2);
  local_3e0.ObjectResolveContext.ConnectionId = param_2;
  FInternalNetSerializationContext::Init(&local_418,&local_3e0);
  lVar3 = 0x20;
  local_3b8.Value = 0;
  puVar2 = local_3a0;
  local_3b0 = 0;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_58 = local_58 & 0xfffffffc;
  local_88 = &local_418;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_68 = 0;
  local_5c = 0xffffffff;
  local_60 = param_2;
  FReplicationInstanceOperations::OutputInternalDefaultStateToString
            ((FNetSerializationContext *)&local_3b8._s_0,param_4,param_3);
  FReplicationInstanceOperations::OutputInternalDefaultStateMemberHashesToString
            (param_1,param_4,param_3);
  return;
}

// PrintNetObject @ 1442cfd70

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FString * __cdecl
UE::Net::Private::ObjectBridgeDebugging::PrintNetObject
          (FString *__return_storage_ptr__,FNetRefHandleManager *param_1,uint param_2)

{
  UObject *pUVar1;
  FNetRefHandle local_res8;
  FName local_res20;
  FString local_48;
  FString local_38;
  
  FNetRefHandleManager::GetNetRefHandleFromInternalIndex(param_1,(uint)&local_res8);
  FNetRefHandleManager::GetReplicatedObjectDataNoCheck(param_1,param_2);
  pUVar1 = FNetRefHandleManager::GetReplicatedObjectInstance(param_1,param_2);
  FNetRefHandle::ToString(&local_res8,&local_38);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(&local_48,L"None");
  }
  else {
    local_res20.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res20.Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(&local_res20,&local_48);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s (InternalIndex: %u) (%s)");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// RemoteProtocolMismatchDetected @ 1442dd7d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::RemoteProtocolMismatchDetected
          (TMap<FObjectKey,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,bool,0>_>
           *param_1,UReplicationSystem *param_2,uint param_3,
          TArray<UE::Net::FReplicationFragmentInfo,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_4,UObject *param_5,UObject *param_6)

{
  wchar_t *pwVar1;
  ulonglong uVar2;
  FReplicationSystemInternal *pFVar3;
  FNetTokenStore *this;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_24b8 [32];
  wchar_t *local_2498;
  undefined1 local_2488 [8];
  TPairInitializer<FObjectKey_&&,bool_&&> local_2480;
  FString local_2470;
  FName local_2460;
  undefined1 *local_2458;
  FInternalNetSerializationContext local_2450;
  FInitParameters local_2418;
  FNetRefHandle_u_0 local_23e8;
  undefined8 local_23e0;
  undefined8 local_23d0 [95];
  undefined4 local_20d8;
  undefined8 local_20d0;
  undefined8 local_20c8;
  undefined8 uStack_20c0;
  FInternalNetSerializationContext *local_20b8;
  undefined8 local_20b0;
  undefined8 local_20a8;
  undefined8 uStack_20a0;
  undefined8 local_2098;
  uint local_2090;
  undefined4 local_208c;
  uint local_2088;
  TStringBuilderBase<wchar_t> local_2078;
  wchar_t local_2058 [4096];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_24b8;
  if (1 < (byte)LogIris._0_1_) {
    uVar14 = 0;
    uVar2 = uVar14;
    iVar13 = 0;
    if (param_5 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending) {
        GC::MarkAsReachable(param_5);
      }
      local_2480.Key = (FObjectKey *)0x0;
      local_2470.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_5;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(param_5);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2480,(FObjectPtr)&local_2470);
      uVar2 = (ulonglong)local_2480.Key >> 0x20;
      iVar13 = (int)local_2480.Key;
    }
    iVar12 = (int)uVar2;
    uVar8 = iVar13 - iVar12 ^ (uint)(uVar2 >> 0xd);
    uVar5 = (-0x61c88647 - uVar8) - iVar12 ^ uVar8 << 8;
    uVar10 = (iVar12 - uVar5) - uVar8 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
    uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
    uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
    if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
      puVar9 = *(undefined1 **)&param_1->field_0x40;
      if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
        puVar9 = &param_1->field_0x38;
      }
      iVar11 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&param_1->field_0x48 - 1U &
                                 ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf)) * 4);
      if (iVar11 != -1) {
        do {
          uVar2 = *(longlong *)param_1 + (longlong)iVar11 * 0x14;
          if ((*(int *)(*(longlong *)param_1 + (longlong)iVar11 * 0x14) == iVar13) &&
             (*(int *)(uVar2 + 4) == iVar12)) {
            if (iVar11 != -1) goto LAB_1442dd96c;
            break;
          }
          iVar11 = *(int *)(uVar2 + 0xc);
        } while (iVar11 != -1);
      }
    }
    uVar2 = uVar14;
LAB_1442dd96c:
    uVar6 = uVar2 + 8;
    if (uVar2 == 0) {
      uVar6 = uVar14;
    }
    if (uVar6 == 0) {
      local_2488[0] = 1;
      local_2470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (param_5 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_5);
        }
        local_2480.Key = (FObjectKey *)0x0;
        local_2460 = (FName)param_5;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(param_5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2480,(FObjectPtr)&local_2460);
        local_2470.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_2480.Key;
      }
      local_2460 = (FName)&local_2470;
      local_2458 = local_2488;
      TSet<TTuple<FObjectKey,bool>,TDefaultMapHashableKeyFuncs<FObjectKey,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FObjectKey_&&,bool_&&>_>
                ((TSet<TTuple<FObjectKey,bool>,TDefaultMapHashableKeyFuncs<FObjectKey,bool,0>,FDefaultSetAllocator>
                  *)param_1,&local_2480,(bool *)&local_2460);
      local_2078.Base = local_2058;
      local_2078.bIsDynamic = false;
      local_2078.bIsExternal = false;
      local_2078.CurPos = local_2058;
      local_2078.End = (wchar_t *)local_58;
      pFVar3 = UReplicationSystem::GetReplicationSystemInternal(param_2);
      local_2450._48_4_ = local_2450._48_4_ & 0xfffffff8;
      local_2450.ReplicationSystem = (UReplicationSystem *)0x0;
      local_2450.ObjectReferenceCache = (FObjectReferenceCache *)0x0;
      local_2450.ResolveContext.RemoteNetTokenStoreState = (FNetTokenStoreState *)0x0;
      local_2450.ResolveContext.ConnectionId = 0;
      local_2450.ResolveContext.AsyncLoadingPriority = -1;
      local_2450.ResolveContext.bForceSyncLoad = false;
      local_2450.PackageMap = (UIrisObjectReferencePackageMap *)0x0;
      local_2418.ObjectResolveContext.AsyncLoadingPriority = -1;
      local_2418.ObjectResolveContext.bForceSyncLoad = false;
      local_2418.PackageMap = pFVar3->IrisObjectReferencePackageMap;
      local_2418.ReplicationSystem = param_2;
      this = UReplicationSystem::GetNetTokenStore(param_2);
      local_2418.ObjectResolveContext.RemoteNetTokenStoreState =
           FNetTokenStore::GetRemoteNetTokenStoreState(this,param_3);
      local_2418.ObjectResolveContext.ConnectionId = param_3;
      FInternalNetSerializationContext::Init(&local_2450,&local_2418);
      lVar4 = 0x20;
      local_23e8.Value = 0;
      puVar7 = local_23d0;
      local_23e0 = 0;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      local_2088 = local_2088 & 0xfffffffc;
      local_20b8 = &local_2450;
      local_20c8 = 0;
      uStack_20c0 = 0;
      local_20a8 = 0;
      uStack_20a0 = 0;
      local_20d8 = 0;
      local_20d0 = 0;
      local_20b0 = 0;
      local_2098 = 0;
      local_208c = 0xffffffff;
      local_2090 = param_3;
      FReplicationInstanceOperations::OutputInternalDefaultStateToString
                ((FNetSerializationContext *)&local_23e8._s_0,&local_2078,param_4);
      FReplicationInstanceOperations::OutputInternalDefaultStateMemberHashesToString
                (param_2,&local_2078,param_4);
      if (1 < (byte)LogIris._0_1_) {
        if (local_2078.End < local_2078.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_2078,1);
        }
        pwVar1 = local_2078.Base;
        *local_2078.CurPos = L'\0';
        if (param_6 == (UObject *)0x0) {
          ::FString::FString((FString *)&local_2480,L"None");
        }
        else {
          local_2460.ComparisonIndex.Value = *(uint *)&param_6->field_0x18;
          local_2460.Number = *(uint *)&param_6->field_0x1c;
          ::FName::ToString(&local_2460,(FString *)&local_2480);
        }
        if (param_5 == (UObject *)0x0) {
          ::FString::FString(&local_2470,L"None");
        }
        else {
          local_2460.ComparisonIndex.Value = *(uint *)&param_5->field_0x18;
          local_2460.Number = *(uint *)&param_5->field_0x1c;
          ::FName::ToString(&local_2460,&local_2470);
        }
        local_2498 = pwVar1;
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
        if ((FObjectKey *)local_2470.Data.AllocatorInstance.Data != (FObjectKey *)0x0) {
          FMemory::Free(local_2470.Data.AllocatorInstance.Data);
        }
        if (local_2480.Key != (FObjectKey *)0x0) {
          FMemory::Free(local_2480.Key);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2078);
    }
  }
  return;
}

// ResetLifetimeConditionDebugNames @ 1442e0210

void __cdecl UE::Net::ResetLifetimeConditionDebugNames(void)

{
  FNetDebugName *pFVar1;
  
  pFVar1 = Private::s_LifetimeConditionDebugNames;
  do {
    pFVar1->DebugNameId = 0;
    pFVar1 = pFVar1 + 1;
  } while (pFVar1 != (FNetDebugName *)&bDeltaCompressInitialState);
  return;
}

// SortByClassName @ 1442e5f00

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::SortByClassName
          (TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
            ((FRootObjectData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8,
             (<lambda_1>)local_res8);
  return;
}

// SortByNetRefHandle @ 1442e5f20

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle
          (TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
            ((FRootObjectData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res8,
             (<lambda_1>)local_res8);
  return;
}

// SortViaTrait @ 1442e5f40

/* WARNING: Enum "EPrintTraits": Some values do not have unique names */

void __cdecl
UE::Net::Private::ObjectBridgeDebugging::SortViaTrait
          (TArray<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,TSizedDefaultAllocator<32>_>
           *param_1,EPrintTraits param_2,EPrintTraits param_3)

{
  EPrintTraits EVar1;
  FIdentityFunctor local_res10;
  
  EVar1 = param_2 & SortTraits;
  if ((param_2 & SortTraits) == Default) {
    EVar1 = param_3;
  }
  if (EVar1 != SortByClass) {
    if (EVar1 == SortByNetRefHandle) {
      AlgoImpl::
      IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByNetRefHandle_::__l2::<lambda_1>_>
                ((FRootObjectData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10,
                 (<lambda_1>)local_res10);
      return;
    }
    return;
  }
  AlgoImpl::
  IntroSortInternal<UE::Net::Private::ObjectBridgeDebugging::FRootObjectData,int,FIdentityFunctor,_UE::Net::Private::ObjectBridgeDebugging::SortByClassName_::__l2::<lambda_1>_>
            ((FRootObjectData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,local_res10,
             (<lambda_1>)local_res10);
  return;
}

// Construct<FEnumInt32NetSerializerConfig> @ 1442ed920

void __cdecl UE::CoreUObject::Private::Construct<FEnumInt32NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined ***)param_1 = &___7FEnumInt32NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FEnumInt32NetSerializerConfig> @ 1442ed9d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumInt32NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumInt32NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FEnumInt32NetSerializerConfig> @ 1442eda00

void __cdecl UE::CoreUObject::Private::Destruct<FEnumInt32NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumInt32NetSerializerConfig> @ 1442eda50

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumInt32NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FEnumInt16NetSerializerConfig> @ 1442edb30

void __cdecl UE::CoreUObject::Private::Construct<FEnumInt16NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined ***)param_1 = &___7FEnumInt16NetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnumInt16NetSerializerConfig> @ 1442edb60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumInt16NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumInt16NetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnumInt16NetSerializerConfig> @ 1442edb80

void __cdecl UE::CoreUObject::Private::Destruct<FEnumInt16NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumInt16NetSerializerConfig> @ 1442edb90

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumInt16NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FEnumInt8NetSerializerConfig> @ 1442edc30

void __cdecl UE::CoreUObject::Private::Construct<FEnumInt8NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumInt8NetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnumInt8NetSerializerConfig> @ 1442edc60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumInt8NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumInt8NetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnumInt8NetSerializerConfig> @ 1442edc90

void __cdecl UE::CoreUObject::Private::Destruct<FEnumInt8NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumInt8NetSerializerConfig> @ 1442edca0

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumInt8NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x12) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FInstancedStructNetSerializerConfig> @ 1442edd00

void __cdecl UE::CoreUObject::Private::Construct<FInstancedStructNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FInstancedStructNetSerializerConfig__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x20),4000);
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FInstancedStructNetSerializerConfig> @ 1442edd10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInstancedStructNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FInstancedStructNetSerializerConfig__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x20),4000);
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FInstancedStructNetSerializerConfig> @ 1442edd20

void __cdecl UE::CoreUObject::Private::Destruct<FInstancedStructNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInstancedStructNetSerializerConfig__6B_;
  Net::Private::FInstancedStructDescriptorCache::~FInstancedStructDescriptorCache
            ((FInstancedStructDescriptorCache *)((longlong)param_1 + 0x20));
  DestructItems<TSoftObjectPtr<UScriptStruct>,int>
            (*(TSoftObjectPtr<UScriptStruct> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FNetSerializerConfig::~FNetSerializerConfig(param_1);
  return;
}

// Construct<FDateTimeNetSerializerConfig> @ 1442edd70

void __cdecl UE::CoreUObject::Private::Construct<FDateTimeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDateTimeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FDateTimeNetSerializerConfig> @ 1442edd90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDateTimeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDateTimeNetSerializerConfig__6B_;
  return;
}

// Destruct<FDateTimeNetSerializerConfig> @ 1442eddb0

void __cdecl UE::CoreUObject::Private::Destruct<FDateTimeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FDateTimeNetSerializerConfig> @ 1442eddc0

bool __cdecl
UE::CoreUObject::Private::Copy<FDateTimeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGuidNetSerializerConfig> @ 1442ede30

void __cdecl UE::CoreUObject::Private::Construct<FGuidNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGuidNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FGuidNetSerializerConfig> @ 1442ede50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGuidNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FGuidNetSerializerConfig__6B_;
  return;
}

// Destruct<FGuidNetSerializerConfig> @ 1442ede70

void __cdecl UE::CoreUObject::Private::Destruct<FGuidNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FGuidNetSerializerConfig> @ 1442ede80

bool __cdecl
UE::CoreUObject::Private::Copy<FGuidNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDoubleNetSerializerConfig> @ 1442edff0

void __cdecl UE::CoreUObject::Private::Construct<FDoubleNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDoubleNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FDoubleNetSerializerConfig> @ 1442ee010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDoubleNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FDoubleNetSerializerConfig__6B_;
  return;
}

// Destruct<FDoubleNetSerializerConfig> @ 1442ee030

void __cdecl UE::CoreUObject::Private::Destruct<FDoubleNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FDoubleNetSerializerConfig> @ 1442ee040

bool __cdecl
UE::CoreUObject::Private::Copy<FDoubleNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFloatNetSerializerConfig> @ 1442ee070

void __cdecl UE::CoreUObject::Private::Construct<FFloatNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFloatNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FFloatNetSerializerConfig> @ 1442ee090

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFloatNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFloatNetSerializerConfig__6B_;
  return;
}

// Destruct<FFloatNetSerializerConfig> @ 1442ee0b0

void __cdecl UE::CoreUObject::Private::Destruct<FFloatNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FFloatNetSerializerConfig> @ 1442ee0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FFloatNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnumUint64NetSerializerConfig> @ 1442ee360

void __cdecl UE::CoreUObject::Private::Construct<FEnumUint64NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FEnumUint64NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FEnumUint64NetSerializerConfig> @ 1442ee390

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumUint64NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint64NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FEnumUint64NetSerializerConfig> @ 1442ee3c0

void __cdecl UE::CoreUObject::Private::Destruct<FEnumUint64NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumUint64NetSerializerConfig> @ 1442ee410

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumUint64NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x28) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FEnumUint32NetSerializerConfig> @ 1442ee5a0

void __cdecl UE::CoreUObject::Private::Construct<FEnumUint32NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined ***)param_1 = &___7FEnumUint32NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FEnumUint32NetSerializerConfig> @ 1442ee5d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumUint32NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint32NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FEnumUint32NetSerializerConfig> @ 1442ee640

void __cdecl UE::CoreUObject::Private::Destruct<FEnumUint32NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumUint32NetSerializerConfig> @ 1442ee650

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumUint32NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FEnumUint16NetSerializerConfig> @ 1442ee770

void __cdecl UE::CoreUObject::Private::Construct<FEnumUint16NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined ***)param_1 = &___7FEnumUint16NetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnumUint16NetSerializerConfig> @ 1442ee7a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumUint16NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint16NetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnumUint16NetSerializerConfig> @ 1442ee800

void __cdecl UE::CoreUObject::Private::Destruct<FEnumUint16NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumUint16NetSerializerConfig> @ 1442ee810

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumUint16NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FEnumUint8NetSerializerConfig> @ 1442ee9a0

void __cdecl UE::CoreUObject::Private::Construct<FEnumUint8NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint8NetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FEnumUint8NetSerializerConfig> @ 1442ee9d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumUint8NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumUint8NetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FEnumUint8NetSerializerConfig> @ 1442eea00

void __cdecl UE::CoreUObject::Private::Destruct<FEnumUint8NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumUint8NetSerializerConfig> @ 1442eea10

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumUint8NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x12) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FEnumInt64NetSerializerConfig> @ 1442eeab0

void __cdecl UE::CoreUObject::Private::Construct<FEnumInt64NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FEnumInt64NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FEnumInt64NetSerializerConfig> @ 1442eeae0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEnumInt64NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEnumInt64NetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FEnumInt64NetSerializerConfig> @ 1442eeb10

void __cdecl UE::CoreUObject::Private::Destruct<FEnumInt64NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FEnumInt64NetSerializerConfig> @ 1442eeb70

bool __cdecl
UE::CoreUObject::Private::Copy<FEnumInt64NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x28) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// DeleterFunc<UE::Net::Private::FReplicationSystemImpl> @ 1442ef830

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::Private::FReplicationSystemImpl>(void *param_1)

{
  Net::Private::FReplicationSystemImpl::~FReplicationSystemImpl
            ((FReplicationSystemImpl *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x17a0);
  return;
}

// DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&> @ 1442ef860

FReplicationSystemImpl * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&>
          (FReplicationSystemImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Net::Private::FReplicationWriter,UE::Net::Private::FReplicationWriter_*_&> @ 1442ef880

FReplicationWriter * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Net::Private::FReplicationWriter,UE::Net::Private::FReplicationWriter_*_&>
          (FReplicationWriter **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UReplicationSystem,UReplicationSystem_*_&> @ 1442ef8a0

UReplicationSystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UReplicationSystem,UReplicationSystem_*_&>
          (UReplicationSystem **param_1)

{
  return *param_1;
}

// DeserializeUintDelta<unsigned_char,1> @ 1442ef8c0

void __cdecl
UE::Net::DeserializeUintDelta<unsigned_char,1>
          (FNetBitStreamReader *param_1,uchar *param_2,uchar param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
  if (uVar3 == 0) {
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
    bVar4 = (byte)uVar3;
  }
  else {
    bVar4 = param_4[uVar3 - 1];
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)bVar4);
    bVar4 = (byte)(1 << (bVar4 - 1 & 0x1f));
    bVar4 = (((byte)uVar3 ^ bVar4) - bVar4) + param_3;
  }
  *param_2 = (byte)(0xffffffff >> (0x20 - param_6 & 0x1f)) & bVar4;
  return;
}

// DeserializeUintDelta<unsigned_short,1> @ 1442ef970

void __cdecl
UE::Net::DeserializeUintDelta<unsigned_short,1>
          (FNetBitStreamReader *param_1,ushort *param_2,ushort param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar4 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar3);
  if (uVar4 == 0) {
    uVar4 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
    uVar5 = (ushort)uVar4;
  }
  else {
    bVar2 = param_4[uVar4 - 1];
    uVar4 = FNetBitStreamReader::ReadBits(param_1,(uint)bVar2);
    uVar5 = (ushort)(1 << (bVar2 - 1 & 0x1f));
    uVar5 = (((ushort)uVar4 ^ uVar5) - uVar5) + param_3;
  }
  *param_2 = (ushort)(0xffffffff >> (0x20 - param_6 & 0x1f)) & uVar5;
  return;
}

// GetBitsNeeded<unsigned_int,1> @ 1442f1a90

uint __cdecl UE::Net::GetBitsNeeded<unsigned_int,1>(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// NetDequantizeDefault<unsigned_char> @ 1442f2be0

void __cdecl
UE::Net::NetDequantizeDefault<unsigned_char>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined1 *)param_2->Target = *(undefined1 *)param_2->Source;
  return;
}

// NetDequantizeDefault<unsigned_int> @ 1442f2c00

void __cdecl
UE::Net::NetDequantizeDefault<unsigned_int>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// NetDequantizeDefault<FGuid> @ 1442f2c20

void __cdecl
UE::Net::NetDequantizeDefault<FGuid>(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_2->Target;
  uVar2 = ((undefined8 *)param_2->Source)[1];
  *puVar1 = *(undefined8 *)param_2->Source;
  puVar1[1] = uVar2;
  return;
}

// NetDequantizeDefault<unsigned___int64> @ 1442f2c40

void __cdecl
UE::Net::NetDequantizeDefault<unsigned___int64>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// NetDeserializeDeltaDefault<8,&UE::Net::FDateTimeNetSerializer::Deserialize,0,0> @ 1442f2c60

void __cdecl
UE::Net::NetDeserializeDeltaDefault<8,&UE::Net::FDateTimeNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)param_2->_padding_ = *(undefined8 *)param_2->Prev;
    return;
  }
  this = param_1->BitStreamReader;
  uVar1 = FNetBitStreamReader::ReadBits(this,0x20);
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  *(ulonglong *)param_2->_padding_ = CONCAT44(uVar2,uVar1);
  return;
}

// NetDeserializeDeltaDefault<16,&UE::Net::FGuidNetSerializer::Deserialize,0,0> @ 1442f2cf0

void __cdecl
UE::Net::NetDeserializeDeltaDefault<16,&UE::Net::FGuidNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->_padding_;
    uVar2 = ((undefined8 *)param_2->Prev)[1];
    *puVar1 = *(undefined8 *)param_2->Prev;
    puVar1[1] = uVar2;
    return;
  }
  FGuidNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<&UE::Net::FBitfieldNetSerializer::Deserialize> @ 1442f2d50

void __cdecl
UE::Net::NetDeserializeDeltaDefault<&UE::Net::FBitfieldNetSerializer::Deserialize>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  *(char *)param_2->_padding_ = (char)uVar1;
  return;
}

// NetDeserializeDeltaDefault<&UE::Net::FBoolNetSerializer::Deserialize> @ 1442f2d80

void __cdecl
UE::Net::NetDeserializeDeltaDefault<&UE::Net::FBoolNetSerializer::Deserialize>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  *(char *)param_2->_padding_ = (char)uVar1;
  return;
}

// NetIsEqualDefault<unsigned_int> @ 1442f2db0

bool __cdecl
UE::Net::NetIsEqualDefault<unsigned_int>(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return *(int *)param_2->Source0 == *(int *)param_2->Source1;
}

// NetIsEqualDefault<FGuid> @ 1442f2dd0

bool __cdecl
UE::Net::NetIsEqualDefault<FGuid>(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_2->Source0;
  piVar2 = (int *)param_2->Source1;
  return ((piVar1[3] == piVar2[3] && piVar1[2] == piVar2[2]) && piVar1[1] == piVar2[1]) &&
         *piVar2 == *piVar1;
}

// NetIsEqualDefault<unsigned___int64> @ 1442f2e10

bool __cdecl
UE::Net::NetIsEqualDefault<unsigned___int64>
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
}

// NetQuantizeDefault<unsigned_char> @ 1442f2e30

void __cdecl
UE::Net::NetQuantizeDefault<unsigned_char>
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined1 *)param_2->Target = *(undefined1 *)param_2->Source;
  return;
}

// NetQuantizeDefault<unsigned_int> @ 1442f2e50

void __cdecl
UE::Net::NetQuantizeDefault<unsigned_int>
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// NetQuantizeDefault<FGuid> @ 1442f2e70

void __cdecl
UE::Net::NetQuantizeDefault<FGuid>(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_2->Target;
  uVar2 = ((undefined8 *)param_2->Source)[1];
  *puVar1 = *(undefined8 *)param_2->Source;
  puVar1[1] = uVar2;
  return;
}

// NetQuantizeDefault<unsigned___int64> @ 1442f2e90

void __cdecl
UE::Net::NetQuantizeDefault<unsigned___int64>
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FBitfieldNetSerializer::Serialize> @ 1442f2eb0

void __cdecl
UE::Net::NetSerializeDeltaDefault<&UE::Net::FBitfieldNetSerializer::Serialize>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)*(byte *)param_2->_padding_,1);
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FBoolNetSerializer::Serialize> @ 1442f2ed0

void __cdecl
UE::Net::NetSerializeDeltaDefault<&UE::Net::FBoolNetSerializer::Serialize>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,(uint)(*(char *)param_2->_padding_ != '\0'),1);
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FDateTimeNetSerializer::Serialize,&UE::Net::FDateTimeNetSerializer::IsEqual> @ 1442f2f00

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FDateTimeNetSerializer::Serialize,&UE::Net::FDateTimeNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(longlong *)param_2->_padding_ == *(longlong *)param_2->Prev;
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar2,1);
  if (!bVar2) {
    this = param_1->BitStreamWriter;
    uVar1 = *(undefined8 *)param_2->_padding_;
    FNetBitStreamWriter::WriteBits(this,(uint)uVar1,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)uVar1 >> 0x20),0x20);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FGuidNetSerializer::Serialize,&UE::Net::NetIsEqualDefault<FGuid>_> @ 1442f2f90

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FGuidNetSerializer::Serialize,&UE::Net::NetIsEqualDefault<FGuid>_>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = (int *)param_2->Prev;
  piVar10 = (int *)param_2->_padding_;
  iVar1 = piVar9[3];
  iVar2 = piVar10[3];
  iVar3 = piVar9[2];
  iVar4 = piVar10[2];
  iVar5 = piVar9[1];
  iVar6 = piVar10[1];
  iVar7 = *piVar10;
  iVar8 = *piVar9;
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,
             (uint)(((iVar1 == iVar2 && iVar3 == iVar4) && iVar5 == iVar6) && iVar7 == iVar8),1);
  if (((iVar1 != iVar2 || iVar3 != iVar4) || iVar5 != iVar6) || iVar7 != iVar8) {
    FGuidNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetValidateDefault<void> @ 1442f3020

bool __cdecl
UE::Net::NetValidateDefault<void>(FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_> @ 1442f4700

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_> @ 1442f47a0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetObjectReference>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FNetObjectReference> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Net::FNetObjectReference>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442f4840

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FNetRefHandle> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1442f48e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Net::FNetToken> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442f4980

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    iVar8 = 0x80;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x81) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_> @ 1442f4a50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
          (ushort param_1,ForElementType<UReplicationSystem_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>_> @ 1442f4b20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>_>
          (ushort param_1,
          ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationWriter::FBatchObjectInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_> @ 1442f4bf0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
          (ushort param_1,
          ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442f4cc0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_> @ 1442f4da0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UReplicationSystem_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442f4e80

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1442f4f40

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x80;
  if (0x80 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_> @ 1442f5000

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>_>
          (uint param_1,uint param_2,ForElementType<UReplicationSystem_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UReplicationSystem_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_> @ 1442f50c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FChangeMaskCache::FCachedInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_> @ 1442f5140

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::Private::FReplicationWriter::FObjectRecord>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_> @ 1442f51c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetRefHandle> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetRefHandle>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SerializeUintDeltaImpl<unsigned_int> @ 1442f5240

void __cdecl
UE::Net::Private::SerializeUintDeltaImpl<unsigned_int>
          (FNetBitStreamWriter *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1 << (param_6 - 1 & 0x1f);
  uVar4 = (ulonglong)param_5 * 2 + 1;
  lVar1 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar5 = (0xffffffffU >> (0x20 - param_6 & 0x1f) & param_2 - param_3 ^ uVar5) - uVar5;
  uVar4 = (ulonglong)((int)uVar5 >> 0x1f ^ uVar5) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar6 = (int)lVar2 + 1;
  if (param_4[param_5 - 1] < uVar6) {
    FNetBitStreamWriter::WriteBits(param_1,0,(uint)lVar1);
LAB_1442f531f:
    FNetBitStreamWriter::WriteBits(param_1,param_2,(uint)param_6);
  }
  else {
    uVar3 = 0;
    if (param_5 != 0) {
      do {
        uVar4 = (ulonglong)uVar3;
        uVar3 = uVar3 + 1;
        param_6 = param_4[uVar4];
        if (uVar6 <= param_6 || uVar5 == 0) {
          FNetBitStreamWriter::WriteBits(param_1,uVar3,(uint)lVar1);
          param_2 = uVar5;
          goto LAB_1442f531f;
        }
      } while (uVar3 != param_5);
    }
  }
  return;
}

// SerializeUintDeltaImpl<unsigned___int64> @ 1442f5350

void __cdecl
UE::Net::Private::SerializeUintDeltaImpl<unsigned___int64>
          (FNetBitStreamWriter *param_1,ulong64 param_2,ulong64 param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = 1L << (param_6 - 1 & 0x3f);
  uVar5 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = (uint)param_6;
  uVar7 = (0xffffffffffffffffU >> (0x40 - param_6 & 0x3f) & param_2 - param_3 ^ uVar7) - uVar7;
  uVar5 = (longlong)uVar7 >> 0x3f ^ uVar7;
  lVar3 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar8 = (int)lVar3;
  if (uVar5 == 0) {
    iVar8 = -1;
  }
  if ((uint)param_4[param_5 - 1] < iVar8 + 2U) {
    FNetBitStreamWriter::WriteBits(param_1,0,(uint)lVar2);
    uVar6 = (uint)param_2;
    if (0x20 < param_6) {
      FNetBitStreamWriter::WriteBits(param_1,uVar6,0x20);
      uVar4 = param_6 - 0x20;
      uVar6 = (uint)(param_2 >> 0x20);
    }
LAB_1442f5476:
    FNetBitStreamWriter::WriteBits(param_1,uVar6,uVar4);
  }
  else {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        bVar1 = param_4[uVar5];
        if (iVar8 + 2U <= (uint)bVar1 || uVar7 == 0) {
          FNetBitStreamWriter::WriteBits(param_1,uVar4,(uint)lVar2);
          uVar6 = (uint)uVar7;
          if (bVar1 < 0x21) {
            uVar4 = (uint)bVar1;
          }
          else {
            FNetBitStreamWriter::WriteBits(param_1,uVar6,0x20);
            uVar4 = bVar1 - 0x20;
            uVar6 = (uint)(uVar7 >> 0x20);
          }
          goto LAB_1442f5476;
        }
      } while (uVar4 != param_5);
    }
  }
  return;
}

// DequantizeSignedUnitFloat @ 1442ff120

float __cdecl UE::Net::DequantizeSignedUnitFloat(uint param_1,uint param_2)

{
  if (param_2 < 0x18) {
    return (__real_3f800000 / (float)((1 << ((char)param_2 - 1U & 0x1f)) + -1)) *
           (float)(int)param_1;
  }
  return (float)((param_1 >> 0x17 & 0xfffffffe) << 0x1e |
                (uint)((float)((((uint)((param_1 & 0x7fffff) == 0) & param_1 >> 0x17) + 0x7f) *
                               0x800000 + (param_1 & 0x7fffff)) - __real_3f800000));
}

// DeserializeIntDelta @ 144300ca0

void __cdecl
UE::Net::DeserializeIntDelta
          (FNetBitStreamReader *param_1,int *param_2,int param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
  uVar4 = 1 << (param_6 - 1 & 0x1f);
  if (uVar3 == 0) {
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
  }
  else {
    uVar5 = 1 << (param_4[uVar3 - 1] - 1 & 0x1f);
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_4[uVar3 - 1]);
    uVar3 = ((uVar3 ^ uVar5) - uVar5) + param_3 & 0xffffffffU >> (0x20 - param_6 & 0x1f);
  }
  *param_2 = (uVar3 ^ uVar4) - uVar4;
  return;
}

// DeserializeIntDelta @ 144300d60

void __cdecl
UE::Net::DeserializeIntDelta
          (FNetBitStreamReader *param_1,long64 *param_2,long64 param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
  if (uVar3 == 0) {
    if (param_6 < 0x21) {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
      uVar7 = (ulonglong)uVar3;
    }
    else {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,0x20);
      uVar4 = FNetBitStreamReader::ReadBits(param_1,param_6 - 0x20);
      uVar7 = CONCAT44(uVar4,uVar3);
    }
    uVar5 = 1L << (param_6 - 1 & 0x3f);
    *param_2 = (uVar5 ^ uVar7) - uVar5;
  }
  else {
    bVar1 = param_4[uVar3 - 1];
    if (bVar1 < 0x21) {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)bVar1);
      uVar7 = (ulonglong)uVar3;
    }
    else {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,0x20);
      uVar4 = FNetBitStreamReader::ReadBits(param_1,bVar1 - 0x20);
      uVar7 = CONCAT44(uVar4,uVar3);
    }
    uVar5 = 1L << (bVar1 - 1 & 0x3f);
    uVar6 = 1L << (param_6 - 1 & 0x3f);
    *param_2 = (0xffffffffffffffffU >> (0x40 - param_6 & 0x3f) & ((uVar5 ^ uVar7) - uVar5) + param_3
               ^ uVar6) - uVar6;
  }
  return;
}

// DeserializeUintDelta @ 144300e90

void __cdecl
UE::Net::DeserializeUintDelta
          (FNetBitStreamReader *param_1,uint *param_2,uint param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
  if (uVar3 == 0) {
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
  }
  else {
    uVar4 = 1 << (param_4[uVar3 - 1] - 1 & 0x1f);
    uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_4[uVar3 - 1]);
    uVar3 = ((uVar3 ^ uVar4) - uVar4) + param_3;
  }
  *param_2 = 0xffffffffU >> (0x20 - param_6 & 0x1f) & uVar3;
  return;
}

// DeserializeUintDelta @ 144300f30

void __cdecl
UE::Net::DeserializeUintDelta
          (FNetBitStreamReader *param_1,ulong64 *param_2,ulong64 param_3,uchar *param_4,uint param_5
          ,uchar param_6)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
  if (uVar3 == 0) {
    if (param_6 < 0x21) {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)param_6);
      uVar6 = (ulonglong)uVar3;
    }
    else {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,0x20);
      uVar4 = FNetBitStreamReader::ReadBits(param_1,param_6 - 0x20);
      uVar6 = CONCAT44(uVar4,uVar3);
    }
  }
  else {
    bVar1 = param_4[uVar3 - 1];
    if (bVar1 < 0x21) {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,(uint)bVar1);
      uVar6 = (ulonglong)uVar3;
    }
    else {
      uVar3 = FNetBitStreamReader::ReadBits(param_1,0x20);
      uVar4 = FNetBitStreamReader::ReadBits(param_1,bVar1 - 0x20);
      uVar6 = CONCAT44(uVar4,uVar3);
    }
    uVar5 = 1L << (bVar1 - 1 & 0x3f);
    uVar6 = ((uVar5 ^ uVar6) - uVar5) + param_3;
  }
  *param_2 = 0xffffffffffffffffU >> (0x40 - param_6 & 0x3f) & uVar6;
  return;
}

// FindRepTag @ 144302920

bool __cdecl
UE::Net::FindRepTag(FReplicationProtocol *param_1,ulong64 param_2,FRepTagFindInfo *param_3)

{
  FReplicationStateDescriptor *pFVar1;
  FReplicationStateDescriptor **ppFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FReplicationStateDescriptor **ppFVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_1 == (FReplicationProtocol *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Protocol",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\RepTag.cpp"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  uVar7 = param_1->ReplicationStateCount;
  iVar8 = 0;
  ppFVar6 = param_1->ReplicationStateDescriptors;
  if (((int)uVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar2 = ppFVar6 + (int)uVar7;
  while( true ) {
    if (ppFVar6 == ppFVar2) {
      return false;
    }
    uVar7 = (uint)(*ppFVar6)->InternalAlignment;
    uVar7 = iVar8 + -1 + uVar7 & -uVar7;
    bVar4 = FindRepTag(*ppFVar6,param_2,param_3);
    if (bVar4) break;
    pFVar1 = *ppFVar6;
    ppFVar6 = ppFVar6 + 1;
    iVar8 = uVar7 + pFVar1->InternalSize;
  }
  ppFVar2 = param_1->ReplicationStateDescriptors;
  param_3->InternalStateAbsoluteOffset = param_3->InternalStateAbsoluteOffset + uVar7;
  param_3->StateIndex = (uint)((longlong)ppFVar6 - (longlong)ppFVar2 >> 3);
  return true;
}

// FindRepTag @ 144302a10

bool __cdecl
UE::Net::FindRepTag(FReplicationStateDescriptor *param_1,ulong64 param_2,FRepTagFindInfo *param_3)

{
  ushort uVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FReplicationStateMemberTagDescriptor *pFVar8;
  FReplicationStateMemberTagDescriptor *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  FReplicationStateMemberSerializerDescriptor *pFVar12;
  uint uVar13;
  uint uVar14;
  
  if ((param_1 == (FReplicationStateDescriptor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Descriptor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\RepTag.cpp"
                         ,0x28,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar8 = param_1->MemberTagDescriptors;
  pFVar9 = pFVar8 + param_1->TagCount;
  while( true ) {
    if (pFVar8 == pFVar9) {
      return false;
    }
    if (pFVar8->Tag == param_2) break;
    pFVar8 = pFVar8 + 1;
  }
  param_3->StateIndex = 0;
  param_3->ExternalStateOffset = 0;
  param_3->InternalStateAbsoluteOffset = 0;
  pFVar2 = param_1->MemberDescriptors;
  uVar1 = pFVar8->MemberIndex;
  uVar13 = pFVar2[uVar1].ExternalMemberOffset;
  param_3->ExternalStateOffset = uVar13;
  uVar14 = pFVar2[uVar1].InternalMemberOffset;
  param_3->InternalStateAbsoluteOffset = uVar14;
  pFVar12 = param_1->MemberSerializerDescriptors + uVar1;
  uVar1 = pFVar8->InnerTagIndex;
  while( true ) {
    if (uVar1 == 0xffff) {
      param_3->Serializer = pFVar12->Serializer;
      param_3->SerializerConfig = pFVar12->SerializerConfig;
      return true;
    }
    if (pFVar12->Serializer != &FStructNetSerializerNetSerializerInfo::Serializer) break;
    plVar3 = (longlong *)pFVar12->SerializerConfig[1]._padding_;
    lVar10 = (ulonglong)uVar1 * 0x10 + plVar3[5];
    lVar4 = *plVar3;
    uVar11 = (ulonglong)*(ushort *)(lVar10 + 8);
    uVar13 = uVar13 + *(int *)(lVar4 + uVar11 * 8);
    param_3->ExternalStateOffset = uVar13;
    uVar14 = uVar14 + *(int *)(lVar4 + uVar11 * 8 + 4);
    param_3->InternalStateAbsoluteOffset = uVar14;
    pFVar12 = (FReplicationStateMemberSerializerDescriptor *)(uVar11 * 0x10 + plVar3[2]);
    uVar1 = *(ushort *)(lVar10 + 10);
  }
  bVar6 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6261544516310794169>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\RepTag.cpp"
                     ,0x47,"IsUsingStructNetSerializer(*SerializerInfo)");
  if (!bVar6) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// GetNetArrayPropertyData @ 144303b30

uint __cdecl UE::Net::GetNetArrayPropertyData(ulong64 param_1,ulong64 *param_2)

{
  if ((*(short *)(param_1 + 2) != 0) && (*(ulong64 *)(param_1 + 8) != 0)) {
    *param_2 = *(ulong64 *)(param_1 + 8);
    return (uint)*(ushort *)(param_1 + 2);
  }
  return 0;
}

// HasRepTag @ 144306440

bool __cdecl UE::Net::HasRepTag(FReplicationProtocol *param_1,ulong64 param_2)

{
  FReplicationStateDescriptor **ppFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FReplicationStateMemberTagDescriptor *pFVar6;
  FReplicationStateMemberTagDescriptor *pFVar7;
  FReplicationStateDescriptor **ppFVar8;
  
  if ((param_1 == (FReplicationProtocol *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Protocol",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\RepTag.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar8 = param_1->ReplicationStateDescriptors;
  uVar2 = param_1->ReplicationStateCount;
  if (((int)uVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  ppFVar1 = ppFVar8 + (int)uVar2;
  do {
    if (ppFVar8 == ppFVar1) {
      return false;
    }
    pFVar6 = (*ppFVar8)->MemberTagDescriptors;
    pFVar7 = pFVar6 + (*ppFVar8)->TagCount;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 1) {
      if (pFVar6->Tag == param_2) {
        return true;
      }
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// InitBitfieldNetSerializerConfigFromProperty @ 144306fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::InitBitfieldNetSerializerConfigFromProperty
          (FBitfieldNetSerializerConfig *param_1,FBoolProperty *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [32];
  FBoolProperty *local_48;
  FBoolProperty **local_40;
  FBoolProperty **local_38 [2];
  byte local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_48 = param_2;
  if (param_2->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xa61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_28[param_2->ByteOffset] =
       ~param_2->FieldMask & local_28[param_2->ByteOffset] | param_2->ByteMask;
  param_1->BitMask = local_28[0];
  if (local_28[0] == 0) {
    local_40 = &local_48;
    `UE::Net::InitBitfieldNetSerializerConfigFromProperty'::__l5::<lambda_1>::operator()(&local_40);
    bVar2 = false;
  }
  else if ((local_28[0] & local_28[0] - 1) == 0) {
    bVar2 = true;
  }
  else {
    local_38[0] = &local_48;
    `UE::Net::InitBitfieldNetSerializerConfigFromProperty'::__l8::<lambda_2>::operator()(local_38);
    bVar2 = false;
  }
  return bVar2;
}

// InitInstancedStructNetSerializerConfig @ 1443072e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Net::InitInstancedStructNetSerializerConfig
          (FInstancedStructNetSerializerConfig *param_1,FProperty *param_2)

{
  int *piVar1;
  FString *pFVar2;
  TMap<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>_>
  *this;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  FName local_res10;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  piVar1 = &(param_1->SupportedTypes).ArrayMax;
  pFVar8 = (param_1->SupportedTypes).AllocatorInstance.Data;
  iVar9 = (param_1->SupportedTypes).ArrayNum;
  if ((param_1->SupportedTypes).ArrayMax < 0) {
    DestructItems<TSoftObjectPtr<UScriptStruct>,int>((TSoftObjectPtr<UScriptStruct> *)pFVar8,iVar9);
    (param_1->SupportedTypes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(param_1->SupportedTypes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSoftObjectPtr<UScriptStruct>,int>((TSoftObjectPtr<UScriptStruct> *)pFVar8,iVar9);
    (param_1->SupportedTypes).ArrayNum = 0;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::Reserve(&local_78,0x100);
  pvVar4 = (void *)param_2->_padding_;
  iVar9 = 0;
  if (((ulonglong)pvVar4 & 1) == 0) {
    if (pvVar4 == (void *)0x0) goto LAB_14430743b;
    bVar6 = IsThisNotNull(pvVar4,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)((longlong)pvVar4 + 0x20),&local_68);
    }
    else {
      ::FString::FString(&local_68,L"None");
    }
    iVar10 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar10 = iVar9;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar10);
    ::FString::AppendChar(&local_78,L'.');
    local_48.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  }
  else {
    if (((UObject *)((ulonglong)pvVar4 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)pvVar4 & 0xfffffffffffffffe));
    }
    if (((ulonglong)pvVar4 & 0xfffffffffffffffe) == 0) goto LAB_14430743b;
    local_res10 = *(FName *)(((ulonglong)pvVar4 & 0xfffffffffffffffe) + 0x18);
    ::FName::ToString(&local_res10,&local_48);
    iVar10 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar10 = iVar9;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar10);
    ::FString::AppendChar(&local_78,L'.');
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14430743b:
  bVar6 = IsThisNotNull(param_2,"FField::GetName");
  if (bVar6) {
    ::FName::ToString((FName *)&param_2->_padding_,&local_58);
  }
  else {
    ::FString::FString(&local_58,L"None");
  }
  iVar10 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar10 = iVar9;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  pFVar2 = &(param_1->DescriptorCache).DebugName;
  if (pFVar2 != &local_78) {
    lVar7 = (longlong)local_78.Data.ArrayNum;
    piVar1 = &(param_1->DescriptorCache).DebugName.Data.ArrayMax;
    iVar9 = *piVar1;
    (param_1->DescriptorCache).DebugName.Data.ArrayNum = local_78.Data.ArrayNum;
    if (local_78.Data.ArrayNum == 0) {
      if (iVar9 == 0) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,iVar9,(ForAnyElementType *)pFVar2,0,piVar1);
      }
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,iVar9,(ForAnyElementType *)pFVar2,local_78.Data.ArrayNum
                 ,piVar1);
      memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,lVar7 * 2);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  iVar9 = (param_1->SupportedTypes).ArrayNum;
  pFVar8 = (param_1->SupportedTypes).AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = pFVar8 + (longlong)iVar9 * 0x28;
  iVar9 = MaxCachedInstancedStructDescriptorCount;
  for (; MaxCachedInstancedStructDescriptorCount = iVar9, pFVar8 != pFVar3; pFVar8 = pFVar8 + 0x28)
  {
    TSet<TSoftObjectPtr<UScriptStruct>,DefaultKeyFuncs<TSoftObjectPtr<UScriptStruct>,0>,FDefaultSetAllocator>
    ::Emplace<TSoftObjectPtr<UScriptStruct>_const_&>
              (&(param_1->DescriptorCache).SupportedTypes,
               (TSoftObjectPtr<UScriptStruct> *)&stack0x00000008,(bool *)pFVar8);
    iVar9 = MaxCachedInstancedStructDescriptorCount;
  }
  iVar10 = 0;
  if (0 < iVar9) {
    if ((2 < (byte)LogIris._0_1_) &&
       (*(int *)&(param_1->DescriptorCache).DescriptorMap.field_0x8 !=
        *(int *)&(param_1->DescriptorCache).DescriptorMap.field_0x34)) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
    }
    this = &(param_1->DescriptorCache).DescriptorMap;
    bVar6 = 1 < *(int *)&(param_1->DescriptorCache).DescriptorMap.field_0x48;
    if (!bVar6) {
      TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(param_1->DescriptorCache).DescriptorMap.field_0x8);
    iVar10 = *(int *)&(param_1->DescriptorCache).DescriptorMap.field_0xc;
    *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x8 = 0;
    if (iVar10 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,
                 (int *)&(param_1->DescriptorCache).DescriptorMap.field_0xc);
    }
    *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x34 = 0;
    iVar10 = *(int *)&(param_1->DescriptorCache).DescriptorMap.field_0x2c;
    *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x28 = 0;
    if ((iVar10 < 0) || (0x80 < iVar10)) {
      *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(param_1->DescriptorCache).DescriptorMap.field_0x10,0);
    }
    iVar10 = iVar9;
    if (bVar6) {
      *(undefined4 *)&(param_1->DescriptorCache).DescriptorMap.field_0x48 = 1;
      TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,0>,FDefaultSetAllocator>
                *)this);
    }
  }
  TLruCache<FName,TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_>,DefaultKeyComparer<FName>_>
  ::Empty(&(param_1->DescriptorCache).DescriptorLruCache,iVar10);
  (param_1->DescriptorCache).MaxCachedDescriptorCount = iVar10;
  return;
}

// MakeRepTag @ 1443091e0

ulong64 __cdecl UE::Net::MakeRepTag(char *param_1)

{
  size_t sVar1;
  ulong64 uVar2;
  
  sVar1 = strlen(param_1);
  uVar2 = CityHash64WithSeed(param_1,(uint)sVar1,0x5265705461675f00);
  return uVar2;
}

// QuantizeSignedUnitFloat @ 14430d220

uint __cdecl UE::Net::QuantizeSignedUnitFloat(float param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  if (0x17 < param_2) {
    uVar1 = 0;
    fVar2 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) + __real_3f800000;
    if (fVar2 != 1.0) {
      uVar1 = 0x800000;
    }
    return uVar1 | (uint)param_1 >> 7 & 0x1000000 | (uint)fVar2 & 0x7fffff;
  }
  fVar2 = (float)((1 << ((char)param_2 - 1U & 0x1f)) + -1) * param_1;
  if (0.0 < param_1) {
    return (int)(__real_3f000000 + fVar2);
  }
  fVar3 = 0.0;
  if (param_1 < 0.0) {
    fVar3 = __real_bf000000;
  }
  return (int)(fVar3 + fVar2);
}

// SerializeIntDelta @ 144311a80

void __cdecl
UE::Net::SerializeIntDelta
          (FNetBitStreamWriter *param_1,int param_2,int param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  Private::SerializeUintDeltaImpl<unsigned_int>(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// SerializeIntDelta @ 144311aa0

void __cdecl
UE::Net::SerializeIntDelta
          (FNetBitStreamWriter *param_1,long64 param_2,long64 param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  Private::SerializeUintDeltaImpl<unsigned___int64>(param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  return;
}

// SerializeUintDelta @ 144311d50

void __cdecl
UE::Net::SerializeUintDelta
          (FNetBitStreamWriter *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  Private::SerializeUintDeltaImpl<unsigned_int>(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// SerializeUintDelta @ 144311d70

void __cdecl
UE::Net::SerializeUintDelta
          (FNetBitStreamWriter *param_1,ulong64 param_2,ulong64 param_3,uchar *param_4,uint param_5,
          uchar param_6)

{
  Private::SerializeUintDeltaImpl<unsigned___int64>(param_1,param_2,param_3,param_4,param_5,param_6)
  ;
  return;
}

// s_ValidateReplicationRecord @ 14431e140

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Net::Private::s_ValidateReplicationRecord(FReplicationRecord *param_1,uint param_2,bool param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ForAnyElementType local_48;
  int local_40 [6];
  
  uVar9 = (param_1->Record).Head;
  uVar7 = (param_1->Record).Tail;
  uVar15 = uVar9 - uVar7;
  if (uVar9 != uVar7) {
    uVar11 = 0;
    uVar10 = 0;
    uVar16 = uVar11;
    uVar13 = uVar11;
    uVar14 = uVar11;
    uVar12 = uVar10;
    if (uVar9 != uVar7) {
      do {
        if (((param_1->Record).Head - (param_1->Record).Tail <= (uint)uVar16) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar9 = (uint)uVar16 + 1;
        uVar7 = (param_1->Record).Tail;
        uVar12 = (int)uVar13 +
                 (uint)*(ushort *)
                        ((param_1->Record).Storage.AllocatorInstance.Data +
                        (uVar14 + uVar7 & (ulonglong)(param_1->Record).IndexMask) * 2);
        uVar16 = (ulonglong)uVar9;
        uVar13 = (ulonglong)uVar12;
        uVar14 = uVar14 + 1;
      } while (uVar9 < uVar15);
    }
    if (uVar12 != (param_1->RecordInfos).Head - (param_1->RecordInfos).Tail) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7868239365963514089>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                         ,0xe9,"false");
      if (!bVar5) {
        return false;
      }
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    uVar7 = (param_1->Record).Head - uVar7;
    if (param_3) {
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uVar16 = (ulonglong)(param_1->Record).IndexMask;
      uVar9 = (param_1->Record).Tail;
    }
    else {
      if ((uVar7 <= uVar7 - 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset < Count()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                             ,0x4c,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uVar16 = (ulonglong)(param_1->Record).Tail + (ulonglong)(uVar7 - 1);
      uVar9 = (param_1->Record).IndexMask;
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    uVar7 = param_2 + 0x1f >> 5;
    local_40[1] = 0;
    uVar1 = *(ushort *)((param_1->Record).Storage.AllocatorInstance.Data + (uVar16 & uVar9) * 2);
    local_40[0] = 0;
    local_40[2] = param_2;
    if (param_2 + 0x1f >> 5 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar7,&local_48,0,local_40 + 1);
    }
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar7,&local_48,local_40,local_40 + 1);
    memset(local_48.Data + (longlong)iVar8 * 4,0,(ulonglong)uVar7 << 2);
    uVar9 = (uint)uVar1;
    if (!param_3) {
      uVar10 = ((param_1->RecordInfos).Head - (param_1->RecordInfos).Tail) - uVar9;
    }
    if (uVar9 != 0) {
      do {
        uVar16 = (ulonglong)((int)uVar11 + uVar10);
        if (((param_1->RecordInfos).Head - (param_1->RecordInfos).Tail <= uVar16) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < Count()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Misc\\ResizableCircularQueue.h"
                               ,0x4c,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        FVar4.Data = local_48.Data;
        uVar16 = (param_1->RecordInfos).Tail + uVar16 & (ulonglong)(param_1->RecordInfos).IndexMask;
        pFVar2 = (param_1->RecordInfos).Storage.AllocatorInstance.Data;
        uVar7 = *(uint *)(pFVar2 + uVar16 * 0x10 + 8);
        uVar15 = uVar7 & 0xfffff;
        if (uVar15 != 0) {
          if (((uint)local_40[2] <= uVar15) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2c1,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if ((*(uint *)(FVar4.Data + (ulonglong)(uVar15 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
            bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7868239365963514109>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\ReplicationWriter.cpp"
                               ,0xfd,"false");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if (local_48.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_48.Data);
            return false;
          }
        }
        FVar4.Data = local_48.Data;
        uVar7 = *(uint *)(pFVar2 + uVar16 * 0x10 + 8);
        uVar15 = uVar7 & 0xfffff;
        if (((uint)local_40[2] <= uVar15) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar12 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
        uVar16 = (ulonglong)(uVar15 >> 5);
        *(uint *)(FVar4.Data + uVar16 * 4) =
             *(uint *)(FVar4.Data + uVar16 * 4) | 1 << (uVar7 & 0x1f);
      } while (uVar12 < uVar9);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return true;
}

// Construct<FInt16RangeNetSerializerConfig> @ 14431e4c0

void __cdecl UE::CoreUObject::Private::Construct<FInt16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FInt16RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FInt16RangeNetSerializerConfig> @ 14431e4e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInt16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FInt16RangeNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FInt16RangeNetSerializerConfig> @ 14431e500

void __cdecl UE::CoreUObject::Private::Destruct<FInt16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FInt16RangeNetSerializerConfig> @ 14431e520

bool __cdecl
UE::CoreUObject::Private::Copy<FInt16RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FPackedInt64NetSerializerConfig> @ 14431e570

void __cdecl UE::CoreUObject::Private::Construct<FPackedInt64NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedInt64NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FPackedInt64NetSerializerConfig> @ 14431e590

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPackedInt64NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedInt64NetSerializerConfig__6B_;
  return;
}

// Destruct<FPackedInt64NetSerializerConfig> @ 14431e5b0

void __cdecl UE::CoreUObject::Private::Destruct<FPackedInt64NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPackedInt64NetSerializerConfig> @ 14431e5d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPackedInt64NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInt8RangeNetSerializerConfig> @ 14431e600

void __cdecl UE::CoreUObject::Private::Construct<FInt8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FInt8RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FInt8RangeNetSerializerConfig> @ 14431e620

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInt8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FInt8RangeNetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// Destruct<FInt8RangeNetSerializerConfig> @ 14431e650

void __cdecl UE::CoreUObject::Private::Destruct<FInt8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FRemoteObjectReferenceNetSerializerConfig> @ 14431e670

void __cdecl
UE::CoreUObject::Private::Construct<FRemoteObjectReferenceNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteObjectReferenceNetSerializerConfig__6B_;
  return;
}

// Copy<FInt8RangeNetSerializerConfig> @ 14431e690

bool __cdecl
UE::CoreUObject::Private::Copy<FInt8RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x12) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// ConstructForTests<FRemoteObjectReferenceNetSerializerConfig> @ 14431e6e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRemoteObjectReferenceNetSerializerConfig>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteObjectReferenceNetSerializerConfig__6B_;
  return;
}

// Destruct<FRemoteObjectReferenceNetSerializerConfig> @ 14431e700

void __cdecl
UE::CoreUObject::Private::Destruct<FRemoteObjectReferenceNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FUintNetSerializerConfig> @ 14431e720

void __cdecl UE::CoreUObject::Private::Construct<FUintNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUintNetSerializerConfig__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FUintNetSerializerConfig> @ 14431e740

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUintNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUintNetSerializerConfig__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FUintNetSerializerConfig> @ 14431e760

void __cdecl UE::CoreUObject::Private::Destruct<FUintNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRemoteObjectReferenceNetSerializerConfig> @ 14431e780

bool __cdecl
UE::CoreUObject::Private::Copy<FRemoteObjectReferenceNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FUintNetSerializerConfig> @ 14431e7f0

bool __cdecl
UE::CoreUObject::Private::Copy<FUintNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FRemoteObjectIdNetSerializerConfig> @ 14431e930

void __cdecl UE::CoreUObject::Private::Construct<FRemoteObjectIdNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteObjectIdNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRemoteObjectIdNetSerializerConfig> @ 14431e950

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRemoteObjectIdNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteObjectIdNetSerializerConfig__6B_;
  return;
}

// Destruct<FRemoteObjectIdNetSerializerConfig> @ 14431e970

void __cdecl UE::CoreUObject::Private::Destruct<FRemoteObjectIdNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRemoteObjectIdNetSerializerConfig> @ 14431e990

bool __cdecl
UE::CoreUObject::Private::Copy<FRemoteObjectIdNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FScriptInterfaceNetSerializerConfig> @ 14431e9c0

void __cdecl UE::CoreUObject::Private::Construct<FScriptInterfaceNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FScriptInterfaceNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FScriptInterfaceNetSerializerConfig> @ 14431e9e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FScriptInterfaceNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FScriptInterfaceNetSerializerConfig__6B_;
  return;
}

// Destruct<FScriptInterfaceNetSerializerConfig> @ 14431ea40

void __cdecl UE::CoreUObject::Private::Destruct<FScriptInterfaceNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FScriptInterfaceNetSerializerConfig> @ 14431ea60

bool __cdecl
UE::CoreUObject::Private::Copy<FScriptInterfaceNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FIntNetSerializerConfig> @ 14431ebb0

void __cdecl UE::CoreUObject::Private::Construct<FIntNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIntNetSerializerConfig__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FIntNetSerializerConfig> @ 14431ebd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIntNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FIntNetSerializerConfig__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FIntNetSerializerConfig> @ 14431ec70

void __cdecl UE::CoreUObject::Private::Destruct<FIntNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FIntNetSerializerConfig> @ 14431ecd0

bool __cdecl
UE::CoreUObject::Private::Copy<FIntNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FStringNetSerializerConfig> @ 14431ed10

void __cdecl UE::CoreUObject::Private::Construct<FStringNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FStringNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FStringNetSerializerConfig> @ 14431ed30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStringNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FStringNetSerializerConfig__6B_;
  return;
}

// Destruct<FStringNetSerializerConfig> @ 14431ed50

void __cdecl UE::CoreUObject::Private::Destruct<FStringNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FStringNetSerializerConfig> @ 14431ed70

bool __cdecl
UE::CoreUObject::Private::Copy<FStringNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWeakObjectNetSerializerConfig> @ 14431ede0

void __cdecl UE::CoreUObject::Private::Construct<FWeakObjectNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FWeakObjectNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FWeakObjectNetSerializerConfig> @ 14431ee00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWeakObjectNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FWeakObjectNetSerializerConfig__6B_;
  return;
}

// Destruct<FWeakObjectNetSerializerConfig> @ 14431ee20

void __cdecl UE::CoreUObject::Private::Destruct<FWeakObjectNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FWeakObjectNetSerializerConfig> @ 14431ee80

bool __cdecl
UE::CoreUObject::Private::Copy<FWeakObjectNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FUnitQuat4dNetSerializerConfig> @ 14431ef10

void __cdecl UE::CoreUObject::Private::Construct<FUnitQuat4dNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuat4dNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUnitQuat4dNetSerializerConfig> @ 14431ef30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUnitQuat4dNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuat4dNetSerializerConfig__6B_;
  return;
}

// Destruct<FUnitQuat4dNetSerializerConfig> @ 14431ef50

void __cdecl UE::CoreUObject::Private::Destruct<FUnitQuat4dNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUnitQuat4dNetSerializerConfig> @ 14431efb0

bool __cdecl
UE::CoreUObject::Private::Copy<FUnitQuat4dNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFieldPathNetSerializerSerializationHelper> @ 14431f060

void __cdecl
UE::CoreUObject::Private::Construct<FFieldPathNetSerializerSerializationHelper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FFieldPathNetSerializerSerializationHelper> @ 14431f080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFieldPathNetSerializerSerializationHelper>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FFieldPathNetSerializerSerializationHelper> @ 14431f0a0

void __cdecl
UE::CoreUObject::Private::Destruct<FFieldPathNetSerializerSerializationHelper>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FFieldPathNetSerializerSerializationHelper> @ 14431f0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FFieldPathNetSerializerSerializationHelper>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar1 + 1),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNameAsNetTokenNetSerializerConfig> @ 14431f120

void __cdecl UE::CoreUObject::Private::Construct<FNameAsNetTokenNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNameAsNetTokenNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FNameAsNetTokenNetSerializerConfig> @ 14431f140

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNameAsNetTokenNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNameAsNetTokenNetSerializerConfig__6B_;
  return;
}

// Destruct<FNameAsNetTokenNetSerializerConfig> @ 14431f160

void __cdecl UE::CoreUObject::Private::Destruct<FNameAsNetTokenNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FNameAsNetTokenNetSerializerConfig> @ 14431f180

bool __cdecl
UE::CoreUObject::Private::Copy<FNameAsNetTokenNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectPtrNetSerializerConfig> @ 14431f1b0

void __cdecl UE::CoreUObject::Private::Construct<FObjectPtrNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FObjectPtrNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FObjectPtrNetSerializerConfig> @ 14431f1d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FObjectPtrNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FObjectPtrNetSerializerConfig__6B_;
  return;
}

// Destruct<FObjectPtrNetSerializerConfig> @ 14431f1f0

void __cdecl UE::CoreUObject::Private::Destruct<FObjectPtrNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FObjectPtrNetSerializerConfig> @ 14431f210

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectPtrNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FUnitQuat4fNetSerializerConfig> @ 14431f2a0

void __cdecl UE::CoreUObject::Private::Construct<FUnitQuat4fNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuat4fNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUnitQuat4fNetSerializerConfig> @ 14431f2c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUnitQuat4fNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuat4fNetSerializerConfig__6B_;
  return;
}

// Destruct<FUnitQuat4fNetSerializerConfig> @ 14431f2e0

void __cdecl UE::CoreUObject::Private::Destruct<FUnitQuat4fNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUnitQuat4fNetSerializerConfig> @ 14431f300

bool __cdecl
UE::CoreUObject::Private::Copy<FUnitQuat4fNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFieldPathNetSerializerConfig> @ 14431f330

void __cdecl UE::CoreUObject::Private::Construct<FFieldPathNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFieldPathNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FFieldPathNetSerializerConfig> @ 14431f360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFieldPathNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FFieldPathNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FFieldPathNetSerializerConfig> @ 14431f390

void __cdecl UE::CoreUObject::Private::Destruct<FFieldPathNetSerializerConfig>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FFieldPathNetSerializerConfig> @ 14431f3c0

bool __cdecl
UE::CoreUObject::Private::Copy<FFieldPathNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  FFieldClass *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    pFVar1 = FProperty::StaticClass();
    FFieldPath::GetTyped((FFieldPath *)((longlong)param_2 + 0x10),pFVar1,(UStruct *)0x0);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FNameNetSerializerConfig> @ 14431f460

void __cdecl UE::CoreUObject::Private::Construct<FNameNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNameNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FNameNetSerializerConfig> @ 14431f480

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNameNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNameNetSerializerConfig__6B_;
  return;
}

// Destruct<FNameNetSerializerConfig> @ 14431f4a0

void __cdecl UE::CoreUObject::Private::Destruct<FNameNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FNameNetSerializerConfig> @ 14431f4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNameNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObjectNetSerializerConfig> @ 14431f4f0

void __cdecl UE::CoreUObject::Private::Construct<FObjectNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FObjectNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FObjectNetSerializerConfig> @ 14431f510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FObjectNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FObjectNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FObjectNetSerializerConfig> @ 14431f530

void __cdecl UE::CoreUObject::Private::Destruct<FObjectNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FObjectNetSerializerConfig> @ 14431f550

bool __cdecl
UE::CoreUObject::Private::Copy<FObjectNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FUnitQuatNetSerializerConfig> @ 14431f5e0

void __cdecl UE::CoreUObject::Private::Construct<FUnitQuatNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuatNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUnitQuatNetSerializerConfig> @ 14431f600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUnitQuatNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUnitQuatNetSerializerConfig__6B_;
  return;
}

// Destruct<FUnitQuatNetSerializerConfig> @ 14431f620

void __cdecl UE::CoreUObject::Private::Destruct<FUnitQuatNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUnitQuatNetSerializerConfig> @ 14431f640

bool __cdecl
UE::CoreUObject::Private::Copy<FUnitQuatNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetRoleNetSerializerConfig> @ 14431f670

void __cdecl UE::CoreUObject::Private::Construct<FNetRoleNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined ***)param_1 = &___7FNetRoleNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FNetRoleNetSerializerConfig> @ 14431f6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetRoleNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNetRoleNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FNetRoleNetSerializerConfig> @ 14431f6d0

void __cdecl UE::CoreUObject::Private::Destruct<FNetRoleNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FNetRoleNetSerializerConfig> @ 14431f6f0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetRoleNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x19) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x19 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1a) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1a - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1b) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1b - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x1c) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FPolymorphicArrayStructNetSerializerConfig> @ 14431f7b0

void __cdecl
UE::CoreUObject::Private::Construct<FPolymorphicArrayStructNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FPolymorphicArrayStructNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FPolymorphicArrayStructNetSerializerConfig> @ 14431f7e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPolymorphicArrayStructNetSerializerConfig>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FPolymorphicArrayStructNetSerializerConfig__6B_;
  return;
}

// Destruct<FPolymorphicArrayStructNetSerializerConfig> @ 14431f810

void __cdecl
UE::CoreUObject::Private::Destruct<FPolymorphicArrayStructNetSerializerConfig>(void *param_1)

{
  DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
            (*(FTypeInfo **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPolymorphicArrayStructNetSerializerConfig> @ 14431f850

bool __cdecl
UE::CoreUObject::Private::Copy<FPolymorphicArrayStructNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  FPolymorphicStructNetSerializerConfig *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FPolymorphicStructNetSerializerConfig::operator=
                (this,(FPolymorphicStructNetSerializerConfig *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNopNetSerializerConfig> @ 14431f8e0

void __cdecl UE::CoreUObject::Private::Construct<FNopNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNopNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FNopNetSerializerConfig> @ 14431f900

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNopNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FNopNetSerializerConfig__6B_;
  return;
}

// Destruct<FNopNetSerializerConfig> @ 14431f920

void __cdecl UE::CoreUObject::Private::Destruct<FNopNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FNopNetSerializerConfig> @ 14431f9c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNopNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector3dNetSerializerConfig> @ 14431faf0

void __cdecl UE::CoreUObject::Private::Construct<FVector3dNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVector3dNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVector3dNetSerializerConfig> @ 14431fb10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3dNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVector3dNetSerializerConfig__6B_;
  return;
}

// Destruct<FVector3dNetSerializerConfig> @ 14431fbb0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3dNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FLastResortPropertyNetSerializerConfig> @ 14431fc50

void __cdecl
UE::CoreUObject::Private::Construct<FLastResortPropertyNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined ***)param_1 = &___7FLastResortPropertyNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffff;
  return;
}

// Copy<FVector3dNetSerializerConfig> @ 14431fc90

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3dNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FLastResortPropertyNetSerializerConfig> @ 14431fcc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLastResortPropertyNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FLastResortPropertyNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FLastResortPropertyNetSerializerConfig> @ 14431fd30

void __cdecl
UE::CoreUObject::Private::Destruct<FLastResortPropertyNetSerializerConfig>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FLastResortPropertyNetSerializerConfig> @ 14431fd60

bool __cdecl
UE::CoreUObject::Private::Copy<FLastResortPropertyNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  FFieldClass *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    pFVar1 = FProperty::StaticClass();
    FFieldPath::GetTyped((FFieldPath *)((longlong)param_2 + 0x10),pFVar1,(UStruct *)0x0);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FSoftClassPathNetSerializerConfig> @ 14431fe10

void __cdecl UE::CoreUObject::Private::Construct<FSoftClassPathNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftClassPathNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FSoftClassPathNetSerializerConfig> @ 14431fe30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSoftClassPathNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftClassPathNetSerializerConfig__6B_;
  return;
}

// Destruct<FSoftClassPathNetSerializerConfig> @ 14431fed0

void __cdecl UE::CoreUObject::Private::Destruct<FSoftClassPathNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FSoftClassPathNetSerializerConfig> @ 14431ff70

bool __cdecl
UE::CoreUObject::Private::Copy<FSoftClassPathNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPolymorphicStructNetSerializerConfig> @ 144320060

void __cdecl
UE::CoreUObject::Private::Construct<FPolymorphicStructNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPolymorphicStructNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPolymorphicStructNetSerializerConfig> @ 144320090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPolymorphicStructNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1000;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPolymorphicStructNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPolymorphicStructNetSerializerConfig> @ 1443200c0

void __cdecl
UE::CoreUObject::Private::Destruct<FPolymorphicStructNetSerializerConfig>(void *param_1)

{
  DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
            (*(FTypeInfo **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPolymorphicStructNetSerializerConfig> @ 144320140

bool __cdecl
UE::CoreUObject::Private::Copy<FPolymorphicStructNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FTypeInfo *pFVar4;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pFVar6 = (ForAnyElementType *)((longlong)pvVar5 + 0x10);
    *(undefined4 *)((longlong)pvVar5 + 8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pFVar6 != pFVar1) {
      DestructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
                ((FTypeInfo *)pFVar6->Data,*(int *)((longlong)pvVar5 + 0x18));
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x1c);
      pFVar4 = (FTypeInfo *)pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x18) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
        ConstructItems<UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,UE::Net::FPolymorphicNetSerializerScriptStructCache::FTypeInfo,int>
                  (pFVar6->Data,pFVar4,iVar3);
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0x20) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x24) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x24 - (longlong)param_1));
    pvVar5 = (void *)((longlong)pvVar5 + 0x28);
  }
  return true;
}

// Construct<FStructNetSerializerConfig> @ 1443202d0

void __cdecl UE::CoreUObject::Private::Construct<FStructNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FStructNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FStructNetSerializerConfig> @ 144320370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStructNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FStructNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FStructNetSerializerConfig> @ 144320390

void __cdecl UE::CoreUObject::Private::Destruct<FStructNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStructNetSerializerConfig__6B_;
  if (*(FReplicationStateDescriptor **)((longlong)param_1 + 0x10) !=
      (FReplicationStateDescriptor *)0x0) {
    Net::FReplicationStateDescriptor::Release
              (*(FReplicationStateDescriptor **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FArrayPropertyNetSerializerConfig> @ 144320710

void __cdecl UE::CoreUObject::Private::Construct<FArrayPropertyNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FArrayPropertyNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FArrayPropertyNetSerializerConfig> @ 144320790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FArrayPropertyNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FArrayPropertyNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FArrayPropertyNetSerializerConfig> @ 1443207d0

void __cdecl UE::CoreUObject::Private::Destruct<FArrayPropertyNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FArrayPropertyNetSerializerConfig__6B_;
  if (*(FReplicationStateDescriptor **)((longlong)param_1 + 0x38) !=
      (FReplicationStateDescriptor *)0x0) {
    Net::FReplicationStateDescriptor::Release
              (*(FReplicationStateDescriptor **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FSoftObjectPathNetSerializerConfig> @ 144320860

void __cdecl UE::CoreUObject::Private::Construct<FSoftObjectPathNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftObjectPathNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FSoftObjectPathNetSerializerConfig> @ 1443208c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSoftObjectPathNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftObjectPathNetSerializerConfig__6B_;
  return;
}

// Destruct<FSoftObjectPathNetSerializerConfig> @ 144320920

void __cdecl UE::CoreUObject::Private::Destruct<FSoftObjectPathNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FSoftObjectPathNetSerializerConfig> @ 144320a00

bool __cdecl
UE::CoreUObject::Private::Copy<FSoftObjectPathNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector3fNetSerializerConfig> @ 144320d30

void __cdecl UE::CoreUObject::Private::Construct<FVector3fNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVector3fNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVector3fNetSerializerConfig> @ 144320dd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3fNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVector3fNetSerializerConfig__6B_;
  return;
}

// Destruct<FVector3fNetSerializerConfig> @ 144320df0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3fNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FVector3fNetSerializerConfig> @ 144320ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3fNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBitfieldNetSerializerConfig> @ 144320f00

void __cdecl UE::CoreUObject::Private::Construct<FBitfieldNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FBitfieldNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FBitfieldNetSerializerConfig> @ 144320f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBitfieldNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FBitfieldNetSerializerConfig__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FBitfieldNetSerializerConfig> @ 144320f40

void __cdecl UE::CoreUObject::Private::Destruct<FBitfieldNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FBitfieldNetSerializerConfig> @ 144321020

bool __cdecl
UE::CoreUObject::Private::Copy<FBitfieldNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FBoolNetSerializerConfig> @ 144321060

void __cdecl UE::CoreUObject::Private::Construct<FBoolNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FBoolNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FBoolNetSerializerConfig> @ 144321100

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBoolNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FBoolNetSerializerConfig__6B_;
  return;
}

// Destruct<FBoolNetSerializerConfig> @ 144321120

void __cdecl UE::CoreUObject::Private::Destruct<FBoolNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FVectorNetQuantizeNormalNetSerializerConfig> @ 144321140

void __cdecl
UE::CoreUObject::Private::Construct<FVectorNetQuantizeNormalNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantizeNormalNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVectorNetQuantizeNormalNetSerializerConfig> @ 1443211a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVectorNetQuantizeNormalNetSerializerConfig>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantizeNormalNetSerializerConfig__6B_;
  return;
}

// Destruct<FVectorNetQuantizeNormalNetSerializerConfig> @ 1443211c0

void __cdecl
UE::CoreUObject::Private::Destruct<FVectorNetQuantizeNormalNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FBoolNetSerializerConfig> @ 1443211e0

bool __cdecl
UE::CoreUObject::Private::Copy<FBoolNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSoftObjectNetSerializerConfig> @ 144321210

void __cdecl UE::CoreUObject::Private::Construct<FSoftObjectNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftObjectNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FSoftObjectNetSerializerConfig> @ 144321230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSoftObjectNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSoftObjectNetSerializerConfig__6B_;
  return;
}

// Copy<FVectorNetQuantizeNormalNetSerializerConfig> @ 144321290

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorNetQuantizeNormalNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FSoftObjectNetSerializerConfig> @ 1443212c0

void __cdecl UE::CoreUObject::Private::Destruct<FSoftObjectNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FSoftObjectNetSerializerConfig> @ 144321360

bool __cdecl
UE::CoreUObject::Private::Copy<FSoftObjectNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVectorNetSerializerConfig> @ 144321780

void __cdecl UE::CoreUObject::Private::Construct<FVectorNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVectorNetSerializerConfig> @ 144321820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVectorNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetSerializerConfig__6B_;
  return;
}

// Destruct<FVectorNetSerializerConfig> @ 144321840

void __cdecl UE::CoreUObject::Private::Destruct<FVectorNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FVectorNetSerializerConfig> @ 144321920

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVectorNetQuantize100NetSerializerConfig> @ 144321a10

void __cdecl
UE::CoreUObject::Private::Construct<FVectorNetQuantize100NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantize100NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVectorNetQuantize100NetSerializerConfig> @ 144321a30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVectorNetQuantize100NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantize100NetSerializerConfig__6B_;
  return;
}

// Destruct<FVectorNetQuantize100NetSerializerConfig> @ 144321a50

void __cdecl
UE::CoreUObject::Private::Destruct<FVectorNetQuantize100NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FVectorNetQuantize100NetSerializerConfig> @ 144321ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorNetQuantize100NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRotator3dNetSerializerConfig> @ 144321c20

void __cdecl UE::CoreUObject::Private::Construct<FRotator3dNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotator3dNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRotator3dNetSerializerConfig> @ 144321c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3dNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotator3dNetSerializerConfig__6B_;
  return;
}

// Destruct<FRotator3dNetSerializerConfig> @ 144321c60

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3dNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRotator3dNetSerializerConfig> @ 144321ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3dNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVectorNetQuantize10NetSerializerConfig> @ 144321d90

void __cdecl
UE::CoreUObject::Private::Construct<FVectorNetQuantize10NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantize10NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVectorNetQuantize10NetSerializerConfig> @ 144321df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVectorNetQuantize10NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantize10NetSerializerConfig__6B_;
  return;
}

// Destruct<FVectorNetQuantize10NetSerializerConfig> @ 144321e10

void __cdecl
UE::CoreUObject::Private::Destruct<FVectorNetQuantize10NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FVectorNetQuantize10NetSerializerConfig> @ 144321e80

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorNetQuantize10NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRotator3fNetSerializerConfig> @ 144321ff0

void __cdecl UE::CoreUObject::Private::Construct<FRotator3fNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotator3fNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRotator3fNetSerializerConfig> @ 144322010

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3fNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotator3fNetSerializerConfig__6B_;
  return;
}

// Destruct<FRotator3fNetSerializerConfig> @ 144322030

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3fNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRotator3fNetSerializerConfig> @ 144322050

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3fNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVectorNetQuantizeNetSerializerConfig> @ 1443221c0

void __cdecl
UE::CoreUObject::Private::Construct<FVectorNetQuantizeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantizeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FVectorNetQuantizeNetSerializerConfig> @ 1443222a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVectorNetQuantizeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FVectorNetQuantizeNetSerializerConfig__6B_;
  return;
}

// Destruct<FVectorNetQuantizeNetSerializerConfig> @ 1443222c0

void __cdecl
UE::CoreUObject::Private::Destruct<FVectorNetQuantizeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Construct<FUint64RangeNetSerializerConfig> @ 1443222e0

void __cdecl UE::CoreUObject::Private::Construct<FUint64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FUint64RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FUint64RangeNetSerializerConfig> @ 144322310

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUint64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUint64RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FUint64RangeNetSerializerConfig> @ 144322340

void __cdecl UE::CoreUObject::Private::Destruct<FUint64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FVectorNetQuantizeNetSerializerConfig> @ 144322360

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorNetQuantizeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FUint64RangeNetSerializerConfig> @ 144322390

bool __cdecl
UE::CoreUObject::Private::Copy<FUint64RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FRotatorAsShortNetSerializerConfig> @ 144322460

void __cdecl UE::CoreUObject::Private::Construct<FRotatorAsShortNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorAsShortNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRotatorAsShortNetSerializerConfig> @ 144322480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotatorAsShortNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorAsShortNetSerializerConfig__6B_;
  return;
}

// Destruct<FRotatorAsShortNetSerializerConfig> @ 1443224a0

void __cdecl UE::CoreUObject::Private::Destruct<FRotatorAsShortNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRotatorAsShortNetSerializerConfig> @ 1443224c0

bool __cdecl
UE::CoreUObject::Private::Copy<FRotatorAsShortNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUint32RangeNetSerializerConfig> @ 1443224f0

void __cdecl UE::CoreUObject::Private::Construct<FUint32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FUint32RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUint32RangeNetSerializerConfig> @ 144322510

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUint32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUint32RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FUint32RangeNetSerializerConfig> @ 144322530

void __cdecl UE::CoreUObject::Private::Destruct<FUint32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUint32RangeNetSerializerConfig> @ 144322590

bool __cdecl
UE::CoreUObject::Private::Copy<FUint32RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FPackedUint32NetSerializerConfig> @ 144322720

void __cdecl UE::CoreUObject::Private::Construct<FPackedUint32NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedUint32NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FPackedUint32NetSerializerConfig> @ 144322740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPackedUint32NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedUint32NetSerializerConfig__6B_;
  return;
}

// Destruct<FPackedUint32NetSerializerConfig> @ 144322760

void __cdecl UE::CoreUObject::Private::Destruct<FPackedUint32NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPackedUint32NetSerializerConfig> @ 144322800

bool __cdecl
UE::CoreUObject::Private::Copy<FPackedUint32NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRotatorAsByteNetSerializerConfig> @ 144322830

void __cdecl UE::CoreUObject::Private::Construct<FRotatorAsByteNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorAsByteNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRotatorAsByteNetSerializerConfig> @ 144322850

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotatorAsByteNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorAsByteNetSerializerConfig__6B_;
  return;
}

// Destruct<FRotatorAsByteNetSerializerConfig> @ 144322870

void __cdecl UE::CoreUObject::Private::Destruct<FRotatorAsByteNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRotatorAsByteNetSerializerConfig> @ 1443228d0

bool __cdecl
UE::CoreUObject::Private::Copy<FRotatorAsByteNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUint16RangeNetSerializerConfig> @ 144322980

void __cdecl UE::CoreUObject::Private::Construct<FUint16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FUint16RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUint16RangeNetSerializerConfig> @ 1443229a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUint16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUint16RangeNetSerializerConfig__6B_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FUint16RangeNetSerializerConfig> @ 1443229c0

void __cdecl UE::CoreUObject::Private::Destruct<FUint16RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUint16RangeNetSerializerConfig> @ 1443229e0

bool __cdecl
UE::CoreUObject::Private::Copy<FUint16RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x14) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FInt64RangeNetSerializerConfig> @ 144322a70

void __cdecl UE::CoreUObject::Private::Construct<FInt64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FInt64RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FInt64RangeNetSerializerConfig> @ 144322aa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInt64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FInt64RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FInt64RangeNetSerializerConfig> @ 144322ad0

void __cdecl UE::CoreUObject::Private::Destruct<FInt64RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FInt64RangeNetSerializerConfig> @ 144322af0

bool __cdecl
UE::CoreUObject::Private::Copy<FInt64RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FPackedInt32NetSerializerConfig> @ 144322b80

void __cdecl UE::CoreUObject::Private::Construct<FPackedInt32NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedInt32NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FPackedInt32NetSerializerConfig> @ 144322ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPackedInt32NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedInt32NetSerializerConfig__6B_;
  return;
}

// Destruct<FPackedInt32NetSerializerConfig> @ 144322bc0

void __cdecl UE::CoreUObject::Private::Destruct<FPackedInt32NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPackedInt32NetSerializerConfig> @ 144322be0

bool __cdecl
UE::CoreUObject::Private::Copy<FPackedInt32NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRotatorNetSerializerConfig> @ 144322c10

void __cdecl UE::CoreUObject::Private::Construct<FRotatorNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRotatorNetSerializerConfig> @ 144322c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRotatorNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRotatorNetSerializerConfig__6B_;
  return;
}

// Destruct<FRotatorNetSerializerConfig> @ 144322c50

void __cdecl UE::CoreUObject::Private::Destruct<FRotatorNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRotatorNetSerializerConfig> @ 144322cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FRotatorNetSerializerConfig>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUint8RangeNetSerializerConfig> @ 144322d60

void __cdecl UE::CoreUObject::Private::Construct<FUint8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FUint8RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FUint8RangeNetSerializerConfig> @ 144322d80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUint8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FUint8RangeNetSerializerConfig__6B_;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// Destruct<FUint8RangeNetSerializerConfig> @ 144322db0

void __cdecl UE::CoreUObject::Private::Destruct<FUint8RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FUint8RangeNetSerializerConfig> @ 144322e90

bool __cdecl
UE::CoreUObject::Private::Copy<FUint8RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x11) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x11 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x12) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FInt32RangeNetSerializerConfig> @ 144322f20

void __cdecl UE::CoreUObject::Private::Construct<FInt32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FInt32RangeNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FInt32RangeNetSerializerConfig> @ 144322f40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInt32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FInt32RangeNetSerializerConfig__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInt32RangeNetSerializerConfig> @ 144322f60

void __cdecl UE::CoreUObject::Private::Destruct<FInt32RangeNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FInt32RangeNetSerializerConfig> @ 144322f80

bool __cdecl
UE::CoreUObject::Private::Copy<FInt32RangeNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FPackedUint64NetSerializerConfig> @ 144323010

void __cdecl UE::CoreUObject::Private::Construct<FPackedUint64NetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedUint64NetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FPackedUint64NetSerializerConfig> @ 144323030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPackedUint64NetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPackedUint64NetSerializerConfig__6B_;
  return;
}

// Destruct<FPackedUint64NetSerializerConfig> @ 144323090

void __cdecl UE::CoreUObject::Private::Destruct<FPackedUint64NetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FPackedUint64NetSerializerConfig> @ 1443230b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPackedUint64NetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRemoteServerIdNetSerializerConfig> @ 144323120

void __cdecl UE::CoreUObject::Private::Construct<FRemoteServerIdNetSerializerConfig>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteServerIdNetSerializerConfig__6B_;
  return;
}

// ConstructForTests<FRemoteServerIdNetSerializerConfig> @ 144323140

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRemoteServerIdNetSerializerConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRemoteServerIdNetSerializerConfig__6B_;
  return;
}

// Destruct<FRemoteServerIdNetSerializerConfig> @ 144323160

void __cdecl UE::CoreUObject::Private::Destruct<FRemoteServerIdNetSerializerConfig>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNetSerializerConfig__6B_;
  return;
}

// Copy<FRemoteServerIdNetSerializerConfig> @ 144323180

bool __cdecl
UE::CoreUObject::Private::Copy<FRemoteServerIdNetSerializerConfig>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined4 *)((longlong)pvVar1 + 8) =
           *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Net::FNetSerializerRegistryDelegates,UE::Net::FNetSerializerRegistryDelegates_*_&> @ 144323840

FNetSerializerRegistryDelegates * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Net::FNetSerializerRegistryDelegates,UE::Net::FNetSerializerRegistryDelegates_*_&>
          (FNetSerializerRegistryDelegates **param_1)

{
  return *param_1;
}

// GetBitsNeeded<unsigned_char,1> @ 144323a70

uint __cdecl UE::Net::GetBitsNeeded<unsigned_char,1>(uchar param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_1 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetBitsNeeded<unsigned___int64,1> @ 144323ac0

uint __cdecl UE::Net::GetBitsNeeded<unsigned___int64,1>(ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = (int)lVar1;
  if (param_1 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}

// GetBitsNeededForRange<unsigned_char,1> @ 144323b00

uint __cdecl UE::Net::GetBitsNeededForRange<unsigned_char,1>(uchar param_1,uchar param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)((uint)param_2 - (uint)param_1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetBitsNeededForRange<unsigned_short,1> @ 144323b40

uint __cdecl UE::Net::GetBitsNeededForRange<unsigned_short,1>(ushort param_1,ushort param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)((uint)param_2 - (uint)param_1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetBitsNeededForRange<unsigned_int,1> @ 144323b80

uint __cdecl UE::Net::GetBitsNeededForRange<unsigned_int,1>(uint param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)(param_2 - param_1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (uint)lVar2;
}

// GetBitsNeededForRange<__int64,1> @ 144323ba0

uint __cdecl UE::Net::GetBitsNeededForRange<__int64,1>(long64 param_1,long64 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 - param_1;
  lVar1 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = (int)lVar1;
  if (uVar3 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}

// GetBitsNeededForRange<unsigned___int64,1> @ 144323bc0

uint __cdecl UE::Net::GetBitsNeededForRange<unsigned___int64,1>(ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 - param_1;
  lVar1 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar2 = (int)lVar1;
  if (uVar3 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}

// NetDequantizeDefault<int> @ 1443241d0

void __cdecl
UE::Net::NetDequantizeDefault<int>(FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// NetDequantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet> @ 1443241f0

void __cdecl
UE::Net::NetDequantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}

// NetDequantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet> @ 144324210

void __cdecl
UE::Net::NetDequantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  uVar3 = puVar1[1];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = puVar1[2];
  return;
}

// NetDequantizeDefault<__int64> @ 144324230

void __cdecl
UE::Net::NetDequantizeDefault<__int64>
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// NetDeserializeDeltaDefault<2,&UE::Net::FRemoteServerIdNetSerializer::Deserialize,0,0> @ 144324250

void __cdecl
UE::Net::NetDeserializeDeltaDefault<2,&UE::Net::FRemoteServerIdNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) != 0) {
    *(undefined2 *)param_2->_padding_ = *(undefined2 *)param_2->Prev;
    return;
  }
  puVar1 = (undefined2 *)param_2->_padding_;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,10);
  *puVar1 = (short)uVar2;
  return;
}

// NetDeserializeDeltaDefault<8,&UE::Net::FRemoteObjectIdNetSerializer::Deserialize,0,0> @ 1443242c0

void __cdecl
UE::Net::NetDeserializeDeltaDefault<8,&UE::Net::FRemoteObjectIdNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar2 & 1) != 0) {
    *(undefined8 *)param_2->_padding_ = *(undefined8 *)param_2->Prev;
    return;
  }
  this = param_1->BitStreamReader;
  puVar1 = (undefined8 *)param_2->_padding_;
  uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
  uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
  *puVar1 = CONCAT44(uVar3,uVar2);
  return;
}

// NetDeserializeDeltaDefault<16,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Deserialize,0,0> @ 144324350

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<16,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->_padding_;
    uVar2 = ((undefined8 *)param_2->Prev)[1];
    *puVar1 = *(undefined8 *)param_2->Prev;
    puVar1[1] = uVar2;
    return;
  }
  Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Deserialize
            (param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<16,&UE::Net::Private::FStringNetSerializerBase::Deserialize,&UE::Net::Private::FStringNetSerializerBase::FreeDynamicState,&UE::Net::Private::FStringNetSerializerBase::CloneDynamicState> @ 1443243b0

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<16,&UE::Net::Private::FStringNetSerializerBase::Deserialize,&UE::Net::Private::FStringNetSerializerBase::FreeDynamicState,&UE::Net::Private::FStringNetSerializerBase::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  void *_Dst;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    puVar2 = (undefined8 *)param_2->_padding_;
    FMemory::Free((void *)puVar2[1]);
    _Dst = (void *)0x0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)param_2->_padding_;
    uVar4 = ((undefined8 *)param_2->Prev)[1];
    *puVar2 = *(undefined8 *)param_2->Prev;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    if (*(ushort *)((longlong)puVar2 + 6) != 0) {
      _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 6) + 3 & 0xfffffffffffffffc,4
                            );
      memcpy(_Dst,(void *)puVar2[1],(ulonglong)*(ushort *)((longlong)puVar2 + 6));
    }
    *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 6);
    uVar1 = *(undefined2 *)((longlong)puVar2 + 6);
    puVar3[1] = _Dst;
    *(undefined2 *)((longlong)puVar3 + 6) = uVar1;
    return;
  }
  Private::FStringNetSerializerBase::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<16,&UE::Net::FVectorNetQuantizeNormalNetSerializer::Deserialize,0,0> @ 144324480

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<16,&UE::Net::FVectorNetQuantizeNormalNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->_padding_;
    uVar2 = ((undefined8 *)param_2->Prev)[1];
    *puVar1 = *(undefined8 *)param_2->Prev;
    puVar1[1] = uVar2;
    return;
  }
  FVectorNetQuantizeNormalNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<272,&UE::Net::FLastResortPropertyNetSerializer::Deserialize,&UE::Net::FLastResortPropertyNetSerializer::FreeDynamicState,&UE::Net::FLastResortPropertyNetSerializer::CloneDynamicState> @ 1443244e0

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<272,&UE::Net::FLastResortPropertyNetSerializer::Deserialize,&UE::Net::FLastResortPropertyNetSerializer::FreeDynamicState,&UE::Net::FLastResortPropertyNetSerializer::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
  *this;
  undefined8 uVar1;
  TTypeCompatibleBytes<UE::Net::FObjectNetSerializerQuantizedReferenceStorage> *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FNetCloneDynamicStateArgs local_38;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    this = (FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)param_2->_padding_;
    FNetSerializerArrayStorage<UE::Net::FObjectNetSerializerQuantizedReferenceStorage,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free(this,param_1);
    FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free((FNetSerializerArrayStorage<UE::Net::FIrisPackageMapExportsQuantizedType::FQuantizedName,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)(this + 1),param_1);
    FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
    ::Free((FNetSerializerArrayStorage<UE::Net::FNetToken,UE::Net::AllocationPolicies::TInlinedElementAllocationPolicy<4,UE::Net::AllocationPolicies::FElementAllocationPolicy>_>
            *)(this + 2),param_1);
    FMemory::Free(*(void **)(this[2].AllocatorInstance.InlineData[1].Pad + 0x10));
    lVar8 = 2;
    pTVar2 = this[2].AllocatorInstance.InlineData;
    pTVar2[1].Pad[8] = '\0';
    pTVar2[1].Pad[9] = '\0';
    pTVar2[1].Pad[10] = '\0';
    pTVar2[1].Pad[0xb] = '\0';
    pTVar2[1].Pad[0xc] = '\0';
    pTVar2[1].Pad[0xd] = '\0';
    pTVar2[1].Pad[0xe] = '\0';
    pTVar2[1].Pad[0xf] = '\0';
    pTVar2 = this[2].AllocatorInstance.InlineData;
    pTVar2[1].Pad[0x10] = '\0';
    pTVar2[1].Pad[0x11] = '\0';
    pTVar2[1].Pad[0x12] = '\0';
    pTVar2[1].Pad[0x13] = '\0';
    pTVar2[1].Pad[0x14] = '\0';
    pTVar2[1].Pad[0x15] = '\0';
    pTVar2[1].Pad[0x16] = '\0';
    pTVar2[1].Pad[0x17] = '\0';
    puVar3 = (undefined8 *)param_2->_padding_;
    puVar4 = (undefined8 *)param_2->Prev;
    do {
      puVar7 = puVar4;
      puVar6 = puVar3;
      uVar1 = puVar7[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar1;
      uVar1 = puVar7[3];
      puVar6[2] = puVar7[2];
      puVar6[3] = uVar1;
      uVar1 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar1;
      uVar1 = puVar7[7];
      puVar6[6] = puVar7[6];
      puVar6[7] = uVar1;
      uVar1 = puVar7[9];
      puVar6[8] = puVar7[8];
      puVar6[9] = uVar1;
      uVar1 = puVar7[0xb];
      puVar6[10] = puVar7[10];
      puVar6[0xb] = uVar1;
      uVar1 = puVar7[0xd];
      puVar6[0xc] = puVar7[0xc];
      puVar6[0xd] = uVar1;
      uVar1 = puVar7[0xf];
      puVar6[0xe] = puVar7[0xe];
      puVar6[0xf] = uVar1;
      lVar8 = lVar8 + -1;
      puVar3 = puVar6 + 0x10;
      puVar4 = puVar7 + 0x10;
    } while (lVar8 != 0);
    uVar1 = puVar7[0x11];
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    puVar6[0x10] = puVar7[0x10];
    puVar6[0x11] = uVar1;
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Prev;
    local_38.Target = param_2->_padding_;
    FLastResortPropertyNetSerializer::CloneDynamicState(param_1,&local_38);
    return;
  }
  FLastResortPropertyNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::Private::FFloatTripletNetSerializer<double>::Deserialize,0,0> @ 144324620

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::Private::FFloatTripletNetSerializer<double>::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->Prev;
    puVar2 = (undefined8 *)param_2->_padding_;
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = puVar1[2];
    return;
  }
  Private::FFloatTripletNetSerializer<double>::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::CloneDynamicState> @ 144324690

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FNetCloneDynamicStateArgs local_38;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    lVar1 = param_2->_padding_;
    local_38.Source = *(ulong64 *)(lVar1 + 0x10);
    if (local_38.Source != 0) {
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      local_38._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
      (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
                (param_1,(FNetFreeDynamicStateArgs *)&local_38);
      FMemory::Free(*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Prev;
    local_38.Target = param_2->_padding_;
    Private::FObjectNetSerializerBase<UObject_*>::CloneDynamicState(param_1,&local_38);
    return;
  }
  Private::FObjectNetSerializerBase<UObject_*>::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::CloneDynamicState> @ 144324790

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FNetCloneDynamicStateArgs local_38;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    lVar1 = param_2->_padding_;
    local_38.Source = *(ulong64 *)(lVar1 + 0x10);
    if (local_38.Source != 0) {
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      local_38._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
      (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
                (param_1,(FNetFreeDynamicStateArgs *)&local_38);
      FMemory::Free(*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Prev;
    local_38.Target = param_2->_padding_;
    Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::CloneDynamicState(param_1,&local_38);
    return;
  }
  Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Deserialize
            (param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::CloneDynamicState> @ 144324890

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FNetCloneDynamicStateArgs local_38;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    lVar1 = param_2->_padding_;
    local_38.Source = *(ulong64 *)(lVar1 + 0x10);
    if (local_38.Source != 0) {
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      local_38._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
      (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
                (param_1,(FNetFreeDynamicStateArgs *)&local_38);
      FMemory::Free(*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Prev;
    local_38.Target = param_2->_padding_;
    Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::CloneDynamicState
              (param_1,&local_38);
    return;
  }
  Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Deserialize
            (param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::CloneDynamicState> @ 144324990

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Deserialize,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::FreeDynamicState,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  FNetCloneDynamicStateArgs local_38;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    lVar1 = param_2->_padding_;
    local_38.Source = *(ulong64 *)(lVar1 + 0x10);
    if (local_38.Source != 0) {
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      local_38._padding_ = (longlong)&FRemoteObjectReferenceNetSerializer::DefaultConfig;
      (*FRemoteObjectReferenceNetSerializerNetSerializerInfo::Serializer.FreeDynamicState)
                (param_1,(FNetFreeDynamicStateArgs *)&local_38);
      FMemory::Free(*(void **)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    local_38._padding_ = 0;
    local_38._padding_._0_4_ = 0;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    local_38._padding_ = param_2->_padding_;
    local_38.Source = param_2->Prev;
    local_38.Target = param_2->_padding_;
    Private::FObjectNetSerializerBase<FScriptInterface>::CloneDynamicState(param_1,&local_38);
    return;
  }
  Private::FObjectNetSerializerBase<FScriptInterface>::Deserialize
            (param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<24,&UE::Net::FNameNetSerializer::Deserialize,&UE::Net::FNameNetSerializer::FreeDynamicState,&UE::Net::FNameNetSerializer::CloneDynamicState> @ 144324a90

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<24,&UE::Net::FNameNetSerializer::Deserialize,&UE::Net::FNameNetSerializer::FreeDynamicState,&UE::Net::FNameNetSerializer::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  void *_Dst;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) != 0) {
    puVar2 = (undefined8 *)param_2->_padding_;
    FMemory::Free((void *)puVar2[2]);
    *puVar2 = 0;
    puVar2[1] = 0;
    _Dst = (void *)0x0;
    puVar2[2] = 0;
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = puVar2[2];
    if (*(ushort *)((longlong)puVar2 + 10) != 0) {
      _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 10) + 3 & 0xfffffffffffffffc,
                             4);
      memcpy(_Dst,(void *)puVar2[2],(ulonglong)*(ushort *)((longlong)puVar2 + 10));
    }
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)((longlong)puVar2 + 10);
    uVar1 = *(undefined2 *)((longlong)puVar2 + 10);
    puVar3[2] = _Dst;
    *(undefined2 *)((longlong)puVar3 + 10) = uVar1;
    return;
  }
  FNameNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<32,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Deserialize,0,0> @ 144324b90

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<32,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->Prev;
    puVar2 = (undefined8 *)param_2->_padding_;
    uVar3 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    uVar3 = puVar1[3];
    puVar2[2] = puVar1[2];
    puVar2[3] = uVar3;
    return;
  }
  Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Deserialize
            (param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<48,&UE::Net::FSoftObjectNetSerializer::Deserialize,&UE::Net::FSoftObjectNetSerializer::FreeDynamicState,&UE::Net::FSoftObjectNetSerializer::CloneDynamicState> @ 144324c00

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<48,&UE::Net::FSoftObjectNetSerializer::Deserialize,&UE::Net::FSoftObjectNetSerializer::FreeDynamicState,&UE::Net::FSoftObjectNetSerializer::CloneDynamicState>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  void *_Dst;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) == 0) {
    FSoftObjectNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  }
  else {
    puVar2 = (undefined8 *)param_2->_padding_;
    if (*(char *)(puVar2 + 5) == '\0') {
      FMemory::Free((void *)puVar2[1]);
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    uVar4 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar4;
    uVar4 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar4;
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    uVar4 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar4;
    uVar4 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar4;
    if (*(char *)(puVar2 + 5) == '\0') {
      uVar4 = puVar2[1];
      _Dst = (void *)0x0;
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      if (*(ushort *)((longlong)puVar2 + 6) != 0) {
        _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 6) + 3 & 0xfffffffffffffffc
                               ,4);
        memcpy(_Dst,(void *)puVar2[1],(ulonglong)*(ushort *)((longlong)puVar2 + 6));
      }
      *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 6);
      uVar1 = *(undefined2 *)((longlong)puVar2 + 6);
      puVar3[1] = _Dst;
      *(undefined2 *)((longlong)puVar3 + 6) = uVar1;
      return;
    }
  }
  return;
}

// NetDeserializeDeltaDefault<12,&UE::Net::Private::FFloatTripletNetSerializer<float>::Deserialize,0,0> @ 144324d00

void __cdecl
UE::Net::
NetDeserializeDeltaDefault<12,&UE::Net::Private::FFloatTripletNetSerializer<float>::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->Prev;
    puVar2 = (undefined8 *)param_2->_padding_;
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
    return;
  }
  Private::FFloatTripletNetSerializer<float>::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<12,&UE::Net::FNameAsNetTokenNetSerializer::Deserialize,0,0> @ 144324d70

void __cdecl
UE::Net::NetDeserializeDeltaDefault<12,&UE::Net::FNameAsNetTokenNetSerializer::Deserialize,0,0>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)param_2->Prev;
    puVar2 = (undefined8 *)param_2->_padding_;
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
    return;
  }
  FNameAsNetTokenNetSerializer::Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  return;
}

// NetDeserializeDeltaDefault<&UE::Net::FNetRoleNetSerializer::Deserialize> @ 144324de0

void __cdecl
UE::Net::NetDeserializeDeltaDefault<&UE::Net::FNetRoleNetSerializer::Deserialize>
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined1 *puVar1;
  FNetBitStreamReader *this;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)param_2->_padding_;
  this = param_1->BitStreamReader;
  uVar3 = (uint)*(byte *)(param_2->_padding_ + 0x1a);
  if (0xf < uVar3) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    if ((uVar2 & 1) != 0) {
      *puVar1 = 0;
      return;
    }
  }
  uVar3 = FNetBitStreamReader::ReadBits(this,uVar3);
  *puVar1 = (char)uVar3;
  return;
}

// NetIsEqualDefault<int> @ 144324e50

bool __cdecl
UE::Net::NetIsEqualDefault<int>(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return *(int *)param_2->Source0 == *(int *)param_2->Source1;
}

// NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet> @ 144324e70

bool __cdecl
UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_2->Source1;
  piVar2 = (int *)param_2->Source0;
  if (((*piVar2 == *piVar1) && (piVar2[1] == piVar1[1])) && (piVar2[2] == piVar1[2])) {
    return true;
  }
  return false;
}

// NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet> @ 144324ea0

bool __cdecl
UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_2->Source1;
  plVar2 = (longlong *)param_2->Source0;
  if (((*plVar2 == *plVar1) && (plVar2[1] == plVar1[1])) && (plVar2[2] == plVar1[2])) {
    return true;
  }
  return false;
}

// NetIsEqualDefault<__int64> @ 144324ed0

bool __cdecl
UE::Net::NetIsEqualDefault<__int64>(FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  return *(longlong *)param_2->Source0 == *(longlong *)param_2->Source1;
}

// NetQuantizeDefault<int> @ 144324ef0

void __cdecl
UE::Net::NetQuantizeDefault<int>(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined4 *)param_2->Target = *(undefined4 *)param_2->Source;
  return;
}

// NetQuantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet> @ 144324f10

void __cdecl
UE::Net::NetQuantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}

// NetQuantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet> @ 144324f30

void __cdecl
UE::Net::NetQuantizeDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet>
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  uVar3 = puVar1[1];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = puVar1[2];
  return;
}

// NetQuantizeDefault<__int64> @ 144324f50

void __cdecl
UE::Net::NetQuantizeDefault<__int64>(FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  *(undefined8 *)param_2->Target = *(undefined8 *)param_2->Source;
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FFloatTripletNetSerializer<float>::Serialize,&UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet>_> @ 144324f70

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FFloatTripletNetSerializer<float>::Serialize,&UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<float>::FFloatTriplet>_>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar1 = (int *)param_2->Prev;
  piVar2 = (int *)param_2->_padding_;
  if (((*piVar2 == *piVar1) && (piVar2[1] == piVar1[1])) && (piVar2[2] == piVar1[2])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FFloatTripletNetSerializer<float>::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FFloatTripletNetSerializer<double>::Serialize,&UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet>_> @ 144325000

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FFloatTripletNetSerializer<double>::Serialize,&UE::Net::NetIsEqualDefault<UE::Net::Private::FFloatTripletNetSerializer<double>::FFloatTriplet>_>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar1 = (longlong *)param_2->Prev;
  plVar2 = (longlong *)param_2->_padding_;
  if (((*plVar2 == *plVar1) && (plVar2[1] == plVar1[1])) && (plVar2[2] == plVar1[2])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FFloatTripletNetSerializer<double>::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::IsEqual> @ 144325090

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<UObject_*>::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  
  puVar1 = (ulonglong *)param_2->_padding_;
  puVar2 = (ulonglong *)param_2->Prev;
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar2 ^ *puVar1) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      bVar3 = true;
      goto LAB_1443250f7;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    bVar3 = *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
    goto LAB_1443250f7;
  }
  bVar3 = false;
LAB_1443250f7:
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FObjectNetSerializerBase<UObject_*>::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Serialize,&UE::Net::FObjectPtrNetSerializer::IsEqual> @ 144325140

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Serialize,&UE::Net::FObjectPtrNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  
  puVar1 = (ulonglong *)param_2->_padding_;
  puVar2 = (ulonglong *)param_2->Prev;
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar2 ^ *puVar1) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      bVar3 = true;
      goto LAB_1443251a7;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    bVar3 = *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
    goto LAB_1443251a7;
  }
  bVar3 = false;
LAB_1443251a7:
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FObjectNetSerializerBase<TObjectPtr<UObject>_>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::IsEqual> @ 1443251f0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  
  puVar1 = (ulonglong *)param_2->_padding_;
  puVar2 = (ulonglong *)param_2->Prev;
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar1 ^ *puVar2) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      bVar3 = true;
      goto LAB_144325257;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    bVar3 = *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
    goto LAB_144325257;
  }
  bVar3 = false;
LAB_144325257:
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FObjectNetSerializerBase<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::IsEqual> @ 1443252a0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::Serialize,&UE::Net::Private::FObjectNetSerializerBase<FScriptInterface>::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  
  puVar1 = (ulonglong *)param_2->_padding_;
  puVar2 = (ulonglong *)param_2->Prev;
  if ((longlong *)puVar1[2] == (longlong *)0x0) {
    if (((puVar2[2] == 0) && (((*puVar1 ^ *puVar2) & 0x3fffffffffffff) == 0)) &&
       ((int)puVar1[1] == (int)puVar2[1])) {
      bVar3 = true;
      goto LAB_144325307;
    }
  }
  else if ((longlong *)puVar2[2] != (longlong *)0x0) {
    bVar3 = *(longlong *)puVar1[2] == *(longlong *)puVar2[2];
    goto LAB_144325307;
  }
  bVar3 = false;
LAB_144325307:
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar3,1);
  if (!bVar3) {
    Private::FObjectNetSerializerBase<FScriptInterface>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Serialize,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::IsEqual> @ 144325350

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Serialize,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar9 = (int *)param_2->Prev;
  piVar10 = (int *)param_2->_padding_;
  iVar2 = piVar9[3];
  iVar3 = piVar10[3];
  iVar4 = piVar9[2];
  iVar5 = piVar10[1];
  iVar6 = piVar10[2];
  iVar1 = piVar9[1];
  iVar7 = *piVar9;
  iVar8 = *piVar10;
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,
             (uint)((iVar5 == iVar1 && (iVar3 == iVar2 && iVar6 == iVar4)) && iVar8 == iVar7),1);
  if ((iVar5 != iVar1 || (iVar3 != iVar2 || iVar6 != iVar4)) || iVar8 != iVar7) {
    Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<float>_>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Serialize,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::IsEqual> @ 1443253f0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Serialize,&UE::Net::Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar1 = (longlong *)param_2->Prev;
  plVar2 = (longlong *)param_2->_padding_;
  bVar9 = (int)plVar2[3] == (int)plVar1[3];
  lVar3 = plVar1[2];
  lVar4 = plVar2[1];
  lVar5 = plVar2[2];
  lVar6 = plVar1[1];
  lVar7 = *plVar1;
  lVar8 = *plVar2;
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,
             (uint)((lVar4 == lVar6 && (bVar9 && lVar5 == lVar3)) && lVar8 == lVar7),1);
  if ((lVar4 != lVar6 || (!bVar9 || lVar5 != lVar3)) || lVar8 != lVar7) {
    Private::FUnitQuatNetSerializerBase<UE::Math::TQuat<double>_>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FLastResortPropertyNetSerializer::Serialize,&UE::Net::FLastResortPropertyNetSerializer::IsEqual> @ 1443254a0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FLastResortPropertyNetSerializer::Serialize,&UE::Net::FLastResortPropertyNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  bool bVar1;
  FNetIsEqualArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  this = param_1->BitStreamWriter;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38.Source0 = param_2->_padding_;
  local_38.Source1 = param_2->Prev;
  local_38.bStateIsQuantized = true;
  bVar1 = FLastResortPropertyNetSerializer::IsEqual(param_1,&local_38);
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,1);
  if (!bVar1) {
    FLastResortPropertyNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FNameAsNetTokenNetSerializer::Serialize,&UE::Net::FNameAsNetTokenNetSerializer::IsEqual> @ 144325540

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FNameAsNetTokenNetSerializer::Serialize,&UE::Net::FNameAsNetTokenNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  bool bVar1;
  FNetIsEqualArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  this = param_1->BitStreamWriter;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38.Source0 = param_2->_padding_;
  local_38.Source1 = param_2->Prev;
  local_38.bStateIsQuantized = true;
  bVar1 = FNameAsNetTokenNetSerializer::IsEqual(param_1,&local_38);
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,1);
  if (!bVar1) {
    FNameAsNetTokenNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FNameNetSerializer::Serialize,&UE::Net::FNameNetSerializer::IsEqual> @ 1443255e0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FNameNetSerializer::Serialize,&UE::Net::FNameNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  bool bVar1;
  FNetIsEqualArgs local_38;
  
  local_38._padding_ = param_2->_padding_;
  this = param_1->BitStreamWriter;
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38.Source0 = param_2->_padding_;
  local_38.Source1 = param_2->Prev;
  local_38.bStateIsQuantized = true;
  bVar1 = FNameNetSerializer::IsEqual(param_1,&local_38);
  FNetBitStreamWriter::WriteBits(this,(uint)bVar1,1);
  if (!bVar1) {
    FNameNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FNetRoleNetSerializer::Serialize> @ 144325680

void __cdecl
UE::Net::NetSerializeDeltaDefault<&UE::Net::FNetRoleNetSerializer::Serialize>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  FNetBitStreamWriter *this;
  
  lVar3 = param_2->_padding_;
  if ((*(uint *)&param_1->InternalContext->field_0x30 &
      (uint)(*(char *)param_2->_padding_ == *(char *)(lVar3 + 0x1b))) == 0) {
    Private::FIntRangeNetSerializerBase<unsigned_char,FNetRoleNetSerializerConfig>::Serialize
              (param_1,(FNetSerializeArgs *)param_2);
    return;
  }
  this = param_1->BitStreamWriter;
  bVar1 = *(byte *)(lVar3 + 0x1a);
  bVar2 = *(byte *)(lVar3 + 0x1c);
  if ((0xf < bVar1) && (FNetBitStreamWriter::WriteBits(this,(uint)(bVar2 == 0),1), bVar2 == 0)) {
    return;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar2,(uint)bVar1);
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FRemoteObjectIdNetSerializer::Serialize,&UE::Net::FRemoteObjectIdNetSerializer::IsEqual> @ 144325690

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FRemoteObjectIdNetSerializer::Serialize,&UE::Net::FRemoteObjectIdNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  FNetBitStreamWriter *this;
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(longlong *)param_2->_padding_ == *(longlong *)param_2->Prev;
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar2,1);
  if (!bVar2) {
    this = param_1->BitStreamWriter;
    uVar1 = *(undefined8 *)param_2->_padding_;
    FNetBitStreamWriter::WriteBits(this,(uint)uVar1,0x20);
    FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)uVar1 >> 0x20),0x20);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FRemoteServerIdNetSerializer::Serialize,&UE::Net::FRemoteServerIdNetSerializer::IsEqual> @ 144325720

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FRemoteServerIdNetSerializer::Serialize,&UE::Net::FRemoteServerIdNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  bool bVar1;
  
  bVar1 = *(short *)param_2->_padding_ == *(short *)param_2->Prev;
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)bVar1,1);
  if (!bVar1) {
    FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)*(ushort *)param_2->_padding_,10);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FSoftObjectNetSerializer::Serialize,&UE::Net::FSoftObjectNetSerializer::IsEqual> @ 1443257a0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FSoftObjectNetSerializer::Serialize,&UE::Net::FSoftObjectNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bStack_50;
  undefined3 uStack_4f;
  FNetIsEqualArgs local_48;
  
  puVar1 = (uint *)param_2->_padding_;
  puVar2 = (uint *)param_2->Prev;
  this = param_1->BitStreamWriter;
  if ((char)puVar1[10] == (char)puVar2[10]) {
    if ((char)puVar1[10] == '\0') {
      uVar4 = (*puVar2 ^ *puVar1) & 1;
      if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        iVar5 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                       (ulonglong)*(ushort *)((longlong)puVar1 + 6));
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = false;
      }
    }
    else {
      local_48._padding_ = 0;
      local_48._padding_ = (longlong)FSoftObjectNetSerializer::ObjectNetSerializerConfig;
      local_48._padding_._0_4_ = 0;
      local_48.bStateIsQuantized = true;
      local_48._41_3_ = uStack_4f;
      local_48.Source0 = (ulong64)puVar1;
      local_48.Source1 = (ulong64)puVar2;
      bVar3 = (*FSoftObjectNetSerializer::ObjectNetSerializer->IsEqual)(param_1,&local_48);
    }
  }
  else {
    bVar3 = false;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar3 != false),1);
  if (bVar3 == false) {
    FSoftObjectNetSerializer::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FSoftClassPathNetSerializer::IsEqual> @ 1443258e0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FSoftClassPathNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = (uint *)param_2->_padding_;
  puVar2 = (uint *)param_2->Prev;
  this = param_1->BitStreamWriter;
  uVar3 = (*puVar1 ^ *puVar2) & 1;
  if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    iVar4 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                   (ulonglong)*(ushort *)((longlong)puVar1 + 6));
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = false;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar5,1);
  if (!bVar5) {
    Private::FStringNetSerializerBase::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FSoftObjectPathNetSerializer::IsEqual> @ 144325990

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FSoftObjectPathNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = (uint *)param_2->_padding_;
  puVar2 = (uint *)param_2->Prev;
  this = param_1->BitStreamWriter;
  uVar3 = (*puVar1 ^ *puVar2) & 1;
  if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    iVar4 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                   (ulonglong)*(ushort *)((longlong)puVar1 + 6));
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = false;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar5,1);
  if (!bVar5) {
    Private::FStringNetSerializerBase::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FStringNetSerializer::IsEqual> @ 144325a40

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::Private::FStringNetSerializerBase::Serialize,&UE::Net::FStringNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  puVar1 = (uint *)param_2->_padding_;
  puVar2 = (uint *)param_2->Prev;
  this = param_1->BitStreamWriter;
  uVar3 = (*puVar1 ^ *puVar2) & 1;
  if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    iVar4 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                   (ulonglong)*(ushort *)((longlong)puVar1 + 6));
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = false;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)bVar5,1);
  if (!bVar5) {
    Private::FStringNetSerializerBase::Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// NetSerializeDeltaDefault<&UE::Net::FVectorNetQuantizeNormalNetSerializer::Serialize,&UE::Net::FVectorNetQuantizeNormalNetSerializer::IsEqual> @ 144325af0

void __cdecl
UE::Net::
NetSerializeDeltaDefault<&UE::Net::FVectorNetQuantizeNormalNetSerializer::Serialize,&UE::Net::FVectorNetQuantizeNormalNetSerializer::IsEqual>
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  FNetBitStreamWriter *this;
  
  piVar9 = (int *)param_2->Prev;
  piVar10 = (int *)param_2->_padding_;
  iVar2 = piVar9[3];
  iVar3 = piVar10[3];
  iVar4 = piVar9[2];
  iVar5 = piVar10[1];
  iVar6 = piVar10[2];
  iVar1 = piVar9[1];
  iVar7 = *piVar9;
  iVar8 = *piVar10;
  FNetBitStreamWriter::WriteBits
            (param_1->BitStreamWriter,
             (uint)((iVar5 == iVar1 && (iVar3 == iVar2 && iVar6 == iVar4)) && iVar8 == iVar7),1);
  if ((iVar5 != iVar1 || (iVar3 != iVar2 || iVar6 != iVar4)) || iVar8 != iVar7) {
    puVar11 = (uint *)param_2->_padding_;
    this = param_1->BitStreamWriter;
    FNetBitStreamWriter::WriteBits(this,*puVar11,0x10);
    FNetBitStreamWriter::WriteBits(this,puVar11[1],0x10);
    FNetBitStreamWriter::WriteBits(this,puVar11[2],0x10);
  }
  return;
}

// ReadSparseBitArrayDelta<unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)> @ 144325e40

void __cdecl
UE::Net::Private::
ReadSparseBitArrayDelta<unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
          (FNetBitStreamReader *param_1,uint *param_2,uint *param_3,uint param_4,
          _func___cdecl_uint_FNetBitStreamReader_ptr_uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar8 = 0xffffffff >> (-(char)param_4 & 0x1fU);
  uVar1 = FNetBitStreamReader::ReadBits(param_1,param_4 + 0x1f >> 5);
  uVar3 = 0;
  uVar6 = 1;
  uVar5 = 0;
  if (0x1f < param_4) {
    uVar7 = (ulonglong)(param_4 >> 5);
    uVar4 = uVar5;
    do {
      if ((uVar1 & uVar6) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*param_5)(param_1,0x20);
      }
      uVar6 = uVar6 * 2;
      param_4 = param_4 - 0x20;
      uVar5 = uVar4 + 1;
      param_2[uVar4] = uVar2 ^ param_3[uVar4];
      uVar7 = uVar7 - 1;
      uVar4 = uVar5;
    } while (uVar7 != 0);
  }
  if (param_4 != 0) {
    if ((uVar1 & uVar6) != 0) {
      uVar3 = (*param_5)(param_1,param_4);
    }
    param_2[uVar5] = (uVar3 ^ param_3[uVar5]) & uVar8 | ~uVar8 & param_2[uVar5];
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_> @ 144325f40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
          (ushort param_1,ForElementType<TObjectPtr<UObject>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 144326000

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x400;
    uVar8 = (ulonglong)param_1;
    if (0x400 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x401) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_> @ 1443260e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TObjectPtr<UObject>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1443261b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_> @ 144326280

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2048,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
          (uint param_1,uint param_2,int param_3,ForElementType<wchar_t> *param_4,int *param_5,
          int *param_6)

{
  ForElementType<wchar_t> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<wchar_t> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x801) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x800;
LAB_144326344:
    uVar6 = uVar8;
    if (_Src == (ForElementType<wchar_t>)0x0) goto LAB_144326396;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 2);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x801) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x801) goto LAB_144326344;
    iVar5 = iVar1;
    if (_Src == (ForElementType<wchar_t>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 2);
      goto LAB_144326396;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_144326396:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<char>_> @ 1443263d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<char>_>
          (uint param_1,uint param_2,ForElementType<char> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x400;
  if (0x400 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 144326490

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x400;
  if (0x400 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_> @ 144326550

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>_>
          (uint param_1,uint param_2,ForElementType<TObjectPtr<UObject>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UObject>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// WriteSparseBitArrayDelta<void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)> @ 144326990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::
WriteSparseBitArrayDelta<void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
          (FNetBitStreamWriter *param_1,uint *param_2,uint *param_3,uint param_4,
          _func___cdecl_void_FNetBitStreamWriter_ptr_uint_uint *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f8 [32];
  int local_d8;
  uint local_c8 [32];
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar2 = 0;
  uVar9 = 0;
  uVar5 = 1;
  uVar8 = 0xffffffff >> (-(char)param_4 & 0x1fU);
  uVar7 = param_4 + 0x1f >> 5;
  uVar4 = 1;
  local_d8 = uVar7 - 1;
  if (param_4 + 0x1f >> 5 != 0) {
    uVar3 = uVar2;
    puVar6 = param_3;
    uVar10 = uVar2;
    do {
      uVar1 = 0xffffffff;
      if ((int)uVar3 == local_d8) {
        uVar1 = uVar8;
      }
      uVar1 = (*(uint *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_3)) ^ *puVar6) &
              uVar1;
      *(uint *)((longlong)puVar6 + ((longlong)local_c8 - (longlong)param_3)) = uVar1;
      uVar9 = 0;
      if (uVar1 != 0) {
        uVar9 = uVar4;
      }
      uVar4 = uVar4 * 2;
      uVar9 = (uint)uVar10 | uVar9;
      uVar10 = (ulonglong)uVar9;
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
      puVar6 = puVar6 + 1;
    } while (uVar1 < uVar7);
  }
  FNetBitStreamWriter::WriteBits(param_1,uVar9,uVar7);
  if (0x1f < param_4) {
    uVar3 = (ulonglong)(param_4 >> 5);
    do {
      if ((uVar9 & uVar5) != 0) {
        (*param_5)(param_1,local_c8[uVar2],0x20);
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar5 = uVar5 * 2;
      param_4 = param_4 - 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((param_4 != 0) && ((uVar9 & uVar5) != 0)) {
    (*param_5)(param_1,local_c8[uVar2] & uVar8,param_4);
  }
  return;
}

// InitEnumNetSerializerConfig @ 144331c90

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig(FEnumInt16NetSerializerConfig *param_1,UEnum *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  TTuple<FName,__int64> local_28;
  
  iVar1 = (param_2->Names).NumValues;
  if (iVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = 1;
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
  }
  else {
    iVar10 = 0;
    lVar11 = -0x8000000000000000;
    lVar12 = 0x7fffffffffffffff;
    do {
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar10);
      lVar2 = *(longlong *)&pTVar7->field_0x8;
      lVar8 = lVar2;
      if (lVar12 < lVar2) {
        lVar8 = lVar12;
      }
      lVar9 = 0x7fff;
      if (lVar2 < 0x7fff) {
        lVar9 = lVar2;
      }
      if (lVar9 < lVar11) {
        lVar9 = lVar11;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar9;
      lVar12 = lVar8;
    } while (iVar10 != iVar1);
    param_1->UpperBound = (short)lVar9;
    param_1->LowerBound = (short)lVar8;
    uVar6 = (ulonglong)(ushort)((short)lVar9 - (short)lVar8) * 2 + 1;
  }
  lVar11 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar11;
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144331dd0

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig(FEnumInt32NetSerializerConfig *param_1,UEnum *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  TTuple<FName,__int64> local_28;
  
  iVar1 = (param_2->Names).NumValues;
  if (iVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = 1;
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
  }
  else {
    iVar10 = 0;
    lVar11 = -0x8000000000000000;
    lVar12 = 0x7fffffffffffffff;
    do {
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar10);
      lVar2 = *(longlong *)&pTVar7->field_0x8;
      lVar8 = lVar2;
      if (lVar12 < lVar2) {
        lVar8 = lVar12;
      }
      lVar9 = 0x7fffffff;
      if (lVar2 < 0x7fffffff) {
        lVar9 = lVar2;
      }
      if (lVar9 < lVar11) {
        lVar9 = lVar11;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar9;
      lVar12 = lVar8;
    } while (iVar10 != iVar1);
    param_1->UpperBound = (int)lVar9;
    param_1->LowerBound = (int)lVar8;
    uVar6 = (ulonglong)(uint)((int)lVar9 - (int)lVar8) * 2 + 1;
  }
  lVar11 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar11;
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144331f00

/* WARNING: Removing unreachable block (ram,0x000144331f50) */

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig(FEnumInt64NetSerializerConfig *param_1,UEnum *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  TTuple<FName,__int64> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  TTuple<FName,__int64> local_38;
  
  iVar1 = (param_2->Names).NumValues;
  if (iVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
    bVar4 = true;
    cVar6 = '?';
  }
  else {
    iVar10 = 0;
    lVar11 = -0x8000000000000000;
    lVar12 = 0x7fffffffffffffff;
    do {
      if (((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_38,iVar10);
      lVar2 = *(longlong *)&pTVar7->field_0x8;
      lVar8 = lVar2;
      if (lVar12 < lVar2) {
        lVar8 = lVar12;
      }
      lVar9 = 0x7fffffffffffffff;
      if (lVar2 < 0x7fffffffffffffff) {
        lVar9 = lVar2;
      }
      if (lVar9 < lVar11) {
        lVar9 = lVar11;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar9;
      lVar12 = lVar8;
    } while (iVar10 != iVar1);
    param_1->UpperBound = lVar9;
    lVar11 = 0x3f;
    bVar4 = lVar9 - lVar8 == 0;
    if (!bVar4) {
      for (; (ulonglong)(lVar9 - lVar8) >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    cVar6 = (char)lVar11;
    param_1->LowerBound = lVar8;
  }
  if (bVar4) {
    cVar6 = -1;
  }
  param_1->BitCount = cVar6 + '\x01';
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144332050

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig(FEnumInt8NetSerializerConfig *param_1,UEnum *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  TTuple<FName,__int64> local_28;
  
  iVar1 = (param_2->Names).NumValues;
  if (iVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    param_1->LowerBound = '\0';
    param_1->UpperBound = '\0';
    uVar6 = 1;
  }
  else {
    iVar10 = 0;
    lVar11 = -0x8000000000000000;
    lVar12 = 0x7fffffffffffffff;
    do {
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar10);
      lVar2 = *(longlong *)&pTVar7->field_0x8;
      lVar8 = lVar2;
      if (lVar12 < lVar2) {
        lVar8 = lVar12;
      }
      lVar9 = 0x7f;
      if (lVar2 < 0x7f) {
        lVar9 = lVar2;
      }
      if (lVar9 < lVar11) {
        lVar9 = lVar11;
      }
      iVar10 = iVar10 + 1;
      lVar11 = lVar9;
      lVar12 = lVar8;
    } while (iVar10 != iVar1);
    param_1->UpperBound = (char)lVar9;
    param_1->LowerBound = (char)lVar8;
    uVar6 = (ulonglong)(byte)((char)lVar9 - (char)lVar8) * 2 + 1;
  }
  lVar11 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar11;
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144332190

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig
          (FEnumUint16NetSerializerConfig *param_1,UEnum *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TTuple<FName,__int64> local_28;
  
  uVar1 = (param_2->Names).NumValues;
  if ((int)uVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = 1;
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
  }
  else {
    uVar11 = 0;
    uVar6 = uVar11;
    uVar12 = 0xffffffffffffffff;
    do {
      iVar10 = (int)uVar11;
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar10);
      uVar11 = *(ulonglong *)&pTVar7->field_0x8;
      uVar8 = uVar11;
      if (uVar12 < uVar11) {
        uVar8 = uVar12;
      }
      uVar9 = 0xffff;
      if (uVar11 < 0xffff) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      uVar6 = uVar9;
      uVar12 = uVar8;
    } while (iVar10 + 1U != uVar1);
    param_1->UpperBound = (ushort)uVar9;
    param_1->LowerBound = (ushort)uVar8;
    uVar6 = (ulonglong)(((uint)uVar9 & 0xffff) - ((uint)uVar8 & 0xffff)) * 2 + 1;
  }
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar2;
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 1443322c0

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig
          (FEnumUint32NetSerializerConfig *param_1,UEnum *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TTuple<FName,__int64> local_38;
  
  uVar1 = (param_2->Names).NumValues;
  if ((int)uVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = 1;
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
  }
  else {
    uVar11 = 0;
    uVar6 = uVar11;
    uVar12 = 0xffffffffffffffff;
    do {
      iVar10 = (int)uVar11;
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_38,iVar10);
      uVar11 = *(ulonglong *)&pTVar7->field_0x8;
      uVar8 = uVar11;
      if (uVar12 < uVar11) {
        uVar8 = uVar12;
      }
      uVar9 = 0xffffffff;
      if (uVar11 < 0xffffffff) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      uVar6 = uVar9;
      uVar12 = uVar8;
    } while (iVar10 + 1U != uVar1);
    param_1->UpperBound = (uint)uVar9;
    param_1->LowerBound = (uint)uVar8;
    uVar6 = (ulonglong)((uint)uVar9 - (uint)uVar8) * 2 + 1;
  }
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar2;
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144332400

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig
          (FEnumUint64NetSerializerConfig *param_1,UEnum *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  TTuple<FName,__int64> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  TTuple<FName,__int64> local_28;
  
  uVar1 = (param_2->Names).NumValues;
  if ((int)uVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar11 = 0;
    param_1->LowerBound = 0;
    param_1->UpperBound = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = uVar10;
    uVar13 = 0xffffffffffffffff;
    do {
      iVar12 = (int)uVar10;
      if ((iVar12 < 0) || ((param_2->Names).NumValues <= iVar12)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar12);
      uVar10 = *(ulonglong *)&pTVar7->field_0x8;
      uVar8 = uVar10;
      if (uVar13 < uVar10) {
        uVar8 = uVar13;
      }
      uVar9 = 0xffffffffffffffff;
      if (uVar10 != 0xffffffffffffffff) {
        uVar9 = uVar10;
      }
      if (uVar9 < uVar11) {
        uVar9 = uVar11;
      }
      uVar10 = (ulonglong)(iVar12 + 1U);
      uVar11 = uVar9;
      uVar13 = uVar8;
    } while (iVar12 + 1U != uVar1);
    uVar11 = uVar9 - uVar8;
    param_1->LowerBound = uVar8;
    param_1->UpperBound = uVar9;
  }
  lVar2 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  cVar6 = (char)lVar2;
  if (uVar11 == 0) {
    cVar6 = -1;
  }
  param_1->BitCount = cVar6 + '\x01';
  param_1->Enum = param_2;
  return true;
}

// InitEnumNetSerializerConfig @ 144332530

bool __cdecl
UE::Net::Private::InitEnumNetSerializerConfig(FEnumUint8NetSerializerConfig *param_1,UEnum *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  TTuple<FName,__int64> *pTVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TTuple<FName,__int64> local_28;
  
  uVar1 = (param_2->Names).NumValues;
  if ((int)uVar1 < 1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2828240010275192804>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                       ,0x1c,"EnumValueCount > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    param_1->LowerBound = '\0';
    param_1->UpperBound = '\0';
    uVar6 = 1;
  }
  else {
    uVar11 = 0;
    uVar6 = uVar11;
    uVar12 = 0xffffffffffffffff;
    do {
      iVar10 = (int)uVar11;
      if ((iVar10 < 0) || ((param_2->Names).NumValues <= iVar10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pTVar7 = UEnum::FNameData::operator[](&param_2->Names,&local_28,iVar10);
      uVar11 = *(ulonglong *)&pTVar7->field_0x8;
      uVar8 = uVar11;
      if (uVar12 < uVar11) {
        uVar8 = uVar12;
      }
      uVar9 = 0xff;
      if (uVar11 < 0xff) {
        uVar9 = uVar11;
      }
      if (uVar9 < uVar6) {
        uVar9 = uVar6;
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      uVar6 = uVar9;
      uVar12 = uVar8;
    } while (iVar10 + 1U != uVar1);
    param_1->UpperBound = (uchar)uVar9;
    param_1->LowerBound = (uchar)uVar8;
    uVar6 = (ulonglong)(((uint)uVar9 & 0xff) - ((uint)uVar8 & 0xff)) * 2 + 1;
  }
  lVar2 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  param_1->BitCount = (uchar)lVar2;
  param_1->Enum = param_2;
  return true;
}

// InitLastResortPropertyNetSerializerConfigFromProperty @ 144332cc0

bool __cdecl
UE::Net::InitLastResortPropertyNetSerializerConfigFromProperty
          (FLastResortPropertyNetSerializerConfig *param_1,FProperty *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  undefined1 uVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FProperty *pFVar9;
  int iVar10;
  undefined1 *puVar11;
  FFieldPath local_38;
  
  if ((param_2 == (FProperty *)0x0) ||
     (pFVar9 = param_2, (*(uint *)(param_2->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    pFVar9 = (FProperty *)0x0;
  }
  local_38.ResolvedField = (FField *)0x0;
  local_38.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_38.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_38.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Path.ArrayNum = 0;
  local_38.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_38,(FField *)pFVar9);
  pFVar7 = FProperty::StaticClass();
  if ((local_38.ResolvedField == (FField *)0x0) ||
     (bVar5 = FWeakObjectPtr::IsValid(&local_38.ResolvedOwner.WeakPtr),
     pFVar8 = local_38.ResolvedField, !bVar5)) {
    iVar10 = 0;
    if (local_38.Path.ArrayNum == 0) goto LAB_144332dd3;
    pFVar8 = FFieldPath::TryToResolvePath(&local_38,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar8 != (FField *)0x0) {
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = pFVar8->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar7) {
            bVar5 = true;
            goto LAB_144332db1;
          }
        }
        bVar5 = false;
      }
      else {
        bVar5 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
LAB_144332db1:
      if (bVar5) goto LAB_144332dd0;
    }
    pFVar8 = local_38.ResolvedField;
    if (local_38.ResolvedField != (FField *)0x0) {
      local_38.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_38.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_38.ResolvedField = (FField *)0x0;
      pFVar8 = local_38.ResolvedField;
    }
  }
LAB_144332dd0:
  local_38.ResolvedField = pFVar8;
  iVar10 = local_38.Path.ArrayNum;
LAB_144332dd3:
  _Src.Data = local_38.Path.AllocatorInstance.Data;
  *(FField **)&param_1->Property = local_38.ResolvedField;
  *(int *)&(param_1->Property).field_0x8 = local_38.ResolvedOwner.WeakPtr.ObjectIndex;
  *(int *)&(param_1->Property).field_0xc = local_38.ResolvedOwner.WeakPtr.ObjectSerialNumber;
  puVar11 = &(param_1->Property).field_0x10;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar11 != &local_38.Path) {
    iVar2 = *(int *)&(param_1->Property).field_0x1c;
    puVar1 = &(param_1->Property).field_0x1c;
    *(int *)&(param_1->Property).field_0x18 = iVar10;
    if ((iVar10 == 0) && (iVar2 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar10,iVar2,(ForAnyElementType *)puVar11,iVar10,(int *)puVar1);
      if (iVar10 != 0) {
        memcpy(*(void **)puVar11,_Src.Data,(longlong)iVar10 << 3);
      }
    }
  }
  if (local_38.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Path.AllocatorInstance.Data);
  }
  return param_2 != (FProperty *)0x0;
}

// IsObjectReferenceNetSerializer @ 144334880

bool __cdecl UE::Net::IsObjectReferenceNetSerializer(FNetSerializer *param_1)

{
  if ((((param_1 != &FObjectNetSerializerNetSerializerInfo::Serializer) &&
       (param_1 != &FObjectPtrNetSerializerNetSerializerInfo::Serializer)) &&
      (param_1 != &FWeakObjectNetSerializerNetSerializerInfo::Serializer)) &&
     (param_1 != &FScriptInterfaceNetSerializerNetSerializerInfo::Serializer)) {
    return false;
  }
  return true;
}

// PartialInitNetRoleSerializerConfig @ 1443349f0

bool __cdecl
UE::Net::PartialInitNetRoleSerializerConfig(FNetRoleNetSerializerConfig *param_1,UEnum *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FName,__int64> *pTVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  long64 lVar8;
  long64 lVar9;
  uchar uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uchar uVar15;
  FString local_58;
  FString local_48;
  TTuple<FName,__int64> local_38;
  
  if (FNetRoleNetSerializer::CachedConfig.BitCount == '\0') {
    uVar1 = (param_2->Names).NumValues;
    if ((int)uVar1 < 1) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2828240010275192804>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\InternalEnumNetSerializers.cpp"
                         ,0x1c,"EnumValueCount > 0");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar10 = '\0';
      uVar15 = '\0';
      for (uVar14 = 0x3f; 1UL >> uVar14 == 0; uVar14 = uVar14 - 1) {
      }
    }
    else {
      uVar12 = 0;
      uVar13 = uVar12;
      uVar14 = 0xffffffffffffffff;
      do {
        iVar11 = (int)uVar12;
        if (((iVar11 < 0) || ((param_2->Names).NumValues <= iVar11)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pTVar5 = UEnum::FNameData::operator[](&param_2->Names,&local_38,iVar11);
        uVar12 = *(ulonglong *)&pTVar5->field_0x8;
        uVar6 = uVar12;
        if (uVar14 < uVar12) {
          uVar6 = uVar14;
        }
        uVar7 = 0xff;
        if (uVar12 < 0xff) {
          uVar7 = uVar12;
        }
        if (uVar7 < uVar13) {
          uVar7 = uVar13;
        }
        uVar12 = (ulonglong)(iVar11 + 1U);
        uVar13 = uVar7;
        uVar14 = uVar6;
      } while (iVar11 + 1U != uVar1);
      uVar15 = (uchar)uVar7;
      uVar10 = (uchar)uVar6;
      uVar13 = (ulonglong)(((uint)uVar7 & 0xff) - ((uint)uVar6 & 0xff)) * 2 + 1;
      uVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar14 == 0; uVar14 = uVar14 - 1) {
        }
      }
      uVar14 = uVar14 & 0xff;
      if ((uVar10 != '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumConfig.LowerBound == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetRoleNetSerializer.cpp"
                             ,0x6e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    ::FString::FString(&local_58,L"ROLE_AutonomousProxy");
    lVar8 = UEnum::GetValueByNameString(param_2,&local_58,CaseSensitive);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((0xfe < lVar8 - 1U) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AutonomousProxyValue > 0 && AutonomousProxyValue < 256",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetRoleNetSerializer.cpp"
                           ,0x71,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ::FString::FString(&local_48,L"ROLE_SimulatedProxy");
    lVar9 = UEnum::GetValueByNameString(param_2,&local_48,CaseSensitive);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((0xfe < lVar9 - 1U) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SimulatedProxyValue > 0 && SimulatedProxyValue < 256",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetRoleNetSerializer.cpp"
                           ,0x73,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FNetRoleNetSerializer::CachedConfig.BitCount = (uchar)uVar14;
    FNetRoleNetSerializer::CachedConfig.AutonomousProxyValue = (uchar)lVar8;
    FNetRoleNetSerializer::CachedConfig.SimulatedProxyValue = (uchar)lVar9;
    FNetRoleNetSerializer::CachedConfig.LowerBound = uVar10;
    FNetRoleNetSerializer::CachedConfig.UpperBound = uVar15;
    FNetRoleNetSerializer::CachedConfig.Enum = param_2;
  }
  *(undefined4 *)&param_1->_padding_ = (undefined4)FNetRoleNetSerializer::CachedConfig._padding_;
  param_1->RelativeInternalOffsetToOtherRole =
       FNetRoleNetSerializer::CachedConfig.RelativeInternalOffsetToOtherRole;
  param_1->RelativeExternalOffsetToOtherRole =
       FNetRoleNetSerializer::CachedConfig.RelativeExternalOffsetToOtherRole;
  param_1->LowerBound = FNetRoleNetSerializer::CachedConfig.LowerBound;
  param_1->UpperBound = FNetRoleNetSerializer::CachedConfig.UpperBound;
  param_1->BitCount = FNetRoleNetSerializer::CachedConfig.BitCount;
  param_1->AutonomousProxyValue = FNetRoleNetSerializer::CachedConfig.AutonomousProxyValue;
  param_1->SimulatedProxyValue = FNetRoleNetSerializer::CachedConfig.SimulatedProxyValue;
  param_1->Enum = FNetRoleNetSerializer::CachedConfig.Enum;
  return true;
}

// ReadAndVerifySentinelBits @ 144337660

bool __cdecl
UE::Net::ReadAndVerifySentinelBits(FNetBitStreamReader *param_1,wchar_t *param_2,uint param_3)

{
  bool bVar1;
  FNetBitStreamReader *local_res8;
  wchar_t *local_res10;
  uint local_res18 [2];
  uint local_res20 [2];
  wchar_t **local_28;
  FNetBitStreamReader **local_20;
  uint *local_18;
  uint *local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = FNetBitStreamReader::ReadBits(param_1,param_3);
  local_res20[0] = 0xffffffffU >> (0x20U - (char)param_3 & 0x1f) & 0xbaaddead;
  if ((local_res8->OverflowBitCount != 0) || (local_res20[0] != local_res18[0])) {
    local_28 = &local_res10;
    local_20 = &local_res8;
    local_18 = local_res18;
    local_10 = local_res20;
    bVar1 = `UE::Net::ReadAndVerifySentinelBits'::__l2::<lambda_1>::operator()(&local_28);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// ReadBytes @ 1443379b0

void __cdecl UE::Net::ReadBytes(FNetBitStreamReader *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    for (; (((ulonglong)param_2 & 3) != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      uVar1 = FNetBitStreamReader::ReadBits(param_1,8);
      *param_2 = (char)uVar1;
      param_2 = (uchar *)((longlong)param_2 + 1);
    }
    uVar1 = param_3 >> 2;
    if (uVar1 != 0) {
      FNetBitStreamReader::ReadBitStream(param_1,(uint *)param_2,uVar1 << 5);
      param_2 = (uchar *)((longlong)param_2 + (ulonglong)(uVar1 * 4));
      param_3 = param_3 + uVar1 * -4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = FNetBitStreamReader::ReadBits(param_1,8);
      *param_2 = (char)uVar1;
      param_2 = (uchar *)((longlong)param_2 + 1);
    }
  }
  return;
}

// ReadConditionallyQuantizedVector @ 144337a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::ReadConditionallyQuantizedVector
          (FNetBitStreamReader *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetDeserializeArgs_ptr *p_Var4;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetDequantizeArgs_ptr *p_Var5;
  longlong lVar6;
  FNetSerializer *pFVar7;
  undefined1 auStack_438 [32];
  FNetDeserializeArgs local_418;
  FNetDequantizeArgs local_3f8;
  FNetRefHandle_u_0 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0 [95];
  undefined4 local_b8;
  FNetBitStreamReader *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  uVar2 = FNetBitStreamReader::ReadBits(param_1,1);
  if ((uVar2 & 1) == 0) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  else {
    uVar2 = FNetBitStreamReader::ReadBits(param_1,1);
    pFVar7 = &FVectorNetSerializerNetSerializerInfo::Serializer;
    uVar2 = uVar2 & 1;
    lVar6 = 0x20;
    if (uVar2 != 0) {
      pFVar7 = &FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer;
    }
    local_3c8.Value = 0;
    puVar3 = local_3b0;
    local_3c0 = 0;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    local_418._padding_._0_4_ = pFVar7->Version;
    local_68 = local_68 & 0xfffffffc;
    local_418.Target = (ulong64)&local_58;
    local_b8 = 0;
    p_Var4 = FVectorNetSerializerNetSerializerInfo::Serializer.Deserialize;
    local_418._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    if (uVar2 != 0) {
      p_Var4 = FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.Deserialize;
      local_418._padding_ =
           (longlong)FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0xffffffff;
    local_58 = 0;
    uStack_50 = 0;
    local_418._padding_ = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_b0 = param_1;
    (*p_Var4)((FNetSerializationContext *)&local_3c8._s_0,&local_418);
    local_3f8._padding_._0_4_ = pFVar7->Version;
    local_3f8.Source = local_418.Target;
    p_Var5 = FVectorNetSerializerNetSerializerInfo::Serializer.Dequantize;
    local_3f8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    if (uVar2 != 0) {
      p_Var5 = FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.Dequantize;
      local_3f8._padding_ =
           (longlong)FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    }
    local_3f8._padding_ = 0;
    local_3f8.Target = (ulong64)param_2;
    (*p_Var5)((FNetSerializationContext *)&local_3c8._s_0,&local_3f8);
  }
  return;
}

// ReadFullNetObjectReference @ 144337c30

void __cdecl
UE::Net::ReadFullNetObjectReference(FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  Private::FObjectReferenceCache::ReadFullReference
            (param_1->InternalContext->ObjectReferenceCache,param_1,param_2);
  return;
}

// ReadNetRefHandle @ 144337c50

FNetRefHandle __cdecl UE::Net::ReadNetRefHandle(FNetSerializationContext *param_1)

{
  FNetBitStreamReader *this;
  uint uVar1;
  uint uVar2;
  longlong in_RDX;
  
  this = *(FNetBitStreamReader **)(in_RDX + 0x318);
  uVar1 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar1 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,3);
    uVar1 = uVar2 * 8 + 8;
    if (uVar1 < 0x21) {
      FNetBitStreamReader::ReadBits(this,uVar1);
    }
    else {
      FNetBitStreamReader::ReadBits(this,0x20);
      FNetBitStreamReader::ReadBits(this,uVar2 * 8 - 0x18);
    }
    if (this->OverflowBitCount == 0) {
      Private::FNetRefHandleManager::MakeNetRefHandleFromId((ulong64)param_1);
      return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
    }
  }
  (param_1->ErrorContext).ObjectHandle.field0_0x0.Value = 0;
  return (FNetRefHandle)(FNetRefHandle_u_0)param_1;
}

// ReadPackedInt32 @ 144337d10

int __cdecl UE::Net::ReadPackedInt32(FNetBitStreamReader *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1,2);
  uVar1 = uVar1 * 8 + 8;
  uVar2 = 1 << ((char)uVar1 - 1U & 0x1f);
  uVar1 = FNetBitStreamReader::ReadBits(param_1,uVar1);
  return (uVar1 ^ uVar2) - uVar2;
}

// ReadPackedInt64 @ 144337d60

long64 __cdecl UE::Net::ReadPackedInt64(FNetBitStreamReader *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = FNetBitStreamReader::ReadBits(param_1,3);
  uVar1 = uVar2 * 8 + 8;
  if (uVar1 < 0x21) {
    uVar2 = FNetBitStreamReader::ReadBits(param_1,uVar1);
    uVar5 = (ulonglong)uVar2;
  }
  else {
    uVar3 = FNetBitStreamReader::ReadBits(param_1,0x20);
    uVar2 = FNetBitStreamReader::ReadBits(param_1,uVar2 * 8 - 0x18);
    uVar5 = CONCAT44(uVar2,uVar3);
  }
  uVar4 = 1L << ((char)uVar1 - 1U & 0x3f);
  return (uVar4 ^ uVar5) - uVar4;
}

// ReadPackedUint16 @ 144337df0

ushort __cdecl UE::Net::ReadPackedUint16(FNetBitStreamReader *param_1)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1,1);
  uVar1 = FNetBitStreamReader::ReadBits(param_1,uVar1 * 8 + 8);
  return (ushort)uVar1;
}

// ReadPackedUint32 @ 144337e20

uint __cdecl UE::Net::ReadPackedUint32(FNetBitStreamReader *param_1)

{
  uint uVar1;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1,2);
  uVar1 = FNetBitStreamReader::ReadBits(param_1,uVar1 * 8 + 8);
  return uVar1;
}

// ReadPackedUint64 @ 144337e50

ulong64 __cdecl UE::Net::ReadPackedUint64(FNetBitStreamReader *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FNetBitStreamReader::ReadBits(param_1,3);
  uVar2 = uVar1 * 8 + 8;
  if (uVar2 < 0x21) {
    uVar2 = FNetBitStreamReader::ReadBits(param_1,uVar2);
    return (ulonglong)uVar2;
  }
  uVar2 = FNetBitStreamReader::ReadBits(param_1,0x20);
  uVar1 = FNetBitStreamReader::ReadBits(param_1,uVar1 * 8 - 0x18);
  return CONCAT44(uVar1,uVar2);
}

// ReadRotator @ 144337ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Net::ReadRotator(FNetBitStreamReader *param_1,TRotator<double> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_408 [32];
  FNetDeserializeArgs local_3e8;
  FNetDequantizeArgs local_3c8;
  FNetRefHandle_u_0 local_398;
  FName local_390;
  undefined8 local_380 [95];
  uint local_88;
  FNetBitStreamReader *local_80;
  FNetBitStreamWriter *local_78;
  FNetTraceCollector *pFStack_70;
  FInternalNetSerializationContext *local_68;
  FNetExportContext *pFStack_60;
  FNetStatsContext *local_58;
  FNetBitArrayView *pFStack_50;
  INetBlobReceiver *local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_408;
  puVar1 = local_380;
  local_398.Value = 0;
  local_390.ComparisonIndex.Value = 0;
  local_390.Number = 0;
  lVar2 = 0x20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_38 = local_38 & 0xfffffffc;
  local_3e8._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3e8.Target = (ulong64)&local_28;
  local_3e8._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_88 = 0;
  local_78 = (FNetBitStreamWriter *)0x0;
  pFStack_70 = (FNetTraceCollector *)0x0;
  local_68 = (FInternalNetSerializationContext *)0x0;
  pFStack_60 = (FNetExportContext *)0x0;
  local_58 = (FNetStatsContext *)0x0;
  pFStack_50 = (FNetBitArrayView *)0x0;
  local_48 = (INetBlobReceiver *)0x0;
  local_40 = 0;
  local_3c = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  local_3e8._padding_ = 0;
  local_80 = param_1;
  (*FRotatorNetSerializerNetSerializerInfo::Serializer.Deserialize)
            ((FNetSerializationContext *)&local_398._s_0,&local_3e8);
  local_3c8._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3c8.Source = local_3e8.Target;
  local_3c8._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_3c8._padding_ = 0;
  local_3c8.Target = (ulong64)param_2;
  (*FRotatorNetSerializerNetSerializerInfo::Serializer.Dequantize)
            ((FNetSerializationContext *)&local_398._s_0,&local_3c8);
  return;
}

// ReadRotator @ 144338020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::ReadRotator
          (FNetBitStreamReader *param_1,TRotator<double> *param_2,TRotator<double> *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_418 [32];
  FNetDeserializeArgs local_3f8;
  FNetDequantizeArgs local_3d8;
  FNetRefHandle_u_0 local_3a8;
  FName local_3a0;
  undefined8 local_390 [95];
  uint local_98;
  FNetBitStreamReader *local_90;
  FNetBitStreamWriter *local_88;
  FNetTraceCollector *pFStack_80;
  FInternalNetSerializationContext *local_78;
  FNetExportContext *pFStack_70;
  FNetStatsContext *local_68;
  FNetBitArrayView *pFStack_60;
  INetBlobReceiver *local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_418;
  uVar2 = FNetBitStreamReader::ReadBits(param_1,1);
  if ((uVar2 & 1) == 0) {
    dVar1 = param_3->Yaw;
    param_2->Pitch = param_3->Pitch;
    param_2->Yaw = dVar1;
    param_2->Roll = param_3->Roll;
  }
  else {
    puVar3 = local_390;
    local_3a8.Value = 0;
    lVar4 = 0x20;
    local_3a0.ComparisonIndex.Value = 0;
    local_3a0.Number = 0;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    local_48 = local_48 & 0xfffffffc;
    local_3f8._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
    local_3f8.Target = (ulong64)&local_38;
    local_98 = 0;
    local_3f8._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig
    ;
    local_88 = (FNetBitStreamWriter *)0x0;
    pFStack_80 = (FNetTraceCollector *)0x0;
    local_78 = (FInternalNetSerializationContext *)0x0;
    pFStack_70 = (FNetExportContext *)0x0;
    local_68 = (FNetStatsContext *)0x0;
    pFStack_60 = (FNetBitArrayView *)0x0;
    local_58 = (INetBlobReceiver *)0x0;
    local_50 = 0;
    local_4c = 0xffffffff;
    local_38 = 0;
    uStack_30 = 0;
    local_3f8._padding_ = 0;
    local_90 = param_1;
    (*FRotatorNetSerializerNetSerializerInfo::Serializer.Deserialize)
              ((FNetSerializationContext *)&local_3a8._s_0,&local_3f8);
    local_3d8._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
    local_3d8.Source = local_3f8.Target;
    local_3d8._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig
    ;
    local_3d8._padding_ = 0;
    local_3d8.Target = (ulong64)param_2;
    (*FRotatorNetSerializerNetSerializerInfo::Serializer.Dequantize)
              ((FNetSerializationContext *)&local_3a8._s_0,&local_3d8);
  }
  return;
}

// ReadSparseBitArray @ 144338190

void __cdecl
UE::Net::ReadSparseBitArray
          (FNetBitStreamReader *param_1,uint *param_2,uint param_3,
          ESparseBitArraySerializationHint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res18;
  uint local_res20 [2];
  ulonglong local_48;
  
  if (param_4 == None) {
    if (0x3ff < param_3) {
      uVar5 = (ulonglong)(param_3 >> 10);
      do {
        Private::
        ReadSparseBitArray<_UE::Net::ReadSparseBitArray_::__l5::<lambda_1>_&,unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
                  (param_1,param_2,0x400,(<lambda_1> *)local_res20,
                   Private::ReadSparseUint32UsingIndices);
        param_3 = param_3 - 0x400;
        param_2 = param_2 + 0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_3 != 0) {
      Private::
      ReadSparseBitArray<_UE::Net::ReadSparseBitArray_::__l5::<lambda_1>_&,unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
                (param_1,param_2,param_3,(<lambda_1> *)local_res20,
                 Private::ReadSparseUint32UsingIndices);
      return;
    }
  }
  else {
    if (0x3ff < param_3) {
      local_48 = (ulonglong)(param_3 >> 10);
      local_res18 = param_3;
      do {
        uVar1 = FNetBitStreamReader::ReadBits(param_1,0x20);
        local_res20[0] = 0;
        uVar2 = FNetBitStreamReader::ReadBits(param_1,1);
        if ((uVar2 & 1) != 0) {
          local_res20[0] = FNetBitStreamReader::ReadBits(param_1,0x20);
        }
        uVar2 = 1;
        uVar5 = 0;
        uVar7 = 0x400;
        lVar6 = 0x20;
        uVar4 = local_res20[0];
        do {
          if ((uVar1 & uVar2) == 0) {
            uVar3 = 0;
            if ((uVar4 & uVar2) != 0) {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = Private::ReadSparseUint32UsingIndices(param_1,0x20);
            uVar3 = ~uVar3;
            uVar4 = local_res20[0];
          }
          param_2[uVar5] = uVar3;
          uVar2 = uVar2 * 2;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar7 = uVar7 - 0x20;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (uVar7 != 0) {
          if ((uVar1 & uVar2) == 0) {
            uVar1 = 0;
            if ((uVar4 & uVar2) != 0) {
              uVar1 = 0xffffffff;
            }
          }
          else {
            uVar1 = Private::ReadSparseUint32UsingIndices(param_1,uVar7);
            uVar1 = ~uVar1;
          }
          param_2[uVar5] = uVar1;
        }
        param_3 = local_res18 - 0x400;
        param_2 = param_2 + 0x20;
        local_48 = local_48 - 1;
        local_res18 = param_3;
      } while (local_48 != 0);
    }
    if (param_3 != 0) {
      Private::
      ReadSparseBitArray<_UE::Net::ReadSparseBitArray_::__l12::<lambda_2>_&,unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
                (param_1,param_2,param_3,(<lambda_2> *)local_res20,
                 Private::ReadSparseUint32UsingIndices);
    }
  }
  return;
}

// ReadSparseBitArrayDelta @ 144338390

void __cdecl
UE::Net::ReadSparseBitArrayDelta
          (FNetBitStreamReader *param_1,uint *param_2,uint *param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0x3ff < param_4) {
    uVar1 = (ulonglong)(param_4 >> 10);
    do {
      Private::
      ReadSparseBitArrayDelta<unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
                (param_1,param_2,param_3,0x400,Private::ReadSparseUint32UsingIndices);
      param_4 = param_4 - 0x400;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    Private::
    ReadSparseBitArrayDelta<unsigned_int_(__cdecl&)(UE::Net::FNetBitStreamReader_*,unsigned_int)>
              (param_1,param_2,param_3,param_4,Private::ReadSparseUint32UsingIndices);
  }
  return;
}

// ReadSparseUint32UsingIndices @ 144338440

uint __cdecl
UE::Net::Private::ReadSparseUint32UsingIndices(FNetBitStreamReader *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  uVar3 = FNetBitStreamReader::ReadBits(param_1,SparseUint32UsingIndices_EncodedIndexBitsHeaderSize)
  ;
  if (uVar3 == 0) {
    uVar4 = param_2 + 7 >> 3;
    uVar3 = FNetBitStreamReader::ReadBits(param_1,uVar4);
    uVar10 = 0;
    if ((uVar3 >> (uVar4 - 1 & 0x1f) & 1) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = -param_2 & 7;
    }
    uVar8 = (ulonglong)uVar3 - ((ulonglong)(uVar3 >> 1) & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar5 = FNetBitStreamReader::ReadBits
                      (param_1,(int)((((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                     >> 0x38) << 3) - uVar7);
    uVar7 = 1;
    bVar6 = 0;
    if (param_2 + 7 >> 3 != 0) {
      uVar8 = (ulonglong)uVar4;
      do {
        if ((uVar3 & uVar7) != 0) {
          uVar10 = uVar10 | (uVar5 & 0xff) << (bVar6 & 0x1f);
          uVar5 = uVar5 >> 8;
        }
        bVar6 = bVar6 + 8;
        uVar7 = uVar7 * 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar10 = 0;
    uVar8 = (ulonglong)uVar3;
    iVar9 = 0;
    uVar3 = 1;
    do {
      uVar1 = (ulonglong)((param_2 - 1) - iVar9) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar4 = FNetBitStreamReader::ReadBits(param_1,(uint)lVar2);
      iVar9 = iVar9 + uVar4;
      uVar3 = uVar3 << ((byte)uVar4 & 0x1f);
      uVar10 = uVar10 | uVar3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return uVar10;
}

// ReadString @ 144338590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001443389f6) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Net::ReadString(FNetBitStreamReader *param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  ForElementType<unsigned_char> FVar9;
  ForElementType<unsigned_char> FVar10;
  FStaticBasicLogRecord *pFVar11;
  ForElementType<char> FVar12;
  longlong lVar13;
  undefined1 auStackY_8c8 [32];
  uint local_888 [2];
  FString local_880;
  TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> local_868;
  ForElementType<char> local_458;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  uVar4 = FNetBitStreamReader::ReadBits(param_1,1);
  uVar5 = FNetBitStreamReader::ReadBits(param_1,0x10);
  if (param_1->OverflowBitCount != 0) {
    return;
  }
  uVar6 = uVar5 + 4 & 0xfffffffc;
  if ((uVar4 & 1) == 0) {
    local_458.SecondaryData = (ForElementType<char>)0x0;
    local_50[0] = 0;
    local_50[1] = 0x400;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
    }
    else {
      Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<char>_>
                (1,1,uVar6,&local_458,local_50,local_50 + 1);
    }
    FVar12 = (ForElementType<char>)&local_458;
    if (local_458.SecondaryData != (ForElementType<char>)0x0) {
      FVar12 = local_458.SecondaryData;
    }
    FNetBitStreamReader::ReadBitStream(param_1,(uint *)FVar12,uVar5 * 8);
    uVar4 = 0;
    if ((int)uVar5 < local_50[0]) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar12 = (ForElementType<char>)&local_458;
    if (local_458.SecondaryData != (ForElementType<char>)0x0) {
      FVar12 = local_458.SecondaryData;
    }
    *(undefined1 *)((longlong)(int)uVar5 + (longlong)FVar12) = 0;
    if (param_1->OverflowBitCount == 0) {
      FVar12 = (ForElementType<char>)&local_458;
      if (local_458.SecondaryData != (ForElementType<char>)0x0) {
        FVar12 = local_458.SecondaryData;
      }
      pFVar8 = ::FString::ConstructFromPtrSize(&local_880,(char *)FVar12,uVar5);
      ::FString::operator=(param_2,pFVar8);
      if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_880.Data.AllocatorInstance.Data);
      }
    }
    else if (1 < (byte)LogSerialization._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    if (local_458.SecondaryData == (ForElementType<char>)0x0) {
      return;
    }
    FMemory::Free((void *)local_458.SecondaryData);
    return;
  }
  local_868.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  local_868.ArrayNum = 0;
  local_868.ArrayMax = 0x400;
  TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
  SetNumUninitialized(&local_868,uVar6,Default);
  FVar9 = (ForElementType<unsigned_char>)&local_868;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar9 = local_868.AllocatorInstance.SecondaryData;
  }
  FNetBitStreamReader::ReadBitStream(param_1,(uint *)FVar9,uVar5 * 8);
  uVar4 = 0;
  if ((int)uVar5 < local_868.ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar9 = (ForElementType<unsigned_char>)&local_868;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar9 = local_868.AllocatorInstance.SecondaryData;
  }
  *(uchar *)((longlong)(int)uVar5 + (longlong)FVar9) = '\0';
  FVar9 = local_868.AllocatorInstance.SecondaryData;
  if (param_1->OverflowBitCount != 0) goto LAB_144338846;
  FVar10 = (ForElementType<unsigned_char>)&local_868;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FVar10 = local_868.AllocatorInstance.SecondaryData;
  }
  bVar3 = Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::IsValidEncoding
                    ((uchar *)FVar10,uVar5);
  if (bVar3) {
    uVar4 = (uVar5 * 4 + 4) / 3;
    piVar1 = &(param_2->Data).ArrayMax;
    if ((param_2->Data).ArrayMax < (int)uVar4) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)param_2,(param_2->Data).ArrayNum,piVar1);
      FVar9 = local_868.AllocatorInstance.SecondaryData;
    }
    local_888[0] = 0;
    FVar10 = (ForElementType<unsigned_char>)&local_868;
    if (FVar9 != (ForElementType<unsigned_char>)0x0) {
      FVar10 = FVar9;
    }
    bVar3 = Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::DecodeImpl<wchar_t,2>
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,uVar4,(uchar *)FVar10,
                       uVar5 + 1,local_888);
    uVar4 = local_888[0];
    if (bVar3) {
      iVar7 = (param_2->Data).ArrayNum;
      lVar13 = (longlong)(int)local_888[0];
      if (iVar7 < (int)local_888[0]) {
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_888[0] - iVar7,(ForAnyElementType *)param_2,&(param_2->Data).ArrayNum,
                   piVar1);
      }
      else {
        if ((int)local_888[0] < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)local_888[0]);
        }
        if ((int)local_888[0] < iVar7) {
          uVar5 = iVar7 - local_888[0];
          if (((int)(uVar5 | local_888[0]) < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar5 != 0) {
            _Dst = (param_2->Data).AllocatorInstance.Data + lVar13 * 2;
            iVar7 = ((param_2->Data).ArrayNum - uVar5) - uVar4;
            if (iVar7 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar5 * 2,(longlong)iVar7 * 2);
            }
            piVar1 = &(param_2->Data).ArrayNum;
            *piVar1 = *piVar1 - uVar5;
          }
        }
      }
      goto LAB_144338846;
    }
    if (1 < (byte)LogSerialization._0_1_) {
      pFVar11 = &::LOG_Static;
      goto LAB_144338781;
    }
  }
  else if (1 < (byte)LogSerialization._0_1_) {
    pFVar11 = &::LOG_Static;
LAB_144338781:
    Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogSerialization);
  }
  FNetBitStreamReader::DoOverflow(param_1);
LAB_144338846:
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_868.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReadStruct @ 144338a10

void __cdecl
UE::Net::ReadStruct(FNetSerializationContext *param_1,ulong64 param_2,
                   FReplicationStateDescriptor *param_3)

{
  uint uVar1;
  bool bVar2;
  void *_Dst;
  undefined1 local_res18 [8];
  undefined **local_58;
  undefined4 local_50;
  FReplicationStateDescriptor *local_48;
  FNetDequantizeArgs local_40;
  
  if ((param_3 != (FReplicationStateDescriptor *)0x0) ||
     (bVar2 = `UE::Net::ReadStruct'::__l3::<lambda_1>::operator()(local_res18), bVar2)) {
    _Dst = (void *)0x0;
    local_48 = (FReplicationStateDescriptor *)0x0;
    local_58 = &___7FStructNetSerializerConfig__6B_;
    local_50 = 1;
    if (param_3 != (FReplicationStateDescriptor *)0x0) {
      local_48 = param_3;
      FReplicationStateDescriptor::AddRef(param_3);
    }
    uVar1 = local_48->InternalSize;
    if (uVar1 != 0) {
      _Dst = FMemory::Malloc((ulonglong)uVar1,(uint)local_48->InternalAlignment);
      memset(_Dst,0,(ulonglong)uVar1);
      FMemory::Free((void *)0x0);
    }
    local_40._padding_._0_4_ = FStructNetSerializerNetSerializerInfo::Serializer.Version;
    local_40._padding_ = (longlong)&local_58;
    local_40._padding_ = 0;
    local_40.Source = (ulong64)_Dst;
    (*FStructNetSerializerNetSerializerInfo::Serializer.Deserialize)
              (param_1,(FNetDeserializeArgs *)&local_40);
    local_40._padding_ = (longlong)&local_58;
    local_40._padding_ = 0;
    local_40._padding_._0_4_ = 0;
    local_40.Source = (ulong64)_Dst;
    local_40.Target = param_2;
    (*FStructNetSerializerNetSerializerInfo::Serializer.Dequantize)(param_1,&local_40);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
    local_58 = &___7FStructNetSerializerConfig__6B_;
    if (local_48 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_48);
    }
  }
  return;
}

// ReadVector @ 144338b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Net::ReadVector(FNetBitStreamReader *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_418 [32];
  FNetDeserializeArgs local_3f8;
  FNetDequantizeArgs local_3d8;
  FNetRefHandle_u_0 local_3a8;
  FName local_3a0;
  undefined8 local_390 [95];
  uint local_98;
  FNetBitStreamReader *local_90;
  FNetBitStreamWriter *local_88;
  FNetTraceCollector *pFStack_80;
  FInternalNetSerializationContext *local_78;
  FNetExportContext *pFStack_70;
  FNetStatsContext *local_68;
  FNetBitArrayView *pFStack_60;
  INetBlobReceiver *local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_418;
  puVar1 = local_390;
  local_3a8.Value = 0;
  local_3a0.ComparisonIndex.Value = 0;
  local_3a0.Number = 0;
  lVar2 = 0x20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_48 = local_48 & 0xfffffffc;
  local_3f8._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3f8.Target = (ulong64)&local_38;
  local_3f8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_98 = 0;
  local_88 = (FNetBitStreamWriter *)0x0;
  pFStack_80 = (FNetTraceCollector *)0x0;
  local_78 = (FInternalNetSerializationContext *)0x0;
  pFStack_70 = (FNetExportContext *)0x0;
  local_68 = (FNetStatsContext *)0x0;
  pFStack_60 = (FNetBitArrayView *)0x0;
  local_58 = (INetBlobReceiver *)0x0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_38 = 0;
  uStack_30 = 0;
  local_3f8._padding_ = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_90 = param_1;
  (*FVectorNetSerializerNetSerializerInfo::Serializer.Deserialize)
            ((FNetSerializationContext *)&local_3a8._s_0,&local_3f8);
  local_3d8._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3d8.Source = local_3f8.Target;
  local_3d8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_3d8._padding_ = 0;
  local_3d8.Target = (ulong64)param_2;
  (*FVectorNetSerializerNetSerializerInfo::Serializer.Dequantize)
            ((FNetSerializationContext *)&local_3a8._s_0,&local_3d8);
  return;
}

// ReadVector @ 144338cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::ReadVector(FNetBitStreamReader *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_428 [32];
  FNetDeserializeArgs local_408;
  FNetDequantizeArgs local_3e8;
  FNetRefHandle_u_0 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  FNetBitStreamReader *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_428;
  uVar2 = FNetBitStreamReader::ReadBits(param_1,1);
  if ((uVar2 & 1) == 0) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  else {
    puVar3 = local_3a0;
    local_3b8.Value = 0;
    lVar4 = 0x20;
    local_3b0 = 0;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    local_58 = local_58 & 0xfffffffc;
    local_408._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
    local_408.Target = (ulong64)&local_48;
    local_a8 = 0;
    local_408._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0xffffffff;
    local_48 = 0;
    uStack_40 = 0;
    local_408._padding_ = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_a0 = param_1;
    (*FVectorNetSerializerNetSerializerInfo::Serializer.Deserialize)
              ((FNetSerializationContext *)&local_3b8._s_0,&local_408);
    local_3e8._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
    local_3e8.Source = local_408.Target;
    local_3e8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    local_3e8._padding_ = 0;
    local_3e8.Target = (ulong64)param_2;
    (*FVectorNetSerializerNetSerializerInfo::Serializer.Dequantize)
              ((FNetSerializationContext *)&local_3b8._s_0,&local_3e8);
  }
  return;
}

// WriteBytes @ 14433ff00

void __cdecl UE::Net::WriteBytes(FNetBitStreamWriter *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    for (; (((ulonglong)param_2 & 3) != 0 && (param_3 != 0)); param_3 = param_3 - 1) {
      uVar1 = *(uint *)param_2;
      param_2 = (uchar *)((longlong)param_2 + 1);
      FNetBitStreamWriter::WriteBits(param_1,(uint)(byte)uVar1,8);
    }
    uVar1 = param_3 >> 2;
    if (uVar1 != 0) {
      FNetBitStreamWriter::WriteBitStream(param_1,(uint *)param_2,0,uVar1 << 5);
      param_2 = (uchar *)((longlong)param_2 + (ulonglong)(uVar1 * 4));
      param_3 = param_3 + uVar1 * -4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar1 = *(uint *)param_2;
      param_2 = (uchar *)((longlong)param_2 + 1);
      FNetBitStreamWriter::WriteBits(param_1,(uint)(byte)uVar1,8);
    }
  }
  return;
}

// WriteConditionallyQuantizedVector @ 14433ffc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::WriteConditionallyQuantizedVector
          (FNetBitStreamWriter *param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4)

{
  double dVar1;
  longlong lVar2;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetQuantizeArgs_ptr *p_Var3;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetSerializeArgs_ptr *p_Var4;
  undefined8 *puVar5;
  FNetSerializer *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_438 [32];
  char local_418;
  FNetQuantizeArgs local_410;
  FNetSerializeArgs local_3e8;
  FNetRefHandle_u_0 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0 [95];
  undefined4 local_b8;
  undefined8 local_b0;
  FNetBitStreamWriter *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_438;
  if (param_4) {
    uVar9 = (undefined4)__real_3f847ae140000000;
    uVar10 = (undefined4)((ulonglong)__real_3f847ae140000000 >> 0x20);
  }
  else {
    uVar9 = (undefined4)__real_3f1a36e2e0000000;
    uVar10 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  }
  dVar1 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar10,uVar9) <= (double)CONCAT44(uVar8,uVar7) &&
        (double)CONCAT44(uVar8,uVar7) != (double)CONCAT44(uVar10,uVar9)) ||
      (dVar1 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y,
      uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar10,uVar9) <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != (double)CONCAT44(uVar10,uVar9))) ||
     (dVar1 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z,
     uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar10,uVar9) <= (double)CONCAT44(uVar8,uVar7) &&
     (double)CONCAT44(uVar8,uVar7) != (double)CONCAT44(uVar10,uVar9))) {
    local_418 = '\x01';
  }
  else {
    local_418 = '\0';
  }
  FNetBitStreamWriter::WriteBits(param_1,(uint)(local_418 != '\0'),1);
  if (local_418 != '\0') {
    local_418 = param_4;
    FNetBitStreamWriter::WriteBits(param_1,(uint)param_4,1);
    pFVar6 = &FVectorNetSerializerNetSerializerInfo::Serializer;
    local_3c8.Value = 0;
    local_3c0 = 0;
    puVar5 = local_3b0;
    if (param_4) {
      pFVar6 = &FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer;
    }
    lVar2 = 0x20;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    local_410._padding_._0_4_ = pFVar6->Version;
    local_68 = local_68 & 0xfffffffc;
    local_410.Target = (ulong64)&local_58;
    local_b8 = 0;
    p_Var3 = FVectorNetSerializerNetSerializerInfo::Serializer.Quantize;
    local_410._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    if (param_4) {
      p_Var3 = FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.Quantize;
      local_410._padding_ =
           (longlong)FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    }
    local_b0 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0xffffffff;
    local_58 = 0;
    uStack_50 = 0;
    local_410._padding_ = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_410.Source = (ulong64)param_2;
    local_a8 = param_1;
    (*p_Var3)((FNetSerializationContext *)&local_3c8._s_0,&local_410);
    local_3e8._padding_._0_4_ = pFVar6->Version;
    local_3e8.Source = local_410.Target;
    p_Var4 = FVectorNetSerializerNetSerializerInfo::Serializer.Serialize;
    local_3e8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    if (param_4) {
      p_Var4 = FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.Serialize;
      local_3e8._padding_ =
           (longlong)FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    }
    local_3e8._padding_ = 0;
    (*p_Var4)((FNetSerializationContext *)&local_3c8._s_0,&local_3e8);
  }
  return;
}

// WriteFullNetObjectReference @ 144340200

void __cdecl
UE::Net::WriteFullNetObjectReference(FNetSerializationContext *param_1,FNetObjectReference *param_2)

{
  FNetRefHandle_u_0 local_18;
  undefined8 uStack_10;
  
  local_18._s_0 = *(FNetRefHandle_u_0_s_0 *)&(param_2->RefHandle).field0_0x0;
  uStack_10._0_4_ = param_2->PathToken;
  uStack_10._4_4_ = param_2->Traits;
  Private::FObjectReferenceCache::WriteFullReference
            (param_1->InternalContext->ObjectReferenceCache,param_1,
             (FNetObjectReference *)&local_18._s_0);
  return;
}

// WriteNetRefHandle @ 144340240

void __cdecl UE::Net::WriteNetRefHandle(FNetSerializationContext *param_1,FNetRefHandle param_2)

{
  FNetBitStreamWriter *this;
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  this = param_1->BitStreamWriter;
  if (param_2.field0_0x0 != 0) {
    FNetBitStreamWriter::WriteBits(this,1,1);
    uVar3 = (ulonglong)param_2.field0_0x0 & 0x3fffffffffffff;
    lVar1 = 0x3f;
    if ((uVar3 | 1) != 0) {
      for (; (uVar3 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = (int)lVar1 + 8U >> 3;
    uVar4 = uVar2 * 8;
    FNetBitStreamWriter::WriteBits(this,uVar2 - 1,3);
    if (0x20 < uVar4) {
      FNetBitStreamWriter::WriteBits(this,(uint)uVar3,0x20);
      uVar3 = uVar3 >> 0x20;
      uVar4 = uVar4 - 0x20;
    }
    FNetBitStreamWriter::WriteBits(this,(uint)uVar3,uVar4);
    return;
  }
  FNetBitStreamWriter::WriteBits(this,0,1);
  return;
}

// WritePackedInt32 @ 144340320

void __cdecl UE::Net::WritePackedInt32(FNetBitStreamWriter *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = (ulonglong)(uint)(param_2 >> 0x1f ^ param_2) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (int)lVar2 + 8U >> 3;
  FNetBitStreamWriter::WriteBits(param_1,uVar3 - 1,2);
  FNetBitStreamWriter::WriteBits(param_1,param_2,uVar3 * 8);
  return;
}

// WritePackedInt64 @ 144340390

void __cdecl UE::Net::WritePackedInt64(FNetBitStreamWriter *param_1,long64 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2 >> 0x3f ^ param_2;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar3 = (int)lVar1;
  if (uVar2 == 0) {
    iVar3 = -1;
  }
  uVar4 = iVar3 + 9U >> 3;
  uVar5 = uVar4 * 8;
  FNetBitStreamWriter::WriteBits(param_1,uVar4 - 1,3);
  if (0x20 < uVar5) {
    FNetBitStreamWriter::WriteBits(param_1,(uint)param_2,0x20);
    param_2 = (ulonglong)param_2 >> 0x20;
    uVar5 = uVar5 - 0x20;
  }
  FNetBitStreamWriter::WriteBits(param_1,(uint)param_2,uVar5);
  return;
}

// WritePackedUint16 @ 144340420

void __cdecl UE::Net::WritePackedUint16(FNetBitStreamWriter *param_1,ushort param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = ((ulonglong)param_2 | 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (int)lVar2 + 7U >> 3;
  FNetBitStreamWriter::WriteBits(param_1,uVar3 - 1,1);
  FNetBitStreamWriter::WriteBits(param_1,(uint)param_2,uVar3 * 8);
  return;
}

// WritePackedUint32 @ 144340490

void __cdecl UE::Net::WritePackedUint32(FNetBitStreamWriter *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = ((ulonglong)param_2 | 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (int)lVar2 + 7U >> 3;
  FNetBitStreamWriter::WriteBits(param_1,uVar3 - 1,2);
  FNetBitStreamWriter::WriteBits(param_1,param_2,uVar3 * 8);
  return;
}

// WritePackedUint64 @ 144340500

void __cdecl UE::Net::WritePackedUint64(FNetBitStreamWriter *param_1,ulong64 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = 0x3f;
  if ((param_2 | 1) != 0) {
    for (; (param_2 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar2 = (int)lVar1 + 8U >> 3;
  uVar3 = uVar2 * 8;
  FNetBitStreamWriter::WriteBits(param_1,uVar2 - 1,3);
  if (0x20 < uVar3) {
    FNetBitStreamWriter::WriteBits(param_1,(uint)param_2,0x20);
    param_2 = param_2 >> 0x20;
    uVar3 = uVar3 - 0x20;
  }
  FNetBitStreamWriter::WriteBits(param_1,(uint)param_2,uVar3);
  return;
}

// WriteRotator @ 144340580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Net::WriteRotator
          (FNetBitStreamWriter *param_1,TRotator<double> *param_2,TRotator<double> *param_3,
          float param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_7b8 [32];
  char local_798;
  FNetQuantizeArgs local_790;
  FNetSerializeArgs local_768;
  FNetRefHandle_u_0 local_748;
  FName local_740;
  undefined8 local_730 [95];
  uint local_438;
  FNetBitStreamReader *local_430;
  FNetBitStreamWriter *local_428;
  FNetTraceCollector *local_420;
  FInternalNetSerializationContext *local_418;
  FNetExportContext *pFStack_410;
  FNetStatsContext *local_408;
  FNetBitArrayView *pFStack_400;
  INetBlobReceiver *local_3f8;
  uint local_3f0;
  int local_3ec;
  uint local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c0 [95];
  undefined4 local_c8;
  undefined8 local_c0;
  FNetBitStreamWriter *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  double local_68 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  lVar13 = 0x20;
  local_3d8 = 0;
  local_3d0 = 0;
  puVar11 = local_3c0;
  lVar10 = 0x20;
  do {
    *puVar11 = 0;
    puVar11 = puVar11 + 3;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_98 = ZEXT816(0);
  local_78 = local_78 & 0xfffffffc;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_68[0] = (double)param_4;
  local_c0 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  dVar33 = param_2->Pitch - param_3->Pitch;
  dVar35 = param_2->Yaw - param_3->Yaw;
  local_7c = 0xffffffff;
  dVar2 = param_2->Roll - param_3->Roll;
  auVar19._8_4_ = SUB84(dVar35,0);
  auVar19._0_8_ = dVar33;
  auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar20 = roundpd(local_98,auVar20,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar27._0_8_ = auVar20._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar27._8_8_ = auVar20._8_8_ * dVar7;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar2;
  dVar33 = dVar33 - auVar27._0_8_;
  dVar35 = dVar35 - auVar27._8_8_;
  auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar20 = roundpd(auVar27,auVar20,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar35,0);
  auVar22._0_8_ = dVar33;
  auVar22._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  dVar2 = dVar2 - auVar20._0_8_ * dVar4;
  dVar3 = 0.0 - auVar20._8_8_ * dVar5;
  uVar14 = -(ulonglong)(0.0 <= dVar33);
  uVar16 = -(ulonglong)(0.0 <= dVar35);
  auVar28._0_8_ = uVar14 & (ulonglong)dVar33;
  auVar28._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar35);
  auVar28._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar35) >> 0x20);
  dVar35 = auVar22._8_8_ + dVar7;
  uVar15 = -(ulonglong)(0.0 <= dVar2);
  uVar17 = -(ulonglong)(0.0 <= dVar3);
  auVar36._0_4_ = ~(uint)uVar14 & SUB84(dVar33 + dVar6,0);
  auVar36._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar6) >> 0x20);
  auVar36._8_4_ = ~(uint)uVar16 & SUB84(dVar35,0);
  auVar36._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar36 = auVar36 | auVar28;
  auVar23._8_4_ = SUB84(dVar3,0);
  auVar23._0_8_ = dVar2;
  auVar23._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar35 = auVar23._8_8_ + dVar5;
  auVar34._0_4_ = ~(uint)uVar15 & SUB84(dVar2 + dVar4,0);
  auVar34._4_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
  auVar34._8_4_ = ~(uint)uVar17 & SUB84(dVar35,0);
  auVar34._12_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
  auVar20._8_4_ = (int)((ulonglong)dVar3 & uVar17);
  auVar20._0_8_ = (ulonglong)dVar2 & uVar15;
  auVar20._12_4_ = (int)(((ulonglong)dVar3 & uVar17) >> 0x20);
  auVar34 = auVar34 | auVar20;
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
  uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
  uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
  auVar29._0_8_ = uVar15 & (ulonglong)(auVar34._0_8_ - dVar4);
  uVar14 = uVar17 & (ulonglong)(auVar34._8_8_ - dVar5);
  auVar29._8_4_ = (undefined4)uVar14;
  auVar29._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar24._0_4_ = ~(uint)uVar15 & auVar34._0_4_;
  auVar24._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar34._4_4_;
  auVar24._8_4_ = ~(uint)uVar17 & auVar34._8_4_;
  auVar24._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar34._12_4_;
  auVar29 = auVar29 | auVar24;
  auVar25._8_4_ = SUB84(local_68[0],0);
  auVar25._0_8_ = local_68[0];
  auVar25._12_4_ = (int)((ulonglong)local_68[0] >> 0x20);
  auVar30._0_8_ =
       (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
  auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar30._8_8_);
  auVar26._0_8_ = -(ulonglong)(local_68[0] < auVar30._0_8_);
  uVar12 = movmskpd((int)param_1,auVar26);
  auVar31._0_8_ = uVar16 & (ulonglong)(auVar36._0_8_ - dVar6);
  uVar14 = uVar18 & (ulonglong)(auVar36._8_8_ - dVar7);
  auVar31._8_4_ = (undefined4)uVar14;
  auVar31._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar1._4_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._4_4_;
  auVar1._0_4_ = ~(uint)uVar16 & auVar36._0_4_;
  auVar1._8_4_ = ~(uint)uVar18 & auVar36._8_4_;
  auVar1._12_4_ = ~(uint)(uVar18 >> 0x20) & auVar36._12_4_;
  auVar31 = auVar31 | auVar1;
  auVar32._0_8_ =
       (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
  auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
  lVar10 = -(ulonglong)(local_68[0] < auVar32._8_8_);
  auVar8._8_4_ = (int)lVar10;
  auVar8._0_8_ = -(ulonglong)(local_68[0] < auVar32._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  iVar9 = movmskpd(0,auVar8);
  local_798 = (uVar12 & 0x3fffffff) != 0 || iVar9 != 0;
  local_b8 = param_1;
  FNetBitStreamWriter::WriteBits(param_1,(uint)(byte)local_798,1);
  if (local_798 != '\0') {
    local_748.Value = 0;
    puVar11 = local_730;
    local_740.ComparisonIndex.Value = 0;
    local_740.Number = 0;
    do {
      *puVar11 = 0;
      puVar11 = puVar11 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    local_3e8 = local_3e8 & 0xfffffffc;
    local_790._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
    local_790.Target = (ulong64)local_68;
    local_438 = 0;
    local_790._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig
    ;
    local_430 = (FNetBitStreamReader *)0x0;
    local_420 = (FNetTraceCollector *)0x0;
    local_418 = (FInternalNetSerializationContext *)0x0;
    pFStack_410 = (FNetExportContext *)0x0;
    local_408 = (FNetStatsContext *)0x0;
    pFStack_400 = (FNetBitArrayView *)0x0;
    local_3f8 = (INetBlobReceiver *)0x0;
    local_3f0 = 0;
    local_3ec = 0xffffffff;
    local_68[0] = 0.0;
    local_68[1] = 0.0;
    local_790._padding_ = 0;
    local_790.Source = (ulong64)param_2;
    local_428 = param_1;
    (*FRotatorNetSerializerNetSerializerInfo::Serializer.Quantize)
              ((FNetSerializationContext *)&local_748._s_0,&local_790);
    local_768._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
    local_768.Source = local_790.Target;
    local_768._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig
    ;
    local_768._padding_ = 0;
    (*FRotatorNetSerializerNetSerializerInfo::Serializer.Serialize)
              ((FNetSerializationContext *)&local_748._s_0,&local_768);
  }
  return;
}

// WriteRotator @ 1443408a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Net::WriteRotator(FNetBitStreamWriter *param_1,TRotator<double> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_408 [32];
  FNetQuantizeArgs local_3e8;
  FNetSerializeArgs local_3c0;
  FNetRefHandle_u_0 local_398;
  FName local_390;
  undefined8 local_380 [95];
  uint local_88;
  FNetBitStreamReader *local_80;
  FNetBitStreamWriter *local_78;
  FNetTraceCollector *local_70;
  FInternalNetSerializationContext *local_68;
  FNetExportContext *pFStack_60;
  FNetStatsContext *local_58;
  FNetBitArrayView *pFStack_50;
  INetBlobReceiver *local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_408;
  puVar1 = local_380;
  local_398.Value = 0;
  lVar2 = 0x20;
  local_390.ComparisonIndex.Value = 0;
  local_390.Number = 0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_38 = local_38 & 0xfffffffc;
  local_3e8._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3e8.Target = (ulong64)&local_28;
  local_3e8._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_88 = 0;
  local_80 = (FNetBitStreamReader *)0x0;
  local_70 = (FNetTraceCollector *)0x0;
  local_68 = (FInternalNetSerializationContext *)0x0;
  pFStack_60 = (FNetExportContext *)0x0;
  local_58 = (FNetStatsContext *)0x0;
  pFStack_50 = (FNetBitArrayView *)0x0;
  local_48 = (INetBlobReceiver *)0x0;
  local_40 = 0;
  local_3c = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  local_3e8._padding_ = 0;
  local_3e8.Source = (ulong64)param_2;
  local_78 = param_1;
  (*FRotatorNetSerializerNetSerializerInfo::Serializer.Quantize)
            ((FNetSerializationContext *)&local_398._s_0,&local_3e8);
  local_3c0._padding_._0_4_ = FRotatorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3c0.Source = local_3e8.Target;
  local_3c0._padding_ = (longlong)FRotatorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_3c0._padding_ = 0;
  (*FRotatorNetSerializerNetSerializerInfo::Serializer.Serialize)
            ((FNetSerializationContext *)&local_398._s_0,&local_3c0);
  return;
}

// WriteSentinelBits @ 1443409e0

void __cdecl UE::Net::WriteSentinelBits(FNetBitStreamWriter *param_1,uint param_2)

{
  FNetBitStreamWriter::WriteBits(param_1,0xbaaddead,param_2);
  return;
}

// WriteSparseBitArray @ 144340a00

void __cdecl
UE::Net::WriteSparseBitArray
          (FNetBitStreamWriter *param_1,uint *param_2,uint param_3,
          ESparseBitArraySerializationHint param_4)

{
  ulonglong uVar1;
  <lambda_1> local_res20 [8];
  
  if (param_4 == None) {
    if (0x3ff < param_3) {
      uVar1 = (ulonglong)(param_3 >> 10);
      do {
        Private::
        WriteSparseBitArray<_UE::Net::WriteSparseBitArray_::__l5::<lambda_1>_&,void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
                  (param_1,param_2,0x400,local_res20,Private::WriteSparseUint32UsingIndices);
        param_3 = param_3 - 0x400;
        param_2 = param_2 + 0x20;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (param_3 != 0) {
      Private::
      WriteSparseBitArray<_UE::Net::WriteSparseBitArray_::__l5::<lambda_1>_&,void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
                (param_1,param_2,param_3,local_res20,Private::WriteSparseUint32UsingIndices);
    }
  }
  else {
    if (0x3ff < param_3) {
      uVar1 = (ulonglong)(param_3 >> 10);
      do {
        Private::
        WriteSparseBitArray<_UE::Net::WriteSparseBitArray_::__l12::<lambda_2>_&,void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
                  (param_1,param_2,0x400,(<lambda_2> *)local_res20,
                   Private::WriteSparseUint32UsingIndices);
        param_3 = param_3 - 0x400;
        param_2 = param_2 + 0x20;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (param_3 != 0) {
      Private::
      WriteSparseBitArray<_UE::Net::WriteSparseBitArray_::__l12::<lambda_2>_&,void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
                (param_1,param_2,param_3,(<lambda_2> *)local_res20,
                 Private::WriteSparseUint32UsingIndices);
    }
  }
  return;
}

// WriteSparseBitArrayDelta @ 144340b00

void __cdecl
UE::Net::WriteSparseBitArrayDelta
          (FNetBitStreamWriter *param_1,uint *param_2,uint *param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0x3ff < param_4) {
    uVar1 = (ulonglong)(param_4 >> 10);
    do {
      Private::
      WriteSparseBitArrayDelta<void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
                (param_1,param_2,param_3,0x400,Private::WriteSparseUint32UsingIndices);
      param_4 = param_4 - 0x400;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_4 != 0) {
    Private::
    WriteSparseBitArrayDelta<void_(__cdecl&)(UE::Net::FNetBitStreamWriter_*,unsigned_int,unsigned_int)>
              (param_1,param_2,param_3,param_4,Private::WriteSparseUint32UsingIndices);
  }
  return;
}

// WriteSparseUint32UsingIndices @ 144340bb0

void __cdecl
UE::Net::Private::WriteSparseUint32UsingIndices
          (FNetBitStreamWriter *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar8 = (ulonglong)param_2 - ((ulonglong)(param_2 >> 1) & 0x5555555555555555);
  uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
  bVar3 = (byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 - 1 < 3) {
    FNetBitStreamWriter::WriteBits
              (param_1,(uint)bVar3,SparseUint32UsingIndices_EncodedIndexBitsHeaderSize);
    iVar4 = 0;
    while (param_2 != 0) {
      uVar6 = -param_2 & param_2;
      param_2 = param_2 & param_2 - 1;
      uVar8 = (ulonglong)((param_3 - 1) - iVar4) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar1 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      iVar7 = 0x20;
      if (uVar6 != 0) {
        iVar7 = iVar1;
      }
      FNetBitStreamWriter::WriteBits(param_1,iVar7 - iVar4,(uint)lVar2);
      iVar4 = iVar7;
    }
  }
  else {
    FNetBitStreamWriter::WriteBits(param_1,0,SparseUint32UsingIndices_EncodedIndexBitsHeaderSize);
    uVar11 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar6 = 1;
    for (uVar12 = param_3; 0 < (int)uVar12; uVar12 = uVar12 - 8) {
      if ((char)param_2 != '\0') {
        uVar11 = uVar11 | uVar6;
        uVar9 = uVar9 | (param_2 & 0xff) << ((byte)uVar10 & 0x1f);
        uVar5 = uVar12;
        if (8 < uVar12) {
          uVar5 = 8;
        }
        uVar10 = uVar10 + uVar5;
      }
      param_2 = param_2 >> 8;
      uVar6 = uVar6 * 2;
    }
    FNetBitStreamWriter::WriteBits(param_1,uVar11,param_3 + 7 >> 3);
    FNetBitStreamWriter::WriteBits(param_1,uVar9,uVar10);
  }
  return;
}

// WriteString @ 144340d20

void __cdecl UE::Net::WriteString(FNetBitStreamWriter *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  WriteString(param_1,&local_18);
  return;
}

// WriteString @ 144340d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl UE::Net::WriteString(FNetBitStreamWriter *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  ForElementType<unsigned_char> FVar8;
  ForElementType<unsigned_char> FVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_498 [32];
  uint local_464;
  FNetBitStreamWriter *local_460;
  TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_> local_458;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar12 = param_2->Size;
  local_460 = param_1;
  if (uVar12 < 0x10000) {
    uVar11 = 0;
    pwVar17 = param_2->DataPtr;
    local_458.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
    local_458.ArrayNum = 0;
    local_458.ArrayMax = 0x400;
    pwVar6 = pwVar17;
    uVar7 = uVar11;
    if (uVar12 != 0) {
      do {
        if (0x7f < (ushort)*pwVar6) {
          bVar4 = true;
          goto LAB_144340e3e;
        }
        uVar7 = uVar7 + 1;
        pwVar6 = pwVar6 + 1;
      } while (uVar7 < (ulonglong)(longlong)(int)uVar12);
    }
    bVar4 = false;
LAB_144340e3e:
    FNetBitStreamWriter::WriteBits(param_1,(uint)bVar4,1);
    if (bVar4) {
      if (param_1->OverflowBitCount == 0) {
        TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
        SetNumUninitialized(&local_458,(uVar12 + 1) * 3 & 0xfffffffc,Default);
        local_464 = 0;
        FVar8 = (ForElementType<unsigned_char>)&local_458;
        if (local_458.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar8 = local_458.AllocatorInstance.SecondaryData;
        }
        bVar4 = Private::FStringNetSerializerUtils::TStringCodec<wchar_t>::EncodeImpl<wchar_t,2>
                          ((uchar *)FVar8,local_458.ArrayNum,pwVar17,uVar12,&local_464);
        uVar12 = local_464;
        if ((bVar4) && (local_464 < 0x10000)) {
          FNetBitStreamWriter::WriteBits(param_1,local_464,0x10);
          uVar12 = uVar12 * 8;
          FVar8 = (ForElementType<unsigned_char>)&local_458;
          if (local_458.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FVar8 = local_458.AllocatorInstance.SecondaryData;
          }
          if (((~(param_1->bIsInvalid | param_1->bHasSubstream) & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(!bIsInvalid) & (!bHasSubstream)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\NetBitStreamWriter.cpp"
                                 ,0x74,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((param_1->OverflowBitCount == 0) && (uVar12 != 0)) {
            uVar13 = param_1->BufferBitPosition;
            if (param_1->BufferBitCapacity - uVar13 < uVar12) {
              param_1->OverflowBitCount = (uVar13 - param_1->BufferBitCapacity) + uVar12;
            }
            else {
              puVar2 = param_1->Buffer;
              param_1->BufferBitPosition = uVar13 + uVar12;
              uVar15 = uVar13 & 0x1f;
              uVar10 = uVar13;
              if (uVar15 != 0) {
                uVar16 = uVar12;
                if (0x20 - uVar15 < uVar12) {
                  uVar16 = 0x20 - uVar15;
                }
                uVar11 = (ulonglong)uVar16;
                uVar14 = (1 << ((byte)uVar16 & 0x1f)) - 1;
                uVar5 = uVar16 - 1 >> 5;
                uVar10 = uVar13 + uVar16;
                uVar12 = uVar12 - uVar16;
                puVar2[uVar13 >> 5] =
                     ~(uVar14 << (sbyte)uVar15) & param_1->PendingWord |
                     ((*(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 4) & -uVar5 | *(uint *)FVar8)
                     & uVar14) << (sbyte)uVar15;
              }
              uVar13 = (uint)uVar11;
              if (0x1f < uVar12) {
                if ((uVar11 & 7) == 0) {
                  memcpy(puVar2 + (uVar10 >> 5),(void *)((uVar11 >> 3) + (longlong)FVar8),
                         (ulonglong)(uVar12 >> 5) << 2);
                }
                else {
                  local_464 = uVar13 & 0x1f;
                  uVar5 = uVar10 >> 5;
                  uVar15 = *(uint *)((longlong)FVar8 + (uVar11 >> 5) * 4);
                  uVar16 = (uint)(uVar11 >> 5);
                  uVar7 = (ulonglong)(uVar12 >> 5);
                  if (uVar12 >> 5 != 0) {
                    do {
                      uVar16 = uVar16 + 1;
                      uVar14 = *(uint *)((longlong)FVar8 + (ulonglong)uVar16 * 4);
                      puVar2[uVar5] = uVar14 << (-(char)uVar11 & 0x1fU) | uVar15 >> (sbyte)local_464
                      ;
                      uVar5 = uVar5 + 1;
                      uVar7 = uVar7 - 1;
                      param_1 = local_460;
                      uVar15 = uVar14;
                    } while (uVar7 != 0);
                  }
                }
                uVar13 = uVar13 + (uVar12 & 0xffffffe0);
                uVar10 = uVar10 + (uVar12 & 0xffffffe0);
                uVar12 = uVar12 & 0x1f;
              }
              if (uVar12 == 0) {
                if (uVar10 < (param_1->BufferBitCapacity + 0x1f & 0xffffffe0)) {
                  param_1->PendingWord = puVar2[uVar10 >> 5];
                }
              }
              else {
                uVar15 = (uVar13 - 1) + uVar12 >> 5;
                uVar12 = (1 << ((byte)uVar12 & 0x1f)) - 1;
                param_1->PendingWord =
                     (*(uint *)((longlong)FVar8 + (ulonglong)uVar15 * 4) << (-(byte)uVar13 & 0x1f) &
                      (uVar13 >> 5) - uVar15 |
                     *(uint *)((longlong)FVar8 + (ulonglong)(uVar13 >> 5) * 4) >>
                     ((byte)uVar13 & 0x1f)) & uVar12 | puVar2[uVar10 >> 5] & ~uVar12;
              }
            }
          }
        }
        else {
          if (1 < (byte)LogSerialization._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
          }
          FNetBitStreamWriter::WriteBits(param_1,0,0x10);
        }
      }
    }
    else {
      FNetBitStreamWriter::WriteBits(param_1,uVar12,0x10);
      if ((param_1->OverflowBitCount == 0) && (uVar12 != 0)) {
        TArray<unsigned_char,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>_>::
        SetNumUninitialized(&local_458,uVar12 + 3 & 0xfffffffc,Default);
        pwVar6 = pwVar17 + (int)uVar12;
        FVar8 = (ForElementType<unsigned_char>)&local_458;
        if (local_458.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
          FVar8 = local_458.AllocatorInstance.SecondaryData;
        }
        for (; pwVar17 != pwVar6; pwVar17 = pwVar17 + 1) {
          uVar10 = (uint)uVar11;
          wVar1 = *pwVar17;
          uVar13 = 0;
          if ((int)uVar10 < local_458.ArrayNum) {
            uVar13 = ~uVar10 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar9 = (ForElementType<unsigned_char>)&local_458;
          if (local_458.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
            FVar9 = local_458.AllocatorInstance.SecondaryData;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
          *(char *)((longlong)(int)uVar10 + (longlong)FVar9) = (char)wVar1;
        }
        FNetBitStreamWriter::WriteBitStream(param_1,(uint *)FVar8,0,uVar12 * 8);
      }
    }
    if (local_458.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
      FMemory::Free((void *)local_458.AllocatorInstance.SecondaryData);
    }
  }
  else {
    if (1 < (byte)LogSerialization._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
    }
    FNetBitStreamWriter::WriteBits(param_1,0,1);
    FNetBitStreamWriter::WriteBits(param_1,0,0x10);
  }
  return;
}

// WriteStruct @ 1443412a0

void __cdecl
UE::Net::WriteStruct
          (FNetSerializationContext *param_1,ulong64 param_2,FReplicationStateDescriptor *param_3)

{
  uint uVar1;
  bool bVar2;
  void *_Dst;
  undefined1 local_res18 [8];
  undefined **local_58;
  undefined4 local_50;
  FReplicationStateDescriptor *local_48;
  FNetQuantizeArgs local_40;
  
  if ((param_3 != (FReplicationStateDescriptor *)0x0) ||
     (bVar2 = `UE::Net::WriteStruct'::__l3::<lambda_1>::operator()(local_res18), bVar2)) {
    _Dst = (void *)0x0;
    local_48 = (FReplicationStateDescriptor *)0x0;
    local_58 = &___7FStructNetSerializerConfig__6B_;
    local_50 = 1;
    if (param_3 != (FReplicationStateDescriptor *)0x0) {
      local_48 = param_3;
      FReplicationStateDescriptor::AddRef(param_3);
    }
    uVar1 = local_48->InternalSize;
    if (uVar1 != 0) {
      _Dst = FMemory::Malloc((ulonglong)uVar1,(uint)local_48->InternalAlignment);
      memset(_Dst,0,(ulonglong)uVar1);
      FMemory::Free((void *)0x0);
    }
    local_40._padding_ = (longlong)&local_58;
    local_40._padding_ = 0;
    local_40._padding_._0_4_ = 0;
    local_40.Source = param_2;
    local_40.Target = (ulong64)_Dst;
    (*FStructNetSerializerNetSerializerInfo::Serializer.Quantize)(param_1,&local_40);
    local_40._padding_._0_4_ = FStructNetSerializerNetSerializerInfo::Serializer.Version;
    local_40._padding_ = (longlong)&local_58;
    local_40._padding_ = 0;
    local_40.Source = (ulong64)_Dst;
    (*FStructNetSerializerNetSerializerInfo::Serializer.Serialize)
              (param_1,(FNetSerializeArgs *)&local_40);
    if (_Dst != (void *)0x0) {
      FMemory::Free(_Dst);
    }
    local_58 = &___7FStructNetSerializerConfig__6B_;
    if (local_48 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(local_48);
    }
  }
  return;
}

// WriteVector @ 1443413f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::WriteVector
          (FNetBitStreamWriter *param_1,TVector<double> *param_2,TVector<double> *param_3,
          float param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_798 [32];
  char local_778;
  FNetQuantizeArgs local_770;
  FNetSerializeArgs local_748;
  FNetRefHandle_u_0 local_728;
  undefined8 local_720;
  undefined8 local_710 [95];
  undefined4 local_418;
  undefined8 local_410;
  FNetBitStreamWriter *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  uint local_3c8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a0 [95];
  undefined4 local_a8;
  undefined8 local_a0;
  FNetBitStreamWriter *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_798;
  lVar5 = 0x20;
  local_3b8 = 0;
  local_3b0 = 0;
  puVar4 = local_3a0;
  lVar3 = 0x20;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_58 = local_58 & 0xfffffffc;
  local_88 = 0;
  uStack_80 = 0;
  dVar1 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  local_78 = 0;
  uStack_70 = 0;
  dVar2 = (double)param_4;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  if (((dVar2 <= (double)CONCAT44(uVar7,uVar6) && (double)CONCAT44(uVar7,uVar6) != dVar2) ||
      (dVar1 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y,
      uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      dVar2 <= (double)CONCAT44(uVar7,uVar6) && (double)CONCAT44(uVar7,uVar6) != dVar2)) ||
     (dVar1 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z,
     uVar6 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar7 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     local_778 = '\0',
     dVar2 <= (double)CONCAT44(uVar7,uVar6) && (double)CONCAT44(uVar7,uVar6) != dVar2)) {
    local_778 = '\x01';
  }
  local_98 = param_1;
  FNetBitStreamWriter::WriteBits(param_1,(uint)(local_778 != '\0'),1);
  if (local_778 != '\0') {
    local_728.Value = 0;
    puVar4 = local_710;
    local_720 = 0;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    local_3c8 = local_3c8 & 0xfffffffc;
    local_770._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
    local_770.Target = (ulong64)&local_48;
    local_418 = 0;
    local_770._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    local_410 = 0;
    local_400 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    local_3cc = 0xffffffff;
    local_48 = 0;
    uStack_40 = 0;
    local_770._padding_ = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_770.Source = (ulong64)param_2;
    local_408 = param_1;
    (*FVectorNetSerializerNetSerializerInfo::Serializer.Quantize)
              ((FNetSerializationContext *)&local_728._s_0,&local_770);
    local_748._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
    local_748.Source = local_770.Target;
    local_748._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
    local_748._padding_ = 0;
    (*FVectorNetSerializerNetSerializerInfo::Serializer.Serialize)
              ((FNetSerializationContext *)&local_728._s_0,&local_748);
  }
  return;
}

// WriteVector @ 144341630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Net::WriteVector(FNetBitStreamWriter *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_418 [32];
  FNetQuantizeArgs local_3f8;
  FNetSerializeArgs local_3d0;
  FNetRefHandle_u_0 local_3a8;
  FName local_3a0;
  undefined8 local_390 [95];
  uint local_98;
  FNetBitStreamReader *local_90;
  FNetBitStreamWriter *local_88;
  FNetTraceCollector *local_80;
  FInternalNetSerializationContext *local_78;
  FNetExportContext *pFStack_70;
  FNetStatsContext *local_68;
  FNetBitArrayView *pFStack_60;
  INetBlobReceiver *local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_418;
  puVar1 = local_390;
  local_3a8.Value = 0;
  lVar2 = 0x20;
  local_3a0.ComparisonIndex.Value = 0;
  local_3a0.Number = 0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_48 = local_48 & 0xfffffffc;
  local_3f8._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3f8.Target = (ulong64)&local_38;
  local_3f8._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_98 = 0;
  local_90 = (FNetBitStreamReader *)0x0;
  local_80 = (FNetTraceCollector *)0x0;
  local_78 = (FInternalNetSerializationContext *)0x0;
  pFStack_70 = (FNetExportContext *)0x0;
  local_68 = (FNetStatsContext *)0x0;
  pFStack_60 = (FNetBitArrayView *)0x0;
  local_58 = (INetBlobReceiver *)0x0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_38 = 0;
  uStack_30 = 0;
  local_3f8._padding_ = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_3f8.Source = (ulong64)param_2;
  local_88 = param_1;
  (*FVectorNetSerializerNetSerializerInfo::Serializer.Quantize)
            ((FNetSerializationContext *)&local_3a8._s_0,&local_3f8);
  local_3d0._padding_._0_4_ = FVectorNetSerializerNetSerializerInfo::Serializer.Version;
  local_3d0.Source = local_3f8.Target;
  local_3d0._padding_ = (longlong)FVectorNetSerializerNetSerializerInfo::Serializer.DefaultConfig;
  local_3d0._padding_ = 0;
  (*FVectorNetSerializerNetSerializerInfo::Serializer.Serialize)
            ((FNetSerializationContext *)&local_3a8._s_0,&local_3d0);
  return;
}

// operator() @ 1504b39e0

bool __thiscall `UE::Net::Private::GetStaticFilterName'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7127879573563244486>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7127879573563244486>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b4fd0

bool __thiscall `UE::Net::Private::NetRPC_GetRootObject'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8608888639159534280>);
  if (bVar2) {
    UE::Net::FNetObjectReference::ToString(*(FNetObjectReference **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8608888639159534280>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b5037;
    }
  }
  bVar2 = false;
LAB_1504b5037:
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

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&> @ 1504b8c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,ushort *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  ushort *local_18;
  code *local_10;
  
  local_38.WriteValue = FLogField::Write<unsigned_int>;
  local_38.Name = (char *)0x0;
  local_10 = FLogField::Write<unsigned_short>;
  local_20 = 0;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&> @ 1504b8c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,ushort *param_4,
          ushort *param_5)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  undefined8 local_50;
  ushort *local_48;
  code *local_40;
  undefined8 local_38;
  ushort *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_40 = FLogField::Write<unsigned_short>;
  local_68.WriteValue = FLogField::Write<unsigned_int>;
  local_28 = FLogField::Write<unsigned_short>;
  local_30 = param_5;
  local_68.Name = (char *)0x0;
  local_50 = 0;
  local_38 = 0;
  local_68.Value = param_3;
  local_48 = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&,bool_const_&> @ 1504b8d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned_short_const_&,unsigned_short_const_&,bool_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3,ushort *param_4,
          ushort *param_5,bool *param_6)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  undefined8 local_60;
  ushort *local_58;
  code *local_50;
  undefined8 local_48;
  ushort *local_40;
  code *local_38;
  undefined8 local_30;
  bool *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_50 = FLogField::Write<unsigned_short>;
  local_78.WriteValue = FLogField::Write<unsigned_int>;
  local_40 = param_5;
  local_28 = param_6;
  local_38 = FLogField::Write<unsigned_short>;
  local_20 = FLogField::Write<bool>;
  local_78.Name = (char *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_78.Value = param_3;
  local_58 = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

// operator() @ 1504b9b20

bool __thiscall
`UE::Net::InitBitfieldNetSerializerConfigFromProperty'::__l5::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FFieldObjectUnion local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar5 = false;
  local_res10.Unknown = local_res10.Unknown & 0xffffffff00000000;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4197878426402553753>);
  if (bVar4) {
    pvVar1 = (void *)**(undefined8 **)this;
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    local_res10 = (FFieldObjectUnion)((FFieldObjectUnion *)(**(longlong **)this + 0x10))->Unknown;
    if ((((local_res10.Unknown & 1) != 0) &&
        ((UObject *)(local_res10.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10.Unknown & 0xfffffffffffffffe));
    }
    FFieldVariant::GetName((FFieldVariant *)&local_res10,&local_18);
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4197878426402553753>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504b9c15;
    }
  }
  bVar4 = false;
LAB_1504b9c15:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1504bb390

bool __thiscall
`UE::Net::InitBitfieldNetSerializerConfigFromProperty'::__l8::<lambda_2>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FFieldObjectUnion local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar5 = false;
  local_res10.Unknown = local_res10.Unknown & 0xffffffff00000000;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4197878426402553746>);
  if (bVar4) {
    pvVar1 = (void *)**(undefined8 **)this;
    bVar5 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar5) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    local_res10 = (FFieldObjectUnion)((FFieldObjectUnion *)(**(longlong **)this + 0x10))->Unknown;
    if ((((local_res10.Unknown & 1) != 0) &&
        ((UObject *)(local_res10.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10.Unknown & 0xfffffffffffffffe));
    }
    FFieldVariant::GetName((FFieldVariant *)&local_res10,&local_18);
    bVar3 = true;
    bVar5 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4197878426402553746>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bb485;
    }
  }
  bVar4 = false;
LAB_1504bb485:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1504bc740

bool __thiscall `UE::Net::ReadAndVerifySentinelBits'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6355868955977972840>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6355868955977972840>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504bc890

bool __thiscall `UE::Net::ReadStruct'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<533839214844837930>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<533839214844837930>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504bc910

bool __thiscall `UE::Net::WriteStruct'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<533839214844837900>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<533839214844837900>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

