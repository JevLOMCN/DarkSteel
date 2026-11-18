// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 14758b0a0

UClass * __cdecl UAnimBlueprint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprint",
               &Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton,
               StaticRegisterNativesUAnimBlueprint,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprint>,
               InternalVTableHelperCtorCaller<UAnimBlueprint>,local_res8,UBlueprint::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton;
}

// UAnimBlueprint @ 1475a6930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimBlueprint * __thiscall
UAnimBlueprint::UAnimBlueprint(UAnimBlueprint *this,FVTableHelper *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprint__6B_;
  (this->TargetSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// UAnimBlueprint @ 1475a6990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAnimBlueprint * __thiscall
UAnimBlueprint::UAnimBlueprint(UAnimBlueprint *this,FObjectInitializer *param_1)

{
  UBlueprint::UBlueprint((UBlueprint *)this,param_1);
  this->bUseMultiThreadedAnimationUpdate = true;
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprint__6B_;
  (this->TargetSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  return this;
}

// ~UAnimBlueprint @ 1475aa360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimBlueprint::~UAnimBlueprint(UAnimBlueprint *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprint__6B_;
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  return;
}

// GetAnimBlueprintGeneratedClass @ 1475ce380

UAnimBlueprintGeneratedClass * __thiscall
UAnimBlueprint::GetAnimBlueprintGeneratedClass(UAnimBlueprint *this)

{
  int iVar1;
  longlong lVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (pUVar3 = (UAnimBlueprintGeneratedClass *)this->_padding_,
         pUVar3 != (UAnimBlueprintGeneratedClass *)0x0)) {
        pUVar5 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar3;
        }
      }
    }
  }
  return (UAnimBlueprintGeneratedClass *)0x0;
}

// GetAnimBlueprintSkeletonClass @ 1475ce410

UAnimBlueprintGeneratedClass * __thiscall
UAnimBlueprint::GetAnimBlueprintSkeletonClass(UAnimBlueprint *this)

{
  int iVar1;
  longlong lVar2;
  UAnimBlueprintGeneratedClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (pUVar3 = (UAnimBlueprintGeneratedClass *)this->_padding_,
         pUVar3 != (UAnimBlueprintGeneratedClass *)0x0)) {
        pUVar5 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          return pUVar3;
        }
      }
    }
  }
  return (UAnimBlueprintGeneratedClass *)0x0;
}

// GetDebugData @ 1475d3f20

FAnimBlueprintDebugData * __thiscall UAnimBlueprint::GetDebugData(UAnimBlueprint *this)

{
  return (FAnimBlueprintDebugData *)0x0;
}

// GetPreviewAnimationBlueprint @ 1475d7b30

UAnimBlueprint * __thiscall UAnimBlueprint::GetPreviewAnimationBlueprint(UAnimBlueprint *this)

{
  return (UAnimBlueprint *)0x0;
}

// GetPreviewAnimationBlueprintApplicationMethod @ 1475d7b40

EPreviewAnimationBlueprintApplicationMethod __thiscall
UAnimBlueprint::GetPreviewAnimationBlueprintApplicationMethod(UAnimBlueprint *this)

{
  return LinkedLayers;
}

// GetPreviewAnimationBlueprintTag @ 1475d7b50

FName __thiscall UAnimBlueprint::GetPreviewAnimationBlueprintTag(UAnimBlueprint *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPreviewMesh @ 1475d7b70

USkeletalMesh * __thiscall UAnimBlueprint::GetPreviewMesh(UAnimBlueprint *this,bool param_1)

{
  return (USkeletalMesh *)0x0;
}

// GetPreviewMesh @ 1475d7b80

USkeletalMesh * __thiscall UAnimBlueprint::GetPreviewMesh(UAnimBlueprint *this)

{
  return (USkeletalMesh *)0x0;
}

// GetPrivateStaticClass @ 1475db380

UClass * __cdecl UAnimBlueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprint",
               &Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton,
               StaticRegisterNativesUAnimBlueprint,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimBlueprint>,
               InternalVTableHelperCtorCaller<UAnimBlueprint>,local_res8,UBlueprint::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton;
}

// IsObjectBeingDebugged @ 1475e27f0

bool __thiscall UAnimBlueprint::IsObjectBeingDebugged(UAnimBlueprint *this,UObject *param_1)

{
  return false;
}

// Serialize @ 1475f9f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimBlueprint::Serialize(UAnimBlueprint *this,FArchive *param_1)

{
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res18,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Animation,true);
  UBlueprint::Serialize((UBlueprint *)this,param_1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// Serialize @ 1475f9f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimBlueprint::Serialize(UAnimBlueprint *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FLLMScope local_res10 [2];
  FSlotBase local_res18;
  FMemScope local_res20;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  FLLMScope::FLLMScope(local_res10,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Animation,true);
  UBlueprint::Serialize((UBlueprint *)this,pFVar1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetPreviewAnimationBlueprint @ 1475fd410

void __thiscall
UAnimBlueprint::SetPreviewAnimationBlueprint(UAnimBlueprint *this,UAnimBlueprint *param_1)

{
  return;
}

// SetPreviewAnimationBlueprintApplicationMethod @ 1475fd420

void __thiscall
UAnimBlueprint::SetPreviewAnimationBlueprintApplicationMethod
          (UAnimBlueprint *this,EPreviewAnimationBlueprintApplicationMethod param_1)

{
  return;
}

// SetPreviewAnimationBlueprintTag @ 1475fd430

void __thiscall UAnimBlueprint::SetPreviewAnimationBlueprintTag(UAnimBlueprint *this,FName param_1)

{
  return;
}

// SetPreviewMesh @ 1475fd440

void __thiscall
UAnimBlueprint::SetPreviewMesh(UAnimBlueprint *this,USkeletalMesh *param_1,bool param_2)

{
  return;
}

// StaticRegisterNativesUAnimBlueprint @ 1475febd0

void __cdecl UAnimBlueprint::StaticRegisterNativesUAnimBlueprint(void)

{
  return;
}

// _getUObject @ 1476058e0

UObject * __thiscall UAnimBlueprint::_getUObject(UAnimBlueprint *this)

{
  return (UObject *)&this[-1]._padding_;
}

