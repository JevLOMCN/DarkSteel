// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 8

// StaticClass @ 14e2c7800

UClass * __cdecl URenderDocPluginSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RenderDocPlugin",L"RenderDocPluginSettings",
               &Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton,
               StaticRegisterNativesURenderDocPluginSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<URenderDocPluginSettings>,
               InternalVTableHelperCtorCaller<URenderDocPluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton;
}

// URenderDocPluginSettings @ 14e2c88d0

URenderDocPluginSettings * __thiscall
URenderDocPluginSettings::URenderDocPluginSettings
          (URenderDocPluginSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
  (this->RenderDocBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderDocBinaryPath).Data.ArrayNum = 0;
  (this->RenderDocBinaryPath).Data.ArrayMax = 0;
  return this;
}

// URenderDocPluginSettings @ 14e2c8910

URenderDocPluginSettings * __thiscall
URenderDocPluginSettings::URenderDocPluginSettings
          (URenderDocPluginSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
  (this->RenderDocBinaryPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderDocBinaryPath).Data.ArrayNum = 0;
  (this->RenderDocBinaryPath).Data.ArrayMax = 0;
  return this;
}

// ~URenderDocPluginSettings @ 14e2c89d0

void __thiscall URenderDocPluginSettings::~URenderDocPluginSettings(URenderDocPluginSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URenderDocPluginSettings__6B_;
  pFVar1 = (this->RenderDocBinaryPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14e2ca2d0

FName __thiscall URenderDocPluginSettings::GetCategoryName(URenderDocPluginSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14e2ca4b0

UClass * __cdecl URenderDocPluginSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RenderDocPlugin",L"RenderDocPluginSettings",
               &Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton,
               StaticRegisterNativesURenderDocPluginSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<URenderDocPluginSettings>,
               InternalVTableHelperCtorCaller<URenderDocPluginSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderDocPluginSettings.InnerSingleton;
}

// PostInitProperties @ 14e2cb630

void __thiscall URenderDocPluginSettings::PostInitProperties(URenderDocPluginSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  URenderDocPluginSettings *pUStack_28;
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
      (URenderDocPluginSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8)
     )) {
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
  *(URenderDocPluginSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesURenderDocPluginSettings @ 14e2cbee0

void __cdecl URenderDocPluginSettings::StaticRegisterNativesURenderDocPluginSettings(void)

{
  return;
}

