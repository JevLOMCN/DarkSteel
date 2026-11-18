// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147d42ee0

UClass * __cdecl AInstancedPlacementPartitionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedPlacementPartitionActor",
               &Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton,
               StaticRegisterNativesAInstancedPlacementPartitionActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInstancedPlacementPartitionActor>,
               InternalVTableHelperCtorCaller<AInstancedPlacementPartitionActor>,local_res8,
               AISMPartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton;
}

// AInstancedPlacementPartitionActor @ 147d77050

AInstancedPlacementPartitionActor * __thiscall
AInstancedPlacementPartitionActor::AInstancedPlacementPartitionActor
          (AInstancedPlacementPartitionActor *this,FVTableHelper *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ISMInstanceManager__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__ISMInstanceManagerProvider__;
  return this;
}

// AInstancedPlacementPartitionActor @ 147d770a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInstancedPlacementPartitionActor * __thiscall
AInstancedPlacementPartitionActor::AInstancedPlacementPartitionActor
          (AInstancedPlacementPartitionActor *this,FObjectInitializer *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->field_0x32 = this->field_0x32 & 0xfd;
  *(undefined ***)this = &_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__ISMInstanceManager__;
  *(undefined ***)&this->field_0x2c8 = &_vftable__for__ISMInstanceManagerProvider__;
  AActor::SetActorEnableCollision((AActor *)this,true);
  return this;
}

// ~AInstancedPlacementPartitionActor @ 147d7b110

void __thiscall
AInstancedPlacementPartitionActor::~AInstancedPlacementPartitionActor
          (AInstancedPlacementPartitionActor *this)

{
  *(undefined ***)this = &AISMPartitionActor::_vftable__for__APartitionActor__;
  *(undefined ***)&this->field_0x2c8 = &___7ISMInstanceManagerProvider__6B_;
  *(undefined ***)&this->field_0x2c0 = &___7ISMInstanceManager__6B_;
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// GetPrivateStaticClass @ 147da7730

UClass * __cdecl AInstancedPlacementPartitionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InstancedPlacementPartitionActor",
               &Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton,
               StaticRegisterNativesAInstancedPlacementPartitionActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AInstancedPlacementPartitionActor>,
               InternalVTableHelperCtorCaller<AInstancedPlacementPartitionActor>,local_res8,
               AISMPartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInstancedPlacementPartitionActor.InnerSingleton;
}

// PostLoad @ 147db9140

void __thiscall AInstancedPlacementPartitionActor::PostLoad(AInstancedPlacementPartitionActor *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPackageFileVersion FVar5;
  ForAnyElementType *pFVar6;
  AInstancedPlacementPartitionActor *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar1 = *(longlong *)&this->field_0x158;
  if (lVar1 != 0) {
    pFVar6 = (ForAnyElementType *)(lVar1 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar6->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar6->Data + (longlong)*(int *)(lVar1 + 0x1b4) * 8)) {
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
    iVar4 = *(int *)(lVar1 + 0x1b0);
    if (iVar4 == *(int *)(lVar1 + 0x1b4)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar6,(int *)(lVar1 + 0x1b4));
    }
    *(int *)(lVar1 + 0x1b0) = iVar4 + 1;
    *(AInstancedPlacementPartitionActor **)(pFVar6->Data + (longlong)iVar4 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AInstancedPlacementPartitionActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0x156) {
    this->field_0x5b = -(this->field_0x60 != '\0') & 8U | this->field_0x5b & 0xf7;
  }
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    this->field_0x59 = this->field_0x59 & 0xfb;
  }
  this->field_0x5c = this->field_0x5c | 1;
  return;
}

// Serialize @ 147dbf000

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
AInstancedPlacementPartitionActor::Serialize
          (AInstancedPlacementPartitionActor *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x29 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (3 < iVar1) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_10[0] = false;
      }
      else {
        abStackX_10[0] = true;
      }
      ::operator<<(param_1,abStackX_10);
      if (abStackX_10[0] != false) {
        ::operator<<(param_1,(FString *)&this->field_0x1e8);
      }
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
     ((param_1->field_0x28 & 2) != 0)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (0x95 < iVar1) {
      FActorInstanceGuid::Serialize(param_1,(AActor *)this);
    }
  }
  return;
}

// Serialize @ 147dbf010

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
AInstancedPlacementPartitionActor::Serialize
          (AInstancedPlacementPartitionActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// StaticRegisterNativesAInstancedPlacementPartitionActor @ 147dc3f80

void __cdecl
AInstancedPlacementPartitionActor::StaticRegisterNativesAInstancedPlacementPartitionActor(void)

{
  return;
}

