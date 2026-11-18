// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 21

// StaticClass @ 14d0907b0

UClass * __cdecl ULiveLinkControllerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkControllerBase",
               &Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton,
               StaticRegisterNativesULiveLinkControllerBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkControllerBase>,
               InternalVTableHelperCtorCaller<ULiveLinkControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton;
}

// ULiveLinkControllerBase @ 14d091d80

ULiveLinkControllerBase * __thiscall
ULiveLinkControllerBase::ULiveLinkControllerBase
          (ULiveLinkControllerBase *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  this_00 = &(this->ComponentPicker).OtherActor;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedSubject).Subject.Name = (FName)0x0;
  (this->SelectedSubject).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ULiveLinkControllerBase @ 14d091df0

ULiveLinkControllerBase * __thiscall
ULiveLinkControllerBase::ULiveLinkControllerBase
          (ULiveLinkControllerBase *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  this_00 = &(this->ComponentPicker).OtherActor;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  (this->ComponentPicker)._padding_ = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->AttachedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedSubject).Subject.Name = (FName)0x0;
  (this->SelectedSubject).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~ULiveLinkControllerBase @ 14d092430

void __thiscall ULiveLinkControllerBase::~ULiveLinkControllerBase(ULiveLinkControllerBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkControllerBase__6B_;
  pvVar1 = (void *)(this->ComponentPicker)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Cleanup @ 14d092ad0

void __thiscall ULiveLinkControllerBase::Cleanup(ULiveLinkControllerBase *this)

{
  return;
}

// GetAttachedComponent @ 14d093170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
ULiveLinkControllerBase::GetAttachedComponent(ULiveLinkControllerBase *this)

{
  AActor *pAVar1;
  UActorComponent *pUVar2;
  
  pAVar1 = GetOuterActor(this);
  pUVar2 = FComponentReference::GetComponent(&this->ComponentPicker,pAVar1);
  return pUVar2;
}

// GetControllerForRole @ 14d0933a0

TSubclassOf<ULiveLinkControllerBase> __cdecl
ULiveLinkControllerBase::GetControllerForRole(TSubclassOf<ULiveLinkRole> *param_1)

{
  UClass *pUVar1;
  TSubclassOf<ULiveLinkRole> *in_RDX;
  TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> local_18;
  
  GetControllersForRole(&local_18,in_RDX);
  if (0 < local_18.ArrayNum) {
    pUVar1 = *(UClass **)local_18.AllocatorInstance.Data;
    (param_1->Class).field0_0x0.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FMemory::Free(local_18.AllocatorInstance.Data);
    return (TSubclassOf<ULiveLinkControllerBase>)(TObjectPtr<UClass>)param_1;
  }
  (param_1->Class).field0_0x0.DebugPtr = (UClass *)0x0;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (TSubclassOf<ULiveLinkControllerBase>)(TObjectPtr<UClass>)param_1;
}

// GetControllersForRole @ 14d093420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> * __cdecl
ULiveLinkControllerBase::GetControllersForRole
          (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  uint uVar12;
  FUObjectCppClassStaticFunctions local_res18 [2];
  UObject *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  TObjectIterator<UClass> local_50;
  
  local_50.Index = 0xffffffff;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ObjectArray.ArrayNum = 0;
  local_50.ObjectArray.ArrayMax = 0;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar9,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_50);
  do {
    lVar11 = (longlong)local_50.Index;
    if ((local_50.Index < 0) || (local_50.ObjectArray.ArrayNum <= local_50.Index)) {
      if (local_50.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      }
      else {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    uVar12 = 0;
    uVar7 = uVar12;
    if (local_50.Index < local_50.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_50.Index >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                  (*pcVar3)();
        return pTVar10;
      }
    }
    lVar11 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    iVar8 = local_50.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton == (UClass *)0x0) {
      local_res18[0].AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/LiveLinkComponents",L"LiveLinkControllerBase",
                 &Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton,
                 StaticRegisterNativesULiveLinkControllerBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
                 CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkControllerBase>,
                 InternalVTableHelperCtorCaller<ULiveLinkControllerBase>,local_res18,
                 UObject::StaticClass,UObject::StaticClass);
      iVar8 = local_50.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton != (UClass *)0x0)
      goto LAB_14d0935a5;
    }
    else {
LAB_14d0935a5:
      iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton)->_padding_;
      if ((*(int *)(lVar11 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar11 = (longlong)local_50.Index;
        uVar7 = uVar12;
        if (local_50.Index < iVar8) {
          uVar7 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          iVar8 = local_50.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar11 = (longlong)local_50.Index;
          if (local_50.Index < iVar8) {
            uVar12 = (uint)~local_50.Index >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          pUVar9 = *(UClass **)(local_50.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
          if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar9);
          }
          pUVar2 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar9 = StaticClass();
          iVar8 = (int)pUVar9->_padding_;
          if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar8) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
               &pUVar9->_padding_)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          cVar5 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,param_1);
          if (cVar5 != '\0') {
            lVar11 = (longlong)local_50.Index;
            uVar7 = 0;
            if (local_50.Index < local_50.ObjectArray.ArrayNum) {
              uVar7 = (uint)~local_50.Index >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar10;
            }
            local_68 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_68);
            }
            if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8
                )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<TSubclassOf<ULiveLinkControllerBase>,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar10;
            }
            iVar8 = (int)local_58;
            if ((int)local_58 == local_58._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_60,(int *)((longlong)&local_58 + 4));
            }
            local_58 = CONCAT44(local_58._4_4_,iVar8 + 1);
            *(UObject **)(local_60.Data + (longlong)iVar8 * 8) = local_68;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_68);
            }
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_50);
  } while( true );
}

// GetDesiredComponentClass @ 14d093880

TSubclassOf<UActorComponent> __thiscall
ULiveLinkControllerBase::GetDesiredComponentClass(ULiveLinkControllerBase *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UActorComponent_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetOuterActor @ 14d093940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall ULiveLinkControllerBase::GetOuterActor(ULiveLinkControllerBase *this)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (AActor *)this->_padding_;
  while( true ) {
    if (pAVar2 == (AActor *)0x0) {
      return (AActor *)0x0;
    }
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) break;
    if (pAVar2 != (AActor *)0x0) {
      pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return (AActor *)(pAVar2->AttachmentReplication).RotationOffset.Pitch;
      }
    }
    pAVar2 = (AActor *)pAVar2->_padding_;
  }
  return pAVar2;
}

// GetPrivateStaticClass @ 14d093b40

UClass * __cdecl ULiveLinkControllerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkComponents",L"LiveLinkControllerBase",
               &Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton,
               StaticRegisterNativesULiveLinkControllerBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkControllerBase>,
               InternalVTableHelperCtorCaller<ULiveLinkControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkControllerBase.InnerSingleton;
}

// GetSelectedSubject @ 14d0940f0

FLiveLinkSubjectRepresentation * __thiscall
ULiveLinkControllerBase::GetSelectedSubject
          (ULiveLinkControllerBase *this,FLiveLinkSubjectRepresentation *__return_storage_ptr__)

{
  UClass *pUVar1;
  
  (__return_storage_ptr__->Subject).Name = (this->SelectedSubject).Subject.Name;
  pUVar1 = (this->SelectedSubject).Role.Class.field0_0x0.DebugPtr;
  (__return_storage_ptr__->Role).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return __return_storage_ptr__;
}

// IsRoleSupported @ 14d0942c0

bool __thiscall
ULiveLinkControllerBase::IsRoleSupported
          (ULiveLinkControllerBase *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  return false;
}

// OnComponentToControlChanged @ 14d0943b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkControllerBase::OnComponentToControlChanged(ULiveLinkControllerBase *this)

{
  AActor *pAVar1;
  UActorComponent *local_res8 [4];
  
  pAVar1 = GetOuterActor(this);
  local_res8[0] = FComponentReference::GetComponent(&this->ComponentPicker,pAVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=(&(this->AttachedComponent).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// OnEvaluateRegistered @ 14d094400

void __thiscall ULiveLinkControllerBase::OnEvaluateRegistered(ULiveLinkControllerBase *this)

{
  return;
}

// PostLoad @ 14d094b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULiveLinkControllerBase::PostLoad(ULiveLinkControllerBase *this)

{
  AActor *pAVar1;
  UActorComponent *local_res8 [4];
  
  UObject::PostLoad((UObject *)this);
  pAVar1 = GetOuterActor(this);
  local_res8[0] = FComponentReference::GetComponent(&this->ComponentPicker,pAVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8[0] != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  FWeakObjectPtr::operator=(&(this->AttachedComponent).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetAttachedComponent @ 14d094ee0

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
ULiveLinkControllerBase::SetAttachedComponent
          (ULiveLinkControllerBase *this,UActorComponent *param_1)

{
  UActorComponent *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UActorComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->AttachedComponent).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// SetSelectedSubject @ 14d0953e0

void __thiscall
ULiveLinkControllerBase::SetSelectedSubject
          (ULiveLinkControllerBase *this,FLiveLinkSubjectRepresentation *param_1)

{
  UClass *pUVar1;
  
  (this->SelectedSubject).Subject.Name = (param_1->Subject).Name;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    (this->SelectedSubject).Role.Class.field0_0x0 = (param_1->Role).Class.field0_0x0;
    return;
  }
  pUVar1 = (param_1->Role).Class.field0_0x0.DebugPtr;
  if (pUVar1 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->SelectedSubject).Role.Class.field0_0x0 = (param_1->Role).Class.field0_0x0;
    return;
  }
  (this->SelectedSubject).Role.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return;
}

// StaticRegisterNativesULiveLinkControllerBase @ 14d0955f0

void __cdecl ULiveLinkControllerBase::StaticRegisterNativesULiveLinkControllerBase(void)

{
  return;
}

// Tick @ 14d095620

void __thiscall
ULiveLinkControllerBase::Tick
          (ULiveLinkControllerBase *this,float param_1,FLiveLinkSubjectFrameData *param_2)

{
  return;
}

// Tick @ 14d095630

void __thiscall
ULiveLinkControllerBase::Tick
          (ULiveLinkControllerBase *this,float param_1,FLiveLinkSubjectRepresentation *param_2)

{
  return;
}

