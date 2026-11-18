// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 18

// StaticClass @ 14ac04750

UClass * __cdecl ACustomizableSkeletalMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalMeshActor",
               &Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton,
               StaticRegisterNativesACustomizableSkeletalMeshActor,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACustomizableSkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ACustomizableSkeletalMeshActor>,local_res8,
               ASkeletalMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton;
}

// ACustomizableSkeletalMeshActor @ 14ac08ae0

ACustomizableSkeletalMeshActor * __thiscall
ACustomizableSkeletalMeshActor::ACustomizableSkeletalMeshActor
          (ACustomizableSkeletalMeshActor *this,FVTableHelper *param_1)

{
  ASkeletalMeshActor::ASkeletalMeshActor((ASkeletalMeshActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACustomizableSkeletalMeshActor__6B_;
  (this->CustomizableSkeletalComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizableSkeletalComponents).ArrayNum = 0;
  (this->CustomizableSkeletalComponents).ArrayMax = 0;
  (this->SkeletalMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshComponents).ArrayNum = 0;
  (this->SkeletalMeshComponents).ArrayMax = 0;
  (this->DebugMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->bDebugMaterialEnabled = false;
  this->bRemoveDebugMaterial = false;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableSkeletalMeshActorPrivate *)0x0;
  return this;
}

// ACustomizableSkeletalMeshActor @ 14ac08b40

ACustomizableSkeletalMeshActor * __thiscall
ACustomizableSkeletalMeshActor::ACustomizableSkeletalMeshActor
          (ACustomizableSkeletalMeshActor *this,FObjectInitializer *param_1)

{
  TArray<TObjectPtr<UCustomizableSkeletalComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<USkeletalMeshComponent>,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FObjectInitializer *pFVar8;
  FName *pFVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  ACustomizableSkeletalMeshActor *pAVar12;
  FScriptContainerElement *pFVar13;
  FName local_res18;
  FName local_res20;
  UObject **ppUVar14;
  ulonglong in_stack_ffffffffffffff90;
  FScriptContainerElement *pFVar15;
  UObject *local_48;
  UObject *local_40;
  
  pFVar8 = FObjectInitializer::Get();
  ASkeletalMeshActor::ASkeletalMeshActor((ASkeletalMeshActor *)this,pFVar8);
  this->_padding_ = (longlong)&___7ACustomizableSkeletalMeshActor__6B_;
  pTVar1 = &this->CustomizableSkeletalComponents;
  pTVar2 = &this->SkeletalMeshComponents;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->CustomizableSkeletalComponents).ArrayNum = 0;
  (this->CustomizableSkeletalComponents).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshComponents).ArrayNum = 0;
  (this->SkeletalMeshComponents).ArrayMax = 0;
  (this->DebugMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableSkeletalMeshActorPrivate *)0x0;
  this->bDebugMaterialEnabled = false;
  this->bRemoveDebugMaterial = false;
  pFVar9 = ::FName::FName(&local_res18,L"Private");
  FVar3 = *pFVar9;
  pUVar10 = Z_Construct_UClass_UCustomizableSkeletalMeshActorPrivate_NoRegister();
  in_stack_ffffffffffffff90 = in_stack_ffffffffffffff90 & 0xffffffffffffff00;
  pUVar11 = UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar10,pUVar10,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  (this->Private).field0_0x0.DebugPtr = (UCustomizableSkeletalMeshActorPrivate *)pUVar11;
  pFVar9 = ::FName::FName(&local_res20,L"CustomizableSkeletalComponent0");
  FVar3 = *pFVar9;
  pUVar10 = UCustomizableSkeletalComponent::StaticClass();
  pFVar15 = (FScriptContainerElement *)(in_stack_ffffffffffffff90 & 0xffffffffffffff00);
  ppUVar14 = (UObject **)&DAT_00000001;
  local_48 = UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar10,pUVar10,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  pFVar13 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar13 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar13 + (longlong)(this->CustomizableSkeletalComponents).ArrayMax * 8)) {
    ppUVar14 = &local_48;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    pFVar15 = pFVar13;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pAVar12 = (ACustomizableSkeletalMeshActor *)(*pcVar5)();
      return pAVar12;
    }
  }
  iVar7 = (this->CustomizableSkeletalComponents).ArrayNum;
  if (iVar7 == (this->CustomizableSkeletalComponents).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(this->CustomizableSkeletalComponents).ArrayMax);
  }
  (this->CustomizableSkeletalComponents).ArrayNum = iVar7 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  pUVar11 = (UObject *)this->_padding_;
  if (pUVar11 != (UObject *)0x0) {
    local_40 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar13 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 <
        pFVar13 + (longlong)(this->SkeletalMeshComponents).ArrayMax * 8)) {
      ppUVar14 = &local_40;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      pFVar15 = pFVar13;
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pAVar12 = (ACustomizableSkeletalMeshActor *)(*pcVar5)();
        return pAVar12;
      }
    }
    iVar7 = (this->SkeletalMeshComponents).ArrayNum;
    if (iVar7 == (this->SkeletalMeshComponents).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,&(this->SkeletalMeshComponents).ArrayMax);
    }
    (this->SkeletalMeshComponents).ArrayNum = iVar7 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_40);
    }
    iVar7 = (this->CustomizableSkeletalComponents).ArrayNum;
    pFVar13 = (FScriptContainerElement *)(longlong)iVar7;
    if (iVar7 < 1) {
      ppUVar14 = (UObject **)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      pFVar15 = pFVar13;
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pAVar12 = (ACustomizableSkeletalMeshActor *)(*pcVar5)();
        return pAVar12;
      }
    }
    plVar4 = *(longlong **)(pTVar1->AllocatorInstance).Data;
    (**(code **)(*plVar4 + 0x508))
              (plVar4,pUVar11,&FAttachmentTransformRules::KeepRelativeTransform,0,ppUVar14,pFVar15);
  }
  return this;
}

// ~ACustomizableSkeletalMeshActor @ 14ac0c980

void __thiscall
ACustomizableSkeletalMeshActor::~ACustomizableSkeletalMeshActor
          (ACustomizableSkeletalMeshActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ACustomizableSkeletalMeshActor__6B_;
  pFVar1 = (this->SkeletalMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomizableSkeletalComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ASkeletalMeshActor::~ASkeletalMeshActor((ASkeletalMeshActor *)this);
  return;
}

// EnableDebugMaterial @ 14ac19bf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
ACustomizableSkeletalMeshActor::EnableDebugMaterial
          (ACustomizableSkeletalMeshActor *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectInstance *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  FName local_res8;
  <lambda_1> local_res10 [8];
  FName local_res18;
  ACustomizableSkeletalMeshActor *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  if ((this->bDebugMaterialEnabled == false) || (param_1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bRemoveDebugMaterial = bVar2;
  this->bDebugMaterialEnabled = param_1;
  pUVar3 = GetCustomizableObjectInstance(this);
  if (pUVar3 == (UCustomizableObjectInstance *)0x0) {
    return;
  }
  pcVar4 = strstr("&ACustomizableSkeletalMeshActor::SwitchComponentsMaterials","::");
  if (pcVar4 == (char *)0x0) {
LAB_14ac19c9b:
    pcVar6 = &DAT_00000002;
LAB_14ac19ca0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14ac19c9b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14ac19ca0;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res8 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (ACustomizableSkeletalMeshActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14ac19d89;
  }
  local_a0 = &local_res8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCustomizableObjectInstance_*>::
  __Internal_BindDynamic<ACustomizableSkeletalMeshActor>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14ac19d89:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->UpdatedDelegate,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->UpdatedDelegate).field_0x8,&local_98);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->UpdatedDelegate).field_0x8,local_res10,Default);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  SwitchComponentsMaterials(this,pUVar3);
  return;
}

// GetCustomizableObjectInstance @ 14ac1dca0

UCustomizableObjectInstance * __thiscall
ACustomizableSkeletalMeshActor::GetCustomizableObjectInstance(ACustomizableSkeletalMeshActor *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->CustomizableSkeletalComponents).AllocatorInstance.Data;
  iVar2 = (this->CustomizableSkeletalComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CustomizableSkeletalComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCustomizableSkeletalComponent>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UCustomizableObjectInstance **)(*(longlong *)pFVar3 + 0x250) !=
        (UCustomizableObjectInstance *)0x0) {
      return *(UCustomizableObjectInstance **)(*(longlong *)pFVar3 + 0x250);
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UCustomizableObjectInstance *)0x0;
}

// GetPrivate @ 14ac222f0

UCustomizableSkeletalMeshActorPrivate * __thiscall
ACustomizableSkeletalMeshActor::GetPrivate(ACustomizableSkeletalMeshActor *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalMeshActorPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableSkeletalMeshActorPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalMeshActor.cpp"
                     ,0x9c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableSkeletalMeshActorPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac22350

UCustomizableSkeletalMeshActorPrivate * __thiscall
ACustomizableSkeletalMeshActor::GetPrivate(ACustomizableSkeletalMeshActor *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalMeshActorPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableSkeletalMeshActorPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalMeshActor.cpp"
                     ,0xa3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableSkeletalMeshActorPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ac22530

UClass * __cdecl ACustomizableSkeletalMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalMeshActor",
               &Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton,
               StaticRegisterNativesACustomizableSkeletalMeshActor,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ACustomizableSkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ACustomizableSkeletalMeshActor>,local_res8,
               ASkeletalMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.InnerSingleton;
}

// GetSkeletalMeshComponent @ 14ac24c20

USkeletalMeshComponent * __thiscall
ACustomizableSkeletalMeshActor::GetSkeletalMeshComponent
          (ACustomizableSkeletalMeshActor *this,FName *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  USkeletalMeshComponent *pUVar5;
  FName *pFVar6;
  FName FVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FName local_res8;
  FString local_38;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (this->CustomizableSkeletalComponents).ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < (this->CustomizableSkeletalComponents).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (USkeletalMeshComponent *)(*pcVar2)();
        return pUVar5;
      }
      lVar1 = *(longlong *)((this->CustomizableSkeletalComponents).AllocatorInstance.Data + uVar10);
      FVar7 = *(FName *)(lVar1 + 0x25c);
      if (FVar7 == (FName)0x0) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_38,*(int *)(lVar1 + 600));
        uVar4 = local_38.Data.ArrayNum - 1;
        if (local_38.Data.ArrayNum == 0) {
          uVar4 = 0;
        }
        pFVar6 = ::FName::FName(&local_res8,uVar4,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                                FNAME_Add);
        FVar7 = *pFVar6;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (FVar7 == *param_1) {
        uVar4 = 0;
        if ((int)uVar8 < (this->SkeletalMeshComponents).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (USkeletalMeshComponent *)(*pcVar2)();
          return pUVar5;
        }
        return *(USkeletalMeshComponent **)
                ((this->SkeletalMeshComponents).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < (this->CustomizableSkeletalComponents).ArrayNum);
  }
  return (USkeletalMeshComponent *)0x0;
}

// SetDebugMaterial @ 14ac34f80

void __thiscall
ACustomizableSkeletalMeshActor::SetDebugMaterial
          (ACustomizableSkeletalMeshActor *this,UMaterialInterface *param_1)

{
  if (param_1 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->DebugMaterial).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// StaticRegisterNativesACustomizableSkeletalMeshActor @ 14ac39a50

void __cdecl
ACustomizableSkeletalMeshActor::StaticRegisterNativesACustomizableSkeletalMeshActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SwitchComponentsMaterials @ 14ac3c600

void __thiscall
ACustomizableSkeletalMeshActor::SwitchComponentsMaterials
          (ACustomizableSkeletalMeshActor *this,UCustomizableObjectInstance *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  int iVar7;
  UCustomizableObjectInstance *this_00;
  FName *pFVar8;
  UCustomizableObject *pUVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  FName local_res8;
  FName local_res20;
  FString local_58;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_48;
  ulonglong uVar15;
  
  if (((this->DebugMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) &&
     ((((this->bDebugMaterialEnabled != false || (this->bRemoveDebugMaterial != false)) &&
       (this_00 = GetCustomizableObjectInstance(this), this_00 != (UCustomizableObjectInstance *)0x0
       )) && (uVar10 = 0, uVar16 = uVar10, 0 < (this->SkeletalMeshComponents).ArrayNum)))) {
    do {
      uVar15 = 0;
      uVar12 = (uint)uVar10;
      uVar11 = ~uVar12 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar12 < (this->SkeletalMeshComponents).ArrayNum) {
        uVar13 = uVar11;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (**(code **)(**(longlong **)
                             ((this->SkeletalMeshComponents).AllocatorInstance.Data + uVar16) +
                          0x810))();
      if (this->bDebugMaterialEnabled == false) {
        uVar14 = 0;
        uVar13 = uVar14;
        if ((int)uVar12 < (this->CustomizableSkeletalComponents).ArrayNum) {
          uVar13 = uVar11;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)
                 ((this->CustomizableSkeletalComponents).AllocatorInstance.Data + uVar16);
        FVar3 = *(FName *)(lVar2 + 0x25c);
        if (FVar3 == (FName)0x0) {
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_58,*(int *)(lVar2 + 600));
          uVar13 = local_58.Data.ArrayNum - 1;
          if (local_58.Data.ArrayNum == 0) {
            uVar13 = uVar14;
          }
          pFVar8 = ::FName::FName(&local_res20,uVar13,
                                  (wchar_t *)local_58.Data.AllocatorInstance.Data,FNAME_Add);
          local_res8 = *pFVar8;
          FVar3 = local_res8;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            FVar3 = local_res8;
          }
        }
        local_res8 = FVar3;
        UCustomizableObjectInstance::GetSkeletalMeshComponentOverrideMaterials
                  (this_00,&local_48,&local_res8);
        pUVar9 = UCustomizableObjectInstance::GetCustomizableObject(this_00);
        pTVar5 = CVarEnableMeshCache.Ref;
        if (pUVar9->bEnableMeshCache == false) {
LAB_14ac3c987:
          if ((int)uVar12 < (this->SkeletalMeshComponents).ArrayNum) {
            uVar14 = uVar11;
          }
          if ((uVar14 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UMeshComponent::EmptyOverrideMaterials
                    (*(UMeshComponent **)
                      ((this->SkeletalMeshComponents).AllocatorInstance.Data + uVar16));
        }
        else {
          bVar6 = IsInParallelGameThread();
          if (bVar6) {
LAB_14ac3c88e:
            uVar10 = uVar15;
          }
          else {
            bVar6 = IsInGameThread();
            uVar10 = 1;
            if (bVar6) goto LAB_14ac3c88e;
          }
          if ((pTVar5->ShadowedValue[uVar10] == false) || (uVar10 = uVar15, local_48.ArrayNum < 1))
          goto LAB_14ac3c987;
          do {
            iVar7 = local_48.ArrayNum;
            uVar13 = 0;
            if ((int)uVar12 < (this->SkeletalMeshComponents).ArrayNum) {
              uVar13 = uVar11;
            }
            if (uVar13 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar7 = local_48.ArrayNum;
            }
            uVar14 = (uint)uVar15;
            plVar1 = *(longlong **)((this->SkeletalMeshComponents).AllocatorInstance.Data + uVar16);
            pcVar4 = *(code **)(*plVar1 + 0x6b8);
            uVar13 = 0;
            if ((int)uVar14 < iVar7) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*pcVar4)(plVar1,uVar15,*(undefined8 *)(local_48.AllocatorInstance.Data + uVar10));
            uVar15 = (ulonglong)(uVar14 + 1);
            uVar10 = uVar10 + 8;
          } while ((int)(uVar14 + 1) < local_48.ArrayNum);
        }
        this->bRemoveDebugMaterial = false;
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      else if (0 < iVar7) {
        do {
          uVar13 = 0;
          if ((int)uVar12 < (this->SkeletalMeshComponents).ArrayNum) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar1 = *(longlong **)((this->SkeletalMeshComponents).AllocatorInstance.Data + uVar16);
          (**(code **)(*plVar1 + 0x6b8))(plVar1,uVar15,(this->DebugMaterial).field0_0x0.DebugPtr);
          uVar13 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar13;
        } while ((int)uVar13 < iVar7);
      }
      uVar10 = (ulonglong)(uVar12 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar12 + 1) < (this->SkeletalMeshComponents).ArrayNum);
  }
  return;
}

// execEnableDebugMaterial @ 14ac4d320

void __cdecl
ACustomizableSkeletalMeshActor::execEnableDebugMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableDebugMaterial((ACustomizableSkeletalMeshActor *)param_1,local_res10[0] != 0);
  return;
}

// execGetCustomizableObjectInstance @ 14ac4d590

void __cdecl
ACustomizableSkeletalMeshActor::execGetCustomizableObjectInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UCustomizableObjectInstance *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetCustomizableObjectInstance((ACustomizableSkeletalMeshActor *)param_1);
  *(UCustomizableObjectInstance **)param_3 = pUVar1;
  return;
}

// execGetSkeletalMeshComponent @ 14ac4d890

void __cdecl
ACustomizableSkeletalMeshActor::execGetSkeletalMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FName FVar7;
  ulonglong uVar8;
  uint uVar9;
  FName *pFVar10;
  ulonglong uVar11;
  FName local_res8;
  FName local_48;
  FString local_40;
  
  uVar8 = 0;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar10 = &local_48;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar10 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = uVar8;
  if (0 < *(int *)(param_1 + 0x15)) {
    do {
      uVar9 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar9 < *(int *)(param_1 + 0x15)) {
        uVar5 = ~uVar9 >> 0x1f;
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
      lVar2 = *(longlong *)(uVar11 + *(longlong *)&param_1[0x14].field_0x20);
      FVar7 = *(FName *)(lVar2 + 0x25c);
      if (FVar7 == (FName)0x0) {
        local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.Data.ArrayNum = 0;
        local_40.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_40,*(int *)(lVar2 + 600));
        uVar5 = local_40.Data.ArrayNum - 1;
        if (local_40.Data.ArrayNum == 0) {
          uVar5 = 0;
        }
        pFVar6 = ::FName::FName(&local_res8,uVar5,(wchar_t *)local_40.Data.AllocatorInstance.Data,
                                FNAME_Add);
        FVar7 = *pFVar6;
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      if (FVar7 == *pFVar10) {
        uVar5 = 0;
        if ((int)uVar9 < *(int *)&param_1[0x15].field_0x10) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)param_3 =
             *(undefined8 *)(*(longlong *)&param_1[0x15].field_0x8 + (longlong)(int)uVar9 * 8);
        return;
      }
      uVar8 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < *(int *)(param_1 + 0x15));
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetDebugMaterial @ 14ac4e2d0

void __cdecl
ACustomizableSkeletalMeshActor::execSetDebugMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res10);
    }
    *(UObject **)&param_1[0x15].field_0x18 = pUVar2;
  }
  return;
}

// execSwitchComponentsMaterials @ 14ac4e730

void __cdecl
ACustomizableSkeletalMeshActor::execSwitchComponentsMaterials
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectInstance *local_res10;
  
  local_res10 = (UCustomizableObjectInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SwitchComponentsMaterials((ACustomizableSkeletalMeshActor *)param_1,local_res10);
  return;
}

