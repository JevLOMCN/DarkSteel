// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 68

// StaticStruct @ 1443e4c00

UScriptStruct * __cdecl FDataflowOutput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowOutput.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowOutput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOutput,(UObject *)pUVar1,
                         L"DataflowOutput");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowOutput.OuterSingleton;
}

// operator()<TDataflowSingleTypePolicy<TObjectPtr<UObject>_>_> @ 1444057c0

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowUObjectConvertibleTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TObjectPtr<UObject>_>_>
          (void *this,TDataflowSingleTypePolicy<TObjectPtr<UObject>_> param_1)

{
  UObject *pUVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  FGuid local_58 [2];
  
  puVar9 = *(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (UObject *)*puVar9, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (UObject *)*puVar9;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    uVar7 = 0;
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar10 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar10 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar10;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_58[0].A = 0;
    local_58[0].B = 0;
    local_58[0].C = 0;
    local_58[0].D = 0;
    uVar11 = local_58[0].A;
    uVar12 = local_58[0].B;
    uVar13 = local_58[0].C;
    uVar14 = local_58[0].D;
  }
  else {
    uVar11 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar13 = *(uint *)(lVar3 + 0x84);
    uVar14 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].B = uVar12;
  local_58[0].A = uVar11;
  local_58[0].D = uVar14;
  local_58[0].C = uVar13;
  uVar8 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar9 = ::operator_new(0x50);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar9 + 1) = 3;
    *puVar9 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
    *(uint *)((longlong)puVar9 + 0xc) = uVar11;
    *(uint *)(puVar9 + 2) = uVar12;
    *(uint *)((longlong)puVar9 + 0x14) = uVar13;
    *(uint *)(puVar9 + 3) = uVar14;
    puVar9[4] = pFVar4;
    *(uint *)(puVar9 + 5) = uVar7;
    puVar9[6] = uVar10;
    puVar9[7] = &___7FGCObject__6B_;
    *(undefined2 *)(puVar9 + 8) = 0;
    FGCObject::RegisterGCObject((FGCObject *)(puVar9 + 7));
    *puVar9 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
               _vftable__for__UE__Dataflow__FContextCacheElementBase__;
    puVar9[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<UObject>_>::
                 _vftable__for__FGCObject__;
    puVar9[9] = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  puVar6 = local_res8;
  if (local_res8 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*local_res8;
    local_res8 = puVar9;
    (*(code *)*puVar5)(puVar6,1);
    puVar9 = local_res8;
  }
  local_res8 = puVar9;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar4,local_58,uVar7,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowCurveSelection>_> @ 1444059d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowCurveSelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowCurveSelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowCurveSelection::CurveGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowCurveSelection>
                       (this_02,&local_88,pFVar3,(FDataflowCurveSelection *)&local_68,uVar7,FVar10);
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowFaceSelection>_> @ 144405c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowFaceSelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowFaceSelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowFaceSelection::FacesGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowFaceSelection>
                       (this_02,&local_88,pFVar3,(FDataflowFaceSelection *)&local_68,uVar7,FVar10);
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowGeometrySelection>_> @ 144405e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowGeometrySelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowGeometrySelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowGeometrySelection::GeometryGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowGeometrySelection>
                       (this_02,&local_88,pFVar3,(FDataflowGeometrySelection *)&local_68,uVar7,
                        FVar10);
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowMaterialSelection>_> @ 144406060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowMaterialSelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowMaterialSelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowMaterialSelection::MaterialGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowMaterialSelection>
                       (this_02,&local_88,pFVar3,(FDataflowMaterialSelection *)&local_68,uVar7,
                        FVar10);
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowTransformSelection>_> @ 144406290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowTransformSelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowTransformSelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowTransformSelection::TransformGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowTransformSelection>
                       (this_02,&local_88,pFVar3,(FDataflowTransformSelection *)&local_68,uVar7,
                        FVar10);
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<FDataflowVertexSelection>_> @ 1444064c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowSelectionTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<FDataflowVertexSelection>_>
          (void *this,TDataflowSingleTypePolicy<FDataflowVertexSelection> param_1)

{
  longlong lVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong64 uVar8;
  FContextCacheElementUStruct *this_02;
  FContextCacheElementUStruct *pFVar9;
  ForElementType<unsigned_int> _Dst;
  TBitArray<FDefaultBitArrayAllocator> *_Src;
  FTimestamp FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  FTimestamp local_98 [2];
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar9 = (FContextCacheElementUStruct *)0x0;
  uVar7 = 0;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  local_68 = FDataflowVertexSelection::VerticesGroupName;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  if (&local_60 != (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8)) {
    uVar6 = *(int *)(lVar1 + 0x20) + 0x1fU & 0xffffffe0;
    if (0x80 < (int)uVar6) {
      local_60.MaxBits = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
    }
    local_60.NumBits = *(int *)(lVar1 + 0x20);
    if (local_60.NumBits != 0) {
      _Src = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar1 + 0x18) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        _Src = (TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 8);
      }
      _Dst = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_60.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_98[0].Value = UE::Dataflow::FTimestamp::Invalid;
    FVar10.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    FVar10.Value = (this_01->LastModifiedTimestamp).Value;
    local_98[0].Value = FVar10.Value;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_a8 = (FContextCacheElementUStruct *)0x0;
    uStack_a0 = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0._0_4_ = 0;
    uStack_a0._4_4_ = 0;
    uVar6 = (uint)local_a8;
    uVar11 = local_a8._4_4_;
    uVar12 = (uint)uStack_a0;
    uVar13 = uStack_a0._4_4_;
  }
  else {
    uVar6 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_78.A = uVar6;
  local_78.B = uVar11;
  local_78.C = uVar12;
  local_78.D = uVar13;
  uVar8 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_a8 = (FContextCacheElementUStruct *)0x0;
  this_02 = ::operator_new(0x58);
  if (this_02 != (FContextCacheElementUStruct *)0x0) {
    local_88.A = uVar6;
    local_88.B = uVar11;
    local_88.C = uVar12;
    local_88.D = uVar13;
    pFVar9 = UE::Dataflow::FContextCacheElementUStruct::
             FContextCacheElementUStruct<FDataflowVertexSelection>
                       (this_02,&local_88,pFVar3,(FDataflowVertexSelection *)&local_68,uVar7,FVar10)
    ;
  }
  puVar5 = &local_a8->_padding_;
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    puVar4 = *(undefined8 **)local_a8;
    local_a8 = pFVar9;
    (*(code *)*puVar4)(puVar5,1);
    pFVar9 = local_a8;
  }
  local_a8 = pFVar9;
  if (local_a8 == (FContextCacheElementUStruct *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,&local_78,uVar7,local_98);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_a8);
  }
  if (local_a8 != (FContextCacheElementUStruct *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_> @ 1444066f0

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<signed_char,TSizedDefaultAllocator<32>_>_> param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<signed_char,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
  To<TArray<signed_char,TSizedDefaultAllocator<32>_>_>
            (*(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_CV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_> @ 144406a80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *((longlong)puVar10 + FVar6.Data) = SUB41((int)*(double *)(*plVar1 + (longlong)puVar10 * 8),0)
      ;
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray_EV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_> @ 144406ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<short,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<short,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<short,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(short *)(FVar6.Data + (longlong)puVar10 * 2) =
           (short)(int)*(double *)(*plVar1 + (longlong)puVar10 * 8);
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray_FV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_> @ 144407300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(short *)(FVar6.Data + (longlong)puVar10 * 2) =
           (short)(int)*(double *)(*plVar1 + (longlong)puVar10 * 8);
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray_GV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_> @ 144407740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<int,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FTimestamp local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  FGuid local_38;
  
  uVar12 = 0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_58,(int)plVar1[1],Default);
  uVar9 = 0;
  uVar13 = uVar12;
  if (0 < (int)plVar1[1]) {
    do {
      uVar11 = (uint)uVar12;
      uVar8 = uVar9;
      if ((int)uVar11 < local_58.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_58.AllocatorInstance.Data;
      uVar8 = uVar9;
      if ((int)uVar11 < (int)plVar1[1]) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(int *)(FVar6.Data + uVar13 * 4) = (int)*(double *)(*plVar1 + uVar13 * 8);
      uVar13 = uVar13 + 1;
    } while ((int)(uVar11 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res8.Value = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    local_res8.Value = (this_01->LastModifiedTimestamp).Value;
    uVar9 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    uStack_40._0_4_ = 0;
    uStack_40._4_4_ = 0;
    local_38.A = (uint)local_48;
    local_38.B = local_48._4_4_;
    local_38.C = (uint)uStack_40;
    local_38.D = uStack_40._4_4_;
  }
  else {
    local_38.A = *(uint *)(lVar3 + 0x7c);
    local_38.B = *(uint *)(lVar3 + 0x80);
    local_38.C = *(uint *)(lVar3 + 0x84);
    local_38.D = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  uVar10 = CityHash64((char *)(lVar2 + 0x18),0x10);
  UE::Dataflow::FContext::SetData<TArray<int,TSizedDefaultAllocator<32>_>_>
            (this_00,(uint)uVar10,pFVar4,&local_58,&local_38,uVar9,&local_res8);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_> @ 144407b00

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
  To<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
            (*(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_IV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_> @ 144407e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<float,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(FVar6.Data + (longlong)puVar10 * 4) =
           (float)*(double *)(*plVar1 + (longlong)puVar10 * 8);
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray_MV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_> @ 1444082e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<double,TSizedDefaultAllocator<32>_>_> param_1
          )

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<double,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(FVar6.Data + (longlong)puVar10 * 8) =
           *(undefined8 *)(*plVar1 + (longlong)puVar10 * 8);
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray_NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>_> @ 144408710

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
  To<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
            (*(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TIntPoint_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>_> @ 1444088e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar6;
  FProperty *pFVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar17 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar4[1],Default);
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < (int)plVar4[1]) {
    do {
      uVar18 = (uint)uVar19;
      uVar12 = 0;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar10.Data = local_78.AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar18 < (int)plVar4[1]) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar4;
      dVar2 = *(double *)(uVar17 + 8 + lVar5);
      dVar3 = *(double *)(uVar17 + 0x10 + lVar5);
      pdVar1 = (double *)(uVar17 + lVar5);
      uVar17 = uVar17 + 0x20;
      *(int *)(FVar10.Data + uVar20) = (int)*pdVar1;
      *(int *)(FVar10.Data + uVar20 + 4) = (int)dVar2;
      *(int *)(FVar10.Data + uVar20 + 8) = (int)dVar3;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 0xc;
    } while ((int)(uVar18 + 1) < (int)plVar4[1]);
  }
  uVar12 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar16 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar16;
    uVar12 = FDataflowNode::GetValueHash(this_01);
  }
  lVar5 = *(longlong *)this;
  lVar6 = *(longlong *)(lVar5 + 8);
  if (lVar6 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar18 = (uint)local_68;
    uVar21 = local_68._4_4_;
    uVar22 = (uint)uStack_60;
    uVar23 = uStack_60._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar6 + 0x7c);
    uVar21 = *(uint *)(lVar6 + 0x80);
    uVar22 = *(uint *)(lVar6 + 0x84);
    uVar23 = *(uint *)(lVar6 + 0x88);
  }
  pFVar7 = *(FProperty **)(lVar5 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar13 = CityHash64((char *)(lVar5 + 0x18),0x10);
  puVar15 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar14 = ::operator_new(0x48);
  puVar9 = local_res18;
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar14 + 1) = 0;
    *puVar14 = &
               ___7__TContextCacheElement_V__TArray_U__TIntVector3_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar14 + 0xc) = uVar18;
    *(uint *)(puVar14 + 2) = uVar21;
    *(uint *)((longlong)puVar14 + 0x14) = uVar22;
    *(uint *)(puVar14 + 3) = uVar23;
    puVar14[4] = pFVar7;
    *(uint *)(puVar14 + 5) = uVar12;
    puVar14[6] = uVar16;
    puVar14[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar14 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar14 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar15 = puVar14;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*local_res18;
    local_res18 = puVar15;
    (*(code *)*puVar14)(puVar9,1);
    puVar15 = local_res18;
  }
  local_res18 = puVar15;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar13,pFVar7,local_58,uVar12,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar13 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>_> @ 144408ba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  uVar14 = 0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_88,(int)plVar1[1],Default);
  uVar16 = uVar14;
  uVar17 = uVar14;
  if (0 < (int)plVar1[1]) {
    do {
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < local_88.ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar7.Data = local_88.AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar15 < (int)plVar1[1]) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *plVar1;
      local_78 = (int)*(double *)(uVar14 + lVar2);
      iStack_74 = (int)*(double *)(uVar14 + 8 + lVar2);
      iStack_70 = (int)*(double *)(uVar14 + 0x10 + lVar2);
      iStack_6c = (int)*(double *)(uVar14 + 0x18 + lVar2);
      uVar14 = uVar14 + 0x20;
      *(ulonglong *)(FVar7.Data + uVar17) = CONCAT44(iStack_74,local_78);
      *(ulonglong *)(FVar7.Data + uVar17 + 8) = CONCAT44(iStack_6c,iStack_70);
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 0x10;
    } while ((int)(uVar15 + 1) < (int)plVar1[1]);
  }
  puVar12 = (undefined8 *)0x0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar9 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar13 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar13 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar13;
    uVar9 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar18 = local_68._4_4_;
    uVar19 = (uint)uStack_60;
    uVar20 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar18 = *(uint *)(lVar3 + 0x80);
    uVar19 = *(uint *)(lVar3 + 0x84);
    uVar20 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar18;
  local_58[0].C = uVar19;
  local_58[0].D = uVar20;
  uVar10 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res18 = (undefined8 *)0x0;
  puVar11 = ::operator_new(0x48);
  puVar6 = local_res18;
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar11 + 1) = 0;
    *puVar11 = &
               ___7__TContextCacheElement_V__TArray_U__TIntVector4_H_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar11 + 0xc) = uVar15;
    *(uint *)(puVar11 + 2) = uVar18;
    *(uint *)((longlong)puVar11 + 0x14) = uVar19;
    *(uint *)(puVar11 + 3) = uVar20;
    puVar11[4] = pFVar4;
    *(uint *)(puVar11 + 5) = uVar9;
    puVar11[6] = uVar13;
    puVar11[7] = local_88.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar11 + 8) = local_88.ArrayNum;
    *(int *)((longlong)puVar11 + 0x44) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    puVar12 = puVar11;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*local_res18;
    local_res18 = puVar12;
    (*(code *)*puVar11)(puVar6,1);
    puVar12 = local_res18;
  }
  local_res18 = puVar12;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar10,pFVar4,local_58,uVar9,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar10 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_> @ 144408e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  FContext *this_00;
  FDataflowNode *this_01;
  FProperty *pFVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong local_res8;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  FGuid local_58 [2];
  
  plVar6 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_88,(int)plVar6[1],Default);
  if (0 < (int)plVar6[1]) {
    local_res8 = 0;
    uVar20 = uVar19;
    do {
      uVar18 = (uint)uVar19;
      uVar13 = 0;
      if ((int)uVar18 < local_88.ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar11.Data = local_88.AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar18 < (int)plVar6[1]) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *plVar6;
      uVar19 = (ulonglong)(uVar18 + 1);
      pdVar1 = (double *)(uVar20 + lVar7);
      lVar3 = uVar20 + 8;
      lVar4 = uVar20 + 0x10;
      lVar5 = uVar20 + 0x18;
      uVar20 = uVar20 + 0x20;
      local_68 = (float)*pdVar1;
      fStack_64 = (float)*(double *)(lVar3 + lVar7);
      fStack_60 = (float)*(double *)(lVar4 + lVar7);
      fStack_5c = (float)*(double *)(lVar5 + lVar7);
      pFVar2 = FVar11.Data + local_res8;
      *(float *)pFVar2 = local_68;
      *(float *)(pFVar2 + 4) = fStack_64;
      *(float *)(pFVar2 + 8) = fStack_60;
      *(float *)(pFVar2 + 0xc) = fStack_5c;
      local_res8 = local_res8 + 0x10;
    } while ((int)(uVar18 + 1) < (int)plVar6[1]);
  }
  uVar13 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar17 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar17 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar17;
    uVar13 = FDataflowNode::GetValueHash(this_01);
  }
  lVar3 = *(longlong *)this;
  lVar4 = *(longlong *)(lVar3 + 8);
  if (lVar4 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70._0_4_ = 0;
    uStack_70._4_4_ = 0;
    uVar18 = (uint)local_78;
    uVar21 = local_78._4_4_;
    uVar22 = (uint)uStack_70;
    uVar23 = uStack_70._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar4 + 0x7c);
    uVar21 = *(uint *)(lVar4 + 0x80);
    uVar22 = *(uint *)(lVar4 + 0x84);
    uVar23 = *(uint *)(lVar4 + 0x88);
  }
  pFVar8 = *(FProperty **)(lVar3 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar14 = CityHash64((char *)(lVar3 + 0x18),0x10);
  puVar16 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar15 = ::operator_new(0x48);
  puVar10 = local_res18;
  if (puVar15 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar15 + 1) = 0;
    *puVar15 = &
               ___7__TContextCacheElement_V__TArray_U__TQuat_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar15 + 0xc) = uVar18;
    *(uint *)(puVar15 + 2) = uVar21;
    *(uint *)((longlong)puVar15 + 0x14) = uVar22;
    *(uint *)(puVar15 + 3) = uVar23;
    puVar15[4] = pFVar8;
    *(uint *)(puVar15 + 5) = uVar13;
    puVar15[6] = uVar17;
    puVar15[7] = local_88.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar15 + 8) = local_88.ArrayNum;
    *(int *)((longlong)puVar15 + 0x44) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    puVar16 = puVar15;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*local_res18;
    local_res18 = puVar16;
    (*(code *)*puVar15)(puVar10,1);
    puVar16 = local_res18;
  }
  local_res18 = puVar16;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar14,pFVar8,local_58,uVar13,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar14 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>_> @ 144409370

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
  To<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
            (*(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TQuat_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>_> @ 144409540

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
  To<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
            (*(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TRotator_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_> @ 144409710

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowTransformArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FContext *this_00;
  FDataflowNode *this_01;
  FProperty *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  uVar13 = 0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar1[1],Default);
  if (0 < (int)plVar1[1]) {
    lVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar13 < local_78.ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = local_78.AllocatorInstance.Data + lVar14;
      uVar15 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *plVar1;
      uVar13 = uVar13 + 1;
      uVar5 = ((undefined8 *)(lVar14 + lVar2))[1];
      *(undefined8 *)pFVar12 = *(undefined8 *)(lVar14 + lVar2);
      *(undefined8 *)(pFVar12 + 8) = uVar5;
      puVar10 = (undefined8 *)(lVar14 + 0x10 + lVar2);
      uVar5 = puVar10[1];
      *(undefined8 *)(pFVar12 + 0x10) = *puVar10;
      *(undefined8 *)(pFVar12 + 0x18) = uVar5;
      puVar10 = (undefined8 *)(lVar14 + 0x20 + lVar2);
      uVar5 = puVar10[1];
      *(undefined8 *)(pFVar12 + 0x20) = *puVar10;
      *(undefined8 *)(pFVar12 + 0x28) = uVar5;
      puVar10 = (undefined8 *)(lVar14 + 0x30 + lVar2);
      uVar5 = puVar10[1];
      *(undefined8 *)(pFVar12 + 0x30) = *puVar10;
      *(undefined8 *)(pFVar12 + 0x38) = uVar5;
      puVar10 = (undefined8 *)(lVar14 + 0x40 + lVar2);
      uVar5 = puVar10[1];
      *(undefined8 *)(pFVar12 + 0x40) = *puVar10;
      *(undefined8 *)(pFVar12 + 0x48) = uVar5;
      puVar10 = (undefined8 *)(lVar14 + 0x50 + lVar2);
      uVar5 = puVar10[1];
      lVar14 = lVar14 + 0x60;
      *(undefined8 *)(pFVar12 + 0x50) = *puVar10;
      *(undefined8 *)(pFVar12 + 0x58) = uVar5;
    } while ((int)uVar13 < (int)plVar1[1]);
  }
  puVar10 = (undefined8 *)0x0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar13 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar11 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar11 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar11;
    uVar13 = FDataflowNode::GetValueHash(this_01);
  }
  lVar14 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar14 + 8);
  if (lVar2 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar16 = local_68._4_4_;
    uVar17 = (uint)uStack_60;
    uVar18 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar2 + 0x7c);
    uVar16 = *(uint *)(lVar2 + 0x80);
    uVar17 = *(uint *)(lVar2 + 0x84);
    uVar18 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar14 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar16;
  local_58[0].C = uVar17;
  local_58[0].D = uVar18;
  uVar8 = CityHash64((char *)(lVar14 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar9 = ::operator_new(0x48);
  puVar6 = local_res8;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &
              ___7__TContextCacheElement_V__TArray_U__TTransform_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar9 + 0xc) = uVar15;
    *(uint *)(puVar9 + 2) = uVar16;
    *(uint *)((longlong)puVar9 + 0x14) = uVar17;
    *(uint *)(puVar9 + 3) = uVar18;
    puVar9[4] = pFVar3;
    *(uint *)(puVar9 + 5) = uVar13;
    puVar9[6] = uVar11;
    puVar9[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar9 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar9 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar10 = puVar9;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*local_res8;
    local_res8 = puVar10;
    (*(code *)*puVar9)(puVar6,1);
    puVar10 = local_res8;
  }
  local_res8 = puVar10;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar3,local_58,uVar13,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_> @ 1444099e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong *plVar3;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar4;
  FProperty *pFVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  ulong64 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *local_res8;
  FTimestamp local_res20;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  uVar15 = 0;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar3[1],Default);
  uVar17 = uVar15;
  uVar18 = uVar15;
  if (0 < (int)plVar3[1]) {
    do {
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < local_78.ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar8.Data = local_78.AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar16 < (int)plVar3[1]) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pdVar1 = (double *)(uVar15 + *plVar3);
      lVar2 = uVar15 + 8;
      uVar15 = uVar15 + 0x20;
      *(ulonglong *)(FVar8.Data + uVar18 * 8) =
           CONCAT44((float)*(double *)(lVar2 + *plVar3),(float)*pdVar1);
      uVar17 = (ulonglong)(uVar16 + 1);
      uVar18 = uVar18 + 1;
    } while ((int)(uVar16 + 1) < (int)plVar3[1]);
  }
  puVar13 = (undefined8 *)0x0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar10 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar14;
    uVar10 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar4 = *(longlong *)(lVar2 + 8);
  if (lVar4 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar16 = (uint)local_68;
    uVar19 = local_68._4_4_;
    uVar20 = (uint)uStack_60;
    uVar21 = uStack_60._4_4_;
  }
  else {
    uVar16 = *(uint *)(lVar4 + 0x7c);
    uVar19 = *(uint *)(lVar4 + 0x80);
    uVar20 = *(uint *)(lVar4 + 0x84);
    uVar21 = *(uint *)(lVar4 + 0x88);
  }
  pFVar5 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar16;
  local_58[0].B = uVar19;
  local_58[0].C = uVar20;
  local_58[0].D = uVar21;
  uVar11 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar12 = ::operator_new(0x48);
  puVar7 = local_res8;
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar12 + 1) = 0;
    *puVar12 = &
               ___7__TContextCacheElement_V__TArray_U__TVector2_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar12 + 0xc) = uVar16;
    *(uint *)(puVar12 + 2) = uVar19;
    *(uint *)((longlong)puVar12 + 0x14) = uVar20;
    *(uint *)(puVar12 + 3) = uVar21;
    puVar12[4] = pFVar5;
    *(uint *)(puVar12 + 5) = uVar10;
    puVar12[6] = uVar14;
    puVar12[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar12 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar12 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar13 = puVar12;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*local_res8;
    local_res8 = puVar13;
    (*(code *)*puVar12)(puVar7,1);
    puVar13 = local_res8;
  }
  local_res8 = puVar13;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar11,pFVar5,local_58,uVar10,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar11 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>_> @ 144409ea0

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>::
  To<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
            (*(TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray_U__TVector2_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_> @ 14440a070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar8;
  FProperty *pFVar9;
  code *pcVar10;
  undefined8 *puVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  uint uVar14;
  ulong64 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong local_res8;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  FGuid local_58 [2];
  
  plVar6 = *(longlong **)((longlong)this + 0x10);
  uVar20 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_88,(int)plVar6[1],Default);
  if (0 < (int)plVar6[1]) {
    local_res8 = 0;
    uVar21 = uVar20;
    do {
      uVar19 = (uint)uVar20;
      uVar14 = 0;
      if ((int)uVar19 < local_88.ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar12.Data = local_88.AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar19 < (int)plVar6[1]) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar7 = *plVar6;
      uVar20 = (ulonglong)(uVar19 + 1);
      pdVar1 = (double *)(uVar21 + lVar7);
      dVar3 = *(double *)(uVar21 + 8 + lVar7);
      dVar4 = *(double *)(uVar21 + 0x10 + lVar7);
      dVar5 = *(double *)(uVar21 + 0x18 + lVar7);
      uVar21 = uVar21 + 0x20;
      pFVar2 = FVar12.Data + local_res8;
      *(float *)pFVar2 = (float)*pdVar1;
      *(float *)(pFVar2 + 4) = (float)dVar3;
      *(float *)(pFVar2 + 8) = (float)dVar4;
      *(float *)(pFVar2 + 0xc) = (float)dVar5;
      local_res8 = local_res8 + 0x10;
    } while ((int)(uVar19 + 1) < (int)plVar6[1]);
  }
  uVar14 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar18 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar18 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar18;
    uVar14 = FDataflowNode::GetValueHash(this_01);
  }
  lVar7 = *(longlong *)this;
  lVar8 = *(longlong *)(lVar7 + 8);
  if (lVar8 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70._0_4_ = 0;
    uStack_70._4_4_ = 0;
    uVar19 = (uint)local_78;
    uVar22 = local_78._4_4_;
    uVar23 = (uint)uStack_70;
    uVar24 = uStack_70._4_4_;
  }
  else {
    uVar19 = *(uint *)(lVar8 + 0x7c);
    uVar22 = *(uint *)(lVar8 + 0x80);
    uVar23 = *(uint *)(lVar8 + 0x84);
    uVar24 = *(uint *)(lVar8 + 0x88);
  }
  pFVar9 = *(FProperty **)(lVar7 + 0x10);
  local_58[0].A = uVar19;
  local_58[0].B = uVar22;
  local_58[0].C = uVar23;
  local_58[0].D = uVar24;
  uVar15 = CityHash64((char *)(lVar7 + 0x18),0x10);
  puVar17 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar16 = ::operator_new(0x48);
  puVar11 = local_res18;
  if (puVar16 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar16 + 1) = 0;
    *puVar16 = &
               ___7__TContextCacheElement_V__TArray_U__TVector4_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar16 + 0xc) = uVar19;
    *(uint *)(puVar16 + 2) = uVar22;
    *(uint *)((longlong)puVar16 + 0x14) = uVar23;
    *(uint *)(puVar16 + 3) = uVar24;
    puVar16[4] = pFVar9;
    *(uint *)(puVar16 + 5) = uVar14;
    puVar16[6] = uVar18;
    puVar16[7] = local_88.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar16 + 8) = local_88.ArrayNum;
    *(int *)((longlong)puVar16 + 0x44) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    puVar17 = puVar16;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)*local_res18;
    local_res18 = puVar17;
    (*(code *)*puVar16)(puVar11,1);
    puVar17 = local_res18;
  }
  local_res18 = puVar17;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar15,pFVar9,local_58,uVar14,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar15 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>_> @ 14440a570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  FContext *this_00;
  FDataflowNode *this_01;
  FProperty *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  ulong64 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  uVar15 = 0;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar2[1],Default);
  if (0 < (int)plVar2[1]) {
    lVar14 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar15 < local_78.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar8.Data = local_78.AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar15 < (int)plVar2[1]) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *plVar2;
      uVar15 = uVar15 + 1;
      puVar12 = (undefined8 *)(lVar14 + lVar3);
      uVar6 = puVar12[1];
      pFVar1 = FVar8.Data + lVar14;
      *(undefined8 *)pFVar1 = *puVar12;
      *(undefined8 *)(pFVar1 + 8) = uVar6;
      puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar3);
      uVar6 = puVar12[1];
      pFVar1 = FVar8.Data + lVar14 + 0x10;
      *(undefined8 *)pFVar1 = *puVar12;
      *(undefined8 *)(pFVar1 + 8) = uVar6;
      lVar14 = lVar14 + 0x20;
    } while ((int)uVar15 < (int)plVar2[1]);
  }
  puVar12 = (undefined8 *)0x0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar15 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar13 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar13 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar13;
    uVar15 = FDataflowNode::GetValueHash(this_01);
  }
  lVar14 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar14 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar16 = (uint)local_68;
    uVar17 = local_68._4_4_;
    uVar18 = (uint)uStack_60;
    uVar19 = uStack_60._4_4_;
  }
  else {
    uVar16 = *(uint *)(lVar3 + 0x7c);
    uVar17 = *(uint *)(lVar3 + 0x80);
    uVar18 = *(uint *)(lVar3 + 0x84);
    uVar19 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar14 + 0x10);
  local_58[0].A = uVar16;
  local_58[0].B = uVar17;
  local_58[0].C = uVar18;
  local_58[0].D = uVar19;
  uVar10 = CityHash64((char *)(lVar14 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar11 = ::operator_new(0x48);
  puVar7 = local_res8;
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar11 + 1) = 0;
    *puVar11 = &
               ___7__TContextCacheElement_V__TArray_U__TVector4_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar11 + 0xc) = uVar16;
    *(uint *)(puVar11 + 2) = uVar17;
    *(uint *)((longlong)puVar11 + 0x14) = uVar18;
    *(uint *)(puVar11 + 3) = uVar19;
    puVar11[4] = pFVar4;
    *(uint *)(puVar11 + 5) = uVar15;
    puVar11[6] = uVar13;
    puVar11[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar11 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar11 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar12 = puVar11;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*local_res8;
    local_res8 = puVar12;
    (*(code *)*puVar11)(puVar7,1);
    puVar12 = local_res8;
  }
  local_res8 = puVar12;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar10,pFVar4,local_58,uVar15,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar10 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_> @ 14440a810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar6;
  FProperty *pFVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar17 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar4[1],Default);
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < (int)plVar4[1]) {
    do {
      uVar18 = (uint)uVar19;
      uVar12 = 0;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar10.Data = local_78.AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar18 < (int)plVar4[1]) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar4;
      pdVar1 = (double *)(uVar17 + lVar5);
      dVar2 = *(double *)(uVar17 + 8 + lVar5);
      dVar3 = *(double *)(uVar17 + 0x10 + lVar5);
      uVar17 = uVar17 + 0x20;
      *(float *)(FVar10.Data + uVar20) = (float)*pdVar1;
      *(float *)(FVar10.Data + uVar20 + 4) = (float)dVar2;
      *(float *)(FVar10.Data + uVar20 + 8) = (float)dVar3;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 0xc;
    } while ((int)(uVar18 + 1) < (int)plVar4[1]);
  }
  uVar12 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar16 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar16;
    uVar12 = FDataflowNode::GetValueHash(this_01);
  }
  lVar5 = *(longlong *)this;
  lVar6 = *(longlong *)(lVar5 + 8);
  if (lVar6 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar18 = (uint)local_68;
    uVar21 = local_68._4_4_;
    uVar22 = (uint)uStack_60;
    uVar23 = uStack_60._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar6 + 0x7c);
    uVar21 = *(uint *)(lVar6 + 0x80);
    uVar22 = *(uint *)(lVar6 + 0x84);
    uVar23 = *(uint *)(lVar6 + 0x88);
  }
  pFVar7 = *(FProperty **)(lVar5 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar13 = CityHash64((char *)(lVar5 + 0x18),0x10);
  puVar15 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar14 = ::operator_new(0x48);
  puVar9 = local_res18;
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar14 + 1) = 0;
    *puVar14 = &
               ___7__TContextCacheElement_V__TArray_U__TVector_M_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar14 + 0xc) = uVar18;
    *(uint *)(puVar14 + 2) = uVar21;
    *(uint *)((longlong)puVar14 + 0x14) = uVar22;
    *(uint *)(puVar14 + 3) = uVar23;
    puVar14[4] = pFVar7;
    *(uint *)(puVar14 + 5) = uVar12;
    puVar14[6] = uVar16;
    puVar14[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar14 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar14 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar15 = puVar14;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*local_res18;
    local_res18 = puVar15;
    (*(code *)*puVar14)(puVar9,1);
    puVar15 = local_res18;
  }
  local_res18 = puVar15;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar13,pFVar7,local_58,uVar12,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar13 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_> @ 14440acf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar4;
  longlong lVar5;
  FProperty *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  ulong64 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar17 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_78,(int)plVar3[1],Default);
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < (int)plVar3[1]) {
    do {
      uVar18 = (uint)uVar19;
      uVar12 = 0;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar10.Data = local_78.AllocatorInstance.Data;
      uVar12 = 0;
      if ((int)uVar18 < (int)plVar3[1]) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar1 = (undefined8 *)(uVar17 + 8 + *plVar3);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(uVar17 + *plVar3);
      uVar17 = uVar17 + 0x20;
      *(undefined8 *)(FVar10.Data + uVar20) = *puVar1;
      pFVar2 = FVar10.Data + uVar20 + 8;
      *(undefined8 *)pFVar2 = uVar8;
      *(undefined8 *)(pFVar2 + 8) = uVar9;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 0x18;
    } while ((int)(uVar18 + 1) < (int)plVar3[1]);
  }
  uVar12 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar16 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar16;
    uVar12 = FDataflowNode::GetValueHash(this_01);
  }
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)(lVar4 + 8);
  if (lVar5 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar18 = (uint)local_68;
    uVar21 = local_68._4_4_;
    uVar22 = (uint)uStack_60;
    uVar23 = uStack_60._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar5 + 0x7c);
    uVar21 = *(uint *)(lVar5 + 0x80);
    uVar22 = *(uint *)(lVar5 + 0x84);
    uVar23 = *(uint *)(lVar5 + 0x88);
  }
  pFVar6 = *(FProperty **)(lVar4 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar13 = CityHash64((char *)(lVar4 + 0x18),0x10);
  puVar15 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar14 = ::operator_new(0x48);
  puVar1 = local_res18;
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar14 + 1) = 0;
    *puVar14 = &
               ___7__TContextCacheElement_V__TArray_U__TVector_N_Math_UE__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar14 + 0xc) = uVar18;
    *(uint *)(puVar14 + 2) = uVar21;
    *(uint *)((longlong)puVar14 + 0x14) = uVar22;
    *(uint *)(puVar14 + 3) = uVar23;
    puVar14[4] = pFVar6;
    *(uint *)(puVar14 + 5) = uVar12;
    puVar14[6] = uVar16;
    puVar14[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar14 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar14 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar15 = puVar14;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)*local_res18;
    local_res18 = puVar15;
    (*(code *)*puVar14)(puVar1,1);
    puVar15 = local_res18;
  }
  local_res18 = puVar15;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar13,pFVar6,local_58,uVar12,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar13 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_> @ 14440afb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowVectorArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  FContext *this_00;
  FDataflowNode *this_01;
  FProperty *pFVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  uint uVar13;
  ulong64 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong local_res8;
  undefined8 *local_res18;
  FTimestamp local_res20;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  FGuid local_58 [2];
  
  plVar6 = *(longlong **)((longlong)this + 0x10);
  uVar19 = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::SetNum(&local_88,(int)plVar6[1],Default);
  if (0 < (int)plVar6[1]) {
    local_res8 = 0;
    uVar20 = uVar19;
    do {
      uVar18 = (uint)uVar19;
      uVar13 = 0;
      if ((int)uVar18 < local_88.ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar11.Data = local_88.AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar18 < (int)plVar6[1]) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *plVar6;
      uVar19 = (ulonglong)(uVar18 + 1);
      pdVar1 = (double *)(uVar20 + lVar7);
      lVar3 = uVar20 + 8;
      lVar4 = uVar20 + 0x10;
      lVar5 = uVar20 + 0x18;
      uVar20 = uVar20 + 0x20;
      local_68 = (float)*pdVar1;
      fStack_64 = (float)*(double *)(lVar3 + lVar7);
      fStack_60 = (float)*(double *)(lVar4 + lVar7);
      fStack_5c = (float)*(double *)(lVar5 + lVar7);
      pFVar2 = FVar11.Data + local_res8;
      *(float *)pFVar2 = local_68;
      *(float *)(pFVar2 + 4) = fStack_64;
      *(float *)(pFVar2 + 8) = fStack_60;
      *(float *)(pFVar2 + 0xc) = fStack_5c;
      local_res8 = local_res8 + 0x10;
    } while ((int)(uVar18 + 1) < (int)plVar6[1]);
  }
  uVar13 = 0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar17 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar17 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar17;
    uVar13 = FDataflowNode::GetValueHash(this_01);
  }
  lVar3 = *(longlong *)this;
  lVar4 = *(longlong *)(lVar3 + 8);
  if (lVar4 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    uStack_70._0_4_ = 0;
    uStack_70._4_4_ = 0;
    uVar18 = (uint)local_78;
    uVar21 = local_78._4_4_;
    uVar22 = (uint)uStack_70;
    uVar23 = uStack_70._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar4 + 0x7c);
    uVar21 = *(uint *)(lVar4 + 0x80);
    uVar22 = *(uint *)(lVar4 + 0x84);
    uVar23 = *(uint *)(lVar4 + 0x88);
  }
  pFVar8 = *(FProperty **)(lVar3 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar14 = CityHash64((char *)(lVar3 + 0x18),0x10);
  puVar16 = (undefined8 *)0x0;
  local_res18 = (undefined8 *)0x0;
  puVar15 = ::operator_new(0x48);
  puVar10 = local_res18;
  if (puVar15 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar15 + 1) = 0;
    *puVar15 = &
               ___7__TContextCacheElement_V__TArray_UFLinearColor__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar15 + 0xc) = uVar18;
    *(uint *)(puVar15 + 2) = uVar21;
    *(uint *)((longlong)puVar15 + 0x14) = uVar22;
    *(uint *)(puVar15 + 3) = uVar23;
    puVar15[4] = pFVar8;
    *(uint *)(puVar15 + 5) = uVar13;
    puVar15[6] = uVar17;
    puVar15[7] = local_88.AllocatorInstance.Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar15 + 8) = local_88.ArrayNum;
    *(int *)((longlong)puVar15 + 0x44) = local_88.ArrayMax;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    puVar16 = puVar15;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*local_res18;
    local_res18 = puVar16;
    (*(code *)*puVar15)(puVar10,1);
    puVar16 = local_res18;
  }
  local_res18 = puVar16;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar14,pFVar8,local_58,uVar13,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar14 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_> @ 14440b2b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_> param_1)

{
  FName *pFVar1;
  int iVar2;
  longlong *plVar3;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar4;
  longlong lVar5;
  FProperty *pFVar6;
  code *pcVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *local_res18;
  FTimestamp local_res20;
  FName local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  uVar17 = 0;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNum(&local_80,(int)plVar3[1],Default);
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < (int)plVar3[1]) {
    do {
      uVar18 = (uint)uVar19;
      uVar10 = 0;
      if ((int)uVar18 < local_80.ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (FName *)(local_80.AllocatorInstance.Data + uVar17 * 8);
      uVar10 = 0;
      if ((int)uVar18 < (int)plVar3[1]) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = *(int *)(*plVar3 + 8 + uVar20);
      iVar15 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar15 = 0;
      }
      pFVar11 = ::FName::FName(&local_88,iVar15,*(wchar_t **)(*plVar3 + uVar20),FNAME_Add);
      uVar17 = uVar17 + 1;
      *pFVar1 = *pFVar11;
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar20 = uVar20 + 0x10;
    } while ((int)(uVar18 + 1) < (int)plVar3[1]);
  }
  puVar14 = (undefined8 *)0x0;
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar10 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
    uVar16 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar16 = (this_01->LastModifiedTimestamp).Value;
    local_res20.Value = uVar16;
    uVar10 = FDataflowNode::GetValueHash(this_01);
  }
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)(lVar4 + 8);
  if (lVar5 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar18 = (uint)local_68;
    uVar21 = local_68._4_4_;
    uVar22 = (uint)uStack_60;
    uVar23 = uStack_60._4_4_;
  }
  else {
    uVar18 = *(uint *)(lVar5 + 0x7c);
    uVar21 = *(uint *)(lVar5 + 0x80);
    uVar22 = *(uint *)(lVar5 + 0x84);
    uVar23 = *(uint *)(lVar5 + 0x88);
  }
  pFVar6 = *(FProperty **)(lVar4 + 0x10);
  local_58[0].A = uVar18;
  local_58[0].B = uVar21;
  local_58[0].C = uVar22;
  local_58[0].D = uVar23;
  uVar12 = CityHash64((char *)(lVar4 + 0x18),0x10);
  local_res18 = (undefined8 *)0x0;
  puVar13 = ::operator_new(0x48);
  puVar8 = local_res18;
  if (puVar13 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar13 + 1) = 0;
    *puVar13 = &
               ___7__TContextCacheElement_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar13 + 0xc) = uVar18;
    *(uint *)(puVar13 + 2) = uVar21;
    *(uint *)((longlong)puVar13 + 0x14) = uVar22;
    *(uint *)(puVar13 + 3) = uVar23;
    puVar13[4] = pFVar6;
    *(uint *)(puVar13 + 5) = uVar10;
    puVar13[6] = uVar16;
    puVar13[7] = local_80.AllocatorInstance.Data;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar13 + 8) = local_80.ArrayNum;
    *(int *)((longlong)puVar13 + 0x44) = local_80.ArrayMax;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    puVar14 = puVar13;
  }
  if (local_res18 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*local_res18;
    local_res18 = puVar14;
    (*(code *)*puVar13)(puVar8,1);
    puVar14 = local_res18;
  }
  local_res18 = puVar14;
  if (local_res18 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar12,pFVar6,local_58,uVar10,&local_res20);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar12 & 0xffffffff,&local_res18);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_> @ 14440b7b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FScriptContainerElement *this_02;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  puVar10 = (undefined8 *)0x0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar7 = 0;
  puVar12 = puVar10;
  if (0 < (int)plVar1[1]) {
    do {
      uVar11 = (uint)puVar12;
      uVar14 = uVar7;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_02 = local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
      uVar14 = 0;
      if ((int)uVar11 < (int)plVar1[1]) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::FString::operator=((FString *)this_02,(FString *)(*plVar1 + (longlong)(int)uVar11 * 0x10));
      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar13 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar13 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar13;
    uVar7 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar14 = (uint)local_68;
    uVar11 = local_68._4_4_;
    uVar15 = (uint)uStack_60;
    uVar16 = uStack_60._4_4_;
  }
  else {
    uVar14 = *(uint *)(lVar3 + 0x7c);
    uVar11 = *(uint *)(lVar3 + 0x80);
    uVar15 = *(uint *)(lVar3 + 0x84);
    uVar16 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar14;
  local_58[0].B = uVar11;
  local_58[0].C = uVar15;
  local_58[0].D = uVar16;
  uVar8 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar9 = ::operator_new(0x48);
  puVar12 = local_res8;
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 0;
    *puVar9 = &
              ___7__TContextCacheElement_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar9 + 0xc) = uVar14;
    *(uint *)(puVar9 + 2) = uVar11;
    *(uint *)((longlong)puVar9 + 0x14) = uVar15;
    *(uint *)(puVar9 + 3) = uVar16;
    puVar9[4] = pFVar4;
    *(uint *)(puVar9 + 5) = uVar7;
    puVar9[6] = uVar13;
    puVar9[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar9 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar9 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar10 = puVar9;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*local_res8;
    local_res8 = puVar10;
    (*(code *)*puVar9)(puVar12,1);
    puVar10 = local_res8;
  }
  local_res8 = puVar10;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar8,pFVar4,local_58,uVar7,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar8 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_> @ 14440bbe0

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<__int64,TSizedDefaultAllocator<32>_>_> param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
  To<TArray<__int64,TSizedDefaultAllocator<32>_>_>
            (*(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray__JV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_> @ 14440bf70

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowNumericArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_>
          (void *this,
          TDataflowSingleTypePolicy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> param_1)

{
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar1;
  longlong lVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong64 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  FGuid local_48 [2];
  
  puVar8 = (undefined8 *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FDataflowConverter<TArray<double,TSizedDefaultAllocator<32>_>_>::
  To<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
            (*(TArray<double,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),&local_58);
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  uVar5 = 0;
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar9 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar9 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar9;
    uVar5 = FDataflowNode::GetValueHash(this_01);
  }
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 8);
  if (lVar2 == 0) {
    local_48[0].A = 0;
    local_48[0].B = 0;
    local_48[0].C = 0;
    local_48[0].D = 0;
    uVar10 = local_48[0].A;
    uVar11 = local_48[0].B;
    uVar12 = local_48[0].C;
    uVar13 = local_48[0].D;
  }
  else {
    uVar10 = *(uint *)(lVar2 + 0x7c);
    uVar11 = *(uint *)(lVar2 + 0x80);
    uVar12 = *(uint *)(lVar2 + 0x84);
    uVar13 = *(uint *)(lVar2 + 0x88);
  }
  pFVar3 = *(FProperty **)(lVar1 + 0x10);
  local_48[0].B = uVar11;
  local_48[0].A = uVar10;
  local_48[0].D = uVar13;
  local_48[0].C = uVar12;
  uVar6 = CityHash64((char *)(lVar1 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar7 = ::operator_new(0x48);
  puVar4 = local_res8;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &
              ___7__TContextCacheElement_V__TArray__KV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar7 + 0xc) = uVar10;
    *(uint *)(puVar7 + 2) = uVar11;
    *(uint *)((longlong)puVar7 + 0x14) = uVar12;
    *(uint *)(puVar7 + 3) = uVar13;
    puVar7[4] = pFVar3;
    *(uint *)(puVar7 + 5) = uVar5;
    puVar7[6] = uVar9;
    puVar7[7] = local_58.AllocatorInstance.Data;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar7 + 8) = local_58.ArrayNum;
    *(int *)((longlong)puVar7 + 0x44) = local_58.ArrayMax;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    puVar8 = puVar7;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*local_res8;
    local_res8 = puVar8;
    (*(code *)*puVar7)(puVar4,1);
    puVar8 = local_res8;
  }
  local_res8 = puVar8;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar6,pFVar3,local_48,uVar5,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar6 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator()<TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>_> @ 14440c320

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FDataflowOutput::SetValueFromAnyType<FDataflowBoolArrayTypes>'::__l2::<lambda_1>::
operator()<TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
          (void *this,TDataflowSingleTypePolicy<TArray<bool,TSizedDefaultAllocator<32>_>_> param_1)

{
  longlong *plVar1;
  FContext *this_00;
  FDataflowNode *this_01;
  longlong lVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  ulong64 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *local_res8;
  FTimestamp local_res18 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  FGuid local_58 [2];
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = *(longlong **)((longlong)this + 0x10);
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_78,(int)plVar1[1],Default);
  uVar8 = 0;
  puVar13 = puVar11;
  puVar10 = puVar11;
  if (0 < (int)plVar1[1]) {
    do {
      uVar12 = (uint)puVar13;
      uVar15 = uVar8;
      if ((int)uVar12 < local_78.ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data = local_78.AllocatorInstance.Data;
      uVar15 = uVar8;
      if ((int)uVar12 < (int)plVar1[1]) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.Data[(longlong)puVar10] = *(FScriptContainerElement *)((longlong)puVar10 + *plVar1);
      puVar13 = (undefined8 *)(ulonglong)(uVar12 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
    } while ((int)(uVar12 + 1) < (int)plVar1[1]);
  }
  this_00 = *(FContext **)((longlong)this + 8);
  this_01 = *(FDataflowNode **)(*(longlong *)this + 8);
  if (this_01 == (FDataflowNode *)0x0) {
    local_res18[0].Value = UE::Dataflow::FTimestamp::Invalid;
    uVar14 = UE::Dataflow::FTimestamp::Invalid;
  }
  else {
    uVar14 = (this_01->LastModifiedTimestamp).Value;
    local_res18[0].Value = uVar14;
    uVar8 = FDataflowNode::GetValueHash(this_01);
  }
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (uint)local_68;
    uVar12 = local_68._4_4_;
    uVar16 = (uint)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  else {
    uVar15 = *(uint *)(lVar3 + 0x7c);
    uVar12 = *(uint *)(lVar3 + 0x80);
    uVar16 = *(uint *)(lVar3 + 0x84);
    uVar17 = *(uint *)(lVar3 + 0x88);
  }
  pFVar4 = *(FProperty **)(lVar2 + 0x10);
  local_58[0].A = uVar15;
  local_58[0].B = uVar12;
  local_58[0].C = uVar16;
  local_58[0].D = uVar17;
  uVar9 = CityHash64((char *)(lVar2 + 0x18),0x10);
  local_res8 = (undefined8 *)0x0;
  puVar10 = ::operator_new(0x48);
  puVar13 = local_res8;
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar10 + 1) = 0;
    *puVar10 = &
               ___7__TContextCacheElement_V__TArray__NV__TSizedDefaultAllocator__0CA______Dataflow_UE__6B_
    ;
    *(uint *)((longlong)puVar10 + 0xc) = uVar15;
    *(uint *)(puVar10 + 2) = uVar12;
    *(uint *)((longlong)puVar10 + 0x14) = uVar16;
    *(uint *)(puVar10 + 3) = uVar17;
    puVar10[4] = pFVar4;
    *(uint *)(puVar10 + 5) = uVar8;
    puVar10[6] = uVar14;
    puVar10[7] = local_78.AllocatorInstance.Data;
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 8) = local_78.ArrayNum;
    *(int *)((longlong)puVar10 + 0x44) = local_78.ArrayMax;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    puVar11 = puVar10;
  }
  if (local_res8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*local_res8;
    local_res8 = puVar11;
    (*(code *)*puVar10)(puVar13,1);
    puVar11 = local_res8;
  }
  local_res8 = puVar11;
  if (local_res8 == (undefined8 *)0x0) {
    UE::Dataflow::FContext::SetNullData(this_00,(uint)uVar9,pFVar4,local_58,uVar8,local_res18);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x28))(this_00,uVar9 & 0xffffffff,&local_res8);
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// GetFrozenValue<FString> @ 144412810

FString * __thiscall
FDataflowOutput::GetFrozenValue<FString>(FDataflowOutput *this,FString *param_1)

{
  longlong lVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this->_padding_);
    if (((pFVar2 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
       (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      return (FString *)
             ((longlong)pFVar2->CachedProperty->Offset_Internal + *(longlong *)(lVar1 + 0x1f8));
    }
  }
  return param_1;
}

// GetFrozenValue<bool> @ 144412880

bool * __thiscall FDataflowOutput::GetFrozenValue<bool>(FDataflowOutput *this,bool *param_1)

{
  longlong lVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this->_padding_);
    if (((pFVar2 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
       (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      return (bool *)((longlong)pFVar2->CachedProperty->Offset_Internal +
                     *(longlong *)(lVar1 + 0x1f8));
    }
  }
  return param_1;
}

// SetValue<int_&> @ 14441e970

void __thiscall
FDataflowOutput::SetValue<int_&>(FDataflowOutput *this,int *param_1,FContext *param_2)

{
  FDataflowNode *this_00;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  FProperty *pFVar7;
  ulong64 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *local_res8;
  FTimestamp local_res20;
  FGuid local_48 [2];
  
  pFVar7 = (FProperty *)this->_padding_;
  if (pFVar7 != (FProperty *)0x0) {
    this_00 = (FDataflowNode *)this->_padding_;
    if (this_00 == (FDataflowNode *)0x0) {
      uVar4 = 0;
      local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
      uVar8 = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      uVar8 = (this_00->LastModifiedTimestamp).Value;
      local_res20.Value = uVar8;
      uVar4 = FDataflowNode::GetValueHash(this_00);
      pFVar7 = (FProperty *)this->_padding_;
    }
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar1 + 0x7c);
      uVar10 = *(uint *)(lVar1 + 0x80);
      uVar11 = *(uint *)(lVar1 + 0x84);
      uVar12 = *(uint *)(lVar1 + 0x88);
    }
    local_48[0].A = uVar9;
    local_48[0].B = uVar10;
    local_48[0].C = uVar11;
    local_48[0].D = uVar12;
    uVar5 = CityHash64((char *)&this->_padding_,0x10);
    local_res8 = (undefined8 *)0x0;
    puVar6 = ::operator_new(0x40);
    puVar3 = local_res8;
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &___7__TContextCacheElement_AEAH_Dataflow_UE__6B_;
      *(uint *)((longlong)puVar6 + 0xc) = uVar9;
      *(uint *)(puVar6 + 2) = uVar10;
      *(uint *)((longlong)puVar6 + 0x14) = uVar11;
      *(uint *)(puVar6 + 3) = uVar12;
      puVar6[4] = pFVar7;
      *(uint *)(puVar6 + 5) = uVar4;
      puVar6[6] = uVar8;
      *(int *)(puVar6 + 7) = *param_1;
    }
    if (local_res8 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*local_res8;
      local_res8 = puVar6;
      (*(code *)*puVar2)(puVar3,1);
      puVar6 = local_res8;
    }
    local_res8 = puVar6;
    if (local_res8 == (undefined8 *)0x0) {
      UE::Dataflow::FContext::SetNullData(param_2,(uint)uVar5,pFVar7,local_48,uVar4,&local_res20);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar5 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// SetValue<FDataflowImage> @ 14441eae0

void __thiscall
FDataflowOutput::SetValue<FDataflowImage>
          (FDataflowOutput *this,FDataflowImage *param_1,FContext *param_2)

{
  FDataflowNode *this_00;
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulong64 uVar4;
  FContextCacheElementUStruct *pFVar5;
  FContextCacheElementUStruct *pFVar6;
  FTimestamp FVar7;
  FProperty *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FContextCacheElementUStruct *local_res8;
  FTimestamp local_res20;
  FGuid local_58;
  FGuid local_48 [2];
  
  pFVar8 = (FProperty *)this->_padding_;
  if (pFVar8 != (FProperty *)0x0) {
    this_00 = (FDataflowNode *)this->_padding_;
    pFVar6 = (FContextCacheElementUStruct *)0x0;
    if (this_00 == (FDataflowNode *)0x0) {
      uVar3 = 0;
      local_res20.Value = UE::Dataflow::FTimestamp::Invalid;
      FVar7.Value = UE::Dataflow::FTimestamp::Invalid;
    }
    else {
      FVar7.Value = (this_00->LastModifiedTimestamp).Value;
      local_res20.Value = FVar7.Value;
      uVar3 = FDataflowNode::GetValueHash(this_00);
      pFVar8 = (FProperty *)this->_padding_;
    }
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar1 + 0x7c);
      uVar10 = *(uint *)(lVar1 + 0x80);
      uVar11 = *(uint *)(lVar1 + 0x84);
      uVar12 = *(uint *)(lVar1 + 0x88);
    }
    local_48[0].A = uVar9;
    local_48[0].B = uVar10;
    local_48[0].C = uVar11;
    local_48[0].D = uVar12;
    uVar4 = CityHash64((char *)&this->_padding_,0x10);
    local_res8 = (FContextCacheElementUStruct *)0x0;
    pFVar5 = ::operator_new(0x58);
    if (pFVar5 != (FContextCacheElementUStruct *)0x0) {
      local_58.A = uVar9;
      local_58.B = uVar10;
      local_58.C = uVar11;
      local_58.D = uVar12;
      pFVar6 = UE::Dataflow::FContextCacheElementUStruct::
               FContextCacheElementUStruct<FDataflowImage>
                         (pFVar5,&local_58,pFVar8,param_1,uVar3,FVar7);
    }
    pFVar5 = local_res8;
    if (local_res8 != (FContextCacheElementUStruct *)0x0) {
      plVar2 = &local_res8->_padding_;
      local_res8 = pFVar6;
      (**(code **)*plVar2)(pFVar5,1);
      pFVar6 = local_res8;
    }
    local_res8 = pFVar6;
    if (local_res8 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData(param_2,(uint)uVar4,pFVar8,local_48,uVar3,&local_res20);
    }
    else {
      (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar4 & 0xffffffff,&local_res8);
    }
    if (local_res8 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_res8->_padding_)(local_res8,1);
    }
  }
  return;
}

// FDataflowOutput @ 14442e8f0

FDataflowOutput * __thiscall
FDataflowOutput::FDataflowOutput(FDataflowOutput *this,FOutputParameters *param_1)

{
  TSharedPtr<UE::FWindowsRecursiveMutex,1> *pTVar1;
  TSharedRef<UE::FWindowsRecursiveMutex,1> *pTVar2;
  FWindowsRecursiveMutex *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::FWindowsRecursiveMutex,1> local_18;
  
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)this,OUTPUT,(FConnectionParameters *)param_1);
  this->PassthroughOffset = 0xffffffff;
  (this->PassthroughKey).Offset = 0xffffffff;
  this->_padding_ = (longlong)&___7FDataflowOutput__6B_;
  pTVar1 = &this->OutputLock;
  (this->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ArrayNum = 0;
  (this->Connections).ArrayMax = 0;
  (this->PassthroughKey).ContainerIndex = -1;
  (this->PassthroughKey).ContainerElementOffset = 0xffffffff;
  pTVar1->Object = (FWindowsRecursiveMutex *)0x0;
  (this->OutputLock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = MakeShared<UE::FWindowsRecursiveMutex,1>(&local_18);
  local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28 = pTVar2->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<UE::FWindowsRecursiveMutex,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FWindowsRecursiveMutex *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputLock).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// FDataflowOutput @ 14442e9c0

FDataflowOutput * __thiscall
FDataflowOutput::FDataflowOutput(FDataflowOutput *this,FOutputParameters *param_1,FGuid *param_2)

{
  TSharedPtr<UE::FWindowsRecursiveMutex,1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  TSharedRef<UE::FWindowsRecursiveMutex,1> *pTVar4;
  FWindowsRecursiveMutex *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::FWindowsRecursiveMutex,1> local_18;
  
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)this,OUTPUT,(FConnectionParameters *)param_1);
  lVar2 = *(longlong *)param_2;
  lVar3 = *(longlong *)&param_2->C;
  this->PassthroughOffset = 0xffffffff;
  (this->PassthroughKey).Offset = 0xffffffff;
  this->_padding_ = (longlong)&___7FDataflowOutput__6B_;
  pTVar1 = &this->OutputLock;
  (this->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ArrayNum = 0;
  (this->Connections).ArrayMax = 0;
  (this->PassthroughKey).ContainerIndex = -1;
  (this->PassthroughKey).ContainerElementOffset = 0xffffffff;
  pTVar1->Object = (FWindowsRecursiveMutex *)0x0;
  (this->OutputLock).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = lVar2;
  this->_padding_ = lVar3;
  pTVar4 = MakeShared<UE::FWindowsRecursiveMutex,1>(&local_18);
  local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_28 = pTVar4->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<UE::FWindowsRecursiveMutex,1> *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (FWindowsRecursiveMutex *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputLock).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// AddConnection @ 144437080

bool __thiscall FDataflowOutput::AddConnection(FDataflowOutput *this,FDataflowConnection *param_1)

{
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDataflowConnection *local_18 [2];
  
  if ((FName)this->_padding_ != param_1->Type) {
    return false;
  }
  pTVar1 = &this->Connections;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Connections).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (this->Connections).ArrayNum;
  piVar2 = &(this->Connections).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Connections).ArrayNum = iVar7 + 1;
  *(FDataflowConnection **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
  return true;
}

// Evaluate @ 144445b00

bool __thiscall FDataflowOutput::Evaluate(FDataflowOutput *this,FContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDataflowInput *pFVar4;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwningNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                       ,0x10d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x1e8) != '\0')) &&
     (bDataflowEnableGraphEval != false)) {
                    /* WARNING: Could not recover jumptable at 0x000144445b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1->_padding_ + 0x50))(param_1,this);
    return (bool)uVar3;
  }
  pFVar4 = GetPassthroughInput(this);
  if (pFVar4 != (FDataflowInput *)0x0) {
    ForwardInput(this,pFVar4,param_1);
    return true;
  }
  return false;
}

// EvaluateImpl @ 144445bb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDataflowOutput::EvaluateImpl(FDataflowOutput *this,FContext *param_1)

{
  undefined8 uVar1;
  FDataflowNode *pFVar2;
  char cVar3;
  bool bVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FName local_res8;
  FName local_res18;
  FString local_48;
  FString local_38;
  
  if (((this->_padding_ == 0) || (*(char *)(this->_padding_ + 0x200) == '\0')) ||
     (UE::Dataflow::Private::bDisableFreezingState)) {
    if (6 < (byte)LogChaosDataflow._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      local_res18 = *(FName *)(this->_padding_ + 0x8c);
      ::FName::ToString(&local_res18,&local_38);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar1 = *(undefined8 *)(this->_padding_ + 0x98);
    uVar5 = CityHash64((char *)&this->_padding_,0x10);
    cVar3 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar5 & 0xffffffff,uVar1);
    if (cVar3 == '\0') {
      if (5 < (byte)LogChaosDataflow._0_1_) {
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        local_res18 = *(FName *)(this->_padding_ + 0x8c);
        ::FName::ToString(&local_res18,&local_38);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      pFVar2 = (FDataflowNode *)this->_padding_;
      TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
      Remove(&param_1->NodesWithInfo,pFVar2);
      TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
      Remove(&param_1->NodesWithWarning,pFVar2);
      TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
      Remove(&param_1->NodesWithError,pFVar2);
      TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
      Remove(&param_1->NodesFailed,pFVar2);
      (**(code **)(*(longlong *)this->_padding_ + 0xc0))((longlong *)this->_padding_,param_1,this);
      pFVar2 = (FDataflowNode *)this->_padding_;
      bVar4 = UE::Dataflow::FContext::NodeHasError(param_1,pFVar2);
      if ((bVar4) ||
         (bVar4 = UE::Dataflow::FContext::NodeFailed(param_1,pFVar2),
         uVar5 = UE::Dataflow::FTimestamp::Invalid, bVar4)) {
        SetNullValue(this,param_1);
      }
      else {
        uVar6 = CityHash64((char *)&this->_padding_,0x10);
        cVar3 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar6 & 0xffffffff,uVar5);
        if (cVar3 == '\0') {
          local_res8 = (FName)this;
          `FDataflowOutput::EvaluateImpl'::__l91::<lambda_2>::operator()(&local_res8);
          return false;
        }
      }
    }
    else if (6 < (byte)LogChaosDataflow._0_1_) {
      uVar5 = CityHash64((char *)&this->_padding_,0x10);
      (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar5 & 0xffffffff);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
    }
  }
  else if (6 < (byte)LogChaosDataflow._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    local_res18 = *(FName *)(this->_padding_ + 0x8c);
    ::FName::ToString(&local_res18,&local_48);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// EvaluateParallel @ 144445f30

TFuture<bool> * __thiscall
FDataflowOutput::EvaluateParallel
          (FDataflowOutput *this,TFuture<bool> *__return_storage_ptr__,FContext *param_1)

{
  <lambda_1> local_48;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_48.__this = this;
  local_48.Context = param_1;
  Async<_FDataflowOutput::EvaluateParallel_::__l2::<lambda_1>_>
            (__return_storage_ptr__,TaskGraph,&local_48,&local_38);
  return __return_storage_ptr__;
}

// FixAndPropagateType @ 144449630

void __thiscall FDataflowOutput::FixAndPropagateType(FDataflowOutput *this,FName param_1)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  FString *this_00;
  FString *pFVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FName local_68;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  
  local_res10 = param_1;
  this_00 = ::FName::ToString(&local_res10,&local_40);
  local_res20 = (FName)this->_padding_;
  pFVar8 = ::FName::ToString(&local_res20,&local_50);
  iVar3 = (pFVar8->Data).ArrayNum;
  iVar13 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar13 = 0;
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  bVar6 = ::FString::StartsWith(this_00,pwVar9,iVar13,IgnoreCase);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InType.ToString().StartsWith(GetType().ToString())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0x1a4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = FDataflowConnection::IsAnyType(&local_res10);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FDataflowConnection::IsAnyType(InType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0x1a5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((FName)this->_padding_ != local_res10) {
    FDataflowConnection::SetTypeInternal((FDataflowConnection *)this,local_res10);
    pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
    *pbVar1 = *pbVar1 | 2;
    plVar10 = (longlong *)this->_padding_;
    ::FName::FName(&local_68,"FDataflowReRouteNode");
    cVar7 = (**(code **)(*plVar10 + 0x128))(plVar10,local_68);
    if (cVar7 == '\0') {
      plVar10 = (longlong *)0x0;
    }
    if (plVar10 != (longlong *)0x0) {
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ArrayNum = 0;
      local_60.ArrayMax = 0;
      TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                  *)(plVar10 + 0x15),&local_60);
      iVar13 = local_60.ArrayNum;
      pFVar2 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 8;
      FVar11.Data = local_60.AllocatorInstance.Data;
      while( true ) {
        if (local_60.ArrayNum != iVar13) {
          `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar11.Data == pFVar2) break;
        puVar4 = *(undefined8 **)FVar11.Data;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,local_res10);
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
    }
    FDataflowNode::NotifyConnectionTypeChanged
              ((FDataflowNode *)this->_padding_,(FDataflowConnection *)this);
    pFVar12 = (this->Connections).AllocatorInstance.Data;
    iVar13 = (this->Connections).ArrayNum;
    pFVar2 = pFVar12 + (longlong)iVar13 * 8;
    while( true ) {
      if ((this->Connections).ArrayNum != iVar13) {
        `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar12 == pFVar2) break;
      puVar4 = *(undefined8 **)pFVar12;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,local_res10);
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  return;
}

// ForwardInput @ 144449970

void __thiscall
FDataflowOutput::ForwardInput(FDataflowOutput *this,FConnectionReference *param_1,FContext *param_2)

{
  FDataflowInput *pFVar1;
  
  if ((this->_padding_ != 0) && ((FDataflowNode *)this->_padding_ != (FDataflowNode *)0x0)) {
    pFVar1 = FDataflowNode::FindInput((FDataflowNode *)this->_padding_,param_1);
    ForwardInput(this,pFVar1,param_2);
  }
  return;
}

// ForwardInput @ 1444499c0

void __thiscall
FDataflowOutput::ForwardInput(FDataflowOutput *this,FDataflowInput *param_1,FContext *param_2)

{
  int iVar1;
  undefined4 uVar2;
  FDataflowOutput *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong lVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  longlong *plVar14;
  ulong64 uVar15;
  undefined8 *local_res8;
  void *local_48;
  void *local_38;
  
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    lVar11 = (**(code **)(param_1->_padding_ + 0x50))(param_1);
    iVar1 = *(int *)(lVar11 + 8);
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (iVar1 == 0) {
      SetNullValue(this,param_2);
      return;
    }
    if ((param_1->_padding_ != this->_padding_) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5201422304189350280>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                            ,0x188,"Input->GetType() == GetType()"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar11 = (**(code **)(param_1->_padding_ + 0x50))(param_1);
    if ((*(int *)(lVar11 + 8) != 1) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5201422304189350281>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                            ,0x189,"Input->GetConnectedOutputs().Num() == 1"), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    pFVar3 = param_1->Connection;
    if (pFVar3 != (FDataflowOutput *)0x0) {
      FDataflowInput::PullValue(param_1,param_2);
      uVar15 = UE::Dataflow::FTimestamp::Invalid;
      if (this->_padding_ != 0) {
        uVar15 = *(ulong64 *)(this->_padding_ + 0x98);
      }
      uVar12 = CityHash64((char *)&pFVar3->_padding_,0x10);
      uVar13 = CityHash64((char *)&this->_padding_,0x10);
      plVar14 = (longlong *)(**(code **)(param_2->_padding_ + 0x30))(param_2);
      if (plVar14 == (longlong *)0x0) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_5258191021539327867>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNodeParameters.cpp"
                            ,0x85,"false");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        lVar11 = *plVar14;
        uVar2 = *(undefined4 *)(lVar11 + 0x28);
        uVar4 = *(undefined8 *)(lVar11 + 0x20);
        local_res8 = ::operator_new(0x40);
        if (local_res8 != (undefined8 *)0x0) {
          uVar6 = *(undefined4 *)(lVar11 + 0xc);
          uVar7 = *(undefined4 *)(lVar11 + 0x10);
          uVar8 = *(undefined4 *)(lVar11 + 0x14);
          uVar9 = *(undefined4 *)(lVar11 + 0x18);
          *(undefined4 *)(local_res8 + 1) = 1;
          local_res8[4] = uVar4;
          *(undefined4 *)((longlong)local_res8 + 0xc) = uVar6;
          *(undefined4 *)(local_res8 + 2) = uVar7;
          *(undefined4 *)((longlong)local_res8 + 0x14) = uVar8;
          *(undefined4 *)(local_res8 + 3) = uVar9;
          *(undefined4 *)(local_res8 + 5) = uVar2;
          *local_res8 = &___7FContextCacheElementReference_Dataflow_UE__6B_;
          *(int *)(local_res8 + 7) = (int)uVar12;
        }
        local_res8[6] = uVar15;
        (**(code **)(param_2->_padding_ + 0x28))(param_2,uVar13 & 0xffffffff,&local_res8);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
  }
  return;
}

// Freeze @ 144449e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FDataflowOutput::Freeze(FDataflowOutput *this,FContext *param_1,FInstancedPropertyBag *param_2)

{
  int iVar1;
  bool bVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  FName local_res8;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    if (5 < (byte)LogChaosDataflow._0_1_) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      local_res20 = *(FName *)(this->_padding_ + 0x8c);
      ::FName::ToString(&local_res20,&local_38);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = Evaluate(this,param_1);
    if (bVar2) {
      lVar5 = this->_padding_;
      uVar3 = CityHash64((char *)&this->_padding_,0x10);
      puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x30))(param_1,uVar3 & 0xffffffff);
      if (puVar4 == (undefined8 *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*(longlong *)*puVar4 + 0x10))((longlong *)*puVar4,param_1,lVar5);
      }
      iVar1 = ((FProperty *)this->_padding_)->Offset_Internal;
      FInstancedPropertyBag::AddProperty
                (param_2,(FName)this->_padding_,(FProperty *)this->_padding_,true);
      FInstancedPropertyBag::SetValue
                (param_2,(FName)this->_padding_,(FProperty *)this->_padding_,(void *)(lVar5 - iVar1)
                );
    }
  }
  return;
}

// GetConnectedInputs @ 14444a9f0

TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowOutput::GetConnectedInputs
          (FDataflowOutput *this,
          TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->Connections).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (this->Connections).AllocatorInstance.Data;
  iVar4 = (this->Connections).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Connections).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    local_28[0] = *(undefined8 *)pFVar10;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// GetConnectedInputs @ 14444ab50

TArray<FDataflowInput_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowOutput::GetConnectedInputs
          (FDataflowOutput *this,
          TArray<FDataflowInput_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TArray<FDataflowInput_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->Connections).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (this->Connections).AllocatorInstance.Data;
  iVar4 = (this->Connections).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Connections).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDataflowInput_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    local_28[0] = *(undefined8 *)pFVar10;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar9 = (TArray<FDataflowInput_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar9;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// GetConnections @ 14444b190

TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowOutput::GetConnections(FDataflowOutput *this)

{
  return &this->Connections;
}

// GetConnections @ 14444b1a0

TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowOutput::GetConnections(FDataflowOutput *this)

{
  return &this->Connections;
}

// GetConnections @ 14444b1b0

void __thiscall
FDataflowOutput::GetConnections
          (FDataflowOutput *this,TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (TArray<FDataflowConnection_*,TSizedDefaultAllocator<32>_> *)&this->Connections) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->Connections).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    ConstructItems<FDataflowConnection_*,FDataflowInput_*,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (FDataflowInput **)(this->Connections).AllocatorInstance.Data,iVar1);
  }
  return;
}

// GetFrozenPropertyValue @ 14444b5b0

uchar * __thiscall FDataflowOutput::GetFrozenPropertyValue(FDataflowOutput *this,uchar *param_1)

{
  longlong lVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                       ((FInstancedPropertyBag *)(lVar1 + 0x1f0),(FName)this->_padding_);
    if (((pFVar2 != (FPropertyBagPropertyDesc *)0x0) && (*(longlong *)(lVar1 + 0x1f8) != 0)) &&
       (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      return (uchar *)((longlong)pFVar2->CachedProperty->Offset_Internal +
                      *(longlong *)(lVar1 + 0x1f8));
    }
  }
  return param_1;
}

// GetPassthroughInput @ 14444ca70

FDataflowInput * __thiscall FDataflowOutput::GetPassthroughInput(FDataflowOutput *this)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput **ppFVar3;
  FDataflowInput *pFVar4;
  
  if (this->_padding_ == 0) {
    return (FDataflowInput *)0x0;
  }
  ppFVar3 = TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
            ::Find((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)(this->_padding_ + 0xa8),&this->PassthroughKey);
  if (ppFVar3 != (FDataflowInput **)0x0) {
    if (*ppFVar3 == (FDataflowInput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Con",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowNode.cpp"
                         ,0x110,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDataflowInput *)(*pcVar1)();
        return pFVar4;
      }
    }
    return *ppFVar3;
  }
  return (FDataflowInput *)0x0;
}

// GetPassthroughRealAddress @ 14444caf0

void * __thiscall FDataflowOutput::GetPassthroughRealAddress(FDataflowOutput *this)

{
  code *UNRECOVERED_JUMPTABLE;
  FDataflowInput *pFVar1;
  void *pvVar2;
  
  pFVar1 = GetPassthroughInput(this);
  if (pFVar1 != (FDataflowInput *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00014444cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(*UNRECOVERED_JUMPTABLE)(pFVar1,UNRECOVERED_JUMPTABLE);
    return pvVar2;
  }
  return (void *)0x0;
}

// HasFrozenValue @ 14444f650

bool __thiscall FDataflowOutput::HasFrozenValue(FDataflowOutput *this)

{
  if (((this->_padding_ != 0) && (*(char *)(this->_padding_ + 0x200) != '\0')) &&
     (!UE::Dataflow::Private::bDisableFreezingState)) {
    return true;
  }
  return false;
}

// HasNodeFailedOrErrored @ 14444ff40

bool __thiscall FDataflowOutput::HasNodeFailedOrErrored(FDataflowOutput *this,FContext *param_1)

{
  FDataflowNode *pFVar1;
  bool bVar2;
  
  pFVar1 = (FDataflowNode *)this->_padding_;
  bVar2 = UE::Dataflow::FContext::NodeHasError(param_1,pFVar1);
  if (!bVar2) {
    bVar2 = UE::Dataflow::FContext::NodeFailed(param_1,pFVar1);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// HasValidData @ 14444ffb0

bool __thiscall FDataflowOutput::HasValidData(FDataflowOutput *this,FContext *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong64 uVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    return false;
  }
  if ((*(char *)(lVar1 + 0x200) != '\0') && (!UE::Dataflow::Private::bDisableFreezingState)) {
    return true;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  uVar4 = CityHash64((char *)&this->_padding_,0x10);
  cVar3 = (**(code **)(param_1->_padding_ + 0x38))(param_1,uVar4 & 0xffffffff,uVar2);
  return cVar3 != '\0';
}

// Invalidate @ 144450b10

void __thiscall FDataflowOutput::Invalidate(FDataflowOutput *this,FTimestamp *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Connections).AllocatorInstance.Data;
  iVar2 = (this->Connections).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Connections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x48))(*(longlong **)pFVar3,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// IsConnected @ 1444514a0

bool __thiscall FDataflowOutput::IsConnected(FDataflowOutput *this)

{
  return (this->Connections).ArrayNum != 0;
}

// RemoveConnection @ 14445dbe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FDataflowOutput::RemoveConnection(FDataflowOutput *this,FDataflowConnection *param_1)

{
  FDataflowInput *local_res8 [4];
  
  local_res8[0] = (FDataflowInput *)param_1;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->Connections,local_res8,Default);
  return true;
}

// SetNullValue @ 144464590

void __thiscall FDataflowOutput::SetNullValue(FDataflowOutput *this,FContext *param_1)

{
  FDataflowNode *this_00;
  longlong lVar1;
  FProperty *pFVar2;
  uint uVar3;
  ulong64 uVar4;
  FTimestamp local_res8;
  FGuid local_18;
  
  if ((this->_padding_ != 0) &&
     (this_00 = (FDataflowNode *)this->_padding_, this_00 != (FDataflowNode *)0x0)) {
    local_res8.Value = (this_00->LastModifiedTimestamp).Value;
    uVar3 = FDataflowNode::GetValueHash(this_00);
    lVar1 = this->_padding_;
    pFVar2 = (FProperty *)this->_padding_;
    if (lVar1 == 0) {
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = 0;
      local_18.D = 0;
    }
    else {
      local_18.A = *(uint *)(lVar1 + 0x7c);
      local_18.B = *(uint *)(lVar1 + 0x80);
      local_18.C = *(uint *)(lVar1 + 0x84);
      local_18.D = *(uint *)(lVar1 + 0x88);
    }
    uVar4 = CityHash64((char *)&this->_padding_,0x10);
    UE::Dataflow::FContext::SetNullData(param_1,(uint)uVar4,pFVar2,&local_18,uVar3,&local_res8);
  }
  return;
}

// SetPassthroughInput @ 144464a30

FDataflowOutput * __thiscall
FDataflowOutput::SetPassthroughInput(FDataflowOutput *this,FConnectionReference *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDataflowOutput *pFVar5;
  FDataflowInput *pFVar6;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwningNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                       ,0xe3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDataflowOutput *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this->_padding_,param_1);
  if (pFVar6 == (FDataflowInput *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PassthroughInput",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                       ,0xe5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDataflowOutput *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar3 = (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6);
  iVar4 = (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
  (this->PassthroughKey).Offset = (uint)pFVar6->_padding_;
  (this->PassthroughKey).ContainerIndex = iVar4;
  (this->PassthroughKey).ContainerElementOffset = uVar3;
  return this;
}

// SetPassthroughInput @ 144464af0

FDataflowOutput * __thiscall
FDataflowOutput::SetPassthroughInput(FDataflowOutput *this,FConnectionKey *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *pFVar5;
  
  if ((((param_1->Offset != UE::Dataflow::FConnectionKey::Invalid.Offset) ||
       (param_1->ContainerIndex != UE::Dataflow::FConnectionKey::Invalid.ContainerIndex)) ||
      (param_1->ContainerElementOffset !=
       UE::Dataflow::FConnectionKey::Invalid.ContainerElementOffset)) &&
     ((FDataflowNode *)this->_padding_ != (FDataflowNode *)0x0)) {
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this->_padding_,param_1);
    if (pFVar4 == (FDataflowInput *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Key == UE::Dataflow::FConnectionKey::Invalid || !OwningNode || OwningNode->FindInput(Key)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0xec,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FDataflowOutput *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  iVar2 = param_1->ContainerIndex;
  (this->PassthroughKey).Offset = param_1->Offset;
  (this->PassthroughKey).ContainerIndex = iVar2;
  (this->PassthroughKey).ContainerElementOffset = param_1->ContainerElementOffset;
  return this;
}

// SetPassthroughOffset @ 144464b80

void __thiscall FDataflowOutput::SetPassthroughOffset(FDataflowOutput *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConnectionKey local_18;
  
  local_18.ContainerIndex = -1;
  local_18.ContainerElementOffset = 0xffffffff;
  local_18.Offset = param_1;
  if ((((param_1 != UE::Dataflow::FConnectionKey::Invalid.Offset) ||
       (UE::Dataflow::FConnectionKey::Invalid.ContainerIndex != -1)) ||
      (UE::Dataflow::FConnectionKey::Invalid.ContainerElementOffset != 0xffffffff)) &&
     ((FDataflowNode *)this->_padding_ != (FDataflowNode *)0x0)) {
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this->_padding_,&local_18);
    if (pFVar3 == (FDataflowInput *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Key == UE::Dataflow::FConnectionKey::Invalid || !OwningNode || OwningNode->FindInput(Key)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowInputOutput.cpp"
                         ,0xec,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  (this->PassthroughKey).Offset = local_18.Offset;
  (this->PassthroughKey).ContainerIndex = local_18.ContainerIndex;
  (this->PassthroughKey).ContainerElementOffset = 0xffffffff;
  return;
}

// operator() @ 1504beba0

bool __thiscall `FDataflowOutput::EvaluateImpl'::__l91::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5201422304189350206>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)this + 0x48);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(*(longlong *)(*(longlong *)this + 8) + 0x8c);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5201422304189350206>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bec5f;
    }
  }
  bVar4 = false;
LAB_1504bec5f:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

