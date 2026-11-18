// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 23

// StaticClass @ 14a837370

UClass * __cdecl UWN_ISKM_CharacterCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_CharacterCore",
               &Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_CharacterCore,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ISKM_CharacterCore>,
               InternalVTableHelperCtorCaller<UWN_ISKM_CharacterCore>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton;
}

// UWN_ISKM_CharacterCore @ 14a83f0a0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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

UWN_ISKM_CharacterCore * __thiscall
UWN_ISKM_CharacterCore::UWN_ISKM_CharacterCore(UWN_ISKM_CharacterCore *this,FVTableHelper *param_1)

{
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UWN_CS_CharacterCore__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  (this->SoulInstanceInfo).SlotName = Count;
  (this->SoulInstanceInfo).InstKey.Value = 0xffffffff;
  (this->SoulInstanceInfo).SkeletalMesh.WeakPtr = (FWeakObjectPtr)0x0;
  (this->PartInstanceInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInstanceInfos).ArrayNum = 0;
  (this->PartInstanceInfos).ArrayMax = 0;
  return this;
}

// UWN_ISKM_CharacterCore @ 14a83f120

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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

UWN_ISKM_CharacterCore * __thiscall
UWN_ISKM_CharacterCore::UWN_ISKM_CharacterCore
          (UWN_ISKM_CharacterCore *this,FObjectInitializer *param_1)

{
  UWN_CS_CharacterCore::UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UWN_CS_CharacterCore__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  (this->SoulInstanceInfo).SlotName = Count;
  (this->SoulInstanceInfo).InstKey.Value = 0xffffffff;
  (this->SoulInstanceInfo).SkeletalMesh.WeakPtr = (FWeakObjectPtr)0x0;
  (this->PartInstanceInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInstanceInfos).ArrayNum = 0;
  (this->PartInstanceInfos).ArrayMax = 0;
  return this;
}

// ~UWN_ISKM_CharacterCore @ 14a83ffa0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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

void __thiscall UWN_ISKM_CharacterCore::~UWN_ISKM_CharacterCore(UWN_ISKM_CharacterCore *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWN_CS_CharacterCore__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  pFVar1 = (this->PartInstanceInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IWN_ISKM_Controller__6B_;
  UWN_CS_CharacterCore::~UWN_CS_CharacterCore((UWN_CS_CharacterCore *)this);
  return;
}

// CreatePartComponent @ 14a846350

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

USceneComponent * __thiscall
UWN_ISKM_CharacterCore::CreatePartComponent
          (UWN_ISKM_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  int *piVar1;
  TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FWN_ISKM_InstanceKey FVar8;
  int iVar9;
  USceneComponent *pUVar10;
  FWN_CS_CharacterPartInfo *pFVar11;
  UWN_ISKM_Profile *pUVar12;
  UClass *pUVar13;
  undefined4 extraout_var;
  longlong local_res20;
  FName local_88;
  UWN_ISKM_Subsystem *local_80;
  UWN_ISKM_Profile *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  FWeakObjectPtr FStack_68;
  FString local_60;
  FString local_50;
  
  pUVar10 = UWN_CS_CharacterCore::CreatePartComponent((UWN_CS_CharacterCore *)this,param_1);
  if (pUVar10 == (USceneComponent *)0x0) {
    return (USceneComponent *)0x0;
  }
  if ((this->Profile).field0_0x0.DebugPtr == (UWN_ISKM_Profile *)0x0) {
    return pUVar10;
  }
  if (this->_padding_ == 0) {
    return pUVar10;
  }
  this_00 = &this->PartInstanceInfos;
  uVar5 = TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
          ::FindLastByPredicate<_UWN_ISKM_CharacterCore::CreatePartComponent_::__l11::<lambda_1>_>
                    (this_00,(<lambda_1>)param_1,(this->PartInstanceInfos).ArrayNum);
  if (uVar5 != 0xffffffff) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4072013868627394417>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_CharacterCore.cpp"
                       ,0x8f,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (USceneComponent *)(*pcVar3)();
      return pUVar10;
    }
    if (2 < (byte)ISKM._0_1_) {
      WN_CS_GetCharacterSlotNameString(&local_50,param_1);
      local_88 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_88,&local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    local_80 = (UWN_ISKM_Subsystem *)this->_padding_;
    uVar6 = 0;
    if ((int)uVar5 < (this->PartInstanceInfos).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (USceneComponent *)(*pcVar3)();
      return pUVar10;
    }
    UWN_ISKM_Subsystem::RemoveInstance
              (local_80,(FWN_ISKM_InstanceKey *)
                        ((this_00->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10 + 4));
    uVar6 = 0;
    if ((int)uVar5 < (this->PartInstanceInfos).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (USceneComponent *)(*pcVar3)();
      return pUVar10;
    }
    iVar9 = (this->PartInstanceInfos).ArrayNum;
    pFVar2 = (this_00->AllocatorInstance).Data;
    iVar7 = (iVar9 - uVar5) + -1;
    if (1 < iVar7) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      memmove(pFVar2 + (longlong)(int)uVar5 * 0x10,pFVar2 + (longlong)(iVar9 - iVar7) * 0x10,
              (longlong)iVar7 << 4);
    }
    piVar1 = &(this->PartInstanceInfos).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this_00->AllocatorInstance,(this->PartInstanceInfos).ArrayNum,
               &(this->PartInstanceInfos).ArrayMax);
  }
  pFVar11 = UWN_CS_CharacterCore::GetPartInfo((UWN_CS_CharacterCore *)this,param_1,true);
  pUVar12 = (UWN_ISKM_Profile *)
            FSoftObjectPath::TryLoad(&pFVar11->ResourcePath,(FUObjectSerializeContext *)0x0);
  if (pUVar12 != (UWN_ISKM_Profile *)0x0) {
    pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar9 = (int)pUVar13->_padding_;
    if ((iVar9 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
        == &pUVar13->_padding_)) goto LAB_14a84660a;
  }
  pUVar12 = (UWN_ISKM_Profile *)0x0;
LAB_14a84660a:
  if ((((pFVar11->ResourceType == SkeletalMesh) && (pFVar11->bUseLeaderPose != false)) &&
      (local_res20 = 0, pFVar11->SocketName == (FName)0x0)) && (pUVar12 != (UWN_ISKM_Profile *)0x0))
  {
    FStack_68.ObjectIndex = 0;
    FStack_68.ObjectSerialNumber = 0;
    local_70 = CONCAT31(local_70._1_3_,param_1);
    FVar8 = UWN_ISKM_Subsystem::AddInstance
                      ((UWN_ISKM_Subsystem *)this->_padding_,(USkeletalMesh *)&stack0x00000018,
                       pUVar12,SUB84((this->Profile).field0_0x0,0));
    uStack_6c = *(undefined4 *)CONCAT44(extraout_var,FVar8.Value);
    local_78 = pUVar12;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    FWeakObjectPtr::operator=(&FStack_68,(FObjectPtr)&local_78);
    pFVar2 = (this_00->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_70) &&
        ((FScriptContainerElement *)&local_70 <
         pFVar2 + (longlong)(this->PartInstanceInfos).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (USceneComponent *)(*pcVar3)();
      return pUVar10;
    }
    iVar9 = (this->PartInstanceInfos).ArrayNum;
    piVar1 = &(this->PartInstanceInfos).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&this_00->AllocatorInstance,piVar1);
    }
    (this->PartInstanceInfos).ArrayNum = iVar9 + 1;
    pFVar2 = (this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(ulonglong *)pFVar2 = CONCAT44(uStack_6c,local_70);
    *(FWeakObjectPtr *)(pFVar2 + 8) = FStack_68;
  }
  return pUVar10;
}

// CreateSoulComponent @ 14a846c30

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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
UWN_ISKM_CharacterCore::CreateSoulComponent(UWN_ISKM_CharacterCore *this)

{
  FWN_ISKM_InstanceKey *pFVar1;
  UWN_ISKM_Profile *pUVar2;
  longlong lVar3;
  UWN_ISKM_Subsystem *this_00;
  code *pcVar4;
  bool bVar5;
  FWN_ISKM_InstanceKey FVar6;
  USkeletalMeshComponent *pUVar7;
  USkeletalMesh *pUVar8;
  undefined4 extraout_var;
  FName local_res18 [2];
  FString local_38;
  
  pUVar7 = UWN_CS_CharacterCore::CreateSoulComponent((UWN_CS_CharacterCore *)this);
  if (pUVar7 == (USkeletalMeshComponent *)0x0) {
    return (USkeletalMeshComponent *)0x0;
  }
  if (this->_padding_ != 0) {
    pFVar1 = &(this->SoulInstanceInfo).InstKey;
    if (pFVar1->Value != 0xffffffff) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4072013868627394477>,true,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_CharacterCore.cpp"
                         ,0x53,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (USkeletalMeshComponent *)(*pcVar4)();
        return pUVar7;
      }
      if (2 < (byte)ISKM._0_1_) {
        local_res18[0] = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(local_res18,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      UWN_ISKM_Subsystem::RemoveInstance((UWN_ISKM_Subsystem *)this->_padding_,pFVar1);
      pFVar1->Value = 0xffffffff;
      (this->SoulInstanceInfo).SlotName = Count;
      (this->SoulInstanceInfo).SkeletalMesh.WeakPtr = (FWeakObjectPtr)0x0;
    }
    pUVar2 = (this->Profile).field0_0x0.DebugPtr;
    if ((pUVar2 != (UWN_ISKM_Profile *)0x0) && (*(char *)((longlong)&this->_padding_ + 1) != '\0'))
    {
      lVar3 = this->_padding_;
      (this->SoulInstanceInfo).SlotName = Count;
      this_00 = (UWN_ISKM_Subsystem *)this->_padding_;
      pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset
                         (*(USkeletalMeshComponent **)(lVar3 + 0x28));
      FVar6 = UWN_ISKM_Subsystem::AddInstance
                        (this_00,(USkeletalMesh *)&stack0x00000010,(UWN_ISKM_Profile *)pUVar8,
                         (int)pUVar2);
      (this->SoulInstanceInfo).InstKey = *(FWN_ISKM_InstanceKey *)CONCAT44(extraout_var,FVar6.Value)
      ;
      (this->SoulInstanceInfo).SkeletalMesh.WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  return *(USkeletalMeshComponent **)(this->_padding_ + 0x28);
}

// CreateSoulComponent_Impl @ 14a846dd0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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
UWN_ISKM_CharacterCore::CreateSoulComponent_Impl
          (UWN_ISKM_CharacterCore *this,FWN_CS_CharacterSoulInfo *param_1)

{
  byte *pbVar1;
  UWN_ISKM_Profile *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  USkeletalMeshComponent *pUVar6;
  UWN_ISKM_AnimComponent *this_00;
  USkeletalMesh *pUVar7;
  IWN_ISKM_Controller *pIVar8;
  
  if (this->_padding_ == 0) {
    pUVar6 = UWN_CS_CharacterCore::CreateSoulComponent_Impl((UWN_CS_CharacterCore *)this,param_1);
    return pUVar6;
  }
  this_00 = NewObject<UWN_ISKM_AnimComponent>
                      ((UObject *)this->_padding_,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pIVar8 = (IWN_ISKM_Controller *)&this->_padding_;
  if (this == (UWN_ISKM_CharacterCore *)0x0) {
    pIVar8 = (IWN_ISKM_Controller *)0x0;
  }
  this_00->ISKMController = pIVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (this->Profile).field0_0x0.DebugPtr, pUVar2 != (UWN_ISKM_Profile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this_00->Profile).field0_0x0 = (this->Profile).field0_0x0;
  pUVar7 = TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(&param_1->SkeletalMesh);
  if (pUVar7 == (USkeletalMesh *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4072013868627394358>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_CharacterCore.cpp"
                       ,0xca,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (USkeletalMeshComponent *)(*pcVar4)();
      return pUVar6;
    }
    return (USkeletalMeshComponent *)0x0;
  }
  (**(code **)(this_00->_padding_ + 0xb48))(this_00,pUVar7,1);
  lVar3 = this_00->_padding_;
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  (**(code **)(lVar3 + 0x420))(this_00,1);
  USceneComponent::SetVisibility((USceneComponent *)this_00,param_1->bIsSoulVisible,DirtyOnly);
  lVar3 = this_00->_padding_;
  *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
  (**(code **)(lVar3 + 0x508))
            (this_00,*(undefined8 *)(this->_padding_ + 0x1b8),
             &FAttachmentTransformRules::KeepRelativeTransform,0);
  UActorComponent::RegisterComponent((UActorComponent *)this_00);
  (**(code **)(this_00->_padding_ + 1000))(this_00);
  return (USkeletalMeshComponent *)this_00;
}

// Deinitialize @ 14a847320

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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

void __thiscall UWN_ISKM_CharacterCore::Deinitialize(UWN_ISKM_CharacterCore *this)

{
  IWN_ISKM_Controller *pIVar1;
  
  if ((UWN_ISKM_Subsystem *)this->_padding_ != (UWN_ISKM_Subsystem *)0x0) {
    pIVar1 = (IWN_ISKM_Controller *)&this->_padding_;
    if (this == (UWN_ISKM_CharacterCore *)0x0) {
      pIVar1 = (IWN_ISKM_Controller *)0x0;
    }
    UWN_ISKM_Subsystem::UnregisterController((UWN_ISKM_Subsystem *)this->_padding_,pIVar1);
  }
  (this->Profile).field0_0x0.DebugPtr = (UWN_ISKM_Profile *)0x0;
  UWN_CS_CharacterCore::Deinitialize((UWN_CS_CharacterCore *)this);
  return;
}

// DestroyPartComponent @ 14a847690

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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
UWN_ISKM_CharacterCore::DestroyPartComponent
          (UWN_ISKM_CharacterCore *this,EWN_CS_CharacterSlotName param_1)

{
  int *piVar1;
  TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
  *this_00;
  int iVar2;
  UWN_ISKM_Subsystem *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  UWN_CS_CharacterCore::DestroyPartComponent((UWN_CS_CharacterCore *)this,param_1);
  if (this->_padding_ != 0) {
    this_00 = &this->PartInstanceInfos;
    uVar6 = TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
            ::FindLastByPredicate<_UWN_ISKM_CharacterCore::DestroyPartComponent_::__l5::<lambda_1>_>
                      (this_00,(<lambda_1>)param_1,(this->PartInstanceInfos).ArrayNum);
    if (uVar6 != 0xffffffff) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4072013868627394379>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_CharacterCore.cpp"
                         ,0xb5,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (2 < (byte)ISKM._0_1_) {
        WN_CS_GetCharacterSlotNameString(&local_38,param_1);
        local_res8 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res8,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&ISKM);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      this_01 = (UWN_ISKM_Subsystem *)this->_padding_;
      uVar9 = ~uVar6 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar6 < (this->PartInstanceInfos).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UWN_ISKM_Subsystem::RemoveInstance
                (this_01,(FWN_ISKM_InstanceKey *)
                         ((this_00->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10 + 4));
      uVar7 = 0;
      if ((int)uVar6 < (this->PartInstanceInfos).ArrayNum) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->PartInstanceInfos).ArrayNum;
      pFVar3 = (this_00->AllocatorInstance).Data;
      iVar8 = iVar2 + ~uVar6;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar6 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
                (longlong)iVar8 << 4);
      }
      piVar1 = &(this->PartInstanceInfos).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,&this_00->AllocatorInstance,(this->PartInstanceInfos).ArrayNum,
                 &(this->PartInstanceInfos).ArrayMax);
    }
  }
  return;
}

// DestroySoulComponent @ 14a847ad0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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

void __thiscall UWN_ISKM_CharacterCore::DestroySoulComponent(UWN_ISKM_CharacterCore *this)

{
  UWN_CS_CharacterCore::DestroySoulComponent((UWN_CS_CharacterCore *)this);
  if (((UWN_ISKM_Subsystem *)this->_padding_ != (UWN_ISKM_Subsystem *)0x0) &&
     ((this->SoulInstanceInfo).InstKey.Value != 0xffffffff)) {
    UWN_ISKM_Subsystem::RemoveInstance
              ((UWN_ISKM_Subsystem *)this->_padding_,&(this->SoulInstanceInfo).InstKey);
    (this->SoulInstanceInfo).SlotName = Count;
    (this->SoulInstanceInfo).SkeletalMesh.WeakPtr = (FWeakObjectPtr)0x0;
    (this->SoulInstanceInfo).InstKey.Value = 0xffffffff;
  }
  return;
}

// GetPrivateStaticClass @ 14a84b200

UClass * __cdecl UWN_ISKM_CharacterCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_CharacterCore",
               &Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_CharacterCore,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_ISKM_CharacterCore>,
               InternalVTableHelperCtorCaller<UWN_ISKM_CharacterCore>,local_res8,
               UWN_CS_CharacterCore::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_CharacterCore.InnerSingleton;
}

// ISKM_DestroyAllComponents @ 14a84c1f0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_ISKM_CharacterCore::ISKM_DestroyAllComponents(UWN_ISKM_CharacterCore *this)

{
  int *piVar1;
  int iVar2;
  UWorld *pUVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  pUVar3 = AActor::GetWorld((AActor *)this[-1]._padding_);
  if (pUVar3 != (UWorld *)0x0) {
    if (*(int *)((longlong)&this->_padding_ + 4) != -1) {
      UWN_ISKM_Subsystem::RemoveInstance
                ((UWN_ISKM_Subsystem *)this->_padding_,
                 (FWN_ISKM_InstanceKey *)((longlong)&this->_padding_ + 4));
      *(undefined1 *)&this->_padding_ = 0x2f;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
      this->_padding_ = 0;
    }
    iVar2 = (int)this->_padding_;
    lVar4 = this->_padding_;
    lVar5 = (longlong)iVar2 * 0x10 + lVar4;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar4 == lVar5) break;
      if (*(int *)(lVar4 + 4) != -1) {
        UWN_ISKM_Subsystem::RemoveInstance
                  ((UWN_ISKM_Subsystem *)this->_padding_,(FWN_ISKM_InstanceKey *)(lVar4 + 4));
      }
      lVar4 = lVar4 + 0x10;
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  return;
}

// ISKM_GetLocation @ 14a84c340

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

TVector<double> * __thiscall
UWN_ISKM_CharacterCore::ISKM_GetLocation
          (UWN_ISKM_CharacterCore *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = *(longlong *)(this[-1]._padding_ + 0x1b8);
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// ISKM_GetLodFragment @ 14a84c440

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_ISKM_LodFragment * __thiscall
UWN_ISKM_CharacterCore::ISKM_GetLodFragment(UWN_ISKM_CharacterCore *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FWN_ISKM_LodFragment *pFVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return (FWN_ISKM_LodFragment *)0x0;
  }
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWN_ISKM_LodFragment *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FWN_ISKM_LodFragment *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x68));
}

// ISKM_GetLodFragment_Mutable @ 14a84c560

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_ISKM_LodFragment * __thiscall
UWN_ISKM_CharacterCore::ISKM_GetLodFragment_Mutable(UWN_ISKM_CharacterCore *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FWN_ISKM_LodFragment *pFVar5;
  uint uVar6;
  
  uVar1 = (uint)this->_padding_;
  if (uVar1 == 0xffffffff) {
    return (FWN_ISKM_LodFragment *)0x0;
  }
  lVar2 = this->_padding_;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x70)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWN_ISKM_LodFragment *)(*pcVar3)();
      return pFVar5;
    }
  }
  return (FWN_ISKM_LodFragment *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x68));
}

// ISKM_PostUpdateController @ 14a84c700

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall
UWN_ISKM_CharacterCore::ISKM_PostUpdateController
          (UWN_ISKM_CharacterCore *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  <lambda_1> <Var3;
  USceneComponent *pUVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  
  puVar6 = (uint *)(**(code **)(this->_padding_ + 0x18))();
  uVar8 = *puVar6 >> 1;
  if (*(char *)((longlong)&this[-1]._padding_ + 1) != '\0') {
    if (((uVar8 & 1) == 0) && (*(int *)((longlong)&this->_padding_ + 4) != -1)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    USceneComponent::SetVisibility(*(USceneComponent **)(this[-1]._padding_ + 0x28),bVar7,DirtyOnly)
    ;
  }
  puVar9 = (undefined8 *)this[-1]._padding_;
  iVar2 = (int)this[-1]._padding_;
  puVar1 = puVar9 + iVar2;
  while( true ) {
    if ((int)this[-1]._padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWN_CS_CharacterPart>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar1) break;
    <Var3.part = (UWN_CS_CharacterPart *)*puVar9;
    if (<Var3.part != (UWN_CS_CharacterPart *)0x0) {
      iVar5 = TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
              ::
              FindLastByPredicate<_UWN_ISKM_CharacterCore::ISKM_PostUpdateController_::__l9::<lambda_1>_>
                        ((TArray<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,TSizedDefaultAllocator<32>_>
                          *)&this->_padding_,<Var3,(int)this->_padding_);
      if ((<Var3.part)->ResourceType == SkeletalMesh) {
        if (((uVar8 & 1) == 0) && (iVar5 != -1)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        USceneComponent::SetVisibility
                  (((<Var3.part)->Component).field0_0x0.DebugPtr,bVar7,DirtyOnly);
        pUVar4 = ((<Var3.part)->Component).field0_0x0.DebugPtr;
        (**(code **)(pUVar4->_padding_ + 0x420))(pUVar4,(byte)uVar8 & 1);
      }
    }
    puVar9 = puVar9 + 1;
  }
  return;
}

// ISKM_PostUpdateInstances @ 14a84c8f0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_ISKM_CharacterCore::ISKM_PostUpdateInstances(UWN_ISKM_CharacterCore *this,float param_1)

{
  return;
}

// ISKM_PreUpdateController @ 14a84c960

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_ISKM_CharacterCore::ISKM_PreUpdateController
          (UWN_ISKM_CharacterCore *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  return;
}

// ISKM_PreUpdateInstances @ 14a84d060

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> * __thiscall
UWN_ISKM_CharacterCore::ISKM_PreUpdateInstances
          (UWN_ISKM_CharacterCore *this,
          TArray<FWN_ISKM_InstanceTask,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ISKM_UpdateAnimation_AnyThread @ 14a84deb0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_ISKM_CharacterCore::ISKM_UpdateAnimation_AnyThread
          (UWN_ISKM_CharacterCore *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TQuat<double> *pTVar5;
  UWN_ISKM_AnimComponent *this_00;
  __FWN_SkeletalMeshInstanceInfo *p_Var6;
  __FWN_SkeletalMeshInstanceInfo *p_Var7;
  char local_res8 [8];
  FWN_ISKM_LodFragment *local_res10 [2];
  byte local_res20 [8];
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  float local_cc;
  uint *local_c8 [2];
  longlong *local_b8;
  char *local_b0;
  int *local_a8;
  int *local_a0;
  float *local_98;
  FWN_ISKM_LodFragment **local_90;
  byte *local_88;
  longlong local_80;
  uint **local_78;
  TRotator<double> local_68;
  TQuat<double> local_48;
  
  local_res10[0] = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_68.Pitch = 0.0;
    local_68.Yaw = 0.0;
    local_68.Roll = 0.0;
    pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_68,&local_48);
    sZeroTransform.Rotation.XY.m128d_f64[0] = pTVar5->X;
    sZeroTransform.Rotation.XY.m128d_f64[1] = pTVar5->Y;
    sZeroTransform.Rotation.ZW.m128d_f64[0] = pTVar5->Z;
    sZeroTransform.Rotation.ZW.m128d_f64[1] = pTVar5->W;
    sZeroTransform.Translation.ZW.m128d_f64[1] = 0.0;
    sZeroTransform.Translation.ZW.m128d_f64[0] =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    sZeroTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
    sZeroTransform.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    sZeroTransform.Translation.XY.m128d_f64[0] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    sZeroTransform.Translation.XY.m128d_f64[1] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    sZeroTransform.Scale3D.XY.m128d_f64[0] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    sZeroTransform.Scale3D.XY.m128d_f64[1] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    _Init_thread_footer(&::_TSS0);
  }
  local_c8[0] = (uint *)(**(code **)(this->_padding_ + 0x18))(this);
  lVar2 = this[-1]._padding_;
  this_00 = (UWN_ISKM_AnimComponent *)0x0;
  local_res20[0] = (byte)(*local_c8[0] >> 1) & 1;
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    pUVar4 = UWN_ISKM_AnimComponent::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x28),pUVar4);
    if (bVar3) {
      this_00 = *(UWN_ISKM_AnimComponent **)(lVar2 + 0x28);
    }
  }
  if ((*local_c8[0] & 8) != 0) {
    UWN_ISKM_AnimComponent::UpdateBlendInfos(this_00);
  }
  local_res8[0] = this_00->bHasValidBlendInfos;
  local_cc = 0.0;
  local_d0 = 0;
  local_d4 = 0;
  if (((bool)local_res8[0] != false) &&
     (local_d0 = this_00->LastBlendInfos[0].GlobalFrameIndex, local_d4 = local_d0, local_cc = 0.0,
     this_00->NumLastBlendInfos == 2)) {
    local_d4 = this_00->LastBlendInfos[1].GlobalFrameIndex;
    local_cc = this_00->LastBlendInfos[1].BlendWeight;
  }
  local_b0 = local_res8;
  local_a8 = &local_d0;
  local_a0 = &local_d4;
  local_98 = &local_cc;
  local_90 = local_res10;
  local_88 = local_res20;
  local_78 = local_c8;
  local_80 = *(longlong *)(this[-1]._padding_ + 0x28) + 0x1f0;
  local_b8 = &this[-1]._padding_;
  `UWN_ISKM_CharacterCore::ISKM_UpdateAnimation_AnyThread'::__l2::<lambda_1>::operator()
            (&local_b8,(__FWN_SkeletalMeshInstanceInfo *)&this->_padding_);
  iVar1 = (int)this->_padding_;
  p_Var6 = (__FWN_SkeletalMeshInstanceInfo *)this->_padding_;
  p_Var7 = p_Var6 + iVar1;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<UWN_ISKM_CharacterCore::__FWN_SkeletalMeshInstanceInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (p_Var6 == p_Var7) break;
    `UWN_ISKM_CharacterCore::ISKM_UpdateAnimation_AnyThread'::__l2::<lambda_1>::operator()
              (&local_b8,p_Var6);
    p_Var6 = p_Var6 + 1;
  }
  return;
}

// ISKM_UpdateInstance_AnyThread @ 14a84eb80

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall
UWN_ISKM_CharacterCore::ISKM_UpdateInstance_AnyThread
          (UWN_ISKM_CharacterCore *this,int param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6)

{
  return;
}

// Initialize @ 14a84fca0

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
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
UWN_ISKM_CharacterCore::Initialize
          (UWN_ISKM_CharacterCore *this,AActor *param_1,FWN_CS_CharacterSoulInfo *param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  longlong *plVar8;
  UClass *pUVar9;
  USkeletalMesh *pUVar10;
  longlong lVar11;
  FString *this_01;
  size_t sVar12;
  UWN_ISKM_Profile *pUVar13;
  UWorld *this_02;
  UWN_ISKM_Subsystem *this_03;
  ulonglong uVar14;
  wchar_t *_Str;
  FAssetData *pFVar15;
  ForAnyElementType this_04;
  FName local_res20;
  FString local_68;
  FSoftObjectPath local_58;
  FString local_38;
  
  FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_res20,"AssetRegistry");
  FVar2 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UWN_ISKM_CharacterCore::Initialize'::__l2::_dynamic_atexit_destructor_for__sAssetDatas__
          );
    _Init_thread_footer(&::_TSS0);
  }
  iVar1 = sAssetDatas.ArrayMax;
  if (sAssetDatas.ArrayMax < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)sAssetDatas.ArrayMax);
  }
  DestructItems<FAssetData,int>
            ((FAssetData *)sAssetDatas.AllocatorInstance.Data,sAssetDatas.ArrayNum);
  sAssetDatas.ArrayNum = 0;
  if (sAssetDatas.ArrayMax != iVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,&sAssetDatas.AllocatorInstance,0,&sAssetDatas.ArrayMax);
  }
  pcVar3 = *(code **)(*plVar8 + 0x30);
  pUVar9 = UWN_ISKM_Profile::StaticClass();
  UStruct::GetStructPathName((UStruct *)pUVar9,&local_58.AssetPath);
  local_38.Data.AllocatorInstance.Data._0_4_ = local_58.AssetPath.PackageName.ComparisonIndex.Value;
  local_38.Data.AllocatorInstance.Data._4_4_ = local_58.AssetPath.PackageName.Number;
  local_38.Data.ArrayNum = local_58.AssetPath.AssetName.ComparisonIndex.Value;
  local_38.Data.ArrayMax = local_58.AssetPath.AssetName.Number;
  cVar4 = (*pcVar3)(plVar8,&local_38,&sAssetDatas,1);
  if (cVar4 == '\0') {
    return;
  }
  pUVar10 = TSoftObjectPtr<USkeletalMesh>::LoadSynchronous(&param_2->SkeletalMesh);
  lVar11 = (**(code **)(pUVar10->_padding_ + 0x408))(pUVar10);
  local_res20 = *(FName *)(lVar11 + 0x18);
  ::FName::ToString(&local_res20,&local_68);
  iVar1 = sAssetDatas.ArrayNum;
  uVar14 = (ulonglong)sAssetDatas.ArrayNum;
  pFVar15 = (FAssetData *)(sAssetDatas.AllocatorInstance.Data + uVar14 * 0x68);
  this_04 = sAssetDatas.AllocatorInstance;
  do {
    if ((int)uVar14 != iVar1) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if ((FAssetData *)this_04.Data == pFVar15) goto LAB_14a84ff32;
    FAssetData::GetSoftObjectPath((FAssetData *)this_04.Data,&local_58);
    this_01 = FSoftObjectPath::ToString(&local_58,&local_38);
    if (local_68.Data.ArrayNum == 0) {
      _Str = L"";
LAB_14a84fe6d:
      sVar12 = wcslen(_Str);
      iVar5 = ::FString::Find(this_01,_Str,(int)sVar12,IgnoreCase,FromStart,-1);
    }
    else {
      _Str = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14a84fe6d;
      iVar5 = -1;
    }
    if ((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                         (uint)local_38.Data.AllocatorInstance.Data) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_38.Data.AllocatorInstance.Data._4_4_,
                                     (uint)local_38.Data.AllocatorInstance.Data));
    }
    if (iVar5 != -1) break;
    if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
    }
    uVar14 = (ulonglong)(uint)sAssetDatas.ArrayNum;
    this_04.Data = this_04.Data + 0x68;
  } while( true );
  pUVar13 = (UWN_ISKM_Profile *)FSoftObjectPath::TryLoad(&local_58,(FUObjectSerializeContext *)0x0);
  if (pUVar13 != (UWN_ISKM_Profile *)0x0) {
    pUVar9 = UWN_ISKM_Profile::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) goto LAB_14a84ff06;
  }
  pUVar13 = (UWN_ISKM_Profile *)0x0;
LAB_14a84ff06:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UWN_ISKM_Profile *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->Profile).field0_0x0.DebugPtr = pUVar13;
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
LAB_14a84ff32:
  if ((this->Profile).field0_0x0.DebugPtr != (UWN_ISKM_Profile *)0x0) {
    this_02 = AActor::GetWorld(param_1);
    this_03 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_02);
    UWN_ISKM_Subsystem::RegisterController(this_03,(IWN_ISKM_Controller *)&this->_padding_);
  }
  UWN_CS_CharacterCore::Initialize((UWN_CS_CharacterCore *)this,param_1,param_2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUWN_ISKM_CharacterCore @ 14a855f20

void __cdecl UWN_ISKM_CharacterCore::StaticRegisterNativesUWN_ISKM_CharacterCore(void)

{
  return;
}

