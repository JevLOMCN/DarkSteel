// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 148a74d90

UClass * __cdecl UMaterialParameterCollectionHLODModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollectionHLODModifier",
               &Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollectionHLODModifier,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialParameterCollectionHLODModifier>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollectionHLODModifier>,local_res8,
               UWorldPartitionHLODModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton;
}

// UMaterialParameterCollectionHLODModifier @ 148a7fc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialParameterCollectionHLODModifier * __thiscall
UMaterialParameterCollectionHLODModifier::UMaterialParameterCollectionHLODModifier
          (UMaterialParameterCollectionHLODModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionHLODModifier__6B_;
  (this->MPC).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).ArrayNum = 0;
  (this->ScalarParameters).ArrayMax = 0;
  (this->CachedScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedScalarParameterValues).ArrayNum = 0;
  (this->CachedScalarParameterValues).ArrayMax = 0;
  return this;
}

// UMaterialParameterCollectionHLODModifier @ 148a7fc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialParameterCollectionHLODModifier * __thiscall
UMaterialParameterCollectionHLODModifier::UMaterialParameterCollectionHLODModifier
          (UMaterialParameterCollectionHLODModifier *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionHLODModifier__6B_;
  (this->MPC).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ScalarParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalarParameters).ArrayNum = 0;
  (this->ScalarParameters).ArrayMax = 0;
  (this->CachedScalarParameterValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedScalarParameterValues).ArrayNum = 0;
  (this->CachedScalarParameterValues).ArrayMax = 0;
  return this;
}

// ~UMaterialParameterCollectionHLODModifier @ 148a81980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionHLODModifier::~UMaterialParameterCollectionHLODModifier
          (UMaterialParameterCollectionHLODModifier *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionHLODModifier__6B_;
  pFVar1 = (this->CachedScalarParameterValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UWorldPartitionHLODModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyScalarParameterOverrides @ 148a8ade0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionHLODModifier::ApplyScalarParameterOverrides
          (UMaterialParameterCollectionHLODModifier *this,
          UMaterialParameterCollectionInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  float local_28 [4];
  
  uVar6 = 0;
  if (0 < (this->ScalarParameters).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ScalarParameters).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
      UMaterialParameterCollectionInstance::GetScalarParameterValue
                (param_1,*(FName *)(pFVar1 + lVar7),local_28);
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (param_1,*(FName *)(pFVar1 + lVar7),*(float *)(pFVar1 + lVar7 + 8));
      pFVar1 = (this->CachedScalarParameterValues).AllocatorInstance.Data;
      if (((pFVar1 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar1 + (longlong)(this->CachedScalarParameterValues).ArrayMax * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (this->CachedScalarParameterValues).ArrayNum;
      if (iVar5 == (this->CachedScalarParameterValues).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->CachedScalarParameterValues).AllocatorInstance,
                           &(this->CachedScalarParameterValues).ArrayMax);
      }
      (this->CachedScalarParameterValues).ArrayNum = iVar5 + 1;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0xc;
      *(float *)((this->CachedScalarParameterValues).AllocatorInstance.Data + (longlong)iVar5 * 4) =
           local_28[0];
    } while ((int)uVar6 < (this->ScalarParameters).ArrayNum);
  }
  return;
}

// BeginHLODBuild @ 148a8b010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionHLODModifier::BeginHLODBuild
          (UMaterialParameterCollectionHLODModifier *this,FHLODBuildContext *param_1)

{
  UMaterialParameterCollection *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UMaterialParameterCollectionInstance *this_00;
  uint uVar7;
  longlong lVar8;
  float local_28 [4];
  
  this->HLODBuildContext = param_1;
  pUVar1 = (this->MPC).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMaterialParameterCollection *)0x0) &&
      (this_00 = UWorld::GetParameterCollectionInstance(param_1->World,pUVar1),
      this_00 != (UMaterialParameterCollectionInstance *)0x0)) &&
     (uVar7 = 0, 0 < (this->ScalarParameters).ArrayNum)) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ScalarParameters).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ScalarParameters).AllocatorInstance.Data;
      UMaterialParameterCollectionInstance::GetScalarParameterValue
                (this_00,*(FName *)(pFVar2 + lVar8),local_28);
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (this_00,*(FName *)(pFVar2 + lVar8),*(float *)(pFVar2 + lVar8 + 8));
      pFVar2 = (this->CachedScalarParameterValues).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 <
           pFVar2 + (longlong)(this->CachedScalarParameterValues).ArrayMax * 4)) &&
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
      iVar6 = (this->CachedScalarParameterValues).ArrayNum;
      if (iVar6 == (this->CachedScalarParameterValues).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->CachedScalarParameterValues).AllocatorInstance,
                           &(this->CachedScalarParameterValues).ArrayMax);
      }
      (this->CachedScalarParameterValues).ArrayNum = iVar6 + 1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xc;
      *(float *)((this->CachedScalarParameterValues).AllocatorInstance.Data + (longlong)iVar6 * 4) =
           local_28[0];
    } while ((int)uVar7 < (this->ScalarParameters).ArrayNum);
  }
  return;
}

// CanModifyHLOD @ 148a8bd10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMaterialParameterCollectionHLODModifier::CanModifyHLOD
          (UMaterialParameterCollectionHLODModifier *this,TSubclassOf<UHLODBuilder> param_1)

{
  return true;
}

// EndHLODBuild @ 148a8f5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionHLODModifier::EndHLODBuild
          (UMaterialParameterCollectionHLODModifier *this,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UMaterialParameterCollection *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UMaterialParameterCollectionInstance *this_00;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  pUVar1 = (this->MPC).field0_0x0.DebugPtr;
  if (((pUVar1 != (UMaterialParameterCollection *)0x0) &&
      (this_00 = UWorld::GetParameterCollectionInstance(this->HLODBuildContext->World,pUVar1),
      this_00 != (UMaterialParameterCollectionInstance *)0x0)) &&
     (uVar6 = (this->ScalarParameters).ArrayNum - 1, -1 < (int)uVar6)) {
    lVar7 = (longlong)(int)uVar6;
    lVar8 = lVar7 * 0xc;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ScalarParameters).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->ScalarParameters).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (this->CachedScalarParameterValues).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (this_00,*(FName *)(pFVar2 + lVar8),
                 *(float *)((this->CachedScalarParameterValues).AllocatorInstance.Data + lVar7 * 4))
      ;
      lVar7 = lVar7 + -1;
      lVar8 = lVar8 + -0xc;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// GetPrivateStaticClass @ 148a96010

UClass * __cdecl UMaterialParameterCollectionHLODModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollectionHLODModifier",
               &Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollectionHLODModifier,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialParameterCollectionHLODModifier>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollectionHLODModifier>,local_res8,
               UWorldPartitionHLODModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionHLODModifier.InnerSingleton;
}

// RestoreScalarParameterValues @ 148aa1f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionHLODModifier::RestoreScalarParameterValues
          (UMaterialParameterCollectionHLODModifier *this,
          UMaterialParameterCollectionInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = (this->ScalarParameters).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5;
    lVar7 = lVar6 * 0xc;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ScalarParameters).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->ScalarParameters).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar5 < (this->CachedScalarParameterValues).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (param_1,*(FName *)(pFVar1 + lVar7),
                 *(float *)((this->CachedScalarParameterValues).AllocatorInstance.Data + lVar6 * 4))
      ;
      lVar6 = lVar6 + -1;
      lVar7 = lVar7 + -0xc;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// StaticRegisterNativesUMaterialParameterCollectionHLODModifier @ 148aa2940

void __cdecl
UMaterialParameterCollectionHLODModifier::
StaticRegisterNativesUMaterialParameterCollectionHLODModifier(void)

{
  return;
}

