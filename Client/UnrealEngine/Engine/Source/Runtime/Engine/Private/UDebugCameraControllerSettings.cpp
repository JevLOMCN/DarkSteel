// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147aa4920

UClass * __cdecl UDebugCameraControllerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraControllerSettings",
               &Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton,
               StaticRegisterNativesUDebugCameraControllerSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDebugCameraControllerSettings>,
               InternalVTableHelperCtorCaller<UDebugCameraControllerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton;
}

// UDebugCameraControllerSettings @ 147abcb00

UDebugCameraControllerSettings * __thiscall
UDebugCameraControllerSettings::UDebugCameraControllerSettings
          (UDebugCameraControllerSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDebugCameraControllerSettings__6B_;
  (this->CycleViewModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CycleViewModes).ArrayNum = 0;
  (this->CycleViewModes).ArrayMax = 0;
  return this;
}

// UDebugCameraControllerSettings @ 147abcb40

UDebugCameraControllerSettings * __thiscall
UDebugCameraControllerSettings::UDebugCameraControllerSettings
          (UDebugCameraControllerSettings *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDebugCameraControllerSettings *pUVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  undefined **local_88;
  FScriptContainerElement local_80;
  undefined **local_78;
  FScriptContainerElement local_70;
  undefined **local_68;
  FScriptContainerElement local_60;
  undefined **local_58;
  FScriptContainerElement local_50;
  undefined **local_48;
  FScriptContainerElement local_40;
  undefined **local_38;
  FScriptContainerElement local_30;
  undefined **local_28;
  FScriptContainerElement local_20;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDebugCameraControllerSettings__6B_;
  (this->CycleViewModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CycleViewModes).ArrayNum = 0;
  (this->CycleViewModes).ArrayMax = 0;
  ::FName::FName(&local_res8,L"Debug Camera Controller");
  this->_padding_ = (longlong)local_res8;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_88 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_80 = (FScriptContainerElement)0x3;
  if ((pFVar5 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_78 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_70 = (FScriptContainerElement)0x2;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_80;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_88 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_68 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_60 = (FScriptContainerElement)0x1;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_70;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_78 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_58 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_50 = (FScriptContainerElement)0x4;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_60;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_68 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_48 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_40 = (FScriptContainerElement)0xb;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_50;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_58 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_38 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_30 = (FScriptContainerElement)0xf;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_40;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_48 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  local_28 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  local_20 = (FScriptContainerElement)0x10;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_30;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data;
  local_38 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  if ((pFVar5 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar5 + (longlong)(this->CycleViewModes).ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDebugCameraControllerSettings *)(*pcVar1)();
      return pUVar4;
    }
  }
  iVar3 = (this->CycleViewModes).ArrayNum;
  if (iVar3 == (this->CycleViewModes).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->CycleViewModes).AllocatorInstance,
                       &(this->CycleViewModes).ArrayMax);
  }
  (this->CycleViewModes).ArrayNum = iVar3 + 1;
  pFVar5 = (this->CycleViewModes).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined ***)pFVar5 = &___7FDebugCameraControllerSettingsViewModeIndex__6B_;
  pFVar5[8] = local_20;
  return this;
}

// ~UDebugCameraControllerSettings @ 147abf630

void __thiscall
UDebugCameraControllerSettings::~UDebugCameraControllerSettings
          (UDebugCameraControllerSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDebugCameraControllerSettings__6B_;
  DestructItems<FDebugCameraControllerSettingsViewModeIndex,int>
            ((FDebugCameraControllerSettingsViewModeIndex *)
             (this->CycleViewModes).AllocatorInstance.Data,(this->CycleViewModes).ArrayNum);
  pFVar1 = (this->CycleViewModes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCycleViewModes @ 147ae5160

TArray<EViewModeIndex,TSizedDefaultAllocator<32>_> * __thiscall
UDebugCameraControllerSettings::GetCycleViewModes
          (UDebugCameraControllerSettings *this,
          TArray<EViewModeIndex,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<EViewModeIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = (this->CycleViewModes).ArrayNum;
  pFVar8 = (this->CycleViewModes).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->CycleViewModes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDebugCameraControllerSettingsViewModeIndex,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_28[0] = (uint)(byte)pFVar8[8];
    if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 <
        pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<EViewModeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar8 = pFVar8 + 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28[0];
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147aeb370

UClass * __cdecl UDebugCameraControllerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraControllerSettings",
               &Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton,
               StaticRegisterNativesUDebugCameraControllerSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UDebugCameraControllerSettings>,
               InternalVTableHelperCtorCaller<UDebugCameraControllerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugCameraControllerSettings.InnerSingleton;
}

// StaticRegisterNativesUDebugCameraControllerSettings @ 147b17280

void __cdecl
UDebugCameraControllerSettings::StaticRegisterNativesUDebugCameraControllerSettings(void)

{
  return;
}

