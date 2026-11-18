// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// StaticClass @ 14b51b390

UClass * __cdecl UDS_M_ItemImplDetail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplDetail",
               &Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplDetail,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplDetail>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplDetail>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton;
}

// UDS_M_ItemImplDetail @ 14b520af0

UDS_M_ItemImplDetail * __thiscall
UDS_M_ItemImplDetail::UDS_M_ItemImplDetail(UDS_M_ItemImplDetail *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InventoryQuantityModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryQuantityModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InventoryWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MoneyDisplayModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MoneyDisplayModel).WeakPtr,(FObjectPtr)&local_res8);
  this->IsItemChanged = false;
  return this;
}

// UDS_M_ItemImplDetail @ 14b520bc0

UDS_M_ItemImplDetail * __thiscall
UDS_M_ItemImplDetail::UDS_M_ItemImplDetail(UDS_M_ItemImplDetail *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InventoryQuantityModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->InventoryQuantityModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InventoryWeightModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->MoneyDisplayModel).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->MoneyDisplayModel).WeakPtr,(FObjectPtr)&local_res8);
  this->IsItemChanged = false;
  return this;
}

// GetPrivateStaticClass @ 14b5253e0

UClass * __cdecl UDS_M_ItemImplDetail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplDetail",
               &Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplDetail,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplDetail>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplDetail>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplDetail.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplDetail @ 14b5273e0

void __cdecl UDS_M_ItemImplDetail::StaticRegisterNativesUDS_M_ItemImplDetail(void)

{
  return;
}

// ~UDS_M_ItemImplDetail @ 14bd43c70

void __thiscall UDS_M_ItemImplDetail::~UDS_M_ItemImplDetail(UDS_M_ItemImplDetail *this)

{
  this->_padding_ = (longlong)&_vftable__for__UDS_ModelBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetDropSlotGradeBgID @ 14bd5bc70

int __thiscall UDS_M_ItemImplDetail::GetDropSlotGradeBgID(UDS_M_ItemImplDetail *this)

{
  return 0;
}

// GetPrefixID @ 14bd5f060

int __thiscall UDS_M_ItemImplDetail::GetPrefixID(UDS_M_ItemImplDetail *this)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  longlong lVar7;
  FDS_ItemEnchantTableRow *pFVar8;
  long64 lVar9;
  undefined1 local_res8 [8];
  
  this_00 = &this->_padding_;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemImplDetailData>
                    ((FDS_DataContainer *)this_00,PrefixID);
  if (bVar2) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemImplDetailData)local_res8);
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
  lVar7 = (**(code **)(this->_padding_ + 0x3b0))(this);
  if (lVar7 == 0) {
    return 0;
  }
  pFVar8 = FDS_ItemEnchantTableRow::Get((longlong)*(int *)(lVar7 + 0xa4),false);
  if (pFVar8 != (FDS_ItemEnchantTableRow *)0x0) {
    return pFVar8->ID_Prefix;
  }
  lVar9 = (**(code **)(this->_padding_ + 0x388))(this);
  iVar4 = DS_ItemDataUtil::GetPrefixIDByUID(lVar9);
  return iVar4;
}

// GetSetEffectID @ 14bd60690

int __thiscall UDS_M_ItemImplDetail::GetSetEffectID(UDS_M_ItemImplDetail *this)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  longlong lVar7;
  FDS_ItemEnchantTableRow *pFVar8;
  long64 lVar9;
  undefined1 local_res8 [8];
  
  this_00 = &this->_padding_;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemImplDetailData>
                    ((FDS_DataContainer *)this_00,SetEffectID);
  if (bVar2) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemImplDetailData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemImplDetailData)local_res8);
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
  lVar7 = (**(code **)(this->_padding_ + 0x3b0))(this);
  if (lVar7 == 0) {
    return 0;
  }
  pFVar8 = FDS_ItemEnchantTableRow::Get((longlong)*(int *)(lVar7 + 0xa4),false);
  if (pFVar8 != (FDS_ItemEnchantTableRow *)0x0) {
    return pFVar8->ID_SetEffect;
  }
  lVar9 = (**(code **)(this->_padding_ + 0x388))(this);
  iVar4 = DS_ItemDataUtil::GetSetEffectIDByUID(lVar9);
  return iVar4;
}

// GetSlotGradeBgColor @ 14bd61770

FLinearColor * __thiscall
UDS_M_ItemImplDetail::GetSlotGradeBgColor
          (UDS_M_ItemImplDetail *this,FLinearColor *__return_storage_ptr__)

{
  byte bVar1;
  FDS_CommonGradeTableRow *this_00;
  FDS_ResourceColorTableRow *pFVar2;
  
  bVar1 = (**(code **)(this->_padding_ + 0x3f0))();
  this_00 = FDS_CommonGradeTableRow::Get((ulonglong)bVar1,true);
  if (this_00 == (FDS_CommonGradeTableRow *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = FDS_CommonGradeTableRow::ID_ItemDetailGradeBgColorTable(this_00);
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable[(pFVar2->Color).field0_0x0._s_0.R];
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       FLinearColor::sRGBToLinearTable[(pFVar2->Color).field0_0x0._s_0.G];
  bVar1 = (pFVar2->Color).field0_0x0._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       FLinearColor::sRGBToLinearTable[(pFVar2->Color).field0_0x0._s_0.B];
  (__return_storage_ptr__->field0_0x0)._s_0.A = (float)bVar1 * __real_3b808081;
  return __return_storage_ptr__;
}

// GetStyleIDCharacterEquipType @ 14bd63060

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDCharacterEquipType(UDS_M_ItemImplDetail *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x5d0))();
  return 0x138a - (ulonglong)(cVar1 != '\0');
}

// GetStyleIDCharacterExclusive @ 14bd630c0

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDCharacterExclusive(UDS_M_ItemImplDetail *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x5c8))();
  return 0x138a - (ulonglong)(cVar1 != '\0');
}

// GetStyleIDCombatPowerStatusName @ 14bd63120

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDCombatPowerStatusName(UDS_M_ItemImplDetail *this)

{
  return 0x1451;
}

// GetStyleIDDecreasedStatusCaomparisonValue @ 14bd63140

long64 __thiscall
UDS_M_ItemImplDetail::GetStyleIDDecreasedStatusCaomparisonValue(UDS_M_ItemImplDetail *this)

{
  return 0x1453;
}

// GetStyleIDDefaultStatusName @ 14bd63160

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDDefaultStatusName(UDS_M_ItemImplDetail *this)

{
  return 0x1452;
}

// GetStyleIDDurability @ 14bd63180

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDDurability(UDS_M_ItemImplDetail *this)

{
  return 0;
}

// GetStyleIDIncreasedStatusCamparisonValue @ 14bd631f0

long64 __thiscall
UDS_M_ItemImplDetail::GetStyleIDIncreasedStatusCamparisonValue(UDS_M_ItemImplDetail *this)

{
  return 0x1454;
}

// GetStyleIDPeriod @ 14bd63210

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDPeriod(UDS_M_ItemImplDetail *this)

{
  return 0x138d;
}

// GetStyleIDPrefixStatusName @ 14bd63230

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDPrefixStatusName(UDS_M_ItemImplDetail *this)

{
  return 0x1455;
}

// GetStyleIDSetItemEquipped @ 14bd63410

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDSetItemEquipped(UDS_M_ItemImplDetail *this)

{
  return 0x1519;
}

// GetStyleIDSetItemUnEquipped @ 14bd63430

long64 __thiscall UDS_M_ItemImplDetail::GetStyleIDSetItemUnEquipped(UDS_M_ItemImplDetail *this)

{
  return 0x151a;
}

// GetTextTagStyleItemGrade @ 14bd63f70

FDS_Text * __thiscall
UDS_M_ItemImplDetail::GetTextTagStyleItemGrade
          (UDS_M_ItemImplDetail *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  FDS_CommonGradeTableRow *pFVar4;
  FDS_Text *pFVar5;
  undefined1 local_58 [48];
  void *local_28;
  FDS_TextFormatArg *local_18;
  int local_10;
  
  bVar2 = (**(code **)(this->_padding_ + 0x3f0))();
  pFVar4 = FDS_CommonGradeTableRow::Get((ulonglong)bVar2,true);
  if (pFVar4 == (FDS_CommonGradeTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4589033596404105358>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetail.cpp"
                       ,0x8e,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar1)();
      return pFVar5;
    }
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
    pFVar5 = (FDS_Text *)(**(code **)(this->_padding_ + 0x3f8))(this,local_58);
    DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar4->ID_TagStyleS,pFVar5);
    DestructItems<FDS_TextFormatArg,int>(local_18,local_10);
    if (local_18 != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return __return_storage_ptr__;
}

// InitItemImplMap @ 14bd67380

void __thiscall UDS_M_ItemImplDetail::InitItemImplMap(UDS_M_ItemImplDetail *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplDetail_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 9;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 9) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\t') {
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
             &DAT_00000009,(bool *)&local_18);
  return;
}

// InitModel @ 14bd68a70

void __thiscall UDS_M_ItemImplDetail::InitModel(UDS_M_ItemImplDetail *this)

{
  return;
}

// IsChangedItem @ 14bd6a3f0

bool __thiscall UDS_M_ItemImplDetail::IsChangedItem(UDS_M_ItemImplDetail *this)

{
  bool bVar1;
  
  bVar1 = this->IsItemChanged;
  this->IsItemChanged = false;
  return bVar1;
}

// PreInitBindViewModel @ 14bd84d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_ItemImplDetail::PreInitBindViewModel(UDS_M_ItemImplDetail *this)

{
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *this_00;
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  EDS_ItemUseType EVar6;
  UClass *pUVar7;
  UDS_ModelBase *pUVar8;
  FName *pFVar9;
  UObject *pUVar10;
  UEnum *pUVar11;
  FName FVar12;
  FString *pFVar13;
  UDS_M_MoneyDisplay *this_01;
  int iVar14;
  longlong *plVar15;
  undefined1 *this_02;
  undefined1 auStackY_1c8 [32];
  UDS_ModelBase *local_198;
  FString local_190;
  FString local_180;
  UDS_ModelBase *local_170;
  UDS_ModelBase *local_168;
  FName local_160;
  undefined1 local_158 [8];
  FName local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_ModelBase::PreInitBindViewModel((UDS_ModelBase *)this);
  this_00 = &this->InventoryQuantityModel;
  local_170 = UDS_ModelBase::AddChildModel1<UDS_ModelBase>((UDS_ModelBase *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_170 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_170);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_170);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_Weight_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar7);
  local_138._8_8_ = this;
  pUVar8 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar15 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar8);
  local_168 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->InventoryWeightModel).WeakPtr,(FObjectPtr)&local_168);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_MoneyDisplay_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar7);
  local_b8._8_8_ = this;
  pUVar8 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar8);
  local_198 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->MoneyDisplayModel).WeakPtr,(FObjectPtr)&local_198);
  bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->InventoryWeightModel).WeakPtr);
    if (bVar4) {
      bVar4 = FWeakObjectPtr::IsValid(&(this->MoneyDisplayModel).WeakPtr);
      if (bVar4) {
        pUVar8 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar9 = ::FName::FName(&local_160,L"DS_VM_InventoryQuantityPlayer");
        UDS_ModelBase::SetViewModelName(pUVar8,*pFVar9);
        pUVar8 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_ModelBase::SetViewModelTemplateKey(pUVar8,InventoryQuantity);
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar11 = StaticEnum<enum_EDS_InventoryType>();
        if (pUVar11 == (UEnum *)0x0) {
          ::FString::FString(&local_190,L"");
        }
        else {
          UEnum::GetNameStringByValue(pUVar11,&local_190,1);
        }
        FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryQuantityData>
                           ((FDS_DataContainer *)&pUVar10[1].field_0x18,
                            (EDS_InventoryQuantityData)local_158);
        uVar1 = *(undefined8 *)FVar12;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                              *)&pUVar10[1].field_0x18,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                             (FName *)FVar12);
        iVar14 = local_190.Data.ArrayNum + -1;
        if (local_190.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AssignRange(pFVar13,(wchar_t *)local_190.Data.AllocatorInstance.Data,iVar14);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        pUVar8 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
        pFVar9 = ::FName::FName(&local_150,L"DS_VM_WeightPlayer");
        UDS_ModelBase::SetViewModelName(pUVar8,*pFVar9);
        pUVar10 = FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
        iVar14 = (**(code **)(this->_padding_ + 0x380))(this);
        local_198 = (UDS_ModelBase *)(**(code **)(this->_padding_ + 0x388))(this);
        this_02 = &pUVar10[1].field_0x18;
        pUVar11 = StaticEnum<enum_EDS_InventoryType>();
        if (pUVar11 == (UEnum *)0x0) {
          ::FString::FString(&local_180,L"");
        }
        else {
          UEnum::GetNameStringByValue(pUVar11,&local_180,1);
        }
        FVar12 = FDS_DataContainer::TransformIndexToName<enum_EDS_WeightData>
                           ((FDS_DataContainer *)this_02,(EDS_WeightData)local_148);
        uVar1 = *(undefined8 *)FVar12;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
        pFVar13 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  ::FindOrAddImpl<FName>
                            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                              *)this_02,uVar5 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar12);
        iVar3 = local_180.Data.ArrayNum + -1;
        if (local_180.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AssignRange(pFVar13,(wchar_t *)local_180.Data.AllocatorInstance.Data,iVar3);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        FDS_DataContainer::SetData<int,enum_EDS_WeightData>
                  ((FDS_DataContainer *)this_02,AddWeight,0);
        FDS_DataContainer::SetData<__int64,enum_EDS_WeightData>
                  ((FDS_DataContainer *)this_02,ItemUID,(long64)local_198);
        FDS_DataContainer::SetData<int,enum_EDS_WeightData>
                  ((FDS_DataContainer *)this_02,ItemTID,iVar14);
        this_01 = (UDS_M_MoneyDisplay *)FWeakObjectPtr::Get(&(this->MoneyDisplayModel).WeakPtr);
        iVar14 = (**(code **)(this->_padding_ + 0x440))(this);
        UDS_M_MoneyDisplay::RefreshData(this_01,Copper,(longlong)iVar14);
        iVar14 = (**(code **)(this->_padding_ + 0x380))(this);
        EVar6 = DS_ItemDataUtil::GetItemUseType(iVar14);
        if (EVar6 == Equipment) {
          pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          FDS_DataContainer::SetData<bool,enum_EDS_InventoryQuantityData>
                    ((FDS_DataContainer *)&pUVar10[1].field_0x18,Visible,false);
        }
        else {
          pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          FDS_DataContainer::SetData<bool,enum_EDS_InventoryQuantityData>
                    ((FDS_DataContainer *)&pUVar10[1].field_0x18,Visible,true);
          pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          iVar14 = (**(code **)(this->_padding_ + 0x380))(this);
          FDS_DataContainer::SetData<int,enum_EDS_InventoryQuantityData>
                    ((FDS_DataContainer *)&pUVar10[1].field_0x18,ItemTID,iVar14);
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4589033596404105248>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetail.cpp"
                           ,0x20,"false");
        if (bVar4) goto code_r0x00014bd84fbe;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4589033596404105247>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetail.cpp"
                         ,0x1f,"false");
      if (bVar4) goto code_r0x00014bd84fbe;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4589033596404105246>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplDetail.cpp"
                       ,0x1e,"false");
    if (bVar4) {
code_r0x00014bd84fbe:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetItemTID @ 14bd89f00

void __thiscall UDS_M_ItemImplDetail::SetItemTID(UDS_M_ItemImplDetail *this,int param_1)

{
  bool bVar1;
  int iVar2;
  EDS_ItemUseType EVar3;
  FDS_ItemBaseTableRow *pFVar4;
  UObject *pUVar5;
  long64 lVar6;
  UDS_ModelBase *pUVar7;
  
  if (param_1 < 1) {
    pFVar4 = (FDS_ItemBaseTableRow *)0x0;
  }
  else {
    pFVar4 = FDS_ItemBaseTableRow::Get((longlong)param_1,true);
  }
  this->_padding_ = (longlong)pFVar4;
  (**(code **)(this->_padding_ + 800))(this);
  UDS_ModelBase::SetDirty((UDS_ModelBase *)this,true);
  this->IsItemChanged = true;
  bVar1 = FWeakObjectPtr::IsValid(&(this->InventoryQuantityModel).WeakPtr);
  if ((bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&(this->InventoryWeightModel).WeakPtr), bVar1)) {
    pUVar5 = FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
    lVar6 = (**(code **)(this->_padding_ + 0x388))(this);
    FDS_DataContainer::SetData<__int64,enum_EDS_WeightData>
              ((FDS_DataContainer *)&pUVar5[1].field_0x18,ItemUID,lVar6);
    pUVar7 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->InventoryWeightModel).WeakPtr);
    UDS_ModelBase::SetDirty(pUVar7,true);
    iVar2 = (**(code **)(this->_padding_ + 0x380))(this);
    EVar3 = DS_ItemDataUtil::GetItemUseType(iVar2);
    if (EVar3 == Equipment) {
      pUVar5 = FWeakObjectPtr::Get(&(this->InventoryQuantityModel).WeakPtr);
      FDS_DataContainer::SetData<bool,enum_EDS_InventoryQuantityData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,Visible,false);
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&(this->InventoryQuantityModel).WeakPtr);
      FDS_DataContainer::SetData<bool,enum_EDS_InventoryQuantityData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,Visible,true);
      pUVar5 = FWeakObjectPtr::Get(&(this->InventoryQuantityModel).WeakPtr);
      FDS_DataContainer::SetData<int,enum_EDS_InventoryQuantityData>
                ((FDS_DataContainer *)&pUVar5[1].field_0x18,ItemTID,param_1);
    }
    pUVar7 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->InventoryQuantityModel).WeakPtr);
    UDS_ModelBase::SetDirty(pUVar7,true);
  }
  return;
}

