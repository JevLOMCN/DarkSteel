// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 156

// StaticClass @ 14b519a80

UClass * __cdecl UDS_M_ItemImplBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplBase",
               &Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplBase,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplBase>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplBase>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton;
}

// UDS_M_ItemImplBase @ 14b520830

UDS_M_ItemImplBase * __thiscall
UDS_M_ItemImplBase::UDS_M_ItemImplBase(UDS_M_ItemImplBase *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->OnAnimationDelegate = 0;
  *(undefined8 *)&(this->OnAnimationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnimationDelegate).field_0x10 = 0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UDS_M_ItemImplBase @ 14b5208a0

UDS_M_ItemImplBase * __thiscall
UDS_M_ItemImplBase::UDS_M_ItemImplBase(UDS_M_ItemImplBase *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->OnAnimationDelegate = 0;
  *(undefined8 *)&(this->OnAnimationDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnimationDelegate).field_0x10 = 0;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_M_ItemImplBase @ 14b523130

void __thiscall UDS_M_ItemImplBase::~UDS_M_ItemImplBase(UDS_M_ItemImplBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAnimationDelegate);
  pvVar1 = *(void **)&(this->OnAnimationDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnimationDelegate);
  this->_padding_ = (longlong)&___7IDS_ObjectPoolItem__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5251a0

UClass * __cdecl UDS_M_ItemImplBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplBase",
               &Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplBase,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplBase>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplBase>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplBase.InnerSingleton;
}

// GetStyleIDCharacterEquipType @ 14b527100

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDCharacterEquipType(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDCharacterExclusive @ 14b527110

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDCharacterExclusive(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDCombatPowerStatusName @ 14b527120

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDCombatPowerStatusName(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDDecreasedStatusCaomparisonValue @ 14b527130

long64 __thiscall
UDS_M_ItemImplBase::GetStyleIDDecreasedStatusCaomparisonValue(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDDefaultStatusName @ 14b527140

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDDefaultStatusName(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDDurability @ 14b527150

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDDurability(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDIncreasedStatusCamparisonValue @ 14b527160

long64 __thiscall
UDS_M_ItemImplBase::GetStyleIDIncreasedStatusCamparisonValue(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDPeriod @ 14b527170

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDPeriod(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDPrefixStatusName @ 14b527180

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDPrefixStatusName(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDSetItemEquipped @ 14b527190

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDSetItemEquipped(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetStyleIDSetItemUnEquipped @ 14b5271a0

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDSetItemUnEquipped(UDS_M_ItemImplBase *this)

{
  return 0;
}

// GetTextTagStyleItemGrade @ 14b5271b0

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetTextTagStyleItemGrade
          (UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// InitModel @ 14b527220

void __thiscall UDS_M_ItemImplBase::InitModel(UDS_M_ItemImplBase *this)

{
  return;
}

// IsChangedItem @ 14b527230

bool __thiscall UDS_M_ItemImplBase::IsChangedItem(UDS_M_ItemImplBase *this)

{
  return false;
}

// IsDragging @ 14b527240

bool __thiscall UDS_M_ItemImplBase::IsDragging(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  
  bVar1 = FDS_DataContainer::GetData<bool,enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,Dragging);
  return bVar1;
}

// IsHovered @ 14b527270

bool __thiscall UDS_M_ItemImplBase::IsHovered(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  
  bVar1 = FDS_DataContainer::GetData<bool,enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,Hovered);
  return bVar1;
}

// IsPressed @ 14b527290

bool __thiscall UDS_M_ItemImplBase::IsPressed(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  
  bVar1 = FDS_DataContainer::GetData<bool,enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,Pressed);
  return bVar1;
}

// OnEventKeyDown @ 14b5272b0

void __thiscall
UDS_M_ItemImplBase::OnEventKeyDown(UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  return;
}

// OnEventKeyUp @ 14b5272c0

void __thiscall
UDS_M_ItemImplBase::OnEventKeyUp(UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  return;
}

// SetCraftEffect @ 14b5272d0

void __thiscall UDS_M_ItemImplBase::SetCraftEffect(UDS_M_ItemImplBase *this,bool param_1)

{
  return;
}

// StaticRegisterNativesUDS_M_ItemImplBase @ 14b527350

void __cdecl UDS_M_ItemImplBase::StaticRegisterNativesUDS_M_ItemImplBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_ItemImplBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14b529a00

UObject * __thiscall UDS_M_ItemImplBase::_getUObject(UDS_M_ItemImplBase *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execOnItemUseAction @ 14b529b30

void __cdecl UDS_M_ItemImplBase::execOnItemUseAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnItemUseAction((UDS_M_ItemImplBase *)param_1,local_res10);
  return;
}

// CloseItemDetailInfo @ 14bd494d0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall UDS_M_ItemImplBase::CloseItemDetailInfo(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  UDS_ItemDetailInfoManager *this_00;
  FWeakObjectPtr *pFVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  FDS_ItemSlotActionInfo local_48;
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)&local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar7);
  if (bVar2) {
    this_00 = UDS_ItemDetailInfoManager::GetInst();
    if (this_00 != (UDS_ItemDetailInfoManager *)0x0) {
      local_48.SlotType = None;
      local_res8 = 0;
      local_48.SlotIndex = 0;
      local_48.ItemTID = 0;
      local_48.ItemData.WeakPtr.ObjectIndex = 0;
      local_48.ItemData.WeakPtr.ObjectSerialNumber = 0;
      FWeakObjectPtr::operator=(&local_48.ItemData.WeakPtr,(FObjectPtr)&local_res8);
      local_48.IsShowComparison = true;
      local_48.ItemDetailInfoType = Normal;
      local_48.TargetSlotWidget.WeakPtr.ObjectIndex = 0;
      local_48.TargetSlotWidget.WeakPtr.ObjectSerialNumber = 0;
      local_48.CharID = 0;
      local_48.InventoryType = None;
      local_48.PrefixID = -1;
      local_48.SetEffectID = -1;
      local_48.SlotType = EquipBattle;
      local_48.ActionType = Unhover;
      pFVar6 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
      local_48.ItemData.WeakPtr = *pFVar6;
      local_48._4_8_ = local_48._4_8_ & 0xffffffff00000000;
      local_48._24_2_ = local_48._24_2_ & 0xff;
      UDS_ItemDetailInfoManager::OnItemSlotAction(this_00,&local_48);
      FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
                ((FDS_DataContainer *)&this->_padding_,ItemDetailInfo,false);
    }
  }
  return;
}

// CreateObject @ 14bd536b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_M_ItemImplBase> __cdecl
UDS_M_ItemImplBase::CreateObject(EDS_ItemSlotStateType param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UDS_M_ItemImplBase> TVar4;
  TSubclassOf<UDS_M_ItemImplBase> *pTVar5;
  UClass *pUVar6;
  UPackage *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  undefined7 in_register_00000009;
  TObjectPtr<UDS_M_ItemImplBase>_u_0 TVar10;
  longlong *plVar11;
  EDS_ItemSlotStateType in_DL;
  longlong lVar12;
  UClass *pUVar13;
  undefined1 auStackY_e8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  TVar10._1_7_ = in_register_00000009;
  TVar10._0_1_ = param_1;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar12 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar12 = ItemImplMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar12 + ((ulonglong)(ItemImplMap._72_4_ - 1) & (ulonglong)in_DL) * 4);
        iVar1 != -1; iVar1 = *(int *)(ItemImplMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(EDS_ItemSlotStateType *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == in_DL) {
        pUVar13 = (UClass *)0x0;
        pTVar5 = TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
                 ::FindChecked(&ItemImplMap,in_DL);
        pUVar8 = (pTVar5->Class).field0_0x0.DebugPtr;
        if ((pUVar8 != (UClass *)0x0) &&
           (pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
          iVar1 = (int)pUVar6->_padding_;
          if (((int)pUVar8->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar13 = (pTVar5->Class).field0_0x0.DebugPtr;
          }
        }
        pUVar7 = GetTransientPackage();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar7,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
        CheckIsClassChildOf_Internal(pUVar8,pUVar13);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar13);
        local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_a8._56_8_ = (UPackage *)0x0;
        local_a8._16_4_ = 0;
        local_a8._20_4_ = 0;
        local_a8._24_4_ = RF_NoFlags;
        local_a8._40_8_ = (UObject *)0x0;
        local_a8[0x20] = false;
        local_a8._8_8_ = pUVar7;
        pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar11 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        (TVar10.DebugPtr)->_padding_ = (longlong)pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return (TObjectPtr<UDS_M_ItemImplBase>)TVar10.DebugPtr;
        }
        if (pUVar9 == (UObject *)0x0) {
          return (TObjectPtr<UDS_M_ItemImplBase>)TVar10.DebugPtr;
        }
        UE::GC::MarkAsReachable(pUVar9);
        return (TObjectPtr<UDS_M_ItemImplBase>)TVar10.DebugPtr;
      }
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3571834003243662500>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,0x35c,"false");
  if (!bVar3) {
    (TVar10.DebugPtr)->_padding_ = 0;
    return (TObjectPtr<UDS_M_ItemImplBase>)TVar10;
  }
  pcVar2 = (code *)swi(3);
  TVar4.field0_0x0 = (TObjectPtr<UDS_M_ItemImplBase>_u_0)(*pcVar2)();
  return (TObjectPtr<UDS_M_ItemImplBase>)TVar4.field0_0x0;
}

// GetCharID @ 14bd5a770

int __thiscall UDS_M_ItemImplBase::GetCharID(UDS_M_ItemImplBase *this)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  
  this_00 = &this->_padding_;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>((FDS_DataContainer *)this_00,CharID);
  if (!bVar2) {
    UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar2) {
      return 0;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    return *(int *)&pUVar7[8].field_0x18;
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)this_00,(EDS_ItemSlotData)&local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    iVar4 = _wtoi((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    return iVar4;
  }
  iVar4 = _wtoi(L"");
  return iVar4;
}

// GetCharacterEquipType @ 14bd5a850

EDS_CharEquipType __thiscall UDS_M_ItemImplBase::GetCharacterEquipType(UDS_M_ItemImplBase *this)

{
  EDS_CharEquipType EVar1;
  int iVar2;
  
  iVar2 = (**(code **)(this->_padding_ + 0x380))();
  if (0 < iVar2) {
    EVar1 = DS_ItemDataUtil::GetCharacterEquipType(iVar2);
    return EVar1;
  }
  return None;
}

// GetCombatPower @ 14bd5a880

int __thiscall UDS_M_ItemImplBase::GetCombatPower(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return *(int *)&pUVar2[0x10].field_0x20;
}

// GetComparisonItemData @ 14bd5ade0

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_M_ItemImplBase::GetComparisonItemData(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ItemDataSet *this_00;
  FWeakObjectPtr in_RDX;
  EDS_ItemType local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  (**(code **)(this->_padding_ + 0x3a0))(this,&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res18);
      local_res8[0] = *(undefined4 *)&pUVar2[0x13].field_0x20;
      FDS_EquipmentItemCharacterData::GetEquipSlotTypeByItemType(local_res8);
      this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res20);
      UDS_ItemDataSet::GetCharacterItemData(this_00,in_RDX.ObjectIndex);
      return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8[0] = None;
  local_res8[1] = None;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res8);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
}

// GetContextCommonStatusInfo @ 14bd5aea0

TSharedPtr<FDS_ViewModelContext_StatusInfo,1> * __thiscall
UDS_M_ItemImplBase::GetContextCommonStatusInfo
          (UDS_M_ItemImplBase *this,
          TSharedPtr<FDS_ViewModelContext_StatusInfo,1> *__return_storage_ptr__,
          EDS_StatusType param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext_StatusInfo *pFVar3;
  FDS_ViewModelContext_StatusInfo *pFVar4;
  TSharedPtr<FDS_ViewModelContext_StatusInfo,1> *pTVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext_StatusInfo *pFVar7;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pFVar3 = ::operator_new(0x40);
  pFVar4 = (FDS_ViewModelContext_StatusInfo *)0x0;
  pFVar7 = pFVar4;
  if (pFVar3 != (FDS_ViewModelContext_StatusInfo *)0x0) {
    pFVar3->_padding_ = 0;
    *(undefined4 *)&pFVar3->field_0x3a = 0;
    *(undefined2 *)&pFVar3->field_0x3e = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_StatusInfo__6B_;
    pFVar3->EntityID = 0;
    pFVar3->StatusID = None;
    pFVar3->StatusValue = 0;
    pFVar3->bIsUse_VM_Progress = false;
    pFVar3->bIsUseDamageProgress = false;
    pFVar7 = pFVar3;
  }
  __return_storage_ptr__->Object = pFVar7;
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext_StatusInfo *)0x0) {
    *(undefined4 *)&pFVar3->_padding_ = 1;
    pFVar3->_padding_ = (longlong)ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_StatusInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar3->_padding_ + 4) = 1;
    pFVar3->_padding_ = (longlong)pFVar7;
    pFVar4 = pFVar3;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar4;
  if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FDS_ViewModelContext_StatusInfo,1> *)(*pcVar1)();
    return pTVar5;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pUVar6 = FDS_ViewModelContext_StatusInfo::StaticStruct();
  pFVar4->_padding_ = (longlong)pUVar6;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    local_18.Object = (FDS_ViewModelContext *)__return_storage_ptr__->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (__return_storage_ptr__->Object != (FDS_ViewModelContext_StatusInfo *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x12;
    if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FDS_ViewModelContext_StatusInfo,1> *)(*pcVar1)();
      return pTVar5;
    }
    __return_storage_ptr__->Object->StatusID = param_1;
    if ((__return_storage_ptr__->Object == (FDS_ViewModelContext_StatusInfo *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FDS_ViewModelContext_StatusInfo,1> *)(*pcVar1)();
      return pTVar5;
    }
    __return_storage_ptr__->Object->StatusValue = param_2;
  }
  return __return_storage_ptr__;
}

// GetCurrentDurability @ 14bd5b9d0

int __thiscall UDS_M_ItemImplBase::GetCurrentDurability(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return *(int *)&pUVar2[0x11].field_0x4;
}

// GetDragSlotGradeBgID @ 14bd5bc00

int __thiscall UDS_M_ItemImplBase::GetDragSlotGradeBgID(UDS_M_ItemImplBase *this)

{
  byte bVar1;
  FDS_CommonGradeTableRow *pFVar2;
  
  bVar1 = (**(code **)(this->_padding_ + 0x3f0))();
  pFVar2 = FDS_CommonGradeTableRow::Get((ulonglong)bVar1,true);
  if (pFVar2 == (FDS_CommonGradeTableRow *)0x0) {
    return 0;
  }
  return pFVar2->ID_ItemSlotGradeBg;
}

// GetDropSlotGradeBgID @ 14bd5bc30

int __thiscall UDS_M_ItemImplBase::GetDropSlotGradeBgID(UDS_M_ItemImplBase *this)

{
  byte bVar1;
  FDS_CommonGradeTableRow *pFVar2;
  
  bVar1 = (**(code **)(this->_padding_ + 0x3f0))();
  pFVar2 = FDS_CommonGradeTableRow::Get((ulonglong)bVar1,true);
  if (pFVar2 == (FDS_CommonGradeTableRow *)0x0) {
    return 0;
  }
  return pFVar2->ID_DropGradeBg;
}

// GetDurabilityIconID @ 14bd5bc80

int __thiscall UDS_M_ItemImplBase::GetDurabilityIconID(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  int iVar2;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
  iVar2 = UDS_ItemData::GetDurabilityIconID(this_00);
  return iVar2;
}

// GetEquipIconID @ 14bd5c2a0

int __thiscall UDS_M_ItemImplBase::GetEquipIconID(UDS_M_ItemImplBase *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8;
  
  cVar1 = (**(code **)(this->_padding_ + 0x598))();
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res8);
      iVar3 = GetCharID(this);
      bVar2 = UDS_ItemData::IsEquipped(this_00,iVar3);
      return (int)bVar2;
    }
  }
  return 0;
}

// GetEquipSlotName @ 14bd5c320

FName __thiscall UDS_M_ItemImplBase::GetEquipSlotName(UDS_M_ItemImplBase *this)

{
  int iVar1;
  EDS_ItemType EVar2;
  FDS_SlotBaseTableRow *pFVar3;
  UEnum *pUVar4;
  FName in_RDX;
  longlong local_res8;
  
  iVar1 = (**(code **)(this->_padding_ + 0x380))();
  if (iVar1 != 0) {
    EVar2 = DS_ItemDataUtil::GetItemType(iVar1);
    pFVar3 = DS_ItemDataUtil::GetSlotBaseTable(EVar2);
    if ((pFVar3 != (FDS_SlotBaseTableRow *)0x0) && (pFVar3->IsVisibleSlotTypeName != false)) {
      pUVar4 = StaticEnum<enum_EDS_SlotType>();
      DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar4);
      *(longlong *)in_RDX = local_res8;
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetEquippedCharacterID @ 14bd5c3a0

int __thiscall UDS_M_ItemImplBase::GetEquippedCharacterID(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  int iVar2;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
  iVar2 = UDS_ItemData::GetEquipCharID(this_00);
  return iVar2;
}

// GetEquippedSetEffectItemCount @ 14bd5c3f0

int __thiscall UDS_M_ItemImplBase::GetEquippedSetEffectItemCount(UDS_M_ItemImplBase *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  UDS_ItemDataSet *this_00;
  UObject *pUVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  cVar3 = (**(code **)(this->_padding_ + 0x600))();
  if (cVar3 != '\0') {
    TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res10);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_res10);
      UDS_ItemDataSet::GetEquippedItemDataList(this_00,&local_38);
      iVar7 = local_38.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8);
      FVar9.Data = local_38.AllocatorInstance.Data;
      iVar2 = 0;
      while( true ) {
        iVar8 = iVar2;
        if (local_38.ArrayNum != iVar7) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res8);
        }
        if ((FWeakObjectPtr *)FVar9.Data == pFVar1) break;
        local_res8 = *(FWeakObjectPtr *)FVar9.Data;
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        iVar5 = (**(code **)(this->_padding_ + 0x488))(this);
        FVar9.Data = FVar9.Data + 8;
        iVar2 = iVar8 + 1;
        if (*(int *)&pUVar6[0x12].field_0x8 != iVar5) {
          iVar2 = iVar8;
        }
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return iVar8;
    }
  }
  return 0;
}

// GetExclusiveCharacterID @ 14bd5c720

int __thiscall UDS_M_ItemImplBase::GetExclusiveCharacterID(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x380))();
  iVar1 = DS_ItemDataUtil::GetExclusiveCharacterID(iVar1);
  return iVar1;
}

// GetGemSocket @ 14bd5ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FDS_EntryBindingEventField * __thiscall
UDS_M_ItemImplBase::GetGemSocket
          (UDS_M_ItemImplBase *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UDS_ItemData *pUVar5;
  UObject *pUVar6;
  UDS_UserObjectListItem *this_00;
  UClass *pUVar7;
  UDS_M_ItemGem_GemSocket *this_01;
  undefined8 *puVar8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar9;
  FDS_EntryBindingEventField *pFVar10;
  longlong *plVar11;
  atomic<unsigned_char> *paVar12;
  EDS_GemSocketIndex EVar13;
  int iVar14;
  undefined1 auStackY_158 [32];
  FWeakObjectPtr local_128;
  UDS_UserObjectListItem *local_120;
  TSharedPtr<FDS_ViewModelContext,1> local_118;
  TSharedPtr<FDS_ViewModelContext,1> local_108;
  TSharedPtr<FDS_ViewModelContext,1> local_f8;
  undefined1 local_e8 [8];
  TReferenceControllerBase<1> *local_e0;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_d8;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x3a0))();
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_128,(void *)0x0);
  if (!bVar2) {
    iVar14 = 1;
    do {
      pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_128);
      EVar13 = (EDS_GemSocketIndex)iVar14;
      bVar2 = UDS_ItemData::IsAvailableGemSocket(pUVar5,EVar13);
      if (bVar2) {
        pUVar6 = GetTransientPackageAsObject();
        this_00 = NewObject<UDS_UserObjectListItem>(pUVar6);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd5cce9;
        }
        else {
          if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd5cce9:
            iVar14 = 0x668;
            paVar12 = &bGEnsureHasExecuted<_3571834003243661720>;
            goto LAB_14bd5ccf6;
          }
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pUVar6 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar6,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar7);
        local_b8._8_8_ = pUVar6;
        this_01 = (UDS_M_ItemGem_GemSocket *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar11 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar11 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_01 == (UDS_M_ItemGem_GemSocket *)0x0) goto LAB_14bd5ccda;
        }
        else {
          if (this_01 == (UDS_M_ItemGem_GemSocket *)0x0) {
LAB_14bd5ccda:
            iVar14 = 0x66b;
            paVar12 = &bGEnsureHasExecuted<_3571834003243661717>;
LAB_14bd5ccf6:
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (paVar12,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                               ,iVar14,"false");
            if (!bVar2) {
              return __return_storage_ptr__;
            }
            pcVar1 = (code *)swi(3);
            pFVar10 = (FDS_EntryBindingEventField *)(*pcVar1)();
            return pFVar10;
          }
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_128);
        iVar3 = UDS_ItemData::GetEquippedGemTID(pUVar5,EVar13);
        pUVar5 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_128);
        iVar4 = UDS_ItemData::GetGemSocketTID(pUVar5,EVar13);
        UDS_M_ItemGem_GemSocket::InitModel(this_01,EVar13,iVar4,iVar3);
        puVar8 = (undefined8 *)(**(code **)(this_01->_padding_ + 0x310))(this_01,local_e8);
        local_118.Object = (FDS_ViewModelContext *)*puVar8;
        local_118.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar8[1];
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_00,&local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0);
        pTVar9 = UDS_M_ItemGem_GemSocket::GetGemSlotContextViewModel(this_01,&local_d8);
        local_108.Object = (FDS_ViewModelContext *)pTVar9->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_00,&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        pTVar9 = UDS_M_ItemGem_GemSocket::GetGemStatusContextViewModel(this_01,&local_c8);
        local_f8.Object = (FDS_ViewModelContext *)pTVar9->Object;
        local_f8.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(this_00,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        local_120 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_120);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 4);
  }
  return __return_storage_ptr__;
}

// GetInventoryType @ 14bd5cfd0

EDS_InventoryType __thiscall UDS_M_ItemImplBase::GetInventoryType(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UEnum *this_00;
  FName *pFVar7;
  long64 lVar8;
  FDS_ItemSlotStateTableRow *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  EDS_InventoryType EVar12;
  EDS_InventoryType local_res8 [8];
  FName local_res10;
  FString local_28;
  
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,InventoryType);
  if (bVar2) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_28,pwVar11);
    this_00 = StaticEnum<enum_EDS_InventoryType>();
    EVar12 = local_res8[0];
    if (this_00 != (UEnum *)0x0) {
      iVar10 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      pFVar7 = ::FName::FName(&local_res10,iVar10,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                              FNAME_Add);
      lVar8 = UEnum::GetValueByName(this_00,*pFVar7,None);
      EVar12 = (EDS_InventoryType)lVar8;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (EVar12 != None) {
      return EVar12;
    }
  }
  EVar3 = GetItemSlotType(this);
  pFVar9 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
  if (pFVar9 == (FDS_ItemSlotStateTableRow *)0x0) {
    return None;
  }
  return pFVar9->InventoryType;
}

// GetItemBaseTable @ 14bd5d100

FDS_ItemBaseTableRow * __thiscall UDS_M_ItemImplBase::GetItemBaseTable(UDS_M_ItemImplBase *this)

{
  return this->ItemBaseTable;
}

// GetItemCoolTimeRatio @ 14bd5d110

float __thiscall UDS_M_ItemImplBase::GetItemCoolTimeRatio(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UDS_ItemData *this_00;
  UObject *pUVar2;
  float fVar3;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
    fVar3 = UDS_ItemData::GetCooltime(this_00);
    if (0.0 < fVar3) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      return (float)*(double *)&pUVar2[0x11].field_0x10 / fVar3;
    }
  }
  return 0.0;
}

// GetItemCoolTimeRemain @ 14bd5d1a0

float __thiscall UDS_M_ItemImplBase::GetItemCoolTimeRemain(UDS_M_ItemImplBase *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x380))();
  fVar2 = DS_ItemDataUtil::GetItemCooltimeRemain(iVar1);
  return fVar2;
}

// GetItemData @ 14bd5d1c0

TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> __thiscall
UDS_M_ItemImplBase::GetItemData(UDS_M_ItemImplBase *this)

{
  FWeakObjectPtr in_RDX;
  
  (**(code **)(this->_padding_ + 0x388))();
  DS_ItemDataUtil::GetItemDataByUID((long64)in_RDX);
  return (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)in_RDX;
}

// GetItemExplain @ 14bd5d260

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetItemExplain(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  long64 lVar1;
  bool bVar2;
  FDS_StringItemTableRow *this_00;
  
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this_00 = FDS_ItemBaseTableRow::ID_ExplainTable(this->ItemBaseTable);
  bVar2 = FDS_StringItemTableRow::IsValid(this_00);
  if (!bVar2) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  lVar1 = this_00->ID;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  __return_storage_ptr__->StringTableType = None;
  FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringItem,lVar1);
  return __return_storage_ptr__;
}

// GetItemGradeColor @ 14bd5d350

FLinearColor * __thiscall
UDS_M_ItemImplBase::GetItemGradeColor(UDS_M_ItemImplBase *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = DS_Util::GetGradeColor(&this->ItemBaseTable->ID_GradeType);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetItemGradeName @ 14bd5d3a0

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetItemGradeName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  UEnum *pUVar1;
  FName local_res8;
  
  (**(code **)(this->_padding_ + 0x3f0))();
  pUVar1 = StaticEnum<enum_EDS_GradeType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar1);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetItemGradeType @ 14bd5d420

EDS_GradeType __thiscall UDS_M_ItemImplBase::GetItemGradeType(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return None;
  }
  return this->ItemBaseTable->ID_GradeType;
}

// GetItemIconID @ 14bd5d440

int __thiscall UDS_M_ItemImplBase::GetItemIconID(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return 0;
  }
  return this->ItemBaseTable->ID_Icon;
}

// GetItemImplClass @ 14bd5d460

TSubclassOf<UDS_M_ItemImplBase> __cdecl
UDS_M_ItemImplBase::GetItemImplClass(EDS_ItemSlotStateType param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  TSubclassOf<UDS_M_ItemImplBase> TVar5;
  TSubclassOf<UDS_M_ItemImplBase> *pTVar6;
  undefined7 in_register_00000009;
  TObjectPtr<UClass> TVar7;
  EDS_ItemSlotStateType in_DL;
  longlong lVar8;
  
  TVar7.field0_0x0._1_7_ = in_register_00000009;
  TVar7.field0_0x0._0_1_ = param_1;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar8 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar8 = ItemImplMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar8 + ((ulonglong)(ItemImplMap._72_4_ - 1) & (ulonglong)in_DL) * 4);
        iVar1 != -1; iVar1 = *(int *)(ItemImplMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(EDS_ItemSlotStateType *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == in_DL) {
        pTVar6 = TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
                 ::FindChecked(&ItemImplMap,in_DL);
        pUVar2 = (pTVar6->Class).field0_0x0.DebugPtr;
        *(UClass **)TVar7.field0_0x0 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return (TSubclassOf<UDS_M_ItemImplBase>)TVar7.field0_0x0.DebugPtr;
        }
        if (pUVar2 == (UClass *)0x0) {
          return (TSubclassOf<UDS_M_ItemImplBase>)TVar7.field0_0x0.DebugPtr;
        }
        UE::GC::MarkAsReachable((UObject *)pUVar2);
        return (TSubclassOf<UDS_M_ItemImplBase>)TVar7.field0_0x0.DebugPtr;
      }
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3571834003243662493>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,0x363,"false");
  if (!bVar4) {
    *(undefined8 *)TVar7.field0_0x0 = 0;
    return (TSubclassOf<UDS_M_ItemImplBase>)TVar7.field0_0x0;
  }
  pcVar3 = (code *)swi(3);
  TVar5.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
  return (TSubclassOf<UDS_M_ItemImplBase>)TVar5.Class.field0_0x0;
}

// GetItemName @ 14bd5d540

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetItemName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  char cVar1;
  FDS_Text *pFVar2;
  FDS_Text local_f8;
  FDS_Text local_a8;
  FDS_Text local_58;
  
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    DS_ItemDataUtil::GetItemNameTextByTID(&local_f8,this->ItemBaseTable->ID);
    cVar1 = (**(code **)(this->_padding_ + 0x600))(this);
    if (cVar1 != '\0') {
      pFVar2 = (FDS_Text *)(**(code **)(this->_padding_ + 0x490))(this,&local_58);
      pFVar2 = FDS_Text::FromStringTableFormat<FDS_Text,FDS_Text_&>
                         (&local_a8,StringUi,0x9de3,pFVar2,&local_f8);
      FDS_Text::operator=(&local_f8,pFVar2);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,
                 local_a8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    cVar1 = (**(code **)(this->_padding_ + 0x5f8))();
    if (cVar1 != '\0') {
      pFVar2 = (FDS_Text *)(**(code **)(this->_padding_ + 0x480))(this,&local_a8);
      pFVar2 = FDS_Text::FromStringTableFormat<FDS_Text,FDS_Text_&>
                         (&local_58,StringUi,0x9de3,pFVar2,&local_f8);
      FDS_Text::operator=(&local_f8,pFVar2);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,
                 local_a8.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
      }
      if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->StringTableType = local_f8.StringTableType;
    __return_storage_ptr__->StringTableID = local_f8.StringTableID;
    __return_storage_ptr__->StringEnumTableNameID = local_f8.StringEnumTableNameID;
    (__return_storage_ptr__->DateTime).Ticks = local_f8.DateTime.Ticks;
    (__return_storage_ptr__->TimeSpan).Ticks = local_f8.TimeSpan.Ticks;
    __return_storage_ptr__->TimeExpressionType = local_f8.TimeExpressionType;
    __return_storage_ptr__->IsExpression = local_f8.IsExpression;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         local_f8.UniqueString.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_f8.UniqueString.Data.ArrayNum;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_f8.UniqueString.Data.ArrayMax;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
         local_f8.FormatArgs.AllocatorInstance.Data;
    (__return_storage_ptr__->FormatArgs).ArrayNum = local_f8.FormatArgs.ArrayNum;
    (__return_storage_ptr__->FormatArgs).ArrayMax = local_f8.FormatArgs.ArrayMax;
    local_f8.FormatArgs.ArrayNum = 0;
    local_f8.FormatArgs.ArrayMax = 0;
    local_f8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.UniqueString.Data.ArrayNum = 0;
    local_f8.UniqueString.Data.ArrayMax = 0;
    local_f8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_f8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_f8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetItemSlotInfo @ 14bd5d7b0

FDS_ItemSlotInfo * __thiscall UDS_M_ItemImplBase::GetItemSlotInfo(UDS_M_ItemImplBase *this)

{
  FDS_ItemSlotInfo *pFVar1;
  
  pFVar1 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>(&this->SlotInfo);
  return pFVar1;
}

// GetItemSlotStateTable @ 14bd5d7d0

FDS_ItemSlotStateTableRow * __thiscall
UDS_M_ItemImplBase::GetItemSlotStateTable(UDS_M_ItemImplBase *this)

{
  EDS_ItemSlotStateType EVar1;
  FDS_ItemSlotStateTableRow *pFVar2;
  
  EVar1 = GetItemSlotType(this);
  pFVar2 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar1,true);
  return pFVar2;
}

// GetItemSlotType @ 14bd5d7f0

EDS_ItemSlotStateType __thiscall UDS_M_ItemImplBase::GetItemSlotType(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  UEnum *this_00;
  FName *pFVar5;
  long64 lVar6;
  int iVar7;
  wchar_t *pwVar8;
  EDS_ItemSlotStateType EVar9;
  EDS_ItemSlotStateType local_res8 [8];
  FName local_res10;
  FString local_18;
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar8);
  this_00 = StaticEnum<enum_EDS_ItemSlotStateType>();
  EVar9 = local_res8[0];
  if (this_00 != (UEnum *)0x0) {
    iVar7 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    pFVar5 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                            FNAME_Add);
    lVar6 = UEnum::GetValueByName(this_00,*pFVar5,None);
    EVar9 = (EDS_ItemSlotStateType)lVar6;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar9;
}

// GetItemTID @ 14bd5d8d0

int __thiscall UDS_M_ItemImplBase::GetItemTID(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return 0;
  }
  return this->ItemBaseTable->ID;
}

// GetItemTypeName @ 14bd5d8f0

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetItemTypeName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  UEnum *pUVar1;
  FName local_res8;
  
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar1 = StaticEnum<enum_EDS_ItemType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar1);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetItemUID @ 14bd5d9b0

long64 __thiscall UDS_M_ItemImplBase::GetItemUID(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  longlong lVar5;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  lVar5 = _wtoi64(_Str);
  return lVar5;
}

// GetMaxDurability @ 14bd5daa0

int __thiscall UDS_M_ItemImplBase::GetMaxDurability(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return 0;
  }
  return this->ItemBaseTable->Durability;
}

// GetOwnedQuantity @ 14bd5ecb0

int __thiscall UDS_M_ItemImplBase::GetOwnedQuantity(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  int iVar4;
  FDS_ItemSlotStateTableRow *pFVar5;
  UObject *pUVar6;
  int *piVar7;
  int *piVar8;
  EDS_InventoryType local_res8 [8];
  FWeakObjectPtr local_res10;
  
  (**(code **)(this->_padding_ + 0x3a0))(this,&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    EVar3 = GetItemSlotType(this);
    pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
    if (pFVar5 != (FDS_ItemSlotStateTableRow *)0x0) {
      pUVar6 = FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = (**(code **)(this->_padding_ + 0x4a8))(this);
      piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[10].field_0x18,(uint)local_res8[0],local_res8);
      piVar8 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                         (&pUVar6[8].field_0x18,(uint)local_res8[0],local_res8);
      return *piVar7 + *piVar8;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662618>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x2e6,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return 0;
}

// GetOwnedQuantityTradable @ 14bd5eda0

int __thiscall UDS_M_ItemImplBase::GetOwnedQuantityTradable(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  int *piVar3;
  EDS_InventoryType local_res8 [8];
  FWeakObjectPtr local_res10 [3];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return 0;
  }
  local_res8[0] = PlayerNormal;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar2[10].field_0x18,1,local_res8);
  return *piVar3;
}

// GetOwnedQuantityUnTradable @ 14bd5ee00

int __thiscall UDS_M_ItemImplBase::GetOwnedQuantityUnTradable(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  int iVar2;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
  iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
  return iVar2;
}

// GetPassiveSkillDesc @ 14bd5ee50

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetPassiveSkillDesc(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  FDS_SkillPassiveTableRow *pFVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x460))();
  if (iVar1 < 1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = FDS_SkillPassiveTableRow::Get((longlong)iVar1,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (pFVar2 != (FDS_SkillPassiveTableRow *)0x0) {
    FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar2->ID_Explain);
  }
  return __return_storage_ptr__;
}

// GetPassiveSkillID @ 14bd5ef00

int __thiscall UDS_M_ItemImplBase::GetPassiveSkillID(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return 0;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return *(int *)&pUVar2[0x10].field_0x24;
}

// GetPassiveSkillName @ 14bd5ef50

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetPassiveSkillName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  FDS_SkillPassiveTableRow *pFVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x460))();
  if (iVar1 < 1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = FDS_SkillPassiveTableRow::Get((longlong)iVar1,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (pFVar2 != (FDS_SkillPassiveTableRow *)0x0) {
    FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar2->ID_Name);
  }
  return __return_storage_ptr__;
}

// GetPrefixID @ 14bd5f000

int __thiscall UDS_M_ItemImplBase::GetPrefixID(UDS_M_ItemImplBase *this)

{
  int iVar1;
  longlong lVar2;
  FDS_ItemEnchantTableRow *pFVar3;
  long64 lVar4;
  
  lVar2 = (**(code **)(this->_padding_ + 0x3b0))();
  if (lVar2 == 0) {
    return 0;
  }
  pFVar3 = FDS_ItemEnchantTableRow::Get((longlong)*(int *)(lVar2 + 0xa4),false);
  if (pFVar3 != (FDS_ItemEnchantTableRow *)0x0) {
    return pFVar3->ID_Prefix;
  }
  lVar4 = (**(code **)(this->_padding_ + 0x388))(this);
  iVar1 = DS_ItemDataUtil::GetPrefixIDByUID(lVar4);
  return iVar1;
}

// GetPrefixName @ 14bd5f170

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetPrefixName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  FDS_ItemPrefixTableRow *pFVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x478))();
  if (iVar1 < 1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = FDS_ItemPrefixTableRow::Get((longlong)iVar1,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (pFVar2 != (FDS_ItemPrefixTableRow *)0x0) {
    FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar2->ID_Name);
  }
  return __return_storage_ptr__;
}

// GetPrefixStatus @ 14bd5f420

FDS_EntryBindingEventField * __thiscall
UDS_M_ItemImplBase::GetPrefixStatus
          (UDS_M_ItemImplBase *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_UserObjectListItem *this_00;
  UDS_M_ItemDetail_StatusSlot *this_01;
  long64 lVar5;
  undefined8 *puVar6;
  FDS_EntryBindingEventField *pFVar7;
  atomic<unsigned_char> *paVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  TArray<FDS_ItemStatusData,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  iVar4 = (**(code **)(this->_padding_ + 0x478))();
  DS_ItemDataUtil::GetPrefixStatus(&local_68,iVar4);
  iVar4 = local_68.ArrayNum;
  pFVar9 = local_68.AllocatorInstance.Data + 0x10;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar4 * 0x18;
  do {
    if (local_68.ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_ItemStatusData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 + -0x10 == pFVar1) goto LAB_14bd5f5ff;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd5f5d2;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd5f5d2:
        iVar4 = 0x613;
        paVar8 = &bGEnsureHasExecuted<_3571834003243661805>;
        goto LAB_14bd5f5df;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    this_01 = NewObject<UDS_M_ItemDetail_StatusSlot>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 == (UDS_M_ItemDetail_StatusSlot *)0x0) goto LAB_14bd5f5c3;
    }
    else {
      if (this_01 == (UDS_M_ItemDetail_StatusSlot *)0x0) {
LAB_14bd5f5c3:
        iVar4 = 0x616;
        paVar8 = &bGEnsureHasExecuted<_3571834003243661802>;
LAB_14bd5f5df:
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (paVar8,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                           ,iVar4,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar7;
        }
LAB_14bd5f5ff:
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    UDS_M_ItemDetail_StatusSlot::SetStatusType(this_01,*(EDS_StatusType *)(pFVar9 + -0x10));
    UDS_M_ItemDetail_StatusSlot::SetStatusIconID(this_01,*(int *)(pFVar9 + -8));
    UDS_M_ItemDetail_StatusSlot::SetStatusNameID(this_01,*(long64 *)pFVar9);
    lVar5 = (**(code **)(this->_padding_ + 0x500))(this);
    UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusName(this_01,lVar5);
    UDS_M_ItemDetail_StatusSlot::SetStatusValue(this_01,*(int *)(pFVar9 + -0xc));
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)this_01 + 0x310))(this_01,local_48);
    local_58.Object = (FDS_ViewModelContext *)*puVar6;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(this_00,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    pFVar9 = pFVar9 + 0x18;
  } while( true );
}

// GetQuantity @ 14bd5f640

int __thiscall UDS_M_ItemImplBase::GetQuantity(UDS_M_ItemImplBase *this)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  undefined1 local_res8 [8];
  
  this_00 = &this->_padding_;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>((FDS_DataContainer *)this_00,Quantity);
  if (!bVar2) {
    return 0;
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)this_00,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    iVar4 = _wtoi((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    return iVar4;
  }
  iVar4 = _wtoi(L"");
  return iVar4;
}

// GetQuantityTextCenter @ 14bd60190

FText * __thiscall
UDS_M_ItemImplBase::GetQuantityTextCenter(UDS_M_ItemImplBase *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  EDS_ItemSlotStateType EVar4;
  bool bVar5;
  FText *pFVar6;
  FDS_ItemSlotStateTableRow *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  cVar3 = (**(code **)(this->_padding_ + 0x588))();
  if (cVar3 == '\0') {
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
  }
  else {
    EVar4 = GetItemSlotType(this);
    pFVar7 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar4,true);
    if (pFVar7 != (FDS_ItemSlotStateTableRow *)0x0) {
      GetQuantityToText(this,__return_storage_ptr__,pFVar7->CenterDisplayType);
      return __return_storage_ptr__;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663028>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x14c,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      __return_storage_ptr__->Flags = pFVar6->Flags;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  return __return_storage_ptr__;
}

// GetQuantityTextRightBottom @ 14bd60290

FText * __thiscall
UDS_M_ItemImplBase::GetQuantityTextRightBottom
          (UDS_M_ItemImplBase *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  EDS_ItemSlotStateType EVar3;
  bool bVar4;
  FDS_ItemSlotStateTableRow *pFVar5;
  FText *pFVar6;
  undefined1 local_res18 [16];
  
  EVar3 = GetItemSlotType(this);
  pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
  if (pFVar5 != (FDS_ItemSlotStateTableRow *)0x0) {
    GetQuantityToText(this,__return_storage_ptr__,pFVar5->RightBottomDisplayType);
    return __return_storage_ptr__;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3571834003243663043>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,0x13d,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FText *)(*pcVar2)();
    return pFVar6;
  }
  pFVar6 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  return __return_storage_ptr__;
}

// GetQuantityTextUnder @ 14bd60350

FText * __thiscall
UDS_M_ItemImplBase::GetQuantityTextUnder(UDS_M_ItemImplBase *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  char cVar3;
  EDS_ItemSlotStateType EVar4;
  bool bVar5;
  FText *pFVar6;
  FDS_ItemSlotStateTableRow *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  cVar3 = (**(code **)(this->_padding_ + 0x590))();
  if (cVar3 == '\0') {
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
  }
  else {
    EVar4 = GetItemSlotType(this);
    pFVar7 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar4,true);
    if (pFVar7 != (FDS_ItemSlotStateTableRow *)0x0) {
      GetQuantityToText(this,__return_storage_ptr__,pFVar7->UnderDisplayType);
      return __return_storage_ptr__;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663013>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x15b,"false");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar2)();
      return pFVar6;
    }
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      __return_storage_ptr__->Flags = pFVar6->Flags;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  return __return_storage_ptr__;
}

// GetQuantityToText @ 14bd60450

FText * __thiscall
UDS_M_ItemImplBase::GetQuantityToText
          (UDS_M_ItemImplBase *this,FText *__return_storage_ptr__,EDS_QuantityDisplayType param_1)

{
  ITextData *pIVar1;
  int iVar2;
  int iVar3;
  FText *pFVar4;
  FString *pFVar5;
  undefined1 local_res18 [8];
  FDS_StringUiID local_28;
  FString local_18;
  
  if (param_1 == Owned) {
    iVar2 = (**(code **)(this->_padding_ + 0x360))();
  }
  else if (param_1 == OwnedTradable) {
    iVar2 = (**(code **)(this->_padding_ + 0x368))();
  }
  else {
    if (param_1 != OwnedUntradable) {
      if (param_1 == Quantity) {
        iVar2 = (**(code **)(this->_padding_ + 0x378))();
        local_28.ID = 0x9f18;
        local_28._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        pFVar5 = FDS_StringUiID::Str(&local_28);
        pFVar5 = DS_Util::GetFormatString<int>(&local_18,pFVar5,iVar2);
        FText::FromString(__return_storage_ptr__,pFVar5);
      }
      else {
        if (param_1 != Craft) {
          pFVar4 = FText::GetEmpty();
          (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
          pIVar1 = (pFVar4->TextData).Reference;
          (__return_storage_ptr__->TextData).Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
          }
          __return_storage_ptr__->Flags = pFVar4->Flags;
          return __return_storage_ptr__;
        }
        iVar2 = (**(code **)(this->_padding_ + 0x378))();
        iVar3 = (**(code **)(this->_padding_ + 0x360))(this);
        local_28.ID = 0x2b0b;
        local_28._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        pFVar5 = FDS_StringUiID::Str(&local_28);
        pFVar5 = DS_Util::GetFormatString<int,int>(&local_18,pFVar5,iVar3,iVar2);
        FText::FromString(__return_storage_ptr__,pFVar5);
      }
      goto LAB_14bd605cc;
    }
    iVar2 = (**(code **)(this->_padding_ + 0x370))();
  }
  local_28._padding_ = 0;
  local_28.ID = 0;
  ::FString::AppendInt((FString *)&local_28,iVar2);
  FText::FromString(__return_storage_ptr__,(FString *)&local_28);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_28._padding_;
LAB_14bd605cc:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRequireLevel @ 14bd605f0

int __thiscall UDS_M_ItemImplBase::GetRequireLevel(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return 0;
  }
  return this->ItemBaseTable->RequireLevel;
}

// GetSellPrice @ 14bd60610

int __thiscall UDS_M_ItemImplBase::GetSellPrice(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return 0;
  }
  return this->ItemBaseTable->SellPrice;
}

// GetSetEffectID @ 14bd60630

int __thiscall UDS_M_ItemImplBase::GetSetEffectID(UDS_M_ItemImplBase *this)

{
  int iVar1;
  longlong lVar2;
  FDS_ItemEnchantTableRow *pFVar3;
  long64 lVar4;
  
  lVar2 = (**(code **)(this->_padding_ + 0x3b0))();
  if (lVar2 == 0) {
    return 0;
  }
  pFVar3 = FDS_ItemEnchantTableRow::Get((longlong)*(int *)(lVar2 + 0xa4),false);
  if (pFVar3 != (FDS_ItemEnchantTableRow *)0x0) {
    return pFVar3->ID_SetEffect;
  }
  lVar4 = (**(code **)(this->_padding_ + 0x388))(this);
  iVar1 = DS_ItemDataUtil::GetSetEffectIDByUID(lVar4);
  return iVar1;
}

// GetSetEffectName @ 14bd607b0

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetSetEffectName(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  FInstancedStruct *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FObjectPtr_u_0 FVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FDS_ItemSetEffectTableRow *pFVar11;
  FDS_Text *pFVar12;
  FObjectPtr_u_0 *pFVar13;
  FDS_Int32StringFormatArg *pFVar14;
  longlong lVar15;
  uint uVar16;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_28;
  
  cVar5 = (**(code **)(this->_padding_ + 0x600))();
  if (cVar5 == '\0') {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar7 = (**(code **)(this->_padding_ + 0x488))(this);
  pFVar11 = FDS_ItemSetEffectTableRow::Get((longlong)iVar7,true);
  if (pFVar11 == (FDS_ItemSetEffectTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar7 = (pFVar11->SetCount).ArrayNum;
  uVar16 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar16 < iVar7) {
    uVar8 = ~uVar16 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FDS_Text *)(*pcVar3)();
      return pFVar12;
    }
  }
  pFVar2 = (pFVar11->SetCount).AllocatorInstance.Data;
  iVar7 = (pFVar11->SetCount).ArrayNum;
  iVar9 = (**(code **)(this->_padding_ + 0x4a0))(this);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  local_28.ArrayNum = iVar10 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringItemID_const_&>
            ((FDS_TextFormatArg *)(local_28.AllocatorInstance.Data + (longlong)iVar10 * 0x28),
             &pFVar11->ID_SetName);
  if (local_28.ArrayNum == local_28.ArrayMax) {
    local_28.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  pFVar1 = (FInstancedStruct *)
           (local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x28);
  local_28.ArrayNum = local_28.ArrayNum + 1;
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar13 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar13[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar13;
  pFVar1[1].StructMemory = (uchar *)FVar4;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar13[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar14 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar14 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar14->Value = iVar9;
  }
  if (local_28.ArrayNum == local_28.ArrayMax) {
    local_28.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x828,&local_28.AllocatorInstance,&local_28.ArrayMax);
  }
  lVar15 = (longlong)local_28.ArrayNum;
  local_28.ArrayNum = local_28.ArrayNum + 1;
  pFVar1 = (FInstancedStruct *)(local_28.AllocatorInstance.Data + lVar15 * 0x28);
  FInstancedStruct::FInstancedStruct(pFVar1);
  pFVar13 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
  FVar4 = pFVar13[1];
  pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar13;
  pFVar1[1].StructMemory = (uchar *)FVar4;
  pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar13[2];
  FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
  pFVar14 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
  if (pFVar14 != (FDS_Int32StringFormatArg *)0x0) {
    pFVar14->Value = *(int *)(pFVar2 + (longlong)iVar7 * 4 + -4);
  }
  FDS_Text::SetTextFormatFromStringTable(__return_storage_ptr__,StringUi,0x9de2,&local_28);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FDS_TextFormatArg *)local_28.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSetEffectOptions @ 14bd61030

FDS_EntryBindingEventField * __thiscall
UDS_M_ItemImplBase::GetSetEffectOptions
          (UDS_M_ItemImplBase *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  EDS_ViewModelTemplateKey *pEVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FLinearColor FVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FDS_ItemSetEffectTableRow *pFVar9;
  FDS_EntryBindingEventField *pFVar10;
  FDS_SkillPassiveTableRow *pFVar11;
  ForAnyElementType *pFVar12;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar13;
  FDS_StatusTableRow *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  UScriptStruct *pUVar16;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong local_res20;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  longlong local_98;
  UDS_UserObjectListItem *local_90;
  longlong local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_70;
  FString local_60 [2];
  
  uVar20 = 0;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  cVar5 = (**(code **)(this->_padding_ + 0x600))();
  if (cVar5 == '\0') {
    return __return_storage_ptr__;
  }
  iVar7 = (**(code **)(this->_padding_ + 0x488))(this);
  pFVar9 = FDS_ItemSetEffectTableRow::Get((longlong)iVar7,true);
  if (pFVar9 != (FDS_ItemSetEffectTableRow *)0x0) {
    iVar7 = (**(code **)(this->_padding_ + 0x4a0))(this);
    local_88 = (longlong)(pFVar9->SetOptionType).ArrayNum;
    if (0 < local_88) {
      local_res20 = 0;
      local_98 = 0;
      do {
        lVar4 = local_98;
        uVar19 = ~uVar20 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar20 < (pFVar9->SetOptionType).ArrayNum) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar10;
        }
        iVar18 = *(int *)((pFVar9->SetOptionType).AllocatorInstance.Data + lVar4);
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0._0_4_ = 0;
        local_c0._4_4_ = 0;
        if (iVar18 == 1) {
          uVar8 = 0;
          if ((int)uVar20 < (pFVar9->StatusType).ArrayNum) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
            return pFVar10;
          }
          pFVar14 = FDS_StatusTableRow::Get
                              ((longlong)
                               *(int *)((pFVar9->StatusType).AllocatorInstance.Data +
                                       local_res20 * 4),true);
          if (pFVar14 != (FDS_StatusTableRow *)0x0) {
            uVar8 = 0;
            if ((int)uVar20 < (pFVar9->StatusValue).ArrayNum) {
              uVar8 = uVar19;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
              return pFVar10;
            }
            DS_Util::GetInfoViewValueFormattedString
                      (local_60,pFVar14->InfoViewValueFormat,
                       (float)*(int *)((pFVar9->StatusValue).AllocatorInstance.Data +
                                      local_res20 * 4));
            (**(code **)((pFVar14->ID_StatusName)._padding_ + 8))(&pFVar14->ID_StatusName);
            ::FString::PrintfImpl(&local_a8,L"%s %s");
            if (local_c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data);
            }
            local_c8.Data = local_a8.Data.AllocatorInstance.Data;
            local_c0._0_4_ = local_a8.Data.ArrayNum;
            local_c0._4_4_ = local_a8.Data.ArrayMax;
            local_a8.Data.ArrayNum = 0;
            local_a8.Data.ArrayMax = 0;
            local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
          }
        }
        else if (iVar18 == 2) {
          uVar8 = 0;
          if ((int)uVar20 < (pFVar9->ID_Passive).ArrayNum) {
            uVar8 = uVar19;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
            return pFVar10;
          }
          pFVar11 = FDS_SkillPassiveTableRow::Get
                              ((longlong)
                               *(int *)((pFVar9->ID_Passive).AllocatorInstance.Data +
                                       local_res20 * 4),true);
          if ((pFVar11 != (FDS_SkillPassiveTableRow *)0x0) &&
             (pFVar12 = (ForAnyElementType *)
                        (**(code **)((pFVar11->ID_Explain)._padding_ + 8))(&pFVar11->ID_Explain),
             &local_c8 != pFVar12)) {
            iVar18 = *(int *)&pFVar12[1].Data;
            _Src = pFVar12->Data;
            local_c0._0_4_ = iVar18;
            if ((iVar18 == 0) && (local_c0._4_4_ == 0)) {
              local_c0._0_4_ = 0;
              local_c0._4_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar18,local_c0._4_4_,&local_c8,iVar18,(int *)((longlong)&local_c0 + 4)
                        );
              if (iVar18 != 0) {
                memcpy(local_c8.Data,_Src,(longlong)iVar18 * 2);
              }
            }
          }
        }
        pFVar17 = (FDS_ViewModelContext *)0x0;
        this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar13 = ::operator_new(0x60);
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined4 *)&pFVar13->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 2) = 0;
          *(undefined2 *)((longlong)&pFVar13[1]._padding_ + 6) = 0;
          *(undefined4 *)&pFVar13[2].field_0x1c = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonVariation__6B_;
          pFVar13->DerivedStaticStruct = (UStruct *)0x0;
          pFVar13->ViewModelTemplateKey = None;
          *(undefined2 *)&pFVar13[1]._padding_ = 0x101;
          pFVar13[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar13[1].ViewModelName.ComparisonIndex = 0;
          pFVar13[1].ViewModelName.Number = 0;
          *(undefined8 *)&pFVar13[1].ViewModelTemplateKey = 0;
          pFVar13[2]._padding_ = 0;
          FVar3 = FLinearColor::White;
          pFVar13[2].ViewModelTemplateKey = None;
          *(FLinearColor_u_0 *)&pFVar13[2].DerivedStaticStruct =
               (FLinearColor_u_0_s_0)FVar3.field0_0x0;
          pFVar17 = pFVar13;
        }
        pTVar15 = ::operator_new(0x20);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar15->SharedReferenceCount = (atomic<int>)0x1;
          pTVar15[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar15->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonVariation__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar15->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar15[1].SharedReferenceCount = pFVar17;
        }
        if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar10;
        }
        pUVar16 = FDS_ViewModelContext_CommonVariation::StaticStruct();
        pFVar17->DerivedStaticStruct = (UStruct *)pUVar16;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_80.Object = pFVar17;
          local_80.SharedReferenceCount.ReferenceController = pTVar15;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_80);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
        }
        pFVar17->ViewModelTemplateKey = Common_Variation;
        *(undefined1 *)&pFVar17[1]._padding_ = 4;
        iVar18 = (int)local_c0 + -1;
        if ((int)local_c0 == 0) {
          iVar18 = 0;
        }
        ::FString::AssignRange
                  ((FString *)&pFVar17[1].DerivedStaticStruct,(wchar_t *)local_c8.Data,iVar18);
        uVar8 = 0;
        if ((int)uVar20 < (pFVar9->SetCount).ArrayNum) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar10;
        }
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        ::FString::AppendInt
                  (&local_b8,*(int *)((pFVar9->SetCount).AllocatorInstance.Data + local_res20 * 4));
        pEVar1 = &pFVar17[1].ViewModelTemplateKey;
        if ((FString *)pEVar1 != &local_b8) {
          if (*(void **)pEVar1 != (void *)0x0) {
            FMemory::Free(*(void **)pEVar1);
          }
          *(FScriptContainerElement **)pEVar1 = local_b8.Data.AllocatorInstance.Data;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)&pFVar17[2]._padding_ = local_b8.Data.ArrayNum;
          *(int *)((longlong)&pFVar17[2]._padding_ + 4) = local_b8.Data.ArrayMax;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        uVar8 = 0;
        if ((int)uVar20 < (pFVar9->SetCount).ArrayNum) {
          uVar8 = uVar19;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FDS_EntryBindingEventField *)(*pcVar2)();
          return pFVar10;
        }
        pFVar17[2].ViewModelTemplateKey =
             (iVar7 < *(int *)((pFVar9->SetCount).AllocatorInstance.Data + local_res20 * 4)) +
             0x1519;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_70.Object = pFVar17;
        local_70.SharedReferenceCount.ReferenceController = pTVar15;
        UDS_UserObjectListItem::AddContext(this_00,&local_70);
        local_90 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FDS_EntryBindingEventField::Add
                  (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        local_res20 = local_res20 + 1;
        local_98 = local_98 + 4;
        uVar20 = uVar20 + 1;
      } while (local_res20 < local_88);
    }
  }
  return __return_storage_ptr__;
}

// GetSetEffectTitle @ 14bd616a0

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetSetEffectTitle(UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  char cVar1;
  int iVar2;
  FDS_ItemSetEffectTableRow *pFVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x600))();
  if (cVar1 == '\0') {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar2 = (**(code **)(this->_padding_ + 0x488))(this);
  pFVar3 = FDS_ItemSetEffectTableRow::Get((longlong)iVar2,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (pFVar3 != (FDS_ItemSetEffectTableRow *)0x0) {
    FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar3->ID_SetTitle);
  }
  return __return_storage_ptr__;
}

// GetSlotGradeBgColor @ 14bd61760

FLinearColor * __thiscall
UDS_M_ItemImplBase::GetSlotGradeBgColor
          (UDS_M_ItemImplBase *this,FLinearColor *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetSlotGradeBgID @ 14bd61800

int __thiscall UDS_M_ItemImplBase::GetSlotGradeBgID(UDS_M_ItemImplBase *this)

{
  byte bVar1;
  FDS_CommonGradeTableRow *pFVar2;
  
  bVar1 = (**(code **)(this->_padding_ + 0x3f0))();
  pFVar2 = FDS_CommonGradeTableRow::Get((ulonglong)bVar1,true);
  if (pFVar2 == (FDS_CommonGradeTableRow *)0x0) {
    return 0;
  }
  return pFVar2->ID_ItemSlotGradeBg;
}

// GetSlotInfo @ 14bd61880

FDS_SlotInfo * __thiscall
UDS_M_ItemImplBase::GetSlotInfo(UDS_M_ItemImplBase *this,FDS_SlotInfo *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (**(code **)(this->_padding_ + 800))();
  (__return_storage_ptr__->SlotInfo).Object = (this->SlotInfo).SlotInfo.Object;
  pTVar1 = (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SlotInfo).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetStatus @ 14bd61c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDS_EntryBindingEventField * __thiscall
UDS_M_ItemImplBase::GetStatus
          (UDS_M_ItemImplBase *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  FDS_EquipmentItemValueData *pFVar6;
  FDS_EquipmentItemComparisonData *pFVar7;
  FDS_ItemAbilityTableRow *pFVar8;
  FDS_EntryBindingEventField *pFVar9;
  FDS_StatusTableRow *pFVar10;
  UObject *pUVar11;
  UDS_UserObjectListItem *pUVar12;
  UDS_M_ItemDetail_StatusSlot *pUVar13;
  long64 lVar14;
  int *piVar15;
  long64 lVar16;
  undefined8 *puVar17;
  byte bVar18;
  ulonglong uVar19;
  ForAnyElementType *pFVar20;
  atomic<unsigned_char> *paVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  EDS_StatusType EVar25;
  ForElementType<unsigned_int> FVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_588 [32];
  undefined1 local_558;
  undefined1 local_557 [3];
  uint local_554;
  FDS_EntryBindingEventField *local_550;
  EDS_StatusType local_548 [2];
  EDS_StatusType local_540 [2];
  EDS_StatusType local_538 [2];
  EDS_StatusType local_530 [2];
  FWeakObjectPtr local_528;
  FScriptContainerElement *local_520;
  FWeakObjectPtr local_518;
  ForAnyElementType *local_510;
  int iStack_508;
  uint uStack_504;
  TBitArray<FDefaultBitArrayAllocator> *local_500;
  undefined4 uStack_4f8;
  uint uStack_4f4;
  int local_4f0;
  uint uStack_4ec;
  int iStack_4e8;
  undefined4 uStack_4e4;
  UDS_UserObjectListItem *local_4e0;
  UDS_UserObjectListItem *local_4d8;
  ForAnyElementType *local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4c8;
  undefined8 uStack_4a8;
  TSharedPtr<FDS_ViewModelContext,1> local_4a0;
  TSharedPtr<FDS_ViewModelContext,1> local_490;
  undefined1 local_480 [8];
  TReferenceControllerBase<1> *local_478;
  undefined1 local_470 [8];
  TReferenceControllerBase<1> *local_468;
  int local_458;
  ForAnyElementType local_450;
  undefined8 local_448;
  TBitArray<FDefaultBitArrayAllocator> local_440;
  undefined8 uStack_420;
  void *local_410;
  undefined4 local_408;
  ForAnyElementType local_400;
  undefined8 local_3f8;
  TBitArray<FDefaultBitArrayAllocator> local_3f0;
  undefined8 uStack_3d0;
  void *local_3c0;
  undefined4 local_3b8;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  TBitArray<FDefaultBitArrayAllocator> local_3a0;
  undefined8 uStack_380;
  void *local_370;
  undefined4 local_368;
  undefined1 local_358 [8];
  ForAnyElementType local_350;
  undefined8 local_348;
  TBitArray<FDefaultBitArrayAllocator> local_340;
  undefined8 uStack_320;
  void *local_310;
  undefined4 local_308;
  ForAnyElementType local_300;
  undefined8 local_2f8;
  TBitArray<FDefaultBitArrayAllocator> local_2f0;
  undefined8 uStack_2d0;
  void *local_2c0;
  undefined4 local_2b8;
  FDS_EquipmentItemValueData local_2a8;
  FDS_EquipmentItemValueData local_1f8;
  FDS_EquipmentItemComparisonData local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return __return_storage_ptr__;
  }
  if (this->ItemBaseTable->ID_Ability == 0) {
    return __return_storage_ptr__;
  }
  local_358._0_4_ = 0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = 0;
  local_340.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_340.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_340.MaxBits = _UNK_150631d94;
  uStack_320 = _UNK_150631d98;
  local_310 = (void *)0x0;
  local_308 = 0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = 0;
  local_2f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_2f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_2f0.MaxBits = _UNK_150631d94;
  uStack_2d0 = _UNK_150631d98;
  local_2c0 = (void *)0x0;
  local_2b8 = 0;
  local_458 = 0;
  local_450.Data = (FScriptContainerElement *)0x0;
  local_448 = 0;
  local_440.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_440.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_440.MaxBits = _UNK_150631d94;
  uStack_420 = _UNK_150631d98;
  local_410 = (void *)0x0;
  local_408 = 0;
  local_400.Data = (FScriptContainerElement *)0x0;
  local_3f8 = 0;
  local_3f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3f0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_3f0.MaxBits = _UNK_150631d94;
  uStack_3d0 = _UNK_150631d98;
  local_3c0 = (void *)0x0;
  local_3b8 = 0;
  local_3b0.Data = (FScriptContainerElement *)0x0;
  local_3a8 = 0;
  local_3a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3a0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_3a0.MaxBits = _UNK_150631d94;
  uStack_380 = _UNK_150631d98;
  local_370 = (void *)0x0;
  local_368 = 0;
  local_550 = __return_storage_ptr__;
  (**(code **)(this->_padding_ + 0x3a0))(___xmm_00000000ffffffff0000008000000000,&local_528);
  bVar4 = FWeakObjectPtr::IsValid(&local_528);
  if (bVar4) {
    pFVar6 = FDS_EquipmentItemValueData::GetItemValueData
                       (&local_2a8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_528);
    local_358._0_4_ = pFVar6->CombatPowerEnhanceValue;
    TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
    ::operator=(&local_350,&pFVar6->EnhanceValueList);
    TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
    ::operator=(&local_300,&pFVar6->StatusValueList);
    FDS_EquipmentItemValueData::~FDS_EquipmentItemValueData(&local_2a8);
    (**(code **)(this->_padding_ + 0x3a8))(this,&local_518);
    bVar4 = FWeakObjectPtr::IsValid(&local_518);
    __return_storage_ptr__ = local_550;
    if (bVar4) {
      pFVar7 = FDS_EquipmentItemComparisonData::GetComparisonData
                         (&local_148,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_528,
                          (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_518);
      local_458 = pFVar7->ComparisonCombatPower;
      TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
      ::operator=(&local_450,&pFVar7->ComparisonValue);
      TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
      ::operator=(&local_400,&pFVar7->AddStatus);
      TMap<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
      ::operator=(&local_3b0,&pFVar7->DeleteStatus);
      FDS_EquipmentItemComparisonData::~FDS_EquipmentItemComparisonData(&local_148);
      __return_storage_ptr__ = local_550;
    }
LAB_14bd61e5a:
    pFVar8 = FDS_ItemAbilityTableRow::Get((longlong)this->ItemBaseTable->ID_Ability,true);
    if (pFVar8 != (FDS_ItemAbilityTableRow *)0x0) {
      FDS_EntryBindingEventField::Reset(__return_storage_ptr__);
      local_554 = (pFVar8->StatusType).ArrayNum;
      uVar19 = (ulonglong)(int)local_554;
      pFVar27 = (pFVar8->StatusType).AllocatorInstance.Data;
      local_520 = pFVar27 + uVar19 * 4;
      do {
        pFVar3 = local_520;
        if ((pFVar8->StatusType).ArrayNum != (int)uVar19) {
          local_558 = 0;
          `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_558);
        }
        if (pFVar27 == pFVar3) {
          uVar24 = local_3a0.NumBits;
          iStack_508 = 0;
          uStack_504 = 1;
          local_4f0 = 0;
          uStack_4f4 = 0;
          if (local_3a0.NumBits == 0) goto LAB_14bd629d1;
          FVar26 = (ForElementType<unsigned_int>)&local_3a0;
          if (local_3a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_3a0.AllocatorInstance.SecondaryData;
          }
          uVar23 = *(uint *)FVar26;
          local_4f0 = 0;
          goto joined_r0x00014bd6298a;
        }
        EVar25 = *(EDS_StatusType *)pFVar27;
        pFVar10 = FDS_StatusTableRow::Get((longlong)(int)EVar25,true);
        if (pFVar10 == (FDS_StatusTableRow *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3571834003243661877>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                             ,0x5cb,"false");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FDS_EntryBindingEventField *)(*pcVar2)();
            return pFVar9;
          }
          local_368 = 0;
          if (local_370 != (void *)0x0) {
            FMemory::Free(local_370);
          }
          uVar19 = local_3a8 >> 0x20;
          local_3a8 = local_3a8 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_3b0,0,(int *)((longlong)&local_3a8 + 4));
          }
          iVar5 = local_3a0.MaxBits;
          uStack_380 = 0xffffffff;
          local_3a0._24_8_ = (ulonglong)(uint)local_3a0.MaxBits << 0x20;
          if (0x80 < (uint)iVar5) {
            local_3a0.NumBits = 0;
            local_3a0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3a0,0);
          }
          if (local_3a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_3a0.AllocatorInstance.SecondaryData);
          }
          if (local_3b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data);
          }
          local_3b8 = 0;
          if (local_3c0 != (void *)0x0) {
            FMemory::Free(local_3c0);
          }
          uVar19 = local_3f8 >> 0x20;
          local_3f8 = local_3f8 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_400,0,(int *)((longlong)&local_3f8 + 4));
          }
          iVar5 = local_3f0.MaxBits;
          uStack_3d0 = 0xffffffff;
          local_3f0._24_8_ = (ulonglong)(uint)local_3f0.MaxBits << 0x20;
          if (0x80 < (uint)iVar5) {
            local_3f0.NumBits = 0;
            local_3f0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3f0,0);
          }
          if (local_3f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_3f0.AllocatorInstance.SecondaryData);
          }
          if (local_400.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.Data);
          }
          local_408 = 0;
          if (local_410 != (void *)0x0) {
            FMemory::Free(local_410);
          }
          uVar19 = local_448 >> 0x20;
          local_448 = local_448 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_450,0,(int *)((longlong)&local_448 + 4));
          }
          iVar5 = local_440.MaxBits;
          uStack_420 = 0xffffffff;
          local_440._24_8_ = (ulonglong)(uint)local_440.MaxBits << 0x20;
          if (0x80 < (uint)iVar5) {
            local_440.NumBits = 0;
            local_440.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_440,0);
          }
          if (local_440.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_440.AllocatorInstance.SecondaryData);
          }
          if (local_450.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.Data);
          }
          local_2b8 = 0;
          if (local_2c0 != (void *)0x0) {
            FMemory::Free(local_2c0);
          }
          uVar19 = local_2f8 >> 0x20;
          local_2f8 = local_2f8 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_300,0,(int *)((longlong)&local_2f8 + 4));
          }
          iVar5 = local_2f0.MaxBits;
          uStack_2d0 = 0xffffffff;
          local_2f0._24_8_ = (ulonglong)(uint)local_2f0.MaxBits << 0x20;
          if (0x80 < (uint)iVar5) {
            local_2f0.NumBits = 0;
            local_2f0.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0,0);
          }
          if (local_2f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_2f0.AllocatorInstance.SecondaryData);
          }
          if (local_300.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_300.Data);
          }
          local_308 = 0;
          if (local_310 != (void *)0x0) {
            FMemory::Free(local_310);
          }
          uVar19 = local_348 >> 0x20;
          local_348 = local_348 & 0xffffffff00000000;
          if ((int)uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,&local_350,0,(int *)((longlong)&local_348 + 4));
          }
          iVar5 = local_340.MaxBits;
          uStack_320 = 0xffffffff;
          local_340._24_8_ = (ulonglong)(uint)local_340.MaxBits << 0x20;
          if (0x80 < (uint)iVar5) {
            local_340.NumBits = 0;
            local_340.MaxBits = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_340,0);
          }
          if (local_340.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_340.AllocatorInstance.SecondaryData);
          }
          if (local_350.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_350.Data);
          return __return_storage_ptr__;
        }
        pUVar11 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_UserObjectListItem>(pUVar11);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd62257;
        }
        else {
          if (pUVar12 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd62257:
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_3571834003243661874>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                               ,0x5ce,"false");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar9 = (FDS_EntryBindingEventField *)(*pcVar2)();
              return pFVar9;
            }
            local_368 = 0;
            if (local_370 != (void *)0x0) {
              FMemory::Free(local_370);
            }
            uVar19 = local_3a8 >> 0x20;
            local_3a8 = local_3a8 & 0xffffffff00000000;
            if ((int)uVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_3b0,0,(int *)((longlong)&local_3a8 + 4));
            }
            iVar5 = local_3a0.MaxBits;
            uStack_380 = 0xffffffff;
            local_3a0._24_8_ = (ulonglong)(uint)local_3a0.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_3a0.NumBits = 0;
              local_3a0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3a0,0);
            }
            if (local_3a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_3a0.AllocatorInstance.SecondaryData);
            }
            if (local_3b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b0.Data);
            }
            local_3b8 = 0;
            if (local_3c0 != (void *)0x0) {
              FMemory::Free(local_3c0);
            }
            uVar19 = local_3f8 >> 0x20;
            local_3f8 = local_3f8 & 0xffffffff00000000;
            if ((int)uVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_400,0,(int *)((longlong)&local_3f8 + 4));
            }
            iVar5 = local_3f0.MaxBits;
            uStack_3d0 = 0xffffffff;
            local_3f0._24_8_ = (ulonglong)(uint)local_3f0.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_3f0.NumBits = 0;
              local_3f0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3f0,0);
            }
            if (local_3f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_3f0.AllocatorInstance.SecondaryData);
            }
            if (local_400.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_400.Data);
            }
            local_408 = 0;
            if (local_410 != (void *)0x0) {
              FMemory::Free(local_410);
            }
            uVar19 = local_448 >> 0x20;
            local_448 = local_448 & 0xffffffff00000000;
            if ((int)uVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_450,0,(int *)((longlong)&local_448 + 4));
            }
            iVar5 = local_440.MaxBits;
            uStack_420 = 0xffffffff;
            local_440._24_8_ = (ulonglong)(uint)local_440.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_440.NumBits = 0;
              local_440.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_440,0);
            }
            if (local_440.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_440.AllocatorInstance.SecondaryData);
            }
            if (local_450.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_450.Data);
            }
            local_2b8 = 0;
            if (local_2c0 != (void *)0x0) {
              FMemory::Free(local_2c0);
            }
            uVar19 = local_2f8 >> 0x20;
            local_2f8 = local_2f8 & 0xffffffff00000000;
            if ((int)uVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_300,0,(int *)((longlong)&local_2f8 + 4));
            }
            iVar5 = local_2f0.MaxBits;
            uStack_2d0 = 0xffffffff;
            local_2f0._24_8_ = (ulonglong)(uint)local_2f0.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_2f0.NumBits = 0;
              local_2f0.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0,0);
            }
            if (local_2f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_2f0.AllocatorInstance.SecondaryData);
            }
            if (local_300.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data);
            }
            local_308 = 0;
            if (local_310 != (void *)0x0) {
              FMemory::Free(local_310);
            }
            uVar19 = local_348 >> 0x20;
            local_348 = local_348 & 0xffffffff00000000;
            if ((int)uVar19 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,0,&local_350,0,(int *)((longlong)&local_348 + 4));
            }
            iVar5 = local_340.MaxBits;
            uStack_320 = 0xffffffff;
            local_340._24_8_ = (ulonglong)(uint)local_340.MaxBits << 0x20;
            if (0x80 < (uint)iVar5) {
              local_340.NumBits = 0;
              local_340.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_340,0);
            }
            if (local_340.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_340.AllocatorInstance.SecondaryData);
            }
            if (local_350.Data == (FScriptContainerElement *)0x0) {
              return local_550;
            }
            FMemory::Free(local_350.Data);
            return local_550;
          }
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pUVar11 = GetTransientPackageAsObject();
        pUVar13 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
        if (pUVar13 == (UDS_M_ItemDetail_StatusSlot *)0x0) goto LAB_14bd62197;
        UDS_M_ItemDetail_StatusSlot::SetStatusType(pUVar13,EVar25);
        UDS_M_ItemDetail_StatusSlot::SetStatusIconID(pUVar13,pFVar10->ID_StatusIcon);
        UDS_M_ItemDetail_StatusSlot::SetStatusNameID(pUVar13,(pFVar10->ID_StatusName).ID);
        lVar14 = (**(code **)(this->_padding_ + 0x4f8))(this);
        UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusName(pUVar13,lVar14);
        local_548[0] = EVar25;
        iVar5 = TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<enum_EDS_StatusType>(&local_300,EVar25,local_548);
        if (iVar5 == -1) {
          iVar5 = 0;
        }
        else {
          piVar15 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                    ::FindChecked(&local_300,EVar25);
          iVar5 = *piVar15;
        }
        UDS_M_ItemDetail_StatusSlot::SetStatusValue(pUVar13,iVar5);
        local_540[0] = EVar25;
        iVar5 = TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<enum_EDS_StatusType>(&local_350,EVar25,local_540);
        if (iVar5 == -1) {
          iVar5 = 0;
        }
        else {
          piVar15 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                    ::FindChecked(&local_350,EVar25);
          iVar5 = *piVar15;
        }
        UDS_M_ItemDetail_StatusSlot::SetStatusEnhanceValue(pUVar13,iVar5);
        local_538[0] = EVar25;
        iVar5 = TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<enum_EDS_StatusType>(&local_450,EVar25,local_538);
        if (iVar5 == -1) {
          local_530[0] = EVar25;
          iVar5 = TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<enum_EDS_StatusType>(&local_400,EVar25,local_530);
          if (iVar5 != -1) {
            pFVar20 = &local_400;
            goto LAB_14bd620e7;
          }
        }
        else {
          pFVar20 = &local_450;
LAB_14bd620e7:
          piVar15 = TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
                    ::FindChecked(pFVar20,EVar25);
          UDS_M_ItemDetail_StatusSlot::SetStatusComparisonValue(pUVar13,*piVar15);
        }
        lVar14 = (**(code **)(this->_padding_ + 0x510))(this);
        lVar16 = (**(code **)(this->_padding_ + 0x508))(this);
        UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusComparisonValue(pUVar13,lVar16,lVar14);
        puVar17 = (undefined8 *)(**(code **)(*(longlong *)pUVar13 + 0x310))(pUVar13,local_480);
        local_4a0.Object = (FDS_ViewModelContext *)*puVar17;
        local_4a0.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar17[1];
        if (local_4a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar12,&local_4a0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_478);
        local_4e0 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        __return_storage_ptr__ = local_550;
        FDS_EntryBindingEventField::Add(local_550,(TObjectPtr<UDS_UserObjectListItem>)&local_4e0);
        uVar19 = (ulonglong)local_554;
        pFVar27 = pFVar27 + 4;
      } while( true );
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243661885>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x5c3,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FDS_EntryBindingEventField *)(*pcVar2)();
      return pFVar9;
    }
    local_368 = 0;
    if (local_370 != (void *)0x0) {
      FMemory::Free(local_370);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3b0);
    local_3b8 = 0;
    if (local_3c0 != (void *)0x0) {
      FMemory::Free(local_3c0);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_400);
    local_408 = 0;
    if (local_410 != (void *)0x0) {
      FMemory::Free(local_410);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_450);
    local_2b8 = 0;
  }
  else {
    if (this->ItemBaseTable != (FDS_ItemBaseTableRow *)0x0) {
      pFVar6 = FDS_EquipmentItemValueData::GetItemValueData(&local_1f8,this->ItemBaseTable);
      FDS_EquipmentItemValueData::operator=((FDS_EquipmentItemValueData *)local_358,pFVar6);
      FDS_EquipmentItemValueData::~FDS_EquipmentItemValueData(&local_1f8);
      goto LAB_14bd61e5a;
    }
    if (local_370 != (void *)0x0) {
      FMemory::Free(local_370);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3b0);
    local_3b8 = 0;
    if (local_3c0 != (void *)0x0) {
      FMemory::Free(local_3c0);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_400);
    local_408 = 0;
    if (local_410 != (void *)0x0) {
      FMemory::Free(local_410);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_450);
  }
  if (local_2c0 != (void *)0x0) {
    FMemory::Free(local_2c0);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_300);
  goto LAB_14bd62e85;
joined_r0x00014bd6298a:
  if (uVar23 != 0) goto LAB_14bd629ac;
  lVar22 = (longlong)iStack_508;
  local_4f0 = local_4f0 + 0x20;
  iStack_508 = iStack_508 + 1;
  uStack_4f4 = local_3a0.NumBits;
  if ((int)((local_3a0.NumBits - 1U) + ((int)(local_3a0.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
      iStack_508) goto LAB_14bd629d1;
  uVar23 = *(uint *)((uchar *)((longlong)FVar26 + 4) + lVar22 * 4);
  goto joined_r0x00014bd6298a;
LAB_14bd629ac:
  uStack_504 = -uVar23 & uVar23;
  uVar19 = (ulonglong)uStack_504 * 2 + 1;
  lVar22 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  local_554 = (uint)lVar22;
  uStack_4f4 = (local_554 - 1) + local_4f0;
  if (local_3a0.NumBits < (int)uStack_4f4) {
    uStack_4f4 = local_3a0.NumBits;
  }
LAB_14bd629d1:
  local_510 = &local_3b0;
  local_500 = &local_3a0;
  iStack_4e8 = (int)local_3a8 - uStack_380._4_4_;
  uVar23 = local_3a0.NumBits & 0xffffffe0;
  uStack_4f8 = 0xffffffff;
  TStack_4c8.CurrentBitIndex = uStack_4f4;
  TStack_4c8.UnvisitedBitMask = 0xffffffff;
  TStack_4c8._padding_ = CONCAT44(uStack_504,iStack_508);
  iVar5 = local_3a0.NumBits >> 5;
  TStack_4c8._28_4_ = uStack_4f4;
  TStack_4c8.BaseBitIndex = local_4f0;
  uStack_4a8 = CONCAT44(uStack_4e4,iStack_4e8);
  bVar18 = (byte)local_3a0.NumBits;
  uStack_4ec = uStack_4f4;
  local_4d0 = local_510;
  TStack_4c8.Array = local_500;
  if (local_3a0.NumBits < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FDS_EntryBindingEventField *)(*pcVar2)();
      return pFVar9;
    }
  }
  if (uVar24 != local_3a0.NumBits) {
    FVar26 = (ForElementType<unsigned_int>)&local_3a0;
    if (local_3a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar26 = local_3a0.AllocatorInstance.SecondaryData;
    }
    uVar24 = -1 << (bVar18 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar5 * 4);
    while (uVar24 == 0) {
      lVar22 = (longlong)iVar5;
      uVar23 = uVar23 + 0x20;
      iVar5 = iVar5 + 1;
      uVar24 = local_3a0.NumBits;
      if ((int)((local_3a0.NumBits - 1U) + ((int)(local_3a0.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar5) goto LAB_14bd62af1;
      uVar24 = *(uint *)((uchar *)((longlong)FVar26 + 4) + lVar22 * 4);
    }
    uVar19 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar24 = (uVar23 - 1) + (int)lVar22;
    local_520 = (FScriptContainerElement *)CONCAT44(local_520._4_4_,(int)lVar22);
    if (local_3a0.NumBits < (int)uVar24) {
      uVar24 = local_3a0.NumBits;
    }
  }
LAB_14bd62af1:
  do {
    pFVar20 = local_4d0;
    if (*(int *)&local_4d0[1].Data - *(int *)((longlong)&local_4d0[6].Data + 4) != (int)uStack_4a8)
    {
      local_557[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_557);
    }
    if (((TStack_4c8.CurrentBitIndex == uVar24) && (TStack_4c8.Array == &local_3a0)) &&
       (pFVar20 == &local_3b0)) {
      local_368 = 0;
      if (local_370 != (void *)0x0) {
        FMemory::Free(local_370);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_3b0);
      local_3b8 = 0;
      if (local_3c0 != (void *)0x0) {
        FMemory::Free(local_3c0);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_400);
      local_408 = 0;
      if (local_410 != (void *)0x0) {
        FMemory::Free(local_410);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_450);
      local_2b8 = 0;
      if (local_2c0 != (void *)0x0) {
        FMemory::Free(local_2c0);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_300);
      goto LAB_14bd62e85;
    }
    uVar1 = *(undefined8 *)(pFVar20->Data + (longlong)TStack_4c8.CurrentBitIndex * 0x10);
    pUVar11 = GetTransientPackageAsObject();
    pUVar12 = NewObject<UDS_UserObjectListItem>(pUVar11);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar12 == (UDS_UserObjectListItem *)0x0) goto LAB_14bd62d6c;
    }
    else {
      if (pUVar12 == (UDS_UserObjectListItem *)0x0) {
LAB_14bd62d6c:
        local_368 = 0;
        if (local_370 != (void *)0x0) {
          FMemory::Free(local_370);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_3b0);
        local_3b8 = 0;
        if (local_3c0 != (void *)0x0) {
          FMemory::Free(local_3c0);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_400);
        local_408 = 0;
        if (local_410 != (void *)0x0) {
          FMemory::Free(local_410);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_450);
        local_2b8 = 0;
        if (local_2c0 != (void *)0x0) {
          FMemory::Free(local_2c0);
        }
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_300);
        goto LAB_14bd62e85;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    EVar25 = (EDS_StatusType)uVar1;
    pFVar10 = FDS_StatusTableRow::Get((longlong)(int)EVar25,true);
    if (pFVar10 == (FDS_StatusTableRow *)0x0) {
      iVar5 = 0x5f6;
      paVar21 = &bGEnsureHasExecuted<_3571834003243661834>;
      goto LAB_14bd621a4;
    }
    pUVar11 = GetTransientPackageAsObject();
    pUVar13 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
    if (pUVar13 == (UDS_M_ItemDetail_StatusSlot *)0x0) break;
    UDS_M_ItemDetail_StatusSlot::SetStatusType(pUVar13,EVar25);
    UDS_M_ItemDetail_StatusSlot::SetStatusIconID(pUVar13,pFVar10->ID_StatusIcon);
    UDS_M_ItemDetail_StatusSlot::SetStatusNameID(pUVar13,(pFVar10->ID_StatusName).ID);
    lVar14 = (**(code **)(this->_padding_ + 0x4f8))(this);
    UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusName(pUVar13,lVar14);
    UDS_M_ItemDetail_StatusSlot::SetStatusValue(pUVar13,0);
    UDS_M_ItemDetail_StatusSlot::SetStatusComparisonValue(pUVar13,-(int)((ulonglong)uVar1 >> 0x20));
    lVar14 = (**(code **)(this->_padding_ + 0x510))(this);
    lVar16 = (**(code **)(this->_padding_ + 0x508))(this);
    UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusComparisonValue(pUVar13,lVar16,lVar14);
    puVar17 = (undefined8 *)(**(code **)(*(longlong *)pUVar13 + 0x310))(pUVar13,local_470);
    local_490.Object = (FDS_ViewModelContext *)*puVar17;
    local_490.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar17[1];
    if (local_490.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_490.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_490.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_UserObjectListItem::AddContext(pUVar12,&local_490);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_468);
    local_4d8 = pUVar12;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    FDS_EntryBindingEventField::Add(local_550,(TObjectPtr<UDS_UserObjectListItem>)&local_4d8);
    TStack_4c8.UnvisitedBitMask = TStack_4c8.UnvisitedBitMask & ~TStack_4c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4c8);
  } while( true );
  iVar5 = 0x5f9;
  paVar21 = &bGEnsureHasExecuted<_3571834003243661831>;
  goto LAB_14bd621a4;
LAB_14bd62197:
  iVar5 = 0x5d1;
  paVar21 = &bGEnsureHasExecuted<_3571834003243661871>;
LAB_14bd621a4:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar21,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,iVar5,"false");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FDS_EntryBindingEventField *)(*pcVar2)();
    return pFVar9;
  }
  local_368 = 0;
  if (local_370 != (void *)0x0) {
    FMemory::Free(local_370);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3b0);
  local_3b8 = 0;
  if (local_3c0 != (void *)0x0) {
    FMemory::Free(local_3c0);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_400);
  local_408 = 0;
  if (local_410 != (void *)0x0) {
    FMemory::Free(local_410);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_450);
  local_2b8 = 0;
  if (local_2c0 != (void *)0x0) {
    FMemory::Free(local_2c0);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_300);
LAB_14bd62e85:
  local_308 = 0;
  if (local_310 != (void *)0x0) {
    FMemory::Free(local_310);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_350);
  return local_550;
}

// GetStyleIDQuantity @ 14bd63250

long64 __thiscall
UDS_M_ItemImplBase::GetStyleIDQuantity(UDS_M_ItemImplBase *this,EDS_QuantityDisplayType param_1)

{
  int iVar1;
  int iVar2;
  long64 lVar3;
  
  if (param_1 != Craft) {
    return 0x835;
  }
  iVar1 = (**(code **)(this->_padding_ + 0x378))();
  iVar2 = (**(code **)(this->_padding_ + 0x360))(this);
  lVar3 = 0x835;
  if (iVar2 < iVar1) {
    lVar3 = 0x849;
  }
  return lVar3;
}

// GetStyleIDQuantityCenter @ 14bd632b0

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDQuantityCenter(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  FDS_ItemSlotStateTableRow *pFVar4;
  long64 lVar5;
  
  EVar2 = GetItemSlotType(this);
  pFVar4 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 != (FDS_ItemSlotStateTableRow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd63312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(this->_padding_ + 0x538))(this,pFVar4->CenterDisplayType);
    return lVar5;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3571834003243663073>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,0x11f,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  return 0;
}

// GetStyleIDQuantityRighBottom @ 14bd63320

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDQuantityRighBottom(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  char cVar2;
  EDS_ItemSlotStateType EVar3;
  bool bVar4;
  FDS_ItemSlotStateTableRow *pFVar5;
  long64 lVar6;
  
  cVar2 = (**(code **)(this->_padding_ + 0x578))();
  if (cVar2 != '\0') {
    EVar3 = GetItemSlotType(this);
    pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
    if (pFVar5 != (FDS_ItemSlotStateTableRow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd63392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)(this->_padding_ + 0x538))(this,pFVar5->RightBottomDisplayType);
      return lVar6;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663088>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x110,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
  }
  return 0;
}

// GetStyleIDQuantityUnder @ 14bd633a0

long64 __thiscall UDS_M_ItemImplBase::GetStyleIDQuantityUnder(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  FDS_ItemSlotStateTableRow *pFVar4;
  long64 lVar5;
  
  EVar2 = GetItemSlotType(this);
  pFVar4 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 != (FDS_ItemSlotStateTableRow *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd63402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(this->_padding_ + 0x538))(this,pFVar4->UnderDisplayType);
    return lVar5;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3571834003243663058>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                     ,0x12e,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  return 0;
}

// GetTextTagStyleItemName @ 14bd64170

FDS_Text * __thiscall
UDS_M_ItemImplBase::GetTextTagStyleItemName
          (UDS_M_ItemImplBase *this,FDS_Text *__return_storage_ptr__)

{
  EDS_ItemNameTagStyle EVar1;
  code *pcVar2;
  EDS_ItemSlotStateType EVar3;
  bool bVar4;
  byte bVar5;
  FDS_ItemSlotStateTableRow *pFVar6;
  FDS_Text *pFVar7;
  FDS_CommonGradeTableRow *pFVar8;
  undefined1 local_f8 [48];
  void *local_c8;
  FDS_TextFormatArg *local_b8;
  int local_b0;
  undefined1 local_a8 [48];
  void *local_78;
  FDS_TextFormatArg *local_68;
  int local_60;
  undefined1 local_58 [48];
  void *local_28;
  FDS_TextFormatArg *local_18;
  int local_10;
  
  EVar3 = GetItemSlotType(this);
  pFVar6 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
  if (pFVar6 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662207>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x481,"false");
    if (!bVar4) {
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar7 = (FDS_Text *)(*pcVar2)();
    return pFVar7;
  }
  bVar5 = (**(code **)(this->_padding_ + 0x3f0))(this);
  pFVar8 = FDS_CommonGradeTableRow::Get((ulonglong)bVar5,true);
  if (pFVar8 == (FDS_CommonGradeTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662204>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x484,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FDS_Text *)(*pcVar2)();
      return pFVar7;
    }
LAB_14bd6424f:
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    EVar1 = pFVar6->ItemNameTagStyle;
    if (EVar1 == S) {
      pFVar7 = (FDS_Text *)(**(code **)(this->_padding_ + 0x400))(this,local_58);
      DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar8->ID_TagStyleS,pFVar7);
      DestructItems<FDS_TextFormatArg,int>(local_18,local_10);
      if (local_18 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_18);
      }
    }
    else if (EVar1 == M) {
      pFVar7 = (FDS_Text *)(**(code **)(this->_padding_ + 0x400))(this,local_a8);
      DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar8->ID_TagStyleM,pFVar7);
      DestructItems<FDS_TextFormatArg,int>(local_68,local_60);
      local_28 = local_78;
      if (local_68 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_68);
        local_28 = local_78;
      }
    }
    else {
      if (EVar1 != L) goto LAB_14bd6424f;
      pFVar7 = (FDS_Text *)(**(code **)(this->_padding_ + 0x400))(this,local_f8);
      DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar8->ID_TagStyleL,pFVar7);
      DestructItems<FDS_TextFormatArg,int>(local_b8,local_b0);
      local_28 = local_c8;
      if (local_b8 != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_b8);
        local_28 = local_c8;
      }
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bd64a20

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemImplBase::GetViewModelContext
          (UDS_M_ItemImplBase *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this,W_Item);
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWeight @ 14bd64e60

int __thiscall UDS_M_ItemImplBase::GetWeight(UDS_M_ItemImplBase *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = (**(code **)(this->_padding_ + 0x378))(this);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(this->_padding_ + 0x360))(this);
  }
  iVar3 = (**(code **)(this->_padding_ + 0x380))(this);
  iVar3 = DS_ItemDataUtil::GetItemWeight(iVar3);
  return iVar3 * iVar2;
}

// InitItemImplMap @ 14bd664e0

void __thiscall UDS_M_ItemImplBase::InitItemImplMap(UDS_M_ItemImplBase *this)

{
  int iVar1;
  longlong lVar2;
  EDS_ItemSlotStateType local_res10 [8];
  TObjectPtr<UClass>_u_0 local_res18;
  UClass *local_res20;
  EDS_ItemSlotStateType *local_28;
  UClass **local_20;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = Base;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0xf) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x0f') {
        if (lVar2 != 0) goto LAB_14bd665a0;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000000f,(bool *)&local_28);
LAB_14bd665a0:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemCookingShare;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x2d) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '-') {
        if (lVar2 != 0) goto LAB_14bd66650;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000002d,(bool *)&local_28);
LAB_14bd66650:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = Return;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0xb) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\v') {
        if (lVar2 != 0) goto LAB_14bd66700;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0xb,
             (bool *)&local_28);
LAB_14bd66700:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = CommonPopup;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x14) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x14') {
        if (lVar2 != 0) goto LAB_14bd667b0;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000014,(bool *)&local_28);
LAB_14bd667b0:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = GachaResult;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 100) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == 'd') {
        if (lVar2 != 0) goto LAB_14bd66860;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000064,(bool *)&local_28);
LAB_14bd66860:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemData;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x10) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x10') {
        if (lVar2 != 0) goto LAB_14bd66910;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000010,(bool *)&local_28);
LAB_14bd66910:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemCooking;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x2b) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '+') {
        if (lVar2 != 0) goto LAB_14bd669c0;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x2b,
             (bool *)&local_28);
LAB_14bd669c0:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemCookingTarget;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x2c) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == ',') {
        if (lVar2 != 0) goto LAB_14bd66a70;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x2c,
             (bool *)&local_28);
LAB_14bd66a70:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemDismantle;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x1b) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x1b') {
        if (lVar2 != 0) goto LAB_14bd66b20;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000001b,(bool *)&local_28);
LAB_14bd66b20:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemDismantleTarget;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x1c) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x1c') {
        if (lVar2 != 0) goto LAB_14bd66bd0;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000001c,(bool *)&local_28);
LAB_14bd66bd0:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = RingCmd;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0xc) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\f') {
        if (lVar2 != 0) goto LAB_14bd66c80;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_0000000c,(bool *)&local_28);
LAB_14bd66c80:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = ItemWarehouse;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x33) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '3') {
        if (lVar2 != 0) goto LAB_14bd66d30;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x33,
             (bool *)&local_28);
LAB_14bd66d30:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = WarehouseCharBagItem;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x34) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '4') {
        if (lVar2 != 0) goto LAB_14bd66de0;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000034,(bool *)&local_28);
LAB_14bd66de0:
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = WarehouseMountBagItem;
  if (ItemImplMap._8_4_ != ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (ItemImplMap._64_8_ != 0) {
      lVar2 = ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(ItemImplMap._72_4_ - 1 & 0x35) * 4);
    while (iVar1 != -1) {
      lVar2 = ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '5') {
        if (lVar2 != 0) goto LAB_14bd66e8f;
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_28 = local_res10;
  local_20 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&ItemImplMap,(uint)&local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x35,
             (bool *)&local_28);
LAB_14bd66e8f:
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = MountGear;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x2f,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = EnchantScrollList;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x40,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = EnchantTargetList;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x3f,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemEnchantScroll;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x42,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemEnchantTarget;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x41,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = MountReclaimItem;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x44,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = PlayerSkillToolList;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x46,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = CharMount;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x31,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = MountInventory;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x32,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = MountFood;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x30,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemRepairInventory;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x37,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemRepairAllTargetSlot;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x38,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemRepairTarget;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x3b,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemRepairMaterial;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x3c,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = ItemRepairRestoreInventory;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x3a,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = Character;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,1,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr);
  local_res18.DebugPtr = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10[0] = CreateCharInitWeapon;
  TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
  ::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
            (&ItemImplMap,0x49,local_res10,(TSubclassOf<UDS_M_ItemImplBase> *)&local_res18.ObjectPtr
            );
  return;
}

// InitModel @ 14bd689f0

void __thiscall
UDS_M_ItemImplBase::InitModel(UDS_M_ItemImplBase *this,EDS_ItemSlotStateType param_1,int param_2)

{
  SetItemSlotType(this,param_1);
  (**(code **)(this->_padding_ + 0x348))(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014bd68a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this);
  return;
}

// InitModel @ 14bd68a30

void __thiscall
UDS_M_ItemImplBase::InitModel
          (UDS_M_ItemImplBase *this,EDS_ItemSlotStateType param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  SetItemSlotType(this,param_1);
  SetItemData(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014bd68a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this);
  return;
}

// IsActionCooltime @ 14bd6a280

bool __thiscall UDS_M_ItemImplBase::IsActionCooltime(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_ItemDataSet *this_00;
  float fVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [3];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    DS_ItemDataUtil::GetItemDataSet();
    bVar1 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      if (0 < *(int *)(pUVar2 + 0x18)) {
        this_00 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(local_res10);
        fVar3 = UDS_ItemDataSet::GetActionCooltime(this_00);
        return 0.0 < fVar3;
      }
      return false;
    }
  }
  return false;
}

// IsCharacterEquipType @ 14bd6a410

bool __thiscall UDS_M_ItemImplBase::IsCharacterEquipType(UDS_M_ItemImplBase *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 != '\0') {
    return false;
  }
  iVar3 = (**(code **)(this->_padding_ + 0x380))(this);
  bVar2 = DS_ItemDataUtil::IsCharacterEquipType(iVar3);
  return bVar2;
}

// IsCharacterExclusive @ 14bd6a450

bool __thiscall UDS_M_ItemImplBase::IsCharacterExclusive(UDS_M_ItemImplBase *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 != '\0') {
    return false;
  }
  iVar3 = (**(code **)(this->_padding_ + 0x380))(this);
  bVar2 = DS_ItemDataUtil::IsCharacterExclusive(iVar3);
  return bVar2;
}

// IsCooldown @ 14bd6aeb0

bool __thiscall UDS_M_ItemImplBase::IsCooldown(UDS_M_ItemImplBase *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x3b8))();
  return 0.0 < fVar1;
}

// IsCraftEffect @ 14bd6aee0

bool __thiscall UDS_M_ItemImplBase::IsCraftEffect(UDS_M_ItemImplBase *this)

{
  return false;
}

// IsCurrentCharacterEquippableByCharacterExclusive @ 14bd6af00

bool __thiscall
UDS_M_ItemImplBase::IsCurrentCharacterEquippableByCharacterExclusive(UDS_M_ItemImplBase *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 != '\0') {
    return false;
  }
  iVar3 = (**(code **)(this->_padding_ + 0x380))(this);
  iVar4 = GetCharID(this);
  bVar2 = DS_ItemDataUtil::IsCharacterEquippableByCharacterExclusive(iVar4,iVar3);
  return bVar2;
}

// IsCurrentCharacterEquippableCharacterEquipType @ 14bd6af60

bool __thiscall
UDS_M_ItemImplBase::IsCurrentCharacterEquippableCharacterEquipType(UDS_M_ItemImplBase *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (cVar1 != '\0') {
    return false;
  }
  iVar3 = (**(code **)(this->_padding_ + 0x380))(this);
  iVar4 = GetCharID(this);
  bVar2 = DS_ItemDataUtil::IsCharacterEquippableCharacterEquipType(iVar4,iVar3);
  return bVar2;
}

// IsDecomposition @ 14bd6afc0

bool __thiscall UDS_M_ItemImplBase::IsDecomposition(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return false;
  }
  return 0 < this->ItemBaseTable->ID_Dismantle;
}

// IsDestruction @ 14bd6afe0

bool __thiscall UDS_M_ItemImplBase::IsDestruction(UDS_M_ItemImplBase *this)

{
  if (this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0) {
    return false;
  }
  return this->ItemBaseTable->IsDestructionAble;
}

// IsDimmed @ 14bd6b000

bool __thiscall UDS_M_ItemImplBase::IsDimmed(UDS_M_ItemImplBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  EDS_ItemSlotStateType EVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FName FVar11;
  FString *pFVar12;
  FDS_ItemSlotStateTableRow *pFVar13;
  UDS_ItemData *pUVar14;
  UObject *pUVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  
  FVar11 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                     ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar3 = *(undefined8 *)FVar11;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  pFVar12 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar8 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar11);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  bVar5 = FToBoolHelper::FromCStringWide(pwVar16);
  if (bVar5) {
LAB_14bd6b174:
    bVar5 = true;
  }
  else {
    EVar6 = GetItemSlotType(this);
    pFVar13 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar6,true);
    if (pFVar13 != (FDS_ItemSlotStateTableRow *)0x0) {
      (**(code **)(this->_padding_ + 0x3a0))(this,&local_res10);
      pFVar17 = (pFVar13->DimmedDisplayType).AllocatorInstance.Data;
      iVar2 = (pFVar13->DimmedDisplayType).ArrayNum;
      pFVar1 = pFVar17 + iVar2;
LAB_14bd6b0c0:
      if ((pFVar13->DimmedDisplayType).ArrayNum != iVar2) {
        `TCheckedPointerIterator<enum_EDS_DimmedDisplayType_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar1) goto LAB_14bd6b25d;
      switch(*pFVar17) {
      case (FScriptContainerElement)0x1:
        cVar7 = (**(code **)(this->_padding_ + 0x570))(this);
        if (cVar7 != '\0') goto LAB_14bd6b174;
        pFVar17 = pFVar17 + 1;
        goto LAB_14bd6b0c0;
      case (FScriptContainerElement)0x2:
        iVar9 = (**(code **)(this->_padding_ + 0x360))(this);
        if (iVar9 < 1) goto LAB_14bd6b174;
        pFVar17 = pFVar17 + 1;
        goto LAB_14bd6b0c0;
      case (FScriptContainerElement)0x3:
        pcVar4 = *(code **)(this->_padding_ + 0x360);
        iVar9 = (**(code **)(this->_padding_ + 0x378))(this);
        iVar10 = (*pcVar4)(this);
        if (iVar10 < iVar9) goto LAB_14bd6b174;
        pFVar17 = pFVar17 + 1;
        goto LAB_14bd6b0c0;
      case (FScriptContainerElement)0x4:
        bVar5 = FWeakObjectPtr::IsValid(&local_res10);
        if (!bVar5) break;
        pUVar14 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
        bVar5 = UDS_ItemData::IsEquipped(pUVar14);
        if (!bVar5) break;
        pUVar14 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
        iVar9 = GetCharID(this);
        bVar5 = UDS_ItemData::IsEquipped(pUVar14,iVar9);
        bVar5 = !bVar5;
        goto LAB_14bd6b24f;
      case (FScriptContainerElement)0x5:
        cVar7 = (**(code **)(this->_padding_ + 0x618))(this);
        if (cVar7 == '\0') goto code_r0x00014bd6b1cd;
        goto LAB_14bd6b174;
      case (FScriptContainerElement)0x6:
        bVar5 = FWeakObjectPtr::IsValid(&local_res10);
        if (bVar5) {
          pUVar14 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
          bVar5 = UDS_ItemData::IsEquipped(pUVar14);
          if (bVar5) goto LAB_14bd6b174;
        }
        break;
      case (FScriptContainerElement)0x8:
        cVar7 = (**(code **)(this->_padding_ + 0x628))(this);
        if (cVar7 == '\0') goto switchD_14bd6b0f4_caseD_a;
        goto LAB_14bd6b174;
      case (FScriptContainerElement)0xa:
switchD_14bd6b0f4_caseD_a:
        bVar5 = FWeakObjectPtr::IsValid(&local_res10);
        if ((bVar5) &&
           (pUVar15 = FWeakObjectPtr::Get(&local_res10), 0 < *(int *)&pUVar15[0x15].field_0x1c)) {
          pUVar15 = FWeakObjectPtr::Get(&local_res10);
          bVar5 = *(int *)&pUVar15[0x11].field_0x4 == 0;
LAB_14bd6b24f:
          if (bVar5) goto LAB_14bd6b174;
        }
      }
      pFVar17 = pFVar17 + 1;
      goto LAB_14bd6b0c0;
    }
LAB_14bd6b25d:
    bVar5 = false;
  }
  return bVar5;
code_r0x00014bd6b1cd:
  pFVar17 = pFVar17 + 1;
  goto LAB_14bd6b0c0;
}

// IsDurability @ 14bd6b5c0

bool __thiscall UDS_M_ItemImplBase::IsDurability(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return 0 < *(int *)&pUVar2[0x15].field_0x18;
}

// IsEmpty @ 14bd6b610

bool __thiscall UDS_M_ItemImplBase::IsEmpty(UDS_M_ItemImplBase *this)

{
  return this->ItemBaseTable == (FDS_ItemBaseTableRow *)0x0;
}

// IsEmptyVisibility @ 14bd6b670

bool __thiscall UDS_M_ItemImplBase::IsEmptyVisibility(UDS_M_ItemImplBase *this)

{
  return true;
}

// IsEquipSlot @ 14bd6b810

bool __thiscall UDS_M_ItemImplBase::IsEquipSlot(UDS_M_ItemImplBase *this)

{
  EDS_SlotType EVar1;
  int iVar2;
  EDS_ItemType EVar3;
  FDS_SlotBaseTableRow *pFVar4;
  UEnum *pUVar5;
  longlong local_res8;
  
  iVar2 = (**(code **)(this->_padding_ + 0x380))();
  if (iVar2 != 0) {
    EVar1 = DS_ItemDataUtil::GetSlotType(iVar2);
    if (EVar1 != None) {
      iVar2 = (**(code **)(this->_padding_ + 0x380))(this);
      if (iVar2 != 0) {
        EVar3 = DS_ItemDataUtil::GetItemType(iVar2);
        pFVar4 = DS_ItemDataUtil::GetSlotBaseTable(EVar3);
        if (pFVar4 != (FDS_SlotBaseTableRow *)0x0) {
          if (pFVar4->IsVisibleSlotTypeName == false) {
            local_res8 = 0;
          }
          else {
            pUVar5 = StaticEnum<enum_EDS_SlotType>();
            DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar5);
          }
          if (((int)local_res8 != 0) || ((int)((ulonglong)local_res8 >> 0x20) != 0)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// IsEquipped @ 14bd6b8b0

bool __thiscall UDS_M_ItemImplBase::IsEquipped(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
  bVar1 = UDS_ItemData::IsEquipped(this_00);
  return bVar1;
}

// IsItemRemoveIcons @ 14bd6b910

bool __thiscall UDS_M_ItemImplBase::IsItemRemoveIcons(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  FName FVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,Subtract);
  if (bVar2) {
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                      ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&this->_padding_,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    bVar2 = FToBoolHelper::FromCStringWide(pwVar8);
    if (bVar2) {
      cVar3 = (**(code **)(this->_padding_ + 0x558))(this);
      return cVar3 == '\0';
    }
  }
  else {
    bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>
                      ((FDS_DataContainer *)&this->_padding_,Quantity);
    if (bVar2) {
      iVar5 = (**(code **)(this->_padding_ + 0x378))(this);
      return 0 < iVar5;
    }
  }
  return false;
}

// IsLock @ 14bd6ba30

bool __thiscall UDS_M_ItemImplBase::IsLock(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  return (bool)pUVar2[0x11].field_0x9;
}

// IsNewSymbol @ 14bd6ba80

bool __thiscall UDS_M_ItemImplBase::IsNewSymbol(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UDS_ItemData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
  bVar1 = UDS_ItemData::IsNewSymbol(this_00);
  return bVar1;
}

// IsPassiveSkill @ 14bd6bc10

bool __thiscall UDS_M_ItemImplBase::IsPassiveSkill(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x460))();
  return 0 < iVar1;
}

// IsPrefix @ 14bd6bc30

bool __thiscall UDS_M_ItemImplBase::IsPrefix(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x478))();
  return 0 < iVar1;
}

// IsQuantity @ 14bd6bc50

bool __thiscall UDS_M_ItemImplBase::IsQuantity(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x378))();
  return 0 < iVar1;
}

// IsQuantityCenter @ 14bd6bc70

bool __thiscall UDS_M_ItemImplBase::IsQuantityCenter(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FDS_ItemSlotStateTableRow *pFVar6;
  
  EVar2 = GetItemSlotType(this);
  pFVar6 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar6 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662931>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x1ad,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    cVar5 = (**(code **)(this->_padding_ + 0x570))(this);
    if (cVar5 != '\0') {
      return pFVar6->CenterDisplayType != None;
    }
  }
  return false;
}

// IsQuantityRightBottom @ 14bd6bd50

bool __thiscall UDS_M_ItemImplBase::IsQuantityRightBottom(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  undefined1 uVar4;
  EDS_ItemUseType EVar5;
  int iVar6;
  FDS_ItemSlotStateTableRow *pFVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res10 [3];
  
  EVar2 = GetItemSlotType(this);
  pFVar7 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar7 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662966>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x18a,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else if (pFVar7->RightBottomDisplayType != None) {
    if (pFVar7->RightBottomDisplayType != Owned) {
      return true;
    }
    (**(code **)(this->_padding_ + 0x3a0))(this,local_res10);
    bVar3 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar3) {
      pUVar8 = FWeakObjectPtr::Get(local_res10);
      EVar5 = DS_ItemDataUtil::GetItemUseType(*(int *)&pUVar8[8].field_0x10);
      if (EVar5 != Equipment) {
        iVar6 = (**(code **)(this->_padding_ + 0x360))(this);
        return 0 < iVar6;
      }
    }
  }
  return false;
}

// IsQuantityTradable @ 14bd6be10

bool __thiscall UDS_M_ItemImplBase::IsQuantityTradable(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  int *piVar3;
  EDS_InventoryType local_res8 [8];
  FWeakObjectPtr local_res10 [3];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  local_res8[0] = PlayerNormal;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  piVar3 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
           ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar2[10].field_0x18,1,local_res8);
  return 0 < *piVar3;
}

// IsQuantityUnder @ 14bd6be70

bool __thiscall UDS_M_ItemImplBase::IsQuantityUnder(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FDS_ItemSlotStateTableRow *pFVar6;
  
  EVar2 = GetItemSlotType(this);
  pFVar6 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar6 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662918>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x1ba,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    cVar5 = (**(code **)(this->_padding_ + 0x570))(this);
    if (cVar5 != '\0') {
      return pFVar6->UnderDisplayType != None;
    }
  }
  return false;
}

// IsQuickSlotRegister @ 14bd6bf20

bool __thiscall UDS_M_ItemImplBase::IsQuickSlotRegister(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UDS_QuickSlotDeckData *this_00;
  UObject *pUVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  TSharedPtr<FDS_QuickSlotData,1> local_18;
  
  UDS_QuickSlotDeckData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,true);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0x3a0))(this,local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      this_00 = (UDS_QuickSlotDeckData *)FWeakObjectPtr::Get(&local_res10);
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      UDS_QuickSlotDeckData::GetQuickSlotDataByUID
                (this_00,&local_18,*(ulong64 *)&pUVar2[8].field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return local_18.Object != (FDS_QuickSlotData *)0x0;
    }
  }
  return false;
}

// IsRequireLevel @ 14bd6bfd0

bool __thiscall UDS_M_ItemImplBase::IsRequireLevel(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x428))();
  return 0 < iVar1;
}

// IsSelected @ 14bd6ca10

bool __thiscall UDS_M_ItemImplBase::IsSelected(UDS_M_ItemImplBase *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// IsSetEffect @ 14bd6cb20

bool __thiscall UDS_M_ItemImplBase::IsSetEffect(UDS_M_ItemImplBase *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x488))();
  return 0 < iVar1;
}

// IsShowDurabilityIcon @ 14bd6cb50

bool __thiscall UDS_M_ItemImplBase::IsShowDurabilityIcon(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UDS_ItemData *this_00;
  FDS_SustainPenaltyTableRow *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x3a0))(this,local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res8);
    pFVar2 = UDS_ItemData::GetDurabilitySustainPenaltyTable(this_00);
    if (pFVar2 != (FDS_SustainPenaltyTableRow *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      if ((0 < *(int *)&pUVar3[0x15].field_0x18) && (pFVar2->IsShowHud != false)) {
        return true;
      }
    }
  }
  return false;
}

// IsTradable @ 14bd6cd00

bool __thiscall UDS_M_ItemImplBase::IsTradable(UDS_M_ItemImplBase *this)

{
  longlong *this_00;
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  bool *pbVar8;
  undefined1 *puVar9;
  int iVar10;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  this_00 = &this->_padding_;
  bVar3 = FDS_DataContainer::IsData<enum_EDS_ItemSlotData>((FDS_DataContainer *)this_00,IsTradable);
  if (!bVar3) {
    (**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&local_res8);
      if (*(int *)(pUVar7 + 0xf) != *(int *)&pUVar7[0x10].field_0x4) {
        puVar9 = *(undefined1 **)&pUVar7[0x10].field_0x10;
        if (*(undefined1 **)&pUVar7[0x10].field_0x10 == (undefined1 *)0x0) {
          puVar9 = &pUVar7[0x10].field_0x8;
        }
        iVar10 = *(int *)(puVar9 + (ulonglong)(*(int *)&pUVar7[0x10].field_0x18 - 1U & 1) * 4);
        if (iVar10 != -1) {
          lVar2 = *(longlong *)&pUVar7[0xe].field_0x20;
          do {
            if (*(char *)(lVar2 + (longlong)iVar10 * 0xc) == '\x01') {
              pbVar8 = TMapBase<enum_EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>_>
                       ::FindChecked(&pUVar7[0xe].field_0x20,PlayerNormal);
              return *pbVar8;
            }
            iVar10 = *(int *)(lVar2 + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
    }
    return false;
  }
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)this_00,(EDS_ItemSlotData)local_res10);
  uVar1 = *(undefined8 *)FVar5;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum != 0) {
    bVar3 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    return bVar3;
  }
  bVar3 = FToBoolHelper::FromCStringWide(L"");
  return bVar3;
}

// OnDeInit @ 14bd768a0

void __thiscall UDS_M_ItemImplBase::OnDeInit(UDS_M_ItemImplBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x6c0))();
  DS_ItemDataUtil::GetItemDataSet();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 0x10),
               (UObject *)this);
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[0x10].field_0x18,
               (UObject *)this);
  }
  return;
}

// OnEventMouseButtonDoubleClick @ 14bd76d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventMouseButtonDoubleClick
          (UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  TObjectPtr<UDS_ModelEventItemBase> TVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res20 = *(UObject **)TVar1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  *(undefined4 *)&pUVar2[5].field_0x8 = 10;
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  FDS_WidgetPointerEventField::operator=
            ((FDS_WidgetPointerEventField *)&pUVar2[5].field_0x10,param_1);
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res18);
  return;
}

// OnEventMouseButtonDown @ 14bd76e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventMouseButtonDown
          (UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TObjectPtr<UDS_ModelEventItemBase> TVar3;
  UObject *pUVar4;
  bool bVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  TVar3 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res10[0] = *(UObject **)TVar3.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  FDS_WidgetPointerEventField::operator=
            ((FDS_WidgetPointerEventField *)&pUVar4[5].field_0x10,param_1);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Pressed,true);
  pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar2 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar5) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar4[5].field_0x8 = 9;
  }
  else {
    pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
             ReferenceController;
    FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = FVar2 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar5) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      *(undefined4 *)&pUVar4[5].field_0x8 = 8;
    }
  }
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnEventMouseButtonUp @ 14bd76f50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventMouseButtonUp
          (UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FName *pFVar3;
  TObjectPtr<UDS_ModelEventItemBase> TVar4;
  UObject *pUVar5;
  bool bVar6;
  FWeakObjectPtr local_res8;
  FName local_res10 [3];
  
  pFVar3 = ::FName::FName(local_res10,"Ani_Click");
  PlayAnimationEvent(this,*pFVar3,PlayForward);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Pressed,false);
  TVar4 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res10[0] = *(FName *)TVar4.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  pUVar5 = FWeakObjectPtr::Get(&local_res8);
  FDS_WidgetPointerEventField::operator=
            ((FDS_WidgetPointerEventField *)&pUVar5[5].field_0x10,param_1);
  pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar2 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar6) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    *(undefined4 *)&pUVar5[5].field_0x8 = 7;
  }
  else {
    pTVar1 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
             ReferenceController;
    FVar2 = (param_1->PointerEvent).EffectingButton.KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = FVar2 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar6) {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      *(undefined4 *)&pUVar5[5].field_0x8 = 6;
    }
  }
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnEventMouseEnter @ 14bd77ef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventMouseEnter(UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_UserWidget *pUVar1;
  code *pcVar2;
  EDS_ItemSlotStateType EVar3;
  bool bVar4;
  FDS_ItemSlotStateTableRow *pFVar5;
  FName *pFVar6;
  TObjectPtr<UDS_ModelEventItemBase> TVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_38;
  UObject *local_30;
  FName local_28 [2];
  
  EVar3 = GetItemSlotType(this);
  pFVar5 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar3,true);
  if (pFVar5 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662473>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x377,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Hovered,true);
    pFVar6 = ::FName::FName(local_28,L"Ani_Hover");
    PlayAnimationEvent(this,*pFVar6,PlayForward);
    if (pFVar5->IsDetailTooltip != false) {
      pUVar1 = param_1->TargetWidget;
      pcVar2 = *(code **)(this->_padding_ + 0x6b8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_UserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_38 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_UserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
      (*pcVar2)(this,local_res20);
      return;
    }
    TVar7 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
    local_30 = *(UObject **)TVar7.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_30);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_30);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
    pUVar8 = FWeakObjectPtr::Get(&local_res18);
    *(undefined4 *)&pUVar8[5].field_0x8 = 4;
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res18)
    ;
  }
  return;
}

// OnEventMouseLeave @ 14bd78210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventMouseLeave(UDS_M_ItemImplBase *this,FDS_WidgetPointerEventField *param_1)

{
  code *pcVar1;
  EDS_ItemSlotStateType EVar2;
  bool bVar3;
  FDS_ItemSlotStateTableRow *pFVar4;
  TObjectPtr<UDS_ModelEventItemBase> TVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  EVar2 = GetItemSlotType(this);
  pFVar4 = FDS_ItemSlotStateTableRow::Get((ulonglong)EVar2,true);
  if (pFVar4 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243662451>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x38d,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Hovered,false);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,Pressed,false);
    if (pFVar4->IsDetailTooltip != false) {
      (**(code **)(this->_padding_ + 0x6c0))();
      return;
    }
    TVar5 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
    local_res20 = *(UObject **)TVar5.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    *(undefined4 *)&pUVar6[5].field_0x8 = 5;
    UDS_ModelBase::UpdateModel
              ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res18)
    ;
  }
  return;
}

// OnEventOnDragCanceled @ 14bd78420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventOnDragCanceled(UDS_M_ItemImplBase *this,FDS_DragDropEventField *param_1)

{
  TObjectPtr<UDS_ModelEventItemBase> TVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Dragging,false);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Pressed,false);
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res18[0] = *(UObject **)TVar1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  *(undefined4 *)&pUVar2[5].field_0x8 = 2;
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnEventOnDragDetected @ 14bd78570

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventOnDragDetected(UDS_M_ItemImplBase *this,FDS_DragDropEventField *param_1)

{
  TObjectPtr<UDS_ModelEventItemBase> TVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Dragging,true);
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res18[0] = *(UObject **)TVar1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  *(undefined4 *)&pUVar2[5].field_0x8 = 1;
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8);
  return;
}

// OnEventOnDrop @ 14bd78620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnEventOnDrop(UDS_M_ItemImplBase *this,FDS_DragDropEventField *param_1)

{
  code *pcVar1;
  long64 lVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  FDS_ItemSlotInfo *pFVar7;
  TObjectPtr<UDS_ModelEventItemBase> TVar8;
  UObject *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  UDragDropOperation *pUVar11;
  FSharedReferencer<1> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Dragging,false);
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Pressed,false);
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr != (UDragDropOperation *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar6);
    if (bVar5) {
      pUVar11 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
      goto LAB_14bd78676;
    }
  }
  pUVar11 = (UDragDropOperation *)0x0;
LAB_14bd78676:
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar11 == (UDragDropOperation *)0x0) {
      return;
    }
  }
  else {
    if (pUVar11 == (UDragDropOperation *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  pFVar7 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)(pUVar11 + 1));
  if ((pFVar7 != (FDS_ItemSlotInfo *)0x0) && (0 < pFVar7->ItemTID)) {
    TVar8 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
    local_res10[0] = *(UObject **)TVar8.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res10[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    bVar5 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar5) {
      pUVar9 = FWeakObjectPtr::Get(&local_res8);
      *(undefined4 *)&pUVar9[5].field_0x8 = 3;
      lVar2 = pFVar7->ItemTID;
      pUVar9 = FWeakObjectPtr::Get(&local_res8);
      *(int *)&pUVar9[5].field_0xc = (int)lVar2;
      pTVar10 = ::operator_new(0xa8);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        local_38 = ___xmm_00000000000000000000000000000010;
        pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
        FVar12.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_DragDropEventField___00_SharedPointerInternals__6B_
        ;
        *(char *)&pTVar10[1]._padding_ = (char)param_1->_padding_;
        pUVar11 = (param_1->DragDropOperation).field0_0x0.DebugPtr;
        *(UDragDropOperation **)&pTVar10[1].SharedReferenceCount = pUVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UDragDropOperation *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        pTVar10[2]._padding_ = (longlong)&___7FInputEvent__6B_;
        *(short *)&pTVar10[2].SharedReferenceCount = (short)(param_1->PointerEvent)._padding_;
        pTVar10[2].SharedReferenceCount.field_0x2 =
             *(undefined1 *)((longlong)&(param_1->PointerEvent)._padding_ + 2);
        pTVar10[2].WeakReferenceCount =
             *(atomic<int> *)((longlong)&(param_1->PointerEvent)._padding_ + 4);
        *(int *)&pTVar10[3]._padding_ = (int)(param_1->PointerEvent)._padding_;
        uVar3 = *(undefined4 *)((longlong)&(param_1->PointerEvent)._padding_ + 4);
        pTVar10[3].SharedReferenceCount =
             (atomic<int>)*(undefined4 *)&(param_1->PointerEvent)._padding_;
        pTVar10[3].WeakReferenceCount = (atomic<int>)uVar3;
        pTVar10[4]._padding_ = (param_1->PointerEvent)._padding_;
        pTVar10[2]._padding_ = (longlong)&___7FPointerEvent__6B_;
        *(FDeprecateSlateVector2D *)&pTVar10[4].SharedReferenceCount =
             (param_1->PointerEvent).ScreenSpacePosition;
        pTVar10[5]._padding_ = (longlong)(param_1->PointerEvent).LastScreenSpacePosition;
        *(FDeprecateSlateVector2D *)&pTVar10[5].SharedReferenceCount =
             (param_1->PointerEvent).CursorDelta;
        pTVar10[6]._padding_ = (longlong)(param_1->PointerEvent).PressedButtons;
        uVar4 = (param_1->PointerEvent).EffectingButton.KeyName.Number;
        pTVar10[6].SharedReferenceCount =
             (atomic<int>)(param_1->PointerEvent).EffectingButton.KeyName.ComparisonIndex.Value;
        pTVar10[6].WeakReferenceCount = (atomic<int>)uVar4;
        pTVar10[7]._padding_ = (longlong)(param_1->PointerEvent).EffectingButton.KeyDetails.Object;
        pTVar13 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
                  ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar10[7].SharedReferenceCount = pTVar13;
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar13 = pTVar10 + 1;
        *(uint *)&pTVar10[8]._padding_ = (param_1->PointerEvent).PointerIndex;
        *(uint *)((longlong)&pTVar10[8]._padding_ + 4) = (param_1->PointerEvent).TouchpadIndex;
        pTVar10[8].SharedReferenceCount = (atomic<int>)(param_1->PointerEvent).Force;
        *(bool *)&pTVar10[8].WeakReferenceCount = (param_1->PointerEvent).bIsTouchEvent;
        pTVar10[8].WeakReferenceCount.field_0x1 = (param_1->PointerEvent).GestureType;
        pTVar10[9]._padding_ = (longlong)(param_1->PointerEvent).WheelOrGestureDelta;
        *(bool *)&pTVar10[9].SharedReferenceCount =
             (param_1->PointerEvent).bIsDirectionInvertedFromDevice;
        pTVar10[9].SharedReferenceCount.field_0x1 = (param_1->PointerEvent).bIsTouchForceChanged;
        pTVar10[9].SharedReferenceCount.field_0x2 = (param_1->PointerEvent).bIsTouchFirstMove;
        *(bool *)&pTVar10[10]._padding_ = param_1->DragCanceled;
        if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        FVar12.ReferenceController = pTVar10;
        local_38 = pTVar13;
      }
      FStack_30.ReferenceController = FVar12.ReferenceController;
      pUVar9 = FWeakObjectPtr::Get(&local_res8);
      if (pUVar9 + 0xc != (UObject *)&local_38) {
        *(TReferenceControllerBase<1> **)(pUVar9 + 0xc) = pTVar13;
        local_38 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pUVar9[0xc].field_0x8,&FStack_30);
        FVar12.ReferenceController = FStack_30.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      UDS_ModelBase::UpdateModel
                ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res8
                );
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3571834003243662399>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                         ,0x3c1,"false");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// OnInit @ 14bd78a90

void __thiscall UDS_M_ItemImplBase::OnInit(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  code *local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  DS_ItemDataUtil::GetItemDataSet();
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 0x10),(UObject *)this
            );
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[0x10].field_0x18,
             (UObject *)this);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_M_ItemImplBase::OnItemUseAction","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14bd78b7a:
    pcVar5 = &DAT_00000002;
LAB_14bd78b7d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14bd78b7a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14bd78b7d;
  }
  ::FName::FName(&local_res18,pcVar5);
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  local_58 = OnItemUseAction;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_M_ItemImplBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar3 + 0x10),this,(pmf_f9ca048f *)&local_58,local_res18);
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_M_ItemImplBase::OnItemUseAction","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_14bd78c78;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14bd78c78:
  ::FName::FName(&local_res20,pcVar6);
  local_58 = OnItemUseAction;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_48 = OnItemUseAction;
  uStack_40 = uStack_50;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_M_ItemImplBase>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             &pUVar3[0x10].field_0x18,this,(pmf_f9ca048f *)&local_48,local_res20);
  return;
}

// OnItemSubtractionButtonClick @ 14bd7a740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OnItemSubtractionButtonClick
          (UDS_M_ItemImplBase *this,FDS_ButtonEventField *param_1)

{
  TObjectPtr<UDS_ModelEventItemBase> TVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  TVar1 = UDS_ModelBase::CreateEvent<UDS_ModelEventItemBase>((UDS_ModelBase *)this);
  local_res20 = *(UObject **)TVar1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  *(undefined4 *)&pUVar2[5].field_0x8 = 0xb;
  UDS_ModelBase::UpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res18);
  return;
}

// OnItemUseAction @ 14bd7ab50

void __thiscall
UDS_M_ItemImplBase::OnItemUseAction(UDS_M_ItemImplBase *this,UDS_DataSetBase *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UEnum *this_00;
  FName FVar5;
  FString *this_01;
  int iVar6;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UObject *local_38;
  undefined1 local_30 [8];
  FString local_28;
  
  UDS_ModelBase::CreateEvent<UDS_ModelEventBase>((UDS_ModelBase *)this);
  if (local_res20 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663212>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x94,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00 = StaticEnum<enum_EDS_ItemViewModelEntry>();
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&local_28,L"");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_28,0x20000000);
    }
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                      ((FDS_DataContainer *)&local_res20[1].field_0x8,
                       (EDS_ItemSlotUpdateViewEvent)local_30);
    uVar1 = *(undefined8 *)FVar5;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&local_res20[1].field_0x8,uVar4 + (int)((ulonglong)uVar1 >> 0x20),
                         (FName *)FVar5);
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(this_01,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pcVar2 = *(code **)(this->_padding_ + 0x2e0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res20);
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_38 = local_res20;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
    (*pcVar2)(this,local_res18,0);
  }
  return;
}

// OnReleasedItem @ 14bd7c790

void __thiscall UDS_M_ItemImplBase::OnReleasedItem(UDS_M_ItemImplBase *this)

{
  int *piVar1;
  longlong *this_00;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  this_00 = &this[-1]._padding_;
  (**(code **)(*this_00 + 0x6c0))(this_00);
  plVar4 = &this[-1]._padding_;
  bVar3 = 1 < (int)this[-1]._padding_;
  if (!bVar3) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    *)plVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)plVar4,0,(int)this[-1]._padding_);
  piVar1 = (int *)((longlong)&this[-1]._padding_ + 4);
  *(undefined4 *)&this[-1]._padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)plVar4,0,piVar1);
  }
  *(undefined4 *)&this[-1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[-1]._padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this[-1]._padding_ + 4);
  *(undefined4 *)&this[-1]._padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this[-1]._padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1]._padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this[-1]._padding_ = 1;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)plVar4);
  }
  plVar4 = &this[-1]._padding_;
  bVar3 = 1 < (int)this[-1]._padding_;
  if (!bVar3) {
    TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)plVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)plVar4,0,(int)this[-1]._padding_);
  piVar1 = (int *)((longlong)&this[-1]._padding_ + 4);
  *(undefined4 *)&this[-1]._padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)plVar4,0,piVar1);
  }
  *(undefined4 *)&this[-1]._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this[-1]._padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this[-1]._padding_ + 4);
  *(undefined4 *)&this[-1]._padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this[-1]._padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this[-1]._padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this[-1]._padding_ = 1;
    TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)plVar4);
  }
  local_res8 = 0;
  UDS_ModelBase::SetParentModel((UDS_ModelBase *)this_00,(TObjectPtr<UDS_ModelBase>)&local_res8);
  UDS_ModelBase::ClearViewDelegate((UDS_ModelBase *)this_00);
  UDS_ModelBase::ClearModelDelegate((UDS_ModelBase *)this_00);
  return;
}

// OpenItemDetailInfo @ 14bd843a0

/* WARNING: Enum "EDS_ItemDetailOption": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplBase::OpenItemDetailInfo
          (UDS_M_ItemImplBase *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  UDS_ItemDetailInfoManager *this_00;
  FWeakObjectPtr *pFVar4;
  undefined8 local_res8;
  FDS_ItemSlotActionInfo local_58;
  
  cVar1 = (**(code **)(this->_padding_ + 0x558))();
  if (((cVar1 != '\x01') && (iVar2 = (**(code **)(this->_padding_ + 0x380))(this), 0 < iVar2)) &&
     (this_00 = UDS_ItemDetailInfoManager::GetInst(), this_00 != (UDS_ItemDetailInfoManager *)0x0))
  {
    local_58.SlotType = None;
    local_res8 = 0;
    local_58.SlotIndex = 0;
    local_58.ItemTID = 0;
    local_58.ItemData.WeakPtr.ObjectIndex = 0;
    local_58.ItemData.WeakPtr.ObjectSerialNumber = 0;
    FWeakObjectPtr::operator=(&local_58.ItemData.WeakPtr,(FObjectPtr)&local_res8);
    local_58.IsShowComparison = true;
    local_58.ItemDetailInfoType = Normal;
    local_58.TargetSlotWidget.WeakPtr.ObjectIndex = 0;
    local_58.TargetSlotWidget.WeakPtr.ObjectSerialNumber = 0;
    local_58.CharID = 0;
    local_58.InventoryType = None;
    local_58.PrefixID = -1;
    local_58.SetEffectID = -1;
    local_58.SlotType = EquipBattle;
    local_58.ActionType = Hover;
    uVar3 = (**(code **)(this->_padding_ + 0x380))(this);
    local_58.ItemTID = uVar3;
    pFVar4 = (FWeakObjectPtr *)(**(code **)(this->_padding_ + 0x3a0))(this,&local_res8);
    local_58.ItemData.WeakPtr = *pFVar4;
    local_58._4_8_ = (ulonglong)(uint)local_58.ItemTID << 0x20;
    local_58._24_2_ = local_58._24_2_ & 0xff;
    local_58.TargetSlotWidget.WeakPtr = param_1.WeakPtr;
    local_58.CharID = GetCharID(this);
    local_58.InventoryType = (**(code **)(this->_padding_ + 0x4a8))(this);
    iVar2 = (**(code **)(this->_padding_ + 0x478))(this);
    local_58.PrefixID = iVar2;
    iVar2 = (**(code **)(this->_padding_ + 0x488))(this);
    local_58.SetEffectID = iVar2;
    UDS_ItemDetailInfoManager::OnItemSlotAction(this_00,&local_58);
    FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
              ((FDS_DataContainer *)&this->_padding_,ItemDetailInfo,true);
  }
  return;
}

// PlayAnimationEvent @ 14bd846c0

void __thiscall
UDS_M_ItemImplBase::PlayAnimationEvent
          (UDS_M_ItemImplBase *this,FName param_1,EDS_AnimationEventType param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  FString *pFVar6;
  FName FVar7;
  FString *pFVar8;
  UEnum *this_00;
  int iVar9;
  FName local_res8;
  FName local_res10;
  FString local_48;
  
  UDS_ModelBase::CreateEvent<UDS_ModelEventBase>((UDS_ModelBase *)this);
  FVar4 = local_res8;
  local_res8 = param_1;
  pFVar6 = ::LexToString(&local_48,&local_res8);
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                    ((FDS_DataContainer *)((longlong)FVar4 + 0x30),
                     (EDS_ItemSlotUpdateViewEvent)&local_res10);
  uVar1 = *(undefined8 *)FVar7;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)((longlong)FVar4 + 0x30),uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar7);
  if (pFVar8 != pFVar6) {
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar8->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (pFVar8->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_00 = StaticEnum<enum_EDS_AnimationEventType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_48,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_48,(ulonglong)param_2);
  }
  FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotUpdateViewEvent>
                    ((FDS_DataContainer *)((longlong)FVar4 + 0x30),
                     (EDS_ItemSlotUpdateViewEvent)&local_res8);
  uVar1 = *(undefined8 *)FVar7;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)((longlong)FVar4 + 0x30),uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar7);
  iVar9 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(pFVar6,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(this->_padding_ + 0x2e0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (FVar4 != (FName)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar4);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  (*pcVar3)(this,local_res8,1);
  return;
}

// PostInitProperties @ 14bd84c20

void __thiscall UDS_M_ItemImplBase::PostInitProperties(UDS_M_ItemImplBase *this)

{
  UDS_ModelBase::PostInitProperties((UDS_ModelBase *)this);
  if ((this->_padding_ & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd84c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x328))(this);
    return;
  }
  return;
}

// SetDimmed @ 14bd881e0

void __thiscall UDS_M_ItemImplBase::SetDimmed(UDS_M_ItemImplBase *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,IsDimmed,param_1);
  return;
}

// SetInventoryType @ 14bd897f0

void __thiscall
UDS_M_ItemImplBase::SetInventoryType(UDS_M_ItemImplBase *this,EDS_InventoryType param_1)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_InventoryType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_1);
  }
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetItemData @ 14bd89d50

void __thiscall
UDS_M_ItemImplBase::SetItemData
          (UDS_M_ItemImplBase *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    SetItemUID(this,*(long64 *)&pUVar3[8].field_0x8);
    pcVar1 = *(code **)(this->_padding_ + 0x348);
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    (*pcVar1)(this,*(undefined4 *)&pUVar3[8].field_0x10);
    UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
    return;
  }
  SetItemUID(this,0);
  (**(code **)(this->_padding_ + 0x348))(this,0);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  return;
}

// SetItemSlotType @ 14bd89df0

void __thiscall
UDS_M_ItemImplBase::SetItemSlotType(UDS_M_ItemImplBase *this,EDS_ItemSlotStateType param_1)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_ItemSlotStateType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)param_1);
  }
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetItemTID @ 14bd89eb0

void __thiscall UDS_M_ItemImplBase::SetItemTID(UDS_M_ItemImplBase *this,int param_1)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  if (param_1 < 1) {
    pFVar1 = (FDS_ItemBaseTableRow *)0x0;
  }
  else {
    pFVar1 = FDS_ItemBaseTableRow::Get((longlong)param_1,true);
  }
  this->ItemBaseTable = pFVar1;
  (**(code **)(this->_padding_ + 800))(this);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  return;
}

// SetItemUID @ 14bd8a060

void __thiscall UDS_M_ItemImplBase::SetItemUID(UDS_M_ItemImplBase *this,long64 param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%lld");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  return;
}

// SetQuantity @ 14bd8a5d0

void __thiscall UDS_M_ItemImplBase::SetQuantity(UDS_M_ItemImplBase *this,int param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if (pFVar5 != &local_18) {
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetSelected @ 14bd8a740

void __thiscall UDS_M_ItemImplBase::SetSelected(UDS_M_ItemImplBase *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Selected,param_1);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  return;
}

// SetSubtract @ 14bd8aca0

void __thiscall UDS_M_ItemImplBase::SetSubtract(UDS_M_ItemImplBase *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,Subtract,param_1);
  return;
}

// SetTradable @ 14bd8aea0

void __thiscall UDS_M_ItemImplBase::SetTradable(UDS_M_ItemImplBase *this,bool param_1)

{
  FDS_DataContainer::SetData<bool,enum_EDS_ItemSlotData>
            ((FDS_DataContainer *)&this->_padding_,IsTradable,param_1);
  return;
}

// UpdateSlotInfo @ 14bd933d0

void __thiscall UDS_M_ItemImplBase::UpdateSlotInfo(UDS_M_ItemImplBase *this)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemSlotStateType EVar3;
  int iVar4;
  undefined4 uVar5;
  FDS_ItemSlotInfo *pFVar6;
  long64 lVar7;
  
  pFVar6 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>(&this->SlotInfo);
  if (pFVar6 == (FDS_ItemSlotInfo *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3571834003243663265>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplBase.cpp"
                       ,0x5f,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6);
    EVar3 = GetItemSlotType(this);
    pFVar6->SlotType = EVar3;
    if (this->ItemBaseTable != (FDS_ItemBaseTableRow *)0x0) {
      iVar4 = (**(code **)(this->_padding_ + 0x380))(this);
      pFVar6->ItemTID = (longlong)iVar4;
      lVar7 = (**(code **)(this->_padding_ + 0x388))(this);
      pFVar6->ItemUID = lVar7;
      uVar5 = (**(code **)(this->_padding_ + 0x390))(this);
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = uVar5;
      uVar5 = (**(code **)(this->_padding_ + 0x3e0))(this);
      *(undefined4 *)&pFVar6->_padding_ = uVar5;
      *(undefined1 *)&pFVar6->_padding_ = 1;
    }
  }
  return;
}

