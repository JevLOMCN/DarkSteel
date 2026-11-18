// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// FindNiagaraFriendlyTopLevelStruct @ 149444dc0

UScriptStruct * __cdecl
FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct
          (UScriptStruct *param_1,ENiagaraStructConversion param_2)

{
  int iVar1;
  FName FVar2;
  ulonglong uVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [16];
  
  if (param_1 == (UScriptStruct *)0x0) {
    return (UScriptStruct *)0x0;
  }
  FVar2 = (FName)param_1->_padding_;
  if (FVar2 != NAME_NiagaraDouble) {
    FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
    pUVar9 = FNiagaraTypeDefinition::Vec2Struct;
    if (((((FVar2 != FVar5) &&
          (uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_res18),
          pUVar9 = FNiagaraTypeDefinition::Vec2Struct,
          uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar7.Value))) &&
         (uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_res20),
         pUVar9 = FNiagaraTypeDefinition::Vec3Struct,
         uVar3 != *(uint *)CONCAT44(extraout_var_01,FVar7.Value))) &&
        (((uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_38),
          pUVar9 = FNiagaraTypeDefinition::Vec3Struct,
          uVar3 != *(uint *)CONCAT44(extraout_var_02,FVar7.Value) &&
          (uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_34),
          pUVar9 = FNiagaraTypeDefinition::Vec4Struct,
          uVar3 != *(uint *)CONCAT44(extraout_var_03,FVar7.Value))) &&
         ((uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_30),
          pUVar9 = FNiagaraTypeDefinition::Vec4Struct,
          uVar3 != *(uint *)CONCAT44(extraout_var_04,FVar7.Value) &&
          ((uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_2c),
           pUVar9 = FNiagaraTypeDefinition::QuatStruct,
           uVar3 != *(uint *)CONCAT44(extraout_var_05,FVar7.Value) &&
           (uVar3 = param_1->_padding_, FVar7 = FNameEntryId::FromValidEName((EName)local_28),
           pUVar9 = FNiagaraTypeDefinition::QuatStruct,
           uVar3 != *(uint *)CONCAT44(extraout_var_06,FVar7.Value))))))))) &&
       (pUVar9 = FNiagaraTypeDefinition::PositionStruct,
       (FName)param_1->_padding_ != NAME_NiagaraPosition)) {
      pUVar8 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      pUVar9 = param_1;
      if (((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar8->_padding_)) && (param_2 != UserFacing)) {
        if ((param_2 != Simulation) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StructConversion == ENiagaraStructConversion::Simulation",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                               ,0x345,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UScriptStruct *)(*pcVar4)();
          return pUVar9;
        }
        pUVar9 = GetSWCStruct(param_1);
      }
    }
    return pUVar9;
  }
  return FNiagaraTypeDefinition::FloatStruct;
}

// GetLWCStruct @ 14944a1a0

UScriptStruct * __cdecl FNiagaraTypeHelper::GetLWCStruct(UScriptStruct *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  UPackage *pUVar4;
  UPackage *pUVar5;
  UScriptStruct *pUVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  int iVar9;
  UScriptStruct *pUVar10;
  UScriptStruct *pUVar11;
  uint *puVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>_>
  *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  
  pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  pUVar5 = GetTransientPackage();
  if (pUVar4 != pUVar5) {
    return param_1;
  }
  AcquireSRWLockShared((PSRWLOCK)&RemapTableLock);
  pUVar7 = (UScriptStruct *)0x0;
  uStack_34 = 1;
  uStack_38 = 0;
  uVar8 = RemapTable._40_4_;
  pUVar6 = pUVar7;
  local_20 = uStack_38;
  if (uVar8 != 0) {
    pUVar6 = (UScriptStruct *)(RemapTable._40_8_ & 0xffffffff);
    puVar12 = (uint *)&RemapTable.field_0x10;
    if (RemapTable._32_8_ != 0) {
      puVar12 = (uint *)RemapTable._32_8_;
    }
    uVar3 = *puVar12;
    pUVar10 = pUVar7;
    pUVar11 = pUVar7;
    local_20 = 0;
    uStack_38 = 0;
    while (uVar3 == 0) {
      iVar9 = (int)pUVar10;
      local_20 = (int)pUVar11 + 0x20;
      pUVar11 = (UScriptStruct *)(ulonglong)local_20;
      uStack_38 = iVar9 + 1;
      pUVar10 = (UScriptStruct *)(ulonglong)uStack_38;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_38)
      goto LAB_14944a28a;
      uVar3 = puVar12[(longlong)iVar9 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = (local_20 - 1) + (int)lVar2;
    if ((int)uVar8 < (int)uVar3) {
      uVar3 = uVar8;
    }
    pUVar6 = (UScriptStruct *)(ulonglong)uVar3;
  }
LAB_14944a28a:
  local_30 = 0x154c83c10;
  local_40 = &RemapTable;
  uStack_28 = 0xffffffff;
  uStack_24 = (uint)pUVar6;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&RemapTable.field_0x10;
  TStack_60._padding_._0_4_ = uStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = uStack_24;
  if ((int)uStack_24 < (int)uVar8) {
    do {
      lVar2 = (longlong)(int)pUVar6 * 0x18;
      pUVar6 = (UScriptStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)(RemapTable._0_8_ + 8 + lVar2));
      if (pUVar6 == param_1) {
        pUVar7 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)(RemapTable._0_8_ + lVar2));
        break;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      pUVar6 = (UScriptStruct *)(ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
  return pUVar7;
}

// GetLWCType @ 14944a390

FNiagaraTypeDefinition * __cdecl
FNiagaraTypeHelper::GetLWCType
          (FNiagaraTypeDefinition *__return_storage_ptr__,FNiagaraTypeDefinition *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  UObject *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UPackage *pUVar9;
  longlong lVar10;
  UScriptStruct *pUVar11;
  UScriptStruct *this;
  uint uVar12;
  UScriptStruct *pUVar13;
  uint *puVar14;
  uint uVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (((param_1->UnderlyingType == 3) || (bVar6 = FNiagaraTypeDefinition::IsUObject(param_1), bVar6)
      ) || (bVar6 = FNiagaraTypeDefinition::IsDataInterface(param_1), bVar6)) {
    pUVar5 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    __return_storage_ptr__->UnderlyingType = param_1->UnderlyingType;
    __return_storage_ptr__->Flags = param_1->Flags;
    __return_storage_ptr__->Size = param_1->Size;
    __return_storage_ptr__->Alignment = param_1->Alignment;
    __return_storage_ptr__->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
    __return_storage_ptr__->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
    return __return_storage_ptr__;
  }
  InitLWCTypes();
  TVar4.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((((TObjectPtr<UObject>_u_0)TVar4.DebugPtr ==
        FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,&DoubleDef);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar4.DebugPtr ==
        FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,&Vector2DDef);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar4.DebugPtr ==
        FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,&VectorDef);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar4.DebugPtr ==
        FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,&Vector4Def);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar4.DebugPtr ==
        FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,&QuatDef);
    return __return_storage_ptr__;
  }
  bVar6 = IsLWCType(param_1);
  if (bVar6) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  pUVar11 = (UScriptStruct *)0x0;
  uVar12 = 0;
  this = FNiagaraTypeDefinition::IntStruct;
  if ((param_1->UnderlyingType != 3) &&
     (this = pUVar11, (param_1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar7);
    if (bVar6) {
      this = (UScriptStruct *)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
    }
  }
  if (this != (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) goto LAB_14944a5a3;
  }
  this = pUVar11;
LAB_14944a5a3:
  pUVar8 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  pUVar9 = GetTransientPackage();
  if (pUVar8 == pUVar9) {
    AcquireSRWLockShared((PSRWLOCK)&RemapTableLock);
    uStack_44 = 1;
    local_30 = 0;
    uVar15 = RemapTable._40_4_;
    uStack_34 = uVar12;
    if (uVar15 != 0) {
      puVar14 = (uint *)&RemapTable.field_0x10;
      if (RemapTable._32_8_ != 0) {
        puVar14 = (uint *)RemapTable._32_8_;
      }
      uVar3 = *puVar14;
      pUVar13 = pUVar11;
      uVar12 = 0;
      local_30 = 0;
      while (uVar3 == 0) {
        uVar12 = (int)pUVar11 + 1;
        pUVar11 = (UScriptStruct *)(ulonglong)uVar12;
        local_30 = (int)pUVar13 + 0x20;
        pUVar13 = (UScriptStruct *)(ulonglong)local_30;
        uStack_34 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14944a658;
        uVar3 = puVar14[(int)uVar12];
      }
      uStack_44 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uStack_34 = (int)lVar10 + -1 + local_30;
      if ((int)uVar15 < (int)uStack_34) {
        uStack_34 = uVar15;
      }
    }
LAB_14944a658:
    local_40 = 0x154c83c10;
    local_50 = &RemapTable;
    uStack_2c = TStack_70.CurrentBitIndex;
    uStack_38 = 0xffffffff;
    TStack_70._padding_ = CONCAT44(uStack_44,uVar12);
    TStack_70.Array._0_4_ = 0x54c83c10;
    TStack_70.Array._4_4_ = 1;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    TStack_70.CurrentBitIndex = uStack_34;
    uStack_48 = uVar12;
    if ((int)uStack_34 < (int)uVar15) {
      do {
        lVar10 = (longlong)TStack_70.CurrentBitIndex;
        pUVar11 = (UScriptStruct *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(RemapTable._0_8_ + 8 + lVar10 * 0x18));
        if (pUVar11 == this) {
          this = (UScriptStruct *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)(RemapTable._0_8_ + lVar10 * 0x18));
          ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
          goto LAB_14944a76c;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      } while (TStack_70.CurrentBitIndex <
               *(int *)(CONCAT44(TStack_70.Array._4_4_,TStack_70.Array._0_4_) + 0x18));
    }
    ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
  }
  else {
LAB_14944a76c:
    if (this != (UScriptStruct *)0x0) {
      (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      __return_storage_ptr__->UnderlyingType = 2;
      __return_storage_ptr__->Flags = '\0';
      __return_storage_ptr__->Size = -1;
      __return_storage_ptr__->Alignment = -1;
      __return_storage_ptr__->RegisteredTypeDefIndex = -1;
      __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
      FNiagaraTypeDefinition::GeneratePathNameHash(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSWCStruct @ 14944cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UScriptStruct * __cdecl FNiagaraTypeHelper::GetSWCStruct(UScriptStruct *param_1)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UScriptStruct *pUVar8;
  FName FVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_class_UScriptStruct_*___cdecl_FNiagaraTypeHelper::GetSWCStruct(UScriptStruct_*)_::_15_::FStat_STAT_Niagara_GetSWCStruct>
  FVar11;
  UPackage *pUVar12;
  UScriptStruct *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  FName this;
  FUObjectItem *this_00;
  EInternalObjectFlags EVar16;
  UScriptStruct *pUVar17;
  ulonglong uVar18;
  longlong *plVar19;
  FName FVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStackY_1b8 [32];
  FName local_158;
  FString local_150;
  FName local_140;
  FString local_138;
  FName local_128;
  FNiagaraLwcStructConverter local_118;
  FNiagaraTypeDefinition local_100;
  undefined1 local_e8 [32];
  ulonglong local_c8;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_c0;
  undefined1 local_b8 [12];
  uint uStack_ac;
  undefined1 local_a8 [16];
  ulonglong local_98;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_90;
  FObjectInstancingGraph *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar13 = (UScriptStruct *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&RemapTableLock);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_150,(FObjectPtr)&local_158);
  local_158 = (FName)local_150.Data.AllocatorInstance.Data;
  iVar7 = TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                      *)&RemapTable,
                     (uint)((ulonglong)local_150.Data.AllocatorInstance.Data >> 0x20) ^
                     local_150.Data.AllocatorInstance.Data._0_4_,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_158);
  iVar22 = 1;
  if (iVar7 == -1) {
    ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
  }
  else {
    lVar1 = RemapTable._0_8_ + (longlong)iVar7 * 0x18;
    pUVar17 = (UScriptStruct *)(lVar1 + 8);
    if (lVar1 == 0) {
      pUVar17 = pUVar13;
    }
    pUVar8 = pUVar13;
    if (pUVar17 != (UScriptStruct *)0x0) {
      pUVar8 = (UScriptStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)pUVar17);
      LOCK();
      RemapTableDirty = (atomic<bool>)0x1;
      UNLOCK();
    }
    ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
    if (pUVar8 != (UScriptStruct *)0x0) {
      return pUVar8;
    }
  }
  this.ComparisonIndex.Value = 0;
  this.Number = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&RemapTableLock);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_150,(FObjectPtr)&local_158);
  local_158 = (FName)local_150.Data.AllocatorInstance.Data;
  iVar7 = TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                      *)&RemapTable,
                     (uint)((ulonglong)local_150.Data.AllocatorInstance.Data >> 0x20) ^
                     local_150.Data.AllocatorInstance.Data._0_4_,
                     (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_158);
  if (iVar7 != -1) {
    lVar1 = RemapTable._0_8_ + (longlong)iVar7 * 0x18;
    pUVar17 = (UScriptStruct *)(lVar1 + 8);
    if (lVar1 == 0) {
      pUVar17 = pUVar13;
    }
    if (pUVar17 != (UScriptStruct *)0x0) {
      FVar9 = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)pUVar17);
      LOCK();
      RemapTableDirty = (atomic<bool>)0x1;
      UNLOCK();
      this = FVar9;
      if (FVar9 != (FName)0x0) goto LAB_14944d388;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Niagara_GetSWCStruct ==
        (FThreadSafeStaticStat<_public:_static_class_UScriptStruct_*___cdecl_FNiagaraTypeHelper::GetSWCStruct(UScriptStruct_*)_::_15_::FStat_STAT_Niagara_GetSWCStruct>
         )0x0) {
      pFVar10 = ::FName::FName(&local_140,"STAT_Niagara_GetSWCStruct");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_GetSWCStruct,*pFVar10,
                 L"STAT_Niagara_GetSWCStruct","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_Niagara_GetSWCStruct;
  if (StatPtr_STAT_Niagara_GetSWCStruct ==
      (FThreadSafeStaticStat<_public:_static_class_UScriptStruct_*___cdecl_FNiagaraTypeHelper::GetSWCStruct(UScriptStruct_*)_::_15_::FStat_STAT_Niagara_GetSWCStruct>
       )0x0) {
    pFVar10 = ::FName::FName(&local_140,"STAT_Niagara_GetSWCStruct");
    FVar11 = (FThreadSafeStaticStat<_public:_static_class_UScriptStruct_*___cdecl_FNiagaraTypeHelper::GetSWCStruct(UScriptStruct_*)_::_15_::FStat_STAT_Niagara_GetSWCStruct>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_GetSWCStruct,*pFVar10,
                          L"STAT_Niagara_GetSWCStruct","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar11;
  bVar4 = false;
  bVar3 = false;
  local_128.ComparisonIndex.Value = 0;
  local_128.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14944cf1d:
    bVar5 = false;
    FVar20 = local_128;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Data.AllocatorInstance.Data =
           local_150.Data.AllocatorInstance.Data & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158 = FVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                   ,0x26e);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14944cf1d;
    local_158 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar4 = false;
    bVar5 = true;
  }
  bVar6 = IsLWCStructure((UStruct *)param_1);
  FVar9 = (FName)param_1;
  if (bVar6) {
    if (Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDouble,(UObject *)pUVar12,
                           L"NiagaraDouble");
    }
    if (param_1 == Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton) {
      FVar9 = (FName)Z_Registration_Info_UScriptStruct_FNiagaraFloat.OuterSingleton;
      if (Z_Registration_Info_UScriptStruct_FNiagaraFloat.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar12 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNiagaraFloat.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFloat,(UObject *)pUVar12,
                             L"NiagaraFloat");
        FVar9 = (FName)Z_Registration_Info_UScriptStruct_FNiagaraFloat.OuterSingleton;
      }
    }
    else {
      pUVar13 = (UScriptStruct *)FNiagaraTypeDefinition::GetStruct(&Vector2DDef);
      FVar9 = (FName)FNiagaraTypeDefinition::Vec2Struct;
      if ((((param_1 != pUVar13) &&
           (pUVar13 = (UScriptStruct *)FNiagaraTypeDefinition::GetStruct(&VectorDef),
           FVar9 = (FName)FNiagaraTypeDefinition::Vec3Struct, param_1 != pUVar13)) &&
          (pUVar13 = (UScriptStruct *)FNiagaraTypeDefinition::GetStruct(&Vector4Def),
          FVar9 = (FName)FNiagaraTypeDefinition::Vec4Struct, param_1 != pUVar13)) &&
         (pUVar13 = (UScriptStruct *)FNiagaraTypeDefinition::GetStruct(&QuatDef),
         FVar9 = (FName)FNiagaraTypeDefinition::QuatStruct, param_1 != pUVar13)) {
        local_158 = (FName)param_1->_padding_;
        ::FName::ToString(&local_158,&local_150);
        ::FString::ConcatFF(&local_138,&local_150,&ConvertedSWCStructSuffix);
        iVar7 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        pFVar10 = ::FName::FName(&local_140,iVar7,(wchar_t *)local_138.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        FVar9 = *pFVar10;
        if ((FWeakObjectPtr)local_138.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if ((FName)local_150.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_e8,
                   (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                    *)&RemapTable);
        uStack_80 = (UPackage *)((ulonglong)uStack_80 & 0xffffffffffff0000);
        local_88 = (FObjectInstancingGraph *)&RemapTable;
        local_a8 = local_e8._16_16_;
        local_b8._0_8_ = local_e8._0_8_;
        stack0xffffffffffffff50 = (UPackage *)local_e8._8_8_;
        local_98 = local_c8;
        pTStack_90 = pTStack_c0;
        uVar18 = local_e8._24_8_ >> 0x20;
        EVar16 = local_e8._28_4_;
        if ((int)EVar16 < *(int *)(local_e8._16_8_ + 0x18)) {
          while( true ) {
            local_138.Data.AllocatorInstance.Data =
                 *(FScriptContainerElement **)
                  (*(longlong *)local_b8._0_8_ + 8 + (longlong)(int)uVar18 * 0x18);
            bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_138);
            if ((bVar6) &&
               (pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_138),
               FVar2.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18,
               FVar2.Number = *(uint *)&pUVar14->field_0x1c, FVar2 == FVar9)) {
              this = (FName)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_138);
              TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_90,EVar16);
              LOCK();
              RemapTableDirty = (atomic<bool>)0x1;
              UNLOCK();
              goto LAB_14944d160;
            }
            local_a8._8_4_ = local_a8._8_4_ & ~uStack_ac;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
            if (*(int *)(local_a8._0_8_ + 0x18) <= (int)local_a8._12_4_) break;
            uVar18 = (ulonglong)(uint)local_a8._12_4_;
            EVar16 = local_a8._12_4_;
          }
          if ((char)uStack_80 == '\0') goto LAB_14944d1b8;
LAB_14944d160:
          if (uStack_80._1_1_ != '\0') {
            uVar21 = *(int *)&local_88->DestinationRoot -
                     *(int *)&(local_88->SourceToDestinationMap).field_0x1c;
            if (3 < uVar21) {
              uVar18 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
              lVar1 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                }
              }
              iVar22 = 1 << ((byte)lVar1 & 0x1f);
            }
            if (((0 < (int)uVar21) &&
                (*(int *)&(local_88->SourceToDestinationMap).field_0x30 < iVar22)) ||
               (iVar22 < *(int *)&(local_88->SourceToDestinationMap).field_0x30)) {
              *(int *)&(local_88->SourceToDestinationMap).field_0x30 = iVar22;
              TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
              ::Rehash((TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                        *)local_88);
            }
          }
          if (this == (FName)0x0) goto LAB_14944d1b8;
        }
        else {
LAB_14944d1b8:
          pUVar12 = GetTransientPackage();
          if (FVar9 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pUVar12,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar15 = Z_Construct_UClass_UScriptStruct_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_b8,pUVar15);
          local_88 = (FObjectInstancingGraph *)0x0;
          uStack_80 = (UPackage *)0x0;
          local_a8._8_4_ = 0;
          local_a8._0_4_ = FVar9.ComparisonIndex.Value;
          local_a8._4_4_ = FVar9.Number;
          pTStack_90 = (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                        *)0x0;
          local_98 = local_98 & 0xffffffffffffff00;
          unique0x10000bb7 = pUVar12;
          this = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
          ;
          if (local_78 != 0) {
            plVar19 = local_68;
            if (local_50 != (longlong *)0x0) {
              plVar19 = local_50;
            }
            (**(code **)(*plVar19 + 0x10))();
          }
          this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this + 0xc));
          FUObjectItem::SetRootFlags(this_00,RootSet);
        }
        BuildSWCStructure(&local_118,(UScriptStruct *)this,param_1);
        FNiagaraTypeRegistry::GetTypeForStruct(&local_100,param_1);
        FNiagaraTypeRegistry::RegisterStructConverter(&local_100,&local_118);
        (**(code **)(*(longlong *)this + 0x2b8))(this);
        (**(code **)(*(longlong *)this + 0x368))(this);
        UStruct::StaticLink((UStruct *)this,true);
        FVar9 = this;
        if (local_118.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ConversionSteps.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_158,(FObjectPtr)&local_150);
  local_140 = (FName)&local_158;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
              *)&RemapTable,
             (TKeyInitializer<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_&&> *)&local_150,
             (bool *)&local_140);
  lVar1 = RemapTable._0_8_ + (longlong)(int)local_150.Data.AllocatorInstance.Data._0_4_ * 0x18;
  local_140 = FVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar9 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar9);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar1 + 8),(FObjectPtr)&local_140);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
LAB_14944d388:
  ReleaseSRWLockExclusive((PSRWLOCK)&RemapTableLock);
  return (UScriptStruct *)FVar9;
}

// GetSWCType @ 14944d460

FNiagaraTypeDefinition * __cdecl
FNiagaraTypeHelper::GetSWCType
          (FNiagaraTypeDefinition *__return_storage_ptr__,FNiagaraTypeDefinition *param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  bool bVar3;
  UStruct *pUVar4;
  UScriptStruct *pUVar5;
  TObjectPtr<UObject>_u_0 local_res10;
  TObjectPtr<UObject>_u_0 *local_res18 [2];
  
  if (param_1->UnderlyingType != 3) {
    bVar3 = FNiagaraTypeDefinition::IsUObject(param_1);
    if (!bVar3) {
      bVar3 = FNiagaraTypeDefinition::IsDataInterface(param_1);
      if (!bVar3) {
        bVar3 = IsLWCType(param_1);
        if (bVar3) {
          pUVar4 = FNiagaraTypeDefinition::GetStruct(param_1);
          pUVar5 = CastChecked<UScriptStruct,UStruct>(pUVar4);
          local_res10.DebugPtr = (UObject *)FindNiagaraFriendlyTopLevelStruct(pUVar5,Simulation);
          (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)local_res10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UScriptStruct *)local_res10.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable(local_res10.DebugPtr);
          }
          TVar2 = local_res10;
          __return_storage_ptr__->UnderlyingType = 2;
          __return_storage_ptr__->Flags = '\0';
          __return_storage_ptr__->Size = -1;
          __return_storage_ptr__->Alignment = -1;
          __return_storage_ptr__->RegisteredTypeDefIndex = -1;
          __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
          pUVar5 = FindNiagaraFriendlyTopLevelStruct
                             ((UScriptStruct *)local_res10.DebugPtr,UserFacing);
          if (pUVar5 != (UScriptStruct *)TVar2.DebugPtr) {
            local_res18[0] = &local_res10;
            `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          FNiagaraTypeDefinition::GeneratePathNameHash(__return_storage_ptr__);
          return __return_storage_ptr__;
        }
        FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
  }
  pUVar1 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  __return_storage_ptr__->UnderlyingType = param_1->UnderlyingType;
  __return_storage_ptr__->Flags = param_1->Flags;
  __return_storage_ptr__->Size = param_1->Size;
  __return_storage_ptr__->Alignment = param_1->Alignment;
  __return_storage_ptr__->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
  __return_storage_ptr__->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
  return __return_storage_ptr__;
}

// InitLWCTypes @ 149451bd0

void __cdecl FNiagaraTypeHelper::InitLWCTypes(void)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UPackage *pUVar3;
  TStringView<wchar_t> local_38;
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  undefined8 local_1c;
  uint local_14;
  
  if (Vector2DDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    local_38.DataPtr = L"/Script/CoreUObject";
    local_38.Size = 0x13;
    pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
    pUVar2 = StaticFindObjectChecked(pUVar1,(UObject *)0x0,&local_38,None);
    local_38.Size = 8;
    local_38.DataPtr = L"Vector2D";
    pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_28.DebugPtr = StaticFindObjectChecked(pUVar1,pUVar2,&local_38,None);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = '\0';
    local_20 = 2;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    Vector2DDef.UnderlyingType = local_20;
    Vector2DDef.Flags = local_1e;
    Vector2DDef.Size = (short)local_1c;
    Vector2DDef.Alignment = local_1c._2_2_;
    Vector2DDef.RegisteredTypeDefIndex = local_1c._4_4_;
    Vector2DDef.UnderlyingTypePathNameHash = local_14;
    local_38.DataPtr = L"Vector";
    local_38.Size = 6;
    Vector2DDef.ClassStructOrEnum.field0_0x0 = local_28;
    pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_28.DebugPtr = StaticFindObjectChecked(pUVar1,pUVar2,&local_38,None);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 2;
    local_1e = '\0';
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    VectorDef.UnderlyingType = local_20;
    VectorDef.Flags = local_1e;
    VectorDef.Size = (short)local_1c;
    VectorDef.Alignment = local_1c._2_2_;
    VectorDef.RegisteredTypeDefIndex = local_1c._4_4_;
    VectorDef.UnderlyingTypePathNameHash = local_14;
    local_38.DataPtr = L"Vector4";
    local_38.Size = 7;
    VectorDef.ClassStructOrEnum.field0_0x0 = local_28;
    pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_28.DebugPtr = StaticFindObjectChecked(pUVar1,pUVar2,&local_38,None);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 2;
    local_1e = '\0';
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    Vector4Def.UnderlyingType = local_20;
    Vector4Def.Flags = local_1e;
    Vector4Def.Size = (short)local_1c;
    Vector4Def.Alignment = local_1c._2_2_;
    Vector4Def.RegisteredTypeDefIndex = local_1c._4_4_;
    Vector4Def.UnderlyingTypePathNameHash = local_14;
    local_38.DataPtr = L"Quat";
    local_38.Size = 4;
    Vector4Def.ClassStructOrEnum.field0_0x0 = local_28;
    pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
    local_28.DebugPtr = StaticFindObjectChecked(pUVar1,pUVar2,&local_38,None);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_20 = 2;
    local_1e = '\0';
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    QuatDef.UnderlyingType = local_20;
    QuatDef.Flags = local_1e;
    QuatDef.Size = (short)local_1c;
    QuatDef.Alignment = local_1c._2_2_;
    QuatDef.RegisteredTypeDefIndex = local_1c._4_4_;
    QuatDef.UnderlyingTypePathNameHash = local_14;
    QuatDef.ClassStructOrEnum.field0_0x0 = local_28;
    if (Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar3 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDouble,(UObject *)pUVar3,
                           L"NiagaraDouble");
    }
    local_28 = (TObjectPtr<UObject>_u_0)
               Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FNiagaraDouble.OuterSingleton);
    }
    local_20 = 2;
    local_1e = '\0';
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    DoubleDef.UnderlyingType = local_20;
    DoubleDef.Flags = local_1e;
    DoubleDef.Size = (short)local_1c;
    DoubleDef.Alignment = local_1c._2_2_;
    DoubleDef.RegisteredTypeDefIndex = local_1c._4_4_;
    DoubleDef.UnderlyingTypePathNameHash = local_14;
    DoubleDef.ClassStructOrEnum.field0_0x0 = local_28;
    FNiagaraTypeRegistry::Register(&Vector2DDef,None);
    FNiagaraTypeRegistry::Register(&VectorDef,None);
    FNiagaraTypeRegistry::Register(&Vector4Def,None);
    FNiagaraTypeRegistry::Register(&QuatDef,None);
    FNiagaraTypeRegistry::Register(&DoubleDef,None);
    return;
  }
  return;
}

// IsConvertedSWCStructure @ 149453df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNiagaraTypeHelper::IsConvertedSWCStructure(UStruct *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  UStruct *pUVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_8e8 [32];
  TMap<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>_>
  *local_8c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8c0;
  FName local_8a0;
  TMap<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>_>
  *local_898;
  uint uStack_890;
  uint uStack_88c;
  undefined8 local_888;
  undefined4 uStack_880;
  uint uStack_87c;
  uint local_878;
  int iStack_874;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1035];
  wchar_t local_32 [5];
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8e8;
  uVar7 = 0;
  uVar6 = 0;
  uVar9 = 0;
  if (param_1 != (UStruct *)0x0) {
    local_8a0 = (FName)param_1->_padding_;
    local_868.Base = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    local_868.End = local_32;
    ::FName::AppendString(&local_8a0,&local_868);
    uVar4 = (uint)((longlong)local_868.CurPos - (longlong)local_868.Base >> 1);
    uVar12 = ConvertedSWCStructSuffix.Data.ArrayNum - 1;
    if (ConvertedSWCStructSuffix.Data.ArrayNum == 0) {
      uVar12 = uVar6;
    }
    uVar2 = uVar4;
    if ((int)uVar12 < (int)uVar4) {
      uVar2 = uVar12;
    }
    uVar13 = uVar9;
    if (0 < (int)uVar2) {
      uVar13 = uVar2;
    }
    if (((uVar12 != uVar13) ||
        (((uVar12 != 0 && (uVar13 != 0)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)ConvertedSWCStructSuffix.Data.AllocatorInstance.Data,
                             local_868.Base + ((longlong)(int)uVar4 - (longlong)(int)uVar13),
                             (longlong)(int)uVar13), iVar3 != 0)))) || (uVar12 != uVar13)) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return false;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  AcquireSRWLockShared((PSRWLOCK)&RemapTableLock);
  uStack_88c = 1;
  uVar12 = RemapTable._40_4_;
  uVar8 = uVar7;
  if (uVar12 != 0) {
    uVar8 = RemapTable._40_8_ & 0xffffffff;
    puVar11 = (uint *)&RemapTable.field_0x10;
    if (RemapTable._32_8_ != 0) {
      puVar11 = (uint *)RemapTable._32_8_;
    }
    uVar4 = *puVar11;
    uVar10 = uVar7;
    uVar9 = 0;
    while (uVar4 == 0) {
      iVar3 = (int)uVar7;
      uVar9 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uVar9;
      uVar6 = iVar3 + 1;
      uVar7 = (ulonglong)uVar6;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar6)
      goto LAB_149453f6a;
      uVar4 = puVar11[(longlong)iVar3 + 1];
    }
    uStack_88c = -uVar4 & uVar4;
    uVar7 = (ulonglong)uStack_88c * 2 + 1;
    lVar1 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar4 = (uVar9 - 1) + (int)lVar1;
    if ((int)uVar12 < (int)uVar4) {
      uVar4 = uVar12;
    }
    uVar8 = (ulonglong)uVar4;
  }
LAB_149453f6a:
  local_898 = &RemapTable;
  local_888 = 0x154c83c10;
  uStack_880 = 0xffffffff;
  uStack_87c = (uint)uVar8;
  iStack_874 = TStack_8c0.CurrentBitIndex;
  TStack_8c0.UnvisitedBitMask = 0xffffffff;
  local_8c8 = &RemapTable;
  TStack_8c0._28_4_ = TStack_8c0.CurrentBitIndex;
  TStack_8c0.BaseBitIndex = uVar9;
  TStack_8c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&RemapTable.field_0x10;
  uStack_890 = uVar6;
  local_878 = uVar9;
  TStack_8c0._padding_._0_4_ = uVar6;
  TStack_8c0._padding_._4_4_ = uStack_88c;
  TStack_8c0.CurrentBitIndex = uStack_87c;
  if ((int)uStack_87c < (int)uVar12) {
    do {
      pUVar5 = (UStruct *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (*(longlong *)local_8c8 + (longlong)(int)uVar8 * 0x18 + 8));
      if (pUVar5 == param_1) {
        ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
        return true;
      }
      TStack_8c0.UnvisitedBitMask = TStack_8c0.UnvisitedBitMask & ~TStack_8c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8c0);
      uVar8 = (ulonglong)(uint)TStack_8c0.CurrentBitIndex;
    } while (TStack_8c0.CurrentBitIndex < (TStack_8c0.Array)->NumBits);
  }
  ReleaseSRWLockShared((PSRWLOCK)&RemapTableLock);
  return false;
}

// IsLWCStructure @ 149454310

bool __cdecl FNiagaraTypeHelper::IsLWCStructure(UStruct *param_1)

{
  FField *pFVar1;
  EClassCastFlags EVar2;
  FField *pFVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  pFVar1 = param_1->ChildProperties;
  do {
    if (pFVar1 == (FField *)0x0) {
      return false;
    }
    EVar2 = pFVar1->ClassPrivate->CastFlags;
    if ((EVar2 >> 0x20 & 1) != 0) {
      return true;
    }
    if ((EVar2 >> 0x14 & 1) != 0) {
      pFVar3 = (pFVar1[2].Owner.Container.Field)->Next;
      FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_01,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_02,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_28);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_03,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_24);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_04,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_20);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_05,FVar4.Value)) {
        return true;
      }
      FVar4 = FNameEntryId::FromValidEName((EName)local_1c);
      if (pFVar3 == (FField *)(ulonglong)*(uint *)CONCAT44(extraout_var_06,FVar4.Value)) {
        return true;
      }
    }
    pFVar1 = pFVar1->Next;
  } while( true );
}

// IsLWCType @ 149454440

bool __cdecl FNiagaraTypeHelper::IsLWCType(FNiagaraTypeDefinition *param_1)

{
  bool bVar1;
  UStruct *pUVar2;
  
  if (((param_1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
     (param_1->UnderlyingType != 3)) {
    bVar1 = FNiagaraTypeDefinition::IsUObject(param_1);
    if (!bVar1) {
      pUVar2 = FNiagaraTypeDefinition::GetStruct(param_1);
      bVar1 = IsLWCStructure(pUVar2);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// IsNiagaraFriendlyTopLevelStruct @ 149454490

bool __cdecl
FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
          (UScriptStruct *param_1,ENiagaraStructConversion param_2)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FindNiagaraFriendlyTopLevelStruct(param_1,param_2);
  return pUVar1 == param_1;
}

// TickTypeRemap @ 14946b5f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FNiagaraTypeHelper::TickTypeRemap(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  FUObjectItem *this;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (RemapTableDirty != (atomic<bool>)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&RemapTableLock);
    TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                *)&RemapTable);
    local_18 = (TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
                *)&RemapTable;
    local_10 = '\0';
    cStack_f = '\0';
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar6 = local_78._24_8_ >> 0x20;
    uVar7 = local_78._28_4_;
    if ((int)uVar7 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        plVar2 = local_48;
        lVar1 = (longlong)(int)uVar6 * 0x18;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_48 + lVar1));
        if ((pUVar4 == (UObject *)0x0) ||
           (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8 + lVar1)),
           pUVar5 == (UObject *)0x0)) {
          pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8 + lVar1));
          if ((pUVar5 != (UObject *)0x0) && (pUVar4 != pUVar5)) {
            this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
            FUObjectItem::ClearRootFlags(this,RootSet);
          }
          TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uVar7);
          local_10 = '\x01';
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar6 = (ulonglong)uStack_2c;
        uVar7 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar3 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
          local_18->HashSize = iVar3;
          TSet<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
    LOCK();
    RemapTableDirty = (atomic<bool>)0x0;
    UNLOCK();
    ReleaseSRWLockExclusive((PSRWLOCK)&RemapTableLock);
  }
  return;
}

// ToString @ 14946b8e0

FString * __cdecl
FNiagaraTypeHelper::ToString(FString *__return_storage_ptr__,uchar *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  FProperty *this;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  size_t sVar7;
  FFieldClass *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  int iVar11;
  ushort local_res8 [4];
  TFieldIterator<FProperty> local_168;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
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
  FString local_50 [2];
  
  iVar11 = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_2 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    iVar9 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar9) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar9 = (int)pUVar5->_padding_;
      if ((iVar9 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar5->_padding_)) {
        if ((UScriptStruct *)param_2 == FNiagaraTypeDefinition::FloatStruct) {
          ::FString::PrintfImpl(&local_150,L"%g ");
          if (local_150.Data.ArrayNum != 0) {
            iVar11 = local_150.Data.ArrayNum + -1;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
        }
        else if ((UScriptStruct *)param_2 == FNiagaraTypeDefinition::IntStruct) {
          ::FString::PrintfImpl(&local_140,L"%d ");
          if (local_140.Data.ArrayNum != 0) {
            iVar11 = local_140.Data.ArrayNum + -1;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        else if ((UScriptStruct *)param_2 == FNiagaraTypeDefinition::BoolStruct) {
          if (*(int *)param_1 == -1) {
            pwVar10 = L"True";
          }
          else {
            pwVar10 = L"Invalid";
            if (*(int *)param_1 == 0) {
              pwVar10 = L"False";
            }
          }
          sVar7 = wcslen(pwVar10);
          ::FString::AppendChars(__return_storage_ptr__,pwVar10,(int)sVar7);
        }
        else {
          local_168.Field = *(FField **)(param_2 + 2);
          local_168.InterfaceIndex = -1;
          local_168.bIncludeSuper = true;
          local_168.bIncludeDeprecated = true;
          local_168.bIncludeInterface = false;
          local_168.Struct = (UStruct *)param_2;
          TFieldIterator<FProperty>::IterateToNext(&local_168);
          this = (FProperty *)local_168.Field;
          while (this != (FProperty *)0x0) {
            iVar9 = this->Offset_Internal;
            local_168.Field = (FField *)this;
            pFVar8 = FFloatProperty::StaticClass();
            if ((pFVar8 == (FFieldClass *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            pFVar2 = (FFieldClass *)this->_padding_;
            if (pFVar8->Id == CASTCLASS_None) {
              for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                if (pFVar2 == pFVar8) {
                  bVar4 = true;
                  goto LAB_14946bb80;
                }
              }
              bVar4 = false;
            }
            else {
              bVar4 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
            }
LAB_14946bb80:
            if (bVar4) {
              FProperty::GetNameCPP(this,&local_b0);
              ::FString::PrintfImpl(&local_130,L"%s: %g ");
              iVar9 = iVar11;
              if (local_130.Data.ArrayNum != 0) {
                iVar9 = local_130.Data.ArrayNum + -1;
              }
              ::FString::AppendChars
                        (__return_storage_ptr__,(wchar_t *)local_130.Data.AllocatorInstance.Data,
                         iVar9);
              if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_130.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
            else {
              pFVar8 = FDoubleProperty::StaticClass();
              if ((pFVar8 == (FFieldClass *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FieldType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x2dd,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar6 = (FString *)(*pcVar3)();
                return pFVar6;
              }
              pFVar2 = (FFieldClass *)this->_padding_;
              if (pFVar8->Id == CASTCLASS_None) {
                for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                  if (pFVar2 == pFVar8) {
                    bVar4 = true;
                    goto LAB_14946bc70;
                  }
                }
                bVar4 = false;
              }
              else {
                bVar4 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
              }
LAB_14946bc70:
              if (bVar4) {
                FProperty::GetNameCPP(this,&local_a0);
                ::FString::PrintfImpl(&local_120,L"%s: %g ");
                iVar9 = iVar11;
                if (local_120.Data.ArrayNum != 0) {
                  iVar9 = local_120.Data.ArrayNum + -1;
                }
                ::FString::AppendChars
                          (__return_storage_ptr__,(wchar_t *)local_120.Data.AllocatorInstance.Data,
                           iVar9);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
              }
              else {
                pFVar8 = FUInt16Property::StaticClass();
                if ((pFVar8 == (FFieldClass *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("FieldType",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                       ,0x2dd,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar6 = (FString *)(*pcVar3)();
                  return pFVar6;
                }
                pFVar2 = (FFieldClass *)this->_padding_;
                if (pFVar8->Id == CASTCLASS_None) {
                  for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                    if (pFVar2 == pFVar8) {
                      bVar4 = true;
                      goto LAB_14946bd60;
                    }
                  }
                  bVar4 = false;
                }
                else {
                  bVar4 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
                }
LAB_14946bd60:
                if (bVar4) {
                  local_res8[0] = *(ushort *)(param_1 + iVar9);
                  FGenericPlatformMath::LoadHalf(local_res8);
                  FProperty::GetNameCPP(this,&local_90);
                  ::FString::PrintfImpl(&local_110,L"%s: %f ");
                  iVar9 = iVar11;
                  if (local_110.Data.ArrayNum != 0) {
                    iVar9 = local_110.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (__return_storage_ptr__,(wchar_t *)local_110.Data.AllocatorInstance.Data
                             ,iVar9);
                  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_110.Data.AllocatorInstance.Data);
                  }
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  pFVar8 = FIntProperty::StaticClass();
                  if ((pFVar8 == (FFieldClass *)0x0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("FieldType",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                         ,0x2dd,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    pFVar6 = (FString *)(*pcVar3)();
                    return pFVar6;
                  }
                  pFVar2 = (FFieldClass *)this->_padding_;
                  if (pFVar8->Id == CASTCLASS_None) {
                    for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                      if (pFVar2 == pFVar8) {
                        bVar4 = true;
                        goto LAB_14946be60;
                      }
                    }
                    bVar4 = false;
                  }
                  else {
                    bVar4 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
                  }
LAB_14946be60:
                  if (bVar4) {
                    FProperty::GetNameCPP(this,&local_80);
                    ::FString::PrintfImpl(&local_100,L"%s: %d ");
                    iVar9 = iVar11;
                    if (local_100.Data.ArrayNum != 0) {
                      iVar9 = local_100.Data.ArrayNum + -1;
                    }
                    ::FString::AppendChars
                              (__return_storage_ptr__,
                               (wchar_t *)local_100.Data.AllocatorInstance.Data,iVar9);
                    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_100.Data.AllocatorInstance.Data);
                    }
                    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_80.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    pFVar8 = FBoolProperty::StaticClass();
                    if ((pFVar8 == (FFieldClass *)0x0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("FieldType",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                           ,0x2dd,L""), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      pFVar6 = (FString *)(*pcVar3)();
                      return pFVar6;
                    }
                    pFVar2 = (FFieldClass *)this->_padding_;
                    if (pFVar8->Id == CASTCLASS_None) {
                      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                        if (pFVar2 == pFVar8) {
                          bVar4 = true;
                          goto LAB_14946bf40;
                        }
                      }
                      bVar4 = false;
                    }
                    else {
                      bVar4 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
                    }
LAB_14946bf40:
                    if (bVar4) {
                      if (*(int *)param_1 == -1) {
                        pwVar10 = L"True";
                      }
                      else {
                        pwVar10 = L"Invalid";
                        if (*(int *)param_1 == 0) {
                          pwVar10 = L"False";
                        }
                      }
                      ::FString::FString(&local_e0,pwVar10);
                      FProperty::GetNameCPP(this,&local_70);
                      ::FString::PrintfImpl(&local_f0,L"%s: %s ");
                      iVar9 = iVar11;
                      if (local_f0.Data.ArrayNum != 0) {
                        iVar9 = local_f0.Data.ArrayNum + -1;
                      }
                      ::FString::AppendChars
                                (__return_storage_ptr__,
                                 (wchar_t *)local_f0.Data.AllocatorInstance.Data,iVar9);
                      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                      }
                      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_70.Data.AllocatorInstance.Data);
                      }
                      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                      }
                    }
                    else {
                      if ((*(uint *)(this->_padding_ + 0x18) >> 0x14 & 1) == 0) {
                        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("CastResult",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
                        if (bVar4) {
                          pcVar3 = (code *)swi(3);
                          pFVar6 = (FString *)(*pcVar3)();
                          return pFVar6;
                        }
                      }
                      else if (this != (FProperty *)0x0) {
                        ToString(local_50,param_1 + iVar9,(UObject *)this[1]._padding_);
                        FProperty::GetNameCPP(this,&local_60);
                        ::FString::PrintfImpl(&local_d0,L"%s: (%s) ");
                        iVar9 = iVar11;
                        if (local_d0.Data.ArrayNum != 0) {
                          iVar9 = local_d0.Data.ArrayNum + -1;
                        }
                        ::FString::AppendChars
                                  (__return_storage_ptr__,
                                   (wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar9);
                        if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                        }
                        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_60.Data.AllocatorInstance.Data);
                        }
                        if (local_50[0].Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
                        }
                        goto LAB_14946c127;
                      }
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("false",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraTypes.cpp"
                                         ,0x199,L"");
                      if (bVar4) {
                        pcVar3 = (code *)swi(3);
                        pFVar6 = (FString *)(*pcVar3)();
                        return pFVar6;
                      }
                      ::FString::AppendChars(__return_storage_ptr__,L"Unknown Type",0xc);
                    }
                  }
                }
              }
            }
LAB_14946c127:
            local_168.Field = (local_168.Field)->Next;
            TFieldIterator<FProperty>::IterateToNext(&local_168);
            this = (FProperty *)local_168.Field;
          }
        }
      }
    }
    else {
      pFVar6 = UEnum::GetNameStringByValue((UEnum *)param_2,&local_c0,(longlong)*(int *)param_1);
      if (__return_storage_ptr__ != pFVar6) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

