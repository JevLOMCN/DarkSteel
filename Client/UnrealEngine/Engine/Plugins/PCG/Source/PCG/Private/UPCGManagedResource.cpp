// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// MoveResourceToNewActor @ 14976cba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPCGManagedResource::MoveResourceToNewActor(UPCGManagedResource *this,AActor *param_1)

{
  return false;
}

// ReleaseOnTeardown @ 1497742a0

bool __thiscall UPCGManagedResource::ReleaseOnTeardown(UPCGManagedResource *this)

{
  return false;
}

// IsManaging @ 149c2d4d0

bool __thiscall UPCGManagedResource::IsManaging(UPCGManagedResource *this,UObject *param_1)

{
  return false;
}

// MarkAsReused @ 149c2d550

void __thiscall UPCGManagedResource::MarkAsReused(UPCGManagedResource *this)

{
  this->bIsMarkedUnused = false;
  return;
}

// MarkAsUsed @ 149c2d560

void __thiscall UPCGManagedResource::MarkAsUsed(UPCGManagedResource *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2c8))();
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<521289505089519665>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGManagedResource.h"
                       ,0x31,"CanBeUsed()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsMarkedUnused = false;
  return;
}

// MoveResourceToNewActor @ 149c2d5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPCGManagedResource::MoveResourceToNewActor
          (UPCGManagedResource *this,AActor *param_1,AActor *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149c2d5c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f0))();
  return (bool)uVar1;
}

// StaticClass @ 149c35080

UClass * __cdecl UPCGManagedResource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedResource",
               &Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton,
               StaticRegisterNativesUPCGManagedResource,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedResource>,
               InternalVTableHelperCtorCaller<UPCGManagedResource>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton;
}

// UPCGManagedResource @ 149f32a90

UPCGManagedResource * __thiscall
UPCGManagedResource::UPCGManagedResource(UPCGManagedResource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsMarkedUnused = false;
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  (this->Crc).Value = 0;
  (this->Crc).bValid = false;
  return this;
}

// UPCGManagedResource @ 149f32ad0

UPCGManagedResource * __thiscall
UPCGManagedResource::UPCGManagedResource(UPCGManagedResource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsMarkedUnused = false;
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  (this->Crc).Value = 0;
  (this->Crc).bValid = false;
  return this;
}

// ~UPCGManagedResource @ 149f34a20

void __thiscall UPCGManagedResource::~UPCGManagedResource(UPCGManagedResource *this)

{
  this->_padding_ = (longlong)&___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeUsed @ 149f3de90

bool __thiscall UPCGManagedResource::CanBeUsed(UPCGManagedResource *this)

{
  return true;
}

// DebugForcePurgeAllResourcesOnGenerate @ 149f41530

bool __cdecl UPCGManagedResource::DebugForcePurgeAllResourcesOnGenerate(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarForceReleaseResourcesOnGenerate.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetPrivateStaticClass @ 149f4d8c0

UClass * __cdecl UPCGManagedResource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedResource",
               &Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton,
               StaticRegisterNativesUPCGManagedResource,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGManagedResource>,
               InternalVTableHelperCtorCaller<UPCGManagedResource>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedResource.InnerSingleton;
}

// PostApplyToComponent @ 149f577a0

void __thiscall UPCGManagedResource::PostApplyToComponent(UPCGManagedResource *this)

{
  return;
}

// Release @ 149f5c8a0

bool __thiscall
UPCGManagedResource::Release
          (UPCGManagedResource *this,bool param_1,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_2)

{
  this->bIsMarkedUnused = true;
  return param_1;
}

// ReleaseIfUnused @ 149f5ccf0

bool __thiscall
UPCGManagedResource::ReleaseIfUnused
          (UPCGManagedResource *this,
          TSet<TSoftObjectPtr<AActor>,DefaultKeyFuncs<TSoftObjectPtr<AActor>,0>,FDefaultSetAllocator>
          *param_1)

{
  if (this->bIsMarkedUnused != false) {
    (**(code **)(this->_padding_ + 0x2b8))(this,1,param_1);
    return true;
  }
  return false;
}

// StaticRegisterNativesUPCGManagedResource @ 149f63a50

void __cdecl UPCGManagedResource::StaticRegisterNativesUPCGManagedResource(void)

{
  return;
}

