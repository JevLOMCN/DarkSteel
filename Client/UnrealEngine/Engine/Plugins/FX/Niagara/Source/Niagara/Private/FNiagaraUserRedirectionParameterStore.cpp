// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// ~FNiagaraUserRedirectionParameterStore @ 1490262a0

void __thiscall
FNiagaraUserRedirectionParameterStore::~FNiagaraUserRedirectionParameterStore
          (FNiagaraUserRedirectionParameterStore *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UserParameterRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserParameterRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserParameterRedirects);
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)this);
  return;
}

// StaticStruct @ 149413540

UScriptStruct * __cdecl FNiagaraUserRedirectionParameterStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore,
                         (UObject *)pUVar1,L"NiagaraUserRedirectionParameterStore");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.OuterSingleton;
}

// FNiagaraUserRedirectionParameterStore @ 149427990

FNiagaraUserRedirectionParameterStore * __thiscall
FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraParameterStore *param_1)

{
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)this);
  this->_padding_ = (longlong)&___7FNiagaraUserRedirectionParameterStore__6B_;
  *(undefined8 *)&this->UserParameterRedirects = 0;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x34 = 0;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x48 = 0;
  FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this,param_1);
  RecreateRedirections(this);
  return this;
}

// FNiagaraUserRedirectionParameterStore @ 149427a20

FNiagaraUserRedirectionParameterStore * __thiscall
FNiagaraUserRedirectionParameterStore::FNiagaraUserRedirectionParameterStore
          (FNiagaraUserRedirectionParameterStore *this)

{
  FNiagaraParameterStore::FNiagaraParameterStore((FNiagaraParameterStore *)this);
  this->_padding_ = (longlong)&___7FNiagaraUserRedirectionParameterStore__6B_;
  *(undefined8 *)&this->UserParameterRedirects = 0;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x8 = 0;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x20 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x28 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x34 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UserParameterRedirects).field_0x40 = 0;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x48 = 0;
  return this;
}

// operator= @ 14942d330

FNiagaraUserRedirectionParameterStore * __thiscall
FNiagaraUserRedirectionParameterStore::operator=
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraParameterStore *param_1)

{
  FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this,param_1);
  RecreateRedirections(this);
  return this;
}

// AddParameter @ 149430980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FNiagaraUserRedirectionParameterStore::AddParameter
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariable *param_1,bool param_2,
          bool param_3,int *param_4)

{
  FName FVar1;
  bool bVar2;
  void *pvVar3;
  FName *pFVar4;
  FNiagaraTypeDefinition *pFVar5;
  undefined1 auStackY_938 [32];
  undefined1 local_908 [8];
  FNiagaraTypeDefinitionHandle local_900 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_8f8;
  FName local_8e8;
  undefined1 *local_8e0;
  FScriptContainerElement *local_8d8;
  int local_8d0;
  int local_8cc;
  undefined1 local_8c8 [24];
  void *local_8b0;
  TStringBuilderBase<wchar_t> local_898;
  wchar_t local_878 [1035];
  wchar_t local_62 [5];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_938;
  local_908 = (undefined1  [8])0x0;
  local_900[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_900,&FNiagaraTypeDefinition::Vec4Def);
  local_8f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8f8.ArrayNum = 0;
  local_8f8.ArrayMax = 0;
  bVar2 = IsUserParameter((FNiagaraVariableBase *)param_1);
  if (bVar2) {
    local_908 = (undefined1  [8])param_1->_padding_;
    local_900[0].RegisteredTypeIndex = (int)param_1->_padding_;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=(&local_8f8,&param_1->VarData);
  }
  else {
    local_898.Base = local_878;
    local_898.bIsDynamic = false;
    local_898.bIsExternal = false;
    local_898.CurPos = local_878;
    local_898.End = local_62;
    ::FName::AppendString(&FNiagaraConstants::UserNamespace,&local_898);
    if (local_898.End < local_898.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_898,1);
    }
    pvVar3 = FGenericPlatformString::Memcpy(local_898.CurPos,L".",2);
    local_898.CurPos = (wchar_t *)((longlong)pvVar3 + 2);
    ::FName::AppendString((FName *)param_1,&local_898);
    pFVar4 = ::FName::FName((FName *)local_8c8,
                            (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1),
                            local_898.Base,FNAME_Add);
    FVar1 = *pFVar4;
    pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&param_1->_padding_);
    local_8e8 = FVar1;
    local_900[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register((FNiagaraTypeDefinitionHandle *)&local_8e0,pFVar5);
    local_8e0 = (undefined1 *)CONCAT44(local_8e0._4_4_,local_900[0].RegisteredTypeIndex);
    local_8d8 = (FScriptContainerElement *)0x0;
    local_8d0 = 0;
    local_8cc = 0;
    local_908._0_4_ = local_8e8.ComparisonIndex.Value;
    local_908._4_4_ = local_8e8.Number;
    if (local_8f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.AllocatorInstance.Data);
    }
    local_8f8.ArrayMax = local_8cc;
    local_8f8.ArrayNum = local_8d0;
    local_8f8.AllocatorInstance.Data = local_8d8;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
  }
  local_8e8 = (FName)GetUserRedirection(this,(FNiagaraVariable *)(local_8c8 + 8),
                                        (FNiagaraVariable *)local_908);
  local_8e0 = local_908;
  TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNiagaraVariable_&&,FNiagaraVariable_const_&>_>
            ((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
              *)&this->UserParameterRedirects,
             (TPairInitializer<FNiagaraVariable_&&,FNiagaraVariable_const_&> *)local_8c8,
             (bool *)&local_8e8);
  if (local_8b0 != (void *)0x0) {
    FMemory::Free(local_8b0);
  }
  bVar2 = FNiagaraParameterStore::AddParameter
                    ((FNiagaraParameterStore *)this,(FNiagaraVariable *)local_908,param_2,param_3,
                     param_4);
  if (local_8f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.AllocatorInstance.Data);
  }
  return bVar2;
}

// Empty @ 149441780

void __thiscall
FNiagaraUserRedirectionParameterStore::Empty
          (FNiagaraUserRedirectionParameterStore *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  *this_00;
  
  FNiagaraParameterStore::Empty((FNiagaraParameterStore *)this,param_1);
  this_00 = &this->UserParameterRedirects;
  bVar3 = 1 < *(int *)&(this->UserParameterRedirects).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->UserParameterRedirects).field_0x8);
  puVar1 = &(this->UserParameterRedirects).field_0xc;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->UserParameterRedirects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x34 = 0;
  iVar2 = *(int *)&(this->UserParameterRedirects).field_0x2c;
  *(undefined4 *)&(this->UserParameterRedirects).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->UserParameterRedirects).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->UserParameterRedirects).field_0x10,0)
    ;
  }
  if (bVar3) {
    *(undefined4 *)&(this->UserParameterRedirects).field_0x48 = 1;
    TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// FindParameterOffset @ 149445020

int * __thiscall
FNiagaraUserRedirectionParameterStore::FindParameterOffset
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariableBase *param_1,bool param_2)

{
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  *pTVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  FNiagaraVariableBase *pFVar8;
  int iVar9;
  uint uVar10;
  FNiagaraVariableBase *pFVar11;
  FNiagaraVariableBase *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 local_88 [12];
  uint uStack_7c;
  void *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  pFVar11 = (FNiagaraVariableBase *)0x0;
  uVar10 = 0;
  pTVar1 = &this->UserParameterRedirects;
  if (param_2) {
    local_78 = &(this->UserParameterRedirects).field_0x10;
    uStack_54 = 1;
    uVar4 = *(uint *)&(this->UserParameterRedirects).field_0x28;
    pFVar8 = pFVar11;
    local_40 = uVar10;
    if (uVar4 != 0) {
      puVar14 = *(uint **)&(this->UserParameterRedirects).field_0x20;
      pFVar8 = (FNiagaraVariableBase *)(ulonglong)uVar4;
      if (puVar14 == (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar6 = *puVar14;
      pFVar12 = pFVar11;
      local_40 = 0;
      uVar10 = 0;
      while (uVar6 == 0) {
        iVar9 = (int)pFVar11;
        local_40 = (int)pFVar12 + 0x20;
        pFVar12 = (FNiagaraVariableBase *)(ulonglong)local_40;
        uVar10 = iVar9 + 1;
        pFVar11 = (FNiagaraVariableBase *)(ulonglong)uVar10;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_1494450db;
        uVar6 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      uVar3 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar6 = (local_40 - 1) + (int)lVar5;
      if ((int)uVar4 < (int)uVar6) {
        uVar6 = uVar4;
      }
      pFVar8 = (FNiagaraVariableBase *)(ulonglong)uVar6;
    }
LAB_1494450db:
    uStack_48 = 0xffffffff;
    uStack_44 = (uint)pFVar8;
    uStack_70 = 0xffffffff;
    uStack_3c = uStack_6c;
    local_68 = CONCAT44(uStack_6c,local_40);
    local_88._0_8_ = pTVar1;
    local_60 = pTVar1;
    uStack_58 = uVar10;
    local_50 = local_78;
    local_88._8_4_ = uVar10;
    uStack_7c = uStack_54;
    uStack_6c = uStack_44;
    if ((int)uStack_44 < *(int *)&(this->UserParameterRedirects).field_0x28) {
      do {
        pFVar2 = (FName *)(*(longlong *)local_88._0_8_ + (longlong)(int)pFVar8 * 0x48);
        if (*pFVar2 == param_1->Name) {
          param_1 = (FNiagaraVariableBase *)(pFVar2 + 4);
          goto LAB_14944522f;
        }
        uStack_70 = uStack_70 & ~uStack_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
        pFVar8 = (FNiagaraVariableBase *)(ulonglong)uStack_6c;
      } while ((int)uStack_6c < *(int *)((longlong)local_78 + 0x18));
    }
  }
  else {
    local_88._0_8_ = param_1->Name;
    local_78 = (void *)0x0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88._8_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
    uVar10 = ::GetTypeHash((FNiagaraVariableBase *)local_88);
    if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
        *(int *)&(this->UserParameterRedirects).field_0x34) {
      puVar13 = *(undefined1 **)&(this->UserParameterRedirects).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->UserParameterRedirects).field_0x38;
      }
      uVar10 = *(uint *)(puVar13 +
                        (ulonglong)
                        (*(int *)&(this->UserParameterRedirects).field_0x48 - 1U & uVar10) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar8 = (FNiagaraVariableBase *)(*(longlong *)pTVar1 + (longlong)(int)uVar10 * 0x48);
          if ((*(FName *)(*(longlong *)pTVar1 + (longlong)(int)uVar10 * 0x48) ==
               (FName)local_88._0_8_) &&
             ((pFVar8->TypeDefHandle).RegisteredTypeIndex == local_88._8_4_)) {
            if (uVar10 != 0xffffffff) goto LAB_14944520c;
            break;
          }
          uVar10 = pFVar8[5].Name.Number;
        } while (uVar10 != 0xffffffff);
      }
    }
    pFVar8 = pFVar11;
LAB_14944520c:
    pFVar12 = (FNiagaraVariableBase *)&pFVar8[2].TypeDefHandle;
    if (pFVar8 == (FNiagaraVariableBase *)0x0) {
      pFVar12 = pFVar11;
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if (pFVar12 != (FNiagaraVariableBase *)0x0) {
      param_1 = pFVar12;
    }
LAB_14944522f:
    param_2 = false;
  }
  piVar7 = FNiagaraParameterStore::FindParameterOffset
                     ((FNiagaraParameterStore *)this,param_1,param_2);
  return piVar7;
}

// FindParameterVariable @ 149445260

FNiagaraVariableWithOffset * __thiscall
FNiagaraUserRedirectionParameterStore::FindParameterVariable
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariable *param_1,bool param_2)

{
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  *this_00;
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  FNiagaraVariable *pFVar5;
  FNiagaraVariableWithOffset *pFVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  this_00 = &this->UserParameterRedirects;
  if (param_2) {
    TStack_70.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->UserParameterRedirects).field_0x10;
    uStack_44 = 1;
    iVar8 = *(int *)&(this->UserParameterRedirects).field_0x28;
    iStack_48 = 0;
    local_30 = iStack_48;
    iStack_34 = 0;
    if (iVar8 != 0) {
      puVar9 = *(uint **)&(this->UserParameterRedirects).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)TStack_70.Array;
      }
      uVar3 = *puVar9;
      local_30 = 0;
      iStack_48 = 0;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_48;
        local_30 = local_30 + 0x20;
        iStack_48 = iStack_48 + 1;
        iStack_34 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14944531d;
        uVar3 = puVar9[lVar7 + 1];
      }
      uStack_44 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uStack_44 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_34 = local_30 + -1 + (int)lVar7;
      if (iVar8 < iStack_34) {
        iStack_34 = iVar8;
      }
    }
LAB_14944531d:
    TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
    uStack_38 = 0xffffffff;
    uVar4._4_4_ = iStack_34;
    uVar4._0_4_ = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    TStack_70._16_8_ = uVar4;
    local_50 = this_00;
    local_40 = (undefined1 *)TStack_70.Array;
    iVar8 = iStack_34;
    if (iStack_34 < *(int *)&(this->UserParameterRedirects).field_0x28) {
      do {
        plVar1 = (longlong *)(*(longlong *)this_00 + (longlong)iVar8 * 0x48);
        if (*plVar1 == param_1->_padding_) {
          param_1 = (FNiagaraVariable *)(plVar1 + 4);
          goto LAB_1494453f0;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        iVar8 = TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
  }
  else {
    pFVar5 = TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
             ::Find((TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
                     *)this_00,param_1);
    if (pFVar5 != (FNiagaraVariable *)0x0) {
      param_1 = pFVar5;
    }
LAB_1494453f0:
    param_2 = false;
  }
  pFVar6 = FNiagaraParameterStore::FindParameterVariable
                     ((FNiagaraParameterStore *)this,param_1,param_2);
  return pFVar6;
}

// GetPositionParameterValue @ 14944b1e0

TVector<double> * __thiscall
FNiagaraUserRedirectionParameterStore::GetPositionParameterValue
          (FNiagaraUserRedirectionParameterStore *this,FName *param_1)

{
  longlong lVar1;
  uint uVar2;
  TVector<double> *pTVar3;
  FName *pFVar4;
  undefined1 *puVar5;
  int iVar6;
  FNiagaraVariableBase local_28;
  void *local_18;
  undefined8 local_10;
  
  local_28.Name = *param_1;
  local_28.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  local_18 = (void *)0x0;
  local_10 = 0;
  uVar2 = ::GetTypeHash(&local_28);
  if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
      *(int *)&(this->UserParameterRedirects).field_0x34) {
    puVar5 = *(undefined1 **)&(this->UserParameterRedirects).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->UserParameterRedirects).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->UserParameterRedirects).field_0x48 - 1U & uVar2) * 4)
    ;
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->UserParameterRedirects + (longlong)iVar6 * 0x48;
        if ((*(FName *)(*(longlong *)&this->UserParameterRedirects + (longlong)iVar6 * 0x48) ==
             local_28.Name) && (*(int *)(lVar1 + 8) == local_28.TypeDefHandle.RegisteredTypeIndex))
        {
          if (iVar6 != -1) {
            pFVar4 = (FName *)(lVar1 + 0x20);
            if (lVar1 == 0) {
              pFVar4 = (FName *)0x0;
            }
            if (pFVar4 != (FName *)0x0) goto LAB_14944b2bc;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x40);
      } while (iVar6 != -1);
    }
  }
  pFVar4 = param_1;
LAB_14944b2bc:
  pTVar3 = FNiagaraParameterStore::GetPositionParameterValue((FNiagaraParameterStore *)this,pFVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return pTVar3;
}

// GetUserRedirection @ 14944f560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNiagaraVariable * __thiscall
FNiagaraUserRedirectionParameterStore::GetUserRedirection
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariable *__return_storage_ptr__,
          FNiagaraVariable *param_1)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  bool bVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_8e8 [32];
  ForAnyElementType local_898;
  undefined8 local_890;
  FName local_888 [2];
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  bVar2 = IsUserParameter((FNiagaraVariableBase *)param_1);
  if (bVar2) {
    lVar1 = param_1->_padding_;
    iVar4 = (param_1->VarData).ArrayNum;
    _Src = (param_1->VarData).AllocatorInstance.Data;
    local_898.Data = (FScriptContainerElement *)0x0;
    local_890 = CONCAT44(local_890._4_4_,iVar4);
    if (iVar4 == 0) {
      local_890 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,0,&local_898,iVar4,(int *)((longlong)&local_890 + 4));
      memcpy(local_898.Data,_Src,(longlong)iVar4);
    }
    local_878.Base = local_858;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    local_878.CurPos = local_858;
    local_878.End = local_42;
    ::FName::ToString((FName *)param_1,&local_878);
    iVar6 = (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1);
    iVar4 = iVar6;
    if (iVar6 + -5 < iVar6) {
      iVar4 = iVar6 + -5;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    pFVar3 = ::FName::FName(local_888,iVar5,local_878.Base + ((longlong)iVar6 - (longlong)iVar5),
                            FNAME_Add);
    __return_storage_ptr__->_padding_ = (longlong)*pFVar3;
    *(int *)&__return_storage_ptr__->_padding_ = (int)lVar1;
    (__return_storage_ptr__->VarData).AllocatorInstance.Data = local_898.Data;
    (__return_storage_ptr__->VarData).ArrayNum = (int)local_890;
    (__return_storage_ptr__->VarData).ArrayMax = local_890._4_4_;
    local_890 = 0;
    local_898.Data = (FScriptContainerElement *)0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
    if (local_898.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_898.Data);
    }
  }
  else {
    FNiagaraVariable::FNiagaraVariable(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// InitFromSource @ 149451ba0

void __thiscall
FNiagaraUserRedirectionParameterStore::InitFromSource
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraParameterStore *param_1,bool param_2)

{
  FNiagaraParameterStore::InitFromSource((FNiagaraParameterStore *)this,param_1,param_2);
  RecreateRedirections(this);
  return;
}

// IsUserParameter @ 1494544f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FNiagaraUserRedirectionParameterStore::IsUserParameter(FNiagaraVariableBase *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_868[0] = param_1->Name;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  ::FName::AppendString(local_868,&local_858);
  iVar1 = (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if ((iVar3 == 5) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(L"User.",local_858.Base,5), iVar1 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return bVar2;
}

// MakeUserVariable @ 149454ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FNiagaraUserRedirectionParameterStore::MakeUserVariable(FNiagaraVariableBase *param_1)

{
  bool bVar1;
  void *pvVar2;
  FName *pFVar3;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  bVar1 = IsUserParameter(param_1);
  if (!bVar1) {
    local_858.Base = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    pvVar2 = FGenericPlatformString::Memcpy(local_838,L"User.",10);
    local_858.CurPos = (wchar_t *)((longlong)pvVar2 + 10);
    ::FName::AppendString(&param_1->Name,&local_858);
    pFVar3 = ::FName::FName(local_868,
                            (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1),
                            local_858.Base,FNAME_Add);
    param_1->Name = *pFVar3;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  }
  return;
}

// RecreateRedirections @ 1494617e0

void __thiscall
FNiagaraUserRedirectionParameterStore::RecreateRedirections
          (FNiagaraUserRedirectionParameterStore *this)

{
  bool bVar1;
  FName *pFVar2;
  FName *local_78;
  int local_70;
  FNiagaraVariable *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  ForAnyElementType local_48;
  undefined8 local_40;
  FNiagaraVariable local_38;
  
  TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
           *)&this->UserParameterRedirects);
  (**(code **)this->_padding_)(this,&local_78);
  for (pFVar2 = local_78; pFVar2 != local_78 + (longlong)local_70 * 5; pFVar2 = pFVar2 + 5) {
    local_58._0_8_ = *pFVar2;
    local_58._8_4_ = pFVar2[1].ComparisonIndex.Value;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    bVar1 = IsUserParameter((FNiagaraVariableBase *)local_58);
    if (bVar1) {
      local_68 = GetUserRedirection(this,&local_38,(FNiagaraVariable *)local_58);
      local_60 = local_58;
      TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNiagaraVariable_&&,FNiagaraVariable_const_&>_>
                ((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
                  *)&this->UserParameterRedirects,
                 (TPairInitializer<FNiagaraVariable_&&,FNiagaraVariable_const_&> *)&stack0x00000008,
                 (bool *)&local_68);
      if (local_38.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.VarData.AllocatorInstance.Data);
      }
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// RedirectUserVariable @ 1494618f0

bool __thiscall
FNiagaraUserRedirectionParameterStore::RedirectUserVariable
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariableBase *param_1)

{
  bool bVar1;
  uint uVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 *puVar5;
  FNiagaraVariableBase local_28;
  void *local_18;
  undefined8 local_10;
  
  local_28.Name = param_1->Name;
  local_28.TypeDefHandle.RegisteredTypeIndex = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_18 = (void *)0x0;
  local_10 = 0;
  uVar2 = ::GetTypeHash(&local_28);
  if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
      *(int *)&(this->UserParameterRedirects).field_0x34) {
    puVar5 = *(undefined1 **)&(this->UserParameterRedirects).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->UserParameterRedirects).field_0x38;
    }
    uVar2 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->UserParameterRedirects).field_0x48 - 1U & uVar2) * 4
                     );
    if (uVar2 != 0xffffffff) {
      do {
        pFVar3 = (FName *)(*(longlong *)&this->UserParameterRedirects + (longlong)(int)uVar2 * 0x48)
        ;
        if ((*(FName *)(*(longlong *)&this->UserParameterRedirects + (longlong)(int)uVar2 * 0x48) ==
             local_28.Name) &&
           (pFVar3[1].ComparisonIndex.Value == local_28.TypeDefHandle.RegisteredTypeIndex)) {
          if (uVar2 != 0xffffffff) goto LAB_1494619ac;
          break;
        }
        uVar2 = pFVar3[8].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar3 = (FName *)0x0;
LAB_1494619ac:
  pFVar4 = pFVar3 + 4;
  if (pFVar3 == (FName *)0x0) {
    pFVar4 = (FName *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (pFVar4 == (FName *)0x0) {
    bVar1 = IsUserParameter(param_1);
    return bVar1;
  }
  uVar2 = pFVar4[1].ComparisonIndex.Value;
  param_1->Name = *pFVar4;
  (param_1->TypeDefHandle).RegisteredTypeIndex = uVar2;
  return true;
}

// RemoveParameter @ 149463880

bool __thiscall
FNiagaraUserRedirectionParameterStore::RemoveParameter
          (FNiagaraUserRedirectionParameterStore *this,FNiagaraVariableBase *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  FNiagaraVariable *pFVar4;
  FNiagaraVariableBase *pFVar5;
  undefined1 *puVar6;
  FNiagaraVariableBase *pFVar7;
  undefined1 local_48 [16];
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_48._0_8_ = param_1->Name;
  local_48._8_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  uVar3 = ::GetTypeHash((FNiagaraVariableBase *)local_48);
  if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
      *(int *)&(this->UserParameterRedirects).field_0x34) {
    puVar6 = *(undefined1 **)&(this->UserParameterRedirects).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->UserParameterRedirects).field_0x38;
    }
    uVar3 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->UserParameterRedirects).field_0x48 - 1U & uVar3) * 4
                     );
    if (uVar3 != 0xffffffff) {
      lVar1 = *(longlong *)&(this->UserParameterRedirects).field_0x0;
      do {
        pFVar5 = (FNiagaraVariableBase *)(lVar1 + (longlong)(int)uVar3 * 0x48);
        if ((*(FName *)(lVar1 + (longlong)(int)uVar3 * 0x48) == (FName)local_48._0_8_) &&
           ((pFVar5->TypeDefHandle).RegisteredTypeIndex == local_48._8_4_)) {
          if (uVar3 != 0xffffffff) goto LAB_14946393c;
          break;
        }
        uVar3 = pFVar5[5].Name.Number;
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar5 = (FNiagaraVariableBase *)0x0;
LAB_14946393c:
  pFVar7 = (FNiagaraVariableBase *)&pFVar5[2].TypeDefHandle;
  if (pFVar5 == (FNiagaraVariableBase *)0x0) {
    pFVar7 = (FNiagaraVariableBase *)0x0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (pFVar7 != (FNiagaraVariableBase *)0x0) {
    param_1 = pFVar7;
  }
  local_28._0_8_ = param_1->Name;
  local_28._8_4_ = (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  pFVar4 = GetUserRedirection(this,(FNiagaraVariable *)local_48,(FNiagaraVariable *)local_28);
  if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
      *(int *)&(this->UserParameterRedirects).field_0x34) {
    uVar3 = ::GetTypeHash((FNiagaraVariableBase *)pFVar4);
    TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
    ::RemoveImpl<FNiagaraVariable>
              ((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
                *)&this->UserParameterRedirects,uVar3,pFVar4);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  bVar2 = FNiagaraParameterStore::RemoveParameter
                    ((FNiagaraParameterStore *)this,(FNiagaraVariableBase *)local_28);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return bVar2;
}

// Reset @ 149463fa0

void __thiscall
FNiagaraUserRedirectionParameterStore::Reset
          (FNiagaraUserRedirectionParameterStore *this,bool param_1)

{
  FNiagaraParameterStore::Reset((FNiagaraParameterStore *)this,param_1);
  TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNiagaraVariable,FNiagaraVariable>,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>,FDefaultSetAllocator>
           *)&this->UserParameterRedirects);
  return;
}

// SanityCheckData @ 149464490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraUserRedirectionParameterStore::SanityCheckData
          (FNiagaraUserRedirectionParameterStore *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  UObject *pUVar3;
  FNiagaraVariable *pFVar4;
  bool bVar5;
  ForAnyElementType this_00;
  undefined4 local_res8 [2];
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = false;
  local_res8[0] = 0;
  FNiagaraParameterStore::SanityCheckData((FNiagaraParameterStore *)this,param_1);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FNiagaraVariable,FNiagaraVariable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariable,FNiagaraVariable,0>_>
              *)&this->UserParameterRedirects,&local_48);
  iVar1 = local_48.ArrayNum;
  pFVar4 = (FNiagaraVariable *)
           (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x20);
  this_00.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraVariable,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FNiagaraVariable *)this_00.Data == pFVar4) break;
    piVar2 = (int *)(**(code **)(this->_padding_ + 0x58))(this,this_00.Data);
    if (((piVar2 == (int *)0x0) || (*piVar2 == -1)) && (4 < (byte)LogNiagara._0_1_)) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar3 != (UObject *)0x0) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        bVar5 = true;
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar3,&local_28,(UObject *)0x0);
      }
      ::FName::ToString((FName *)this_00.Data,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    this_00.Data = this_00.Data + 0x20;
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FNiagaraVariable *)local_48.AllocatorInstance.Data != (FNiagaraVariable *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// SerializeFromMismatchedTag @ 149465010

bool __thiscall
FNiagaraUserRedirectionParameterStore::SerializeFromMismatchedTag
          (FNiagaraUserRedirectionParameterStore *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  bool bVar1;
  UScriptStruct *this_00;
  FPropertyTypeName local_res10 [2];
  FNiagaraParameterStore local_98;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&StoreDataName,"NiagaraParameterStore");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  bVar1 = UE::FPropertyTypeName::IsStruct(local_res10,StoreDataName);
  if (bVar1) {
    FNiagaraParameterStore::FNiagaraParameterStore(&local_98);
    this_00 = FNiagaraParameterStore::StaticStruct();
    UScriptStruct::SerializeItem(this_00,param_2,&local_98,(void *)0x0);
    FNiagaraParameterStore::PostLoad(&local_98,(UObject *)0x0);
    FNiagaraParameterStore::operator=((FNiagaraParameterStore *)this,&local_98);
    RecreateRedirections(this);
    FNiagaraParameterStore::~FNiagaraParameterStore(&local_98);
  }
  return bVar1;
}

// SetPositionParameterValue @ 1494656e0

bool __thiscall
FNiagaraUserRedirectionParameterStore::SetPositionParameterValue
          (FNiagaraUserRedirectionParameterStore *this,TVector<double> *param_1,FName *param_2,
          bool param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  FName *pFVar5;
  int iVar6;
  FNiagaraVariableBase local_28;
  void *local_18;
  undefined8 local_10;
  
  local_28.Name = *param_2;
  local_28.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  local_18 = (void *)0x0;
  local_10 = 0;
  uVar3 = ::GetTypeHash(&local_28);
  if (*(int *)&(this->UserParameterRedirects).field_0x8 !=
      *(int *)&(this->UserParameterRedirects).field_0x34) {
    puVar4 = *(undefined1 **)&(this->UserParameterRedirects).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->UserParameterRedirects).field_0x38;
    }
    iVar6 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->UserParameterRedirects).field_0x48 - 1U & uVar3) * 4)
    ;
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->UserParameterRedirects + (longlong)iVar6 * 0x48;
        if ((*(FName *)(*(longlong *)&this->UserParameterRedirects + (longlong)iVar6 * 0x48) ==
             local_28.Name) && (*(int *)(lVar1 + 8) == local_28.TypeDefHandle.RegisteredTypeIndex))
        {
          if (iVar6 != -1) {
            pFVar5 = (FName *)(lVar1 + 0x20);
            if (lVar1 == 0) {
              pFVar5 = (FName *)0x0;
            }
            if (pFVar5 != (FName *)0x0) goto LAB_1494657cc;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x40);
      } while (iVar6 != -1);
    }
  }
  pFVar5 = param_2;
LAB_1494657cc:
  bVar2 = FNiagaraParameterStore::SetPositionParameterValue
                    ((FNiagaraParameterStore *)this,param_1,pFVar5,param_3);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar2;
}

