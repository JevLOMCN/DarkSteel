// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1485e3cb0

UClass * __cdecl USkeletalMeshSimplificationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshSimplificationSettings",
               &Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshSimplificationSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshSimplificationSettings>,
               InternalVTableHelperCtorCaller<USkeletalMeshSimplificationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton;
}

// USkeletalMeshSimplificationSettings @ 148624030

USkeletalMeshSimplificationSettings * __thiscall
USkeletalMeshSimplificationSettings::USkeletalMeshSimplificationSettings
          (USkeletalMeshSimplificationSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalMeshSimplificationSettings__6B_;
  (this->SkeletalMeshReductionModuleName).ComparisonIndex = 0;
  (this->SkeletalMeshReductionModuleName).Number = 0;
  return this;
}

// USkeletalMeshSimplificationSettings @ 148624060

USkeletalMeshSimplificationSettings * __thiscall
USkeletalMeshSimplificationSettings::USkeletalMeshSimplificationSettings
          (USkeletalMeshSimplificationSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalMeshSimplificationSettings__6B_;
  (this->SkeletalMeshReductionModuleName).ComparisonIndex = 0;
  (this->SkeletalMeshReductionModuleName).Number = 0;
  return this;
}

// ~USkeletalMeshSimplificationSettings @ 148625950

void __thiscall
USkeletalMeshSimplificationSettings::~USkeletalMeshSimplificationSettings
          (USkeletalMeshSimplificationSettings *this)

{
  this->_padding_ = (longlong)&___7USkeletalMeshSimplificationSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 148646ac0

FName __thiscall
USkeletalMeshSimplificationSettings::GetCategoryName(USkeletalMeshSimplificationSettings *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&EditorCategoryName,"Editor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = EditorCategoryName;
  return in_RDX;
}

// GetContainerName @ 148648640

FName __thiscall
USkeletalMeshSimplificationSettings::GetContainerName(USkeletalMeshSimplificationSettings *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ContainerName,"Project");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ContainerName;
  return in_RDX;
}

// GetPrivateStaticClass @ 14864cce0

UClass * __cdecl USkeletalMeshSimplificationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshSimplificationSettings",
               &Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshSimplificationSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshSimplificationSettings>,
               InternalVTableHelperCtorCaller<USkeletalMeshSimplificationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.InnerSingleton;
}

// PostInitProperties @ 14865bed0

void __thiscall
USkeletalMeshSimplificationSettings::PostInitProperties(USkeletalMeshSimplificationSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  USkeletalMeshSimplificationSettings *pUStack_28;
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
      (USkeletalMeshSimplificationSettings **)
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
  *(USkeletalMeshSimplificationSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// SetSkeletalMeshReductionModuleName @ 148667f50

void __thiscall
USkeletalMeshSimplificationSettings::SetSkeletalMeshReductionModuleName
          (USkeletalMeshSimplificationSettings *this,FName param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  FString *pFVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 local_48 [16];
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  this->SkeletalMeshReductionModuleName = param_1;
  uVar2 = CVarSkeletalMeshReductionModule._8_8_;
  pFVar3 = ::FName::ToString(&this->SkeletalMeshReductionModuleName,&local_38);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  lVar1 = *(longlong *)uVar2;
  local_28 = 0xe000000;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0xf000000;
  local_10 = 0x1000000;
  uVar4 = (**(code **)(lVar1 + 0xa8))(uVar2,local_48,&local_28);
  (**(code **)(lVar1 + 0xb0))(uVar2,pwVar5,uVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUSkeletalMeshSimplificationSettings @ 148668b20

void __cdecl
USkeletalMeshSimplificationSettings::StaticRegisterNativesUSkeletalMeshSimplificationSettings(void)

{
  return;
}

