// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b556a80

UClass * __cdecl UDS_PartsSystemCore_ACharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemCore_ACharacter",
               &Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemCore_ACharacter,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PartsSystemCore_ACharacter>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemCore_ACharacter>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton;
}

// UDS_PartsSystemCore_ACharacter @ 14b55a250

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_PartsSystemCore_ACharacter * __thiscall
UDS_PartsSystemCore_ACharacter::UDS_PartsSystemCore_ACharacter
          (UDS_PartsSystemCore_ACharacter *this,FVTableHelper *param_1)

{
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_ACharacter__6B_;
  (this->MountComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_PartsSystemCore_ACharacter @ 14b55b5a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_PartsSystemCore_ACharacter::~UDS_PartsSystemCore_ACharacter
          (UDS_PartsSystemCore_ACharacter *this)

{
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_ACharacter__6B_;
  UWN_CS_CharacterCore::~UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this);
  return;
}

// GetPrivateStaticClass @ 14b55cd60

UClass * __cdecl UDS_PartsSystemCore_ACharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemCore_ACharacter",
               &Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemCore_ACharacter,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_PartsSystemCore_ACharacter>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemCore_ACharacter>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemCore_ACharacter.InnerSingleton;
}

// StaticRegisterNativesUDS_PartsSystemCore_ACharacter @ 14b55d340

void __cdecl
UDS_PartsSystemCore_ACharacter::StaticRegisterNativesUDS_PartsSystemCore_ACharacter(void)

{
  return;
}

// UDS_PartsSystemCore_ACharacter @ 14bc2b560

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_PartsSystemCore_ACharacter * __thiscall
UDS_PartsSystemCore_ACharacter::UDS_PartsSystemCore_ACharacter
          (UDS_PartsSystemCore_ACharacter *this,FObjectInitializer *param_1)

{
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_ACharacter__6B_;
  (this->MountComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// CreateSoulComponent_Impl @ 14bc37610

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkeletalMeshComponent * __thiscall
UDS_PartsSystemCore_ACharacter::CreateSoulComponent_Impl
          (UDS_PartsSystemCore_ACharacter *this,FWN_CS_CharacterSoulInfo *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  USkeletalMesh *pUVar6;
  USkeletalMeshComponent *pUVar7;
  
  if (this->_padding_ != 0) {
    pUVar5 = Z_Construct_UClass_ACharacter_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if ((bVar4) && (lVar2 = this->_padding_, lVar2 != 0)) {
      param_1->bOwnedByCore = false;
      pUVar7 = *(USkeletalMeshComponent **)(lVar2 + 0x340);
      pUVar6 = TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(&param_1->SkeletalMesh);
      (**(code **)(pUVar7->_padding_ + 0xb48))(pUVar7,pUVar6,1);
      lVar2 = pUVar7->_padding_;
      pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 3);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)((longlong)&pUVar7->_padding_ + 2);
      *pbVar1 = *pbVar1 | 6;
      (**(code **)(lVar2 + 0x420))(pUVar7,1);
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
      USceneComponent::SetVisibility((USceneComponent *)pUVar7,param_1->bIsSoulVisible,DirtyOnly);
      return pUVar7;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_725922749461037029>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemCore_ACharacter.cpp"
                     ,0x1b,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (USkeletalMeshComponent *)(*pcVar3)();
    return pUVar7;
  }
  pUVar7 = UWN_CS_CharacterCore::CreateSoulComponent_Impl((UWN_CS_CharacterCore *)this,param_1);
  return pUVar7;
}

