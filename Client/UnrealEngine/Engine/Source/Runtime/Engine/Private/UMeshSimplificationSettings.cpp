// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147f90480

UClass * __cdecl UMeshSimplificationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshSimplificationSettings",
               &Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton,
               StaticRegisterNativesUMeshSimplificationSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSimplificationSettings>,
               InternalVTableHelperCtorCaller<UMeshSimplificationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton;
}

// UMeshSimplificationSettings @ 147fa5e70

UMeshSimplificationSettings * __thiscall
UMeshSimplificationSettings::UMeshSimplificationSettings
          (UMeshSimplificationSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
  (this->MeshReductionModuleName).ComparisonIndex = 0;
  (this->MeshReductionModuleName).Number = 0;
  return this;
}

// UMeshSimplificationSettings @ 147fa5ea0

UMeshSimplificationSettings * __thiscall
UMeshSimplificationSettings::UMeshSimplificationSettings
          (UMeshSimplificationSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
  (this->MeshReductionModuleName).ComparisonIndex = 0;
  (this->MeshReductionModuleName).Number = 0;
  return this;
}

// ~UMeshSimplificationSettings @ 147fa9650

void __thiscall
UMeshSimplificationSettings::~UMeshSimplificationSettings(UMeshSimplificationSettings *this)

{
  this->_padding_ = (longlong)&___7UMeshSimplificationSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 147fd0fc0

FName __thiscall UMeshSimplificationSettings::GetCategoryName(UMeshSimplificationSettings *this)

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

// GetContainerName @ 147fd1700

FName __thiscall UMeshSimplificationSettings::GetContainerName(UMeshSimplificationSettings *this)

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

// GetPrivateStaticClass @ 147fd6150

UClass * __cdecl UMeshSimplificationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshSimplificationSettings",
               &Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton,
               StaticRegisterNativesUMeshSimplificationSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshSimplificationSettings>,
               InternalVTableHelperCtorCaller<UMeshSimplificationSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSimplificationSettings.InnerSingleton;
}

// PostInitProperties @ 147fe5ee0

void __thiscall UMeshSimplificationSettings::PostInitProperties(UMeshSimplificationSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UMeshSimplificationSettings *pUStack_28;
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
      (UMeshSimplificationSettings **)
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
  *(UMeshSimplificationSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// SetMeshReductionModuleName @ 147ff61b0

void __thiscall
UMeshSimplificationSettings::SetMeshReductionModuleName
          (UMeshSimplificationSettings *this,FName param_1)

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
  
  this->MeshReductionModuleName = param_1;
  uVar2 = CVarMeshReductionModule._8_8_;
  pFVar3 = ::FName::ToString(&this->MeshReductionModuleName,&local_38);
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

// StaticRegisterNativesUMeshSimplificationSettings @ 147ff87f0

void __cdecl UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings(void)

{
  return;
}

