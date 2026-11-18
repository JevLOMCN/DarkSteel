// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b480ac0

UClass * __cdecl UDS_DropData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DropData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DropData",
               &Z_Registration_Info_UClass_UDS_DropData.InnerSingleton,
               StaticRegisterNativesUDS_DropData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DropData>,InternalVTableHelperCtorCaller<UDS_DropData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DropData.InnerSingleton;
}

// UDS_DropData @ 14b4839c0

UDS_DropData * __thiscall UDS_DropData::UDS_DropData(UDS_DropData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->DisplayStartTime = 0.0;
  this->_padding_ = (longlong)&___7UDS_DropData__6B_;
  return this;
}

// ~UDS_DropData @ 14b484120

void __thiscall UDS_DropData::~UDS_DropData(UDS_DropData *this)

{
  this->_padding_ = (longlong)&___7UDS_DropData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4853e0

UClass * __cdecl UDS_DropData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DropData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DropData",
               &Z_Registration_Info_UClass_UDS_DropData.InnerSingleton,
               StaticRegisterNativesUDS_DropData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DropData>,InternalVTableHelperCtorCaller<UDS_DropData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DropData.InnerSingleton;
}

// StaticRegisterNativesUDS_DropData @ 14b485650

void __cdecl UDS_DropData::StaticRegisterNativesUDS_DropData(void)

{
  return;
}

// UDS_DropData @ 14ba90ec0

UDS_DropData * __thiscall UDS_DropData::UDS_DropData(UDS_DropData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DropData__6B_;
  this->DisplayStartTime = 0.0;
  this->Exp = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->MoneyType = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->MoneyQuantity = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->ItemID = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->ItemQuantity = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->QuantityByBuff = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->IsLuckDrop = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->IsNaturalHistoryDrop = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->DropDataType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->PlayerSkillType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->DisplayStartTime = 0.0;
  return this;
}

// FindOrAddData @ 14baa0fd0

TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> __cdecl
UDS_DropData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa63c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> __cdecl
UDS_DropData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa664f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa645b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_DropData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa645b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa6525:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_DropData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa6525;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_DropData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14baa6656;
        }
      }
    }
  }
LAB_14baa664f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa6656:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetItemGrade @ 14baac430

EDS_GradeType __thiscall UDS_DropData::GetItemGrade(UDS_DropData *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::Get((longlong)(int)this->ItemID,true);
  if (pFVar1 != (FDS_ItemBaseTableRow *)0x0) {
    return pFVar1->ID_GradeType;
  }
  return Normal;
}

// ResetData @ 14bac9850

void __thiscall UDS_DropData::ResetData(UDS_DropData *this)

{
  this->Exp = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->MoneyType = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->MoneyQuantity = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->ItemID = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->ItemQuantity = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->QuantityByBuff = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->IsLuckDrop = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->IsNaturalHistoryDrop = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->DropDataType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->PlayerSkillType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->DisplayStartTime = 0.0;
  return;
}

