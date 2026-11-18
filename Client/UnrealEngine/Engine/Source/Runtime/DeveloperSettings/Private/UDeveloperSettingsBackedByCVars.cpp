// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 7

// StaticClass @ 14241aaf0

UClass * __cdecl UDeveloperSettingsBackedByCVars::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettingsBackedByCVars",
               &Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton,
               StaticRegisterNativesUDeveloperSettingsBackedByCVars,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeveloperSettingsBackedByCVars>,
               InternalVTableHelperCtorCaller<UDeveloperSettingsBackedByCVars>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton;
}

// UDeveloperSettingsBackedByCVars @ 14241bda0

UDeveloperSettingsBackedByCVars * __thiscall
UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
          (UDeveloperSettingsBackedByCVars *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UDeveloperSettingsBackedByCVars__6B_;
  return this;
}

// UDeveloperSettingsBackedByCVars @ 14241bde0

UDeveloperSettingsBackedByCVars * __thiscall
UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
          (UDeveloperSettingsBackedByCVars *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7UDeveloperSettingsBackedByCVars__6B_;
  *(undefined8 *)&this->field_0x30 = 0;
  return this;
}

// ~UDeveloperSettingsBackedByCVars @ 14241c0c0

void __thiscall
UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars
          (UDeveloperSettingsBackedByCVars *this)

{
  *(undefined ***)this = &___7UDeveloperSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14241cec0

UClass * __cdecl UDeveloperSettingsBackedByCVars::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DeveloperSettings",L"DeveloperSettingsBackedByCVars",
               &Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton,
               StaticRegisterNativesUDeveloperSettingsBackedByCVars,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeveloperSettingsBackedByCVars>,
               InternalVTableHelperCtorCaller<UDeveloperSettingsBackedByCVars>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.InnerSingleton;
}

// PostInitProperties @ 14241d320

void __thiscall
UDeveloperSettingsBackedByCVars::PostInitProperties(UDeveloperSettingsBackedByCVars *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UDeveloperSettingsBackedByCVars *pUStack_28;
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
      (UDeveloperSettingsBackedByCVars **)
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
  *(UDeveloperSettingsBackedByCVars **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(**(longlong **)&this->field_0x10 + 0x3a8))
            (*(longlong **)&this->field_0x10,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesUDeveloperSettingsBackedByCVars @ 14241d6c0

void __cdecl
UDeveloperSettingsBackedByCVars::StaticRegisterNativesUDeveloperSettingsBackedByCVars(void)

{
  return;
}

