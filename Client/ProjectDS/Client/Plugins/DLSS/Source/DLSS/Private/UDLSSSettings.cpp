// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 7

// StaticClass @ 14de1d9c0

UClass * __cdecl UDLSSSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSSettings",
               &Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton,
               StaticRegisterNativesUDLSSSettings,0x98,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSSettings>,InternalVTableHelperCtorCaller<UDLSSSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton;
}

// UDLSSSettings @ 14de21c60

UDLSSSettings * __thiscall UDLSSSettings::UDLSSSettings(UDLSSSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowOTAUpdate = true;
  this->_padding_ = (longlong)&___7UDLSSSettings__6B_;
  (this->GenericDLSSSRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GenericDLSSSRBinaryPath).Data.ArrayNum = 0;
  (this->GenericDLSSSRBinaryPath).Data.ArrayMax = 0;
  (this->CustomDLSSSRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDLSSSRBinaryPath).Data.ArrayNum = 0;
  (this->CustomDLSSSRBinaryPath).Data.ArrayMax = 0;
  this->DLAAPreset = Default;
  this->DLSSUltraQualityPreset = Default;
  this->DLSSQualityPreset = Default;
  this->DLSSBalancedPreset = Default;
  this->DLSSPerformancePreset = Default;
  this->DLSSUltraPerformancePreset = Default;
  (this->GenericDLSSRRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GenericDLSSRRBinaryPath).Data.ArrayNum = 0;
  (this->GenericDLSSRRBinaryPath).Data.ArrayMax = 0;
  (this->CustomDLSSRRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDLSSRRBinaryPath).Data.ArrayNum = 0;
  (this->CustomDLSSRRBinaryPath).Data.ArrayMax = 0;
  this->DLAARRPreset = Default;
  this->DLSSRRUltraQualityPreset = Default;
  this->DLSSRRQualityPreset = Default;
  this->DLSSRRBalancedPreset = Default;
  this->DLSSRRPerformancePreset = Default;
  this->DLSSRRUltraPerformancePreset = Default;
  this->BiasCurrentColorStencilValue = '\b';
  this->bEnableDLSSD3D12 = true;
  this->bEnableDLSSD3D11 = true;
  this->bEnableDLSSVulkan = true;
  this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
  this->bEnableDLSSInEditorViewports = false;
  this->bEnableDLSSInPlayInEditorViewports = true;
  this->bShowDLSSSDebugOnScreenMessages = true;
  return this;
}

// UDLSSSettings @ 14de21ce0

UDLSSSettings * __thiscall
UDLSSSettings::UDLSSSettings(UDLSSSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bAllowOTAUpdate = true;
  this->_padding_ = (longlong)&___7UDLSSSettings__6B_;
  (this->GenericDLSSSRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GenericDLSSSRBinaryPath).Data.ArrayNum = 0;
  (this->GenericDLSSSRBinaryPath).Data.ArrayMax = 0;
  (this->CustomDLSSSRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDLSSSRBinaryPath).Data.ArrayNum = 0;
  (this->CustomDLSSSRBinaryPath).Data.ArrayMax = 0;
  this->DLAAPreset = Default;
  this->DLSSUltraQualityPreset = Default;
  this->DLSSQualityPreset = Default;
  this->DLSSBalancedPreset = Default;
  this->DLSSPerformancePreset = Default;
  this->DLSSUltraPerformancePreset = Default;
  (this->GenericDLSSRRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GenericDLSSRRBinaryPath).Data.ArrayNum = 0;
  (this->GenericDLSSRRBinaryPath).Data.ArrayMax = 0;
  (this->CustomDLSSRRBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDLSSRRBinaryPath).Data.ArrayNum = 0;
  (this->CustomDLSSRRBinaryPath).Data.ArrayMax = 0;
  this->DLAARRPreset = Default;
  this->DLSSRRUltraQualityPreset = Default;
  this->DLSSRRQualityPreset = Default;
  this->DLSSRRBalancedPreset = Default;
  this->DLSSRRPerformancePreset = Default;
  this->DLSSRRUltraPerformancePreset = Default;
  this->BiasCurrentColorStencilValue = '\b';
  this->bEnableDLSSD3D12 = true;
  this->bEnableDLSSD3D11 = true;
  this->bEnableDLSSVulkan = true;
  this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
  this->bEnableDLSSInEditorViewports = false;
  this->bEnableDLSSInPlayInEditorViewports = true;
  this->bShowDLSSSDebugOnScreenMessages = true;
  return this;
}

// ~UDLSSSettings @ 14de22030

void __thiscall UDLSSSettings::~UDLSSSettings(UDLSSSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDLSSSettings__6B_;
  pFVar1 = (this->CustomDLSSRRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GenericDLSSRRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomDLSSSRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GenericDLSSSRBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14de27640

UClass * __cdecl UDLSSSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSS",L"DLSSSettings",
               &Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton,
               StaticRegisterNativesUDLSSSettings,0x98,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSSettings>,InternalVTableHelperCtorCaller<UDLSSSettings>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSSettings.InnerSingleton;
}

// PostInitProperties @ 14de28990

void __thiscall UDLSSSettings::PostInitProperties(UDLSSSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UDLSSSettings *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UDLSSSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UDLSSSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUDLSSSettings @ 14de29ce0

void __cdecl UDLSSSettings::StaticRegisterNativesUDLSSSettings(void)

{
  return;
}

