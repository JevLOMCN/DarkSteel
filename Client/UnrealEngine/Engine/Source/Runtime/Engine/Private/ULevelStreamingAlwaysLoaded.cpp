// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147287760

UClass * __cdecl ULevelStreamingAlwaysLoaded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingAlwaysLoaded",
               &Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton,
               StaticRegisterNativesULevelStreamingAlwaysLoaded,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreamingAlwaysLoaded>,
               InternalVTableHelperCtorCaller<ULevelStreamingAlwaysLoaded>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton;
}

// ULevelStreamingAlwaysLoaded @ 14728b970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingAlwaysLoaded * __thiscall
ULevelStreamingAlwaysLoaded::ULevelStreamingAlwaysLoaded
          (ULevelStreamingAlwaysLoaded *this,FVTableHelper *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingAlwaysLoaded__6B_;
  return this;
}

// ~ULevelStreamingAlwaysLoaded @ 14728d290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreamingAlwaysLoaded::~ULevelStreamingAlwaysLoaded(ULevelStreamingAlwaysLoaded *this)

{
  *(undefined ***)this = &___7ULevelStreamingAlwaysLoaded__6B_;
  ULevelStreaming::~ULevelStreaming((ULevelStreaming *)this);
  return;
}

// GetPrivateStaticClass @ 14728f800

UClass * __cdecl ULevelStreamingAlwaysLoaded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingAlwaysLoaded",
               &Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton,
               StaticRegisterNativesULevelStreamingAlwaysLoaded,0x1f0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelStreamingAlwaysLoaded>,
               InternalVTableHelperCtorCaller<ULevelStreamingAlwaysLoaded>,local_res8,
               ULevelStreaming::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.InnerSingleton;
}

// ShouldBeAlwaysLoaded @ 147291120

bool __thiscall ULevelStreamingAlwaysLoaded::ShouldBeAlwaysLoaded(ULevelStreamingAlwaysLoaded *this)

{
  return true;
}

// ShouldBeLoaded @ 147291130

bool __thiscall ULevelStreamingAlwaysLoaded::ShouldBeLoaded(ULevelStreamingAlwaysLoaded *this)

{
  return true;
}

// StaticRegisterNativesULevelStreamingAlwaysLoaded @ 147291280

void __cdecl ULevelStreamingAlwaysLoaded::StaticRegisterNativesULevelStreamingAlwaysLoaded(void)

{
  return;
}

// ULevelStreamingAlwaysLoaded @ 147e563f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingAlwaysLoaded * __thiscall
ULevelStreamingAlwaysLoaded::ULevelStreamingAlwaysLoaded
          (ULevelStreamingAlwaysLoaded *this,FObjectInitializer *param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingAlwaysLoaded__6B_;
  if ((this->field_0xf8 & 8) == 0) {
    this->field_0xf8 = this->field_0xf8 | 8;
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar1) {
      this_00 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
      if (this_00 != (UWorld *)0x0) {
        UWorld::UpdateStreamingLevelShouldBeConsidered(this_00,(ULevelStreaming *)this);
      }
    }
  }
  return this;
}

// GetPrestreamPackages @ 147e69310

void __thiscall
ULevelStreamingAlwaysLoaded::GetPrestreamPackages
          (ULevelStreamingAlwaysLoaded *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_18 [2];
  
  local_18[0] = *(undefined8 *)&this->field_0x1b0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

