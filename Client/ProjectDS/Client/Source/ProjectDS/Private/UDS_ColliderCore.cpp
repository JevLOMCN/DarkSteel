// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b459c10

UClass * __cdecl UDS_ColliderCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColliderCore",
               &Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton,
               StaticRegisterNativesUDS_ColliderCore,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ColliderCore>,
               InternalVTableHelperCtorCaller<UDS_ColliderCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton;
}

// UDS_ColliderCore @ 14b45c550

UDS_ColliderCore * __thiscall
UDS_ColliderCore::UDS_ColliderCore(UDS_ColliderCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ColliderCore__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ColliderComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColliderComponents).ArrayNum = 0;
  (this->ColliderComponents).ArrayMax = 0;
  return this;
}

// ~UDS_ColliderCore @ 14b45cf90

void __thiscall UDS_ColliderCore::~UDS_ColliderCore(UDS_ColliderCore *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ColliderCore__6B_;
  pFVar1 = (this->ColliderComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e690

UClass * __cdecl UDS_ColliderCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ColliderCore",
               &Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton,
               StaticRegisterNativesUDS_ColliderCore,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ColliderCore>,
               InternalVTableHelperCtorCaller<UDS_ColliderCore>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ColliderCore.InnerSingleton;
}

// StaticRegisterNativesUDS_ColliderCore @ 14b45f200

void __cdecl UDS_ColliderCore::StaticRegisterNativesUDS_ColliderCore(void)

{
  return;
}

// UDS_ColliderCore @ 14bc2ab30

UDS_ColliderCore * __thiscall
UDS_ColliderCore::UDS_ColliderCore(UDS_ColliderCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ColliderCore__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ColliderComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColliderComponents).ArrayNum = 0;
  (this->ColliderComponents).ArrayMax = 0;
  return this;
}

// AddColliderComponent @ 14bc2cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_ColliderCore::AddColliderComponent(UDS_ColliderCore *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_ColliderComponent *this_00;
  longlong *plVar8;
  undefined1 auStackY_108 [32];
  UDS_ColliderComponent *local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pUVar6 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
  FObjectInitializer::AssertIfInConstructor
            (pUVar6,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_ColliderComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = pUVar6;
  this_00 = (UDS_ColliderComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (this_00 == (UDS_ColliderComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7585797269991981098>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                       ,0x2a,"newComponent != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UDS_ColliderComponent::InitCollider
              (this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr,param_1);
    local_b8[0] = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar2 = (this->ColliderComponents).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_b8) &&
       ((FScriptContainerElement *)local_b8 <
        pFVar2 + (longlong)(this->ColliderComponents).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ColliderComponents).ArrayNum;
    piVar1 = &(this->ColliderComponents).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ColliderComponents).AllocatorInstance,piVar1);
    }
    (this->ColliderComponents).ArrayNum = iVar5 + 1;
    *(UDS_ColliderComponent **)
     ((this->ColliderComponents).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_b8[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_b8[0] != (UDS_ColliderComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b8[0]);
    }
  }
  return;
}

// Deinitialize @ 14bc386b0

void __thiscall UDS_ColliderCore::Deinitialize(UDS_ColliderCore *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UDS_ColliderComponent *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar6 = (this->ColliderComponents).AllocatorInstance.Data;
  iVar2 = (this->ColliderComponents).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ColliderComponents).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_ColliderComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar5) {
      this_00 = (UDS_ColliderComponent *)FWeakObjectPtr::Get(&local_res10);
      (this_00->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
      UDS_ColliderComponent::RemoveAllCharacterDelegate(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this_00);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7585797269991981086>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                         ,0x1e,"collideComponent.IsValid()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// GetShapeComponents @ 14bc43ad0

TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ColliderCore::GetShapeComponents
          (UDS_ColliderCore *this,
          TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FWeakObjectPtr *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UObject *local_res20;
  FWeakObjectPtr local_58 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (this->ColliderComponents).AllocatorInstance.Data;
  iVar2 = (this->ColliderComponents).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ColliderComponents).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_ColliderComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pUVar8 = *(UObject **)pFVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    bVar5 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar5) {
      pUVar8 = FWeakObjectPtr::Get(&local_res10);
      pUVar8 = *(UObject **)&pUVar8[1].field_0x20;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar8 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
      }
      local_58[0].ObjectIndex = 0;
      local_58[0].ObjectSerialNumber = 0;
      local_res20 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=(local_58,(FObjectPtr)&local_res20);
      pFVar3 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= local_58) && (local_58 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar4)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_58[0];
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7585797269991981126>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                         ,0x46,"collideComponent.IsValid()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return __return_storage_ptr__;
}

// Initialize @ 14bc487d0

void __thiscall
UDS_ColliderCore::Initialize(UDS_ColliderCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    (this->OwnerActor).WeakPtr = local_res10[0];
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7585797269991981072>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                       ,0x10,"InActor.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveColliderComponent @ 14bc5a1f0

void __thiscall UDS_ColliderCore::RemoveColliderComponent(UDS_ColliderCore *this,int param_1)

{
  TArray<TObjectPtr<UDS_ColliderComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  UDS_ColliderComponent *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pTVar1 = &this->ColliderComponents;
  for (uVar7 = 0; (-1 < (int)uVar7 && ((int)uVar7 < (this->ColliderComponents).ArrayNum));
      uVar7 = uVar7 + 1) {
    if ((int)uVar7 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = *(UDS_ColliderComponent **)
               ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
    if (this_00->CollideID == param_1) {
      (this_00->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
      UDS_ColliderComponent::RemoveAllCharacterDelegate(this_00);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this_00);
      uVar5 = 0;
      if ((int)uVar7 < (this->ColliderComponents).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
      iVar6 = (this->ColliderComponents).ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
      }
      piVar2 = &(this->ColliderComponents).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,(this->ColliderComponents).ArrayNum,
                 &(this->ColliderComponents).ArrayMax);
      uVar7 = uVar7 - 1;
    }
  }
  return;
}

