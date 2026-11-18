// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// operator<int,FPCGKernelParams>_TTuple<int,FPCGKernelParams> @ 14978f3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<int,FPCGKernelParams> * __thiscall
TKeyInitializer<int_const_&>::operator<int,FPCGKernelParams>_TTuple<int,FPCGKernelParams>
          (TKeyInitializer<int_const_&> *this,TTuple<int,FPCGKernelParams> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [24];
  ForAnyElementType local_70;
  undefined8 uStack_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 local_40;
  undefined8 uStack_38;
  void *local_30;
  ulonglong uStack_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88._8_8_ = (UScriptStruct *)0x0;
  local_88._16_8_ = (uchar *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  uStack_68 = 0;
  local_60.AllocatorInstance.InlineData[0] = '\0';
  local_60.AllocatorInstance.InlineData[1] = '\0';
  local_60.AllocatorInstance.InlineData[2] = '\0';
  local_60.AllocatorInstance.InlineData[3] = '\0';
  local_60.AllocatorInstance.InlineData[4] = '\0';
  local_60.AllocatorInstance.InlineData[5] = '\0';
  local_60.AllocatorInstance.InlineData[6] = '\0';
  local_60.AllocatorInstance.InlineData[7] = '\0';
  local_60.AllocatorInstance.InlineData[8] = '\0';
  local_60.AllocatorInstance.InlineData[9] = '\0';
  local_60.AllocatorInstance.InlineData[10] = '\0';
  local_60.AllocatorInstance.InlineData[0xb] = '\0';
  local_60.AllocatorInstance.InlineData[0xc] = '\0';
  local_60.AllocatorInstance.InlineData[0xd] = '\0';
  local_60.AllocatorInstance.InlineData[0xe] = '\0';
  local_60.AllocatorInstance.InlineData[0xf] = '\0';
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)(local_88 + 8));
  local_70.Data = (FScriptContainerElement *)0x0;
  uStack_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_60.MaxBits = _UNK_150631d94;
  local_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  uStack_28 = uStack_28 & 0xffffffff00000000;
  *(int *)__return_storage_ptr__ = *this->Key;
  FPCGKernelParams::FPCGKernelParams
            ((FPCGKernelParams *)&__return_storage_ptr__->field_0x8,(FPCGKernelParams *)local_88);
  uStack_28 = uStack_28 & 0xffffffff00000000;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_70,0,(int *)((longlong)&uStack_68 + 4));
  }
  iVar2 = local_60.MaxBits;
  local_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  FInstancedStruct::Reset((FInstancedStruct *)(local_88 + 8));
  return __return_storage_ptr__;
}

// operator<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives> @ 14978f510

TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives> * __thiscall
TKeyInitializer<TObjectPtr<UComputeKernel_const_>_const_&>::
operator<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>_TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>
          (TKeyInitializer<TObjectPtr<UComputeKernel_const_>_const_&> *this,
          TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives> *__return_storage_ptr__)

{
  FPCGSpawnerPrimitives local_58;
  
  local_58.NumCustomFloats = 0;
  local_58._52_4_ = 0;
  local_58._76_4_ = 0;
  local_58.PrimitiveFactory.Object = (IPCGRuntimePrimitiveFactory *)0x0;
  local_58.PrimitiveFactory.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58.PrimitiveMeshBounds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PrimitiveMeshBounds.ArrayNum = 0;
  local_58.PrimitiveMeshBounds.ArrayMax = 0;
  local_58.SelectionCDF.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SelectionCDF.ArrayNum = 0;
  local_58.SelectionCDF.ArrayMax = 0;
  local_58.AttributeIdOffsetStrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.AttributeIdOffsetStrides.ArrayNum = 0;
  local_58.AttributeIdOffsetStrides.ArrayMax = 0;
  local_58.SelectorAttributeId = -1;
  TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives>::
  TTuple<TObjectPtr<UComputeKernel_const_>,FPCGSpawnerPrimitives><TObjectPtr<UComputeKernel_const_>_const_&,FPCGSpawnerPrimitives>
            (__return_storage_ptr__,this->Key,&local_58);
  if (local_58.AttributeIdOffsetStrides.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AttributeIdOffsetStrides.AllocatorInstance.Data);
  }
  if (local_58.SelectionCDF.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SelectionCDF.AllocatorInstance.Data);
  }
  if (local_58.PrimitiveMeshBounds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PrimitiveMeshBounds.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.PrimitiveFactory.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// operator<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_> @ 14985b9e0

TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<ULandscapeHeightfieldCollisionComponent_*_const_&>::
operator<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<ULandscapeHeightfieldCollisionComponent_*_const_&> *this,
          TTuple<ULandscapeHeightfieldCollisionComponent_*,TArray<int,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_418 [130];
  
  *(ULandscapeHeightfieldCollisionComponent **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x408 = 0;
  lVar7 = 8;
  puVar5 = local_418;
  puVar6 = (undefined8 *)&__return_storage_ptr__->field_0x8;
  do {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[4];
    uVar4 = puVar5[5];
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = puVar5[8];
    uVar4 = puVar5[9];
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = puVar5[0xc];
    uVar4 = puVar5[0xd];
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = puVar5[0xe];
    uVar3 = puVar5[0xf];
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  if (*(void **)&__return_storage_ptr__->field_0x408 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x408);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x408 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x410 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x414 = 0x100;
  return __return_storage_ptr__;
}

// operator<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_> @ 14985bab0

TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TKeyInitializer<UPCGPolygon2DData_*_&>::
operator<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
          (TKeyInitializer<UPCGPolygon2DData_*_&> *this,
          TTuple<TObjectKey<UPCGPolygon2DData>,TArray<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  UPCGPolygon2DData *pUVar1;
  FWeakObjectPtr local_res8;
  UPCGPolygon2DData *local_res10;
  
  pUVar1 = *this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  if (pUVar1 != (UPCGPolygon2DData *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(int *)__return_storage_ptr__ = local_res8.ObjectIndex;
    *(int *)&__return_storage_ptr__->field_0x4 = local_res8.ObjectSerialNumber;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  DestructItems<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0,0);
  return __return_storage_ptr__;
}

// operator<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 149c3c270

TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TKeyInitializer<FPCGISMComponentBuilderParams_const_&>::
operator<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TKeyInitializer<FPCGISMComponentBuilderParams_const_&> *this,
          TTuple<FPCGISMComponentBuilderParams,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  FPCGISMComponentBuilderParams *pFVar1;
  bool bVar2;
  undefined3 uVar3;
  
  pFVar1 = this->Key;
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
            ((FPCGSoftISMComponentDescriptor *)__return_storage_ptr__,&pFVar1->Descriptor);
  *(int *)&__return_storage_ptr__->field_0x280 = pFVar1->NumCustomDataFloats;
  bVar2 = (pFVar1->SettingsCrc).bValid;
  uVar3 = *(undefined3 *)&(pFVar1->SettingsCrc).field_0x5;
  *(uint *)&__return_storage_ptr__->field_0x284 = (pFVar1->SettingsCrc).Value;
  __return_storage_ptr__->field_0x288 = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x289 = uVar3;
  bVar2 = (pFVar1->DataCrc).bValid;
  uVar3 = *(undefined3 *)&(pFVar1->DataCrc).field_0x5;
  *(uint *)&__return_storage_ptr__->field_0x28c = (pFVar1->DataCrc).Value;
  __return_storage_ptr__->field_0x290 = bVar2;
  *(undefined3 *)&__return_storage_ptr__->field_0x291 = uVar3;
  __return_storage_ptr__->field_0x294 = pFVar1->bAllowDescriptorChanges;
  __return_storage_ptr__->field_0x295 = pFVar1->bTransient;
  *(undefined8 *)&__return_storage_ptr__->field_0x298 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x2a0 = 0;
  return __return_storage_ptr__;
}

// operator<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>_TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_> @ 149c97850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>
* __thiscall
TKeyInitializer<UPCGGraph_*_const_&>::
operator<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>_TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>
          (TKeyInitializer<UPCGGraph_*_const_&> *this,
          TTuple<UPCGGraph_*,TMap<unsigned_int,FPCGStackContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UPCGGraph **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<unsigned_int,FPCGStackContext>,TDefaultMapHashableKeyFuncs<unsigned_int,FPCGStackContext,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPCGStackContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_> @ 149c97980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<UPCGGraph_*_const_&>::
operator<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<UPCGGraph_*_const_&> *this,
          TTuple<UPCGGraph_*,TMap<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UPCGGraph **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FPCGGraphTask,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_> @ 149c97ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<IPCGElement_const_*_&&>::
operator<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>_TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<IPCGElement_const_*_&&> *this,
          TTuple<IPCGElement_const_*,TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(IPCGElement **)__return_storage_ptr__ = *this->Key;
  TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>::
  TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator>
            ((TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FPCGCacheEntryKey,DefaultKeyFuncs<FPCGCacheEntryKey,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FPCGPerExecutionCacheEntry>_TTuple<unsigned___int64,FPCGPerExecutionCacheEntry> @ 149c97d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned___int64,FPCGPerExecutionCacheEntry> * __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,FPCGPerExecutionCacheEntry>_TTuple<unsigned___int64,FPCGPerExecutionCacheEntry>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,FPCGPerExecutionCacheEntry> *__return_storage_ptr__)

{
  FInstancedStruct *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_01;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  FPCGPerExecutionCacheEntry local_c8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28 [2];
  
  local_28[0].DebugPtr = (UScriptStruct *)(__security_cookie.value ^ (ulonglong)auStack_e8);
  memset(&local_c8,0,0xa0);
  lVar2 = 10;
  this_00 = (FInstancedStruct *)&local_c8;
  lVar1 = 10;
  do {
    FInstancedStruct::FInstancedStruct(this_00);
    this_00 = this_00 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  FPCGPerExecutionCacheEntry::FPCGPerExecutionCacheEntry
            ((FPCGPerExecutionCacheEntry *)&__return_storage_ptr__->field_0x8,&local_c8);
  this_01 = local_28;
  do {
    this_01 = this_01 + -2;
    FInstancedStruct::Reset((FInstancedStruct *)&this_01->ObjectPtr);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>_TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_> @ 149c97e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<unsigned___int64_const_&>::
operator<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>_TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<unsigned___int64_const_&> *this,
          TTuple<unsigned___int64,TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
  Move<TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>_>
            ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_> @ 149d7aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<UPCGComponent_const_*_const_&>::
operator<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UPCGComponent_const_*_const_&> *this,
          TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UPCGComponent **)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
            ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_> @ 149d7ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<TSoftObjectPtr<USkinnedAsset>_const_&>::
operator<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<TSoftObjectPtr<USkinnedAsset>_const_&> *this,
          TTuple<TSoftObjectPtr<USkinnedAsset>,TMap<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  TSoftObjectPtr<USkinnedAsset> *pTVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  pTVar1 = this->Key;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&pTVar1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&__return_storage_ptr__->field_0x8,
             (FSoftObjectPath *)&(pTVar1->SoftObjectPtr).field_0x8);
  TSet<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x28,
             (TSet<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_> @ 149d7ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<TSoftObjectPtr<UStaticMesh>_const_&>::
operator<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<TSoftObjectPtr<UStaticMesh>_const_&> *this,
          TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  TSoftObjectPtr<UStaticMesh> *pTVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  pTVar1 = this->Key;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&pTVar1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&__return_storage_ptr__->field_0x8,
             (FSoftObjectPath *)&(pTVar1->SoftObjectPtr).field_0x8);
  TSet<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x28,
             (TSet<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>_TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_> @ 149d7ae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>
* __thiscall
TKeyInitializer<FPCGGridDescriptor_const_&>::
operator<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>_TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>
          (TKeyInitializer<FPCGGridDescriptor_const_&> *this,
          TTuple<FPCGGridDescriptor,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>_>
          *__return_storage_ptr__)

{
  bool bVar1;
  uint uVar2;
  FPCGGridDescriptor *pFVar3;
  int iVar4;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_30 = 0;
  pFVar3 = this->Key;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(uint *)__return_storage_ptr__ = pFVar3->GridSize;
  __return_storage_ptr__->field_0x4 = pFVar3->bIs2DGrid;
  __return_storage_ptr__->field_0x5 = pFVar3->bIsRuntime;
  uVar2 = pFVar3->RuntimeHash;
  __return_storage_ptr__->field_0x10 = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar2;
  bVar1 = (pFVar3->Hash).bIsSet;
  __return_storage_ptr__->field_0x10 = bVar1;
  if (bVar1 != false) {
    *(uint *)&__return_storage_ptr__->field_0xc = (pFVar3->Hash).TypedValue;
  }
  TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
  ::
  TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
            ((TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
              *)&__return_storage_ptr__->field_0x18,
             (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar4 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_> @ 149f20350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<UPCGComponent_*_&>::
operator<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>_TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UPCGComponent_*_&> *this,
          TTuple<UPCGComponent_const_*,TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UPCGComponent **)__return_storage_ptr__ = *this->Key;
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
  ::
  TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
            ((TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TObjectPtr<APCGPartitionActor>,DefaultKeyFuncs<TObjectPtr<APCGPartitionActor>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

