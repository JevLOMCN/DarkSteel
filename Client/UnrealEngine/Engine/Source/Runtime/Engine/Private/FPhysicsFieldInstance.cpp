// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~<lambda_1> @ 14834c9f0

void __thiscall `FPhysicsFieldInstance::UpdateInstance'::__l50::<lambda_1>::~<lambda_1>(void *this)

{
  if (*(void **)((longlong)this + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x108));
  }
  if (*(void **)((longlong)this + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf8));
  }
  if (*(void **)((longlong)this + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x90));
  }
  if (*(void **)((longlong)this + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x80));
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// operator() @ 148350d60

void __thiscall
`FPhysicsFieldInstance::UpdateInstance'::__l50::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FPhysicsFieldResource::UpdateResource
            (*(FPhysicsFieldResource **)this,param_1,
             (TStaticArray<int,21,4294967295> *)((longlong)this + 0x28),
             (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x18),
             (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)this + 8),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x80),
             (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x90),*(float *)((longlong)this + 0xa0),
             (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0xf8),
             (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
             ((longlong)this + 0x108),(TStaticArray<int,21,4294967295> *)((longlong)this + 0xa4));
  return;
}

// InitInstance @ 14838cbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsFieldInstance::InitInstance
          (FPhysicsFieldInstance *this,
          TArray<EFieldPhysicsType,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FPhysicsFieldResource *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  int iVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  undefined1 auStackY_bc8 [32];
  undefined1 local_b78 [8];
  ForAnyElementType local_b70;
  undefined8 local_b68;
  ForAnyElementType local_b60;
  undefined8 local_b58;
  ForAnyElementType local_b50;
  undefined8 local_b48;
  TAlignedElement<UE::Math::TIntVector4<int>,16> local_b40;
  code *local_b28 [2];
  undefined **local_b18;
  FPhysicsFieldResource *pFStack_b10;
  undefined8 local_b08;
  undefined ***local_b00;
  undefined1 local_af8 [16];
  undefined **local_ae8;
  FPhysicsFieldResource *pFStack_ae0;
  undefined8 local_ad8;
  undefined ***local_ad0;
  byte local_ac8;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined4 local_aa8;
  undefined4 uStack_aa4;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined4 local_a90;
  TStaticArray<UE::Core::TAlignedElement<UE::Math::TIntVector4<int>,16>,32,4294967295> local_a88;
  TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> local_888;
  TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> local_688;
  TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> local_488;
  TStaticArray<UE::Core::TAlignedElement<int,16>,32,4294967295> local_288;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_288.Elements[0].Value = -1;
  local_288.Elements[1].Value = -1;
  local_288.Elements[2].Value = -1;
  local_288.Elements[3].Value = -1;
  local_288.Elements[4].Value = -1;
  local_288.Elements[5].Value = -1;
  local_288.Elements[6].Value = -1;
  local_288.Elements[7].Value = -1;
  local_288.Elements[8].Value = -1;
  local_288.Elements[9].Value = -1;
  local_288.Elements[10].Value = -1;
  local_288.Elements[0xb].Value = -1;
  local_288.Elements[0xc].Value = -1;
  local_288.Elements[0xd].Value = -1;
  local_288.Elements[0xe].Value = -1;
  local_288.Elements[0xf].Value = -1;
  local_288.Elements[0x10].Value = -1;
  local_288.Elements[0x11].Value = -1;
  local_288.Elements[0x12].Value = -1;
  local_288.Elements[0x13].Value = -1;
  local_288.Elements[0x14].Value = -1;
  local_288.Elements[0x15].Value = -1;
  local_288.Elements[0x16].Value = -1;
  local_288.Elements[0x17].Value = -1;
  local_288.Elements[0x18].Value = -1;
  local_288.Elements[0x19].Value = -1;
  local_288.Elements[0x1a].Value = -1;
  local_288.Elements[0x1b].Value = -1;
  local_288.Elements[0x1c].Value = -1;
  local_288.Elements[0x1d].Value = -1;
  local_288.Elements[0x1e].Value = -1;
  local_288.Elements[0x1f].Value = -1;
  local_488.Elements[0].Value = -1;
  local_488.Elements[1].Value = -1;
  local_488.Elements[2].Value = -1;
  local_488.Elements[3].Value = -1;
  local_488.Elements[4].Value = -1;
  local_488.Elements[5].Value = -1;
  local_488.Elements[6].Value = -1;
  local_488.Elements[7].Value = -1;
  local_488.Elements[8].Value = -1;
  local_488.Elements[9].Value = -1;
  local_488.Elements[10].Value = -1;
  local_488.Elements[0xb].Value = -1;
  local_488.Elements[0xc].Value = -1;
  local_488.Elements[0xd].Value = -1;
  local_488.Elements[0xe].Value = -1;
  local_488.Elements[0xf].Value = -1;
  local_488.Elements[0x10].Value = -1;
  local_488.Elements[0x11].Value = -1;
  local_488.Elements[0x12].Value = -1;
  local_488.Elements[0x13].Value = -1;
  local_488.Elements[0x14].Value = -1;
  local_488.Elements[0x15].Value = -1;
  local_488.Elements[0x16].Value = -1;
  local_488.Elements[0x17].Value = -1;
  local_488.Elements[0x18].Value = -1;
  local_488.Elements[0x19].Value = -1;
  local_488.Elements[0x1a].Value = -1;
  local_488.Elements[0x1b].Value = -1;
  local_488.Elements[0x1c].Value = -1;
  local_488.Elements[0x1d].Value = -1;
  local_488.Elements[0x1e].Value = -1;
  local_488.Elements[0x1f].Value = -1;
  local_688.Elements[0].Value = -1;
  local_688.Elements[1].Value = -1;
  local_688.Elements[2].Value = -1;
  local_688.Elements[3].Value = -1;
  local_688.Elements[4].Value = -1;
  local_688.Elements[5].Value = -1;
  local_688.Elements[6].Value = -1;
  local_688.Elements[7].Value = -1;
  local_688.Elements[8].Value = -1;
  local_688.Elements[9].Value = -1;
  local_b40._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_b40._8_8_ = _UNK_15060db28;
  local_688.Elements[10].Value = -1;
  local_a88.Elements[0]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0]._8_8_ = _UNK_15060db28;
  local_a88.Elements[1]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[1]._8_8_ = _UNK_15060db28;
  local_a88.Elements[2]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[2]._8_8_ = _UNK_15060db28;
  local_a88.Elements[3]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[3]._8_8_ = _UNK_15060db28;
  local_a88.Elements[4]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[4]._8_8_ = _UNK_15060db28;
  local_a88.Elements[5]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[5]._8_8_ = _UNK_15060db28;
  local_a88.Elements[6]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[6]._8_8_ = _UNK_15060db28;
  local_a88.Elements[7]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[7]._8_8_ = _UNK_15060db28;
  local_a88.Elements[8]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[8]._8_8_ = _UNK_15060db28;
  local_a88.Elements[9]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[9]._8_8_ = _UNK_15060db28;
  local_a88.Elements[10]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[10]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0xb]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0xb]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0xc]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0xc]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0xd]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0xd]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0xe]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0xe]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0xf]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0xf]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x10]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x10]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x11]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x11]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x12]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x12]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x13]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x13]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x14]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x14]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x15]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x15]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x16]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x16]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x17]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x17]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x18]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x18]._8_8_ = _UNK_15060db28;
  local_688.Elements[0xb].Value = -1;
  local_688.Elements[0xc].Value = -1;
  local_688.Elements[0xd].Value = -1;
  local_688.Elements[0xe].Value = -1;
  local_688.Elements[0xf].Value = -1;
  local_688.Elements[0x10].Value = -1;
  local_688.Elements[0x11].Value = -1;
  local_688.Elements[0x12].Value = -1;
  local_688.Elements[0x13].Value = -1;
  local_688.Elements[0x14].Value = -1;
  local_688.Elements[0x15].Value = -1;
  local_688.Elements[0x16].Value = -1;
  local_688.Elements[0x17].Value = -1;
  local_688.Elements[0x18].Value = -1;
  local_688.Elements[0x19].Value = -1;
  local_688.Elements[0x1a].Value = -1;
  local_688.Elements[0x1b].Value = -1;
  local_688.Elements[0x1c].Value = -1;
  local_688.Elements[0x1d].Value = -1;
  local_688.Elements[0x1e].Value = -1;
  local_688.Elements[0x1f].Value = -1;
  local_888.Elements[0].Value = -1;
  local_888.Elements[1].Value = -1;
  local_888.Elements[2].Value = -1;
  local_888.Elements[3].Value = -1;
  local_888.Elements[4].Value = -1;
  local_888.Elements[5].Value = -1;
  local_888.Elements[6].Value = -1;
  local_888.Elements[7].Value = -1;
  local_888.Elements[8].Value = -1;
  local_888.Elements[9].Value = -1;
  local_888.Elements[10].Value = -1;
  local_888.Elements[0xb].Value = -1;
  local_888.Elements[0xc].Value = -1;
  local_888.Elements[0xd].Value = -1;
  local_888.Elements[0xe].Value = -1;
  local_888.Elements[0xf].Value = -1;
  local_888.Elements[0x10].Value = -1;
  local_888.Elements[0x11].Value = -1;
  local_888.Elements[0x12].Value = -1;
  local_888.Elements[0x13].Value = -1;
  local_888.Elements[0x14].Value = -1;
  local_888.Elements[0x15].Value = -1;
  local_888.Elements[0x16].Value = -1;
  local_888.Elements[0x17].Value = -1;
  local_888.Elements[0x18].Value = -1;
  local_888.Elements[0x19].Value = -1;
  local_888.Elements[0x1a].Value = -1;
  local_888.Elements[0x1b].Value = -1;
  local_888.Elements[0x1c].Value = -1;
  local_888.Elements[0x1d].Value = -1;
  local_888.Elements[0x1e].Value = -1;
  local_888.Elements[0x1f].Value = -1;
  iVar15 = 0;
  local_a88.Elements[0x19]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x19]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x1a]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1a]._8_8_ = _UNK_15060db28;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_a88.Elements[0x1b]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1b]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x1c]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1c]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x1d]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1d]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x1e]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1e]._8_8_ = _UNK_15060db28;
  local_a88.Elements[0x1f]._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_a88.Elements[0x1f]._8_8_ = _UNK_15060db28;
  if ((*piVar16 < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), uVar8 = _UNK_151aa2748,
     uVar7 = ___xmm_0000001300000012000000110000000d, uVar6 = _UNK_151aa2708,
     uVar5 = ___xmm_00000007000000060000000500000002, ::_TSS0 == -1)) {
    local_b70.Data = (FScriptContainerElement *)0x0;
    local_b68 = 8;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,8,0,&local_b70,8,(int *)((longlong)&local_b68 + 4));
    local_88 = uVar5;
    uStack_80 = uVar6;
    local_78 = uVar7;
    uStack_70 = uVar8;
    *(undefined8 *)local_b70.Data = uVar5;
    *(undefined8 *)(local_b70.Data + 8) = uVar6;
    *(undefined8 *)(local_b70.Data + 0x10) = uVar7;
    *(undefined8 *)(local_b70.Data + 0x18) = uVar8;
    VectorTypes.AllocatorInstance.Data = local_b70.Data;
    VectorTypes.ArrayNum = (int)local_b68;
    VectorTypes.ArrayMax = local_b68._4_4_;
    local_b68 = 0;
    local_b70.Data = (FScriptContainerElement *)0x0;
    atexit(`FPhysicsFieldInstance::InitInstance'::__l2::
           _dynamic_atexit_destructor_for__VectorTypes__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar16 < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), uVar6 = _UNK_151aa2718,
     uVar5 = ___xmm_0000000a000000090000000400000003, ::_TSS1 == -1)) {
    local_b60.Data = (FScriptContainerElement *)0x0;
    local_b58 = 6;
    local_aa8 = 8;
    uStack_aa4 = 0xe;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,6,0,&local_b60,6,(int *)((longlong)&local_b58 + 4));
    local_ab8 = uVar5;
    uStack_ab0 = uVar6;
    *(undefined8 *)local_b60.Data = uVar5;
    *(undefined8 *)(local_b60.Data + 8) = uVar6;
    *(ulonglong *)(local_b60.Data + 0x10) = CONCAT44(uStack_aa4,local_aa8);
    ScalarTypes.AllocatorInstance.Data = local_b60.Data;
    ScalarTypes.ArrayNum = (int)local_b58;
    ScalarTypes.ArrayMax = local_b58._4_4_;
    local_b58 = 0;
    local_b60.Data = (FScriptContainerElement *)0x0;
    atexit(`FPhysicsFieldInstance::InitInstance'::__l2::
           _dynamic_atexit_destructor_for__ScalarTypes__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar16 < ::_TSS2) &&
     (_Init_thread_header(&::_TSS2), uVar6 = _UNK_151aa2728,
     uVar5 = ___xmm_0000000c0000000f0000001000000001, ::_TSS2 == -1)) {
    local_b50.Data = (FScriptContainerElement *)0x0;
    local_b48 = 5;
    local_a90 = 0xb;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,5,0,&local_b50,5,(int *)((longlong)&local_b48 + 4));
    local_aa0 = uVar5;
    uStack_a98 = uVar6;
    *(undefined8 *)local_b50.Data = uVar5;
    *(undefined8 *)(local_b50.Data + 8) = uVar6;
    *(undefined4 *)(local_b50.Data + 0x10) = local_a90;
    IntegerTypes.AllocatorInstance.Data = local_b50.Data;
    IntegerTypes.ArrayNum = (int)local_b48;
    IntegerTypes.ArrayMax = local_b48._4_4_;
    local_b48 = 0;
    local_b50.Data = (FScriptContainerElement *)0x0;
    atexit(`FPhysicsFieldInstance::InitInstance'::__l2::
           _dynamic_atexit_destructor_for__IntegerTypes__);
    _Init_thread_footer(&::_TSS2);
  }
  iVar2 = param_1->ArrayNum;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar17 + (longlong)iVar2 * 4;
  FVar18.Data = IntegerTypes.AllocatorInstance.Data;
  FVar19.Data = ScalarTypes.AllocatorInstance.Data;
  FVar20.Data = VectorTypes.AllocatorInstance.Data;
LAB_14838d266:
  do {
    if (param_1->ArrayNum != iVar2) {
      local_b78[0] = 0;
      `TCheckedPointerIterator<enum_EFieldPhysicsType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b78);
      FVar18 = IntegerTypes.AllocatorInstance;
      FVar19 = ScalarTypes.AllocatorInstance;
      FVar20 = VectorTypes.AllocatorInstance;
    }
    if (pFVar17 == pFVar1) {
      if (this->FieldResource == (FPhysicsFieldResource *)0x0) {
        this_00 = ::operator_new(0x1080);
        pFStack_b10 = (FPhysicsFieldResource *)0x0;
        if (this_00 != (FPhysicsFieldResource *)0x0) {
          pFStack_b10 = FPhysicsFieldResource::FPhysicsFieldResource
                                  (this_00,iVar15,param_1,&local_288,&local_488,&local_688,
                                   &local_888,&local_a88,param_2);
        }
        this->FieldResource = pFStack_b10;
        local_b28[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FPhysicsFieldInstance::InitInstance'::__l20::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
        local_b00 = (undefined ***)0x0;
        local_b18 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FPhysicsFieldInstance::InitInstance'::`20'::<lambda_1>,1,0>
                     ::_vftable_;
        this_01 = FRenderCommandList::GetInstanceTLS();
        if (this_01 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FPhysicsFieldInstance::InitInstance_::__l20::TSTR_FInitPhysicsFieldResourceCommand656>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b28);
        }
        else {
          this_02 = FRenderCommandList::GetRenderThread(this_01);
          local_af8._0_8_ = local_b28[0];
          local_ad0 = local_b00;
          local_ae8 = local_b18;
          pFStack_ae0 = pFStack_b10;
          local_ad8 = local_b08;
          local_b28[0] = (code *)0x0;
          local_ac8 = 2;
          pFVar11 = (FRenderCommandTag *)
                    TRenderCommandTag<`FPhysicsFieldInstance::InitInstance'::__l20::TSTR_FInitPhysicsFieldResourceCommand656>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_af8,pFVar11);
          uVar13 = (ulonglong)local_ac8;
          if ((2 < uVar13) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_af8._0_8_ != (code *)0x0) {
              pppuVar14 = (undefined ***)(local_af8 + 0x10);
              if (local_ad0 != (undefined ***)0x0) {
                pppuVar14 = local_ad0;
              }
              (*(code *)(*pppuVar14)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13])(local_af8);
          }
        }
        if (local_b28[0] != (code *)0x0) {
          pppuVar14 = &local_b18;
          if (local_b00 != (undefined ***)0x0) {
            pppuVar14 = local_b00;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      return;
    }
    uVar3 = *(uint *)pFVar17;
    local_888.Elements[uVar3].Value = iVar15;
    for (pFVar12 = FVar20.Data; pFVar12 != FVar20.Data + (longlong)VectorTypes.ArrayNum * 4;
        pFVar12 = pFVar12 + 4) {
      if (*(uint *)pFVar12 == uVar3) {
        uVar13 = (longlong)pFVar12 - (longlong)FVar20.Data >> 2;
        if ((int)uVar13 != -1) {
          uVar13 = uVar13 & 0xffffffff;
          local_288.Elements[uVar13].Value = iVar15;
          iVar15 = iVar15 + 3;
          pFVar17 = pFVar17 + 4;
          *(uint *)(local_a88.Elements + uVar13) = uVar3;
          goto LAB_14838d266;
        }
        break;
      }
    }
    for (pFVar12 = FVar19.Data; pFVar12 != FVar19.Data + (longlong)ScalarTypes.ArrayNum * 4;
        pFVar12 = pFVar12 + 4) {
      if (*(uint *)pFVar12 == uVar3) {
        uVar13 = (longlong)pFVar12 - (longlong)FVar19.Data >> 2;
        if ((int)uVar13 != -1) {
          uVar13 = uVar13 & 0xffffffff;
          local_488.Elements[uVar13].Value = iVar15;
          iVar15 = iVar15 + 1;
          pFVar17 = pFVar17 + 4;
          *(uint *)&local_a88.Elements[uVar13].field_0x4 = uVar3;
          goto LAB_14838d266;
        }
        break;
      }
    }
    for (pFVar12 = FVar18.Data; pFVar12 != FVar18.Data + (longlong)IntegerTypes.ArrayNum * 4;
        pFVar12 = pFVar12 + 4) {
      if (*(uint *)pFVar12 == uVar3) {
        uVar10 = (uint)((longlong)pFVar12 - (longlong)FVar18.Data >> 2);
        goto LAB_14838d312;
      }
    }
    uVar10 = 0xffffffff;
LAB_14838d312:
    if (uVar10 != 0xffffffff) {
      local_688.Elements[uVar10].Value = iVar15;
      iVar15 = iVar15 + 1;
      *(uint *)&local_a88.Elements[uVar10].field_0x8 = uVar3;
    }
    pFVar17 = pFVar17 + 4;
  } while( true );
}

// ReleaseInstance @ 14839d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPhysicsFieldInstance::ReleaseInstance(FPhysicsFieldInstance *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_b8 [32];
  code *local_88 [2];
  undefined **local_78;
  FPhysicsFieldResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FPhysicsFieldResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (this->FieldResource != (FPhysicsFieldResource *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FPhysicsFieldInstance::ReleaseInstance'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FPhysicsFieldInstance::ReleaseInstance'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->FieldResource;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FPhysicsFieldInstance::ReleaseInstance_::__l5::TSTR_FDestroyPhysicsFieldResourceCommand669>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FPhysicsFieldInstance::ReleaseInstance'::__l5::TSTR_FDestroyPhysicsFieldResourceCommand669>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->FieldResource = (FPhysicsFieldResource *)0x0;
  }
  piVar1 = &(this->NodesOffsets).ArrayMax;
  (this->NodesOffsets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NodesOffsets).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->NodesParams).ArrayMax;
  (this->NodesParams).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NodesParams).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetsMax).ArrayMax;
  (this->TargetsMax).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetsMax).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetsMin).ArrayMax;
  (this->TargetsMin).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetsMin).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoundsMin).ArrayMax;
  (this->BoundsMin).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->BoundsMin).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BoundsMax).ArrayMax;
  (this->BoundsMax).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->BoundsMax).AllocatorInstance,0,piVar1);
  }
  return;
}

// UpdateInstance @ 1483b4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPhysicsFieldInstance::UpdateInstance(FPhysicsFieldInstance *this,float param_1,bool param_2)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  EFieldOutputType EVar30;
  ForAnyElementType FVar31;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar33;
  bool bVar34;
  int iVar35;
  uint uVar36;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar37;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar38;
  EFieldPhysicsType EVar39;
  FScriptContainerElement *pFVar40;
  code **ppcVar41;
  ulonglong uVar42;
  FScriptContainerElement *pFVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  FScriptContainerElement *pFVar46;
  FPhysicsFieldInstance *pFVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auStackY_498 [32];
  undefined1 local_448;
  undefined1 local_447;
  char local_446;
  int local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  int local_424;
  EFieldOutputType local_420;
  FPhysicsFieldInstance *local_418;
  ForAnyElementType local_410;
  int local_408;
  int local_404;
  ForAnyElementType local_400;
  int local_3f8;
  int local_3f4;
  ForAnyElementType local_3f0;
  int local_3e8;
  int local_3e4;
  ForAnyElementType local_3e0;
  int local_3d8;
  int local_3d4;
  ForAnyElementType local_3d0;
  int local_3c8;
  int local_3c4;
  ForAnyElementType local_3c0;
  int local_3b8;
  int local_3b4;
  uint local_3b0;
  int local_3ac;
  uint local_3a8;
  float local_3a4;
  FScriptContainerElement *local_3a0;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_388;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_380;
  double local_378;
  undefined1 local_370 [16];
  double local_360;
  undefined1 local_358 [16];
  double local_348;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  FPhysicsFieldResource *local_2f8;
  FScriptContainerElement *local_2f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_2e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_2e0;
  double local_2d8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  undefined8 local_290;
  double local_278;
  FPhysicsFieldResource *local_268;
  ForAnyElementType local_260;
  undefined8 local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  code *local_240;
  code *pcStack_238;
  code *local_230;
  code *pcStack_228;
  code *local_220;
  code *pcStack_218;
  code *local_210;
  code *pcStack_208;
  code *local_200;
  code *pcStack_1f8;
  int local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  int local_174;
  ForAnyElementType local_170;
  undefined8 local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  code *local_148 [2];
  code *local_138 [3];
  code **local_120;
  undefined1 local_118 [40];
  code **local_f0;
  byte local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pTVar2 = &this->NodesOffsets;
  (this->NodesOffsets).ArrayNum = 0;
  local_446 = param_2;
  local_418 = this;
  local_3a4 = param_1;
  if ((this->NodesOffsets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,&(this->NodesOffsets).ArrayMax);
  }
  pTVar3 = &this->NodesParams;
  piVar1 = &(this->NodesParams).ArrayMax;
  (this->NodesParams).ArrayNum = 0;
  if ((this->NodesParams).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  local_388 = &this->BoundsMin;
  (this->BoundsMin).ArrayNum = 0;
  if ((this->BoundsMin).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&local_388->AllocatorInstance,0,&(this->BoundsMin).ArrayMax);
  }
  local_380 = &this->BoundsMax;
  (this->BoundsMax).ArrayNum = 0;
  if ((this->BoundsMax).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&local_380->AllocatorInstance,0,&(this->BoundsMax).ArrayMax);
  }
  if (this->FieldResource != (FPhysicsFieldResource *)0x0) {
    local_2e8 = &this->TargetsMin;
    local_2d8 = 0.0;
    local_2d0._s_0.Z = 0.0;
    local_2d0._s_0.X = 0.0;
    local_2d0._s_0.Y = 0.0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (local_2e8,(TVector<double> *)&local_2d0._s_0,0x14);
    local_2e0 = &this->TargetsMax;
    local_2b8._s_0.Z = 0.0;
    local_2b8._s_0.X = 0.0;
    local_2b8._s_0.Y = 0.0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (local_2e0,(TVector<double> *)&local_2b8._s_0,0x14);
    if (&this->TargetsOffsets <= &this->BoundsOffsets) {
      memset(&this->TargetsOffsets,0,0x54);
    }
    if (&this->BoundsOffsets <= &this->NodesOffsets) {
      memset(&this->BoundsOffsets,0,0x54);
    }
    dVar29 = __real_4049000000000000;
    dVar28 = __real_47efffffe0000000;
    local_2f8 = this->FieldResource;
    uVar64 = SUB84(__real_47efffffe0000000,0);
    uVar65 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
    uVar54 = (undefined4)__real_c7efffffe0000000;
    uVar55 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
    local_3a8 = (local_2f8->FieldInfos).TargetTypes.ArrayNum;
    uVar42 = (ulonglong)(int)local_3a8;
    pFVar45 = (local_2f8->FieldInfos).TargetTypes.AllocatorInstance.Data;
    local_2f0 = pFVar45 + uVar42 * 4;
    pFVar47 = this;
    while( true ) {
      pFVar46 = local_2f0;
      local_3a0 = pFVar45;
      if ((local_2f8->FieldInfos).TargetTypes.ArrayNum != (int)uVar42) {
        local_448 = 0;
        `TCheckedPointerIterator<enum_EFieldPhysicsType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_448);
      }
      if (pFVar45 == pFVar46) break;
      local_3ac = (pFVar47->NodesOffsets).ArrayNum;
      iVar35 = 0;
      local_424 = 0;
      local_378 = (double)CONCAT44(uVar55,uVar54);
      local_420 = GetFieldTargetOutput(*(EFieldPhysicsType *)pFVar45);
      local_3b0 = (pFVar47->FieldCommands).ArrayNum;
      uVar42 = (ulonglong)(int)local_3b0;
      pFVar43 = (pFVar47->FieldCommands).AllocatorInstance.Data;
      pFVar46 = pFVar43 + 0x28;
      local_390 = pFVar43 + uVar42 * 200;
      uVar48 = uVar54;
      uVar51 = uVar55;
      uVar56 = uVar64;
      uVar57 = uVar65;
      uVar58 = uVar64;
      uVar59 = uVar65;
      uVar60 = uVar54;
      uVar61 = uVar55;
      uVar62 = uVar54;
      uVar63 = uVar55;
      uVar66 = uVar64;
      uVar67 = uVar65;
      while( true ) {
        local_398 = pFVar43;
        if ((pFVar47->FieldCommands).ArrayNum != (int)uVar42) {
          local_447 = 0;
          `TCheckedPointerIterator<FFieldSystemCommand,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_447);
        }
        pFVar45 = local_3a0;
        if (pFVar43 == local_390) break;
        pTVar37 = GetFieldPhysicsNames();
        pFVar45 = (pTVar37->AllocatorInstance).Data;
        if (pFVar45 != pFVar45 + (longlong)pTVar37->ArrayNum * 8) {
          pFVar40 = pFVar45;
          do {
            if (*(longlong *)pFVar40 == *(longlong *)pFVar43) {
              EVar39 = (EFieldPhysicsType)((longlong)pFVar40 - (longlong)pFVar45 >> 3);
              if ((EVar39 != ~Field_None) && ((int)EVar39 < 0x14)) goto LAB_1483b51d3;
              break;
            }
            pFVar40 = pFVar40 + 8;
          } while (pFVar40 != pFVar45 + (longlong)pTVar37->ArrayNum * 8);
        }
        EVar39 = Field_None;
LAB_1483b51d3:
        uVar49 = uVar66;
        uVar50 = uVar67;
        if (EVar39 == *(EFieldPhysicsType *)local_3a0) {
          *(double *)(pFVar46 + -8) = -3.4028234663852886e+38;
          *(double *)pFVar46 = -3.4028234663852886e+38;
          *(double *)(pFVar46 + 8) = -3.4028234663852886e+38;
          *(double *)(pFVar46 + 0x10) = 3.4028234663852886e+38;
          *(double *)(pFVar46 + 0x18) = 3.4028234663852886e+38;
          *(double *)(pFVar46 + 0x20) = 3.4028234663852886e+38;
          *(undefined4 *)(pFVar46 + 0x34) = 0x3f800000;
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar46 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar46 + 0x40) = uVar53;
          *(double *)(pFVar46 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (*(longlong **)(pFVar46 + -0x20) != (longlong *)0x0) {
            uVar48 = (**(code **)(**(longlong **)(pFVar46 + -0x20) + 0x40))();
            *(undefined4 *)(pFVar46 + 0x34) = uVar48;
            (**(code **)(**(longlong **)(pFVar46 + -0x20) + 0x48))
                      (*(longlong **)(pFVar46 + -0x20),pFVar46 + -8,pFVar46 + 0x10);
          }
          pTVar32 = local_388;
          local_360 = *(double *)(pFVar46 + 8);
          auVar6 = *(undefined1 (*) [16])(pFVar46 + -8);
          local_358 = *(undefined1 (*) [16])(pFVar46 + 0x10);
          local_348 = *(double *)(pFVar46 + 0x20);
          local_338 = auVar6._0_8_;
          dVar9 = local_358._0_8_;
          if ((local_446 == '\0') ||
             (((double)CONCAT44(uVar55,uVar54) <= local_338 &&
               local_338 != (double)CONCAT44(uVar55,uVar54) && (dVar9 < dVar28)))) {
            local_370._8_8_ = auVar6._8_8_;
            dVar5 = local_348;
            local_328 = local_360;
            dVar10 = (double)local_358._8_8_;
          }
          else {
            dVar9 = *(double *)(pFVar46 + 0x38) + dVar29;
            local_338 = *(double *)(pFVar46 + 0x38) - dVar29;
            local_370._8_8_ = *(double *)(pFVar46 + 0x40) - dVar29;
            dVar5 = *(double *)(pFVar46 + 0x48) + dVar29;
            local_328 = *(double *)(pFVar46 + 0x48) - dVar29;
            dVar10 = *(double *)(pFVar46 + 0x40) + dVar29;
          }
          pFVar45 = (local_388->AllocatorInstance).Data;
          dStack_320 = local_2d8;
          dStack_330 = (double)local_370._8_8_;
          if (((pFVar45 <= (FScriptContainerElement *)&local_338) &&
              ((FScriptContainerElement *)&local_338 <
               pFVar45 + (longlong)local_388->ArrayMax * 0x20)) &&
             (local_370 = auVar6,
             bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), auVar6 = local_370, bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_370 = auVar6;
          iVar35 = pTVar32->ArrayNum;
          if (iVar35 == pTVar32->ArrayMax) {
            iVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1020,&pTVar32->AllocatorInstance,&pTVar32->ArrayMax);
          }
          pTVar33 = local_380;
          pTVar32->ArrayNum = iVar35 + 1;
          pFVar43 = (pTVar32->AllocatorInstance).Data;
          pFVar45 = pFVar43 + (longlong)iVar35 * 0x20;
          *(double *)pFVar45 = local_338;
          *(double *)(pFVar45 + 8) = dStack_330;
          pFVar43 = pFVar43 + (longlong)iVar35 * 0x20 + 0x10;
          *(double *)pFVar43 = local_328;
          *(double *)(pFVar43 + 8) = dStack_320;
          pFVar45 = (local_380->AllocatorInstance).Data;
          dStack_300 = (double)*(float *)(pFVar46 + 0x34);
          local_318 = dVar9;
          dStack_310 = dVar10;
          local_308 = dVar5;
          if (((pFVar45 <= (FScriptContainerElement *)&local_318) &&
              ((FScriptContainerElement *)&local_318 <
               pFVar45 + (longlong)local_380->ArrayMax * 0x20)) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar35 = pTVar33->ArrayNum;
          if (iVar35 == pTVar33->ArrayMax) {
            iVar35 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1020,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
          }
          pFVar47 = local_418;
          EVar30 = local_420;
          piVar4 = &(this->NodesOffsets).ArrayMax;
          pTVar33->ArrayNum = iVar35 + 1;
          pFVar43 = (pTVar33->AllocatorInstance).Data;
          pFVar45 = pFVar43 + (longlong)iVar35 * 0x20;
          *(double *)pFVar45 = local_318;
          *(double *)(pFVar45 + 8) = dStack_310;
          pFVar43 = pFVar43 + (longlong)iVar35 * 0x20 + 0x10;
          *(double *)pFVar43 = local_308;
          *(double *)(pFVar43 + 8) = dStack_300;
          dVar9 = *(double *)(pFVar46 + -8);
          dVar5 = *(double *)pFVar46;
          if (dVar5 <= (double)CONCAT44(uVar59,uVar58)) {
            uVar58 = SUB84(dVar5,0);
            uVar59 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = *(double *)(pFVar46 + 8);
          if (dVar5 <= (double)CONCAT44(uVar57,uVar56)) {
            uVar56 = SUB84(dVar5,0);
            uVar57 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = *(double *)(pFVar46 + 0x10);
          if ((double)CONCAT44(uVar63,uVar62) <= dVar5) {
            uVar62 = SUB84(dVar5,0);
            uVar63 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = *(double *)(pFVar46 + 0x20);
          if ((double)CONCAT44(uVar61,uVar60) <= dVar5) {
            uVar60 = SUB84(dVar5,0);
            uVar61 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          uVar49 = SUB84(dVar9,0);
          uVar50 = (int)((ulonglong)dVar9 >> 0x20);
          if ((double)CONCAT44(uVar67,uVar66) <= dVar9) {
            uVar49 = uVar66;
            uVar50 = uVar67;
          }
          dVar9 = *(double *)(pFVar46 + 0x18);
          uVar48 = SUB84(dVar9,0);
          uVar51 = (undefined4)((ulonglong)dVar9 >> 0x20);
          if (dVar9 <= local_378) {
            uVar48 = SUB84(local_378,0);
            uVar51 = (undefined4)((ulonglong)local_378 >> 0x20);
          }
          local_378 = (double)CONCAT44(uVar51,uVar48);
          if ((local_424 == 1) && (local_420 == Field_Output_Integer)) {
            local_444 = (local_418->NodesParams).ArrayNum;
            pFVar45 = (pTVar2->AllocatorInstance).Data;
            if ((pFVar45 <= (FScriptContainerElement *)&local_444) &&
               (((FScriptContainerElement *)&local_444 < pFVar45 + (longlong)*piVar4 * 4 &&
                (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar34)))) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar35 = (this->NodesOffsets).ArrayNum;
            if (iVar35 == *piVar4) {
              iVar35 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar4);
            }
            (this->NodesOffsets).ArrayNum = iVar35 + 1;
            local_440 = 0x40400000;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_444;
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)&local_440) &&
                ((FScriptContainerElement *)&local_440 < pFVar45 + (longlong)*piVar1 * 4)) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar34)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar35 = (this->NodesParams).ArrayNum;
            if (iVar35 == *piVar1) {
              iVar35 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->NodesParams).ArrayNum = iVar35 + 1;
            local_43c = 0x41500000;
            *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_440;
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)&local_43c) &&
                ((FScriptContainerElement *)&local_43c < pFVar45 + (longlong)*piVar1 * 4)) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar34)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar35 = (this->NodesParams).ArrayNum;
            if (iVar35 == *piVar1) {
              iVar35 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->NodesParams).ArrayNum = iVar35 + 1;
            local_438 = 0x3f800000;
            *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_43c;
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)&local_438) &&
                ((FScriptContainerElement *)&local_438 < pFVar45 + (longlong)*piVar1 * 4)) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar34)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar35 = (this->NodesParams).ArrayNum;
            if (iVar35 == *piVar1) {
              iVar35 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->NodesParams).ArrayNum = iVar35 + 1;
            *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_438;
          }
          (**(code **)(**(longlong **)(pFVar46 + -0x20) + 0x38))
                    (*(longlong **)(pFVar46 + -0x20),pTVar2,pTVar3,*(undefined4 *)(pFVar46 + -0x10))
          ;
          if (0 < local_424) {
            if (EVar30 == Field_Output_Vector) {
              FSumVector::FillDefaultSetup(pTVar2,pTVar3);
            }
            else {
              if (EVar30 != Field_Output_Scalar) {
                if (EVar30 != Field_Output_Integer) goto LAB_1483b5a60;
                local_434 = (pFVar47->NodesParams).ArrayNum;
                pFVar45 = (pTVar2->AllocatorInstance).Data;
                if (((pFVar45 <= (FScriptContainerElement *)&local_434) &&
                    ((FScriptContainerElement *)&local_434 < pFVar45 + (longlong)*piVar4 * 4)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar35 = (this->NodesOffsets).ArrayNum;
                if (iVar35 == *piVar4) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar2->AllocatorInstance,piVar4);
                }
                (this->NodesOffsets).ArrayNum = iVar35 + 1;
                local_430 = 0x40400000;
                *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_434;
                pFVar45 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar45 <= (FScriptContainerElement *)&local_430) &&
                    ((FScriptContainerElement *)&local_430 < pFVar45 + (longlong)*piVar1 * 4)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar35 = (this->NodesParams).ArrayNum;
                if (iVar35 == *piVar1) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar3->AllocatorInstance,piVar1);
                }
                (this->NodesParams).ArrayNum = iVar35 + 1;
                local_42c = 0x41500000;
                *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_430
                ;
                pFVar45 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar45 <= (FScriptContainerElement *)&local_42c) &&
                    ((FScriptContainerElement *)&local_42c < pFVar45 + (longlong)*piVar1 * 4)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar35 = (this->NodesParams).ArrayNum;
                if (iVar35 == *piVar1) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar3->AllocatorInstance,piVar1);
                }
                (this->NodesParams).ArrayNum = iVar35 + 1;
                local_428 = 0x3f800000;
                *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_42c
                ;
                pFVar45 = (pTVar3->AllocatorInstance).Data;
                if (((pFVar45 <= (FScriptContainerElement *)&local_428) &&
                    ((FScriptContainerElement *)&local_428 < pFVar45 + (longlong)*piVar1 * 4)) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar35 = (this->NodesParams).ArrayNum;
                if (iVar35 == *piVar1) {
                  iVar35 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar3->AllocatorInstance,piVar1);
                }
                (this->NodesParams).ArrayNum = iVar35 + 1;
                *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_428
                ;
              }
              FSumScalar::FillDefaultSetup(pTVar2,pTVar3);
            }
          }
LAB_1483b5a60:
          uVar54 = (undefined4)__real_c7efffffe0000000;
          uVar55 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
          iVar35 = local_424 + 1;
          pFVar43 = local_398;
          local_424 = iVar35;
        }
        pFVar43 = pFVar43 + 200;
        uVar42 = (ulonglong)local_3b0;
        pFVar46 = pFVar46 + 200;
        uVar66 = uVar49;
        uVar67 = uVar50;
      }
      (pFVar47->BoundsOffsets).Elements[*(EFieldPhysicsType *)local_3a0 + Field_DynamicState] =
           iVar35;
      (pFVar47->TargetsOffsets).Elements[*(EFieldPhysicsType *)local_3a0 + Field_DynamicState] =
           (pFVar47->NodesOffsets).ArrayNum - local_3ac;
      if (iVar35 == 0) {
        local_290 = CONCAT44(uVar55,uVar54);
        uVar52 = ___xmm_c7efffffe0000000c7efffffe0000000;
        uVar53 = _UNK_150b2d318;
      }
      else {
        uVar52 = CONCAT44(uVar67,uVar66);
        local_290 = CONCAT44(uVar57,uVar56);
        uVar53 = CONCAT44(uVar59,uVar58);
      }
      EVar39 = *(EFieldPhysicsType *)local_3a0;
      uVar36 = 0;
      if ((int)EVar39 < (pFVar47->TargetsMin).ArrayNum) {
        uVar36 = ~EVar39 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (pFVar47->TargetsMin).AllocatorInstance.Data;
      pFVar46 = pFVar43 + (longlong)(int)EVar39 * 0x18;
      *(undefined8 *)pFVar46 = uVar52;
      *(undefined8 *)(pFVar46 + 8) = uVar53;
      *(undefined8 *)(pFVar43 + (longlong)(int)EVar39 * 0x18 + 0x10) = local_290;
      if (iVar35 == 0) {
        local_278 = dVar28;
        uVar52 = ___xmm_47efffffe000000047efffffe0000000;
        uVar53 = _UNK_150b28868;
      }
      else {
        uVar52 = CONCAT44(uVar63,uVar62);
        local_278 = (double)CONCAT44(uVar61,uVar60);
        uVar53 = CONCAT44(uVar51,uVar48);
      }
      EVar39 = *(EFieldPhysicsType *)pFVar45;
      uVar36 = 0;
      if ((int)EVar39 < (pFVar47->TargetsMax).ArrayNum) {
        uVar36 = ~EVar39 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar43 = (pFVar47->TargetsMax).AllocatorInstance.Data;
      pFVar45 = pFVar45 + 4;
      uVar42 = (ulonglong)local_3a8;
      pFVar46 = pFVar43 + (longlong)(int)EVar39 * 0x18;
      *(undefined8 *)pFVar46 = uVar52;
      *(undefined8 *)(pFVar46 + 8) = uVar53;
      *(double *)(pFVar43 + (longlong)(int)EVar39 * 0x18 + 0x10) = local_278;
    }
    piVar1 = (pFVar47->TargetsOffsets).Elements + 1;
    *piVar1 = *piVar1 + (pFVar47->TargetsOffsets).Elements[0];
    iVar35 = (pFVar47->TargetsOffsets).Elements[1];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 1;
    *piVar1 = *piVar1 + (pFVar47->BoundsOffsets).Elements[0];
    iVar7 = (pFVar47->BoundsOffsets).Elements[1];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 2;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[2];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 2;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[2];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 3;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[3];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 3;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[3];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 4;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[4];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 4;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[4];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 5;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[5];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 5;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[5];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 6;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[6];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 6;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[6];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 7;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[7];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 7;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[7];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 8;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[8];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 8;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[8];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 9;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[9];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 9;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[9];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 10;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[10];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 10;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[10];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0xb;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0xb];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0xb;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0xb];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0xc;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0xc];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0xc;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0xc];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0xd;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0xd];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0xd;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0xd];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0xe;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0xe];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0xe;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0xe];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0xf;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0xf];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0xf;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0xf];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0x10;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0x10];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0x10;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0x10];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0x11;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0x11];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0x11;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0x11];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0x12;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0x12];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0x12;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0x12];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0x13;
    *piVar1 = *piVar1 + iVar35;
    iVar35 = (pFVar47->TargetsOffsets).Elements[0x13];
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0x13;
    *piVar1 = *piVar1 + iVar7;
    iVar7 = (pFVar47->BoundsOffsets).Elements[0x13];
    piVar1 = (pFVar47->TargetsOffsets).Elements + 0x14;
    *piVar1 = *piVar1 + iVar35;
    piVar1 = (pFVar47->BoundsOffsets).Elements + 0x14;
    *piVar1 = *piVar1 + iVar7;
    local_3b8 = (this->NodesOffsets).ArrayNum;
    lVar44 = (longlong)local_3b8;
    pFVar45 = (pTVar2->AllocatorInstance).Data;
    local_3c0.Data = (FScriptContainerElement *)0x0;
    pcVar8 = *(code **)(pFVar47->TargetsOffsets).Elements;
    pcVar11 = *(code **)((pFVar47->TargetsOffsets).Elements + 2);
    pcVar12 = *(code **)((pFVar47->TargetsOffsets).Elements + 4);
    pcVar13 = *(code **)((pFVar47->TargetsOffsets).Elements + 6);
    pcVar14 = *(code **)((pFVar47->TargetsOffsets).Elements + 8);
    pcVar15 = *(code **)((pFVar47->TargetsOffsets).Elements + 10);
    pcVar16 = *(code **)((pFVar47->TargetsOffsets).Elements + 0xc);
    pcVar17 = *(code **)((pFVar47->TargetsOffsets).Elements + 0xe);
    pcVar18 = *(code **)((pFVar47->TargetsOffsets).Elements + 0x10);
    pcVar19 = *(code **)((pFVar47->TargetsOffsets).Elements + 0x12);
    iVar35 = (pFVar47->TargetsOffsets).Elements[0x14];
    if (local_3b8 == 0) {
      local_3b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3b8,0,&local_3c0,local_3b8,&local_3b4);
      memcpy(local_3c0.Data,pFVar45,lVar44 << 2);
    }
    local_3c8 = (this->NodesParams).ArrayNum;
    lVar44 = (longlong)local_3c8;
    pFVar45 = (pTVar3->AllocatorInstance).Data;
    local_3d0.Data = (FScriptContainerElement *)0x0;
    if (local_3c8 == 0) {
      local_3c4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3c8,0,&local_3d0,local_3c8,&local_3c4);
      memcpy(local_3d0.Data,pFVar45,lVar44 << 2);
    }
    local_3e0.Data = (FScriptContainerElement *)0x0;
    local_3d8 = local_2e8->ArrayNum;
    lVar44 = (longlong)local_3d8;
    pFVar45 = (local_2e8->AllocatorInstance).Data;
    if (local_3d8 == 0) {
      local_3d4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_3d8,0,&local_3e0,local_3d8,&local_3d4);
      memcpy(local_3e0.Data,pFVar45,lVar44 * 0x18);
    }
    local_3f0.Data = (FScriptContainerElement *)0x0;
    local_3e8 = local_2e0->ArrayNum;
    lVar44 = (longlong)local_3e8;
    pFVar45 = (local_2e0->AllocatorInstance).Data;
    if (local_3e8 == 0) {
      local_3e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_3e8,0,&local_3f0,local_3e8,&local_3e4);
      memcpy(local_3f0.Data,pFVar45,lVar44 * 0x18);
    }
    uVar53 = *(undefined8 *)(pFVar47->BoundsOffsets).Elements;
    uVar52 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 2);
    iVar7 = (pFVar47->BoundsOffsets).Elements[0x14];
    uVar20 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 4);
    uVar21 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 6);
    local_3f8 = local_388->ArrayNum;
    lVar44 = (longlong)local_3f8;
    pFVar45 = (local_388->AllocatorInstance).Data;
    local_400.Data = (FScriptContainerElement *)0x0;
    uVar22 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 8);
    uVar23 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 10);
    uVar24 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 0xc);
    uVar25 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 0xe);
    uVar26 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 0x10);
    uVar27 = *(undefined8 *)((pFVar47->BoundsOffsets).Elements + 0x12);
    if (local_3f8 == 0) {
      local_3f4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,local_3f8,0,&local_400,local_3f8,&local_3f4);
      memcpy(local_400.Data,pFVar45,lVar44 << 5);
    }
    local_410.Data = (FScriptContainerElement *)0x0;
    local_408 = local_380->ArrayNum;
    lVar44 = (longlong)local_408;
    pFVar45 = (local_380->AllocatorInstance).Data;
    if (local_408 == 0) {
      local_404 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,local_408,0,&local_410,local_408,&local_404);
      memcpy(local_410.Data,pFVar45,lVar44 << 5);
    }
    FVar31.Data = local_3d0.Data;
    lVar44 = (longlong)local_3c8;
    local_260.Data = (FScriptContainerElement *)0x0;
    local_258 = CONCAT44(local_258._4_4_,local_3c8);
    local_268 = local_418->FieldResource;
    if (local_3c8 == 0) {
      local_258 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3c8,0,&local_260,local_3c8,(int *)((longlong)&local_258 + 4));
      memcpy(local_260.Data,FVar31.Data,lVar44 << 2);
    }
    FVar31.Data = local_3c0.Data;
    lVar44 = (longlong)local_3b8;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = CONCAT44(local_248._4_4_,local_3b8);
    if (local_3b8 == 0) {
      local_248 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3b8,0,&local_250,local_3b8,(int *)((longlong)&local_248 + 4));
      memcpy(local_250.Data,FVar31.Data,lVar44 << 2);
    }
    FVar31.Data = local_3e0.Data;
    lVar44 = (longlong)local_3d8;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = CONCAT44(local_1e0._4_4_,local_3d8);
    local_240 = pcVar8;
    pcStack_238 = pcVar11;
    local_230 = pcVar12;
    pcStack_228 = pcVar13;
    local_220 = pcVar14;
    pcStack_218 = pcVar15;
    local_210 = pcVar16;
    pcStack_208 = pcVar17;
    local_200 = pcVar18;
    pcStack_1f8 = pcVar19;
    local_1f0 = iVar35;
    if (local_3d8 == 0) {
      local_1e0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_3d8,0,&local_1e8,local_3d8,(int *)((longlong)&local_1e0 + 4));
      memcpy(local_1e8.Data,FVar31.Data,lVar44 * 0x18);
    }
    FVar31.Data = local_3f0.Data;
    lVar44 = (longlong)local_3e8;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = CONCAT44(local_1d0._4_4_,local_3e8);
    if (local_3e8 == 0) {
      local_1d0 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_3e8,0,&local_1d8,local_3e8,(int *)((longlong)&local_1d0 + 4));
      memcpy(local_1d8.Data,FVar31.Data,lVar44 * 0x18);
    }
    FVar31.Data = local_400.Data;
    lVar44 = (longlong)local_3f8;
    local_1c8 = local_3a4;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = CONCAT44(local_168._4_4_,local_3f8);
    local_1c4 = uVar53;
    uStack_1bc = uVar52;
    local_1b4 = uVar20;
    uStack_1ac = uVar21;
    local_1a4 = uVar22;
    uStack_19c = uVar23;
    local_194 = uVar24;
    uStack_18c = uVar25;
    local_184 = uVar26;
    uStack_17c = uVar27;
    local_174 = iVar7;
    if (local_3f8 == 0) {
      local_168 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,local_3f8,0,&local_170,local_3f8,(int *)((longlong)&local_168 + 4));
      memcpy(local_170.Data,FVar31.Data,lVar44 << 5);
    }
    FVar31.Data = local_410.Data;
    lVar44 = (longlong)local_408;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = CONCAT44(local_158._4_4_,local_408);
    if (local_408 == 0) {
      local_158 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,local_408,0,&local_160,local_408,(int *)((longlong)&local_158 + 4));
      memcpy(local_160.Data,FVar31.Data,lVar44 << 5);
    }
    local_148[0] = (code *)0x0;
    local_120 = FMemory::Malloc(0x120,8);
    *local_120 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FPhysicsFieldInstance::UpdateInstance'::`50'::<lambda_1>,1,1>
                          ::_vftable_;
    local_120[2] = (code *)0x0;
    local_120[1] = (code *)local_268;
    local_120[2] = (code *)local_260.Data;
    local_260.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 3) = (undefined4)local_258;
    *(undefined4 *)((longlong)local_120 + 0x1c) = local_258._4_4_;
    local_258 = 0;
    local_120[4] = (code *)0x0;
    local_120[4] = (code *)local_250.Data;
    local_250.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 5) = (undefined4)local_248;
    *(undefined4 *)((longlong)local_120 + 0x2c) = local_248._4_4_;
    local_248 = 0;
    local_120[6] = local_240;
    local_120[7] = pcStack_238;
    local_120[8] = local_230;
    local_120[9] = pcStack_228;
    local_120[10] = local_220;
    local_120[0xb] = pcStack_218;
    local_120[0xc] = local_210;
    local_120[0xd] = pcStack_208;
    local_120[0xe] = local_200;
    local_120[0xf] = pcStack_1f8;
    *(int *)(local_120 + 0x10) = local_1f0;
    local_120[0x11] = (code *)0x0;
    local_120[0x11] = (code *)local_1e8.Data;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 0x12) = (undefined4)local_1e0;
    *(undefined4 *)((longlong)local_120 + 0x94) = local_1e0._4_4_;
    local_1e0 = 0;
    local_120[0x13] = (code *)0x0;
    local_120[0x13] = (code *)local_1d8.Data;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 0x14) = (undefined4)local_1d0;
    *(undefined4 *)((longlong)local_120 + 0xa4) = local_1d0._4_4_;
    local_1d0 = 0;
    *(float *)(local_120 + 0x15) = local_1c8;
    *(undefined8 *)((longlong)local_120 + 0xac) = local_1c4;
    *(undefined8 *)((longlong)local_120 + 0xb4) = uStack_1bc;
    *(undefined8 *)((longlong)local_120 + 0xbc) = local_1b4;
    *(undefined8 *)((longlong)local_120 + 0xc4) = uStack_1ac;
    *(undefined8 *)((longlong)local_120 + 0xcc) = local_1a4;
    *(undefined8 *)((longlong)local_120 + 0xd4) = uStack_19c;
    *(undefined8 *)((longlong)local_120 + 0xdc) = local_194;
    *(undefined8 *)((longlong)local_120 + 0xe4) = uStack_18c;
    *(undefined8 *)((longlong)local_120 + 0xec) = local_184;
    *(undefined8 *)((longlong)local_120 + 0xf4) = uStack_17c;
    *(int *)((longlong)local_120 + 0xfc) = local_174;
    local_120[0x20] = (code *)0x0;
    local_120[0x20] = (code *)local_170.Data;
    local_170.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 0x21) = (undefined4)local_168;
    *(undefined4 *)((longlong)local_120 + 0x10c) = local_168._4_4_;
    local_168 = 0;
    local_120[0x22] = (code *)0x0;
    local_120[0x22] = (code *)local_160.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_120 + 0x23) = (undefined4)local_158;
    *(undefined4 *)((longlong)local_120 + 0x11c) = local_158._4_4_;
    if (local_120 + 1 != (code **)0x0) {
      local_148[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPhysicsFieldInstance::UpdateInstance'::__l50::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    local_158 = 0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FPhysicsFieldInstance::UpdateInstance_::__l50::TSTR_FUpdateFieldInstanceCommand799>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_118._0_8_ = local_148[0];
      local_f0 = local_120;
      local_120 = (code **)0x0;
      local_118._16_8_ = local_138[0];
      local_118._24_8_ = local_138[1];
      local_118._32_8_ = local_138[2];
      local_148[0] = (code *)0x0;
      local_e8 = 2;
      pFVar38 = (FRenderCommandTag *)
                TRenderCommandTag<`FPhysicsFieldInstance::UpdateInstance'::__l50::TSTR_FUpdateFieldInstanceCommand799>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_118,pFVar38);
      uVar42 = (ulonglong)local_e8;
      if ((2 < uVar42) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar34)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar42] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_118._0_8_ != (code *)0x0) {
          ppcVar41 = (code **)(local_118 + 0x10);
          if (local_f0 != (code **)0x0) {
            ppcVar41 = local_f0;
          }
          (**(code **)(*ppcVar41 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar42])(local_118);
      }
    }
    if (local_148[0] != (code *)0x0) {
      ppcVar41 = local_148 + 2;
      if (local_120 != (code **)0x0) {
        ppcVar41 = local_120;
      }
      (**(code **)(*ppcVar41 + 0x10))();
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    if (local_260.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data);
    }
    if (local_410.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data);
    }
    if (local_400.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data);
    }
    if (local_3f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f0.Data);
    }
    if (local_3e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e0.Data);
    }
    if (local_3d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    if (local_3c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data);
    }
  }
  return;
}

