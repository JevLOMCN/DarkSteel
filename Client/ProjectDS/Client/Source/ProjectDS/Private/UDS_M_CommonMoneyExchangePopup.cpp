// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b50c310

UClass * __cdecl UDS_M_CommonMoneyExchangePopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonMoneyExchangePopup",
               &Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonMoneyExchangePopup,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonMoneyExchangePopup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonMoneyExchangePopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton;
}

// UDS_M_CommonMoneyExchangePopup @ 14b5100e0

UDS_M_CommonMoneyExchangePopup * __thiscall
UDS_M_CommonMoneyExchangePopup::UDS_M_CommonMoneyExchangePopup
          (UDS_M_CommonMoneyExchangePopup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonMoneyExchangePopup__6B_;
  *(undefined8 *)&this->ModelOwnedMoney = 0;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x48 = 0;
  *(undefined8 *)&this->ModelNeedMoney = 0;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x48 = 0;
  *(undefined8 *)&this->ModelExchangeMoney = 0;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x48 = 0;
  return this;
}

// UDS_M_CommonMoneyExchangePopup @ 14b5101d0

UDS_M_CommonMoneyExchangePopup * __thiscall
UDS_M_CommonMoneyExchangePopup::UDS_M_CommonMoneyExchangePopup
          (UDS_M_CommonMoneyExchangePopup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonMoneyExchangePopup__6B_;
  *(undefined8 *)&this->ModelOwnedMoney = 0;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelOwnedMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x48 = 0;
  *(undefined8 *)&this->ModelNeedMoney = 0;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelNeedMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelNeedMoney).field_0x48 = 0;
  *(undefined8 *)&this->ModelExchangeMoney = 0;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x8 = 0;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x20 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x28 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x34 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModelExchangeMoney).field_0x40 = 0;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x48 = 0;
  return this;
}

// ~UDS_M_CommonMoneyExchangePopup @ 14b512900

void __thiscall
UDS_M_CommonMoneyExchangePopup::~UDS_M_CommonMoneyExchangePopup
          (UDS_M_CommonMoneyExchangePopup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_CommonMoneyExchangePopup__6B_;
  *(undefined4 *)&(this->ModelExchangeMoney).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelExchangeMoney).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModelExchangeMoney);
  *(undefined4 *)&(this->ModelNeedMoney).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelNeedMoney).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModelNeedMoney);
  *(undefined4 *)&(this->ModelOwnedMoney).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelOwnedMoney).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModelOwnedMoney);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515240

UClass * __cdecl UDS_M_CommonMoneyExchangePopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonMoneyExchangePopup",
               &Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonMoneyExchangePopup,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonMoneyExchangePopup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonMoneyExchangePopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonMoneyExchangePopup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonMoneyExchangePopup @ 14b516bc0

void __cdecl
UDS_M_CommonMoneyExchangePopup::StaticRegisterNativesUDS_M_CommonMoneyExchangePopup(void)

{
  return;
}

// AddModel @ 14bce8390

void __thiscall
UDS_M_CommonMoneyExchangePopup::AddModel
          (UDS_M_CommonMoneyExchangePopup *this,EDS_MoneyExchangeIndex param_1,
          TObjectPtr<UDS_M_CommonAsset> param_2,TObjectPtr<UDS_M_CommonAsset> param_3,
          TObjectPtr<UDS_M_CommonAsset> param_4)

{
  TMap<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
  *this_00;
  TMap<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
  *this_01;
  int iVar1;
  TObjectPtr<UDS_M_CommonAsset>_u_0 *pTVar2;
  undefined1 *puVar3;
  TMap<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
  *this_02;
  EDS_MoneyExchangeIndex EVar4;
  ulonglong uVar5;
  TKeyInitializer<EDS_MoneyExchangeIndex_const_&> local_res8;
  EDS_MoneyExchangeIndex local_res10 [8];
  EDS_MoneyExchangeIndex *local_res18 [2];
  
  this_00 = &this->ModelOwnedMoney;
  uVar5 = (ulonglong)param_1;
  local_res10[0] = param_1;
  if (*(int *)&(this->ModelOwnedMoney).field_0x8 != *(int *)&(this->ModelOwnedMoney).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ModelOwnedMoney).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ModelOwnedMoney).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (*(int *)&(this->ModelOwnedMoney).field_0x48 - 1 & uVar5) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_MoneyExchangeIndex *)(*(longlong *)this_00 + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14bce841a;
        iVar1 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res18[0] = local_res10;
  TSet<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDS_MoneyExchangeIndex_const_&>_>
            (this_00,&local_res8,(bool *)local_res18);
  uVar5 = (ulonglong)local_res10[0];
LAB_14bce841a:
  this_01 = &this->ModelNeedMoney;
  if (*(int *)&(this->ModelNeedMoney).field_0x8 != *(int *)&(this->ModelNeedMoney).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ModelNeedMoney).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ModelNeedMoney).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (*(int *)&(this->ModelNeedMoney).field_0x48 - 1 & uVar5) * 4);
    if (iVar1 != -1) {
      do {
        if (*(char *)(*(longlong *)this_01 + (longlong)iVar1 * 0x18) == (char)uVar5)
        goto LAB_14bce848a;
        iVar1 = *(int *)(*(longlong *)this_01 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res18[0] = local_res10;
  TSet<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDS_MoneyExchangeIndex_const_&>_>
            (this_01,&local_res8,(bool *)local_res18);
  uVar5 = (ulonglong)local_res10[0];
LAB_14bce848a:
  this_02 = &this->ModelExchangeMoney;
  if (*(int *)&(this->ModelExchangeMoney).field_0x8 !=
      *(int *)&(this->ModelExchangeMoney).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ModelExchangeMoney).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ModelExchangeMoney).field_0x38;
    }
    iVar1 = *(int *)(puVar3 + (*(int *)&(this->ModelExchangeMoney).field_0x48 - 1 & uVar5) * 4);
    if (iVar1 != -1) {
      do {
        EVar4 = (EDS_MoneyExchangeIndex)uVar5;
        if (*(EDS_MoneyExchangeIndex *)(*(longlong *)this_02 + (longlong)iVar1 * 0x18) ==
            (EDS_MoneyExchangeIndex)uVar5) goto LAB_14bce84fa;
        iVar1 = *(int *)(*(longlong *)this_02 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res18[0] = local_res10;
  TSet<TTuple<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDS_MoneyExchangeIndex_const_&>_>
            (this_02,&local_res8,(bool *)local_res18);
  EVar4 = local_res10[0];
LAB_14bce84fa:
  pTVar2 = &TMapBase<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
            ::FindChecked(this_00,EVar4)->field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_2.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_2.field0_0x0);
  }
  *pTVar2 = *(TObjectPtr<UDS_M_CommonAsset>_u_0 *)param_2.field0_0x0;
  pTVar2 = &TMapBase<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
            ::FindChecked(this_01,local_res10[0])->field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_3.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_3.field0_0x0);
  }
  *pTVar2 = *(TObjectPtr<UDS_M_CommonAsset>_u_0 *)param_3.field0_0x0;
  pTVar2 = &TMapBase<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
            ::FindChecked(this_02,local_res10[0])->field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (*(UObject **)param_4.field0_0x0 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(*(UObject **)param_4.field0_0x0);
                    /* WARNING: Load size is inaccurate */
      *pTVar2 = *param_4.field0_0x0;
      return;
    }
    *pTVar2 = (TObjectPtr<UDS_M_CommonAsset>_u_0)0x0;
    return;
  }
                    /* WARNING: Load size is inaccurate */
  *pTVar2 = *param_4.field0_0x0;
  return;
}

// GetViewModelContext @ 14bcff6f0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonMoneyExchangePopup::GetViewModelContext
          (UDS_M_CommonMoneyExchangePopup *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x10e;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsVisible @ 14bd06920

bool __thiscall
UDS_M_CommonMoneyExchangePopup::IsVisible
          (UDS_M_CommonMoneyExchangePopup *this,EDS_MoneyExchangeIndex param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ModelOwnedMoney).field_0x8 != *(int *)&(this->ModelOwnedMoney).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ModelOwnedMoney).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ModelOwnedMoney).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + ((ulonglong)(*(int *)&(this->ModelOwnedMoney).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_MoneyExchangeIndex *)
             (*(longlong *)&this->ModelOwnedMoney + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14bd0698c;
        iVar1 = *(int *)(*(longlong *)&this->ModelOwnedMoney + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bd0698c:
  return iVar1 != -1;
}

// SetData @ 14bd1eea0

void __thiscall
UDS_M_CommonMoneyExchangePopup::SetData
          (UDS_M_CommonMoneyExchangePopup *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_98 [8];
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  int local_60;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_88 = 0;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14bd1ef3d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_60 = (int)lVar8;
    iStack_74 = local_60 + -1 + local_70;
    if (iVar3 < iStack_74) {
      iStack_74 = iVar3;
    }
  }
LAB_14bd1ef3d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_68 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_78 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_50.CurrentBitIndex = iStack_74;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iStack_74;
  TStack_50.BaseBitIndex = local_70;
  uStack_30 = CONCAT44(uStack_64,iStack_68);
  local_90 = param_1;
  local_80 = puVar1;
  iStack_6c = iStack_74;
  local_58 = param_1;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14bd1f040;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14bd1f040:
  while( true ) {
    pTVar6 = local_58;
    if (*(int *)&local_58->field_0x8 - *(int *)&local_58->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    if (((TStack_50.CurrentBitIndex == uVar11) &&
        (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_1);
  return;
}

