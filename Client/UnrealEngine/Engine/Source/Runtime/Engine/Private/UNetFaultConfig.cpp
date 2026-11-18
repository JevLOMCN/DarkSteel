// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148006880

UClass * __cdecl UNetFaultConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetFaultConfig",
               &Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton,
               StaticRegisterNativesUNetFaultConfig,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetFaultConfig>,
               InternalVTableHelperCtorCaller<UNetFaultConfig>,local_res8,
               UEscalationManagerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton;
}

// UNetFaultConfig @ 148016c20

UNetFaultConfig * __thiscall
UNetFaultConfig::UNetFaultConfig(UNetFaultConfig *this,FVTableHelper *param_1)

{
  UEscalationManagerConfig::UEscalationManagerConfig((UEscalationManagerConfig *)this,param_1);
  *(undefined ***)this = &___7UNetFaultConfig__6B_;
  return this;
}

// UNetFaultConfig @ 148016c50

UNetFaultConfig * __thiscall
UNetFaultConfig::UNetFaultConfig(UNetFaultConfig *this,FObjectInitializer *param_1)

{
  UEscalationManagerConfig::UEscalationManagerConfig((UEscalationManagerConfig *)this,param_1);
  *(undefined ***)this = &___7UNetFaultConfig__6B_;
  return this;
}

// ~UNetFaultConfig @ 148018a50

void __thiscall UNetFaultConfig::~UNetFaultConfig(UNetFaultConfig *this)

{
  *(undefined ***)this = &___7UNetFaultConfig__6B_;
  UEscalationManagerConfig::~UEscalationManagerConfig((UEscalationManagerConfig *)this);
  return;
}

// GetPrivateStaticClass @ 148036b90

UClass * __cdecl UNetFaultConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetFaultConfig",
               &Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton,
               StaticRegisterNativesUNetFaultConfig,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetFaultConfig>,
               InternalVTableHelperCtorCaller<UNetFaultConfig>,local_res8,
               UEscalationManagerConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetFaultConfig.InnerSingleton;
}

// InitConfigDefaultsInternal @ 14803d880

/* WARNING: Removing unreachable block (ram,0x00014803dc15) */
/* WARNING: Removing unreachable block (ram,0x00014803da75) */
/* WARNING: Removing unreachable block (ram,0x00014803d9a5) */
/* WARNING: Removing unreachable block (ram,0x00014803db45) */
/* WARNING: Removing unreachable block (ram,0x00014803dce5) */

void __thiscall UNetFaultConfig::InitConfigDefaultsInternal(UNetFaultConfig *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  puVar1 = &this->field_0x78;
  this->field_0x70 = 1;
  DestructItems<FString,int>(*(FString **)puVar1,*(int *)&this->field_0x80);
  puVar2 = &this->field_0x84;
  *(undefined4 *)&this->field_0x80 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)puVar1,0,(int *)puVar2);
  }
  ::FString::FString(&local_58,L"Normal");
  if (((*(FString **)puVar1 <= &local_58) && (&local_58 < *(FString **)puVar1 + *(int *)puVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&this->field_0x80;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)puVar2);
  }
  *(int *)&this->field_0x80 = iVar5 + 1;
  puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar6 = 0;
  *puVar6 = local_58.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_58.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_48,L"Fault");
  if (((*(FString **)puVar1 <= &local_48) && (&local_48 < *(FString **)puVar1 + *(int *)puVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&this->field_0x80;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)puVar2);
  }
  *(int *)&this->field_0x80 = iVar5 + 1;
  puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar6 = 0;
  *puVar6 = local_48.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_48.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"PersistentFault");
  if (((*(FString **)puVar1 <= &local_38) && (&local_38 < *(FString **)puVar1 + *(int *)puVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&this->field_0x80;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)puVar2);
  }
  *(int *)&this->field_0x80 = iVar5 + 1;
  puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar6 = 0;
  *puVar6 = local_38.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_38.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"DisconnectCountdown");
  if (((*(FString **)puVar1 <= &local_28) && (&local_28 < *(FString **)puVar1 + *(int *)puVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&this->field_0x80;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)puVar2);
  }
  *(int *)&this->field_0x80 = iVar5 + 1;
  puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar6 = 0;
  *puVar6 = local_28.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_28.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_18,L"Disconnect");
  if (((*(FString **)puVar1 <= &local_18) && (&local_18 < *(FString **)puVar1 + *(int *)puVar2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&this->field_0x80;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)puVar2);
  }
  *(int *)&this->field_0x80 = iVar5 + 1;
  puVar6 = (undefined8 *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *puVar6 = 0;
  *puVar6 = local_18.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_18.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// StaticRegisterNativesUNetFaultConfig @ 1480653a0

void __cdecl UNetFaultConfig::StaticRegisterNativesUNetFaultConfig(void)

{
  return;
}

