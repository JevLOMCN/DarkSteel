// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 11

// StaticClass @ 14241ad40

UClass * __cdecl UPlatformSettingsManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettingsManager",
               &Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton,
               StaticRegisterNativesUPlatformSettingsManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlatformSettingsManager>,
               InternalVTableHelperCtorCaller<UPlatformSettingsManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton;
}

// UPlatformSettingsManager @ 14241bea0

UPlatformSettingsManager * __thiscall
UPlatformSettingsManager::UPlatformSettingsManager
          (UPlatformSettingsManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformSettingsManager__6B_;
  *(undefined8 *)&this->SettingsMap = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x8 = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x20 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x28 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsMap).field_0x34 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SettingsMap).field_0x40 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  (this->IniPlatformName).ComparisonIndex = 0;
  (this->IniPlatformName).Number = 0;
  return this;
}

// UPlatformSettingsManager @ 14241bf00

UPlatformSettingsManager * __thiscall
UPlatformSettingsManager::UPlatformSettingsManager
          (UPlatformSettingsManager *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformSettingsManager__6B_;
  *(undefined8 *)&this->SettingsMap = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x8 = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x20 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x28 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SettingsMap).field_0x34 = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x40 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  ::FName::FName(&this->IniPlatformName,"Windows");
  return this;
}

// ~UPlatformSettingsManager @ 14241c120

void __thiscall UPlatformSettingsManager::~UPlatformSettingsManager(UPlatformSettingsManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPlatformSettingsManager__6B_;
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettingsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SettingsMap);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateSettingsObjectForPlatform @ 14241c4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPlatformSettings * __thiscall
UPlatformSettingsManager::CreateSettingsObjectForPlatform
          (UPlatformSettingsManager *this,TSubclassOf<UPlatformSettings> param_1,FName param_2)

{
  longlong lVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  UClass *pUVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UPackage *pUVar11;
  UPlatformSettings *pUVar12;
  FUObjectItem *this_00;
  FString *pFVar13;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  UClass *pUVar18;
  FName local_res18 [2];
  undefined1 auStack_128 [32];
  FName local_108;
  TObjectPtr<UClass>_u_0 local_100;
  FName *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_res18[0] = param_2;
  pFVar7 = ::FName::ToString(local_res18,&local_e0);
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  pUVar18 = (UClass *)0x0;
  pUVar10 = pUVar18;
  if ((lVar1 != 0) && (pUVar8 = UPlatformSettings::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  local_108 = (FName)pUVar10->_padding_;
  ::FName::ToString(&local_108,(FString *)&local_100.ObjectPtr);
  ::FString::ConcatFC(&local_d0,(FString *)&local_100.ObjectPtr,L"_");
  ::FString::ConcatFF(&local_f0,&local_d0,pFVar7);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_100.DebugPtr != (UClass *)0x0) {
    FMemory::Free(local_100.DebugPtr);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar16.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar9 = ::FName::FName(&local_108,(wchar_t *)FVar16.Data);
  lVar1 = *(longlong *)param_1.Class.field0_0x0;
  FVar2 = *pFVar9;
  if ((lVar1 != 0) && (pUVar10 = UPlatformSettings::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar6 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar10->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar18 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar11 = GetTransientPackage();
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar10 = UPlatformSettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar10,pUVar18);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar18);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar11;
  local_b8._16_8_ = FVar2;
  pUVar12 = (UPlatformSettings *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar15 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar12->_padding_ + 4))
  ;
  FUObjectItem::SetRootFlags(this_00,RootSet);
  pUVar12->ConfigPlatformName = local_res18[0];
  pFVar13 = ::FName::ToString(local_res18,&local_e0);
  pFVar7 = &pUVar12->ConfigPlatformNameStr;
  if (pFVar7 != pFVar13) {
    pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar7->Data).AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar12->ConfigPlatformNameStr).Data.ArrayNum = (pFVar13->Data).ArrayNum;
    (pUVar12->ConfigPlatformNameStr).Data.ArrayMax = (pFVar13->Data).ArrayMax;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  pTVar14 = FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos();
  FVar2 = local_res18[0];
  uVar5 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
  if (*(int *)&pTVar14->field_0x8 != *(int *)&pTVar14->field_0x34) {
    puVar17 = *(undefined1 **)&pTVar14->field_0x40;
    if (*(undefined1 **)&pTVar14->field_0x40 == (undefined1 *)0x0) {
      puVar17 = &pTVar14->field_0x38;
    }
    iVar6 = *(int *)(puVar17 +
                    (ulonglong)(*(int *)&pTVar14->field_0x48 - 1U & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)((longlong)iVar6 * 0xa0 + *(longlong *)pTVar14) == FVar2) goto LAB_14241c778;
        iVar6 = *(int *)((longlong)iVar6 * 0xa0 + 0x98 + *(longlong *)pTVar14);
      } while (iVar6 != -1);
    }
  }
  local_f8 = local_res18;
  local_100 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  bVar4 = `UPlatformSettingsManager::CreateSettingsObjectForPlatform'::__l3::<lambda_1>::operator()
                    (&local_100);
  if (bVar4) {
LAB_14241c778:
    (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
    (**(code **)(pUVar12->_padding_ + 0x98))(pUVar12);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return pUVar12;
}

// GetCurrentPlatformName @ 14241cdd0

FName __thiscall UPlatformSettingsManager::GetCurrentPlatformName(UPlatformSettingsManager *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->IniPlatformName;
  return in_RDX;
}

// GetPrivateStaticClass @ 14241d030

UClass * __cdecl UPlatformSettingsManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"PlatformSettingsManager",
               &Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton,
               StaticRegisterNativesUPlatformSettingsManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlatformSettingsManager>,
               InternalVTableHelperCtorCaller<UPlatformSettingsManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformSettingsManager.InnerSingleton;
}

// GetSettingsForPlatform @ 14241d110

UPlatformSettings * __thiscall
UPlatformSettingsManager::GetSettingsForPlatform
          (UPlatformSettingsManager *this,TSubclassOf<UPlatformSettings> param_1)

{
  FName FVar1;
  UPlatformSettings *pUVar2;
  UObject *local_res8;
  
  FVar1 = this->IniPlatformName;
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pUVar2 = GetSettingsForPlatform(this,(TSubclassOf<UPlatformSettings>)&local_res8,FVar1);
  return pUVar2;
}

// GetSettingsForPlatform @ 14241d160

UPlatformSettings * __thiscall
UPlatformSettingsManager::GetSettingsForPlatform
          (UPlatformSettingsManager *this,TSubclassOf<UPlatformSettings> param_1,FName param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  UPlatformSettings *pUVar8;
  FPlatformSettingsInstances *pFVar9;
  uint uVar10;
  UObject *local_res8;
  FName local_res18;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  local_res18 = param_2;
  if (lVar2 != 0) {
    pUVar7 = UPlatformSettings::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_14241d1da;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("SettingsClass != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\DeveloperSettings\\Private\\Engine\\PlatformSettingsManager.cpp"
                     ,0x29,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UPlatformSettings *)(*pcVar4)();
    return pUVar8;
  }
LAB_14241d1da:
  pUVar3 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar10 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  pFVar9 = TMapBase<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>_>
           ::FindOrAddImpl<TSubclassOf<UPlatformSettings>_const_&>
                     ((TMapBase<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSubclassOf<UPlatformSettings>,FPlatformSettingsInstances,0>_>
                       *)&this->SettingsMap,uVar10 >> 0x10 ^ uVar10,
                      (TSubclassOf<UPlatformSettings> *)param_1.Class.field0_0x0);
  FVar5 = local_res18;
  if (local_res18 != this->IniPlatformName) {
    uVar10 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    pFVar9 = (FPlatformSettingsInstances *)
             TMapBase<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
                         *)&pFVar9->OtherPlatforms,uVar10 + FVar5.Number,&local_res18);
  }
  FVar5 = local_res18;
  pUVar8 = (pFVar9->PlatformInstance).field0_0x0.DebugPtr;
  if (pUVar8 == (UPlatformSettings *)0x0) {
    local_res8 = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    pUVar8 = CreateSettingsObjectForPlatform(this,(TSubclassOf<UPlatformSettings>)&local_res8,FVar5)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPlatformSettings *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (pFVar9->PlatformInstance).field0_0x0.DebugPtr = pUVar8;
  }
  return pUVar8;
}

// StaticRegisterNativesUPlatformSettingsManager @ 14241d6e0

void __cdecl UPlatformSettingsManager::StaticRegisterNativesUPlatformSettingsManager(void)

{
  return;
}

// operator() @ 15048c060

bool __thiscall
`UPlatformSettingsManager::CreateSettingsObjectForPlatform'::__l3::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UObjectBaseUtility *this_00;
  FString local_38;
  FString local_28;
  
  this_00 = (UObjectBaseUtility *)0x0;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5985215601910480823>);
  if (bVar5) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_28);
    plVar2 = *(longlong **)this;
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (pUVar7 = UPlatformSettings::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        this_00 = (UObjectBaseUtility *)*plVar2;
      }
    }
    UObjectBaseUtility::GetPathName(this_00,&local_38,(UObject *)0x0);
    this_00 = (UObjectBaseUtility *)&DAT_00000003;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5985215601910480823>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15048c147;
    }
  }
  bVar5 = false;
LAB_15048c147:
  if ((((ulonglong)this_00 & 2) != 0) &&
     (this_00 = (UObjectBaseUtility *)(ulonglong)((uint)this_00 & 0xfffffffd),
     local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)this_00 & 1) != 0) &&
     (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

