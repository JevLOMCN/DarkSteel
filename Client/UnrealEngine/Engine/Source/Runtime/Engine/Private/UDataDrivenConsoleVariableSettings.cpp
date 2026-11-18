// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147a0daf0

UClass * __cdecl UDataDrivenConsoleVariableSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenConsoleVariableSettings",
               &Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton,
               StaticRegisterNativesUDataDrivenConsoleVariableSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataDrivenConsoleVariableSettings>,
               InternalVTableHelperCtorCaller<UDataDrivenConsoleVariableSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton;
}

// UDataDrivenConsoleVariableSettings @ 147a282e0

UDataDrivenConsoleVariableSettings * __thiscall
UDataDrivenConsoleVariableSettings::UDataDrivenConsoleVariableSettings
          (UDataDrivenConsoleVariableSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
  *(undefined8 *)&this->OnStageChanged = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x10 = 0;
  (this->CVarsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVarsArray).ArrayNum = 0;
  (this->CVarsArray).ArrayMax = 0;
  (this->ShadowCVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowCVars).ArrayNum = 0;
  (this->ShadowCVars).ArrayMax = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x18 = 2;
  return this;
}

// UDataDrivenConsoleVariableSettings @ 147a28330

UDataDrivenConsoleVariableSettings * __thiscall
UDataDrivenConsoleVariableSettings::UDataDrivenConsoleVariableSettings
          (UDataDrivenConsoleVariableSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
  *(undefined8 *)&this->OnStageChanged = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x10 = 0;
  (this->CVarsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CVarsArray).ArrayNum = 0;
  (this->CVarsArray).ArrayMax = 0;
  (this->ShadowCVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadowCVars).ArrayNum = 0;
  (this->ShadowCVars).ArrayMax = 0;
  *(undefined8 *)&(this->OnStageChanged).field_0x18 = 2;
  return this;
}

// ~UDataDrivenConsoleVariableSettings @ 147a2a950

void __thiscall
UDataDrivenConsoleVariableSettings::~UDataDrivenConsoleVariableSettings
          (UDataDrivenConsoleVariableSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDataDrivenConsoleVariableSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->ShadowCVars).AllocatorInstance.Data,(this->ShadowCVars).ArrayNum);
  pFVar1 = (this->ShadowCVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDataDrivenConsoleVariable,int>
            ((FDataDrivenConsoleVariable *)(this->CVarsArray).AllocatorInstance.Data,
             (this->CVarsArray).ArrayNum);
  pFVar1 = (this->CVarsArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStageChanged).field_0x8,*(int *)&(this->OnStageChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnStageChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStageChanged);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 147a4e9e0

FName __thiscall
UDataDrivenConsoleVariableSettings::GetCategoryName(UDataDrivenConsoleVariableSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Engine");
  return in_RDX;
}

// GetPrivateStaticClass @ 147a575d0

UClass * __cdecl UDataDrivenConsoleVariableSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenConsoleVariableSettings",
               &Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton,
               StaticRegisterNativesUDataDrivenConsoleVariableSettings,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataDrivenConsoleVariableSettings>,
               InternalVTableHelperCtorCaller<UDataDrivenConsoleVariableSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenConsoleVariableSettings.InnerSingleton;
}

// OnDataDrivenChange @ 147a66780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDataDrivenConsoleVariableSettings::OnDataDrivenChange(IConsoleVariable *param_1)

{
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  IConsoleManager *pIVar7;
  ForAnyElementType *pFVar8;
  ForAnyElementType local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  this = &GEngine->EngineSubsystemCollection;
  pUVar4 = UDataDrivenCVarEngineSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_147a667d7;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_147a667d7:
    pUVar5 = UDataDrivenCVarEngineSubsystem::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_147a66807;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_147a66807:
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal((FSubsystemCollectionBase *)this,pUVar4);
  if (pUVar6 != (USubsystem *)0x0) {
    pIVar7 = IConsoleManager::Get();
    pFVar8 = (ForAnyElementType *)(**(code **)((longlong)*pIVar7 + 0xd0))(pIVar7,local_18,param_1);
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = 0;
    if (&local_28 != pFVar8) {
      uVar2 = *(uint *)&pFVar8[1].Data;
      _Src = pFVar8->Data;
      local_20 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,0,&local_28,uVar2,(int *)((longlong)&local_20 + 4));
        memcpy(local_28.Data,_Src,(longlong)(int)uVar2 * 2);
      }
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar6 + 1),&local_28);
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (pFVar8->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8->Data);
    }
  }
  return;
}

// PostInitProperties @ 147a66b50

void __thiscall
UDataDrivenConsoleVariableSettings::PostInitProperties(UDataDrivenConsoleVariableSettings *this)

{
  int iVar1;
  FDataDrivenConsoleVariable *this_00;
  FDataDrivenConsoleVariable *pFVar2;
  undefined1 local_res8 [8];
  
  UObject::PostInitProperties((UObject *)this);
  iVar1 = (this->CVarsArray).ArrayNum;
  this_00 = (FDataDrivenConsoleVariable *)(this->CVarsArray).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->CVarsArray).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDataDrivenConsoleVariable,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FDataDrivenConsoleVariable::Register(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// StaticRegisterNativesUDataDrivenConsoleVariableSettings @ 147a97660

void __cdecl
UDataDrivenConsoleVariableSettings::StaticRegisterNativesUDataDrivenConsoleVariableSettings(void)

{
  return;
}

