// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 59

// StaticClass @ 14b52cc80

UClass * __cdecl UDS_NotificationManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NotificationManager",
               &Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton,
               StaticRegisterNativesUDS_NotificationManager,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NotificationManager>,
               InternalVTableHelperCtorCaller<UDS_NotificationManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton;
}

// UDS_NotificationManager @ 14b52fb00

UDS_NotificationManager * __thiscall
UDS_NotificationManager::UDS_NotificationManager
          (UDS_NotificationManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NotificationManager__6B_;
  *(undefined8 *)&this->BroadcastNotificationInfoDelegate = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->TabFrameRedDotStateChangedDelegate = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NotificationDataMap = 0;
  *(undefined8 *)&(this->NotificationDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NotificationDataMap).field_0x20 = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->NotificationDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NotificationDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NotificationDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x48 = 0;
  (this->NotificationDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotificationDataArray).ArrayNum = 0;
  (this->NotificationDataArray).ArrayMax = 0;
  (this->PreCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsChangedItemSymbolDirty = false;
  this->IsChangedItemEquipDirty = false;
  this->IsCanBroadCast = false;
  *(undefined8 *)&this->ItemSymbolToContentMap = 0;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x48 = 0;
  *(undefined8 *)&this->TabFrameRedDotStateMap = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x48 = 0;
  return this;
}

// UDS_NotificationManager @ 14b52fc40

UDS_NotificationManager * __thiscall
UDS_NotificationManager::UDS_NotificationManager
          (UDS_NotificationManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NotificationManager__6B_;
  *(undefined8 *)&this->BroadcastNotificationInfoDelegate = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x10 = 0;
  *(undefined8 *)&this->TabFrameRedDotStateChangedDelegate = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NotificationDataMap = 0;
  *(undefined8 *)&(this->NotificationDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->NotificationDataMap).field_0x20 = 0;
  *(undefined8 *)&(this->BroadcastNotificationInfoDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->TabFrameRedDotStateChangedDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->NotificationDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NotificationDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NotificationDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->NotificationDataMap).field_0x48 = 0;
  (this->NotificationDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotificationDataArray).ArrayNum = 0;
  (this->NotificationDataArray).ArrayMax = 0;
  (this->PreCharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsChangedItemSymbolDirty = false;
  this->IsChangedItemEquipDirty = false;
  this->IsCanBroadCast = false;
  *(undefined8 *)&this->ItemSymbolToContentMap = 0;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x34 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemSymbolToContentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x48 = 0;
  *(undefined8 *)&this->TabFrameRedDotStateMap = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TabFrameRedDotStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x48 = 0;
  return this;
}

// ~UDS_NotificationManager @ 14b530b20

void __thiscall UDS_NotificationManager::~UDS_NotificationManager(UDS_NotificationManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_NotificationManager__6B_;
  *(undefined4 *)&(this->TabFrameRedDotStateMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TabFrameRedDotStateMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TabFrameRedDotStateMap);
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemSymbolToContentMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ItemSymbolToContentMap);
  DestructItems<FDS_NotificationData,int>
            ((FDS_NotificationData *)(this->NotificationDataArray).AllocatorInstance.Data,
             (this->NotificationDataArray).ArrayNum);
  pFVar2 = (this->NotificationDataArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->NotificationDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NotificationDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NotificationType,FDS_NotificationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NotificationType,FDS_NotificationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NotificationDataMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TabFrameRedDotStateChangedDelegate).field_0x8,
             *(int *)&(this->TabFrameRedDotStateChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->TabFrameRedDotStateChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TabFrameRedDotStateChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BroadcastNotificationInfoDelegate).field_0x8,
             *(int *)&(this->BroadcastNotificationInfoDelegate).field_0x10);
  pvVar1 = *(void **)&(this->BroadcastNotificationInfoDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BroadcastNotificationInfoDelegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b532fc0

UClass * __cdecl UDS_NotificationManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NotificationManager",
               &Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton,
               StaticRegisterNativesUDS_NotificationManager,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NotificationManager>,
               InternalVTableHelperCtorCaller<UDS_NotificationManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NotificationManager.InnerSingleton;
}

// StaticRegisterNativesUDS_NotificationManager @ 14b5331d0

void __cdecl UDS_NotificationManager::StaticRegisterNativesUDS_NotificationManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_NotificationManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedAchievement @ 14b5341f0

void __cdecl
UDS_NotificationManager::execOnChangedAchievement(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangedAchievement((UDS_NotificationManager *)param_1,local_res10);
  return;
}

// execOnChangedCharacterLevel @ 14b534280

void __cdecl
UDS_NotificationManager::execOnChangedCharacterLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCharacterLevel((UDS_NotificationManager *)param_1,piVar2);
  return;
}

// execOnChangedEquipItem @ 14b534320

void __cdecl
UDS_NotificationManager::execOnChangedEquipItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedEquipItem((UDS_NotificationManager *)param_1,local_res10[0] != 0);
  return;
}

// execOnChangedItemSymbol @ 14b5343b0

void __cdecl
UDS_NotificationManager::execOnChangedItemSymbol(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedItemSymbol((UDS_NotificationManager *)param_1,local_res10[0] != 0);
  return;
}

// execOnChangedPlayerSkillDataSet @ 14b534440

void __cdecl
UDS_NotificationManager::execOnChangedPlayerSkillDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChangedPlayerSkillDataSet((UDS_NotificationManager *)param_1,local_res10);
  return;
}

// execOnMailDataSetChanged @ 14b534640

void __cdecl
UDS_NotificationManager::execOnMailDataSetChanged(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnMailDataSetChanged((UDS_NotificationManager *)param_1,local_res10);
  return;
}

// AddNotificationData @ 14baf0680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::AddNotificationData
          (UDS_NotificationManager *this,EDS_NotificationType param_1)

{
  longlong lVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  FDS_NotificationBaseTableRow *pFVar4;
  undefined1 *puVar5;
  undefined1 auStackY_268 [32];
  FDS_NotificationData local_228;
  EDS_NotificationType local_1c8 [8];
  EDS_StringTableType local_1c0;
  long64 local_1b8;
  FName local_1b0;
  long64 local_1a8;
  long64 local_1a0;
  EDS_TimeExpression local_198;
  undefined1 local_194;
  FScriptContainerElement *local_190;
  int local_188;
  int local_184;
  FDS_TextFormatArg *local_180;
  int local_178;
  int local_174;
  TPairInitializer<EDS_NotificationType_&,FDS_NotificationData_&> local_168;
  EDS_NotificationType *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_228.NotificationType = param_1;
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NotificationManager::AddNotificationData",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,0x170,L"AddNotify {%d}");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (*(int *)&(this->NotificationDataMap).field_0x8 !=
      *(int *)&(this->NotificationDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->NotificationDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->NotificationDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->NotificationDataMap).field_0x48 - 1) &
                              (ulonglong)local_228.NotificationType) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NotificationDataMap;
      do {
        if (*(EDS_NotificationType *)((longlong)iVar2 * 0x68 + lVar1) == local_228.NotificationType)
        {
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar1);
      } while (iVar2 != -1);
    }
  }
  pFVar4 = FDS_NotificationBaseTableRow::GetRef((ulonglong)local_228.NotificationType,true);
  local_1c8[0] = local_228.NotificationType;
  local_190 = (void *)0x0;
  local_180 = (FDS_TextFormatArg *)0x0;
  local_178 = 0;
  local_228.NotificationText.StringTableType = None;
  local_228.NotificationText.StringTableID = 0;
  local_228.NotificationText.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_228.NotificationText.StringEnumTableNameID.Number = 0;
  local_228.NotificationText.DateTime.Ticks = 0;
  local_228.NotificationText.TimeSpan.Ticks = 0;
  local_228.NotificationText.TimeExpressionType = None;
  local_228.NotificationText.IsExpression = false;
  local_228.NotificationText.UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_228.NotificationText.UniqueString.Data.ArrayNum = 0;
  local_228.NotificationText.UniqueString.Data.ArrayMax = 0;
  local_228.NotificationText.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.NotificationText.FormatArgs.ArrayNum = 0;
  local_228.NotificationText.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_228.NotificationText,&pFVar4->ID_NotiString);
  local_1c0 = local_228.NotificationText.StringTableType;
  local_1b8 = local_228.NotificationText.StringTableID;
  local_1b0 = local_228.NotificationText.StringEnumTableNameID;
  local_1a8 = local_228.NotificationText.DateTime.Ticks;
  local_1a0 = local_228.NotificationText.TimeSpan.Ticks;
  local_198 = local_228.NotificationText.TimeExpressionType;
  local_194 = local_228.NotificationText.IsExpression;
  if (local_190 != (void *)0x0) {
    FMemory::Free(local_190);
  }
  local_190 = local_228.NotificationText.UniqueString.Data.AllocatorInstance.Data;
  local_188 = local_228.NotificationText.UniqueString.Data.ArrayNum;
  local_184 = local_228.NotificationText.UniqueString.Data.ArrayMax;
  local_228.NotificationText.UniqueString.Data.ArrayNum = 0;
  local_228.NotificationText.UniqueString.Data.ArrayMax = 0;
  local_228.NotificationText.UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  DestructItems<FDS_TextFormatArg,int>(local_180,local_178);
  if (local_180 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_180);
  }
  local_180 = (FDS_TextFormatArg *)local_228.NotificationText.FormatArgs.AllocatorInstance.Data;
  local_178 = local_228.NotificationText.FormatArgs.ArrayNum;
  local_174 = local_228.NotificationText.FormatArgs.ArrayMax;
  local_228.NotificationText.FormatArgs.ArrayNum = 0;
  local_228.NotificationText.FormatArgs.ArrayMax = 0;
  local_228.NotificationText.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
  if (local_228.NotificationText.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_228.NotificationText.FormatArgs.AllocatorInstance.Data);
  }
  if (local_228.NotificationText.UniqueString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.NotificationText.UniqueString.Data.AllocatorInstance.Data);
  }
  local_168.Value = &local_228;
  local_158 = local_1c8;
  TSet<TTuple<enum_EDS_NotificationType,FDS_NotificationData>,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_NotificationType_&,FDS_NotificationData_&>_>
            (&this->NotificationDataMap,&local_168,(bool *)&local_168.Value);
  DestructItems<FDS_TextFormatArg,int>(local_180,local_178);
  if (local_180 != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_180);
  }
  if (local_190 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190);
  }
  return;
}

// AddNotificationData @ 14baf0940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::AddNotificationData
          (UDS_NotificationManager *this,EDS_NotificationType param_1,FDS_Text *param_2)

{
  longlong lVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  undefined1 *puVar4;
  undefined1 auStackY_218 [32];
  EDS_NotificationType local_1d8 [8];
  TPairInitializer<EDS_NotificationType_&,FDS_NotificationData_&> local_1d0;
  FDS_Text local_1c0;
  EDS_NotificationType *local_168;
  FDS_NotificationData **local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d8[0] = param_1;
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NotificationManager::AddNotificationData",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_158.Ptr,0x160,L"AddNotify {%d}");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if (*(int *)&(this->NotificationDataMap).field_0x8 !=
      *(int *)&(this->NotificationDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NotificationDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NotificationDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->NotificationDataMap).field_0x48 - 1) &
                              (ulonglong)local_1d8[0]) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NotificationDataMap;
      do {
        if (*(EDS_NotificationType *)((longlong)iVar2 * 0x68 + lVar1) == local_1d8[0]) {
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar1);
      } while (iVar2 != -1);
    }
  }
  local_1c0.StringTableType = None;
  local_1c0.DateTime.Ticks = 0;
  local_1c0.TimeSpan.Ticks = 0;
  local_1c0.StringTableID = 0;
  local_1c0.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1c0.StringEnumTableNameID.Number = 0;
  local_1c0.TimeExpressionType = None;
  local_1c0.IsExpression = false;
  local_1c0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.UniqueString.Data.ArrayNum = 0;
  local_1c0.UniqueString.Data.ArrayMax = 0;
  local_1c0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.FormatArgs.ArrayNum = 0;
  local_1c0.FormatArgs.ArrayMax = 0;
  local_1d0.Value._0_1_ = local_1d8[0];
  FDS_Text::operator=(&local_1c0,param_2);
  local_168 = local_1d8;
  local_160 = &local_1d0.Value;
  TSet<TTuple<enum_EDS_NotificationType,FDS_NotificationData>,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_NotificationType_&,FDS_NotificationData_&>_>
            (&this->NotificationDataMap,&local_1d0,(bool *)&local_168);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1c0.FormatArgs.AllocatorInstance.Data,
             local_1c0.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1c0.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1c0.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1c0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// BindNotificationInfoDelegate @ 14baf4920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::BindNotificationInfoDelegate
          (UDS_NotificationManager *this,UObject *param_1,FName param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UObject *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_NotificationManager::BindNotificationInfoDelegate",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_30,0x84,L"InObject is nullptr");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
        return;
      }
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
    ::AddUFunction<UObject>
              ((TMulticastDelegateRegistration<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *)&this->BroadcastNotificationInfoDelegate,(UObject *)local_148,(FName *)param_1);
  }
  return;
}

// BindPlayerData @ 14baf4aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::BindPlayerData(UDS_NotificationManager *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  UDS_QuestEvent *pUVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStackY_7a8 [32];
  FWeakObjectPtr local_778;
  FWeakObjectPtr local_770;
  FWeakObjectPtr local_768;
  FWeakObjectPtr local_760;
  FWeakObjectPtr local_758;
  FName local_750;
  FName local_748;
  FName local_740;
  FName local_738;
  FName local_730;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)&local_760);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)&local_760,(void *)0x0
                    );
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_6f8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_6f8,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_6f8.Ptr,0x3fa,L"mainPlayerDataSet is nullptr");
    if ((void *)local_6f8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_6f8._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_760);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedPlayerSkillDataSet","::");
  pcVar7 = &DAT_00000002;
  if (pcVar5 == (char *)0x0) {
LAB_14baf4bea:
    pcVar8 = &DAT_00000002;
LAB_14baf4bed:
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
      pcVar8 = pcVar5;
      pcVar5 = strstr(pcVar8 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14baf4bea;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14baf4bed;
  }
  ::FName::FName(&local_750,pcVar8);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_95033f17)0x14bb1cc00,local_750);
  UDS_PlayerData::GetData((ulong64)&local_778,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_778,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_5d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_5d8,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_5d8.Ptr,0x402,L"mainPlayerData is nullptr");
    if ((void *)local_5d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_5d8._padding_);
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_NotificationManager *)local_728,(pmf_e97961a7)this);
  pUVar4 = FWeakObjectPtr::Get(&local_778);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &pUVar4[2].field_0x8,(UDS_NotificationManager *)(local_728 + 8),(pmf_6a913edd)this);
  pUVar4 = FWeakObjectPtr::Get(&local_778);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &pUVar4[3].field_0x20,(UDS_NotificationManager *)local_718,(pmf_6a913edd)this);
  FWeakObjectPtr::Get(&local_778);
  UDS_CharInfoData::GetData((ulong64)&local_770);
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_770,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_4b8.Ptr,0x40e,L"charInfoData is nullptr");
    if ((void *)local_4b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4b8._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_770);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedCharacterLevel","::");
  if (pcVar5 == (char *)0x0) {
LAB_14baf4e5b:
    pcVar8 = &DAT_00000002;
LAB_14baf4e5e:
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
      pcVar8 = pcVar5;
      pcVar5 = strstr(pcVar8 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14baf4e5b;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14baf4e5e;
  }
  ::FName::FName(&local_748,pcVar8);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar4[2].field_0x8,this,(pmf_8532ea59)0x14bb1bd40,local_748);
  (this->PreCharInfoData).WeakPtr = local_770;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_768);
  bVar2 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_768,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_398.Ptr,0x419,L"itemDataSet is nullptr.");
    if ((void *)local_398._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_398._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_768);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedItemSymbol","::");
  if (pcVar5 == (char *)0x0) {
LAB_14baf4fbc:
    pcVar8 = &DAT_00000002;
LAB_14baf4fbf:
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
      pcVar8 = pcVar5;
      pcVar5 = strstr(pcVar8 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14baf4fbc;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14baf4fbf;
  }
  ::FName::FName(&local_740,pcVar8);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar4[0xd].field_0x10,this,(pmf_46cab3f4)0x14bb1c0c0,local_740);
  pUVar4 = FWeakObjectPtr::Get(&local_768);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedEquipItem","::");
  if (pcVar5 == (char *)0x0) {
LAB_14baf506a:
    pcVar8 = &DAT_00000002;
LAB_14baf506d:
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
      pcVar8 = pcVar5;
      pcVar5 = strstr(pcVar8 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14baf506a;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14baf506d;
  }
  ::FName::FName(&local_738,pcVar8);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar4[0xc].field_0x20,this,(pmf_46cab3f4)0x14bb1bfb0,local_738);
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_758);
  bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_758,(void *)0x0
                    );
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x424,L"achievementDataSet is nullptr.")
    ;
    if ((void *)local_278._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_278._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_758);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedAchievement","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar8 = pcVar5;
      pcVar5 = strstr(pcVar8 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar8 != (char *)0x0) && (pcVar7 = pcVar8 + 2, pcVar8[2] != '0')) goto LAB_14baf51f8;
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
LAB_14baf51f8:
  ::FName::FName(&local_730,pcVar7);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_95033f17)0x14bb1b9c0,local_730);
  pUVar6 = UDS_QuestEvent::GetEvent();
  if (pUVar6 == (UDS_QuestEvent *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)pUVar6;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NotificationManager::BindPlayerData",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x42f,L"questEvent is nullptr.");
      if ((UDS_QuestEvent *)local_158._padding_ != (UDS_QuestEvent *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->NewAbleCompleteQuestSymbolDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_QuestType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              (&pUVar6->NewAbleCompleteQuestSymbolDelegate,
               (UDS_NotificationManager *)(local_718 + 8),(pmf_6b55297c)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnAddQuestDataDelegate,(UDS_NotificationManager *)local_708,
               (pmf_6a913edd)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnUpdateQuestDataDelegate,(UDS_NotificationManager *)(local_708 + 8),
               (pmf_6a913edd)this);
    OnUpdateItemSymbol(this);
    OnUpdataCharacterTab(this);
    OnUpdateAchievementTab(this);
    OnUpdateAscenderSkillTab(this);
  }
  return;
}

// BindTabFrameRedDotStateChangedDelegate @ 14baf5390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate
          (UDS_NotificationManager *this,UObject *param_1,FName param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UObject *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_NotificationManager::BindTabFrameRedDotStateChangedDelegate",0x3f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_30,0x9c,L"InObject is nullptr");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
        return;
      }
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUFunction<UObject>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->TabFrameRedDotStateChangedDelegate,(UObject *)local_148,(FName *)param_1);
  }
  return;
}

// CheckCharacterService @ 14baf7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_NotificationManager::CheckCharacterService
          (UDS_NotificationManager *this,EDS_NotificationCause param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  FDS_NotificationBaseTableRow *pFVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_117 [7];
  FWeakObjectPtr local_110;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FWeakObjectPtr local_f8 [2];
  FDS_Text local_e8;
  undefined4 local_98;
  undefined4 uStack_94;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_158;
  UDS_PlayerData::GetMainPlayerData();
  bVar13 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_f8,(void *)0x0);
  if (!bVar13) {
    FWeakObjectPtr::Get(local_f8);
    UDS_CharInfoData::GetData((ulong64)&local_110);
    bVar13 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_110,(void *)0x0);
    if ((!bVar13) && ((param_1 & (CharacterChange|CharacterLevelUp|PlayerLevelUp)) != None)) {
      pFVar15 = FDS_NotificationBaseTableRow::GetRef(1,true);
      bVar13 = FDS_CharacterService::CanUseItemForLevelUp
                         ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_110);
      if (bVar13) {
        local_e8._0_8_ = local_e8._0_8_ & 0xffffffffffffff00;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8._40_8_ = local_e8._40_8_ & 0xffffff0000000000;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_e8,&pFVar15->ID_NotiString);
        AddNotificationData(this,CharLevelUp,&local_e8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data,
                   local_e8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      else {
        RemoveNotificationData(this,CharLevelUp);
      }
      pFVar15 = FDS_NotificationBaseTableRow::GetRef(3,true);
      bVar13 = FDS_CharacterService::CanAscendWithCost
                         ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_110);
      if (bVar13) {
        local_e8._0_8_ = local_e8._0_8_ & 0xffffffffffffff00;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8._40_8_ = local_e8._40_8_ & 0xffffff0000000000;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_e8,&pFVar15->ID_NotiString);
        AddNotificationData(this,CharAscend,&local_e8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data,
                   local_e8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      else {
        RemoveNotificationData(this,CharAscend);
      }
      pFVar15 = FDS_NotificationBaseTableRow::GetRef(0xc,true);
      uVar11 = _UNK_1527836b8;
      pFVar10 = ___xmm_0000c739000052100000520f0000520e;
      uVar9 = _UNK_1527836a8;
      pFVar1 = ___xmm_0000520d0000520c0000520b0000520a;
      uVar8 = _UNK_152783698;
      uVar7 = ___xmm_0000520900002b0200002b0100002b00;
      uVar6 = _UNK_152783688;
      FVar5 = ___xmm_00002aff00002afe00002afd00002afc;
      uVar4 = _UNK_152783678;
      uVar3 = ___xmm_00002afb00002afa00002af900000000;
      bVar2 = false;
      bVar13 = false;
      local_98 = 0xc73a;
      uStack_94 = 0xc73b;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_100 = 0x16;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x16,0,&local_108,0x16,&local_fc);
      iVar12 = local_100;
      local_e8._0_8_ = uVar3;
      local_e8.StringTableID = uVar4;
      local_e8.StringEnumTableNameID = FVar5;
      local_e8.DateTime.Ticks = uVar6;
      *(undefined8 *)local_108.Data = uVar3;
      *(undefined8 *)(local_108.Data + 8) = uVar4;
      *(FName *)(local_108.Data + 0x10) = FVar5;
      *(undefined8 *)(local_108.Data + 0x18) = uVar6;
      *(undefined8 *)(local_108.Data + 0x20) = uVar7;
      *(undefined8 *)(local_108.Data + 0x28) = uVar8;
      *(FScriptContainerElement **)(local_108.Data + 0x30) = pFVar1;
      *(undefined8 *)(local_108.Data + 0x38) = uVar9;
      *(FScriptContainerElement **)(local_108.Data + 0x40) = pFVar10;
      *(undefined8 *)(local_108.Data + 0x48) = uVar11;
      *(ulonglong *)(local_108.Data + 0x50) = CONCAT44(uStack_94,local_98);
      uVar6 = _UNK_1527836b8;
      uVar4 = _UNK_1527836a8;
      uVar3 = _UNK_152783698;
      local_e8.TimeSpan.Ticks = uVar7;
      _UNK_152783698 = (undefined4)uVar8;
      UNK_15278369c = SUB81(uVar8,4);
      _UNK_15278369d = SUB83(uVar8,5);
      local_e8.TimeExpressionType = _UNK_152783698;
      local_e8.IsExpression = (bool)UNK_15278369c;
      local_e8._45_3_ = _UNK_15278369d;
      local_e8.UniqueString.Data.AllocatorInstance.Data = pFVar1;
      _UNK_1527836a8 = (undefined4)uVar9;
      _UNK_1527836ac = SUB84(uVar9,4);
      local_e8.UniqueString.Data.ArrayNum = _UNK_1527836a8;
      local_e8.UniqueString.Data.ArrayMax = _UNK_1527836ac;
      pFVar1 = local_108.Data + (longlong)local_100 * 4;
      local_e8.FormatArgs.AllocatorInstance.Data = pFVar10;
      _UNK_1527836b8 = (undefined4)uVar11;
      _UNK_1527836bc = SUB84(uVar11,4);
      local_e8.FormatArgs.ArrayNum = _UNK_1527836b8;
      local_e8.FormatArgs.ArrayMax = _UNK_1527836bc;
      FVar16.Data = local_108.Data;
      _UNK_152783698 = uVar3;
      _UNK_1527836a8 = uVar4;
      _UNK_1527836b8 = uVar6;
      while( true ) {
        if (local_100 != iVar12) {
          `TCheckedPointerIterator<enum_EDS_EquipSlotType,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_117);
        }
        if (FVar16.Data == pFVar1) break;
        if ((*(EDS_EquipSlotType *)FVar16.Data != None) &&
           (bVar14 = FDS_CharacterService::CanEquipAbleForEmptySlot
                               ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>)local_110,
                                *(EDS_EquipSlotType *)FVar16.Data), bVar13 = bVar2, bVar14)) {
          bVar2 = true;
          bVar13 = true;
        }
        FVar16.Data = FVar16.Data + 4;
      }
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      if (bVar13) {
        local_e8._0_8_ = local_e8._0_8_ & 0xffffffffffffff00;
        local_e8.StringTableID = 0;
        local_e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_e8.StringEnumTableNameID.Number = 0;
        local_e8.DateTime.Ticks = 0;
        local_e8.TimeSpan.Ticks = 0;
        local_e8._40_8_ = local_e8._40_8_ & 0xffffff0000000000;
        local_e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.UniqueString.Data.ArrayNum = 0;
        local_e8.UniqueString.Data.ArrayMax = 0;
        local_e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.FormatArgs.ArrayNum = 0;
        local_e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_e8,&pFVar15->ID_NotiString);
        AddNotificationData(this,EquipAble,&local_e8);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data,
                   local_e8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_e8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.UniqueString.Data.AllocatorInstance.Data);
        }
      }
      else {
        RemoveNotificationData(this,EquipAble);
      }
    }
  }
  return;
}

// Created @ 14bb01dc0

void __thiscall UDS_NotificationManager::Created(UDS_NotificationManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02fd0

void __thiscall UDS_NotificationManager::Destroyed(UDS_NotificationManager *this)

{
  UDS_LoginEvent *pUVar1;
  
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnReceiveJoinMapResponse,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnReceiveMyCharacterInfoResponseComplete,this);
  }
  return;
}

// GetInst @ 14bb0bd30

UDS_NotificationManager * __cdecl UDS_NotificationManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_NotificationManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_NotificationManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_NotificationManager_NoRegister();
  pUVar3 = (UDS_NotificationManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_NotificationManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_NotificationManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_NotificationManager *)0x0;
}

// GetInventoryTabFrameMap @ 14bb0bf60

TMap<EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ContentsTabFrameType,bool,0>_>
* __thiscall
UDS_NotificationManager::GetInventoryTabFrameMap
          (UDS_NotificationManager *this,
          TMap<EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ContentsTabFrameType,bool,0>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TPairInitializer<EDS_ContentsTabFrameType_const_&,bool_&&> local_res18;
  TArray<FDS_InventoryTabTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  longlong local_28;
  undefined1 *local_20;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FDS_InventoryTabTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  do {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_InventoryTabTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar6.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)FVar6.Data;
    if (lVar2 != 0) {
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        puVar5 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        iVar4 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                                  *(uint *)(lVar2 + 0x14)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(uint *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar4 * 0x10) ==
                *(uint *)(lVar2 + 0x14)) goto LAB_14bb0c041;
            iVar4 = *(int *)(*(longlong *)__return_storage_ptr__ + 8 + (longlong)iVar4 * 0x10);
          } while (iVar4 != -1);
        }
      }
      local_20 = local_res10;
      local_res10[0] = 0;
      local_28 = lVar2 + 0x14;
      TSet<TTuple<enum_EDS_ContentsTabFrameType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ContentsTabFrameType_const_&,bool_&&>_>
                (__return_storage_ptr__,&local_res18,(bool *)&local_28);
    }
LAB_14bb0c041:
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// GetMainTabFrameParent @ 14bb0c190

EDS_ContentsTabFrameType __thiscall
UDS_NotificationManager::GetMainTabFrameParent(UDS_NotificationManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  EDS_ContentsTabFrameType EVar5;
  ForAnyElementType FVar6;
  undefined1 local_res18 [8];
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  FDS_ContentsTabFrameTableRow::GetAll(&local_18);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 8;
  uVar4 = local_18._8_8_;
  FVar6.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
      uVar4 = local_18._8_8_;
    }
    if (FVar6.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar6.Data;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x24) == param_1)) {
      EVar5 = *(EDS_ContentsTabFrameType *)(lVar2 + 8);
LAB_14bb0c1f3:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return EVar5;
    }
    FVar6.Data = FVar6.Data + 8;
  }
  EVar5 = None;
  goto LAB_14bb0c1f3;
}

// GetRedDotStateByTabFrame @ 14bb0ff60

bool __thiscall
UDS_NotificationManager::GetRedDotStateByTabFrame
          (UDS_NotificationManager *this,EDS_ContentsTabFrameType param_1)

{
  longlong lVar1;
  int iVar2;
  bool *pbVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TabFrameRedDotStateMap).field_0x8 !=
      *(int *)&(this->TabFrameRedDotStateMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TabFrameRedDotStateMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TabFrameRedDotStateMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TabFrameRedDotStateMap).field_0x48 + ~None & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->TabFrameRedDotStateMap;
      do {
        if (*(EDS_ContentsTabFrameType *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          pbVar3 = TMapBase<enum_EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>_>
                   ::FindChecked(&this->TabFrameRedDotStateMap,param_1);
          return *pbVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// GetSameMenuOrderList @ 14bb10030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NotificationManager::GetSameMenuOrderList
          (UDS_NotificationManager *this,
          TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_ContentsTabFrameType param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_ContentsTabFrameTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_1d8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar13 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != None) {
    pFVar6 = FDS_ContentsTabFrameTableRow::GetRef((longlong)(int)param_1,true);
    iVar12 = pFVar6->MenuOrder;
    if (iVar12 == 0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return __return_storage_ptr__;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NotificationManager::GetSameMenuOrderList",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_158.Ptr,0x37d,L"tabFrameTableRow.MenuOrder is 0");
      FVar11.Data = (FScriptContainerElement *)local_158._padding_;
    }
    else {
      pTVar8 = FDS_ContentsTabFrameTableRow::GetAll(&local_170);
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      pFVar15 = (pTVar8->AllocatorInstance).Data;
      pFVar1 = pFVar15 + (longlong)pTVar8->ArrayNum * 8;
      FVar14.Data = pFVar13;
      for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 8) {
        if ((*(longlong *)pFVar15 != 0) && (*(int *)(*(longlong *)pFVar15 + 0x24) == iVar12)) {
          iVar5 = (int)pFVar13;
          if ((FVar14.Data <= pFVar15) &&
             (local_180._4_4_ = (int)(local_180 >> 0x20), lVar10 = (longlong)local_180._4_4_,
             pFVar15 < FVar14.Data + lVar10 * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar9;
            }
            FVar14.Data = local_188.Data;
            iVar5 = (int)local_180;
          }
          if (iVar5 == local_180._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_188,(int *)((longlong)&local_180 + 4));
            FVar14.Data = local_188.Data;
          }
          local_180 = CONCAT44(local_180._4_4_,iVar5 + 1U);
          *(longlong *)(FVar14.Data + (longlong)iVar5 * 8) = *(longlong *)pFVar15;
          pFVar13 = (FScriptContainerElement *)(ulonglong)(iVar5 + 1U);
          FVar14.Data = local_188.Data;
        }
      }
      if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
        pFVar13 = (FScriptContainerElement *)(local_180 & 0xffffffff);
        FVar14.Data = local_188.Data;
      }
      iVar12 = (int)pFVar13;
      pFVar1 = FVar14.Data + (longlong)iVar12 * 8;
      while( true ) {
        if ((int)pFVar13 != iVar12) {
          `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_178);
          pFVar13 = (FScriptContainerElement *)(local_180 & 0xffffffff);
        }
        FVar11.Data = local_188.Data;
        if (FVar14.Data == pFVar1) break;
        if (*(longlong *)FVar14.Data != 0) {
          uVar2 = *(undefined4 *)(*(longlong *)FVar14.Data + 8);
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
               uVar2;
          pFVar13 = (FScriptContainerElement *)(local_180 & 0xffffffff);
        }
        FVar14.Data = FVar14.Data + 8;
      }
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetSameMenuOrderTabList @ 14bb102c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NotificationManager::GetSameMenuOrderTabList
          (UDS_NotificationManager *this,
          TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_ContentsTabFrameType param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FDS_ContentsTabFrameTableRow *pFVar8;
  UDS_LogManager *pUVar9;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined1 local_188 [4];
  int local_184;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar15 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = FDS_ContentsTabFrameTableRow::GetRef((longlong)(int)param_1,true);
  iVar14 = pFVar8->MenuOrder;
  if (iVar14 == 0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return __return_storage_ptr__;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_NotificationManager::GetSameMenuOrderTabList",0x30,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_168.Ptr,0x3cd,L"tabFrameTableRow.MenuOrder is 0");
    FVar13.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    local_184 = pFVar8->MainTab;
    iVar7 = pFVar8->SubTab;
    pTVar10 = FDS_ContentsTabFrameTableRow::GetAll(&local_180);
    iVar4 = local_184;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    pFVar17 = (pTVar10->AllocatorInstance).Data;
    pFVar1 = pFVar17 + (longlong)pTVar10->ArrayNum * 8;
    FVar16.Data = pFVar15;
    for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 8) {
      lVar12 = *(longlong *)pFVar17;
      if ((((lVar12 != 0) && (*(int *)(lVar12 + 0x24) == iVar14)) &&
          (*(int *)(lVar12 + 0x28) == iVar4)) &&
         ((iVar7 == 0 || (*(int *)(lVar12 + 0x2c) == iVar7)))) {
        iVar6 = (int)pFVar15;
        if ((FVar16.Data <= pFVar17) &&
           (local_190._4_4_ = (int)(local_190 >> 0x20), lVar12 = (longlong)local_190._4_4_,
           pFVar17 < FVar16.Data + lVar12 * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TArray<EDS_ContentsTabFrameType,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar11;
          }
          FVar16.Data = local_198.Data;
          iVar6 = (int)local_190;
        }
        if (iVar6 == local_190._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_198,(int *)((longlong)&local_190 + 4));
          FVar16.Data = local_198.Data;
        }
        local_190 = CONCAT44(local_190._4_4_,iVar6 + 1U);
        *(longlong *)(FVar16.Data + (longlong)iVar6 * 8) = *(longlong *)pFVar17;
        pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar6 + 1U);
        FVar16.Data = local_198.Data;
      }
    }
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
      pFVar15 = (FScriptContainerElement *)(local_190 & 0xffffffff);
      FVar16.Data = local_198.Data;
    }
    iVar14 = (int)pFVar15;
    pFVar1 = FVar16.Data + (longlong)iVar14 * 8;
    while( true ) {
      if ((int)pFVar15 != iVar14) {
        `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_188);
        pFVar15 = (FScriptContainerElement *)(local_190 & 0xffffffff);
      }
      FVar13.Data = local_198.Data;
      if (FVar16.Data == pFVar1) break;
      if (*(longlong *)FVar16.Data != 0) {
        uVar2 = *(undefined4 *)(*(longlong *)FVar16.Data + 8);
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
             uVar2;
        pFVar15 = (FScriptContainerElement *)(local_190 & 0xffffffff);
      }
      FVar16.Data = FVar16.Data + 8;
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  return __return_storage_ptr__;
}

// GetSubTabFrameParent @ 14bb10810

EDS_ContentsTabFrameType __thiscall
UDS_NotificationManager::GetSubTabFrameParent(UDS_NotificationManager *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  EDS_ContentsTabFrameType EVar5;
  ForAnyElementType FVar6;
  undefined1 local_res20 [8];
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_ContentsTabFrameTableRow::GetAll(&local_28);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 8;
  uVar4 = local_28._8_8_;
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
      uVar4 = local_28._8_8_;
    }
    if (FVar6.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar6.Data;
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x24) == param_1)) && (*(int *)(lVar2 + 0x28) == param_2)
       ) {
      EVar5 = *(EDS_ContentsTabFrameType *)(lVar2 + 8);
LAB_14bb1087b:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return EVar5;
    }
    FVar6.Data = FVar6.Data + 8;
  }
  EVar5 = None;
  goto LAB_14bb1087b;
}

// Init @ 14bb138b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::Init(UDS_NotificationManager *this)

{
  undefined1 *puVar1;
  TMap<EDS_ItemType,EDS_ContentsTabFrameType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ItemType,EDS_ContentsTabFrameType,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  EDS_ContentsTabFrameType *pEVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  pmf_cc19dd79 pVar8;
  UDS_GameInstance *pUVar9;
  UClass *pUVar10;
  UDS_LogManager *pUVar11;
  UDS_LoginEvent *pUVar12;
  ulonglong uVar13;
  EDS_ContentsTabFrameType *pEVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  pmf_cc19dd79 local_190;
  TArray<FDS_InventoryTabTableRow_const_*,TSizedDefaultAllocator<32>_> local_188;
  TPairInitializer<EDS_ItemType_const_&,EDS_ContentsTabFrameType_const_&> local_178;
  longlong local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = &this->ItemSymbolToContentMap;
  bVar7 = 1 < *(int *)&(this->ItemSymbolToContentMap).field_0x48;
  local_190 = (pmf_cc19dd79)this;
  if (!bVar7) {
    TSet<TTuple<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->ItemSymbolToContentMap).field_0xc;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->ItemSymbolToContentMap).field_0x2c;
  *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemSymbolToContentMap).field_0x10,0)
    ;
  }
  if (bVar7) {
    *(undefined4 *)&(this->ItemSymbolToContentMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  FDS_InventoryTabTableRow::GetAll(&local_188);
  iVar4 = local_188.ArrayNum;
  uVar13 = (ulonglong)local_188.ArrayNum;
  pFVar2 = local_188.AllocatorInstance.Data + uVar13 * 8;
  FVar15.Data = local_188.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((uint)uVar13 != iVar4) {
        `TCheckedPointerIterator<FDS_InventoryTabTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_198);
      }
      if (FVar15.Data == pFVar2) {
        pUVar12 = UDS_LoginEvent::GetEvent();
        pVar8 = local_190;
        if (pUVar12 != (UDS_LoginEvent *)0x0) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar12->OnReceiveJoinMapResponse,(void *)local_190);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar12->OnReceiveJoinMapResponse,(void *)pVar8);
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_NotificationManager>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&pUVar12->OnReceiveJoinMapResponse,(UDS_NotificationManager *)&local_190,
                     pVar8);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar12->OnReceiveMyCharacterInfoResponseComplete,(void *)pVar8);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &pUVar12->OnReceiveMyCharacterInfoResponseComplete,(void *)pVar8);
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_NotificationManager>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&pUVar12->OnReceiveMyCharacterInfoResponseComplete,
                     (UDS_NotificationManager *)&local_190,pVar8);
        }
        if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.AllocatorInstance.Data);
        }
        return;
      }
      lVar6 = *(longlong *)FVar15.Data;
      if (lVar6 != 0) break;
      pUVar9 = UDS_GameInstance::GetInst();
      if (pUVar9 == (UDS_GameInstance *)0x0) goto LAB_14bb13b1a;
      pUVar10 = Z_Construct_UClass_UDS_LogManager_NoRegister();
      pUVar11 = (UDS_LogManager *)UDS_GameInstance::GetManager(pUVar9,(FName)pUVar10->_padding_);
      if (pUVar11 == (UDS_LogManager *)0x0) {
LAB_14bb13a04:
        pUVar11 = (UDS_LogManager *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UDS_LogManager_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bb13a04;
      }
      if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb13b1a;
      pUVar9 = UDS_GameInstance::GetInst();
      if (pUVar9 == (UDS_GameInstance *)0x0) {
LAB_14bb13a59:
        pUVar11 = (UDS_LogManager *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UDS_LogManager_NoRegister();
        pUVar11 = (UDS_LogManager *)UDS_GameInstance::GetManager(pUVar9,(FName)pUVar10->_padding_);
        if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14bb13a59;
        pUVar10 = Z_Construct_UClass_UDS_LogManager_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar10->_padding_)) goto LAB_14bb13a59;
      }
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NotificationManager::Init",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_158.Ptr,0x47,L"inventrotyTabRow is nullptr");
      if ((void *)local_158._padding_ == (void *)0x0) goto LAB_14bb13b1a;
      FMemory::Free((void *)local_158._padding_);
      uVar13 = (ulonglong)(uint)local_188.ArrayNum;
      FVar15.Data = FVar15.Data + 8;
    }
    pEVar14 = *(EDS_ContentsTabFrameType **)(lVar6 + 0x38);
    iVar5 = *(int *)(lVar6 + 0x40);
    pEVar3 = pEVar14 + iVar5;
    while( true ) {
      if (*(int *)(lVar6 + 0x40) != iVar5) {
        `TCheckedPointerIterator<enum_EDS_ItemType_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_198);
      }
      if (pEVar14 == pEVar3) break;
      local_168 = lVar6 + 0x14;
      local_178.Value = pEVar14;
      TSet<TTuple<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ItemType_const_&,enum_EDS_ContentsTabFrameType_const_&>_>
                (this_00,&local_178,(bool *)&local_178.Value);
      pEVar14 = pEVar14 + 1;
    }
LAB_14bb13b1a:
    uVar13 = (ulonglong)(uint)local_188.ArrayNum;
    FVar15.Data = FVar15.Data + 8;
  } while( true );
}

// OnChangedAchievement @ 14bb1b9c0

void __thiscall
UDS_NotificationManager::OnChangedAchievement
          (UDS_NotificationManager *this,UDS_DataSetBase *param_1)

{
  OnUpdateAchievementTab(this);
  this->IsCanBroadCast = true;
  return;
}

// OnChangedAchievementCategorySymbol @ 14bb1b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::OnChangedAchievementCategorySymbol
          (UDS_NotificationManager *this,EDS_AchievementCategory param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UDS_AchievementDataSet *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_158);
  bVar4 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_158,(void *)0x0
                    );
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_761559802512932313>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NotificationManager.cpp"
                       ,0x227,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NotificationManager::OnChangedAchievementCategorySymbol",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x228,L"achievementDataSet is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_158);
    UDS_AchievementDataSet::GetAchievementCategorySymbol(this_00,&local_150,param_1);
    if (((local_150.Object == (FDS_AchievementCategorySymbol *)0x0) ||
        (local_150.WeakReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)) ||
       ((int)(local_150.WeakReferenceCount.ReferenceController)->SharedReferenceCount < 1)) {
      RemoveNotificationData(this,AchvReward);
    }
    else {
      AddNotificationData(this,AchvReward);
    }
    CheckCharacterService(this,AchievementClaimAble);
    RefreshNotificationArray(this);
    if (local_150.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_150.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_150.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_150.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// OnChangedCharacterLevel @ 14bb1bd40

void __thiscall
UDS_NotificationManager::OnChangedCharacterLevel(UDS_NotificationManager *this,int *param_1)

{
  CheckCharacterService(this,CharacterLevelUp);
  RefreshNotificationArray(this);
  return;
}

// OnChangedCurrentCharacter @ 14bb1bd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::OnChangedCurrentCharacter
          (UDS_NotificationManager *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FName local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    (&this->PreCharInfoData,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NotificationManager::OnChangedCurrentCharacter",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x1ea,L"PreCharInfoData is invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->PreCharInfoData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
               (UObject *)this);
  }
  if (param_2 == (FDS_EntityBase *)0x0) goto LAB_14bb1bf5f;
  UDS_CharInfoData::GetData((ulong64)&local_168);
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_168,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_168);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
               (UObject *)this);
    pUVar3 = FWeakObjectPtr::Get(&local_168);
    pcVar5 = strstr("&UDS_NotificationManager::OnChangedCharacterLevel","::");
    if (pcVar5 == (char *)0x0) {
LAB_14bb1beeb:
      pcVar6 = &DAT_00000002;
LAB_14bb1bef0:
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
        pcVar6 = pcVar5;
        pcVar5 = strstr(pcVar6 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar6 == (char *)0x0) goto LAB_14bb1beeb;
      pcVar6 = pcVar6 + 2;
      if (*pcVar6 == '0') goto LAB_14bb1bef0;
    }
    ::FName::FName(&local_160,pcVar6);
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
    __Internal_AddDynamic<UDS_NotificationManager>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
               &pUVar3[2].field_0x8,this,(pmf_8532ea59)0x14bb1bd40,local_160);
  }
  (this->PreCharInfoData).WeakPtr = local_168;
LAB_14bb1bf5f:
  CheckCharacterService(this,CharacterChange);
  RefreshNotificationArray(this);
  return;
}

// OnChangedEquipItem @ 14bb1bfb0

void __thiscall
UDS_NotificationManager::OnChangedEquipItem(UDS_NotificationManager *this,bool param_1)

{
  this->IsChangedItemEquipDirty = true;
  return;
}

// OnChangedHaloPoint @ 14bb1c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_NotificationManager::OnChangedHaloPoint(UDS_NotificationManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_PlayerSkillData *pUVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStackY_98 [32];
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  int iStack_48;
  int iStack_44;
  FWeakObjectPtr FStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  FStack_40.ObjectIndex = 0x3020100;
  FStack_40.ObjectSerialNumber = 0x7060504;
  uStack_38 = 0xb0a0908;
  uStack_34 = 0xc;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  iStack_48 = 0xd;
  bVar7 = false;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0xd,0,&FStack_50,0xd,&iStack_44);
  memcpy(FStack_50.Data,&FStack_40,0xd);
  iVar2 = iStack_48;
  pFVar1 = FStack_50.Data + iStack_48;
  FVar6.Data = FStack_50.Data;
  bVar8 = false;
LAB_14bb239d8:
  do {
    if (iStack_48 != iVar2) {
      `TCheckedPointerIterator<enum_EDS_PlayerSkillType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_58);
    }
    if (FVar6.Data == pFVar1) {
      if (FStack_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_50.Data);
      }
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Action,bVar8);
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Life,bVar7);
      return;
    }
    if ((*FVar6.Data != (FScriptContainerElement)0xd) &&
       (*FVar6.Data != (FScriptContainerElement)0x0)) {
      UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&FStack_40);
      bVar3 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&FStack_40,
                         (void *)0x0);
      if (!bVar3) {
        pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
        bVar3 = UDS_PlayerSkillData::IsLevelUpAble(pUVar4);
        if (bVar3) {
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Action) {
            FVar6.Data = FVar6.Data + 1;
            bVar8 = true;
            goto LAB_14bb239d8;
          }
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Life) {
            bVar7 = true;
          }
        }
      }
    }
    FVar6.Data = FVar6.Data + 1;
  } while( true );
}

// OnChangedItemSymbol @ 14bb1c0c0

void __thiscall
UDS_NotificationManager::OnChangedItemSymbol(UDS_NotificationManager *this,bool param_1)

{
  this->IsChangedItemSymbolDirty = true;
  return;
}

// OnChangedMailReward @ 14bb1c7d0

void __thiscall UDS_NotificationManager::OnChangedMailReward(UDS_NotificationManager *this)

{
  AddNotificationData(this,MailHasReward);
  UpdateTabFrameRedDotStateMap(this,MailSystem,true);
  UpdateTabFrameRedDotStateMap(this,Mail,true);
  RefreshNotificationArray(this);
  return;
}

// OnChangedMailUnread @ 14bb1c820

void __thiscall UDS_NotificationManager::OnChangedMailUnread(UDS_NotificationManager *this)

{
  AddNotificationData(this,MailHasUnread);
  UpdateTabFrameRedDotStateMap(this,MailSystem,true);
  UpdateTabFrameRedDotStateMap(this,Mail,true);
  RefreshNotificationArray(this);
  return;
}

// OnChangedPlayerGrade @ 14bb1cbd0

void __thiscall
UDS_NotificationManager::OnChangedPlayerGrade(UDS_NotificationManager *this,int param_1)

{
  CheckCharacterService(this,PlayerLevelUp);
  RefreshNotificationArray(this);
  return;
}

// OnChangedPlayerSkillDataSet @ 14bb1cc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_NotificationManager::OnChangedPlayerSkillDataSet
          (UDS_NotificationManager *this,UDS_DataSetBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_PlayerSkillData *pUVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStackY_98 [32];
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  int iStack_48;
  int iStack_44;
  FWeakObjectPtr FStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  FStack_40.ObjectIndex = 0x3020100;
  FStack_40.ObjectSerialNumber = 0x7060504;
  uStack_38 = 0xb0a0908;
  uStack_34 = 0xc;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  iStack_48 = 0xd;
  bVar7 = false;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0xd,0,&FStack_50,0xd,&iStack_44);
  memcpy(FStack_50.Data,&FStack_40,0xd);
  iVar2 = iStack_48;
  pFVar1 = FStack_50.Data + iStack_48;
  FVar6.Data = FStack_50.Data;
  bVar8 = false;
LAB_14bb239d8:
  do {
    if (iStack_48 != iVar2) {
      `TCheckedPointerIterator<enum_EDS_PlayerSkillType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_58);
    }
    if (FVar6.Data == pFVar1) {
      if (FStack_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_50.Data);
      }
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Action,bVar8);
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Life,bVar7);
      return;
    }
    if ((*FVar6.Data != (FScriptContainerElement)0xd) &&
       (*FVar6.Data != (FScriptContainerElement)0x0)) {
      UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&FStack_40);
      bVar3 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&FStack_40,
                         (void *)0x0);
      if (!bVar3) {
        pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
        bVar3 = UDS_PlayerSkillData::IsLevelUpAble(pUVar4);
        if (bVar3) {
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Action) {
            FVar6.Data = FVar6.Data + 1;
            bVar8 = true;
            goto LAB_14bb239d8;
          }
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&FStack_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Life) {
            bVar7 = true;
          }
        }
      }
    }
    FVar6.Data = FVar6.Data + 1;
  } while( true );
}

// OnCheckNewSymbolItem @ 14bb1ce80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NotificationManager::OnCheckNewSymbolItem(UDS_NotificationManager *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_00;
  UDS_LogManager *pUVar2;
  UDS_ItemDataSet *this_01;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  UObject *local_150;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_148);
  local_150 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_150);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_150);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)&local_150);
  bVar1 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NotificationManager::OnCheckNewSymbolItem",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x339,L"itemDataSet is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    this_01 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_158);
    bVar1 = UDS_ItemDataSet::HasNewSymbolAllItem(this_01);
  }
  return bVar1;
}

// OnConfirmNotification @ 14bb1d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::OnConfirmNotification
          (UDS_NotificationManager *this,EDS_NotificationType param_1)

{
  bool bVar1;
  FDS_NotificationBaseTableRow *this_00;
  UDS_LogManager *pUVar2;
  UDS_ContentManager *this_01;
  undefined1 auStackY_178 [32];
  uint uVar3;
  wchar_t *pwVar4;
  FWeakObjectPtr local_148;
  UDS_ContentManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  RemoveNotificationData(this,param_1);
  RefreshNotificationArray(this);
  this_00 = FDS_NotificationBaseTableRow::GetRef((ulonglong)param_1,true);
  bVar1 = FDS_NotificationBaseTableRow::IsValid(this_00);
  if (bVar1) {
    local_140 = UDS_ContentManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_ContentManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    local_148.ObjectIndex = 0;
    local_148.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_140 != (UDS_ContentManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_140);
    }
    FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
    bVar1 = TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (!bVar1) {
      this_01 = (UDS_ContentManager *)FWeakObjectPtr::Get(&local_148);
      local_140 = (UDS_ContentManager *)0x0;
      UDS_ContentManager::OpenContent
                (this_01,&this_00->ID_ContentsTab,(TObjectPtr<UDS_ContentArguments>)&local_140);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NotificationManager::OnConfirmNotification",0x2e,Yes);
    pwVar4 = L"contentManager is nullptr.";
    uVar3 = 0x19a;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NotificationManager::OnConfirmNotification",0x2e,Yes);
    pwVar4 = L"notificationTableRow is invalid.";
    uVar3 = 0x193;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar3,pwVar4);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnMailDataSetChanged @ 14bb1ec80

void __thiscall
UDS_NotificationManager::OnMailDataSetChanged
          (UDS_NotificationManager *this,UDS_DataSetBase *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_DataSetBase *pUVar4;
  FWeakObjectPtr local_res10;
  UDS_DataSetBase *local_res18;
  
  if (param_1 != (UDS_DataSetBase *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_MailDataSet_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar4 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar3->_padding_)) goto LAB_14bb1ecc4;
  }
  pUVar4 = (UDS_DataSetBase *)0x0;
LAB_14bb1ecc4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataSetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_DataSetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar2) && (pUVar4 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res10), param_1 == pUVar4))
  {
    OnUpdateMailTab(this);
  }
  return;
}

// OnNotificationPublishDelegate @ 14bb1f030

void __thiscall
UDS_NotificationManager::OnNotificationPublishDelegate
          (UDS_NotificationManager *this,EDS_NotificationCause param_1)

{
  CheckCharacterService(this,param_1);
  RefreshNotificationArray(this);
  return;
}

// OnReceiveJoinMapResponseEvent @ 14bb210a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::OnReceiveJoinMapResponseEvent(UDS_NotificationManager *this)

{
  bool bVar1;
  UDS_QuestEvent *pUVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_EventManager *this_00;
  UDS_MailEvent *pUVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  undefined1 local_148 [272];
  UDS_QuestEvent *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = UDS_QuestEvent::GetEvent();
  if (pUVar2 == (UDS_QuestEvent *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_38 = pUVar2;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
               "UDS_NotificationManager::OnReceiveJoinMapResponseEvent",0x36,Yes);
    pwVar7 = L"questEvent is nullptr.";
    uVar6 = 0xb6;
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->NewAbleCompleteQuestSymbolDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_QuestType),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              (&pUVar2->NewAbleCompleteQuestSymbolDelegate,(UDS_NotificationManager *)local_148,
               (pmf_6b55297c)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnAddQuestDataDelegate
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnAddQuestDataDelegate,(UDS_NotificationManager *)local_148,
               (pmf_6a913edd)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NotificationManager>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateQuestDataDelegate,(UDS_NotificationManager *)local_148,
               (pmf_6a913edd)this);
    TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)(local_148 + 8));
    bVar1 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)(local_148 + 8),
                       (void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_38 = (UDS_QuestEvent *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_NotificationManager::OnReceiveJoinMapResponseEvent",0x36,Yes);
      pwVar7 = L"achievementDataSet is nullptr.";
      uVar6 = 0xc2;
    }
    else {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_148 + 8));
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[4].field_0x10,this);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_148 + 8));
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[4].field_0x10,this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_AchievementCategory),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_NotificationManager>
                (&pUVar4[4].field_0x10,(UDS_NotificationManager *)local_148,(pmf_1b6379c6)this);
      this_00 = UDS_EventManager::GetInst();
      if (this_00 == (UDS_EventManager *)0x0) {
        return;
      }
      if ((char)this_00->_padding_ != '\x01') {
        pUVar5 = UDS_EventManager::GetEventInternal<UDS_MailEvent>(this_00);
        if (pUVar5 == (UDS_MailEvent *)0x0) {
          return;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailUnreadNotification,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailUnreadNotification,this);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_NotificationManager>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailUnreadNotification,(UDS_NotificationManager *)local_148,
                   (pmf_cc19dd79)this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailRewardNotification,this);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailRewardNotification,this);
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_NotificationManager>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar5->OnMailRewardNotification,(UDS_NotificationManager *)local_148,
                   (pmf_cc19dd79)this);
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_38 = (UDS_QuestEvent *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_EventManager::GetEvent",0x1a,Yes);
      pwVar7 = L"Cannot access event during UDS_EventManager destruction.";
      uVar6 = 0x31;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,uVar6,pwVar7);
  if (local_38 != (UDS_QuestEvent *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// OnReceiveMyCharacterInfoResponseCompleteEvent @ 14bb213a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent
          (UDS_NotificationManager *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStackY_668 [32];
  FWeakObjectPtr local_638;
  FWeakObjectPtr local_630;
  FWeakObjectPtr local_628;
  FWeakObjectPtr local_620;
  FWeakObjectPtr local_618;
  FWeakObjectPtr local_610;
  FName local_608;
  FName local_600;
  FName local_5f8;
  FName local_5f0;
  FName local_5e8;
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [264];
  void *local_4c8;
  wchar_t *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_668;
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)&local_620);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)&local_620,(void *)0x0
                    );
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_4c8 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_5d0 + 8),
               "UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent",0x46,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_4c0,0xdb,L"mainPlayerDataSet is nullptr");
    if (local_4c8 == (void *)0x0) {
      return;
    }
    FMemory::Free(local_4c8);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_620);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedPlayerSkillDataSet","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bb214eb:
    pcVar6 = &DAT_00000002;
LAB_14bb214f0:
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
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bb214eb;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bb214f0;
  }
  ::FName::FName(&local_608,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_95033f17)0x14bb1cc00,local_608);
  UDS_PlayerData::GetData((ulong64)&local_638,UDS_PlayerData::MainPlayerEntityID,false);
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_638,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_4a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4a8,"UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent",
               0x46,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_4a8.Ptr,0xe3,L"mainPlayerData is nullptr");
    if ((void *)local_4a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4a8._padding_);
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_NotificationManager *)local_5e0,(pmf_e97961a7)this);
  pUVar4 = FWeakObjectPtr::Get(&local_638);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &pUVar4[2].field_0x8,(UDS_NotificationManager *)(local_5e0 + 8),(pmf_6a913edd)this);
  pUVar4 = FWeakObjectPtr::Get(&local_638);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_NotificationManager>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &pUVar4[3].field_0x20,(UDS_NotificationManager *)local_5d0,(pmf_6a913edd)this);
  FWeakObjectPtr::Get(&local_638);
  UDS_CharInfoData::GetData((ulong64)&local_630);
  bVar2 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_630,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent",
               0x46,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_388.Ptr,0xef,L"charInfoData is nullptr");
    if ((void *)local_388._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_388._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_630);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedCharacterLevel","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bb2176b:
    pcVar6 = &DAT_00000002;
LAB_14bb21770:
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
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bb2176b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bb21770;
  }
  ::FName::FName(&local_600,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar4[2].field_0x8,this,(pmf_8532ea59)0x14bb1bd40,local_600);
  (this->PreCharInfoData).WeakPtr = local_630;
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_618);
  bVar2 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_618,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent",
               0x46,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0xfa,L"itemDataSet is nullptr.");
    if ((void *)local_268._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_268._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_618);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedEquipItem","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bb218db:
    pcVar6 = &DAT_00000002;
LAB_14bb218e0:
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
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bb218db;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bb218e0;
  }
  ::FName::FName(&local_5f8,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,bool_const_> *)
             &pUVar4[0xc].field_0x20,this,(pmf_46cab3f4)0x14bb1bfb0,local_5f8);
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_610);
  bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_610,(void *)0x0
                    );
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NotificationManager::OnReceiveMyCharacterInfoResponseCompleteEvent",
               0x46,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x105,L"achievementDataSet is nullptr.")
    ;
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_610);
  pcVar5 = strstr("&UDS_NotificationManager::OnChangedAchievement","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bb21a3b:
    pcVar6 = &DAT_00000002;
LAB_14bb21a40:
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
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bb21a3b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bb21a40;
  }
  ::FName::FName(&local_5f0,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_95033f17)0x14bb1b9c0,local_5f0);
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)&local_628);
  bVar2 = FWeakObjectPtr::IsValid(&local_628);
  if (!bVar2) goto LAB_14bb21b81;
  pUVar4 = FWeakObjectPtr::Get(&local_628);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this);
  pUVar4 = FWeakObjectPtr::Get(&local_628);
  pcVar5 = strstr("&UDS_NotificationManager::OnMailDataSetChanged","::");
  if (pcVar5 == (char *)0x0) {
LAB_14bb21b2b:
    pcVar6 = &DAT_00000002;
LAB_14bb21b30:
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
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bb21b2b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bb21b30;
  }
  ::FName::FName(&local_5e8,pcVar6);
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_NotificationManager>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_95033f17)0x14bb1ec80,local_5e8);
LAB_14bb21b81:
  OnUpdateItemSymbol(this);
  OnUpdataCharacterTab(this);
  OnUpdateAchievementTab(this);
  OnUpdateAscenderSkillTab(this);
  OnUpdateMailTab(this);
  CheckCharacterService(this,EnterGame);
  RefreshNotificationArray(this);
  return;
}

// OnUpdataCharacterTab @ 14bb23580

void __thiscall UDS_NotificationManager::OnUpdataCharacterTab(UDS_NotificationManager *this)

{
  bool bVar1;
  
  bVar1 = FDS_PlayerService::OnCheckPlayerInfoByItem();
  if (!bVar1) {
    bVar1 = FDS_CharacterService::OnCheckCharacterCanEquipItem();
    if (!bVar1) {
      UpdateTabFrameRedDotStateMap(this,Character,false);
      return;
    }
  }
  UpdateTabFrameRedDotStateMap(this,Character,true);
  return;
}

// OnUpdateAchievementTab @ 14bb235d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::OnUpdateAchievementTab(UDS_NotificationManager *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_AchievementDataSet *pUVar7;
  TWeakPtr<FDS_AchievementCategorySymbol,1> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_190;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_180;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_170;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_198);
  bVar5 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_198,(void *)0x0
                    );
  if (bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_761559802512932160>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NotificationManager.cpp"
                       ,0x2c0,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NotificationManager::OnUpdateAchievementTab",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x2c1,L"achievementDataSet is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar7 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_198);
    pTVar8 = UDS_AchievementDataSet::GetAchievementCategorySymbol(pUVar7,&local_190,Adventure);
    if (((pTVar8->Object == (FDS_AchievementCategorySymbol *)0x0) ||
        (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (local_190.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_190.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_190.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_190.WeakReferenceCount.ReferenceController,1);
      }
    }
    pUVar7 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_198);
    pTVar8 = UDS_AchievementDataSet::GetAchievementCategorySymbol(pUVar7,&local_180,Upgrade);
    if (((pTVar8->Object == (FDS_AchievementCategorySymbol *)0x0) ||
        (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (local_180.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_180.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_180.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_180.WeakReferenceCount.ReferenceController,1);
      }
    }
    pUVar7 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_198);
    pTVar8 = UDS_AchievementDataSet::GetAchievementCategorySymbol(pUVar7,&local_170,Challenge);
    if (((pTVar8->Object == (FDS_AchievementCategorySymbol *)0x0) ||
        (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (local_170.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_170.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_170.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_170.WeakReferenceCount.ReferenceController,1);
      }
    }
    pUVar7 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(&local_198);
    pTVar8 = UDS_AchievementDataSet::GetAchievementCategorySymbol(pUVar7,&local_160,Sever);
    if (((pTVar8->Object == (FDS_AchievementCategorySymbol *)0x0) ||
        (pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController,
        pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (local_160.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_160.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_160.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_160.WeakReferenceCount.ReferenceController,1);
      }
    }
    UpdateTabFrameRedDotStateMap(this,Achievement_Adventure,bVar5);
    UpdateTabFrameRedDotStateMap(this,Achievement_Upgrade,bVar10);
    UpdateTabFrameRedDotStateMap(this,Achievement_Challenge,bVar11);
    UpdateTabFrameRedDotStateMap(this,Achievement_Sever,bVar9);
    if (((bVar5 == false) && (bVar10 == false)) && ((bVar11 == false && (bVar9 == false)))) {
      UpdateTabFrameRedDotStateMap(this,Achievement,false);
    }
    else {
      UpdateTabFrameRedDotStateMap(this,Achievement,true);
      if (bVar5 != false) {
        return;
      }
      if (bVar10 != false) {
        return;
      }
      if (bVar11 != false) {
        return;
      }
      if (bVar9 != false) {
        return;
      }
    }
    RemoveNotificationData(this,AchvReward);
  }
  return;
}

// OnUpdateAscenderSkillTab @ 14bb23930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_NotificationManager::OnUpdateAscenderSkillTab(UDS_NotificationManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UDS_PlayerSkillData *pUVar4;
  FDS_PlayerSkillBaseTableRow *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStackY_98 [32];
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  FWeakObjectPtr local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_40.ObjectIndex = 0x3020100;
  local_40.ObjectSerialNumber = 0x7060504;
  local_38 = 0xb0a0908;
  local_34 = 0xc;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0xd;
  bVar7 = false;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0xd,0,&local_50,0xd,&local_44);
  memcpy(local_50.Data,&local_40,0xd);
  iVar2 = local_48;
  pFVar1 = local_50.Data + local_48;
  FVar6.Data = local_50.Data;
  bVar8 = false;
LAB_14bb239d8:
  do {
    if (local_48 != iVar2) {
      `TCheckedPointerIterator<enum_EDS_PlayerSkillType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if (FVar6.Data == pFVar1) {
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Action,bVar8);
      UpdateTabFrameRedDotStateMap(this,PlayerSkill_Life,bVar7);
      return;
    }
    if ((*FVar6.Data != (FScriptContainerElement)0xd) &&
       (*FVar6.Data != (FScriptContainerElement)0x0)) {
      UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_40);
      bVar3 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_40,(void *)0x0
                        );
      if (!bVar3) {
        pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_40);
        bVar3 = UDS_PlayerSkillData::IsLevelUpAble(pUVar4);
        if (bVar3) {
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Action) {
            FVar6.Data = FVar6.Data + 1;
            bVar8 = true;
            goto LAB_14bb239d8;
          }
          pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_40);
          pFVar5 = UDS_PlayerSkillData::GetPlayerSkillBaseTable(pUVar4);
          if (pFVar5->SkillCategoryType == Life) {
            bVar7 = true;
          }
        }
      }
    }
    FVar6.Data = FVar6.Data + 1;
  } while( true );
}

// OnUpdateItemSymbol @ 14bb240c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::OnUpdateItemSymbol(UDS_NotificationManager *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  EDS_ItemType EVar5;
  EDS_ContentsTabFrameType EVar6;
  ENullTerminatedString EVar7;
  code *pcVar8;
  UDS_NotificationManager *this_00;
  longlong *plVar9;
  bool bVar10;
  ENullTerminatedString EVar11;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> this_01;
  UDS_LogManager *pUVar12;
  UObject *pUVar13;
  EDS_ContentsTabFrameType *pEVar14;
  byte bVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  ForAnyElementType FVar20;
  EDS_ItemType *pEVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ForElementType<unsigned_int> FVar25;
  uint *puVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined8 uVar28;
  undefined1 auStackY_4c8 [32];
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined1 local_485;
  uint local_484;
  undefined1 local_480 [8];
  FWeakObjectPtr local_478;
  longlong *local_470;
  uint uStack_468;
  ENullTerminatedString EStack_464;
  TBitArray<FDefaultBitArrayAllocator> *local_460;
  undefined4 uStack_458;
  uint uStack_454;
  uint local_450;
  int iStack_44c;
  int iStack_448;
  undefined4 uStack_444;
  undefined8 local_440;
  TBitArray<FDefaultBitArrayAllocator> *local_438;
  UDS_NotificationManager *local_430;
  TArray<FDS_InventoryTabTableRow_const_*,TSizedDefaultAllocator<32>_> local_428;
  UObject *local_418;
  int iStack_410;
  uint uStack_40c;
  undefined1 *local_408;
  undefined4 uStack_400;
  int iStack_3fc;
  int local_3f8;
  undefined4 uStack_3f4;
  int iStack_3f0;
  undefined4 uStack_3ec;
  TPairInitializer<EDS_ContentsTabFrameType_const_&,bool_&&> local_3e8;
  int local_3d8;
  int local_3d4;
  UObject *local_3d0;
  UObject *local_3c8;
  TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> local_3c0;
  longlong *local_3b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b0;
  undefined8 uStack_390;
  UObject *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  longlong *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  longlong local_328;
  undefined1 *local_320;
  undefined1 local_318 [36];
  undefined4 local_2f4;
  int local_2d4;
  longlong local_2c8;
  undefined8 local_2c0;
  TBitArray<FDefaultBitArrayAllocator> local_2b8;
  undefined4 local_298;
  int local_294;
  undefined1 local_290 [8];
  undefined1 *local_288;
  int local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  iVar24 = 0;
  local_2b8.NumBits = 0;
  local_294 = 0;
  local_288 = (undefined1 *)0x0;
  local_280 = 0;
  local_2b8.MaxBits = 0x80;
  local_298 = 0xffffffff;
  local_430 = this;
  FDS_InventoryTabTableRow::GetAll(&local_428);
  iVar3 = local_428.ArrayNum;
  pFVar1 = local_428.AllocatorInstance.Data + (longlong)local_428.ArrayNum * 8;
  FVar20.Data = local_428.AllocatorInstance.Data;
  while( true ) {
    if (local_428.ArrayNum != iVar3) {
      local_488 = 0;
      `TCheckedPointerIterator<FDS_InventoryTabTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_488);
    }
    if (FVar20.Data == pFVar1) break;
    lVar16 = *(longlong *)FVar20.Data;
    if (lVar16 != 0) {
      if ((int)local_2c0 != local_294) {
        puVar17 = local_290;
        if (local_288 != (undefined1 *)0x0) {
          puVar17 = local_288;
        }
        for (iVar19 = *(int *)(puVar17 + (ulonglong)(local_280 - 1U & *(uint *)(lVar16 + 0x14)) * 4)
            ; iVar19 != -1; iVar19 = *(int *)(local_2c8 + 8 + (longlong)iVar19 * 0x10)) {
          if (*(uint *)(local_2c8 + (longlong)iVar19 * 0x10) == *(uint *)(lVar16 + 0x14))
          goto LAB_14bb2420e;
        }
      }
      local_320 = &local_487;
      local_487 = 0;
      local_328 = lVar16 + 0x14;
      TSet<TTuple<enum_EDS_ContentsTabFrameType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ContentsTabFrameType_const_&,bool_&&>_>
                (&local_2c8,&local_3e8,(bool *)&local_328);
    }
LAB_14bb2420e:
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  this_01 = TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)local_318);
  local_3d0 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_3d0);
  }
  local_478.ObjectIndex = 0;
  local_478.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_3d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_3d0);
  }
  FWeakObjectPtr::operator=(&local_478,(FObjectPtr)&local_3d0);
  bVar10 = TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> *)&local_478,(void *)0x0);
  if (bVar10) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_NotificationManager::OnUpdateItemSymbol",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar12,1,Warning,local_278.Ptr,0x281,L"itemDataSet is nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    pUVar13 = FWeakObjectPtr::Get(&local_478);
    uVar28 = 1;
    local_440 = 1;
    local_3f8 = 0;
    pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar13[0xe].field_0x10;
    iVar3 = *(int *)(pUVar13 + 0xf);
    local_418 = pUVar13 + 0xe;
    iStack_3fc = 0;
    uStack_40c = 1;
    if (iVar3 != 0) {
      puVar26 = *(uint **)&pUVar13[0xe].field_0x20;
      if (*(uint **)&pUVar13[0xe].field_0x20 == (uint *)0x0) {
        puVar26 = (uint *)pTVar27;
      }
      uStack_40c = *puVar26;
      iVar24 = 0;
      while (uStack_40c == 0) {
        lVar16 = (longlong)iVar24;
        local_3f8 = local_3f8 + 0x20;
        iVar24 = iVar24 + 1;
        iStack_3fc = iVar3;
        uStack_40c = 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14bb243de;
        uStack_40c = puVar26[lVar16 + 1];
      }
      uStack_40c = -uStack_40c & uStack_40c;
      uVar2 = (ulonglong)uStack_40c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_3e8.Key._4_4_ = (int)lVar16;
      iStack_3fc = local_3f8 + -1 + local_3e8.Key._4_4_;
      if (iVar3 < iStack_3fc) {
        iStack_3fc = iVar3;
      }
    }
LAB_14bb243de:
    uStack_3f4 = local_2f4;
    iStack_3f0 = *(int *)&pUVar13[0xe].field_0x8 - *(int *)&pUVar13[0xf].field_0xc;
    uVar23 = *(uint *)(pUVar13 + 0xf);
    TStack_380._padding_ = CONCAT44(uStack_40c,iVar24);
    uVar22 = uVar23 & 0xffffffe0;
    uStack_400 = 0xffffffff;
    TStack_380.CurrentBitIndex = iStack_3fc;
    TStack_380.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar23 >> 5;
    TStack_380._28_4_ = local_2f4;
    TStack_380.BaseBitIndex = local_3f8;
    uStack_360 = CONCAT44(uStack_3ec,iStack_3f0);
    local_484 = uVar23;
    local_438 = pTVar27;
    iStack_410 = iVar24;
    local_408 = (undefined1 *)pTVar27;
    local_3c8 = local_418;
    local_388 = local_418;
    TStack_380.Array = pTVar27;
    if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)(pUVar13 + 0xf);
    if (uVar23 != uVar4) {
      puVar17 = *(undefined1 **)&pUVar13[0xe].field_0x20;
      if (*(undefined1 **)&pUVar13[0xe].field_0x20 == (undefined1 *)0x0) {
        puVar17 = (undefined1 *)pTVar27;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar19 * 4);
      while (uVar23 == 0) {
        lVar16 = (longlong)iVar19;
        uVar22 = uVar22 + 0x20;
        iVar19 = iVar19 + 1;
        uVar23 = uVar4;
        local_484 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_14bb24501;
        uVar23 = *(uint *)(puVar17 + lVar16 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_3e8.Value._0_4_ = (int)lVar16;
      uVar23 = (uVar22 - 1) + (int)local_3e8.Value;
      local_484 = uVar23;
      if ((int)uVar4 < (int)uVar23) {
        uVar23 = uVar4;
        local_484 = uVar4;
      }
    }
LAB_14bb24501:
    pUVar13 = local_388;
    EVar11 = (ENullTerminatedString)uVar28;
    if (*(int *)&local_388->field_0x8 - *(int *)&local_388[1].field_0xc != (int)uStack_360) {
      local_486 = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_486);
    }
    if (((TStack_380.CurrentBitIndex != uVar23) || (TStack_380.Array != pTVar27)) ||
       (pUVar13 != local_3c8)) {
      pEVar21 = (EDS_ItemType *)(*(longlong *)pUVar13 + (longlong)TStack_380.CurrentBitIndex * 0x20)
      ;
      if (((*(undefined8 *)(pEVar21 + 2) != None) && (*(undefined8 *)(pEVar21 + 4) != None)) &&
         ((0 < *(int *)(*(undefined8 *)(pEVar21 + 4) + 8) && (EVar5 = *pEVar21, EVar5 != None)))) {
        if (*(int *)&(local_430->ItemSymbolToContentMap).field_0x8 !=
            *(int *)&(local_430->ItemSymbolToContentMap).field_0x34) {
          puVar17 = *(undefined1 **)&(local_430->ItemSymbolToContentMap).field_0x40;
          puVar18 = &(local_430->ItemSymbolToContentMap).field_0x38;
          if (puVar17 != (undefined1 *)0x0) {
            puVar18 = puVar17;
          }
          iVar24 = *(int *)(puVar18 +
                           (ulonglong)
                           (*(int *)&(local_430->ItemSymbolToContentMap).field_0x48 + ~None & EVar5)
                           * 4);
          if (iVar24 != -1) {
            lVar16 = *(longlong *)&local_430->ItemSymbolToContentMap;
            do {
              if (*(EDS_ItemType *)(lVar16 + (longlong)iVar24 * 0x10) == EVar5) {
                pEVar14 = TMapBase<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,0>_>
                          ::FindChecked(&local_430->ItemSymbolToContentMap,EVar5);
                uVar22 = local_2b8.NumBits;
                uStack_468 = 0;
                local_450 = 0;
                EVar6 = *pEVar14;
                uStack_454 = 0;
                if (local_2b8.NumBits == 0) goto LAB_14bb24700;
                FVar25 = (ForElementType<unsigned_int>)&local_2b8;
                if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                {
                  FVar25 = local_2b8.AllocatorInstance.SecondaryData;
                }
                EVar7 = *(ENullTerminatedString *)FVar25;
                goto joined_r0x00014bb246bc;
              }
              iVar24 = *(int *)(lVar16 + 8 + (longlong)iVar24 * 0x10);
            } while (iVar24 != -1);
          }
        }
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_761559802512932204>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NotificationManager.cpp"
                            ,0x294,"false");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_NotificationManager::OnUpdateItemSymbol",0x2b,EVar11);
          UDS_LogManager::PrintLog
                    (pUVar12,EVar11,Warning,local_158.Ptr,0x295,
                     L"ItemSymbolToContentMap is invaild. Key: %d");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      goto LAB_14bb248af;
    }
    TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_3c0);
    bVar10 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals(&local_3c0,(void *)0x0);
    uVar23 = local_2b8.NumBits;
    if (bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_761559802512932185>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_NotificationManager.cpp"
                          ,0x2a7,"false");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      uStack_468 = 0;
      local_450 = 0;
      uStack_454 = uStack_468;
      if (local_2b8.NumBits != 0) {
        FVar25 = (ForElementType<unsigned_int>)&local_2b8;
        if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_2b8.AllocatorInstance.SecondaryData;
        }
        EVar7 = *(ENullTerminatedString *)FVar25;
        local_450 = 0;
        uStack_468 = 0;
        while (EVar7 == No) {
          lVar16 = (longlong)(int)uStack_468;
          local_450 = local_450 + 0x20;
          uStack_468 = uStack_468 + 1;
          uStack_454 = local_2b8.NumBits;
          if ((int)((local_2b8.NumBits - 1U) + ((int)(local_2b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
              < (int)uStack_468) goto LAB_14bb24a11;
          EVar7 = *(ENullTerminatedString *)((uchar *)((longlong)FVar25 + 4) + lVar16 * 4);
        }
        EVar11 = -EVar7 & EVar7;
        uVar2 = (ulonglong)EVar11 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_3d4 = (int)lVar16;
        uStack_454 = local_3d4 + -1 + local_450;
        if (local_2b8.NumBits < (int)uStack_454) {
          uStack_454 = local_2b8.NumBits;
        }
      }
LAB_14bb24a11:
      local_470 = &local_2c8;
      iStack_44c = iStack_3fc;
      local_460 = &local_2b8;
      uVar22 = local_2b8.NumBits & 0xffffffe0;
      iStack_448 = (int)local_2c0 - local_294;
      uStack_458 = 0xffffffff;
      TStack_350.CurrentBitIndex = uStack_454;
      TStack_350.UnvisitedBitMask = 0xffffffff;
      TStack_350._padding_ = CONCAT44(EVar11,uStack_468);
      iVar24 = local_2b8.NumBits >> 5;
      TStack_350._28_4_ = iStack_3fc;
      TStack_350.BaseBitIndex = local_450;
      uStack_330 = CONCAT44(uStack_444,iStack_448);
      bVar15 = (byte)local_2b8.NumBits;
      EStack_464 = EVar11;
      local_358 = local_470;
      TStack_350.Array = local_460;
      if ((local_2b8.NumBits < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = local_430;
      if (uVar23 != local_2b8.NumBits) {
        FVar25 = (ForElementType<unsigned_int>)&local_2b8;
        if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar25 = local_2b8.AllocatorInstance.SecondaryData;
        }
        uVar23 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
        while (uVar23 == 0) {
          lVar16 = (longlong)iVar24;
          uVar22 = uVar22 + 0x20;
          iVar24 = iVar24 + 1;
          uVar23 = local_2b8.NumBits;
          if ((int)((local_2b8.NumBits - 1U) + ((int)(local_2b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5
              < iVar24) goto LAB_14bb24b50;
          uVar23 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar16 * 4);
        }
        uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar23 = (uVar22 - 1) + (int)lVar16;
        if (local_2b8.NumBits < (int)uVar23) {
          uVar23 = local_2b8.NumBits;
        }
      }
LAB_14bb24b50:
      while( true ) {
        plVar9 = local_358;
        if ((int)local_358[1] - *(int *)((longlong)local_358 + 0x34) != (int)uStack_330) {
          `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_480);
        }
        if (((TStack_350.CurrentBitIndex == uVar23) && (TStack_350.Array == &local_2b8)) &&
           (plVar9 == &local_2c8)) break;
        lVar16 = *plVar9;
        UpdateTabFrameRedDotStateMap
                  (this_00,*(EDS_ContentsTabFrameType *)
                            (lVar16 + (longlong)TStack_350.CurrentBitIndex * 0x10),
                   *(bool *)(lVar16 + 4 + (longlong)TStack_350.CurrentBitIndex * 0x10));
        TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
      }
      this_00->IsChangedItemEquipDirty = true;
    }
  }
  local_280 = 0;
  if (local_288 != (undefined1 *)0x0) {
    FMemory::Free(local_288);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2c8);
  return;
joined_r0x00014bb246bc:
  if (EVar7 != No) goto LAB_14bb246dc;
  lVar16 = (longlong)(int)uStack_468;
  local_450 = local_450 + 0x20;
  uStack_468 = uStack_468 + 1;
  uStack_454 = local_2b8.NumBits;
  if ((int)((local_2b8.NumBits - 1U) + ((int)(local_2b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
      (int)uStack_468) goto LAB_14bb24700;
  EVar7 = *(ENullTerminatedString *)((uchar *)((longlong)FVar25 + 4) + lVar16 * 4);
  goto joined_r0x00014bb246bc;
LAB_14bb246dc:
  EVar11 = -EVar7 & EVar7;
  uVar2 = (ulonglong)EVar11 * 2 + 1;
  lVar16 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
    }
  }
  local_3e8.Value._4_4_ = (int)lVar16;
  uStack_454 = local_3e8.Value._4_4_ + -1 + local_450;
  if (local_2b8.NumBits < (int)uStack_454) {
    uStack_454 = local_2b8.NumBits;
  }
LAB_14bb24700:
  local_470 = &local_2c8;
  iStack_44c = local_2d4;
  local_460 = &local_2b8;
  uVar23 = local_2b8.NumBits & 0xffffffe0;
  iStack_448 = (int)local_2c0 - local_294;
  TStack_3b0._padding_ = CONCAT44(EVar11,uStack_468);
  uStack_458 = 0xffffffff;
  TStack_3b0.CurrentBitIndex = uStack_454;
  TStack_3b0.UnvisitedBitMask = 0xffffffff;
  iVar24 = local_2b8.NumBits >> 5;
  TStack_3b0._28_4_ = local_2d4;
  TStack_3b0.BaseBitIndex = local_450;
  uStack_390 = CONCAT44(uStack_444,iStack_448);
  bVar15 = (byte)local_2b8.NumBits;
  EStack_464 = EVar11;
  local_3b8 = local_470;
  TStack_3b0.Array = local_460;
  if ((local_2b8.NumBits < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar22 != local_2b8.NumBits) {
    FVar25 = (ForElementType<unsigned_int>)&local_2b8;
    if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_2b8.AllocatorInstance.SecondaryData;
    }
    uVar22 = -1 << (bVar15 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
    while (uVar22 == 0) {
      lVar16 = (longlong)iVar24;
      uVar23 = uVar23 + 0x20;
      iVar24 = iVar24 + 1;
      uVar22 = local_2b8.NumBits;
      if ((int)((local_2b8.NumBits - 1U) + ((int)(local_2b8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          iVar24) goto LAB_14bb24820;
      uVar22 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar16 * 4);
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_3d8 = (int)lVar16;
    uVar22 = local_3d8 + -1 + uVar23;
    if (local_2b8.NumBits < (int)uVar22) {
      uVar22 = local_2b8.NumBits;
    }
  }
LAB_14bb24820:
  do {
    plVar9 = local_3b8;
    if ((int)local_3b8[1] - *(int *)((longlong)local_3b8 + 0x34) != (int)uStack_390) {
      local_485 = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_485);
    }
    pTVar27 = local_438;
    uVar28 = local_440;
    uVar23 = local_484;
    if (((TStack_3b0.CurrentBitIndex == uVar22) && (TStack_3b0.Array == &local_2b8)) &&
       (plVar9 == &local_2c8)) goto LAB_14bb248af;
    lVar16 = *plVar9;
    if (*(EDS_ContentsTabFrameType *)(lVar16 + (longlong)TStack_3b0.CurrentBitIndex * 0x10) == EVar6
       ) break;
    TStack_3b0.UnvisitedBitMask = TStack_3b0.UnvisitedBitMask & ~TStack_3b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b0);
  } while( true );
  *(undefined1 *)(lVar16 + 4 + (longlong)TStack_3b0.CurrentBitIndex * 0x10) = 1;
LAB_14bb248af:
  TStack_380.UnvisitedBitMask = TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
  goto LAB_14bb24501;
}

// OnUpdateMailTab @ 14bb24be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::OnUpdateMailTab(UDS_NotificationManager *this)

{
  bool bVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_MailDataSet *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_MailDataSet>::Get((ulong64)local_148);
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    pUVar4 = (UDS_MailDataSet *)FWeakObjectPtr::Get(local_148);
    bVar1 = UDS_MailDataSet::HasUnreadMail(pUVar4);
    pUVar4 = (UDS_MailDataSet *)FWeakObjectPtr::Get(local_148);
    bVar2 = UDS_MailDataSet::HasRewardMail(pUVar4);
    if (bVar1) {
      AddNotificationData(this,MailHasUnread);
    }
    else {
      RemoveNotificationData(this,MailHasUnread);
    }
    if (bVar2) {
      AddNotificationData(this,MailHasReward);
    }
    else {
      RemoveNotificationData(this,MailHasReward);
    }
    if ((bVar1) || (bVar2)) {
      UpdateTabFrameRedDotStateMap(this,Mail,true);
      if ((bVar1) || (bVar2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      UpdateTabFrameRedDotStateMap(this,Mail,false);
      bVar1 = false;
    }
    UpdateTabFrameRedDotStateMap(this,MailSystem,bVar1);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NotificationManager::OnUpdateMailTab",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x313,L"mailDataSet is invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnUpdateQuest @ 14bb24d90

void __thiscall UDS_NotificationManager::OnUpdateQuest(UDS_NotificationManager *this,int param_1)

{
  EDS_QuestStateType EVar1;
  EDS_QuestType EVar2;
  EDS_NotificationType EVar3;
  
  EVar1 = UDS_QuestManager::GetQuestStateType(param_1);
  if (EVar1 == Complete) {
    EVar2 = UDS_QuestManager::GetQuestType(param_1);
    if (EVar2 == Main) {
      EVar3 = QuestMainReward;
    }
    else if (EVar2 == Local) {
      EVar3 = QuestLocalReward;
    }
    else if (EVar2 == MissionWeekly) {
      EVar3 = QuestWeeklyReward;
    }
    else if (EVar2 == MissionMonthly) {
      EVar3 = QuestMonthlyReward;
    }
    else {
      if (EVar2 != Repeat) {
        return;
      }
      EVar3 = QuestRepeatReward;
    }
    AddNotificationData(this,EVar3);
    CheckCharacterService(this,QuestCompleteAble);
    RefreshNotificationArray(this);
  }
  return;
}

// OnUpdateQuestTab @ 14bb251a0

void __thiscall
UDS_NotificationManager::OnUpdateQuestTab(UDS_NotificationManager *this,EDS_QuestType param_1)

{
  undefined4 uVar1;
  UDS_QuestManager *pUVar2;
  EDS_QuestType *pEVar3;
  EDS_QuestType *pEVar4;
  undefined1 *puVar5;
  EDS_ContentsTabFrameType EVar6;
  bool bVar7;
  
  pUVar2 = UDS_QuestManager::GetInst();
  if (pUVar2 != (UDS_QuestManager *)0x0) {
    EVar6 = None;
    if (param_1 == Main) {
      EVar6 = QuestMain;
    }
    else if (param_1 == Local) {
      EVar6 = QuestLocal;
    }
    else if (param_1 == MissionWeekly) {
      EVar6 = QuestWeekly;
    }
    else if (param_1 == MissionMonthly) {
      EVar6 = QuestMonthly;
    }
    else if (param_1 == Repeat) {
      EVar6 = QuestRepeat;
    }
    if (*(int *)&(pUVar2->QuestNewAbleCompleteSymbolMap).field_0x8 !=
        *(int *)&(pUVar2->QuestNewAbleCompleteSymbolMap).field_0x34) {
      puVar5 = *(undefined1 **)&(pUVar2->QuestNewAbleCompleteSymbolMap).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pUVar2->QuestNewAbleCompleteSymbolMap).field_0x38;
      }
      uVar1 = *(undefined4 *)
               (puVar5 + ((ulonglong)
                          (*(int *)&(pUVar2->QuestNewAbleCompleteSymbolMap).field_0x48 - 1) &
                         (ulonglong)param_1) * 4);
      if (uVar1 != 0xffffffff) {
        do {
          pEVar4 = (EDS_QuestType *)
                   ((longlong)(int)uVar1 * 0x20 +
                   *(longlong *)&pUVar2->QuestNewAbleCompleteSymbolMap);
          if (*pEVar4 == param_1) {
            pEVar3 = pEVar4 + 8;
            if (pEVar4 == (EDS_QuestType *)0x0) {
              pEVar3 = (EDS_QuestType *)0x0;
            }
            if (pEVar3 != (EDS_QuestType *)0x0) {
              bVar7 = 0 < (int)*(undefined4 *)(pEVar3 + 8);
              goto LAB_14bb25279;
            }
            break;
          }
          uVar1 = *(undefined4 *)(pEVar4 + 0x18);
        } while (uVar1 != 0xffffffff);
      }
    }
    bVar7 = false;
LAB_14bb25279:
    UpdateTabFrameRedDotStateMap(this,EVar6,bVar7);
  }
  return;
}

// RefreshNotificationArray @ 14bb2c720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NotificationManager::RefreshNotificationArray(UDS_NotificationManager *this)

{
  TMap<EDS_NotificationType,FDS_NotificationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NotificationType,FDS_NotificationData,0>_>
  *this_00;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  EDS_NotificationType EVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  UDS_NotificationManager *pUVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  UDS_GameInstance *this_01;
  UClass *pUVar13;
  UDS_ManagerBase *pUVar14;
  FDS_NotificationBaseTableRow *pFVar15;
  UDS_GameOptionManager *this_02;
  UDS_GameOptionData *pUVar16;
  UDS_LogManager *pUVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  FDS_NotificationData *pFVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  TMulticastDelegate<void___cdecl(TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_03;
  int iVar25;
  undefined1 auStackY_338 [32];
  undefined1 local_308 [8];
  EDS_NotificationType local_300 [8];
  FIdentityFunctor local_2f8 [8];
  FDS_NotificationData *local_2f0;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> local_2e8;
  FWeakObjectPtr local_2d8;
  FWeakObjectPtr local_2d0;
  uint local_2c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  UDS_ManagerBase *local_2b0;
  UDS_GameOptionData *local_2a8;
  UDS_NotificationManager *local_2a0;
  FDestructionSentinel local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2a0 = this;
  this_01 = UDS_GameInstance::GetInst();
  if (this_01 != (UDS_GameInstance *)0x0) {
    pUVar13 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    pUVar14 = UDS_GameInstance::GetManager(this_01,(FName)pUVar13->_padding_);
    if (pUVar14 != (UDS_ManagerBase *)0x0) {
      pUVar13 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
      iVar25 = (int)pUVar13->_padding_;
      if ((iVar25 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
          &pUVar13->_padding_)) goto LAB_14bb2c79e;
    }
  }
  pUVar14 = (UDS_ManagerBase *)0x0;
LAB_14bb2c79e:
  iVar25 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDS_ManagerBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  local_2d8.ObjectIndex = 0;
  local_2d8.ObjectSerialNumber = 0;
  local_2b0 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UDS_ManagerBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  FWeakObjectPtr::operator=(&local_2d8,(FObjectPtr)&local_2b0);
  bVar9 = TWeakObjectPtr<UDS_GameOptionManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GameOptionManager,FWeakObjectPtr> *)&local_2d8,(void *)0x0)
  ;
  if (!bVar9) {
    this_00 = &this->NotificationDataMap;
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = 0;
    local_2e8.ArrayMax = 0;
    TMapBase<enum_EDS_NotificationType,FDS_NotificationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this_00,&local_2e8);
    AlgoImpl::
    IntroSortInternal<FDS_NotificationData,int,FIdentityFunctor,TDereferenceWrapper<FDS_NotificationData,_UDS_NotificationManager::RefreshNotificationArray_::__l2::<lambda_1>_>_>
              ((FDS_NotificationData *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum,
               local_2f8[0],(<lambda_1> *)local_2f8);
    pTVar1 = &this->NotificationDataArray;
    DestructItems<FDS_NotificationData,int>
              ((FDS_NotificationData *)(pTVar1->AllocatorInstance).Data,
               (this->NotificationDataArray).ArrayNum);
    piVar2 = &(this->NotificationDataArray).ArrayMax;
    (this->NotificationDataArray).ArrayNum = 0;
    if ((this->NotificationDataArray).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    uVar18 = (ulonglong)local_2e8.ArrayNum;
    local_2c8 = local_2e8.ArrayNum;
    local_2f0 = (FDS_NotificationData *)(local_2e8.AllocatorInstance.Data + uVar18 * 0x58);
    uVar21 = uVar18;
    pFVar22 = local_2f0;
    FVar23.Data = local_2e8.AllocatorInstance.Data;
LAB_14bb2c8c0:
    if ((int)uVar18 != (int)uVar21) {
      local_308[0] = 0;
      `TCheckedPointerIterator<FDS_NotificationData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_308);
    }
    pUVar8 = local_2a0;
    if ((FDS_NotificationData *)FVar23.Data != pFVar22) {
      if (0xe < iVar25) {
        EVar3 = ((FDS_NotificationData *)FVar23.Data)->NotificationType;
        if (*(int *)&(this->NotificationDataMap).field_0x8 !=
            *(int *)&(this->NotificationDataMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->NotificationDataMap).field_0x40;
          puVar20 = &(this->NotificationDataMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar20 = puVar4;
          }
          iVar12 = *(int *)(puVar20 +
                           ((ulonglong)(*(int *)&(this->NotificationDataMap).field_0x48 - 1) &
                           (ulonglong)EVar3) * 4);
          if (iVar12 != -1) {
            do {
              if (*(EDS_NotificationType *)((longlong)iVar12 * 0x68 + *(longlong *)this_00) == EVar3
                 ) {
                local_300[0] = EVar3;
                TSet<TTuple<enum_EDS_NotificationType,FDS_NotificationData>,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>,FDefaultSetAllocator>
                ::RemoveImpl<enum_EDS_NotificationType>(this_00,(uint)EVar3,local_300);
                uVar18 = local_2e8._8_8_ & 0xffffffff;
                FVar23.Data = FVar23.Data + 0x58;
                uVar21 = (ulonglong)local_2c8;
                goto LAB_14bb2c8c0;
              }
              iVar12 = *(int *)((longlong)iVar12 * 0x68 + 0x60 + *(longlong *)this_00);
            } while (iVar12 != -1);
          }
        }
      }
      pFVar15 = FDS_NotificationBaseTableRow::GetRef
                          ((ulonglong)((FDS_NotificationData *)FVar23.Data)->NotificationType,true);
      this_02 = (UDS_GameOptionManager *)FWeakObjectPtr::Get(&local_2d8);
      pUVar16 = UDS_GameOptionManager::GetGameOptionData(this_02,pFVar15->NotiOptionGroup);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar16 != (UDS_GameOptionData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      local_2d0.ObjectIndex = 0;
      local_2d0.ObjectSerialNumber = 0;
      local_2a8 = pUVar16;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar16 != (UDS_GameOptionData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      FWeakObjectPtr::operator=(&local_2d0,(FObjectPtr)&local_2a8);
      bVar9 = TWeakObjectPtr<UDS_GameOptionData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameOptionData,FWeakObjectPtr> *)&local_2d0,(void *)0x0
                        );
      if (bVar9) {
        pUVar17 = UDS_LogManager::GetInst();
        if (pUVar17 != (UDS_LogManager *)0x0) {
          pUVar17 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_NotificationManager::RefreshNotificationArray",0x31,Yes);
          UDS_LogManager::PrintLog
                    (pUVar17,1,Warning,local_278.Ptr,0x1c2,L"gameOptionData is nullptr.");
          FVar19.Data = (FScriptContainerElement *)local_278._padding_;
          goto LAB_14bb2cb38;
        }
      }
      else {
        pUVar16 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_2d0);
        UDS_GameOptionData::GetGameOptionValues(pUVar16,&local_2c0);
        if (local_2c0.ArrayNum < 1) {
          pUVar17 = UDS_LogManager::GetInst();
          FVar19.Data = local_2c0.AllocatorInstance.Data;
          if (pUVar17 != (UDS_LogManager *)0x0) {
            pUVar17 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_NotificationManager::RefreshNotificationArray",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar17,1,Warning,local_158.Ptr,0x1c9,L"gameOptionDataList is not valid.");
            FVar19.Data = local_2c0.AllocatorInstance.Data;
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
              FVar19.Data = local_2c0.AllocatorInstance.Data;
            }
          }
LAB_14bb2cb38:
          if (FVar19.Data == (FScriptContainerElement *)0x0) goto LAB_14bb2cb42;
        }
        else {
          FVar19.Data = local_2c0.AllocatorInstance.Data;
          if (*(int *)local_2c0.AllocatorInstance.Data != 2) {
            iVar12 = (this->NotificationDataArray).ArrayNum;
            if (iVar12 == *piVar2) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,&pTVar1->AllocatorInstance,piVar2);
            }
            (this->NotificationDataArray).ArrayNum = iVar12 + 1;
            FDS_NotificationData::FDS_NotificationData
                      ((FDS_NotificationData *)
                       ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x58),
                       (FDS_NotificationData *)FVar23.Data);
            iVar25 = iVar25 + 1;
            FVar19.Data = local_2c0.AllocatorInstance.Data;
            goto LAB_14bb2cb38;
          }
        }
        FMemory::Free(FVar19.Data);
      }
LAB_14bb2cb42:
      FVar23.Data = FVar23.Data + 0x58;
      uVar18 = local_2e8._8_8_ & 0xffffffff;
      uVar21 = (ulonglong)local_2c8;
      pFVar22 = local_2f0;
      goto LAB_14bb2c8c0;
    }
    this_03 = &local_2a0->BroadcastNotificationInfoDelegate;
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_03);
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_03,
                 (FWriteAccessScope *)&local_298);
      puVar4 = &(pUVar8->BroadcastNotificationInfoDelegate).field_0x1c;
      *(int *)puVar4 = *(int *)puVar4 + 1;
      bVar9 = false;
      iVar25 = *(int *)&(pUVar8->BroadcastNotificationInfoDelegate).field_0x10 + -1;
      if (-1 < iVar25) {
        lVar24 = (longlong)iVar25 << 4;
        bVar9 = false;
        do {
          if ((*(int *)&(pUVar8->BroadcastNotificationInfoDelegate).field_0x10 <= iVar25) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(pUVar8->BroadcastNotificationInfoDelegate).field_0x8;
          if (((*(int *)(lVar24 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar24 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
            bVar9 = true;
          }
          lVar24 = lVar24 + -0x10;
          iVar25 = iVar25 + -1;
        } while (-1 < iVar25);
      }
      puVar4 = &(pUVar8->BroadcastNotificationInfoDelegate).field_0x1c;
      *(int *)puVar4 = *(int *)puVar4 + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_03,false);
      }
      if (local_298.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
      }
    }
    DestructItems<FDS_NotificationData,int>
              ((FDS_NotificationData *)local_2e8.AllocatorInstance.Data,local_2e8.ArrayNum);
    if ((FDS_NotificationData *)local_2e8.AllocatorInstance.Data != (FDS_NotificationData *)0x0) {
      FMemory::Free(local_2e8.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveNotificationData @ 14bb318c0

void __thiscall
UDS_NotificationManager::RemoveNotificationData
          (UDS_NotificationManager *this,EDS_NotificationType param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  EDS_NotificationType local_res10 [24];
  
  if (*(int *)&(this->NotificationDataMap).field_0x8 !=
      *(int *)&(this->NotificationDataMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->NotificationDataMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->NotificationDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->NotificationDataMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->NotificationDataMap;
      while (*(EDS_NotificationType *)((longlong)iVar2 * 0x68 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      TSet<TTuple<enum_EDS_NotificationType,FDS_NotificationData>,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>,FDefaultSetAllocator>
      ::RemoveImpl<enum_EDS_NotificationType>(&this->NotificationDataMap,(uint)param_1,local_res10);
    }
  }
  return;
}

// ResetTabFrameRedDotStateMap @ 14bb33720

void __thiscall UDS_NotificationManager::ResetTabFrameRedDotStateMap(UDS_NotificationManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->TabFrameRedDotStateMap).field_0x10;
  iVar3 = *(int *)&(this->TabFrameRedDotStateMap).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->TabFrameRedDotStateMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb337cd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14bb337cd:
  uVar10 = *(uint *)&(this->TabFrameRedDotStateMap).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TabFrameRedDotStateMap).field_0x8 -
                       *(int *)&(this->TabFrameRedDotStateMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->TabFrameRedDotStateMap).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->TabFrameRedDotStateMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb338d0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14bb338d0:
  while( true ) {
    if (*(int *)&(this->TabFrameRedDotStateMap).field_0x8 -
        *(int *)&(this->TabFrameRedDotStateMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    *(undefined1 *)
     (*(longlong *)&this->TabFrameRedDotStateMap + 4 + (longlong)TStack_60.CurrentBitIndex * 0x10) =
         0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->IsCanBroadCast = true;
  return;
}

// UnBindNotificationInfoDelegate @ 14bb3b8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::UnBindNotificationInfoDelegate
          (UDS_NotificationManager *this,UObject *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UObject *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NotificationManager::UnBindNotificationInfoDelegate",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x90,L"InObject is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->BroadcastNotificationInfoDelegate,param_1);
  }
  return;
}

// UnBindTabFrameRedDotStateChangedDelegate @ 14bb3b9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate
          (UDS_NotificationManager *this,UObject *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 == (UObject *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NotificationManager::UnBindTabFrameRedDotStateChangedDelegate",0x41
                 ,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xa8,L"InObject is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->TabFrameRedDotStateChangedDelegate,param_1);
  }
  return;
}

// Update @ 14bb3f220

void __thiscall UDS_NotificationManager::Update(UDS_NotificationManager *this,float *param_1)

{
  bool bVar1;
  
  if (this->IsChangedItemSymbolDirty == true) {
    this->IsChangedItemSymbolDirty = false;
    OnUpdateItemSymbol(this);
    OnUpdateAscenderSkillTab(this);
  }
  if (this->IsChangedItemEquipDirty != true) goto LAB_14bb3f27d;
  this->IsChangedItemEquipDirty = false;
  bVar1 = FDS_PlayerService::OnCheckPlayerInfoByItem();
  if (bVar1) {
LAB_14bb3f26d:
    bVar1 = true;
  }
  else {
    bVar1 = FDS_CharacterService::OnCheckCharacterCanEquipItem();
    if (bVar1) goto LAB_14bb3f26d;
    bVar1 = false;
  }
  UpdateTabFrameRedDotStateMap(this,Character,bVar1);
LAB_14bb3f27d:
  if (this->IsCanBroadCast == true) {
    this->IsCanBroadCast = false;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->TabFrameRedDotStateChangedDelegate);
    return;
  }
  return;
}

// UpdateTabFrameRedDotStateMap @ 14bb3fe70

void __thiscall
UDS_NotificationManager::UpdateTabFrameRedDotStateMap
          (UDS_NotificationManager *this,EDS_ContentsTabFrameType param_1,bool param_2)

{
  TMap<EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ContentsTabFrameType,bool,0>_>
  *this_00;
  bool *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  TPairInitializer<EDS_ContentsTabFrameType_&,bool_&> local_res8;
  undefined1 local_res18 [8];
  bool **local_18;
  undefined1 *local_10;
  
  this_00 = &this->TabFrameRedDotStateMap;
  local_res8.Value._0_4_ = param_1;
  local_res18[0] = param_2;
  if (*(int *)&(this->TabFrameRedDotStateMap).field_0x8 !=
      *(int *)&(this->TabFrameRedDotStateMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->TabFrameRedDotStateMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TabFrameRedDotStateMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->TabFrameRedDotStateMap).field_0x48 + ~None & param_1)
                              * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_ContentsTabFrameType *)(*(longlong *)this_00 + (longlong)iVar2 * 0x10) == param_1)
        {
          if (iVar2 != -1) {
            pbVar1 = TMapBase<enum_EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>_>
                     ::FindChecked(this_00,param_1);
            *pbVar1 = param_2;
            this->IsCanBroadCast = true;
            return;
          }
          break;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<enum_EDS_ContentsTabFrameType,bool>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ContentsTabFrameType_&,bool_&>_>
            (this_00,&local_res8,(bool *)&local_18);
  this->IsCanBroadCast = true;
  return;
}

