// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b519380

UClass * __cdecl UDS_M_ItemListByInventory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemListByInventory",
               &Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemListByInventory,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemListByInventory>,
               InternalVTableHelperCtorCaller<UDS_M_ItemListByInventory>,local_res8,
               UDS_M_ItemList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton;
}

// UDS_M_ItemListByInventory @ 14b521d90

UDS_M_ItemListByInventory * __thiscall
UDS_M_ItemListByInventory::UDS_M_ItemListByInventory
          (UDS_M_ItemListByInventory *this,FVTableHelper *param_1)

{
  UDS_M_ItemList::UDS_M_ItemList((UDS_M_ItemList *)this,param_1);
  *(undefined ***)this = &___7UDS_M_ItemListByInventory__6B_;
  return this;
}

// UDS_M_ItemListByInventory @ 14b521dc0

UDS_M_ItemListByInventory * __thiscall
UDS_M_ItemListByInventory::UDS_M_ItemListByInventory
          (UDS_M_ItemListByInventory *this,FObjectInitializer *param_1)

{
  UDS_M_ItemList::UDS_M_ItemList((UDS_M_ItemList *)this,param_1);
  *(undefined ***)this = &___7UDS_M_ItemListByInventory__6B_;
  return this;
}

// ~UDS_M_ItemListByInventory @ 14b523400

void __thiscall
UDS_M_ItemListByInventory::~UDS_M_ItemListByInventory(UDS_M_ItemListByInventory *this)

{
  *(undefined ***)this = &___7UDS_M_ItemListByInventory__6B_;
  UDS_M_ItemList::~UDS_M_ItemList((UDS_M_ItemList *)this);
  return;
}

// GetPrivateStaticClass @ 14b526160

UClass * __cdecl UDS_M_ItemListByInventory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemListByInventory",
               &Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemListByInventory,0x2a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_M_ItemListByInventory>,
               InternalVTableHelperCtorCaller<UDS_M_ItemListByInventory>,local_res8,
               UDS_M_ItemList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemListByInventory.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemListByInventory @ 14b527500

void __cdecl UDS_M_ItemListByInventory::StaticRegisterNativesUDS_M_ItemListByInventory(void)

{
  return;
}

// GenerateItemDataList @ 14bcf3d60

void __thiscall UDS_M_ItemListByInventory::GenerateItemDataList(UDS_M_ItemListByInventory *this)

{
  (**(code **)(*(longlong *)this + 0x330))();
  (**(code **)(*(longlong *)this + 0x350))(this,0);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemListData>
            ((FDS_DataContainer *)&this->field_0x40,Generation,false);
  this->field_0xe0 = 1;
  return;
}

// GenerateItemModel @ 14bcf4fe0

void __thiscall
UDS_M_ItemListByInventory::GenerateItemModel
          (UDS_M_ItemListByInventory *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  UDS_ModelBase *pUVar2;
  void *_Src;
  code *pcVar3;
  ForAnyElementType FVar4;
  EDS_InventoryType EVar5;
  bool bVar6;
  ulonglong uVar7;
  UObject *pUVar8;
  int *piVar9;
  int *piVar10;
  TObjectPtr<UDS_M_ItemImplBase> TVar11;
  UDS_M_ItemImplBase *this_00;
  UDS_M_ItemImplInventorySlot *this_01;
  UClass *pUVar12;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar13;
  atomic<unsigned_char> *paVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FWeakObjectPtr *pFVar19;
  int iVar20;
  int iVar21;
  EDS_InventoryType local_res18 [8];
  EDS_InventoryType local_res20 [8];
  undefined1 local_98;
  EDS_ItemSlotStateType local_97;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_80;
  uint local_70;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  UDS_ObjectPool *local_58;
  UDS_ModelBase *local_50 [3];
  
  local_97 = UDS_M_ItemList::GetSlotType((UDS_M_ItemList *)this);
  UDS_M_ItemList::GetItemModelPool((UDS_M_ItemList *)this,(EDS_ItemSlotStateType)&local_58);
  if (local_58 == (UDS_ObjectPool *)0x0) {
    pFVar15 = (param_1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
      return;
    }
  }
  else {
    EVar5 = FDS_DataContainer::GetData<enum_EDS_InventoryType,enum_EDS_ItemListData>
                      ((FDS_DataContainer *)&this->field_0x40,InventoryType);
    pFVar19 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
    local_70 = param_1->ArrayNum;
    uVar7 = (ulonglong)(int)local_70;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)(pFVar19 + uVar7);
    while( true ) {
      FVar4.Data = local_80.AllocatorInstance.Data;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)pFVar19;
      if (param_1->ArrayNum != (int)uVar7) {
        local_98 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_98);
      }
      if (pFVar19 == (FWeakObjectPtr *)FVar4.Data) break;
      local_88 = *pFVar19;
      pUVar8 = FWeakObjectPtr::Get(&local_88);
      local_res18[0] = EVar5;
      piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar8[10].field_0x18,(uint)EVar5,local_res18);
      piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar8[8].field_0x18,(uint)local_res18[0],local_res18);
      iVar17 = *piVar9 + *piVar10;
      pUVar8 = FWeakObjectPtr::Get(&local_88);
      iVar21 = 0;
      iVar20 = *(int *)&pUVar8[0x15].field_0x4;
      pUVar8 = FWeakObjectPtr::Get(&local_88);
      local_res20[0] = EVar5;
      piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar8[0xc].field_0x18,(uint)EVar5,local_res20);
      if (0 < *piVar9) {
        do {
          TVar11 = UDS_ObjectPool::PopItem<UDS_M_ItemImplBase>(local_58);
          pUVar2 = *(UDS_ModelBase **)TVar11.field0_0x0;
          UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar2);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_ModelBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          local_90.ObjectIndex = 0;
          local_90.ObjectSerialNumber = 0;
          local_50[0] = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_ModelBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&local_90,(FObjectPtr)local_50);
          bVar6 = FWeakObjectPtr::IsValid(&local_90);
          if (!bVar6) {
            iVar20 = 0x30f;
            paVar14 = &bGEnsureHasExecuted<_7509389084536601841>;
LAB_14bcf526e:
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (paVar14,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemList.cpp"
                               ,iVar20,"false");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar15 = (param_1->AllocatorInstance).Data;
            goto LAB_14bcf536b;
          }
          pUVar8 = FWeakObjectPtr::Get(&local_90);
          (**(code **)(*(longlong *)pUVar8 + 0x338))(pUVar8,local_97,local_88);
          this_00 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_90);
          UDS_M_ItemImplBase::SetInventoryType(this_00,EVar5);
          pUVar8 = FWeakObjectPtr::Get(&local_90);
          pUVar8[10].field_0x10 = 0;
          this_01 = (UDS_M_ItemImplInventorySlot *)FWeakObjectPtr::Get(&local_90);
          if (this_01 == (UDS_M_ItemImplInventorySlot *)0x0) {
LAB_14bcf5261:
            iVar20 = 0x316;
            paVar14 = &bGEnsureHasExecuted<_7509389084536601834>;
            goto LAB_14bcf526e;
          }
          pUVar12 = Z_Construct_UClass_UDS_M_ItemImplInventorySlot_NoRegister();
          iVar16 = (int)pUVar12->_padding_;
          if ((*(int *)(this_01->_padding_ + 0x38) < iVar16) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
              &pUVar12->_padding_)) goto LAB_14bcf5261;
          iVar16 = iVar17;
          if (iVar20 < iVar17) {
            iVar16 = iVar20;
          }
          UDS_M_ItemImplInventorySlot::SetOwnedQuantity(this_01,iVar16);
          iVar17 = iVar17 - iVar20;
          iVar21 = iVar21 + 1;
          local_res20[0] = EVar5;
          pUVar8 = FWeakObjectPtr::Get(&local_88);
          piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                   ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                             (&pUVar8[0xc].field_0x18,(uint)EVar5,local_res20);
        } while (iVar21 < *piVar9);
      }
      pFVar19 = (FWeakObjectPtr *)(local_68.AllocatorInstance.Data + 8);
      uVar7 = (ulonglong)local_70;
    }
    puVar1 = &this->field_0x200;
    local_80.ArrayNum = *(int *)&this->field_0x208;
    lVar18 = (longlong)local_80.ArrayNum;
    _Src = *(void **)puVar1;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_80.ArrayNum == 0) {
      local_80.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_80.ArrayNum,0,&local_80.AllocatorInstance,local_80.ArrayNum,
                 &local_80.ArrayMax);
      memcpy(local_80.AllocatorInstance.Data,_Src,lVar18 << 3);
    }
    UDS_ObjectPool::PushItemList<UDS_M_ItemImplBase>(local_58,&local_80,false);
    pTVar13 = UDS_ObjectPool::GetItemList<UDS_M_ItemImplBase>(local_58,&local_68);
    if ((TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
        puVar1 != pTVar13) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&this->field_0x208 = pTVar13->ArrayNum;
      *(int *)&this->field_0x20c = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    if ((FWeakObjectPtr *)local_68.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    UDS_M_ItemList::UpdateSelectedUID((UDS_M_ItemList *)this);
    pFVar15 = (param_1->AllocatorInstance).Data;
LAB_14bcf536b:
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
  }
  return;
}

