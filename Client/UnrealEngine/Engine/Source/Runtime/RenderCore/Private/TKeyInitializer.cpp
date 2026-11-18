// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// operator<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>_TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap> @ 145d74390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap> * __thiscall
TKeyInitializer<FRDGBarrierBatchBegin_const_*_&&>::
operator<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>_TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>
          (TKeyInitializer<FRDGBarrierBatchBegin_const_*_&&> *this,
          TTuple<FRDGBarrierBatchBegin_const_*,FRDGBarrierValidation::FResourceMap>
          *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [24];
  undefined8 uStack_f0;
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_dc = 0x80;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_70 = 0;
  local_30 = 0;
  local_20 = 0;
  local_108._16_8_ = 0;
  uStack_f0 = 0;
  local_a8.AllocatorInstance.InlineData[0] = '\0';
  local_a8.AllocatorInstance.InlineData[1] = '\0';
  local_a8.AllocatorInstance.InlineData[2] = '\0';
  local_a8.AllocatorInstance.InlineData[3] = '\0';
  local_a8.AllocatorInstance.InlineData[4] = '\0';
  local_a8.AllocatorInstance.InlineData[5] = '\0';
  local_a8.AllocatorInstance.InlineData[6] = '\0';
  local_a8.AllocatorInstance.InlineData[7] = '\0';
  local_a8.AllocatorInstance.InlineData[8] = '\0';
  local_a8.AllocatorInstance.InlineData[9] = '\0';
  local_a8.AllocatorInstance.InlineData[10] = '\0';
  local_a8.AllocatorInstance.InlineData[0xb] = '\0';
  local_a8.AllocatorInstance.InlineData[0xc] = '\0';
  local_a8.AllocatorInstance.InlineData[0xd] = '\0';
  local_a8.AllocatorInstance.InlineData[0xe] = '\0';
  local_a8.AllocatorInstance.InlineData[0xf] = '\0';
  local_58.AllocatorInstance.InlineData[0] = '\0';
  local_58.AllocatorInstance.InlineData[1] = '\0';
  local_58.AllocatorInstance.InlineData[2] = '\0';
  local_58.AllocatorInstance.InlineData[3] = '\0';
  local_58.AllocatorInstance.InlineData[4] = '\0';
  local_58.AllocatorInstance.InlineData[5] = '\0';
  local_58.AllocatorInstance.InlineData[6] = '\0';
  local_58.AllocatorInstance.InlineData[7] = '\0';
  local_58.AllocatorInstance.InlineData[8] = '\0';
  local_58.AllocatorInstance.InlineData[9] = '\0';
  local_58.AllocatorInstance.InlineData[10] = '\0';
  local_58.AllocatorInstance.InlineData[0xb] = '\0';
  local_58.AllocatorInstance.InlineData[0xc] = '\0';
  local_58.AllocatorInstance.InlineData[0xd] = '\0';
  local_58.AllocatorInstance.InlineData[0xe] = '\0';
  local_58.AllocatorInstance.InlineData[0xf] = '\0';
  local_108._8_8_ = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (void *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_a8.MaxBits = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  *(FRDGBarrierBatchBegin **)__return_storage_ptr__ = *this->Key;
  FRDGBarrierValidation::FResourceMap::FResourceMap
            ((FResourceMap *)&__return_storage_ptr__->field_0x8,(FResourceMap *)local_108);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_70 = local_70 & 0xffffffff00000000;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  uVar2 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_a8.NumBits = 0;
  if (0x80 < (uint)local_a8.MaxBits) {
    local_a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_c0 = local_c0 & 0xffffffff00000000;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRDGTexture_*,TArray<FRDGTransitionInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,0,local_108._8_4_);
  iVar1 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_> @ 145e73e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FSHAHash_const_&>::
operator<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FSHAHash_const_&> *this,
          TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FSHAHash *pFVar1;
  int iVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
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
  pFVar1 = this->Key;
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
  uVar3 = pFVar1->Hash[1];
  uVar4 = pFVar1->Hash[2];
  uVar5 = pFVar1->Hash[3];
  uVar6 = pFVar1->Hash[4];
  uVar7 = pFVar1->Hash[5];
  uVar8 = pFVar1->Hash[6];
  uVar9 = pFVar1->Hash[7];
  uVar10 = pFVar1->Hash[8];
  uVar11 = pFVar1->Hash[9];
  uVar12 = pFVar1->Hash[10];
  uVar13 = pFVar1->Hash[0xb];
  uVar14 = pFVar1->Hash[0xc];
  uVar15 = pFVar1->Hash[0xd];
  uVar16 = pFVar1->Hash[0xe];
  uVar17 = pFVar1->Hash[0xf];
  __return_storage_ptr__->field_0x0 = pFVar1->Hash[0];
  __return_storage_ptr__->field_0x1 = uVar3;
  __return_storage_ptr__->field_0x2 = uVar4;
  __return_storage_ptr__->field_0x3 = uVar5;
  __return_storage_ptr__->field_0x4 = uVar6;
  __return_storage_ptr__->field_0x5 = uVar7;
  __return_storage_ptr__->field_0x6 = uVar8;
  __return_storage_ptr__->field_0x7 = uVar9;
  __return_storage_ptr__->field_0x8 = uVar10;
  __return_storage_ptr__->field_0x9 = uVar11;
  __return_storage_ptr__->field_0xa = uVar12;
  __return_storage_ptr__->field_0xb = uVar13;
  __return_storage_ptr__->field_0xc = uVar14;
  __return_storage_ptr__->field_0xd = uVar15;
  __return_storage_ptr__->field_0xe = uVar16;
  __return_storage_ptr__->field_0xf = uVar17;
  uVar3 = pFVar1->Hash[0x11];
  uVar4 = pFVar1->Hash[0x12];
  uVar5 = pFVar1->Hash[0x13];
  __return_storage_ptr__->field_0x10 = pFVar1->Hash[0x10];
  __return_storage_ptr__->field_0x11 = uVar3;
  __return_storage_ptr__->field_0x12 = uVar4;
  __return_storage_ptr__->field_0x13 = uVar5;
  TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>::
  TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
            ((TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x18,
             (TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FStableShaderKeyAndValue>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FStableShaderKeyAndValue>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary> @ 145e73fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary> * __thiscall
TKeyInitializer<enum_EShaderPlatform_const_&>::
operator<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>_TTuple<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary>
          (void *this,
          TTuple<EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary> *__return_storage_ptr__)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 auStack_438 [32];
  FShaderLibrary local_418;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_438;
  memset(&local_418,0,0x400);
  lVar5 = 0x20;
  piVar3 = &local_418.UnusedIndicies[0].ArrayMax;
  lVar4 = 0x20;
  do {
    (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(piVar3 + -3))->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar3 + -1) = 0;
    piVar3 = piVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 0x20;
  piVar3 = &local_418.Shaders[0].ArrayMax;
  do {
    (((TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *)(piVar3 + -3))->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)(piVar3 + -1) = 0;
    piVar3 = piVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined2 *)__return_storage_ptr__ = **(undefined2 **)this;
  FRayTracingShaderLibrary::FShaderLibrary::FShaderLibrary
            ((FShaderLibrary *)&__return_storage_ptr__->field_0x8,&local_418);
  puVar6 = local_18;
  lVar4 = 0x20;
  do {
    puVar1 = puVar6 + -2;
    puVar6 = puVar6 + -2;
    lVar4 = lVar4 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar4 != 0);
  pTVar7 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_418.Shaders;
  do {
    pFVar2 = pTVar7[-1].AllocatorInstance.Data;
    pTVar7 = pTVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar5 != 0);
  return __return_storage_ptr__;
}

