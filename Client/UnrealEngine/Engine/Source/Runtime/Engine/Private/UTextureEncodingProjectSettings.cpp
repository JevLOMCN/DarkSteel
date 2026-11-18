// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14732cb60

UClass * __cdecl UTextureEncodingProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureEncodingProjectSettings",
               &Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton,
               StaticRegisterNativesUTextureEncodingProjectSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureEncodingProjectSettings>,
               InternalVTableHelperCtorCaller<UTextureEncodingProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton;
}

// UTextureEncodingProjectSettings @ 1473312c0

UTextureEncodingProjectSettings * __thiscall
UTextureEncodingProjectSettings::UTextureEncodingProjectSettings
          (UTextureEncodingProjectSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UTextureEncodingProjectSettings__6B_;
  return this;
}

// ~UTextureEncodingProjectSettings @ 1473315c0

void __thiscall
UTextureEncodingProjectSettings::~UTextureEncodingProjectSettings
          (UTextureEncodingProjectSettings *this)

{
  this->_padding_ = (longlong)&___7UTextureEncodingProjectSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147333070

UClass * __cdecl UTextureEncodingProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureEncodingProjectSettings",
               &Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton,
               StaticRegisterNativesUTextureEncodingProjectSettings,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureEncodingProjectSettings>,
               InternalVTableHelperCtorCaller<UTextureEncodingProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureEncodingProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUTextureEncodingProjectSettings @ 1473334b0

void __cdecl
UTextureEncodingProjectSettings::StaticRegisterNativesUTextureEncodingProjectSettings(void)

{
  return;
}

// UTextureEncodingProjectSettings @ 1488b1070

UTextureEncodingProjectSettings * __thiscall
UTextureEncodingProjectSettings::UTextureEncodingProjectSettings
          (UTextureEncodingProjectSettings *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bSharedLinearTextureEncoding = 0;
  this->bFinalUsesRDO = 0;
  this->bFastUsesRDO = 0;
  this->_padding_ = (longlong)&___7UTextureEncodingProjectSettings__6B_;
  this->FinalRDOLambda = '\x1e';
  this->FinalEffortLevel = Normal;
  this->FinalUniversalTiling = Disabled;
  this->FastRDOLambda = '\x1e';
  this->FastEffortLevel = Normal;
  this->FastUniversalTiling = Disabled;
  this->CookUsesSpeed = Final;
  this->EditorUsesSpeed = FinalIfAvailable;
  return this;
}

// PostInitProperties @ 1488d11f0

void __thiscall
UTextureEncodingProjectSettings::PostInitProperties(UTextureEncodingProjectSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UTextureEncodingProjectSettings *pUStack_28;
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
      (UTextureEncodingProjectSettings **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
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
  *(UTextureEncodingProjectSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

