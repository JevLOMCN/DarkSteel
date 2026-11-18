// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b556c60

UClass * __cdecl UDS_PartsSystemCore_SKM::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemCore_SKM",
               &Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemCore_SKM,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PartsSystemCore_SKM>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemCore_SKM>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton;
}

// UDS_PartsSystemCore_SKM @ 14b55a280

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

UDS_PartsSystemCore_SKM * __thiscall
UDS_PartsSystemCore_SKM::UDS_PartsSystemCore_SKM
          (UDS_PartsSystemCore_SKM *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_SKM__6B_;
  (this->SkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkeletalMeshComp).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_PartsSystemCore_SKM @ 14b55a2d0

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

UDS_PartsSystemCore_SKM * __thiscall
UDS_PartsSystemCore_SKM::UDS_PartsSystemCore_SKM
          (UDS_PartsSystemCore_SKM *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_SKM__6B_;
  (this->SkeletalMeshComp).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkeletalMeshComp).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_PartsSystemCore_SKM @ 14b55b5c0

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

void __thiscall UDS_PartsSystemCore_SKM::~UDS_PartsSystemCore_SKM(UDS_PartsSystemCore_SKM *this)

{
  this->_padding_ = (longlong)&___7UDS_PartsSystemCore_SKM__6B_;
  UWN_CS_CharacterCore::~UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this);
  return;
}

// GetPrivateStaticClass @ 14b55ce20

UClass * __cdecl UDS_PartsSystemCore_SKM::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PartsSystemCore_SKM",
               &Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton,
               StaticRegisterNativesUDS_PartsSystemCore_SKM,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PartsSystemCore_SKM>,
               InternalVTableHelperCtorCaller<UDS_PartsSystemCore_SKM>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PartsSystemCore_SKM.InnerSingleton;
}

// StaticRegisterNativesUDS_PartsSystemCore_SKM @ 14b55d350

void __cdecl UDS_PartsSystemCore_SKM::StaticRegisterNativesUDS_PartsSystemCore_SKM(void)

{
  return;
}

// Create @ 14bc33340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_PartsSystemCore_SKM * __cdecl
UDS_PartsSystemCore_SKM::Create(USkeletalMeshComponent *param_1,UObject *param_2)

{
  UClass *pUVar1;
  UDS_PartsSystemCore_SKM *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  USkeletalMeshComponent *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FObjectInitializer::AssertIfInConstructor
            (param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UDS_PartsSystemCore_SKM_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_2;
  pUVar2 = (UDS_PartsSystemCore_SKM *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  local_a8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(pUVar2->SkeletalMeshComp).WeakPtr,(FObjectPtr)local_a8);
  return pUVar2;
}

// CreateSoulComponent_Impl @ 14bc37720

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

USkeletalMeshComponent * __thiscall
UDS_PartsSystemCore_SKM::CreateSoulComponent_Impl
          (UDS_PartsSystemCore_SKM *this,FWN_CS_CharacterSoulInfo *param_1)

{
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  USkeletalMesh *pUVar4;
  UObject *pUVar5;
  USceneComponent *this_01;
  
  this_00 = &this->SkeletalMeshComp;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    param_1->bOwnedByCore = false;
    pUVar4 = TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(&param_1->SkeletalMesh);
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0xb48))(pUVar5,pUVar4,1);
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar5[3].field_0x23 = pUVar5[3].field_0x23 & 0xfe;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar5[1].field_0x1a = pUVar5[1].field_0x1a | 4;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar5[1].field_0x1a = pUVar5[1].field_0x1a | 2;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar5 + 0x420))(pUVar5,1);
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar5[0x33].field_0xc = 0;
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    USceneComponent::SetVisibility(this_01,param_1->bIsSoulVisible,DirtyOnly);
    pUVar3 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    return pUVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8092665099535253485>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\MeshControl\\DS_PartsSystemCore_SKM.cpp"
                     ,0x13,"SkeletalMeshComp.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (USkeletalMeshComponent *)(*pcVar1)();
    return pUVar3;
  }
  pUVar3 = UWN_CS_CharacterCore::CreateSoulComponent_Impl((UWN_CS_CharacterCore *)this,param_1);
  return pUVar3;
}

