// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b51a9e0

UClass * __cdecl UDS_QuantityDataContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuantityDataContainer",
               &Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton,
               StaticRegisterNativesUDS_QuantityDataContainer,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuantityDataContainer>,
               InternalVTableHelperCtorCaller<UDS_QuantityDataContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton;
}

// UDS_QuantityDataContainer @ 14b522d30

UDS_QuantityDataContainer * __thiscall
UDS_QuantityDataContainer::UDS_QuantityDataContainer
          (UDS_QuantityDataContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuantityDataContainer__6B_;
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  return this;
}

// UDS_QuantityDataContainer @ 14b522d80

UDS_QuantityDataContainer * __thiscall
UDS_QuantityDataContainer::UDS_QuantityDataContainer
          (UDS_QuantityDataContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuantityDataContainer__6B_;
  *(undefined8 *)&this->QuantityDataMap = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->QuantityDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuantityDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuantityDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_QuantityDataContainer @ 14b5238a0

void __thiscall
UDS_QuantityDataContainer::~UDS_QuantityDataContainer(UDS_QuantityDataContainer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuantityDataContainer__6B_;
  *(undefined4 *)&(this->QuantityDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuantityDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuantityDataMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b527050

UClass * __cdecl UDS_QuantityDataContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuantityDataContainer",
               &Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton,
               StaticRegisterNativesUDS_QuantityDataContainer,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuantityDataContainer>,
               InternalVTableHelperCtorCaller<UDS_QuantityDataContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuantityDataContainer.InnerSingleton;
}

// StaticRegisterNativesUDS_QuantityDataContainer @ 14b527700

void __cdecl UDS_QuantityDataContainer::StaticRegisterNativesUDS_QuantityDataContainer(void)

{
  return;
}

// GetQuantityData @ 14bcfa230

TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> __thiscall
UDS_QuantityDataContainer::GetQuantityData
          (UDS_QuantityDataContainer *this,long64 param_1,EDS_InventoryType param_2)

{
  TMap<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
  *this_00;
  UDS_QuantityData *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_InventoryQuantityData *pUVar6;
  TObjectPtr<UDS_QuantityData> *pTVar7;
  TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> TVar8;
  FObjectPtr_u_0 FVar9;
  int7 in_register_00000081;
  undefined1 *puVar10;
  EDS_InventoryType in_R9B;
  longlong local_res18;
  undefined8 local_48;
  UDS_InventoryQuantityData *local_40;
  UDS_QuantityData *local_38;
  longlong *local_30;
  UDS_InventoryQuantityData **local_28;
  
  local_res18 = CONCAT71(in_register_00000081,param_2);
  this_00 = &this->QuantityDataMap;
  if (*(int *)&(this->QuantityDataMap).field_0x8 != *(int *)&(this->QuantityDataMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->QuantityDataMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->QuantityDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    (((longlong)in_register_00000081 >> 0x18) * 0x17 + local_res18 &
                    (ulonglong)(*(int *)&(this->QuantityDataMap).field_0x48 - 1)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == local_res18)
        goto LAB_14bcfa35d;
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UDS_InventoryQuantityData>(pUVar5);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UDS_InventoryQuantityData *)0x0) goto LAB_14bcfa3e7;
  }
  else {
    if (pUVar6 == (UDS_InventoryQuantityData *)0x0) {
LAB_14bcfa3e7:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7509389084536602468>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                         ,0x9c,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
        return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)TVar8.WeakPtr;
      }
      *(undefined8 *)param_1 = 0;
      FVar9.Handle = (UObject *)&local_48;
      local_48 = 0;
      goto LAB_14bcfa3be;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar6->_padding_ = local_res18;
  pUVar6->InventoryType = in_R9B;
  pUVar6->TradableQuantity = 0;
  pUVar6->UnTradableQuantity = 0;
  pUVar6->ModifiedTradableQuantity = 0;
  pUVar6->ModifiedUnTradableQuantity = 0;
  (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6,0xffffffff);
  local_40 = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_30 = &local_res18;
  local_28 = &local_40;
  TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<__int64_const_&,TObjectPtr<UDS_QuantityData>_&&>_>
            ((TSet<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>,FDefaultSetAllocator>
              *)this_00,
             (TPairInitializer<__int64_const_&,TObjectPtr<UDS_QuantityData>_&&> *)&stack0x00000008,
             (bool *)&local_30);
LAB_14bcfa35d:
  pTVar7 = TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
           ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
                          *)this_00,local_res18);
  pUVar1 = (pTVar7->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_QuantityData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_QuantityData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_38 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_QuantityData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FVar9.Handle = (UObject *)&local_38;
LAB_14bcfa3be:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)FVar9);
  return (TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// IsEmpty @ 14bd05980

bool __thiscall UDS_QuantityDataContainer::IsEmpty(UDS_QuantityDataContainer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar9 = *(int *)&(this->QuantityDataMap).field_0x28;
  puVar1 = &(this->QuantityDataMap).field_0x10;
  iVar13 = 0;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(this->QuantityDataMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bd05a1d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar15;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14bd05a1d:
  uVar12 = *(uint *)&(this->QuantityDataMap).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar13);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar15;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->QuantityDataMap).field_0x8 -
                       *(int *)&(this->QuantityDataMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->QuantityDataMap).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->QuantityDataMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bd05b20;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14bd05b20:
  while( true ) {
    if (*(int *)&(this->QuantityDataMap).field_0x8 - *(int *)&(this->QuantityDataMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_QuantityData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar12) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar3 = *(UObject **)
              (*(longlong *)&this->QuantityDataMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    iVar9 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
    if (0 < iVar9) {
      return false;
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return true;
}

