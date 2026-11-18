// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b51b090

UClass * __cdecl UDS_M_ItemImplCharLevelUpSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplCharLevelUpSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplCharLevelUpSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplCharLevelUpSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplCharLevelUpSlot>,local_res8,
               UDS_M_ItemImplMaterialSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton;
}

// UDS_M_ItemImplCharLevelUpSlot @ 14b520a10

UDS_M_ItemImplCharLevelUpSlot * __thiscall
UDS_M_ItemImplCharLevelUpSlot::UDS_M_ItemImplCharLevelUpSlot
          (UDS_M_ItemImplCharLevelUpSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  this->field_0x1f0 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplCharLevelUpSlot @ 14b520a80

UDS_M_ItemImplCharLevelUpSlot * __thiscall
UDS_M_ItemImplCharLevelUpSlot::UDS_M_ItemImplCharLevelUpSlot
          (UDS_M_ItemImplCharLevelUpSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  this->field_0x1f0 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// GetPrivateStaticClass @ 14b525320

UClass * __cdecl UDS_M_ItemImplCharLevelUpSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplCharLevelUpSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplCharLevelUpSlot,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplCharLevelUpSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplCharLevelUpSlot>,local_res8,
               UDS_M_ItemImplMaterialSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplCharLevelUpSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplCharLevelUpSlot @ 14b5273d0

void __cdecl UDS_M_ItemImplCharLevelUpSlot::StaticRegisterNativesUDS_M_ItemImplCharLevelUpSlot(void)

{
  return;
}

// ~UDS_M_ItemImplCharLevelUpSlot @ 14bd43c40

void __thiscall
UDS_M_ItemImplCharLevelUpSlot::~UDS_M_ItemImplCharLevelUpSlot(UDS_M_ItemImplCharLevelUpSlot *this)

{
  *(undefined ***)this = &UDS_M_ItemImplMaterialSlot::_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 =
       &UDS_M_ItemImplMaterialSlot::_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// InitItemImplMap @ 14bd672a0

void __thiscall UDS_M_ItemImplCharLevelUpSlot::InitItemImplMap(UDS_M_ItemImplCharLevelUpSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplCharLevelUpSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0xe;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0xe) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x0e') {
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
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0xe,
             (bool *)&local_18);
  return;
}

// IsQuantityUnder @ 14bd6bf10

bool __thiscall UDS_M_ItemImplCharLevelUpSlot::IsQuantityUnder(UDS_M_ItemImplCharLevelUpSlot *this)

{
  return true;
}

// OnDeInit @ 14bd76960

void __thiscall UDS_M_ItemImplCharLevelUpSlot::OnDeInit(UDS_M_ItemImplCharLevelUpSlot *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCharLevelUpItem,this);
  }
  UDS_M_ItemImplBase::OnDeInit((UDS_M_ItemImplBase *)this);
  return;
}

// OnEventMouseEnter @ 14bd780a0

void __thiscall
UDS_M_ItemImplCharLevelUpSlot::OnEventMouseEnter
          (UDS_M_ItemImplCharLevelUpSlot *this,FDS_WidgetPointerEventField *param_1)

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

// OnEventMouseLeave @ 14bd78350

void __thiscall
UDS_M_ItemImplCharLevelUpSlot::OnEventMouseLeave
          (UDS_M_ItemImplCharLevelUpSlot *this,FDS_WidgetPointerEventField *param_1)

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

// OnInit @ 14bd78fb0

void __thiscall UDS_M_ItemImplCharLevelUpSlot::OnInit(UDS_M_ItemImplCharLevelUpSlot *this)

{
  UDS_CharacterUIEvent *pUVar1;
  
  UDS_M_ItemImplBase::OnInit((UDS_M_ItemImplBase *)this);
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCharLevelUpItem,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_ItemImplCharLevelUpSlot>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectCharLevelUpItem,(UDS_M_ItemImplCharLevelUpSlot *)&stack0x00000010,
               (pmf_f96fafa6 *)this);
  }
  return;
}

// OnSelectCharLevelUpItem @ 14bd7ce90

void __thiscall
UDS_M_ItemImplCharLevelUpSlot::OnSelectCharLevelUpItem
          (UDS_M_ItemImplCharLevelUpSlot *this,long64 param_1)

{
  code *pcVar1;
  int iVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  iVar2 = (**(code **)(*(longlong *)this + 0x380))();
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->field_0x40,Selected,param_1 == iVar2);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  pcVar1 = *(code **)(*(longlong *)this + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (*pcVar1)(this,local_res8,0);
  return;
}

