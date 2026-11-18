// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 148aa7f60

UClass * __cdecl UWorldPartitionRuntimeLevelStreamingCell::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeLevelStreamingCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeLevelStreamingCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeLevelStreamingCell>,local_res8,
               UWorldPartitionRuntimeCell::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton;
}

// UWorldPartitionRuntimeLevelStreamingCell @ 148ab5d00

UWorldPartitionRuntimeLevelStreamingCell * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::UWorldPartitionRuntimeLevelStreamingCell
          (UWorldPartitionRuntimeLevelStreamingCell *this,FVTableHelper *param_1)

{
  UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell((UWorldPartitionRuntimeCell *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  (this->LevelStreaming).field0_0x0.DebugPtr = (UWorldPartitionLevelStreamingDynamic *)0x0;
  return this;
}

// UWorldPartitionRuntimeLevelStreamingCell @ 148ab5d50

UWorldPartitionRuntimeLevelStreamingCell * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::UWorldPartitionRuntimeLevelStreamingCell
          (UWorldPartitionRuntimeLevelStreamingCell *this,FObjectInitializer *param_1)

{
  UWorldPartitionRuntimeCell::UWorldPartitionRuntimeCell((UWorldPartitionRuntimeCell *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCell__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  (this->LevelStreaming).field0_0x0.DebugPtr = (UWorldPartitionLevelStreamingDynamic *)0x0;
  return this;
}

// ~UWorldPartitionRuntimeLevelStreamingCell @ 148ab76d0

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::~UWorldPartitionRuntimeLevelStreamingCell
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  this->_padding_ = (longlong)&UWorldPartitionRuntimeCell::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UWorldPartitionRuntimeCell::_vftable__for__IWorldPartitionCell__;
  this->_padding_ =
       (longlong)&UWorldPartitionRuntimeCell::_vftable__for__IWorldPartitionCookPackageObject__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IWorldPartitionCookPackageObject__6B_;
  this->_padding_ = (longlong)&___7IWorldPartitionCell__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 148abf0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::Activate(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorldPartitionLevelStreamingDynamic *this_00;
  UWorld *this_01;
  FString local_18;
  
  this_00 = GetOrCreateLevelStreaming(this);
  if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
      (**(code **)(this->_padding_ + 0x358))(this);
    }
    return;
  }
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this_00->_padding_ + 0x2f0))(this_00);
  if ((cVar2 != '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShouldBeVisible()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x28d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this_00->_padding_ + 0x2d0))(this_00,1);
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this_00,true);
  ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this_00,false);
  this_01 = ULevelStreaming::GetWorld((ULevelStreaming *)this_00);
  if (((this_01 == (UWorld *)0x0) || (bVar3 = UWorld::IsGameWorld(this_01), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PlayWorld && PlayWorld->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x296,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UWorld::AddUniqueStreamingLevel(this_01,(ULevelStreaming *)this_00);
  return;
}

// CanUnload @ 148ac1f60

bool __thiscall
UWorldPartitionRuntimeLevelStreamingCell::CanUnload(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  return true;
}

// CreateAndSetLevelStreaming @ 148ac3120

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::CreateAndSetLevelStreaming
          (UWorldPartitionRuntimeLevelStreamingCell *this,FString *param_1,FSoftObjectPath *param_2)

{
  UWorldPartitionLevelStreamingDynamic *pUVar1;
  
  pUVar1 = CreateLevelStreaming(this,param_1,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UWorldPartitionLevelStreamingDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LevelStreaming).field0_0x0.DebugPtr = pUVar1;
  return;
}

// CreateAndSetLevelStreaming @ 148ac3170

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

bool __thiscall
UWorldPartitionRuntimeLevelStreamingCell::CreateAndSetLevelStreaming
          (UWorldPartitionRuntimeLevelStreamingCell *this,TSoftObjectPtr<UWorld> *param_1,
          TTransform<double> *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UWorldPartitionLevelStreamingDynamic *pUVar9;
  void *pvVar10;
  UWorld *this_00;
  UWorldPartition *this_01;
  TTransform<double> *pTVar11;
  FName *pFVar12;
  int iVar13;
  FName FVar14;
  ulong64 uVar15;
  undefined1 auStackY_5a8 [32];
  TStringView<wchar_t> local_568;
  FSoftObjectPath local_558;
  FName local_538;
  FName local_530;
  FString local_528;
  FString local_518;
  FString local_508;
  undefined8 local_4f8;
  FSoftObjectPath local_4f0;
  TTransform<double> local_4c8;
  TStringBuilderBase<wchar_t> local_468;
  FScriptContainerElement local_448 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x70))(&this->_padding_);
  local_538 = (FName)this->_padding_;
  ::FName::ToString(&local_538,(FString *)&local_568);
  ::FString::PrintfImpl((FString *)&local_558,L"WorldPartitionLevelStreaming_%s");
  FVar14 = (FName)L"";
  if (local_558.AssetPath.AssetName.ComparisonIndex.Value != 0) {
    FVar14 = local_558.AssetPath.PackageName;
  }
  ::FName::FName(&local_530,(wchar_t *)FVar14);
  if (local_558.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_558.AssetPath.PackageName);
  }
  if (local_568.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_568.DataPtr);
  }
  pFVar5 = ::FName::ToString(&local_530,(FString *)&local_558);
  if ((pFVar5->Data).ArrayNum == 0) {
    local_568.DataPtr = L"";
  }
  else {
    local_568.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    local_568.Size = 0;
    if ((FScriptContainerElement *)local_568.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_148ac325e;
  }
  sVar6 = wcslen(local_568.DataPtr);
  local_568.Size = (int)sVar6;
LAB_148ac325e:
  pUVar7 = UWorldPartitionLevelStreamingDynamic::StaticClass();
  pUVar8 = StaticFindObject(pUVar7,pUVar4,&local_568,None);
  if (local_558.AssetPath.PackageName != (FName)0x0) {
    FMemory::Free((void *)local_558.AssetPath.PackageName);
  }
  if (pUVar8 == (UObject *)0x0) {
    pUVar7 = UWorldPartitionLevelStreamingDynamic::StaticClass();
    pUVar9 = NewObject<UWorldPartitionLevelStreamingDynamic>
                       (pUVar4,pUVar7,local_530,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UWorldPartitionLevelStreamingDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->LevelStreaming).field0_0x0.DebugPtr = pUVar9;
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,&local_528);
    FPackageName::GetLongPackagePath(&local_508,&local_528);
    iVar13 = local_528.Data.ArrayNum + -1;
    if (local_528.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    local_568.Size = iVar13;
    local_568.DataPtr = (wchar_t *)local_528.Data.AllocatorInstance.Data;
    FPackageName::GetShortName(&local_518,&local_568);
    FVar2.Data = local_508.Data.AllocatorInstance.Data;
    local_468.Base = (wchar_t *)local_448;
    local_468.End = (wchar_t *)local_48;
    local_468.bIsDynamic = false;
    local_468.bIsExternal = false;
    local_468.CurPos = (wchar_t *)local_448;
    iVar13 = local_508.Data.ArrayNum + -1;
    if (local_508.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    uVar15 = (longlong)iVar13 * 2;
    if ((FScriptContainerElement *)local_48 < local_448 + uVar15) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,(longlong)iVar13);
    }
    if (iVar13 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,FVar2.Data,uVar15);
      local_468.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15);
    }
    if (local_468.End < (FScriptContainerElement *)((longlong)local_468.CurPos + 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,&u__,2);
    FVar2.Data = local_518.Data.AllocatorInstance.Data;
    local_468.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
    iVar13 = local_518.Data.ArrayNum + -1;
    if (local_518.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    uVar15 = (ulong64)iVar13;
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + uVar15)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,uVar15);
    }
    if (iVar13 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,FVar2.Data,uVar15 * 2);
      local_468.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
    }
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + 0xf)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,0xf);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,L"_LevelInstance_",0x1e);
    local_468.CurPos = (wchar_t *)((longlong)pvVar10 + 0x1e);
    local_538 = (FName)this->_padding_;
    ::FName::ToString(&local_538,(FString *)&local_558);
    FVar14 = local_558.AssetPath.PackageName;
    iVar13 = local_558.AssetPath.AssetName.ComparisonIndex.Value - 1;
    if (local_558.AssetPath.AssetName.ComparisonIndex.Value == 0) {
      iVar13 = 0;
    }
    uVar15 = (ulong64)iVar13;
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + uVar15)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,uVar15);
    }
    if (iVar13 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,(void *)FVar14,uVar15 * 2);
      local_468.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
    }
    if (local_558.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)local_558.AssetPath.PackageName);
    }
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,L".",2);
    FVar2.Data = local_518.Data.AllocatorInstance.Data;
    local_468.CurPos = (wchar_t *)((longlong)pvVar10 + 2);
    iVar13 = local_518.Data.ArrayNum + -1;
    if (local_518.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    uVar15 = (ulong64)iVar13;
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + uVar15)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,uVar15);
    }
    if (iVar13 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_468.CurPos,FVar2.Data,uVar15 * 2);
      local_468.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
    }
    pUVar9 = (this->LevelStreaming).field0_0x0.DebugPtr;
    pcVar1 = *(code **)(pUVar9->_padding_ + 0x2d8);
    if (local_468.End < (FScriptContainerElement *)(local_468.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\0';
    iVar13 = 0;
    local_558.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_558.AssetPath.PackageName.Number = 0;
    local_558.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_558.AssetPath.AssetName.Number = 0;
    local_558.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.SubPathString.Data.ArrayNum = 0;
    local_558.SubPathString.Data.ArrayMax = 0;
    local_568.DataPtr = local_468.Base;
    if ((FScriptContainerElement *)local_468.Base != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_468.Base);
      iVar13 = (int)sVar6;
    }
    local_568.Size = iVar13;
    FSoftObjectPath::SetPath(&local_558,&local_568);
    local_4f8 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_4f0,&local_558);
    if (local_558.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.SubPathString.Data.AllocatorInstance.Data);
    }
    (*pcVar1)(pUVar9,&local_4f8);
    if (local_4f0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.SubPathString.Data.AllocatorInstance.Data);
    }
    pUVar9 = (this->LevelStreaming).field0_0x0.DebugPtr;
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
    this_01 = UWorld::GetWorldPartition(this_00);
    pTVar11 = UWorldPartition::GetInstanceTransform(this_01);
    local_4c8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_4c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_4c8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_4c8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_4c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_4c8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_4c8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_4c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_4c8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_4c8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_4c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_4c8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_4c8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_4c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_4c8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_4c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_4c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_4c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_4c8,param_2,pTVar11);
    if (pUVar9->bHasSetLevelTransform == false) {
      pUVar9->_padding_ = (longlong)local_4c8.Rotation.XY.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Rotation.XY.m128d_f64[1];
      pUVar9->_padding_ = (longlong)local_4c8.Rotation.ZW.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Rotation.ZW.m128d_f64[1];
      pUVar9->_padding_ = (longlong)local_4c8.Translation.XY.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Translation.XY.m128d_f64[1];
      pUVar9->_padding_ = (longlong)local_4c8.Translation.ZW.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Translation.ZW.m128d_f64[1];
      pUVar9->_padding_ = (longlong)local_4c8.Scale3D.XY.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Scale3D.XY.m128d_f64[1];
      pUVar9->_padding_ = (longlong)local_4c8.Scale3D.ZW.m128d_f64[0];
      pUVar9->_padding_ = (longlong)local_4c8.Scale3D.ZW.m128d_f64[1];
      pUVar9->bHasSetLevelTransform = true;
    }
    *(char *)&((this->LevelStreaming).field0_0x0.DebugPtr)->_padding_ = (char)this->_padding_;
    UWorldPartitionLevelStreamingDynamic::Initialize
              ((this->LevelStreaming).field0_0x0.DebugPtr,this);
    iVar13 = local_528.Data.ArrayNum + -1;
    if (local_528.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    pFVar12 = ::FName::FName(&local_538,iVar13,(wchar_t *)local_528.Data.AllocatorInstance.Data,
                             FNAME_Add);
    *(FName *)((longlong)&((this->LevelStreaming).field0_0x0.DebugPtr)->_padding_ + 4) = *pFVar12;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    if (2 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(&local_530,(FString *)&local_568);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if ((FScriptContainerElement *)local_568.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.DataPtr);
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

// CreateLevelStreaming @ 148ac3940

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

UWorldPartitionLevelStreamingDynamic * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::CreateLevelStreaming
          (UWorldPartitionRuntimeLevelStreamingCell *this,FString *param_1,FSoftObjectPath *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UWorld *this_00;
  UWorld *pUVar5;
  UWorld *this_01;
  UPackage *pUVar6;
  UClass *pUVar7;
  UWorldPartitionLevelStreamingDynamic *pUVar8;
  FSoftObjectPath *pFVar9;
  UWorldPartition *this_02;
  TTransform<double> *pTVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  undefined1 auStackY_2c8 [32];
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  FSoftObjectPath local_278;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  TStringView<wchar_t> local_1f8;
  FString local_1e8;
  undefined8 local_1d8;
  FSoftObjectPath local_1d0;
  undefined8 local_1b0;
  FSoftObjectPath local_1a8;
  FSoftObjectPath local_188;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
  pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x70))(&this->_padding_);
  if (PRIVATE_GIsRunningCommandlet != false) {
    pUVar5 = this_00;
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
  local_258 = (FName)this->_padding_;
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  ::FName::ToString(&local_258,&local_238);
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"WorldPartitionLevelStreaming_%s");
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  bVar4 = UWorld::IsGameWorld(this_01);
  if (bVar4) {
    pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
    FPackageName::GetShortName(&local_228,pUVar6);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"_%s");
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if (local_168.End < local_168.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_168,1);
  }
  *local_168.CurPos = L'\0';
  ::FName::FName(&local_250,local_168.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  pUVar7 = UWorldPartitionLevelStreamingDynamic::StaticClass();
  pUVar8 = NewObject<UWorldPartitionLevelStreamingDynamic>
                     ((UObject *)pUVar5,pUVar7,local_250,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_240 = (FName)this_00->_padding_;
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InPackageName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeLevelStreamingCell.cpp"
                         ,0xc6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar8 = (UWorldPartitionLevelStreamingDynamic *)(*pcVar2)();
    return pUVar8;
  }
  local_280 = (param_1->Data).ArrayNum;
  lVar12 = (longlong)local_280;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_288.Data = (FScriptContainerElement *)0x0;
  if (local_280 == 0) {
    local_27c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_280,0,&local_288,local_280,&local_27c);
    memcpy(local_288.Data,pFVar1,lVar12 * 2);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_280 != 0) {
    FVar11.Data = local_288.Data;
  }
  ::FName::FName(&local_248,(wchar_t *)FVar11.Data);
  *(FName *)((longlong)&pUVar8->_padding_ + 4) = local_248;
  if ((param_2->AssetPath).PackageName == (FName)0x0) {
    ::FName::ToString(&local_240,&local_1e8);
    ::FString::PrintfImpl(&local_218,L"%s.%s");
    local_208 = local_218.Data.AllocatorInstance.Data;
    local_278.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_278.AssetPath.PackageName.Number = 0;
    local_278.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_278.AssetPath.AssetName.Number = 0;
    local_278.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iStack_200 = local_218.Data.ArrayNum + -1;
    local_278.SubPathString.Data.ArrayNum = 0;
    local_278.SubPathString.Data.ArrayMax = 0;
    if (local_218.Data.ArrayNum == 0) {
      iStack_200 = 0;
    }
    local_1f8._12_4_ = uStack_1fc;
    local_1f8.Size = iStack_200;
    local_1f8.DataPtr = (wchar_t *)local_218.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_278,&local_1f8);
    local_1b0 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_1a8,&local_278);
    if (local_278.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8,&local_1b0);
    local_1d0.SubPathString.Data.AllocatorInstance.Data =
         local_1a8.SubPathString.Data.AllocatorInstance.Data;
  }
  else {
    pcVar2 = *(code **)(pUVar8->_padding_ + 0x2d8);
    pFVar9 = FSoftObjectPath::FSoftObjectPath(&local_188,param_2);
    local_1d8 = 0;
    FSoftObjectPath::FSoftObjectPath(&local_1d0,pFVar9);
    pFVar1 = (pFVar9->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (*pcVar2)(pUVar8,&local_1d8);
  }
  if (local_1d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.SubPathString.Data.AllocatorInstance.Data);
  }
  this_02 = UWorld::GetWorldPartition(this_00);
  pTVar10 = UWorldPartition::GetInstanceTransform(this_02);
  dVar3 = (pTVar10->Rotation).XY.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Rotation).XY.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  dVar3 = (pTVar10->Rotation).ZW.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Rotation).ZW.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  dVar3 = (pTVar10->Translation).XY.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Translation).XY.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  dVar3 = (pTVar10->Translation).ZW.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Translation).ZW.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  dVar3 = (pTVar10->Scale3D).XY.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Scale3D).XY.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  dVar3 = (pTVar10->Scale3D).ZW.m128d_f64[1];
  pUVar8->_padding_ = (longlong)(pTVar10->Scale3D).ZW.m128d_f64[0];
  pUVar8->_padding_ = (longlong)dVar3;
  *(char *)&pUVar8->_padding_ = (char)this->_padding_;
  UWorldPartitionLevelStreamingDynamic::Initialize(pUVar8,this);
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  return pUVar8;
}

// Deactivate @ 148ac41b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::Deactivate(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  UWorldPartitionLevelStreamingDynamic *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  ELevelStreamingState EVar4;
  FString local_18;
  
  if (((((this->LevelStreaming).field0_0x0.DebugPtr == (UWorldPartitionLevelStreamingDynamic *)0x0)
       && (cVar2 = (**(code **)(this->_padding_ + 0x2f0))(), cVar2 == '\0')) &&
      (*(char *)((longlong)&this->_padding_ + 2) == '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LevelStreaming || IsAlwaysLoaded() || GetIsCustomHLODPlaceholderCell()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeLevelStreamingCell.cpp"
                         ,0x2e8,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
      (**(code **)(this->_padding_ + 0x360))(this);
    }
    return;
  }
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00);
  if (((cVar2 == '\0') &&
      (EVar4 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this_00),
      EVar4 != FailedToLoad)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeLoaded() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x2a1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar2 = (**(code **)(this_00->_padding_ + 0x2f0))(this_00);
  if (((cVar2 == '\0') &&
      (EVar4 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this_00),
      EVar4 != FailedToLoad)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeVisible() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x2a2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this_00,false);
  return;
}

// GetActors @ 148acaf50

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetActors
          (UWorldPartitionRuntimeLevelStreamingCell *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentState @ 148accba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EWorldPartitionRuntimeCellState __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetCurrentState
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  UWorldPartitionLevelStreamingDynamic *this_00;
  ELevelStreamingState EVar1;
  char cVar2;
  
  this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (this_00 != (UWorldPartitionLevelStreamingDynamic *)0x0) {
    EVar1 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this_00);
    if (EVar1 == LoadedVisible) {
      return Activated;
    }
    if (Loading < EVar1) {
      return Loaded;
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x2f0))(this);
  return -(cVar2 != '\0') & Activated;
}

// GetDebugColor @ 148accf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLinearColor * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetDebugColor
          (UWorldPartitionRuntimeLevelStreamingCell *this,FLinearColor *__return_storage_ptr__,
          EWorldPartitionRuntimeCellVisualizeMode param_1)

{
  float fVar1;
  UWorldPartitionLevelStreamingDynamic *this_00;
  code *pcVar2;
  undefined1 auVar3 [16];
  FLinearColor_u_0 FVar4;
  FLinearColor_u_0 FVar5;
  FLinearColor FVar6;
  FLinearColor FVar7;
  FLinearColor FVar8;
  FLinearColor FVar9;
  bool bVar10;
  FColor FVar11;
  int iVar12;
  uint uVar13;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 extraout_var;
  FLinearColor *pFVar15;
  int iVar16;
  int iVar17;
  TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar18;
  uint uVar19;
  uint uVar20;
  TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStackY_158 [32];
  undefined1 local_108 [12];
  undefined8 uStack_fc;
  FLinearColor_u_0 local_e8;
  FLinearColor_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  ulonglong local_a8;
  byte *pbVar14;
  
  fVar1 = __real_3f800000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (param_1 == StreamingPriority) {
    fVar22 = *(float *)((longlong)&this->_padding_ + 4);
    if ((fVar22 < 0.0) || (__real_3f800000 < fVar22)) {
      (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent;
    }
    else {
      fVar22 = __real_3f800000 - fVar22;
      fVar22 = fVar22 * fVar22 * fVar22;
      if (FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode == 2) {
        (__return_storage_ptr__->field0_0x0)._s_0.R = fVar22;
        (__return_storage_ptr__->field0_0x0)._s_0.G = fVar22;
        (__return_storage_ptr__->field0_0x0)._s_0.B = fVar22;
        (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
      }
      else {
        pTVar18 = &Colors;
        iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c);
        if ((iVar12 < ::_TSS0) &&
           (_Init_thread_header(&::_TSS0), FVar9 = FLinearColor::Yellow, FVar8 = FLinearColor::Blue,
           FVar7 = FLinearColor::Green, FVar6 = FLinearColor::Red, iVar12 = extraout_EAX,
           ::_TSS0 == -1)) {
          UE::Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
                    (0x10,4,4,0,&Colors.AllocatorInstance,4,&Colors.ArrayMax);
          local_e8 = FVar8.field0_0x0;
          pTVar21 = &Colors;
          local_d8 = FVar7.field0_0x0;
          if (Colors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0) {
            pTVar21 = (TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)Colors.AllocatorInstance.SecondaryData;
          }
          local_c8 = FVar9.field0_0x0;
          local_b8 = FVar6.field0_0x0;
          *(FLinearColor_u_0 *)pTVar21 = (FLinearColor_u_0_s_0)FVar8.field0_0x0;
          ((FLinearColor_u_0 *)((longlong)pTVar21 + 0x10))->_s_0 =
               (FLinearColor_u_0_s_0)FVar7.field0_0x0;
          ((FLinearColor_u_0 *)((longlong)pTVar21 + 0x20))->_s_0 =
               (FLinearColor_u_0_s_0)FVar9.field0_0x0;
          ((FLinearColor_u_0 *)((longlong)pTVar21 + 0x30))->_s_0 =
               (FLinearColor_u_0_s_0)FVar6.field0_0x0;
          atexit(`UWorldPartitionRuntimeLevelStreamingCell::GetDebugColor'::__l8::
                 _dynamic_atexit_destructor_for__Colors__);
          _Init_thread_footer(&::_TSS0);
          iVar12 = extraout_EAX_00;
        }
        iVar17 = Colors.ArrayNum;
        if (fVar1 <= fVar22) {
          fVar22 = fVar1;
        }
        uVar19 = iVar17 - 1;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        fVar22 = fVar22 * (float)(int)uVar19;
        iVar16 = (int)fVar22;
        fVar23 = fVar22;
        if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar22)) {
          auVar24._4_4_ = fVar22;
          auVar24._0_4_ = fVar22;
          auVar24._8_8_ = 0;
          uVar13 = movmskps(iVar12,auVar24);
          fVar23 = (float)(int)(iVar16 - (uVar13 & 1));
        }
        if ((int)(fVar22 + fVar1) < (int)uVar19) {
          uVar19 = (int)(fVar22 + fVar1);
        }
        uVar13 = 0;
        if ((int)uVar19 < iVar17) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar2 = (code *)swi(3);
            pFVar15 = (FLinearColor *)(*pcVar2)();
            return pFVar15;
          }
          iVar17 = Colors.ArrayNum;
        }
        pTVar21 = &Colors;
        if (Colors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0) {
          pTVar21 = (TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
                    )Colors.AllocatorInstance.SecondaryData;
        }
        uVar13 = iVar17 - 1U;
        if ((int)fVar22 < (int)(iVar17 - 1U)) {
          uVar13 = (int)fVar22;
        }
        uVar20 = 0;
        if ((int)uVar13 < iVar17) {
          uVar20 = ~uVar13 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          pFVar15 = (FLinearColor *)(*pcVar2)();
          return pFVar15;
        }
        if (Colors.AllocatorInstance.SecondaryData != (ForElementType<FLinearColor>)0x0) {
          pTVar18 = (TArray<FLinearColor,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
                    )Colors.AllocatorInstance.SecondaryData;
        }
        FLinearColor::LerpUsingHSV
                  (__return_storage_ptr__,
                   (FLinearColor *)((longlong)(int)uVar13 * 0x10 + (longlong)pTVar18),
                   (FLinearColor *)((longlong)(int)uVar19 * 0x10 + (longlong)pTVar21),
                   fVar22 - fVar23);
      }
    }
  }
  else if (param_1 == StreamingStatus) {
    this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
    if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
      auVar3._8_4_ = FLinearColor::Black.field0_0x0._s_0.B;
      auVar3._0_8_ = CONCAT44(FLinearColor::Black.field0_0x0._s_0.G,
                              FLinearColor::Black.field0_0x0._s_0.R);
      auVar3._12_4_ = FLinearColor::Black.field0_0x0._s_0.A;
      uStack_fc = auVar3._8_8_;
      *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
           CONCAT44(FLinearColor::Black.field0_0x0._s_0.G,FLinearColor::Black.field0_0x0._s_0.R);
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_fc;
    }
    else {
      ULevelStreaming::GetLevelStreamingStatus((ULevelStreaming *)this_00);
      FVar11 = ULevelStreaming::GetLevelStreamingStatusColor((EStreamingStatus)local_108);
      pbVar14 = (byte *)CONCAT44(extraout_var,FVar11.field0_0x0);
      fVar1 = FLinearColor::sRGBToLinearTable[*pbVar14];
      fVar22 = (float)pbVar14[3] * __real_3b808081;
      *(ulonglong *)&__return_storage_ptr__->field0_0x0 =
           CONCAT44(FLinearColor::sRGBToLinearTable[pbVar14[1]],
                    FLinearColor::sRGBToLinearTable[pbVar14[2]]);
      *(ulonglong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = CONCAT44(fVar22,fVar1);
    }
  }
  else if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) <
            `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
            ::__l2::_thread_safe_static_guard_0__) &&
          (_Init_thread_header(&`public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                                ::__l2::_thread_safe_static_guard_0__),
          `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
    ::__l2::DefaultColor.field0_0x0._s_0.R = FLinearColor::Black.field0_0x0._s_0.R;
    `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
    ::__l2::DefaultColor.field0_0x0._s_0.B = FLinearColor::Black.field0_0x0._s_0.B;
    `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
    ::__l2::DefaultColor.field0_0x0._s_0.G = FLinearColor::Black.field0_0x0._s_0.G;
    `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
    ::__l2::DefaultColor.field0_0x0._s_0.A = 0.25;
    _Init_thread_footer(&`public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    FVar5._s_0.G = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.G;
    FVar5._s_0.R = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.R;
    FVar5._s_0.B = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.B;
    FVar5._s_0.A = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.A;
    __return_storage_ptr__->field0_0x0 = FVar5;
  }
  else {
    FVar4._s_0.G = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.G;
    FVar4._s_0.R = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.R;
    FVar4._s_0.B = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.B;
    FVar4._s_0.A = `public:_virtual_struct_FLinearColor___cdecl_UWorldPartitionRuntimeCell::GetDebugColor(EWorldPartitionRuntimeCellVisualizeMode)const___ptr64'
                   ::__l2::DefaultColor.field0_0x0._s_0.A;
    __return_storage_ptr__->field0_0x0 = FVar4;
  }
  return __return_storage_ptr__;
}

// GetLevel @ 148acdcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetLevel(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  UWorldPartitionLevelStreamingDynamic *pUVar1;
  
  pUVar1 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (pUVar1 != (UWorldPartitionLevelStreamingDynamic *)0x0) {
    return (ULevel *)pUVar1->_padding_;
  }
  return (ULevel *)0x0;
}

// GetLevelPackageName @ 148acdd40

FName __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetLevelPackageName
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  FName in_RDX;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2e0))();
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetLevelStreaming @ 148acdd80

UWorldPartitionLevelStreamingDynamic * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetLevelStreaming
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  return (this->LevelStreaming).field0_0x0.DebugPtr;
}

// GetOrCreateLevelStreaming @ 148ace4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartitionLevelStreamingDynamic * __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetOrCreateLevelStreaming
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  UWorldPartitionLevelStreamingDynamic *pUVar8;
  UWorld *pUVar9;
  UWorldPartition *this_00;
  UWorld *pUVar10;
  TTransform<double> *pTVar11;
  UClass *pUVar12;
  ULevel *this_01;
  FString *pFVar13;
  UPackage *pUVar14;
  FName *this_02;
  char *pcVar15;
  int iVar16;
  wchar_t *pwVar17;
  char *pcVar18;
  char *pcVar19;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  code *local_148;
  undefined8 uStack_140;
  FSoftObjectPath local_138;
  FString local_118;
  FString local_108;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  code *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  FSoftObjectPath local_80;
  FString local_60 [2];
  
  bVar7 = false;
  iVar16 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (((((this->LevelStreaming).field0_0x0.DebugPtr == (UWorldPartitionLevelStreamingDynamic *)0x0)
       && (cVar5 = (**(code **)(this->_padding_ + 0x2f0))(), cVar5 == '\0')) &&
      (*(char *)((longlong)&this->_padding_ + 2) == '\0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LevelStreaming || IsAlwaysLoaded() || GetIsCustomHLODPlaceholderCell()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeLevelStreamingCell.cpp"
                         ,0x282,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UWorldPartitionLevelStreamingDynamic *)(*pcVar3)();
    return pUVar8;
  }
  if ((this->LevelStreaming).field0_0x0.DebugPtr != (UWorldPartitionLevelStreamingDynamic *)0x0) {
    pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
    this_00 = UWorld::GetWorldPartition(pUVar9);
    pUVar9 = (UWorld *)(**(code **)(this->_padding_ + 0x70))(&this->_padding_);
    pUVar10 = ULevelStreaming::GetWorld
                        ((ULevelStreaming *)(this->LevelStreaming).field0_0x0.DebugPtr);
    if (pUVar10 != pUVar9) {
      pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x170))(pUVar8,0,pUVar9,0);
    }
    pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
    pTVar11 = UWorldPartition::GetInstanceTransform(this_00);
    if (pUVar8->bHasSetLevelTransform == false) {
      dVar4 = (pTVar11->Rotation).XY.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Rotation).XY.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      dVar4 = (pTVar11->Rotation).ZW.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Rotation).ZW.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      dVar4 = (pTVar11->Translation).XY.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Translation).XY.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      dVar4 = (pTVar11->Translation).ZW.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Translation).ZW.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      dVar4 = (pTVar11->Scale3D).XY.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Scale3D).XY.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      dVar4 = (pTVar11->Scale3D).ZW.m128d_f64[1];
      pUVar8->_padding_ = (longlong)(pTVar11->Scale3D).ZW.m128d_f64[0];
      pUVar8->_padding_ = (longlong)dVar4;
      pUVar8->bHasSetLevelTransform = true;
    }
    pUVar12 = Z_Construct_UClass_ULevel_NoRegister();
    this_01 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar12);
    bVar6 = ULevel::IsInstancedLevel(this_01);
    if (bVar6) {
      pFVar13 = ULevelStreaming::GetWorldAssetPackageName
                          ((ULevelStreaming *)(this->LevelStreaming).field0_0x0.DebugPtr,&local_c8);
      pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
      pFVar13 = ::FString::FString(local_60,pFVar13);
      local_f8 = (pFVar13->Data).AllocatorInstance.Data;
      iVar1 = (pFVar13->Data).ArrayNum;
      iStack_f0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_f0 = 0;
      }
      local_d8._12_4_ = uStack_ec;
      local_d8.Size = iStack_f0;
      local_d8.DataPtr = (wchar_t *)local_f8;
      bVar6 = ::FName::Equals(*(FName *)((longlong)&pUVar8->_padding_ + 4),&local_d8);
      pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      bVar7 = true;
      if (!bVar6) goto LAB_148ace684;
      bVar6 = true;
    }
    else {
LAB_148ace684:
      bVar6 = false;
    }
    if ((bVar7) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pUVar14 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      local_res8 = (FName)pUVar14->_padding_;
      ::FName::ToString(&local_res8,&local_108);
      if (local_108.Data.ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        iVar16 = local_108.Data.ArrayNum + -1;
        pwVar17 = (wchar_t *)local_108.Data.AllocatorInstance.Data;
      }
      FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar17);
      pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
      this_02 = (FName *)(**(code **)(pUVar8->_padding_ + 0x2e0))(pUVar8,local_res20);
      ::FName::GetPlainNameString(this_02,&local_a8);
      ::FString::PrintfImpl(&local_118,L"%s_LevelInstance_%08x");
      local_e8 = local_118.Data.AllocatorInstance.Data;
      local_138.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_138.AssetPath.PackageName.Number = 0;
      local_138.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_138.AssetPath.AssetName.Number = 0;
      local_138.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.SubPathString.Data.ArrayNum = 0;
      local_138.SubPathString.Data.ArrayMax = 0;
      iStack_e0 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iStack_e0 = 0;
      }
      local_b8._12_4_ = uStack_dc;
      local_b8.Size = iStack_e0;
      local_b8.DataPtr = (wchar_t *)local_118.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_138,&local_b8);
      local_88 = 0;
      FSoftObjectPath::FSoftObjectPath(&local_80,&local_138);
      if (local_138.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
      (**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8,&local_88);
      if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (pUVar8 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    return (UWorldPartitionLevelStreamingDynamic *)0x0;
  }
  pcVar15 = strstr("&UWorldPartitionRuntimeLevelStreamingCell::OnLevelShown","::");
  pcVar19 = &DAT_00000002;
  if (pcVar15 == (char *)0x0) {
LAB_148ace84a:
    pcVar18 = &DAT_00000002;
LAB_148ace84d:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UWorldPartitionLevelStreamingDynamic *)(*pcVar3)();
      return pUVar8;
    }
  }
  else {
    do {
      pcVar18 = pcVar15;
      pcVar15 = strstr(pcVar18 + 1,"::");
    } while (pcVar15 != (char *)0x0);
    if (pcVar18 == (char *)0x0) goto LAB_148ace84a;
    pcVar18 = pcVar18 + 2;
    if (*pcVar18 == '0') goto LAB_148ace84d;
  }
  ::FName::FName(&local_res10,pcVar18);
  uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
  local_148 = OnLevelShown;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UWorldPartitionRuntimeLevelStreamingCell_const_>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar8->_padding_,
             this,(pmf_f2445691 *)&local_148,local_res10);
  pUVar8 = (this->LevelStreaming).field0_0x0.DebugPtr;
  pcVar15 = strstr("&UWorldPartitionRuntimeLevelStreamingCell::OnLevelHidden","::");
  if (pcVar15 != (char *)0x0) {
    do {
      pcVar18 = pcVar15;
      pcVar15 = strstr(pcVar18 + 1,"::");
    } while (pcVar15 != (char *)0x0);
    if ((pcVar18 != (char *)0x0) && (pcVar19 = pcVar18 + 2, pcVar18[2] != '0')) goto LAB_148ace948;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UWorldPartitionLevelStreamingDynamic *)(*pcVar3)();
    return pUVar8;
  }
LAB_148ace948:
  ::FName::FName(&local_res18,pcVar19);
  local_148 = OnLevelHidden;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  local_98 = OnLevelHidden;
  uStack_90 = uStack_140;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddUniqueDynamic<UWorldPartitionRuntimeLevelStreamingCell_const_>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar8->_padding_,
             this,(pmf_f2445691 *)&local_98,local_res18);
  return (this->LevelStreaming).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 148acfc10

UClass * __cdecl UWorldPartitionRuntimeLevelStreamingCell::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionRuntimeLevelStreamingCell",
               &Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionRuntimeLevelStreamingCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionRuntimeLevelStreamingCell>,local_res8,
               UWorldPartitionRuntimeCell::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.InnerSingleton;
}

// GetStreamingStatus @ 148ad1990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EStreamingStatus __thiscall
UWorldPartitionRuntimeLevelStreamingCell::GetStreamingStatus
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  FPlatformRWLock *SRWLock;
  ELevelStreamingState EVar1;
  UWorldPartitionLevelStreamingDynamic *this_00;
  code *pcVar2;
  bool bVar3;
  EStreamingStatus EVar4;
  UWorld *pUVar5;
  FName *pFVar6;
  UPackage *pUVar7;
  undefined1 auStackX_8 [8];
  
  this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    return LEVEL_Unloaded;
  }
  SRWLock = (FPlatformRWLock *)&this_00->_padding_;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  EVar1 = *(ELevelStreamingState *)&this_00->_padding_;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (EVar1 == FailedToLoad) {
    return LEVEL_FailedToLoad;
  }
  if (EVar1 == MakingInvisible) {
    return LEVEL_MakingInvisible;
  }
  if ((((TObjectPtr<ULevel> *)&this_00->_padding_)->field0_0x0).DebugPtr == (ULevel *)0x0) {
    if (EVar1 == Loading) {
      return LEVEL_Loading;
    }
    if ((Unloaded < EVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalState == ELevelStreamingState::Removed || LocalState == ELevelStreamingState::Unloaded"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                           ,0x98d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if (GIsGarbageCollecting == false) {
      pFVar6 = (FName *)(**(code **)(this_00->_padding_ + 0x2e0))(this_00,auStackX_8);
      pUVar7 = FindObjectFast<UPackage>((UObject *)0x0,*pFVar6,None,RF_NoFlags);
      pUVar5 = (UWorld *)0x0;
      if (pUVar7 != (UPackage *)0x0) {
        pUVar5 = UWorld::FindWorldInPackage(pUVar7);
      }
      return (EStreamingStatus)(pUVar5 != (UWorld *)0x0);
    }
    return LEVEL_Unloaded;
  }
  if (EVar1 == LoadedVisible) {
    return LEVEL_Visible;
  }
  if (EVar1 != MakingVisible) {
    return LEVEL_Loaded;
  }
  pUVar5 = ULevelStreaming::GetWorld((ULevelStreaming *)this_00);
  bVar3 = UWorld::IsLevelMakingVisible
                    (pUVar5,(((TObjectPtr<ULevel> *)&this_00->_padding_)->field0_0x0).DebugPtr);
  return bVar3 + LEVEL_Loaded;
}

// HasActors @ 148ad2060

bool __thiscall
UWorldPartitionRuntimeLevelStreamingCell::HasActors(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  return true;
}

// Load @ 148ad4ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::Load(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorldPartitionLevelStreamingDynamic *this_00;
  UWorld *this_01;
  FString local_18;
  
  this_00 = GetOrCreateLevelStreaming(this);
  if (this_00 != (UWorldPartitionLevelStreamingDynamic *)0x0) {
    if (5 < (byte)LogLevelStreaming._0_1_) {
      ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this_00,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    cVar2 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00);
    if ((cVar2 != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ShouldBeLoaded()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                           ,0x26d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
    ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this_00,false);
    ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this_00,false);
    this_01 = ULevelStreaming::GetWorld((ULevelStreaming *)this_00);
    if (((this_01 == (UWorld *)0x0) || (bVar3 = UWorld::IsGameWorld(this_01), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PlayWorld && PlayWorld->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                           ,0x274,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UWorld::AddUniqueStreamingLevel(this_01,(ULevelStreaming *)this_00);
  }
  return;
}

// OnCellHidden @ 148ad5480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::OnCellHidden
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  bool bVar1;
  UWorld *this_00;
  UWorldPartition *this_01;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
  if (((this_00 != (UWorld *)0x0) &&
      (this_01 = UWorld::GetWorldPartition(this_00), this_01 != (UWorldPartition *)0x0)) &&
     (bVar1 = UWorldPartition::IsInitialized(this_01), bVar1)) {
    UWorldPartition::OnCellHidden(this_01,(UWorldPartitionRuntimeCell *)this);
  }
  return;
}

// OnCellShown @ 148ad55a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::OnCellShown
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
  bool bVar1;
  UWorld *this_00;
  UWorldPartition *this_01;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x78))(&this->_padding_);
  if (((this_00 != (UWorld *)0x0) &&
      (this_01 = UWorld::GetWorldPartition(this_00), this_01 != (UWorldPartition *)0x0)) &&
     (bVar1 = UWorldPartition::IsInitialized(this_01), bVar1)) {
    UWorldPartition::OnCellShown(this_01,(UWorldPartitionRuntimeCell *)this);
  }
  return;
}

// OnLevelHidden @ 148ad5620

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::OnLevelHidden
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ad5623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x360))();
  return;
}

// OnLevelShown @ 148ad5630

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::OnLevelShown
          (UWorldPartitionRuntimeLevelStreamingCell *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ad5633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x358))();
  return;
}

// SetIsAlwaysLoaded @ 148adb280

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::SetIsAlwaysLoaded
          (UWorldPartitionRuntimeLevelStreamingCell *this,bool param_1)

{
  UWorldPartitionLevelStreamingDynamic *pUVar1;
  
  pUVar1 = (this->LevelStreaming).field0_0x0.DebugPtr;
  *(bool *)&this->_padding_ = param_1;
  if (pUVar1 != (UWorldPartitionLevelStreamingDynamic *)0x0) {
    pUVar1->bShouldBeAlwaysLoaded = true;
  }
  return;
}

// SetStreamingPriority @ 148adb420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::SetStreamingPriority
          (UWorldPartitionRuntimeLevelStreamingCell *this,int param_1)

{
  UWorldPartitionLevelStreamingDynamic *this_00;
  bool bVar1;
  UWorld *this_01;
  TOptional<int> *pTVar2;
  
  this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    return;
  }
  if (*(bool *)&this_00->_padding_ == false) {
    pTVar2 = (TOptional<int> *)((longlong)&this_00->_padding_ + 4);
    if ((TOptional<int> *)&this_00->_padding_ != pTVar2) {
      pTVar2->TypedValue = (int)this_00->_padding_;
      *(bool *)&this_00->_padding_ = true;
    }
  }
  if (param_1 != (int)this_00->_padding_) {
    *(int *)&this_00->_padding_ = param_1;
    if ((*(ELevelStreamingState *)&this_00->_padding_ != Removed) &&
       (*(ELevelStreamingState *)&this_00->_padding_ != FailedToLoad)) {
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        this_01 = CastChecked<UWorld,UObject>((UObject *)this_00->_padding_);
        if (this_01 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelPriority(this_01,(ULevelStreaming *)this_00);
          return;
        }
      }
    }
  }
  return;
}

// StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell @ 148adb920

void __cdecl
UWorldPartitionRuntimeLevelStreamingCell::
StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Unload @ 148add070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionRuntimeLevelStreamingCell::Unload(UWorldPartitionRuntimeLevelStreamingCell *this)

{
  UWorldPartitionLevelStreamingDynamic *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  ELevelStreamingState EVar4;
  FString local_18;
  
  if (((((this->LevelStreaming).field0_0x0.DebugPtr == (UWorldPartitionLevelStreamingDynamic *)0x0)
       && (cVar2 = (**(code **)(this->_padding_ + 0x2f0))(), cVar2 == '\0')) &&
      (*(char *)((longlong)&this->_padding_ + 2) == '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LevelStreaming || IsAlwaysLoaded() || GetIsCustomHLODPlaceholderCell()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionRuntimeLevelStreamingCell.cpp"
                         ,0x2d5,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (this->LevelStreaming).field0_0x0.DebugPtr;
  if (this_00 == (UWorldPartitionLevelStreamingDynamic *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
      (**(code **)(this->_padding_ + 0x360))(this);
    }
    return;
  }
  if (5 < (byte)LogLevelStreaming._0_1_) {
    ULevelStreaming::GetWorldAssetPackageName((ULevelStreaming *)this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLevelStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  cVar2 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00);
  if (((cVar2 == '\0') &&
      (EVar4 = ULevelStreaming::GetLevelStreamingState((ULevelStreaming *)this_00),
      EVar4 != FailedToLoad)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShouldBeLoaded() || (GetLevelStreamingState() == ELevelStreamingState::FailedToLoad)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionLevelStreamingDynamic.cpp"
                         ,0x27f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
  ULevelStreaming::SetShouldBeVisible((ULevelStreaming *)this_00,false);
  ULevelStreaming::SetIsRequestingUnloadAndRemoval((ULevelStreaming *)this_00,true);
  return;
}

// execOnLevelHidden @ 148ae2130

void __cdecl
UWorldPartitionRuntimeLevelStreamingCell::execOnLevelHidden
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148ae2148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x360))();
  return;
}

// execOnLevelShown @ 148ae2160

void __cdecl
UWorldPartitionRuntimeLevelStreamingCell::execOnLevelShown
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000148ae2178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x358))();
  return;
}

