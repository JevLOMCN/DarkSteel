// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b417370

UClass * __cdecl UDS_AnimNotify_ClimbStep::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_ClimbStep",
               &Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_ClimbStep,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_ClimbStep>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_ClimbStep>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton;
}

// UDS_AnimNotify_ClimbStep @ 14b41b1e0

UDS_AnimNotify_ClimbStep * __thiscall
UDS_AnimNotify_ClimbStep::UDS_AnimNotify_ClimbStep
          (UDS_AnimNotify_ClimbStep *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_ClimbStep__6B_;
  (this->BoneArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneArray).ArrayNum = 0;
  (this->BoneArray).ArrayMax = 0;
  return this;
}

// UDS_AnimNotify_ClimbStep @ 14b41b220

UDS_AnimNotify_ClimbStep * __thiscall
UDS_AnimNotify_ClimbStep::UDS_AnimNotify_ClimbStep
          (UDS_AnimNotify_ClimbStep *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_ClimbStep__6B_;
  (this->BoneArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneArray).ArrayNum = 0;
  (this->BoneArray).ArrayMax = 0;
  return this;
}

// ~UDS_AnimNotify_ClimbStep @ 14b41bb30

void __thiscall UDS_AnimNotify_ClimbStep::~UDS_AnimNotify_ClimbStep(UDS_AnimNotify_ClimbStep *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_AnimNotify_ClimbStep__6B_;
  pFVar1 = (this->BoneArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d6d0

UClass * __cdecl UDS_AnimNotify_ClimbStep::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_ClimbStep",
               &Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_ClimbStep,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_ClimbStep>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_ClimbStep>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_ClimbStep.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_ClimbStep @ 14b41e1f0

void __cdecl UDS_AnimNotify_ClimbStep::StaticRegisterNativesUDS_AnimNotify_ClimbStep(void)

{
  return;
}

// Notify @ 14b8d2060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_ClimbStep::Notify
          (UDS_AnimNotify_ClimbStep *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2
          ,FAnimNotifyEventReference *param_3)

{
  int iVar1;
  AActor *this_00;
  UDS_ClimbStepComponent *this_01;
  UClass *pUVar2;
  UClass *local_res10;
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  this_00 = (AActor *)param_1->_padding_;
  if (this_00 != (AActor *)0x0) {
    local_res10 = Z_Construct_UClass_UDS_ClimbStepComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    this_01 = (UDS_ClimbStepComponent *)
              AActor::GetComponentByClass(this_00,(TSubclassOf<UActorComponent>)&local_res10);
    if (this_01 != (UDS_ClimbStepComponent *)0x0) {
      pUVar2 = Z_Construct_UClass_UDS_ClimbStepComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        UDS_ClimbStepComponent::ShowClimbStep(this_01,param_1,&this->BoneArray);
      }
    }
  }
  return;
}

