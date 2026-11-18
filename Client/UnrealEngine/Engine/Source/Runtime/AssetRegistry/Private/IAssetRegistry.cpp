// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 37

// ~IAssetRegistry @ 142b7da70

void __thiscall IAssetRegistry::~IAssetRegistry(IAssetRegistry *this)

{
  *this = (IAssetRegistry)&___7IAssetRegistry__6B_;
  return;
}

// InitializeSerializationOptions @ 142b9b2c0

void __thiscall
IAssetRegistry::InitializeSerializationOptions
          (IAssetRegistry *this,FAssetRegistrySerializationOptions *param_1,FString *param_2,
          ESerializationTarget param_3)

{
  bool bVar1;
  FString *local_res18 [2];
  
  if ((1 < (param_2->Data).ArrayNum) &&
     (local_res18[0] = param_2,
     bVar1 = `IAssetRegistry::InitializeSerializationOptions'::__l3::<lambda_1>::operator()
                       (local_res18), !bVar1)) {
    return;
  }
  (**(code **)((longlong)*this + 0x3f0))(this,param_1,0,param_3);
  return;
}

// K2_GetAssetByObjectPath @ 142b9cb60

FAssetData * __thiscall
IAssetRegistry::K2_GetAssetByObjectPath
          (IAssetRegistry *this,FAssetData *__return_storage_ptr__,FSoftObjectPath *param_1,
          bool param_2,bool param_3)

{
  (**(code **)((longlong)*this + 0x78))();
  return __return_storage_ptr__;
}

// K2_GetDependencies @ 142b9cb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
IAssetRegistry::K2_GetDependencies
          (IAssetRegistry *this,FName param_1,FAssetRegistryDependencyOptions *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 local_68;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  bVar5 = false;
  uVar2 = 0;
  bVar4 = false;
  bVar3 = false;
  local_4c = 1;
  if (param_2->bIncludeSoftPackageReferences == false) {
    if (param_2->bIncludeHardPackageReferences != false) {
      uVar2 = 1;
      local_68 = 1;
      goto LAB_142b9cc00;
    }
  }
  else {
LAB_142b9cc00:
    bVar4 = param_2->bIncludeHardPackageReferences == false;
    bVar3 = true;
    local_68 = CONCAT11(bVar4,(undefined1)local_68);
  }
  if (param_2->bIncludeGamePackageReferences == false) {
    if (param_2->bIncludeEditorOnlyPackageReferences != false) {
      local_68 = CONCAT11(bVar4,(undefined1)local_68) | 0x200;
      goto LAB_142b9cc28;
    }
    if (bVar3) goto LAB_142b9cc34;
  }
  else {
LAB_142b9cc28:
    if (param_2->bIncludeEditorOnlyPackageReferences == false) {
      local_68 = CONCAT11(local_68._1_1_,uVar2) | 2;
    }
LAB_142b9cc34:
    local_78 = &local_68;
    cVar1 = (**(code **)((longlong)*this + 200))(this,param_1,param_3,1);
    bVar5 = cVar1 != '\0';
  }
  local_68 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  local_50 = 0;
  local_58 = (void *)0x0;
  local_4c = 1;
  if (param_2->bIncludeSearchableNames != false) {
    local_78 = &local_68;
    cVar1 = (**(code **)((longlong)*this + 200))(this,param_1,param_3,4);
    if ((cVar1 != '\0') || (bVar5 != false)) {
      bVar5 = true;
    }
  }
  local_68._0_1_ = 0;
  local_68 = 0;
  uVar2 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
    uVar2 = local_68._1_1_;
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 1;
  if (param_2->bIncludeSoftManagementReferences == false) {
    if (param_2->bIncludeHardManagementReferences == false) goto LAB_142b9cd38;
    local_68 = CONCAT11(local_68._1_1_,(undefined1)local_68) | 8;
  }
  if (param_2->bIncludeHardManagementReferences == false) {
    local_68 = CONCAT11(uVar2,(undefined1)local_68) | 0x800;
  }
  local_78 = &local_68;
  cVar1 = (**(code **)((longlong)*this + 200))(this,param_1,param_3,2);
  if ((cVar1 != '\0') || (bVar5 != false)) {
    bVar5 = true;
  }
LAB_142b9cd38:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar5;
}

// K2_GetReferencers @ 142b9cd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
IAssetRegistry::K2_GetReferencers
          (IAssetRegistry *this,FName param_1,FAssetRegistryDependencyOptions *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 local_68;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  bVar5 = false;
  uVar2 = 0;
  bVar4 = false;
  bVar3 = false;
  local_4c = 1;
  if (param_2->bIncludeSoftPackageReferences == false) {
    if (param_2->bIncludeHardPackageReferences != false) {
      uVar2 = 1;
      local_68 = 1;
      goto LAB_142b9ce00;
    }
  }
  else {
LAB_142b9ce00:
    bVar4 = param_2->bIncludeHardPackageReferences == false;
    bVar3 = true;
    local_68 = CONCAT11(bVar4,(undefined1)local_68);
  }
  if (param_2->bIncludeGamePackageReferences == false) {
    if (param_2->bIncludeEditorOnlyPackageReferences != false) {
      local_68 = CONCAT11(bVar4,(undefined1)local_68) | 0x200;
      goto LAB_142b9ce28;
    }
    if (bVar3) goto LAB_142b9ce34;
  }
  else {
LAB_142b9ce28:
    if (param_2->bIncludeEditorOnlyPackageReferences == false) {
      local_68 = CONCAT11(local_68._1_1_,uVar2) | 2;
    }
LAB_142b9ce34:
    local_78 = &local_68;
    cVar1 = (**(code **)((longlong)*this + 0xf0))(this,param_1,param_3,1);
    bVar5 = cVar1 != '\0';
  }
  local_68 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  local_50 = 0;
  local_58 = (void *)0x0;
  local_4c = 1;
  if (param_2->bIncludeSearchableNames != false) {
    local_78 = &local_68;
    cVar1 = (**(code **)((longlong)*this + 0xf0))(this,param_1,param_3,4);
    if ((cVar1 != '\0') || (bVar5 != false)) {
      bVar5 = true;
    }
  }
  local_68._0_1_ = 0;
  local_68 = 0;
  uVar2 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
    uVar2 = local_68._1_1_;
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 1;
  if (param_2->bIncludeSoftManagementReferences == false) {
    if (param_2->bIncludeHardManagementReferences == false) goto LAB_142b9cf38;
    local_68 = CONCAT11(local_68._1_1_,(undefined1)local_68) | 8;
  }
  if (param_2->bIncludeHardManagementReferences == false) {
    local_68 = CONCAT11(uVar2,(undefined1)local_68) | 0x800;
  }
  local_78 = &local_68;
  cVar1 = (**(code **)((longlong)*this + 0xf0))(this,param_1,param_3,2);
  if ((cVar1 != '\0') || (bVar5 != false)) {
    bVar5 = true;
  }
LAB_142b9cf38:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar5;
}

// RequestPauseBackgroundProcessing @ 142ba4ee0

void __thiscall IAssetRegistry::RequestPauseBackgroundProcessing(IAssetRegistry *this)

{
  return;
}

// RequestResumeBackgroundProcessing @ 142ba4f00

void __thiscall IAssetRegistry::RequestResumeBackgroundProcessing(IAssetRegistry *this)

{
  return;
}

// _getUObject @ 142bb8450

UObject * __thiscall IAssetRegistry::_getUObject(IAssetRegistry *this)

{
  return (UObject *)0x0;
}

// execGetAllAssets @ 142bb8470

void __cdecl IAssetRegistry::execGetAllAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAssetData **ppFVar3;
  int local_res8 [2];
  FAssetData *local_28;
  undefined8 local_20;
  
  local_28 = (FAssetData *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  ppFVar3 = &local_28;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar3 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xa8))(param_1,ppFVar3,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_28,(int)local_20);
  if (local_28 != (FAssetData *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetAllCachedPaths @ 142bb8590

void __cdecl IAssetRegistry::execGetAllCachedPaths(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppFVar2 = &local_18;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x148))(param_1,ppFVar2);
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAncestorClassNames @ 142bb8650

void __cdecl
IAssetRegistry::execGetAncestorClassNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  void *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = 0;
  uStack_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = (undefined4)uStack_30;
  uStack_c = uStack_30._4_4_;
  ppvVar3 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x138))(param_1,&local_18,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetAssetByObjectPath @ 142bb8770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IAssetRegistry::execGetAssetByObjectPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAssetData *pFVar2;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined8 local_90;
  undefined1 local_88 [56];
  FAssetDataTagMapSharedView local_50 [2];
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FAssetData *)
           (**(code **)(*(longlong *)param_1 + 0x80))(param_1,local_88,local_90,local_98[0] != 0);
  FAssetData::operator=(param_3,pFVar2);
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_50);
  return;
}

// execGetAssets @ 142bb88b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IAssetRegistry::execGetAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FARFilter *pFVar3;
  FAssetData **ppFVar4;
  undefined1 auStack_1c8 [32];
  int local_1a8 [2];
  FAssetData *local_1a0;
  undefined8 local_198;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FARFilter::FARFilter(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_1a0 = (FAssetData *)0x0;
  local_198 = 0;
  pFVar3 = &local_188;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar3 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8[0] = 0;
  ppFVar4 = &local_1a0;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar4 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x50))(param_1,pFVar3,ppFVar4,local_1a8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_1a0,(int)local_198);
  if (local_1a0 != (FAssetData *)0x0) {
    FMemory::Free(local_1a0);
  }
  FARFilter::~FARFilter(&local_188);
  return;
}

// execGetAssetsByClass @ 142bb8a50

void __cdecl IAssetRegistry::execGetAssetsByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAssetData **ppFVar3;
  int local_res8 [2];
  FAssetData *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_38 = 0;
  uStack_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48 = (FAssetData *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  ppFVar3 = &local_48;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar3 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = (undefined4)local_38;
  uStack_24 = local_38._4_4_;
  uStack_20 = (undefined4)uStack_30;
  uStack_1c = uStack_30._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1,&local_28,ppFVar3,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_48,(int)local_40);
  if (local_48 != (FAssetData *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetAssetsByPackageName @ 142bb8bc0

void __cdecl
IAssetRegistry::execGetAssetsByPackageName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAssetData **ppFVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  FAssetData *local_38;
  undefined8 local_30;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38 = (FAssetData *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  ppFVar3 = &local_38;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar3 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x18))
                    (param_1,local_res18,ppFVar3,bVar4,local_res10[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_38,(int)local_30);
  if (local_38 != (FAssetData *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetAssetsByPath @ 142bb8d70

void __cdecl IAssetRegistry::execGetAssetsByPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FAssetData **ppFVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  FAssetData *local_38;
  undefined8 local_30;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_38 = (FAssetData *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res8[0] = 0;
  ppFVar3 = &local_38;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar3 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x20))
                    (param_1,local_res18,ppFVar3,bVar4,local_res10[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_38,(int)local_30);
  if (local_38 != (FAssetData *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetAssetsByPaths @ 142bb8f20

void __cdecl IAssetRegistry::execGetAssetsByPaths(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  void *_Src;
  undefined1 uVar3;
  longlong lVar4;
  FAssetData **ppFVar5;
  bool bVar6;
  bool bVar7;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 *local_res18;
  FAssetData *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  local_res18 = param_3;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (FAssetData *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res8[0] = 0;
  ppFVar5 = &local_68;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar5 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
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
  _Src = local_58;
  bVar7 = local_res10[0] != 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_50;
  local_40 = (int)local_50;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x28);
  if ((int)local_50 == 0) {
    local_3c = (int)local_50;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_50,0,&local_48,(int)local_50,&local_3c);
    memcpy(local_48.Data,_Src,lVar4 << 3);
  }
  uVar3 = (*pcVar2)(param_1,&local_48,ppFVar5,bVar6,bVar7);
  *local_res18 = uVar3;
  DestructItems<FAssetData,int>(local_68,(int)local_60);
  if (local_68 != (FAssetData *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetDerivedClassNames @ 142bb9140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IAssetRegistry::execGetDerivedClassNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  void **ppvVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  undefined1 auStackY_118 [32];
  void *local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  ppvVar3 = &local_e8;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  pFVar4 = &local_88;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar4 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar5 = &local_d8;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar5 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x140))(param_1,ppvVar3,pFVar4,pFVar5);
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  uVar2 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}

// execGetInMemoryAssets @ 142bb9420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IAssetRegistry::execGetInMemoryAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FARFilter *pFVar3;
  FAssetData **ppFVar4;
  undefined1 auStack_1c8 [32];
  int local_1a8 [2];
  FAssetData *local_1a0;
  undefined8 local_198;
  FARFilter local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FARFilter::FARFilter(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_1a0 = (FAssetData *)0x0;
  local_198 = 0;
  pFVar3 = &local_188;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar3 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8[0] = 0;
  ppFVar4 = &local_1a0;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar4 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1,pFVar3,ppFVar4,local_1a8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  DestructItems<FAssetData,int>(local_1a0,(int)local_198);
  if (local_1a0 != (FAssetData *)0x0) {
    FMemory::Free(local_1a0);
  }
  FARFilter::~FARFilter(&local_188);
  return;
}

// execGetSubPaths @ 142bb95c0

void __cdecl IAssetRegistry::execGetSubPaths(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  int local_res8 [2];
  FString *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  ppFVar2 = &local_28;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_18,ppFVar2,local_res8[0] != 0);
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execHasAssets @ 142bb9730

void __cdecl IAssetRegistry::execHasAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_res10,local_res8[0] != 0);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execIsLoadingAssets @ 142bb9810

void __cdecl IAssetRegistry::execIsLoadingAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x388))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSearchAllAssets @ 142bb9850

void __cdecl IAssetRegistry::execIsSearchAllAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x238))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsSearchAsync @ 142bb9890

void __cdecl IAssetRegistry::execIsSearchAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x240))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execK2_GetAssetByObjectPath @ 142bb98d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IAssetRegistry::execK2_GetAssetByObjectPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAssetData *pFVar2;
  uchar *puVar3;
  bool bVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  int local_c8;
  int local_c4;
  uchar local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [56];
  FAssetDataTagMapSharedView local_68 [2];
  TReferenceControllerBase<1> *local_58;
  void *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c0[0] = '\0';
  local_c0[1] = '\0';
  local_c0[2] = '\0';
  local_c0[3] = '\0';
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0[8] = '\0';
  local_c0[9] = '\0';
  local_c0[10] = '\0';
  local_c0[0xb] = '\0';
  local_c0[0xc] = '\0';
  local_c0[0xd] = '\0';
  local_c0[0xe] = '\0';
  local_c0[0xf] = '\0';
  local_b0 = (void *)0x0;
  local_a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_c8 = 0;
  puVar3 = local_c0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  bVar4 = local_c8 != 0;
  local_c4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  local_d8 = local_c4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FAssetData *)(**(code **)(*(longlong *)param_1 + 0x88))(param_1,local_a0,puVar3,bVar4);
  FAssetData::operator=(param_3,pFVar2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_68);
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}

// execK2_GetDependencies @ 142bb9a90

void __cdecl IAssetRegistry::execK2_GetDependencies(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  void **ppvVar4;
  uchar local_res8 [8];
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  builtin_memcpy(local_res8,"\x01\x01\x01\x01",5);
  local_res8[5] = '\0';
  local_res8[6] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar4 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0xe8))(param_1,local_res10,puVar3,ppvVar4);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execK2_GetReferencers @ 142bb9c00

void __cdecl IAssetRegistry::execK2_GetReferencers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  void **ppvVar4;
  uchar local_res8 [8];
  undefined8 local_res10;
  void *local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  builtin_memcpy(local_res8,"\x01\x01\x01\x01",5);
  local_res8[5] = '\0';
  local_res8[6] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar4 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x108))(param_1,local_res10,puVar3,ppvVar4);
  *(undefined1 *)param_3 = uVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execPrioritizeSearchPath @ 142bb9d70

void __cdecl
IAssetRegistry::execPrioritizeSearchPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x268))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execRunAssetsThroughFilter @ 142bb9e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IAssetRegistry::execRunAssetsThroughFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAssetData **ppFVar2;
  FARFilter *pFVar3;
  undefined1 auStack_1a8 [32];
  FAssetData *local_188;
  undefined8 local_180;
  FARFilter local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188 = (FAssetData *)0x0;
  local_180 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  ppFVar2 = &local_188;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar2 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FARFilter::FARFilter(&local_178);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pFVar3 = &local_178;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar3 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x180))(param_1,ppFVar2,pFVar3);
  FARFilter::~FARFilter(&local_178);
  DestructItems<FAssetData,int>(local_188,(int)local_180);
  if (local_188 != (FAssetData *)0x0) {
    FMemory::Free(local_188);
  }
  return;
}

// execScanFilesSynchronous @ 142bb9f70

void __cdecl
IAssetRegistry::execScanFilesSynchronous(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  int local_res8 [2];
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res8[0] = 0;
  ppFVar2 = &local_18;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x220))(param_1,ppFVar2,local_res8[0] != 0);
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execScanModifiedAssetFiles @ 142bba090

void __cdecl
IAssetRegistry::execScanModifiedAssetFiles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppFVar2 = &local_18;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x278))(param_1,ppFVar2);
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execScanPathsSynchronous @ 142bba150

void __cdecl
IAssetRegistry::execScanPathsSynchronous(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString **ppFVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [2];
  FString *local_28;
  undefined8 local_20;
  
  local_28 = (FString *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  ppFVar2 = &local_28;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar2 = (FString **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
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
  (**(code **)(*(longlong *)param_1 + 0x218))(param_1,ppFVar2,bVar3,local_res10[0] != 0);
  DestructItems<FString,int>(local_28,(int)local_20);
  if (local_28 != (FString *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSearchAllAssets @ 142bba2b0

void __cdecl IAssetRegistry::execSearchAllAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,local_res8[0] != 0);
  return;
}

// execUseFilterToExcludeAssets @ 142bba350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
IAssetRegistry::execUseFilterToExcludeAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAssetData **ppFVar2;
  FARFilter *pFVar3;
  undefined1 auStack_1a8 [32];
  FAssetData *local_188;
  undefined8 local_180;
  FARFilter local_178;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_188 = (FAssetData *)0x0;
  local_180 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  ppFVar2 = &local_188;
  if ((FAssetData **)param_2->MostRecentPropertyAddress != (FAssetData **)0x0) {
    ppFVar2 = (FAssetData **)param_2->MostRecentPropertyAddress;
  }
  FARFilter::FARFilter(&local_178);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pFVar3 = &local_178;
  if ((FARFilter *)param_2->MostRecentPropertyAddress != (FARFilter *)0x0) {
    pFVar3 = (FARFilter *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 400))(param_1,ppFVar2,pFVar3);
  FARFilter::~FARFilter(&local_178);
  DestructItems<FAssetData,int>(local_188,(int)local_180);
  if (local_188 != (FAssetData *)0x0) {
    FMemory::Free(local_188);
  }
  return;
}

// execWaitForCompletion @ 142bba4a0

void __cdecl IAssetRegistry::execWaitForCompletion(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000142bba4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x248))();
  return;
}

// execWaitForPackage @ 142bba4d0

void __cdecl IAssetRegistry::execWaitForPackage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x260))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// operator() @ 1504980a0

bool __thiscall
`IAssetRegistry::InitializeSerializationOptions'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8470630944661832569>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8470630944661832569>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

