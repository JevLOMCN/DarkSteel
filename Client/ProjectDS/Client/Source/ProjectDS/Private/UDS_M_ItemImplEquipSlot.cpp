// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b51ba70

UClass * __cdecl UDS_M_ItemImplEquipSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplEquipSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplEquipSlot,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplEquipSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplEquipSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton;
}

// UDS_M_ItemImplEquipSlot @ 14b520df0

UDS_M_ItemImplEquipSlot * __thiscall
UDS_M_ItemImplEquipSlot::UDS_M_ItemImplEquipSlot
          (UDS_M_ItemImplEquipSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->EquipSlotType = None;
  this->CharEntityID = 0;
  (this->EquipTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EquipTypeList).ArrayNum = 0;
  (this->EquipTypeList).ArrayMax = 0;
  return this;
}

// UDS_M_ItemImplEquipSlot @ 14b520e80

UDS_M_ItemImplEquipSlot * __thiscall
UDS_M_ItemImplEquipSlot::UDS_M_ItemImplEquipSlot
          (UDS_M_ItemImplEquipSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->EquipSlotType = None;
  this->CharEntityID = 0;
  (this->EquipTypeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EquipTypeList).ArrayNum = 0;
  (this->EquipTypeList).ArrayMax = 0;
  return this;
}

// ~UDS_M_ItemImplEquipSlot @ 14b5231e0

void __thiscall UDS_M_ItemImplEquipSlot::~UDS_M_ItemImplEquipSlot(UDS_M_ItemImplEquipSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  pFVar1 = (this->EquipTypeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b525620

UClass * __cdecl UDS_M_ItemImplEquipSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplEquipSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplEquipSlot,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplEquipSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplEquipSlot>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplEquipSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplEquipSlot @ 14b527410

void __cdecl UDS_M_ItemImplEquipSlot::StaticRegisterNativesUDS_M_ItemImplEquipSlot(void)

{
  return;
}

// GetSlotGradeBgID @ 14bd61830

int __thiscall UDS_M_ItemImplEquipSlot::GetSlotGradeBgID(UDS_M_ItemImplEquipSlot *this)

{
  char cVar1;
  byte bVar2;
  FDS_CommonGradeTableRow *pFVar3;
  ulonglong uVar4;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 == '\0') {
    bVar2 = (**(code **)(this->_padding_ + 0x3f0))(this);
    uVar4 = (ulonglong)bVar2;
  }
  else {
    uVar4 = 1;
  }
  pFVar3 = FDS_CommonGradeTableRow::Get(uVar4,true);
  if (pFVar3 == (FDS_CommonGradeTableRow *)0x0) {
    return 0;
  }
  return pFVar3->ID_ItemEquipSlotGradeBg;
}

// InitItemImplMap @ 14bd67620

void __thiscall UDS_M_ItemImplEquipSlot::InitItemImplMap(UDS_M_ItemImplEquipSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplEquipSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 4;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 4) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x04') {
        if (lVar2 != 0) goto LAB_14bd676ea;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000004,(bool *)&local_18);
LAB_14bd676ea:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplEquipSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x47;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x47) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == 'G') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000047,(bool *)&local_18);
  return;
}

// IsNewSymbol @ 14bd6bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_M_ItemImplEquipSlot::IsNewSymbol(UDS_M_ItemImplEquipSlot *this)

{
  char cVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if ((cVar1 != '\x01') && (this->_padding_ == 0)) {
    this_00 = (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)
              (**(code **)(this->_padding_ + 0x3a0))(this);
    bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (bVar2) {
      UDS_CharInfoData::GetData((ulong64)local_148);
      bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_148,(void *)0x0);
      if (!bVar2) {
        bVar2 = FDS_CharacterService::CanEquipAbleForEmptySlot
                          ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_148[0],
                           this->EquipSlotType);
        return bVar2;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_M_ItemImplEquipSlot::IsNewSymbol",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x34,L"currentCharData is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnEventMouseEnter @ 14bd780f0

void __thiscall
UDS_M_ItemImplEquipSlot::OnEventMouseEnter
          (UDS_M_ItemImplEquipSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_InputEvent *pUVar1;
  bool local_res18 [8];
  EDS_InputKeyGroupType local_res20 [4];
  int local_18 [6];
  
  UDS_M_ItemImplBase::OnEventMouseEnter((UDS_M_ItemImplBase *)this,param_1);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    local_res18[0] = true;
    local_res20[0] = ContentsTabFrame;
    local_18[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar1->OnInputKeyAddRemoveEvent,local_res20,local_18,local_res18);
  }
  return;
}

// OnEventMouseLeave @ 14bd783a0

void __thiscall
UDS_M_ItemImplEquipSlot::OnEventMouseLeave
          (UDS_M_ItemImplEquipSlot *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_InputEvent *pUVar1;
  bool local_res18 [8];
  EDS_InputKeyGroupType local_res20 [4];
  int local_18 [6];
  
  UDS_M_ItemImplBase::OnEventMouseLeave((UDS_M_ItemImplBase *)this,param_1);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    local_res18[0] = false;
    local_res20[0] = ContentsTabFrame;
    local_18[0] = 2;
    FDS_EventDelegate<enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&>::Broadcast
              (&pUVar1->OnInputKeyAddRemoveEvent,local_res20,local_18,local_res18);
  }
  return;
}

