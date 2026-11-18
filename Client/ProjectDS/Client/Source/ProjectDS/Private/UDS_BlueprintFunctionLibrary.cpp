// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b4281d0

UClass * __cdecl UDS_BlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDS_BlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_BlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDS_BlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton;
}

// UDS_BlueprintFunctionLibrary @ 14b42abe0

UDS_BlueprintFunctionLibrary * __thiscall
UDS_BlueprintFunctionLibrary::UDS_BlueprintFunctionLibrary
          (UDS_BlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_BlueprintFunctionLibrary__6B_;
  return this;
}

// UDS_BlueprintFunctionLibrary @ 14b42ac10

UDS_BlueprintFunctionLibrary * __thiscall
UDS_BlueprintFunctionLibrary::UDS_BlueprintFunctionLibrary
          (UDS_BlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_BlueprintFunctionLibrary__6B_;
  return this;
}

// ~UDS_BlueprintFunctionLibrary @ 14b42b6c0

void __thiscall
UDS_BlueprintFunctionLibrary::~UDS_BlueprintFunctionLibrary(UDS_BlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7UDS_BlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14b42da50

UClass * __cdecl UDS_BlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_BlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDS_BlueprintFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_BlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDS_BlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_BlueprintFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUDS_BlueprintFunctionLibrary @ 14b42e220

void __cdecl UDS_BlueprintFunctionLibrary::StaticRegisterNativesUDS_BlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_BlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAssetThumbnail @ 14b42ee90

void __cdecl
UDS_BlueprintFunctionLibrary::execGetAssetThumbnail(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UTexture2D *pUVar2;
  size_t _Size;
  FName local_48;
  FName FStack_40;
  void *local_38;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_38;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_30;
  local_28.SubPathString.Data.ArrayNum = (int)local_30;
  local_28.AssetPath.PackageName = local_48;
  local_28.AssetPath.AssetName = FStack_40;
  if ((int)local_30 == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_30,0,(ForAnyElementType *)&local_28.SubPathString,(int)local_30,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  pUVar2 = GetAssetThumbnail(&local_28);
  *(UTexture2D **)param_3 = pUVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetEnumToString @ 14b42efb0

void __cdecl
UDS_BlueprintFunctionLibrary::execGetEnumToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  long64 local_res10;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetEnumToString(&local_18,&local_28,local_res10);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumValueByString @ 14b42f0e0

void __cdecl
UDS_BlueprintFunctionLibrary::execGetEnumValueByString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 lVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = GetEnumValueByString(&local_18,&local_28);
  *(long64 *)param_3 = lVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEnumValues @ 14b42f1e0

void __cdecl
UDS_BlueprintFunctionLibrary::execGetEnumValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FString local_28;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetEnumValues(&local_18,&local_28);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetItemType @ 14b42f2c0

void __cdecl
UDS_BlueprintFunctionLibrary::execGetItemType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 lVar2;
  FDS_ItemBaseTableRow *pFVar3;
  FDS_ItemBaseTableRow local_f8;
  
  local_f8._padding_ = (longlong)&___7FDS_ItemBaseTableRow__6B_;
  local_f8.ID = 0;
  local_f8.DataStage = 0;
  local_f8.ID_Icon = 0;
  local_f8.ID_Name._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  local_f8.ID_Explain._padding_ = (longlong)&___7FDS_StringItemID__6B_;
  local_f8.ID_Name.ID = 0;
  local_f8.ID_Explain.ID = 0;
  local_f8.IsEquip = false;
  local_f8.MainType = None;
  local_f8.ItemType = None;
  local_f8.OrderValue = 0;
  local_f8.ID_GradeType = None;
  local_f8.SeasonGroup = 0;
  local_f8.ID_Character.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ID_Character.ArrayNum = 0;
  local_f8.ID_Character.ArrayMax = 0;
  local_f8.CharEquipType = None;
  local_f8.RequireLevel = 0;
  local_f8.ItemLevel = 0;
  local_f8.IsLock = false;
  local_f8.ID_ResourceParts = 0;
  local_f8.StackCount = 0;
  local_f8.MaxOwnedCount = 0;
  local_f8.IsTradeTemper = false;
  local_f8.IsSellAble = false;
  local_f8.SellPrice = 0;
  local_f8.Weight = 0;
  local_f8.Durability = 0;
  local_f8.ID_Repair = 0;
  local_f8.ID_Restore = 0;
  local_f8.ID_Dismantle = 0;
  local_f8.ID_Ability = 0;
  local_f8.ID_TemplateType = None;
  local_f8.ID_Template = 0;
  local_f8.ItemTypeValue = 0;
  local_f8.IsEnchantAble = false;
  local_f8.ID_ItemEnchant = 0;
  local_f8.IsPrefixAble = false;
  local_f8.ID_PrefixGroup = 0;
  local_f8.PrefixProbability = 0;
  local_f8.IsPassiveAble = false;
  local_f8.ID_ItemPassiveGroup = 0;
  local_f8.ItemPassiveProbability = 0;
  local_f8.IsSetEffectAble = false;
  local_f8.ID_SetEffectGroup = 0;
  local_f8.SetEffectProbability = 0;
  local_f8.ID_GemSocketList = 0;
  local_f8.IsDestructionAble = false;
  local_f8.IndividualCoolTime = 0.0;
  local_f8.ID_CoolDown = None;
  local_f8.IsRingCmdAble = false;
  local_f8.ID_ItemAction = 0;
  local_f8.ID_ItemCooking = 0;
  local_f8.IsMountInventory = false;
  local_f8.IsMountFoundAble = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pFVar3 = &local_f8;
  if ((FDS_ItemBaseTableRow *)param_2->MostRecentPropertyAddress != (FDS_ItemBaseTableRow *)0x0) {
    pFVar3 = (FDS_ItemBaseTableRow *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = GetItemType(pFVar3);
  *(long64 *)param_3 = lVar2;
  if (local_f8.ID_Character.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.ID_Character.AllocatorInstance.Data);
  }
  return;
}

// execIsGameRunning @ 14b42f430

void __cdecl
UDS_BlueprintFunctionLibrary::execIsGameRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsGameRunning();
  *(bool *)param_3 = bVar1;
  return;
}

// execLoadWorldPartition @ 14b42f460

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

void __cdecl
UDS_BlueprintFunctionLibrary::execLoadWorldPartition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TBox<double> *pTVar2;
  undefined1 auStack_78 [32];
  UWorld *local_58;
  TBox<double> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_50.IsValid = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar2 = &local_50;
  if ((TBox<double> *)param_2->MostRecentPropertyAddress != (TBox<double> *)0x0) {
    pTVar2 = (TBox<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  LoadWorldPartition(local_58,pTVar2);
  return;
}

// GetAssetThumbnail @ 14b8c42a0

UTexture2D * __cdecl UDS_BlueprintFunctionLibrary::GetAssetThumbnail(FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (UTexture2D *)0x0;
}

// GetEnumToString @ 14b8c4c90

FString * __cdecl
UDS_BlueprintFunctionLibrary::GetEnumToString
          (FString *__return_storage_ptr__,FString *param_1,long64 param_2)

{
  DS_Util::GetEnumToString(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetEnumValueByString @ 14b8c4cb0

long64 __cdecl UDS_BlueprintFunctionLibrary::GetEnumValueByString(FString *param_1,FString *param_2)

{
  size_t sVar1;
  UClass *pUVar2;
  UEnum *this;
  FName *pFVar3;
  long64 lVar4;
  wchar_t *pwVar5;
  FName FStackX_8;
  TStringView<wchar_t> TStack_28;
  FString FStack_18;
  
  pwVar5 = L"";
  ::FString::PrintfImpl(&FStack_18,L"/Script/ProjectDS.%s");
  lVar4 = 0;
  TStack_28.Size = 0;
  if (FStack_18.Data.ArrayNum == 0) {
    TStack_28.DataPtr = L"";
  }
  else {
    TStack_28.DataPtr = (wchar_t *)FStack_18.Data.AllocatorInstance.Data;
    if (FStack_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14c085e95;
  }
  sVar1 = wcslen(TStack_28.DataPtr);
  TStack_28.Size = (int)sVar1;
LAB_14c085e95:
  pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
  this = (UEnum *)StaticFindObject(pUVar2,(UObject *)0x0,&TStack_28,None);
  if (this != (UEnum *)0x0) {
    if ((param_2->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&FStackX_8,pwVar5);
    lVar4 = UEnum::GetValueByName(this,*pFVar3,None);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return lVar4;
}

// GetEnumValues @ 14b8c4cc0

TArray<__int64,TSizedDefaultAllocator<32>_> * __cdecl
UDS_BlueprintFunctionLibrary::GetEnumValues
          (TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  DS_Util::GetEnumValues(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetItemType @ 14b8c7770

long64 __cdecl UDS_BlueprintFunctionLibrary::GetItemType(FDS_ItemBaseTableRow *param_1)

{
  return (longlong)(int)param_1->ItemType;
}

// IsGameRunning @ 14b8d0130

bool __cdecl UDS_BlueprintFunctionLibrary::IsGameRunning(void)

{
  return true;
}

// LoadWorldPartition @ 14b8d0bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_BlueprintFunctionLibrary::LoadWorldPartition(UWorld *param_1,TBox<double> *param_2)

{
  return;
}

