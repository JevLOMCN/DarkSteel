// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147287960

UClass * __cdecl ULevelStreamingDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingDynamic",
               &Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton,
               StaticRegisterNativesULevelStreamingDynamic,0x200,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULevelStreamingDynamic>,
               InternalVTableHelperCtorCaller<ULevelStreamingDynamic>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton;
}

// ULevelStreamingDynamic @ 14728b9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingDynamic * __thiscall
ULevelStreamingDynamic::ULevelStreamingDynamic(ULevelStreamingDynamic *this,FVTableHelper *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingDynamic__6B_;
  return this;
}

// ~ULevelStreamingDynamic @ 14728d2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreamingDynamic::~ULevelStreamingDynamic(ULevelStreamingDynamic *this)

{
  *(undefined ***)this = &___7ULevelStreamingDynamic__6B_;
  ULevelStreaming::~ULevelStreaming((ULevelStreaming *)this);
  return;
}

// GetPrivateStaticClass @ 14728f8c0

UClass * __cdecl ULevelStreamingDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingDynamic",
               &Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton,
               StaticRegisterNativesULevelStreamingDynamic,0x200,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<ULevelStreamingDynamic>,
               InternalVTableHelperCtorCaller<ULevelStreamingDynamic>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingDynamic.InnerSingleton;
}

// ShouldBeLoaded @ 147291140

bool __thiscall ULevelStreamingDynamic::ShouldBeLoaded(ULevelStreamingDynamic *this)

{
  return (bool)((byte)this->field_0xf8 >> 4 & 1);
}

// StaticRegisterNativesULevelStreamingDynamic @ 147291290

void __cdecl ULevelStreamingDynamic::StaticRegisterNativesULevelStreamingDynamic(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULevelStreamingDynamic_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execLoadLevelInstance @ 147293660

void __cdecl
ULevelStreamingDynamic::execLoadLevelInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  ULevelStreamingDynamic *pUVar2;
  longlong lVar3;
  bool *pbVar4;
  bool bVar5;
  bool local_res10 [8];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString local_e0;
  FString local_d0;
  double local_c0;
  double local_b8;
  UObject *local_b0;
  TVector<double>_u_0 local_a8;
  TRotator<double> local_88;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = false;
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
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar5 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b0 = local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  _Src = local_f0;
  lVar3 = (longlong)(int)local_e8;
  local_c0 = local_58;
  local_b8 = local_40;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = (int)local_e8;
  local_a8._0_4_ = local_68;
  local_a8._4_4_ = uStack_64;
  local_a8._8_4_ = uStack_60;
  local_a8._12_4_ = uStack_5c;
  local_88.Pitch._0_4_ = local_50;
  local_88.Pitch._4_4_ = uStack_4c;
  local_88.Yaw._0_4_ = uStack_48;
  local_88.Yaw._4_4_ = uStack_44;
  if ((int)local_e8 == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,(ForAnyElementType *)&local_e0,(int)local_e8,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    local_68 = local_a8._0_4_;
    uStack_64 = local_a8._4_4_;
    uStack_60 = local_a8._8_4_;
    uStack_5c = local_a8._12_4_;
    local_50 = local_88.Pitch._0_4_;
    uStack_4c = local_88.Pitch._4_4_;
    uStack_48 = local_88.Yaw._0_4_;
    uStack_44 = local_88.Yaw._4_4_;
  }
  local_a8._0_4_ = local_50;
  local_a8._4_4_ = uStack_4c;
  local_a8._8_4_ = uStack_48;
  local_a8._12_4_ = uStack_44;
  local_a8._s_0.Z = local_b8;
  local_88.Pitch._0_4_ = local_68;
  local_88.Pitch._4_4_ = uStack_64;
  local_88.Yaw._0_4_ = uStack_60;
  local_88.Yaw._4_4_ = uStack_5c;
  local_88.Roll = local_c0;
  pUVar2 = LoadLevelInstance(local_f8,&local_e0,(TVector<double> *)&local_a8._s_0,&local_88,pbVar4,
                             &local_d0,(TSubclassOf<ULevelStreamingDynamic>)&local_b0,bVar5);
  *(ULevelStreamingDynamic **)param_3 = pUVar2;
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execLoadLevelInstanceBySoftObjectPtr @ 1472939c0

void __cdecl
ULevelStreamingDynamic::execLoadLevelInstanceBySoftObjectPtr
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULevelStreamingDynamic *pUVar2;
  bool *pbVar3;
  bool bVar4;
  bool local_res10 [8];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_128;
  FString local_120;
  TPersistentObjectPtr<FSoftObjectPath> local_110;
  double local_e8;
  double local_e0;
  UObject *local_d8 [2];
  TRotator<double> local_c8;
  TVector<double>_u_0 local_a8;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  TPersistentObjectPtr<FSoftObjectPath> local_58;
  
  local_128 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_110.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ObjectID.SubPathString.Data.ArrayNum = 0;
  local_110.ObjectID.SubPathString.Data.ArrayMax = 0;
  local_110.WeakPtr.ObjectIndex = 0;
  local_110.WeakPtr.ObjectSerialNumber = 0;
  local_110.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_110.ObjectID.AssetPath.AssetName.Number = 0;
  local_110.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_110.ObjectID.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_110.ObjectID.SubPathString,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10[0] = false;
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
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_d8[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_c8.Pitch = local_88;
  local_c8.Yaw = dStack_80;
  local_e8 = local_78;
  local_a8._s_0.X = local_70;
  local_a8._s_0.Y = dStack_68;
  local_e0 = local_60;
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>(&local_58,&local_110)
  ;
  local_c8.Roll = local_e8;
  local_a8._s_0.Z = local_e0;
  pUVar2 = LoadLevelInstanceBySoftObjectPtr
                     (local_128,(TSoftObjectPtr<UWorld> *)&local_58,
                      (TVector<double> *)&local_a8._s_0,&local_c8,pbVar3,&local_120,
                      (TSubclassOf<ULevelStreamingDynamic>)local_d8,bVar4);
  *(ULevelStreamingDynamic **)param_3 = pUVar2;
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_110.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_110.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// ULevelStreamingDynamic @ 147e56460

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingDynamic * __thiscall
ULevelStreamingDynamic::ULevelStreamingDynamic
          (ULevelStreamingDynamic *this,FObjectInitializer *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingDynamic__6B_;
  return this;
}

// GetLevelInstancePackageName @ 147e681d0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
ULevelStreamingDynamic::GetLevelInstancePackageName
          (FString *__return_storage_ptr__,FLoadLevelInstanceParams *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_4b8 [32];
  TStringView<wchar_t> local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_4b8;
  FPackageName::GetLongPackagePath(&local_478,&param_1->LongPackageName);
  local_498.DataPtr = (wchar_t *)(param_1->LongPackageName).Data.AllocatorInstance.Data;
  iVar8 = (param_1->LongPackageName).Data.ArrayNum;
  iVar10 = 0;
  local_498.Size = iVar8 + -1;
  if (iVar8 == 0) {
    local_498.Size = iVar10;
  }
  FPackageName::GetShortName(&local_488,&local_498);
  iVar8 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
  if (iVar8 == 0) {
    pwVar6 = L"";
    iVar8 = iVar10;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->World->StreamingLevelsPrefix).Data.AllocatorInstance.Data;
    iVar8 = iVar8 + -1;
  }
  bVar4 = ::FString::StartsWith(&local_488,pwVar6,iVar8,IgnoreCase);
  if (bVar4) {
    iVar8 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = iVar10;
    }
    ::FString::RemoveAt(&local_488,0,iVar9,No);
  }
  ::FString::ConcatFC((FString *)&local_498,&local_478,L"/");
  ::FString::ConcatFF(&local_468,(FString *)&local_498,&local_488);
  if ((FScriptContainerElement *)local_498.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.DataPtr);
  }
  local_458.Base = local_438;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  local_458.CurPos = local_438;
  local_458.End = (wchar_t *)local_38;
  if (param_1->bLoadAsTempPackage != false) {
    pvVar5 = FGenericPlatformString::Memcpy(local_438,L"/Temp",10);
    local_458.CurPos = (wchar_t *)((longlong)pvVar5 + 10);
  }
  FVar3.Data = local_478.Data.AllocatorInstance.Data;
  iVar10 = 0;
  iVar8 = local_478.Data.ArrayNum + -1;
  if (local_478.Data.ArrayNum == 0) {
    iVar8 = iVar10;
  }
  uVar7 = (ulong64)iVar8;
  if (local_458.End < local_458.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,FVar3.Data,uVar7 * 2);
    local_458.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
  }
  if (local_458.End < local_458.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,&u__,2);
  FVar3.Data = local_488.Data.AllocatorInstance.Data;
  local_458.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
  pFVar1 = param_1->OptionalLevelNameOverride;
  if (pFVar1 == (FString *)0x0) {
    iVar8 = local_488.Data.ArrayNum + -1;
    if (local_488.Data.ArrayNum == 0) {
      iVar8 = iVar10;
    }
    uVar7 = (ulong64)iVar8;
    if (local_458.End < local_458.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
    }
    if (iVar8 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,FVar3.Data,uVar7 * 2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
    }
    if (local_458.End < local_458.CurPos + 0xf) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,0xf);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,L"_LevelInstance_",0x1e);
    UniqueLevelInstanceId = UniqueLevelInstanceId + 1;
    local_498.DataPtr = (wchar_t *)0x0;
    local_458.CurPos = (wchar_t *)((longlong)pvVar5 + 0x1e);
    local_498.Size = 0;
    local_498._12_4_ = 0;
    ::FString::AppendInt((FString *)&local_498,UniqueLevelInstanceId);
    pwVar6 = local_498.DataPtr;
    iVar8 = local_498.Size + -1;
    if (local_498.Size == 0) {
      iVar8 = iVar10;
    }
    uVar7 = (ulong64)iVar8;
    if (local_458.End < local_458.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
    }
    if (iVar8 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,pwVar6,uVar7 * 2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
    }
    if ((FScriptContainerElement *)local_498.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.DataPtr);
    }
  }
  else {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    iVar8 = (pFVar1->Data).ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = iVar10;
    }
    uVar7 = (ulong64)iVar9;
    if (local_458.End < local_458.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_458,uVar7);
    }
    if (iVar9 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar2,uVar7 * 2);
      local_458.CurPos = (wchar_t *)((longlong)pvVar5 + uVar7 * 2);
    }
  }
  if (local_458.End < local_458.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  *local_458.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_458.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LoadLevelInstance @ 147e6edc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
ULevelStreamingDynamic::LoadLevelInstance(FLoadLevelInstanceParams *param_1,bool *param_2)

{
  byte bVar1;
  FString *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  _func___cdecl_UObject_ptr_FVTableHelper_ptr *p_Var16;
  bool bVar17;
  int iVar18;
  FNameEntryId FVar19;
  FColor FVar20;
  UClass *pUVar21;
  FName FVar22;
  FName *pFVar23;
  UClass *pUVar24;
  FName this;
  undefined8 uVar25;
  TStringBuilderBase<wchar_t> *this_00;
  undefined7 extraout_var;
  size_t sVar26;
  undefined4 extraout_var_00;
  UWorld *pUVar28;
  FName *pFVar29;
  int iVar30;
  uint uVar31;
  longlong *plVar32;
  longlong *plVar33;
  wchar_t *pwVar34;
  ForAnyElementType FVar35;
  FName *pFVar36;
  FName FVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar45;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStackY_608 [32];
  FSoftObjectPath FStack_5c8;
  FName FStack_5a8;
  FString FStack_5a0;
  FName FStack_590;
  FSoftObjectPath FStack_588;
  FString FStack_568;
  FString FStack_558;
  FString FStack_548;
  undefined8 uStack_538;
  FSoftObjectPath FStack_530;
  undefined1 auStack_508 [128];
  TStringBuilderBase<wchar_t> TStack_488;
  UClass UStack_468;
  ulonglong auStack_68 [6];
  byte *pbVar27;
  
  *param_2 = false;
  if ((param_1->World == (UWorld *)0x0) || ((param_1->LongPackageName).Data.ArrayNum < 2)) {
    return (ULevelStreamingDynamic *)0x0;
  }
  auStack_68[0] = __security_cookie.value ^ (ulonglong)auStackY_608;
  FPackageName::GetLongPackagePath(&FStack_548,&param_1->LongPackageName);
  FStack_5c8.AssetPath.PackageName = (FName)(param_1->LongPackageName).Data.AllocatorInstance.Data;
  this.ComparisonIndex.Value = 0;
  this.Number = 0;
  iVar18 = (param_1->LongPackageName).Data.ArrayNum;
  uVar38 = 0;
  FStack_5c8.AssetPath.AssetName.ComparisonIndex.Value = iVar18 - 1;
  if (iVar18 == 0) {
    FStack_5c8.AssetPath.AssetName.ComparisonIndex.Value = uVar38;
  }
  FPackageName::GetShortName(&FStack_5a0,(TStringView<wchar_t> *)&FStack_5c8);
  pUVar24 = (param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr;
  if ((pUVar24 != (UClass *)0x0) &&
     (pUVar21 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister(), pUVar21 != (UClass *)0x0)) {
    iVar18 = (int)pUVar21->_padding_;
    if (((int)pUVar24->_padding_ < iVar18) ||
       ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar18 * 8) !=
        &pUVar21->_padding_)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((bVar17) &&
       (pUVar24 = (param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr,
       pUVar24 != (UClass *)0x0)) {
      pUVar21 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
      FVar22 = this;
      if (pUVar21 != (UClass *)0x0) {
        iVar18 = (int)pUVar21->_padding_;
        if (((int)pUVar24->_padding_ < iVar18) ||
           ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar18 * 8) !=
            &pUVar21->_padding_)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          FVar22 = (FName)(param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr;
        }
      }
      goto LAB_147e6f69e;
    }
  }
  FVar22 = (FName)Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
LAB_147e6f69e:
  iVar18 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
  if (iVar18 == 0) {
    pwVar34 = L"";
    uVar31 = uVar38;
  }
  else {
    pwVar34 = (wchar_t *)(param_1->World->StreamingLevelsPrefix).Data.AllocatorInstance.Data;
    uVar31 = iVar18 - 1;
  }
  bVar17 = ::FString::StartsWith(&FStack_5a0,pwVar34,uVar31,IgnoreCase);
  if (bVar17) {
    iVar18 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
    uVar31 = iVar18 - 1;
    if (iVar18 == 0) {
      uVar31 = uVar38;
    }
    ::FString::RemoveAt(&FStack_5a0,0,uVar31,No);
  }
  ::FString::ConcatFC((FString *)&FStack_5c8,&FStack_548,L"/");
  ::FString::ConcatFF(&FStack_558,(FString *)&FStack_5c8,&FStack_5a0);
  if (FStack_5c8.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)FStack_5c8.AssetPath.PackageName);
  }
  GetLevelInstancePackageName(&FStack_568,param_1);
  pFVar2 = param_1->OptionalLevelNameOverride;
  FVar35.Data = (FScriptContainerElement *)L"";
  if (FStack_568.Data.ArrayNum != 0) {
    FVar35.Data = FStack_568.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStack_590,(wchar_t *)FVar35.Data);
  if (pFVar2 != (FString *)0x0) {
    pFVar36 = (FName *)(param_1->World->StreamingLevels).AllocatorInstance.Data;
    pFVar29 = pFVar36 + (param_1->World->StreamingLevels).ArrayNum;
    FStack_5a8 = FStack_590;
    for (; pFVar36 != pFVar29; pFVar36 = pFVar36 + 1) {
      FVar37 = *pFVar36;
      if ((FVar37 != (FName)0x0) &&
         (pFVar23 = (FName *)(**(code **)(*(longlong *)FVar37 + 0x2e0))(FVar37,&FStack_5c8),
         *pFVar23 == FStack_5a8)) {
        if (pFVar36 != (FName *)0x0) {
          if (param_1->bAllowReuseExitingLevelStreaming != false) {
            pUVar28 = param_1->World;
            bVar17 = UWorld::IsGameWorld(pUVar28);
            iVar18 = (int)pUVar28;
            if (bVar17) {
              FVar37 = *pFVar36;
              lVar40 = CONCAT71(extraout_var,bVar17);
              if (FVar37 == (FName)0x0) {
LAB_147e6f955:
                iVar30 = iVar18;
                FVar37 = this;
              }
              else {
                pUVar24 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
                iVar30 = (int)pUVar24->_padding_;
                lVar40 = (longlong)iVar30;
                if ((*(int *)(*(longlong *)((longlong)FVar37 + 0x10) + 0x38) < iVar30) ||
                   (lVar40 = *(longlong *)(*(longlong *)((longlong)FVar37 + 0x10) + 0x30),
                   iVar18 = iVar30,
                   (longlong *)*(undefined1 **)(lVar40 + (longlong)iVar30 * 8) !=
                   &pUVar24->_padding_)) goto LAB_147e6f955;
              }
              if ((FVar37 != (FName)0x0) && (*(FName *)((longlong)FVar37 + 0x10) == FVar22)) {
                dVar9 = (double)*(_func___cdecl_void_FObjectInitializer_ptr **)
                                 ((longlong)FVar37 + 0xb0) -
                        (param_1->LevelTransform).Translation.XY.m128d_f64[0];
                dVar10 = (double)*(_func___cdecl_UObject_ptr_FVTableHelper_ptr **)
                                  ((longlong)FVar37 + 0xb8) -
                         (param_1->LevelTransform).Translation.XY.m128d_f64[1];
                dVar41 = (double)((FUObjectCppClassStaticFunctions *)((longlong)FVar37 + 0xc0))->
                                 AddReferencedObjects -
                         (param_1->LevelTransform).Translation.ZW.m128d_f64[0];
                dVar45 = *(double *)((longlong)FVar37 + 200) -
                         (param_1->LevelTransform).Translation.ZW.m128d_f64[1];
                FStack_5c8.AssetPath.PackageName = __real_3f1a36e2e0000000;
                lVar39 = -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar10 >> 0x20),
                                           _UNK_15061cc88 & SUB84(dVar10,0)));
                auVar7._8_4_ = (int)lVar39;
                auVar7._0_8_ = -(ulonglong)
                                ((double)__real_3f1a36e2e0000000 <
                                (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                                 (uint)((ulonglong)dVar9 >> 0x20),
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                                 SUB84(dVar9,0)));
                auVar7._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
                iVar18 = movmskpd((int)lVar40,auVar7);
                lVar40 = -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar45 >> 0x20),
                                           _UNK_15061cc88 & SUB84(dVar45,0)));
                auVar11._8_4_ = (int)lVar40;
                auVar11._0_8_ =
                     -(ulonglong)
                      ((double)__real_3f1a36e2e0000000 <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       (uint)((ulonglong)dVar41 >> 0x20),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       SUB84(dVar41,0)));
                auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                uVar38 = movmskpd(iVar30,auVar11);
                if ((uVar38 & 0x3fffffff) == 0 && iVar18 == 0) {
                  dVar9 = *(double *)((longlong)FVar37 + 0x90) -
                          (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
                  dVar10 = *(double *)((longlong)FVar37 + 0x98) -
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
                  dVar42 = *(double *)((longlong)FVar37 + 0xa0) -
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
                  dVar46 = *(double *)((longlong)FVar37 + 0xa8) -
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
                  dVar41 = *(double *)((longlong)FVar37 + 0x90) +
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
                  dVar45 = *(double *)((longlong)FVar37 + 0x98) +
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
                  dVar14 = *(double *)((longlong)FVar37 + 0xa0) +
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
                  dVar15 = *(double *)((longlong)FVar37 + 0xa8) +
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
                  auVar43._0_8_ =
                       (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar42,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                  auVar43._8_4_ = SUB84(dVar46,0) & _UNK_15061cc88;
                  auVar43._12_4_ = (uint)((ulonglong)dVar46 >> 0x20) & _UNK_15061cc8c;
                  lVar40 = -(ulonglong)
                            ((double)__real_3f1a36e2e0000000 <
                            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar10,0) & _UNK_15061cc88));
                  auVar8._8_4_ = (int)lVar40;
                  auVar8._0_8_ = -(ulonglong)
                                  ((double)__real_3f1a36e2e0000000 <
                                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar9,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                  auVar8._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  uVar38 = movmskpd(iVar18,auVar8);
                  lVar40 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar43._8_8_);
                  auVar4._8_4_ = (int)lVar40;
                  auVar4._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar43._0_8_);
                  auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  iVar18 = movmskpd(0,auVar4);
                  uVar31 = iVar18 << 2 | uVar38;
                  if (uVar31 != 0) {
                    lVar40 = -(ulonglong)
                              ((double)__real_3f1a36e2e0000000 <
                              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                               SUB84(dVar15,0) & _UNK_15061cc88));
                    auVar12._8_4_ = (int)lVar40;
                    auVar12._0_8_ =
                         -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar14,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                    auVar12._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                    uVar31 = movmskpd(uVar31,auVar12);
                    lVar40 = -(ulonglong)
                              ((double)__real_3f1a36e2e0000000 <
                              (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & _UNK_15061cc8c,
                                               SUB84(dVar45,0) & _UNK_15061cc88));
                    auVar5._8_4_ = (int)lVar40;
                    auVar5._0_8_ = -(ulonglong)
                                    ((double)__real_3f1a36e2e0000000 <
                                    (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                     SUB84(dVar41,0) &
                                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                    auVar5._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                    uVar38 = movmskpd(uVar38,auVar5);
                    if ((uVar31 & 0x3fffffff) != 0 || uVar38 != 0) goto LAB_147e6fb20;
                  }
                  dVar41 = (double)((TObjectPtr<UClass> *)((longlong)FVar37 + 0xe0))->field0_0x0 -
                           (param_1->LevelTransform).Scale3D.ZW.m128d_f64[0];
                  dVar45 = (double)*(FName *)((longlong)FVar37 + 0xe8) -
                           (param_1->LevelTransform).Scale3D.ZW.m128d_f64[1];
                  dVar9 = *(double *)((longlong)FVar37 + 0xd0) -
                          (param_1->LevelTransform).Scale3D.XY.m128d_f64[0];
                  dVar10 = *(double *)((longlong)FVar37 + 0xd8) -
                           (param_1->LevelTransform).Scale3D.XY.m128d_f64[1];
                  auVar44._0_8_ =
                       (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar41,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                  auVar44._8_4_ = SUB84(dVar45,0) & _UNK_15061cc88;
                  auVar44._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & _UNK_15061cc8c;
                  lVar40 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar44._8_8_);
                  auVar13._8_4_ = (int)lVar40;
                  auVar13._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar44._0_8_);
                  auVar13._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  uVar31 = movmskpd(0,auVar13);
                  lVar40 = -(ulonglong)
                            ((double)__real_3f1a36e2e0000000 <
                            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar10,0) & _UNK_15061cc88));
                  auVar6._8_4_ = (int)lVar40;
                  auVar6._0_8_ = -(ulonglong)
                                  ((double)__real_3f1a36e2e0000000 <
                                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar9,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                  auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  iVar18 = movmskpd(uVar38,auVar6);
                  if ((uVar31 & 0x3fffffff) == 0 && iVar18 == 0) {
                    *param_2 = true;
                    (**(code **)(*(longlong *)FVar37 + 0x2d0))(FVar37,1);
                    ULevelStreaming::SetShouldBeVisible
                              ((ULevelStreaming *)FVar37,param_1->bInitiallyVisible);
                    if ((*(byte *)((longlong)FVar37 + 0xf8) & 1) != 0) {
                      *(byte *)((longlong)FVar37 + 0xf8) = *(byte *)((longlong)FVar37 + 0xf8) & 0xfe
                      ;
                    }
                    this = FVar37;
                    if (5 < (byte)LogLevelStreaming._0_1_) {
                      ::FName::ToString(&FStack_5a8,(FString *)&FStack_5c8);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
                      if (FStack_5c8.AssetPath.PackageName != (FName)0x0) {
                        FMemory::Free((void *)FStack_5c8.AssetPath.PackageName);
                      }
                    }
                    goto LAB_147e6fe26;
                  }
                }
              }
            }
          }
LAB_147e6fb20:
          if (1 < (byte)LogLevelStreaming._0_1_) {
            ::FName::ToString(&FStack_5a8,(FString *)&FStack_5c8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
            if (FStack_5c8.AssetPath.PackageName != (FName)0x0) {
              FMemory::Free((void *)FStack_5c8.AssetPath.PackageName);
            }
          }
          goto LAB_147e6fe26;
        }
        break;
      }
    }
  }
  pUVar28 = param_1->World;
  FStack_5a8.ComparisonIndex.Value = 0;
  FStack_5a8.Number = 0;
  FStack_5c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_5c8.AssetPath.PackageName.Number = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar28,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar24 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
  CheckIsClassChildOf_Internal(pUVar24,(UClass *)FVar22);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_508,(UClass *)FVar22);
  auStack_508._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_508._56_8_ = (UPackage *)0x0;
  auStack_508._16_4_ = 0;
  auStack_508._20_4_ = 0;
  auStack_508._24_4_ = RF_Transient;
  auStack_508._40_8_ = (UObject *)0x0;
  auStack_508[0x20] = false;
  auStack_508._8_8_ = pUVar28;
  this = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_508);
  if (auStack_508._64_8_ != 0) {
    plVar32 = (longlong *)(auStack_508 + 0x50);
    if ((longlong *)auStack_508._104_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)auStack_508._104_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if (*(void **)&param_1->LevelStreamingCreatedCallback != (void *)0x0) {
    FStack_5c8.AssetPath.PackageName = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->LevelStreamingCreatedCallback);
    pcVar3 = *(code **)&param_1->LevelStreamingCreatedCallback;
    plVar32 = *(longlong **)&(param_1->LevelStreamingCreatedCallback).field_0x28;
    plVar33 = (longlong *)&(param_1->LevelStreamingCreatedCallback).field_0x10;
    if (plVar32 != (longlong *)0x0) {
      plVar33 = plVar32;
    }
    uVar25 = (**(code **)(*plVar33 + 8))();
    (*pcVar3)(uVar25,&FStack_5c8);
  }
  TStack_488.Base = (wchar_t *)&UStack_468;
  TStack_488.bIsDynamic = false;
  TStack_488.bIsExternal = false;
  TStack_488.CurPos = (wchar_t *)&UStack_468;
  TStack_488.End = (wchar_t *)auStack_68;
  ::FName::AppendString(&FStack_590,&TStack_488);
  this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&TStack_488,L".",1);
  if (FStack_5a0.Data.ArrayNum != 0) {
    uVar38 = FStack_5a0.Data.ArrayNum - 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this_00,(wchar_t *)FStack_5a0.Data.AllocatorInstance.Data,uVar38);
  if (TStack_488.End < (wchar_t *)((longlong)(longlong *)TStack_488.CurPos + 2U)) {
    TStringBuilderBase<wchar_t>::Extend(&TStack_488,1);
  }
  *(undefined2 *)(longlong *)TStack_488.CurPos = 0;
  FVar19.Value = 0;
  FStack_588.AssetPath.PackageName.ComparisonIndex.Value = 0;
  FStack_588.AssetPath.PackageName.Number = 0;
  FStack_588.AssetPath.AssetName.ComparisonIndex.Value = 0;
  FStack_588.AssetPath.AssetName.Number = 0;
  FStack_588.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_588.SubPathString.Data.ArrayNum = 0;
  FStack_588.SubPathString.Data.ArrayMax = 0;
  FStack_5c8.AssetPath.PackageName = (FName)TStack_488.Base;
  if ((FName)TStack_488.Base != (FName)0x0) {
    sVar26 = wcslen(TStack_488.Base);
    FVar19.Value = (uint)sVar26;
  }
  FStack_5c8.AssetPath.AssetName.ComparisonIndex.Value = FVar19.Value;
  FSoftObjectPath::SetPath(&FStack_588,(TStringView<wchar_t> *)&FStack_5c8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_488);
  FVar35.Data = FStack_588.SubPathString.Data.AllocatorInstance.Data;
  sVar26 = (size_t)FStack_588.SubPathString.Data.ArrayNum;
  FStack_5c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_5c8.SubPathString.Data.ArrayNum = FStack_588.SubPathString.Data.ArrayNum;
  pcVar3 = *(code **)(*(longlong *)this + 0x2d8);
  FStack_5c8.AssetPath.PackageName = FStack_588.AssetPath.PackageName;
  FStack_5c8.AssetPath.AssetName = FStack_588.AssetPath.AssetName;
  if (FStack_588.SubPathString.Data.ArrayNum == 0) {
    FStack_5c8.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,FStack_588.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&FStack_5c8.SubPathString,FStack_588.SubPathString.Data.ArrayNum
               ,(int *)((longlong)&FStack_5c8.SubPathString.Data + 0xc));
    memcpy(FStack_5c8.SubPathString.Data.AllocatorInstance.Data,FVar35.Data,sVar26);
  }
  uStack_538 = 0;
  FSoftObjectPath::FSoftObjectPath(&FStack_530,&FStack_5c8);
  if (FStack_5c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5c8.SubPathString.Data.AllocatorInstance.Data);
  }
  (*pcVar3)(this,&uStack_538);
  if (FStack_530.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_530.SubPathString.Data.AllocatorInstance.Data);
  }
  FVar20 = FColor::MakeRandomColor();
  pbVar27 = (byte *)CONCAT44(extraout_var_00,FVar20.field0_0x0);
  FStack_5c8.AssetPath.PackageName.Number = (uint)FLinearColor::sRGBToLinearTable[pbVar27[1]];
  FStack_5c8.AssetPath.AssetName.ComparisonIndex.Value =
       (uint)FLinearColor::sRGBToLinearTable[*pbVar27];
  lVar40 = *(longlong *)this;
  FStack_5c8.AssetPath.AssetName.Number = (uint)((float)pbVar27[3] * __real_3b808081);
  FStack_5c8.AssetPath.PackageName.ComparisonIndex.Value =
       (uint)FLinearColor::sRGBToLinearTable[pbVar27[2]];
  (((FLinearColor *)((longlong)this + 0x124))->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar27[2]];
  *(uint *)((longlong)this + 0x128) = FStack_5c8.AssetPath.PackageName.Number;
  *(uint *)((longlong)this + 300) = FStack_5c8.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)((longlong)this + 0x130) = FStack_5c8.AssetPath.AssetName.Number;
  (**(code **)(lVar40 + 0x2d0))(this,0x154b77f01);
  bVar1 = *(byte *)((longlong)this + 0xf8);
  if (param_1->bInitiallyVisible != (bool)(bVar1 >> 3 & 1)) {
    *(byte *)((longlong)this + 0xf8) = (param_1->bInitiallyVisible << 3 ^ bVar1) & 8 ^ bVar1;
    bVar17 = UObjectBaseUtility::IsTemplate
                       ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((!bVar17) &&
       (pUVar28 = CastChecked<UWorld,UObject>(*(UObject **)((longlong)this + 0x20)),
       pUVar28 != (UWorld *)0x0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar28,(ULevelStreaming *)this);
    }
  }
  *(uint *)&((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ =
       (uint)((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ | 1;
  *(undefined1 *)((longlong)this + 0x122) = INSERT(*(undefined1 *)((longlong)this + 0x122),'\0',2,1)
  ;
  uVar38 = (uint)((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_;
  *(uint *)&((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ =
       ((uint)param_1->bInitiallyVisible * 2 ^ uVar38) & 2 ^ uVar38;
  dVar9 = (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
  (((TTransform<double> *)((longlong)this + 0x90))->Rotation).XY.m128d_f64[0] =
       (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
  *(double *)((longlong)this + 0x98) = dVar9;
  dVar9 = (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
  ((__m128d *)((longlong)this + 0xa0))->m128d_f64[0] =
       (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)this + 0xa8) = dVar9;
  p_Var16 = (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)
            (param_1->LevelTransform).Translation.XY.m128d_f64[1];
  (((VectorRegister4Double *)((longlong)this + 0xb0))->XY).m128d_f64[0] =
       (param_1->LevelTransform).Translation.XY.m128d_f64[0];
  *(_func___cdecl_UObject_ptr_FVTableHelper_ptr **)((longlong)this + 0xb8) = p_Var16;
  dVar9 = (param_1->LevelTransform).Translation.ZW.m128d_f64[1];
  ((__m128d *)((longlong)this + 0xc0))->m128d_f64[0] =
       (param_1->LevelTransform).Translation.ZW.m128d_f64[0];
  *(double *)((longlong)this + 200) = dVar9;
  dVar9 = (param_1->LevelTransform).Scale3D.XY.m128d_f64[1];
  (((VectorRegister4Double *)((longlong)this + 0xd0))->XY).m128d_f64[0] =
       (param_1->LevelTransform).Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)this + 0xd8) = dVar9;
  FVar22 = *(FName *)((param_1->LevelTransform).Scale3D.ZW.m128d_f64 + 1);
  ((__m128d *)((longlong)this + 0xe0))->m128d_f64[0] =
       (param_1->LevelTransform).Scale3D.ZW.m128d_f64[0];
  *(FName *)((longlong)this + 0xe8) = FVar22;
  FVar35.Data = (FScriptContainerElement *)L"";
  if (FStack_558.Data.ArrayNum != 0) {
    FVar35.Data = FStack_558.Data.AllocatorInstance.Data;
  }
  pFVar29 = ::FName::FName((FName *)&FStack_5c8,(wchar_t *)FVar35.Data);
  *(FName *)((longlong)this + 0x5c) = *pFVar29;
  UWorld::AddStreamingLevel(param_1->World,(ULevelStreaming *)this);
  *param_2 = true;
  if (FStack_588.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_588.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_147e6fe26:
  if (FStack_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_568.Data.AllocatorInstance.Data);
  }
  if (FStack_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_558.Data.AllocatorInstance.Data);
  }
  if (FStack_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5a0.Data.AllocatorInstance.Data);
  }
  if (FStack_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_548.Data.AllocatorInstance.Data);
  }
  return (ULevelStreamingDynamic *)this;
}

// LoadLevelInstance @ 147e6ede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
ULevelStreamingDynamic::LoadLevelInstance
          (UObject *param_1,FString *param_2,TVector<double> *param_3,TRotator<double> *param_4,
          bool *param_5,FString *param_6,TSubclassOf<ULevelStreamingDynamic> param_7,bool param_8)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UWorld *pUVar8;
  FName *pFVar9;
  FModuleManager *this;
  IModuleInterface *pIVar10;
  longlong *plVar11;
  TQuat<double> *pTVar12;
  ULevelStreamingDynamic *pUVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_1e8 [32];
  FString local_1b8;
  TQuat<double> local_1a8;
  FName local_188;
  FString local_180;
  FString local_170;
  TRotator<double> *local_160;
  TVector<double> *local_158;
  FString local_150;
  undefined1 local_138 [200];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  *param_5 = false;
  local_160 = param_4;
  local_158 = param_3;
  pUVar8 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (pUVar8 == (UWorld *)0x0) goto LAB_147e6efc8;
  pUVar13 = (ULevelStreamingDynamic *)0x0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  bVar7 = FPackageName::IsShortPackageName(param_2);
  if (bVar7) {
LAB_147e6eeb7:
    local_1a8.X = 0.0;
    local_1a8.Y = 0.0;
    local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.Data.ArrayNum = 0;
    local_170.Data.ArrayMax = 0;
    local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Data.ArrayNum = 0;
    local_180.Data.ArrayMax = 0;
    FPackageName::SplitFullObjectPath
              (param_2,(FString *)&local_1a8,&local_1b8,&local_170,&local_180,true);
    if ((FName)local_180.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_1a8.X != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a8.X);
    }
LAB_147e6ef27:
    pFVar9 = ::FName::FName((FName *)&local_180,L"AssetRegistry");
    FVar1 = *pFVar9;
    this = FModuleManager::Get();
    pIVar10 = FModuleManager::LoadModuleChecked(this,FVar1);
    plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
    iVar15 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar15 = 0;
    }
    local_1a8.Y = (double)CONCAT44(local_1a8.Y._4_4_,iVar15);
    local_1a8.X = (double)local_1b8.Data.AllocatorInstance.Data;
    (**(code **)(*plVar11 + 0xc0))(plVar11,&local_188,&local_1a8);
    *param_5 = local_188 != (FName)0x0;
    if (local_188 != (FName)0x0) {
      ::FName::ToString(&local_188,&local_150);
      pTVar12 = UE::Math::TRotator<double>::Quaternion(local_160,&local_1a8);
      dVar3 = pTVar12->X;
      dVar4 = pTVar12->Y;
      dVar5 = pTVar12->Z;
      dVar6 = pTVar12->W;
      local_138._0_8_ = pUVar8;
      FPackageName::ObjectPathToPackageName((FString *)(local_138 + 8),&local_150);
      local_138._128_8_ = param_6;
      if ((param_6->Data).ArrayNum < 2) {
        local_138._128_8_ = pUVar13;
      }
      local_138._64_8_ = (local_158->field0_0x0)._s_0.X;
      local_138._72_8_ = (local_158->field0_0x0)._s_0.Y;
      local_138._136_8_ = (UClass *)0x0;
      local_138._80_8_ = (local_158->field0_0x0)._s_0.Z;
      local_138._88_8_ = 0.0;
      local_138._112_8_ = ___xmm_00000000000000003ff0000000000000;
      local_138._120_8_ = _UNK_150689518;
      local_138._96_8_ = ___xmm_3ff00000000000003ff0000000000000;
      local_138._104_8_ = _UNK_150689688;
      local_138[0x90] = false;
      local_138[0x91] = true;
      local_138[0x92] = false;
      local_138._152_8_ = (UObject *)0x0;
      local_138._160_8_ = 0;
      local_70 = (longlong *)0x0;
      local_138._32_8_ = dVar3;
      local_138._40_8_ = dVar4;
      local_138._48_8_ = dVar5;
      local_138._56_8_ = dVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_7.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_7.Class.field0_0x0);
      }
      local_138._136_8_ = *(undefined8 *)param_7.Class.field0_0x0;
      local_138[0x90] = param_8;
      *param_5 = false;
      if (((UWorld *)local_138._0_8_ != (UWorld *)0x0) && (1 < (int)local_138._16_4_)) {
        pUVar13 = LoadLevelInstance_Internal((FLoadLevelInstanceParams *)local_138,param_5);
      }
      if (local_138._160_8_ != 0) {
        plVar11 = (longlong *)(local_138 + 0xb0);
        if (local_70 != (longlong *)0x0) {
          plVar11 = local_70;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if ((FScriptContainerElement *)local_138._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_138._8_8_);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return pUVar13;
      }
      FMemory::Free(pFVar2);
      return pUVar13;
    }
  }
  else {
    local_1a8.X = (double)(param_2->Data).AllocatorInstance.Data;
    iVar15 = (param_2->Data).ArrayNum;
    iVar14 = iVar15 + -1;
    if (iVar15 == 0) {
      iVar14 = 0;
    }
    local_1a8.Y = (double)CONCAT44(local_1a8.Y._4_4_,iVar14);
    bVar7 = FPackageName::IsValidObjectPath((TStringView<wchar_t> *)&local_1a8,(FText *)0x0);
    if (bVar7) goto LAB_147e6eeb7;
    bVar7 = FPackageName::TryConvertFilenameToLongPackageName
                      (param_2,&local_1b8,(FString *)0x0,None);
    if (bVar7) goto LAB_147e6ef27;
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
LAB_147e6efc8:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (ULevelStreamingDynamic *)0x0;
}

// LoadLevelInstanceBySoftObjectPtr @ 147e6f150

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

ULevelStreamingDynamic * __cdecl
ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr
          (UObject *param_1,TSoftObjectPtr<UWorld> *param_2,TTransform<double> *param_3,
          bool *param_4,FString *param_5,TSubclassOf<ULevelStreamingDynamic> param_6,bool param_7)

{
  void *pvVar1;
  UWorld *pUVar2;
  ULevelStreamingDynamic *pUVar3;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  FString local_128;
  undefined1 local_118 [200];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  *param_4 = false;
  if (*(longlong *)&(param_2->SoftObjectPtr).field_0x8 == 0) {
    pvVar1 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pUVar3 = (ULevelStreamingDynamic *)0x0;
  }
  else {
    pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8,&local_128);
    local_118._0_8_ = pUVar2;
    FPackageName::ObjectPathToPackageName((FString *)(local_118 + 8),&local_128);
    local_118._32_8_ = (param_3->Rotation).XY.m128d_f64[0];
    local_118._40_8_ = (param_3->Rotation).XY.m128d_f64[1];
    pUVar3 = (ULevelStreamingDynamic *)0x0;
    local_118._48_8_ = (param_3->Rotation).ZW.m128d_f64[0];
    local_118._56_8_ = (param_3->Rotation).ZW.m128d_f64[1];
    local_118._64_8_ = (param_3->Translation).XY.m128d_f64[0];
    local_118._72_8_ = (param_3->Translation).XY.m128d_f64[1];
    local_118._96_8_ = (param_3->Scale3D).XY.m128d_f64[0];
    local_118._104_8_ = (param_3->Scale3D).XY.m128d_f64[1];
    local_118._80_8_ = (param_3->Translation).ZW.m128d_f64[0];
    local_118._88_8_ = (param_3->Translation).ZW.m128d_f64[1];
    local_118._112_8_ = (param_3->Scale3D).ZW.m128d_f64[0];
    local_118._120_8_ = (param_3->Scale3D).ZW.m128d_f64[1];
    local_118._128_8_ = (FString *)0x0;
    local_118._136_8_ = (UClass *)0x0;
    local_118[0x90] = false;
    local_118[0x91] = true;
    local_118[0x92] = false;
    local_118._152_8_ = (UObject *)0x0;
    local_118._160_8_ = 0;
    local_50 = (longlong *)0x0;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    local_118._128_8_ = param_5;
    if ((param_5->Data).ArrayNum < 2) {
      local_118._128_8_ = pUVar3;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_6.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_6.Class.field0_0x0);
    }
    local_118._136_8_ = *(undefined8 *)param_6.Class.field0_0x0;
    local_118[0x90] = param_7;
    *param_4 = false;
    if (((UWorld *)local_118._0_8_ != (UWorld *)0x0) && (1 < (int)local_118._16_4_)) {
      pUVar3 = LoadLevelInstance_Internal((FLoadLevelInstanceParams *)local_118,param_4);
    }
    if (local_118._160_8_ != 0) {
      plVar4 = (longlong *)(local_118 + 0xb0);
      if (local_50 != (longlong *)0x0) {
        plVar4 = local_50;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((FScriptContainerElement *)local_118._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._8_8_);
    }
    pvVar1 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  return pUVar3;
}

// LoadLevelInstanceBySoftObjectPtr @ 147e6f320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr
          (UObject *param_1,TSoftObjectPtr<UWorld> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,bool *param_5,FString *param_6,
          TSubclassOf<ULevelStreamingDynamic> param_7,bool param_8)

{
  double dVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TQuat<double> *pTVar14;
  UWorld *pUVar15;
  ULevelStreamingDynamic *pUVar16;
  longlong *plVar17;
  undefined1 auStack_1e8 [32];
  TQuat<double> local_1c8;
  undefined8 local_1a8;
  FSoftObjectPath local_1a0;
  undefined1 local_178 [200];
  longlong *local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  TVar2 = *(TObjectPtr<UClass>_u_0 *)param_7.Class.field0_0x0;
  local_1c8.X = (double)param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar2.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  pTVar14 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_1c8.X,&local_1c8);
  dVar13 = _UNK_150689688;
  dVar12 = ___xmm_3ff00000000000003ff0000000000000;
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar6 = pTVar14->X;
  dVar7 = pTVar14->Y;
  dVar8 = pTVar14->Z;
  dVar9 = pTVar14->W;
  local_1a8 = *(undefined8 *)&param_2->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            (&local_1a0,(FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
  *param_5 = false;
  if (local_1a0.AssetPath.PackageName == (FName)0x0) {
    if (local_1a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar16 = (ULevelStreamingDynamic *)0x0;
  }
  else {
    pUVar15 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    FSoftObjectPath::GetLongPackageName(&local_1a0,(FString *)&local_1c8);
    local_178._0_8_ = pUVar15;
    FPackageName::ObjectPathToPackageName((FString *)(local_178 + 8),(FString *)&local_1c8);
    pUVar16 = (ULevelStreamingDynamic *)0x0;
    local_178._88_8_ = 0.0;
    local_178._96_8_ = dVar12;
    local_178._104_8_ = dVar13;
    local_178._112_8_ = dVar10;
    local_178._120_8_ = dVar11;
    local_178._128_8_ = (FString *)0x0;
    local_178._136_8_ = (UClass *)0x0;
    local_178[0x90] = false;
    local_178[0x91] = true;
    local_178[0x92] = false;
    local_178._152_8_ = (UObject *)0x0;
    local_178._160_8_ = 0;
    local_b0 = (longlong *)0x0;
    local_178._32_8_ = dVar6;
    local_178._40_8_ = dVar7;
    local_178._48_8_ = dVar8;
    local_178._56_8_ = dVar9;
    local_178._64_8_ = dVar4;
    local_178._72_8_ = dVar5;
    local_178._80_8_ = dVar1;
    if ((TRotator<double> *)local_1c8.X != (TRotator<double> *)0x0) {
      FMemory::Free((void *)local_1c8.X);
    }
    local_178._128_8_ = param_6;
    if ((param_6->Data).ArrayNum < 2) {
      local_178._128_8_ = pUVar16;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    local_178[0x90] = param_8;
    *param_5 = false;
    local_178._136_8_ = TVar2;
    if (((UWorld *)local_178._0_8_ != (UWorld *)0x0) && (1 < (int)local_178._16_4_)) {
      pUVar16 = LoadLevelInstance_Internal((FLoadLevelInstanceParams *)local_178,param_5);
    }
    if (local_178._160_8_ != 0) {
      plVar17 = (longlong *)(local_178 + 0xb0);
      if (local_b0 != (longlong *)0x0) {
        plVar17 = local_b0;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if ((FScriptContainerElement *)local_178._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_178._8_8_);
    }
    if (local_1a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  pvVar3 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return pUVar16;
}

// LoadLevelInstance_Internal @ 147e6f590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelStreamingDynamic * __cdecl
ULevelStreamingDynamic::LoadLevelInstance_Internal(FLoadLevelInstanceParams *param_1,bool *param_2)

{
  byte bVar1;
  FString *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  _func___cdecl_UObject_ptr_FVTableHelper_ptr *p_Var16;
  bool bVar17;
  int iVar18;
  FNameEntryId FVar19;
  FColor FVar20;
  UClass *pUVar21;
  FName FVar22;
  FName *pFVar23;
  UClass *pUVar24;
  FName this;
  undefined8 uVar25;
  TStringBuilderBase<wchar_t> *this_00;
  undefined7 extraout_var;
  size_t sVar26;
  undefined4 extraout_var_00;
  UWorld *pUVar28;
  FName *pFVar29;
  int iVar30;
  uint uVar31;
  longlong *plVar32;
  longlong *plVar33;
  wchar_t *pwVar34;
  ForAnyElementType FVar35;
  FName *pFVar36;
  FName FVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar45;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStackY_608 [32];
  FSoftObjectPath local_5c8;
  FName local_5a8;
  FString local_5a0;
  FName local_590;
  FSoftObjectPath local_588;
  FString local_568;
  FString local_558;
  FString local_548;
  undefined8 local_538;
  FSoftObjectPath local_530;
  undefined1 local_508 [128];
  TStringBuilderBase<wchar_t> local_488;
  UClass local_468;
  ulonglong local_68 [6];
  byte *pbVar27;
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStackY_608;
  FPackageName::GetLongPackagePath(&local_548,&param_1->LongPackageName);
  local_5c8.AssetPath.PackageName = (FName)(param_1->LongPackageName).Data.AllocatorInstance.Data;
  this.ComparisonIndex.Value = 0;
  this.Number = 0;
  iVar18 = (param_1->LongPackageName).Data.ArrayNum;
  uVar38 = 0;
  local_5c8.AssetPath.AssetName.ComparisonIndex.Value = iVar18 - 1;
  if (iVar18 == 0) {
    local_5c8.AssetPath.AssetName.ComparisonIndex.Value = uVar38;
  }
  FPackageName::GetShortName(&local_5a0,(TStringView<wchar_t> *)&local_5c8);
  pUVar24 = (param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr;
  if ((pUVar24 != (UClass *)0x0) &&
     (pUVar21 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister(), pUVar21 != (UClass *)0x0)) {
    iVar18 = (int)pUVar21->_padding_;
    if (((int)pUVar24->_padding_ < iVar18) ||
       ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar18 * 8) !=
        &pUVar21->_padding_)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((bVar17) &&
       (pUVar24 = (param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr,
       pUVar24 != (UClass *)0x0)) {
      pUVar21 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
      FVar22 = this;
      if (pUVar21 != (UClass *)0x0) {
        iVar18 = (int)pUVar21->_padding_;
        if (((int)pUVar24->_padding_ < iVar18) ||
           ((longlong *)*(undefined1 **)(pUVar24->_padding_ + (longlong)iVar18 * 8) !=
            &pUVar21->_padding_)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          FVar22 = (FName)(param_1->OptionalLevelStreamingClass).Class.field0_0x0.DebugPtr;
        }
      }
      goto LAB_147e6f69e;
    }
  }
  FVar22 = (FName)Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
LAB_147e6f69e:
  iVar18 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
  if (iVar18 == 0) {
    pwVar34 = L"";
    uVar31 = uVar38;
  }
  else {
    pwVar34 = (wchar_t *)(param_1->World->StreamingLevelsPrefix).Data.AllocatorInstance.Data;
    uVar31 = iVar18 - 1;
  }
  bVar17 = ::FString::StartsWith(&local_5a0,pwVar34,uVar31,IgnoreCase);
  if (bVar17) {
    iVar18 = (param_1->World->StreamingLevelsPrefix).Data.ArrayNum;
    uVar31 = iVar18 - 1;
    if (iVar18 == 0) {
      uVar31 = uVar38;
    }
    ::FString::RemoveAt(&local_5a0,0,uVar31,No);
  }
  ::FString::ConcatFC((FString *)&local_5c8,&local_548,L"/");
  ::FString::ConcatFF(&local_558,(FString *)&local_5c8,&local_5a0);
  if (local_5c8.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_5c8.AssetPath.PackageName);
  }
  GetLevelInstancePackageName(&local_568,param_1);
  pFVar2 = param_1->OptionalLevelNameOverride;
  FVar35.Data = (FScriptContainerElement *)L"";
  if (local_568.Data.ArrayNum != 0) {
    FVar35.Data = local_568.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_590,(wchar_t *)FVar35.Data);
  if (pFVar2 != (FString *)0x0) {
    pFVar36 = (FName *)(param_1->World->StreamingLevels).AllocatorInstance.Data;
    pFVar29 = pFVar36 + (param_1->World->StreamingLevels).ArrayNum;
    local_5a8 = local_590;
    for (; pFVar36 != pFVar29; pFVar36 = pFVar36 + 1) {
      FVar37 = *pFVar36;
      if ((FVar37 != (FName)0x0) &&
         (pFVar23 = (FName *)(**(code **)(*(longlong *)FVar37 + 0x2e0))(FVar37,&local_5c8),
         *pFVar23 == local_5a8)) {
        if (pFVar36 != (FName *)0x0) {
          if (param_1->bAllowReuseExitingLevelStreaming != false) {
            pUVar28 = param_1->World;
            bVar17 = UWorld::IsGameWorld(pUVar28);
            iVar18 = (int)pUVar28;
            if (bVar17) {
              FVar37 = *pFVar36;
              lVar40 = CONCAT71(extraout_var,bVar17);
              if (FVar37 == (FName)0x0) {
LAB_147e6f955:
                iVar30 = iVar18;
                FVar37 = this;
              }
              else {
                pUVar24 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
                iVar30 = (int)pUVar24->_padding_;
                lVar40 = (longlong)iVar30;
                if ((*(int *)(*(longlong *)((longlong)FVar37 + 0x10) + 0x38) < iVar30) ||
                   (lVar40 = *(longlong *)(*(longlong *)((longlong)FVar37 + 0x10) + 0x30),
                   iVar18 = iVar30,
                   (longlong *)*(undefined1 **)(lVar40 + (longlong)iVar30 * 8) !=
                   &pUVar24->_padding_)) goto LAB_147e6f955;
              }
              if ((FVar37 != (FName)0x0) && (*(FName *)((longlong)FVar37 + 0x10) == FVar22)) {
                dVar9 = (double)*(_func___cdecl_void_FObjectInitializer_ptr **)
                                 ((longlong)FVar37 + 0xb0) -
                        (param_1->LevelTransform).Translation.XY.m128d_f64[0];
                dVar10 = (double)*(_func___cdecl_UObject_ptr_FVTableHelper_ptr **)
                                  ((longlong)FVar37 + 0xb8) -
                         (param_1->LevelTransform).Translation.XY.m128d_f64[1];
                dVar41 = (double)((FUObjectCppClassStaticFunctions *)((longlong)FVar37 + 0xc0))->
                                 AddReferencedObjects -
                         (param_1->LevelTransform).Translation.ZW.m128d_f64[0];
                dVar45 = *(double *)((longlong)FVar37 + 200) -
                         (param_1->LevelTransform).Translation.ZW.m128d_f64[1];
                local_5c8.AssetPath.PackageName = __real_3f1a36e2e0000000;
                lVar39 = -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar10 >> 0x20),
                                           _UNK_15061cc88 & SUB84(dVar10,0)));
                auVar7._8_4_ = (int)lVar39;
                auVar7._0_8_ = -(ulonglong)
                                ((double)__real_3f1a36e2e0000000 <
                                (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                                 (uint)((ulonglong)dVar9 >> 0x20),
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                                 SUB84(dVar9,0)));
                auVar7._12_4_ = (int)((ulonglong)lVar39 >> 0x20);
                iVar18 = movmskpd((int)lVar40,auVar7);
                lVar40 = -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44(_UNK_15061cc8c & (uint)((ulonglong)dVar45 >> 0x20),
                                           _UNK_15061cc88 & SUB84(dVar45,0)));
                auVar11._8_4_ = (int)lVar40;
                auVar11._0_8_ =
                     -(ulonglong)
                      ((double)__real_3f1a36e2e0000000 <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       (uint)((ulonglong)dVar41 >> 0x20),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       SUB84(dVar41,0)));
                auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                uVar38 = movmskpd(iVar30,auVar11);
                if ((uVar38 & 0x3fffffff) == 0 && iVar18 == 0) {
                  dVar9 = *(double *)((longlong)FVar37 + 0x90) -
                          (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
                  dVar10 = *(double *)((longlong)FVar37 + 0x98) -
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
                  dVar42 = *(double *)((longlong)FVar37 + 0xa0) -
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
                  dVar46 = *(double *)((longlong)FVar37 + 0xa8) -
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
                  dVar41 = *(double *)((longlong)FVar37 + 0x90) +
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
                  dVar45 = *(double *)((longlong)FVar37 + 0x98) +
                           (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
                  dVar14 = *(double *)((longlong)FVar37 + 0xa0) +
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
                  dVar15 = *(double *)((longlong)FVar37 + 0xa8) +
                           (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
                  auVar43._0_8_ =
                       (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar42,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                  auVar43._8_4_ = SUB84(dVar46,0) & _UNK_15061cc88;
                  auVar43._12_4_ = (uint)((ulonglong)dVar46 >> 0x20) & _UNK_15061cc8c;
                  lVar40 = -(ulonglong)
                            ((double)__real_3f1a36e2e0000000 <
                            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar10,0) & _UNK_15061cc88));
                  auVar8._8_4_ = (int)lVar40;
                  auVar8._0_8_ = -(ulonglong)
                                  ((double)__real_3f1a36e2e0000000 <
                                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar9,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                  auVar8._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  uVar38 = movmskpd(iVar18,auVar8);
                  lVar40 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar43._8_8_);
                  auVar4._8_4_ = (int)lVar40;
                  auVar4._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar43._0_8_);
                  auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  iVar18 = movmskpd(0,auVar4);
                  uVar31 = iVar18 << 2 | uVar38;
                  if (uVar31 != 0) {
                    lVar40 = -(ulonglong)
                              ((double)__real_3f1a36e2e0000000 <
                              (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                                               SUB84(dVar15,0) & _UNK_15061cc88));
                    auVar12._8_4_ = (int)lVar40;
                    auVar12._0_8_ =
                         -(ulonglong)
                          ((double)__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar14,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                    auVar12._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                    uVar31 = movmskpd(uVar31,auVar12);
                    lVar40 = -(ulonglong)
                              ((double)__real_3f1a36e2e0000000 <
                              (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & _UNK_15061cc8c,
                                               SUB84(dVar45,0) & _UNK_15061cc88));
                    auVar5._8_4_ = (int)lVar40;
                    auVar5._0_8_ = -(ulonglong)
                                    ((double)__real_3f1a36e2e0000000 <
                                    (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                     SUB84(dVar41,0) &
                                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                    auVar5._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                    uVar38 = movmskpd(uVar38,auVar5);
                    if ((uVar31 & 0x3fffffff) != 0 || uVar38 != 0) goto LAB_147e6fb20;
                  }
                  dVar41 = (double)((TObjectPtr<UClass> *)((longlong)FVar37 + 0xe0))->field0_0x0 -
                           (param_1->LevelTransform).Scale3D.ZW.m128d_f64[0];
                  dVar45 = (double)*(FName *)((longlong)FVar37 + 0xe8) -
                           (param_1->LevelTransform).Scale3D.ZW.m128d_f64[1];
                  dVar9 = *(double *)((longlong)FVar37 + 0xd0) -
                          (param_1->LevelTransform).Scale3D.XY.m128d_f64[0];
                  dVar10 = *(double *)((longlong)FVar37 + 0xd8) -
                           (param_1->LevelTransform).Scale3D.XY.m128d_f64[1];
                  auVar44._0_8_ =
                       (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar41,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                  auVar44._8_4_ = SUB84(dVar45,0) & _UNK_15061cc88;
                  auVar44._12_4_ = (uint)((ulonglong)dVar45 >> 0x20) & _UNK_15061cc8c;
                  lVar40 = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar44._8_8_);
                  auVar13._8_4_ = (int)lVar40;
                  auVar13._0_8_ = -(ulonglong)((double)__real_3f1a36e2e0000000 < auVar44._0_8_);
                  auVar13._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  uVar31 = movmskpd(0,auVar13);
                  lVar40 = -(ulonglong)
                            ((double)__real_3f1a36e2e0000000 <
                            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                             SUB84(dVar10,0) & _UNK_15061cc88));
                  auVar6._8_4_ = (int)lVar40;
                  auVar6._0_8_ = -(ulonglong)
                                  ((double)__real_3f1a36e2e0000000 <
                                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                   SUB84(dVar9,0) &
                                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff));
                  auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
                  iVar18 = movmskpd(uVar38,auVar6);
                  if ((uVar31 & 0x3fffffff) == 0 && iVar18 == 0) {
                    *param_2 = true;
                    (**(code **)(*(longlong *)FVar37 + 0x2d0))(FVar37,1);
                    ULevelStreaming::SetShouldBeVisible
                              ((ULevelStreaming *)FVar37,param_1->bInitiallyVisible);
                    if ((*(byte *)((longlong)FVar37 + 0xf8) & 1) != 0) {
                      *(byte *)((longlong)FVar37 + 0xf8) = *(byte *)((longlong)FVar37 + 0xf8) & 0xfe
                      ;
                    }
                    this = FVar37;
                    if (5 < (byte)LogLevelStreaming._0_1_) {
                      ::FName::ToString(&local_5a8,(FString *)&local_5c8);
                      UE::Logging::Private::BasicLog<6>
                                (&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
                      if (local_5c8.AssetPath.PackageName != (FName)0x0) {
                        FMemory::Free((void *)local_5c8.AssetPath.PackageName);
                      }
                    }
                    goto LAB_147e6fe26;
                  }
                }
              }
            }
          }
LAB_147e6fb20:
          if (1 < (byte)LogLevelStreaming._0_1_) {
            ::FName::ToString(&local_5a8,(FString *)&local_5c8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
            if (local_5c8.AssetPath.PackageName != (FName)0x0) {
              FMemory::Free((void *)local_5c8.AssetPath.PackageName);
            }
          }
          goto LAB_147e6fe26;
        }
        break;
      }
    }
  }
  pUVar28 = param_1->World;
  local_5a8.ComparisonIndex.Value = 0;
  local_5a8.Number = 0;
  local_5c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_5c8.AssetPath.PackageName.Number = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar28,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar24 = Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
  CheckIsClassChildOf_Internal(pUVar24,(UClass *)FVar22);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_508,(UClass *)FVar22);
  local_508._48_8_ = (FObjectInstancingGraph *)0x0;
  local_508._56_8_ = (UPackage *)0x0;
  local_508._16_4_ = 0;
  local_508._20_4_ = 0;
  local_508._24_4_ = RF_Transient;
  local_508._40_8_ = (UObject *)0x0;
  local_508[0x20] = false;
  local_508._8_8_ = pUVar28;
  this = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_508);
  if (local_508._64_8_ != 0) {
    plVar32 = (longlong *)(local_508 + 0x50);
    if ((longlong *)local_508._104_8_ != (longlong *)0x0) {
      plVar32 = (longlong *)local_508._104_8_;
    }
    (**(code **)(*plVar32 + 0x10))();
  }
  if (*(void **)&param_1->LevelStreamingCreatedCallback != (void *)0x0) {
    local_5c8.AssetPath.PackageName = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->LevelStreamingCreatedCallback);
    pcVar3 = *(code **)&param_1->LevelStreamingCreatedCallback;
    plVar32 = *(longlong **)&(param_1->LevelStreamingCreatedCallback).field_0x28;
    plVar33 = (longlong *)&(param_1->LevelStreamingCreatedCallback).field_0x10;
    if (plVar32 != (longlong *)0x0) {
      plVar33 = plVar32;
    }
    uVar25 = (**(code **)(*plVar33 + 8))();
    (*pcVar3)(uVar25,&local_5c8);
  }
  local_488.Base = (wchar_t *)&local_468;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  local_488.CurPos = (wchar_t *)&local_468;
  local_488.End = (wchar_t *)local_68;
  ::FName::AppendString(&local_590,&local_488);
  this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L".",1);
  if (local_5a0.Data.ArrayNum != 0) {
    uVar38 = local_5a0.Data.ArrayNum - 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this_00,(wchar_t *)local_5a0.Data.AllocatorInstance.Data,uVar38);
  if (local_488.End < (wchar_t *)((longlong)(longlong *)local_488.CurPos + 2U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,1);
  }
  *(undefined2 *)(longlong *)local_488.CurPos = 0;
  FVar19.Value = 0;
  local_588.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_588.AssetPath.PackageName.Number = 0;
  local_588.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_588.AssetPath.AssetName.Number = 0;
  local_588.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_588.SubPathString.Data.ArrayNum = 0;
  local_588.SubPathString.Data.ArrayMax = 0;
  local_5c8.AssetPath.PackageName = (FName)local_488.Base;
  if ((FName)local_488.Base != (FName)0x0) {
    sVar26 = wcslen(local_488.Base);
    FVar19.Value = (uint)sVar26;
  }
  local_5c8.AssetPath.AssetName.ComparisonIndex.Value = FVar19.Value;
  FSoftObjectPath::SetPath(&local_588,(TStringView<wchar_t> *)&local_5c8);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  FVar35.Data = local_588.SubPathString.Data.AllocatorInstance.Data;
  sVar26 = (size_t)local_588.SubPathString.Data.ArrayNum;
  local_5c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c8.SubPathString.Data.ArrayNum = local_588.SubPathString.Data.ArrayNum;
  pcVar3 = *(code **)(*(longlong *)this + 0x2d8);
  local_5c8.AssetPath.PackageName = local_588.AssetPath.PackageName;
  local_5c8.AssetPath.AssetName = local_588.AssetPath.AssetName;
  if (local_588.SubPathString.Data.ArrayNum == 0) {
    local_5c8.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_588.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_5c8.SubPathString,local_588.SubPathString.Data.ArrayNum,
               (int *)((longlong)&local_5c8.SubPathString.Data + 0xc));
    memcpy(local_5c8.SubPathString.Data.AllocatorInstance.Data,FVar35.Data,sVar26);
  }
  local_538 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_530,&local_5c8);
  if (local_5c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.SubPathString.Data.AllocatorInstance.Data);
  }
  (*pcVar3)(this,&local_538);
  if (local_530.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.SubPathString.Data.AllocatorInstance.Data);
  }
  FVar20 = FColor::MakeRandomColor();
  pbVar27 = (byte *)CONCAT44(extraout_var_00,FVar20.field0_0x0);
  local_5c8.AssetPath.PackageName.Number = (uint)FLinearColor::sRGBToLinearTable[pbVar27[1]];
  local_5c8.AssetPath.AssetName.ComparisonIndex.Value =
       (uint)FLinearColor::sRGBToLinearTable[*pbVar27];
  lVar40 = *(longlong *)this;
  local_5c8.AssetPath.AssetName.Number = (uint)((float)pbVar27[3] * __real_3b808081);
  local_5c8.AssetPath.PackageName.ComparisonIndex.Value =
       (uint)FLinearColor::sRGBToLinearTable[pbVar27[2]];
  (((FLinearColor *)((longlong)this + 0x124))->field0_0x0)._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar27[2]];
  *(uint *)((longlong)this + 0x128) = local_5c8.AssetPath.PackageName.Number;
  *(uint *)((longlong)this + 300) = local_5c8.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)((longlong)this + 0x130) = local_5c8.AssetPath.AssetName.Number;
  (**(code **)(lVar40 + 0x2d0))(this,0x154b77f01);
  bVar1 = *(byte *)((longlong)this + 0xf8);
  if (param_1->bInitiallyVisible != (bool)(bVar1 >> 3 & 1)) {
    *(byte *)((longlong)this + 0xf8) = (param_1->bInitiallyVisible << 3 ^ bVar1) & 8 ^ bVar1;
    bVar17 = UObjectBaseUtility::IsTemplate
                       ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if ((!bVar17) &&
       (pUVar28 = CastChecked<UWorld,UObject>(*(UObject **)((longlong)this + 0x20)),
       pUVar28 != (UWorld *)0x0)) {
      UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar28,(ULevelStreaming *)this);
    }
  }
  *(uint *)&((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ =
       (uint)((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ | 1;
  *(undefined1 *)((longlong)this + 0x122) = INSERT(*(undefined1 *)((longlong)this + 0x122),'\0',2,1)
  ;
  uVar38 = (uint)((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_;
  *(uint *)&((ULevelStreaming *)((longlong)this + 0x1f0))->_padding_ =
       ((uint)param_1->bInitiallyVisible * 2 ^ uVar38) & 2 ^ uVar38;
  dVar9 = (param_1->LevelTransform).Rotation.XY.m128d_f64[1];
  (((TTransform<double> *)((longlong)this + 0x90))->Rotation).XY.m128d_f64[0] =
       (param_1->LevelTransform).Rotation.XY.m128d_f64[0];
  *(double *)((longlong)this + 0x98) = dVar9;
  dVar9 = (param_1->LevelTransform).Rotation.ZW.m128d_f64[1];
  ((__m128d *)((longlong)this + 0xa0))->m128d_f64[0] =
       (param_1->LevelTransform).Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)this + 0xa8) = dVar9;
  p_Var16 = (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)
            (param_1->LevelTransform).Translation.XY.m128d_f64[1];
  (((VectorRegister4Double *)((longlong)this + 0xb0))->XY).m128d_f64[0] =
       (param_1->LevelTransform).Translation.XY.m128d_f64[0];
  *(_func___cdecl_UObject_ptr_FVTableHelper_ptr **)((longlong)this + 0xb8) = p_Var16;
  dVar9 = (param_1->LevelTransform).Translation.ZW.m128d_f64[1];
  ((__m128d *)((longlong)this + 0xc0))->m128d_f64[0] =
       (param_1->LevelTransform).Translation.ZW.m128d_f64[0];
  *(double *)((longlong)this + 200) = dVar9;
  dVar9 = (param_1->LevelTransform).Scale3D.XY.m128d_f64[1];
  (((VectorRegister4Double *)((longlong)this + 0xd0))->XY).m128d_f64[0] =
       (param_1->LevelTransform).Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)this + 0xd8) = dVar9;
  FVar22 = *(FName *)((param_1->LevelTransform).Scale3D.ZW.m128d_f64 + 1);
  ((__m128d *)((longlong)this + 0xe0))->m128d_f64[0] =
       (param_1->LevelTransform).Scale3D.ZW.m128d_f64[0];
  *(FName *)((longlong)this + 0xe8) = FVar22;
  FVar35.Data = (FScriptContainerElement *)L"";
  if (local_558.Data.ArrayNum != 0) {
    FVar35.Data = local_558.Data.AllocatorInstance.Data;
  }
  pFVar29 = ::FName::FName((FName *)&local_5c8,(wchar_t *)FVar35.Data);
  *(FName *)((longlong)this + 0x5c) = *pFVar29;
  UWorld::AddStreamingLevel(param_1->World,(ULevelStreaming *)this);
  *param_2 = true;
  if (local_588.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_147e6fe26:
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  return (ULevelStreamingDynamic *)this;
}

// PostLoad @ 147e721f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULevelStreamingDynamic::PostLoad(ULevelStreamingDynamic *this)

{
  byte bVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  ULevelStreaming::PostLoad((ULevelStreaming *)this);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    pUVar3 = (UWorld *)0x0;
  }
  else {
    pUVar3 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
  }
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if (bVar2) {
    (**(code **)(*(longlong *)this + 0x2d0))(this,this->bInitiallyLoaded);
    bVar1 = this->field_0xf8;
    if (((bVar1 >> 3 ^ ZPULL(*(undefined4 *)&this->field_0x1f0,1,1)) & 1) != 0) {
      this->field_0xf8 =
           ((byte)((uint)*(undefined4 *)&this->field_0x1f0 >> 1) << 3 ^ bVar1) & 8 ^ bVar1;
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        pUVar3 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
        if (pUVar3 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar3,(ULevelStreaming *)this);
          return;
        }
      }
    }
  }
  return;
}

// SetShouldBeLoaded @ 147e7eb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULevelStreamingDynamic::SetShouldBeLoaded(ULevelStreamingDynamic *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  if (param_1 != (bool)((byte)this->field_0xf8 >> 4 & 1)) {
    this->field_0xf8 = this->field_0xf8 & 0xef | param_1 << 4;
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,(ULevelStreaming *)this);
        return;
      }
    }
  }
  return;
}

