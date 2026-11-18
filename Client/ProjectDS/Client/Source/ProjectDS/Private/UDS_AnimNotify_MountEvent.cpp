// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b417d10

UClass * __cdecl UDS_AnimNotify_MountEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_MountEvent",
               &Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_MountEvent,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_MountEvent>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_MountEvent>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton;
}

// UDS_AnimNotify_MountEvent @ 14b41b460

UDS_AnimNotify_MountEvent * __thiscall
UDS_AnimNotify_MountEvent::UDS_AnimNotify_MountEvent
          (UDS_AnimNotify_MountEvent *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->MountEvent = None;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_MountEvent__6B_;
  return this;
}

// UDS_AnimNotify_MountEvent @ 14b41b490

UDS_AnimNotify_MountEvent * __thiscall
UDS_AnimNotify_MountEvent::UDS_AnimNotify_MountEvent
          (UDS_AnimNotify_MountEvent *this,FObjectInitializer *param_1)

{
  UDS_AnimNotify::UDS_AnimNotify((UDS_AnimNotify *)this,param_1);
  this->MountEvent = None;
  this->_padding_ = (longlong)&___7UDS_AnimNotify_MountEvent__6B_;
  return this;
}

// ~UDS_AnimNotify_MountEvent @ 14b41bc10

void __thiscall
UDS_AnimNotify_MountEvent::~UDS_AnimNotify_MountEvent(UDS_AnimNotify_MountEvent *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41db50

UClass * __cdecl UDS_AnimNotify_MountEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_MountEvent",
               &Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_MountEvent,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_MountEvent>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_MountEvent>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_MountEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_MountEvent @ 14b41e280

void __cdecl UDS_AnimNotify_MountEvent::StaticRegisterNativesUDS_AnimNotify_MountEvent(void)

{
  return;
}

// Notify @ 14b8d2420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_MountEvent::Notify
          (UDS_AnimNotify_MountEvent *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FDS_EntityBase *pFVar7;
  UObject *pUVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  UObject *local_38;
  FDestructionSentinel local_30;
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar8 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_38 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_38);
    pFVar7 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_48)
    ;
    if ((pFVar7 != (FDS_EntityBase *)0x0) && (pFVar7->EntityType == NPC)) {
      UDS_AbilityDataSet::GetAbilityData<UDS_NPCMountAbilityData>
                ((ulong64 *)&local_40,(EDS_AbilityTagType *)&pFVar7->EntityID);
      bVar3 = TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NPCMountAbilityData,FWeakObjectPtr> *)&local_40,
                         (void *)0x0);
      if (!bVar3) {
        pUVar8 = FWeakObjectPtr::Get(&local_40);
        this_00 = &pUVar8[2].field_0x8;
        bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar3) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_30);
          *(int *)&pUVar8[2].field_0x24 = *(int *)&pUVar8[2].field_0x24 + 1;
          bVar3 = false;
          uVar9 = *(int *)&pUVar8[2].field_0x18 - 1;
          if (-1 < (int)uVar9) {
            lVar10 = (longlong)(int)uVar9 << 4;
            bVar3 = false;
            do {
              uVar6 = 0;
              if ((int)uVar9 < *(int *)&pUVar8[2].field_0x18) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((*(int *)(*(longlong *)&pUVar8[2].field_0x10 + 8 + lVar10) == 0) ||
                  (plVar1 = *(longlong **)(*(longlong *)&pUVar8[2].field_0x10 + lVar10),
                  plVar1 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
                bVar3 = true;
              }
              lVar10 = lVar10 + -0x10;
              uVar9 = uVar9 - 1;
            } while (-1 < (int)uVar9);
          }
          *(int *)&pUVar8[2].field_0x24 = *(int *)&pUVar8[2].field_0x24 + -1;
          if (bVar3) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_30.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
          }
        }
      }
    }
  }
  return;
}

