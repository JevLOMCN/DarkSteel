// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b50add0

UClass * __cdecl UDS_M_InventoryBagTabBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBagTabBtn",
               &Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBagTabBtn,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_InventoryBagTabBtn>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBagTabBtn>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton;
}

// UDS_M_InventoryBagTabBtn @ 14b511800

UDS_M_InventoryBagTabBtn * __thiscall
UDS_M_InventoryBagTabBtn::UDS_M_InventoryBagTabBtn
          (UDS_M_InventoryBagTabBtn *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_InventoryBagTabBtn__6B_;
  return this;
}

// UDS_M_InventoryBagTabBtn @ 14b511830

UDS_M_InventoryBagTabBtn * __thiscall
UDS_M_InventoryBagTabBtn::UDS_M_InventoryBagTabBtn
          (UDS_M_InventoryBagTabBtn *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_InventoryBagTabBtn__6B_;
  return this;
}

// ~UDS_M_InventoryBagTabBtn @ 14b5130f0

void __thiscall UDS_M_InventoryBagTabBtn::~UDS_M_InventoryBagTabBtn(UDS_M_InventoryBagTabBtn *this)

{
  *(undefined ***)this = &___7UDS_M_InventoryBagTabBtn__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516200

UClass * __cdecl UDS_M_InventoryBagTabBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_InventoryBagTabBtn",
               &Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton,
               StaticRegisterNativesUDS_M_InventoryBagTabBtn,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_InventoryBagTabBtn>,
               InternalVTableHelperCtorCaller<UDS_M_InventoryBagTabBtn>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_InventoryBagTabBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_M_InventoryBagTabBtn @ 14b516d40

void __cdecl UDS_M_InventoryBagTabBtn::StaticRegisterNativesUDS_M_InventoryBagTabBtn(void)

{
  return;
}

// BindViewModel @ 14bce9870

void __thiscall
UDS_M_InventoryBagTabBtn::BindViewModel
          (UDS_M_InventoryBagTabBtn *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  this->field_0x1a0 = 0;
  UDS_ModelBase::BindViewModel((UDS_ModelBase *)this,param_1);
  return;
}

// OnInit @ 14bd0e960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_InventoryBagTabBtn::OnInit(UDS_M_InventoryBagTabBtn *this)

{
  undefined1 *this_00;
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FDS_InventoryTabTableRow *this_01;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_02;
  UDS_ItemDataSet *this_03;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_188 [8];
  FWeakObjectPtr FStack_180;
  FWeakObjectPtr FStack_178;
  UObject *pUStack_170;
  TWeakPtr<FDS_ItemTypeSymbolData,1> TStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar7 = *(UObject **)&this->field_0x28;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  FStack_180.ObjectIndex = 0;
  FStack_180.ObjectSerialNumber = 0;
  pUStack_170 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&FStack_180,(FObjectPtr)&pUStack_170);
  bVar4 = TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)&FStack_180,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      TStack_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_158.Ptr,0x2a,L"parentModel is nullptr.");
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&FStack_180);
    pUVar8 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar8->_padding_)) {
      this_00 = &this->field_0x40;
      iVar5 = FDS_DataContainer::GetData<int,enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)this_00,TabIndex);
      this_01 = FDS_InventoryTabTableRow::GetRef((longlong)iVar5,true);
      bVar4 = FDS_InventoryTabTableRow::IsValid(this_01);
      if (bVar4) {
        this_02 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&TStack_168);
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FStack_178.ObjectIndex = 0;
        FStack_178.ObjectSerialNumber = 0;
        pUStack_170 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&FStack_178,(FObjectPtr)&pUStack_170);
        bVar4 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&FStack_178,(void *)0x0
                          );
        if (!bVar4) {
          pFVar9 = (this_01->ItemType).AllocatorInstance.Data;
          iVar5 = (this_01->ItemType).ArrayNum;
          pFVar2 = pFVar9 + (longlong)iVar5 * 4;
          do {
            if ((this_01->ItemType).ArrayNum != iVar5) {
              `TCheckedPointerIterator<enum_EDS_ItemType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(auStack_188);
            }
            if (pFVar9 == pFVar2) {
              FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)this_00,RedDotState,false);
              return;
            }
            this_03 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&FStack_178);
            UDS_ItemDataSet::GetItemTypeSymbol(this_03,&TStack_168,*(EDS_ItemType *)pFVar9);
            if (TStack_168.Object == (FDS_ItemTypeSymbolData *)0x0) {
LAB_14bd149af:
              if (TStack_168.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(TStack_168.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if ((aVar3 == (atomic<int>)0x1) &&
                   (TStack_168.WeakReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0)) {
                  (**(code **)((TStack_168.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (TStack_168.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            else if (TStack_168.WeakReferenceCount.ReferenceController !=
                     (TReferenceControllerBase<1> *)0x0) {
              if (0 < (int)(TStack_168.WeakReferenceCount.ReferenceController)->SharedReferenceCount
                 ) {
                FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
                          ((FDS_DataContainer *)this_00,RedDotState,true);
                if (TStack_168.WeakReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  return;
                }
                LOCK();
                paVar1 = &(TStack_168.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar3 != (atomic<int>)0x1) {
                  return;
                }
                if (TStack_168.WeakReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  return;
                }
                (**(code **)((TStack_168.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (TStack_168.WeakReferenceCount.ReferenceController,1);
                return;
              }
              goto LAB_14bd149af;
            }
            pFVar9 = pFVar9 + 4;
          } while( true );
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
        pwVar11 = L"itemDataSet is invalid.";
        uVar10 = 0x3d;
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
        pwVar11 = L"inventoryTabTableRow is invalid.";
        uVar10 = 0x36;
      }
      UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_158.Ptr,uVar10,pwVar11);
      if ((void *)TStack_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_158._padding_);
      }
    }
  }
  return;
}

// OnUpdateRedDotState @ 14bd14680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_InventoryBagTabBtn::OnUpdateRedDotState(UDS_M_InventoryBagTabBtn *this)

{
  undefined1 *this_00;
  atomic<int> *paVar1;
  FScriptContainerElement *pFVar2;
  atomic<int> aVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FDS_InventoryTabTableRow *this_01;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_02;
  UDS_ItemDataSet *this_03;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 local_188 [8];
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  UObject *local_170;
  TWeakPtr<FDS_ItemTypeSymbolData,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar7 = *(UObject **)&this->field_0x28;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  local_180.ObjectIndex = 0;
  local_180.ObjectSerialNumber = 0;
  local_170 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
  bVar4 = TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)&local_180,(void *)0x0);
  if (bVar4) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x2a,L"parentModel is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar7 = FWeakObjectPtr::Get(&local_180);
    pUVar8 = Z_Construct_UClass_UDS_M_Inventory_NoRegister();
    iVar5 = (int)pUVar8->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
        &pUVar8->_padding_)) {
      this_00 = &this->field_0x40;
      iVar5 = FDS_DataContainer::GetData<int,enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)this_00,TabIndex);
      this_01 = FDS_InventoryTabTableRow::GetRef((longlong)iVar5,true);
      bVar4 = FDS_InventoryTabTableRow::IsValid(this_01);
      if (bVar4) {
        this_02 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_168);
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_178.ObjectIndex = 0;
        local_178.ObjectSerialNumber = 0;
        local_170 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_170);
        bVar4 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_178,(void *)0x0)
        ;
        if (!bVar4) {
          pFVar9 = (this_01->ItemType).AllocatorInstance.Data;
          iVar5 = (this_01->ItemType).ArrayNum;
          pFVar2 = pFVar9 + (longlong)iVar5 * 4;
          do {
            if ((this_01->ItemType).ArrayNum != iVar5) {
              `TCheckedPointerIterator<enum_EDS_ItemType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_188);
            }
            if (pFVar9 == pFVar2) {
              FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
                        ((FDS_DataContainer *)this_00,RedDotState,false);
              return;
            }
            this_03 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_178);
            UDS_ItemDataSet::GetItemTypeSymbol(this_03,&local_168,*(EDS_ItemType *)pFVar9);
            if (local_168.Object == (FDS_ItemTypeSymbolData *)0x0) {
LAB_14bd149af:
              if (local_168.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_168.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if ((aVar3 == (atomic<int>)0x1) &&
                   (local_168.WeakReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0)) {
                  (**(code **)((local_168.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_168.WeakReferenceCount.ReferenceController,1);
                }
              }
            }
            else if (local_168.WeakReferenceCount.ReferenceController !=
                     (TReferenceControllerBase<1> *)0x0) {
              if (0 < (int)(local_168.WeakReferenceCount.ReferenceController)->SharedReferenceCount)
              {
                FDS_DataContainer::SetData<bool,enum_EDS_InventoryBagTabBtnData>
                          ((FDS_DataContainer *)this_00,RedDotState,true);
                if (local_168.WeakReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  return;
                }
                LOCK();
                paVar1 = &(local_168.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar3 != (atomic<int>)0x1) {
                  return;
                }
                if (local_168.WeakReferenceCount.ReferenceController ==
                    (TReferenceControllerBase<1> *)0x0) {
                  return;
                }
                (**(code **)((local_168.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                          (local_168.WeakReferenceCount.ReferenceController,1);
                return;
              }
              goto LAB_14bd149af;
            }
            pFVar9 = pFVar9 + 4;
          } while( true );
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
        pwVar11 = L"itemDataSet is invalid.";
        uVar10 = 0x3d;
      }
      else {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_M_InventoryBagTabBtn::OnUpdateRedDotState",0x2d,Yes);
        pwVar11 = L"inventoryTabTableRow is invalid.";
        uVar10 = 0x36;
      }
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar10,pwVar11);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// UpdateView @ 14bd2a670

void __thiscall
UDS_M_InventoryBagTabBtn::UpdateView
          (UDS_M_InventoryBagTabBtn *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          bool param_2)

{
  if (this->field_0xe0 == '\x01') {
    OnUpdateRedDotState(this);
  }
  UDS_ModelBase::UpdateView((UDS_ModelBase *)this,param_1,param_2);
  return;
}

