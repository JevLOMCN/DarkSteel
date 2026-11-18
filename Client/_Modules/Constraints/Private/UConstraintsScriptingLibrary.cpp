// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 21

// StaticClass @ 14648d3a0

UClass * __cdecl UConstraintsScriptingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsScriptingLibrary",
               &Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton,
               StaticRegisterNativesUConstraintsScriptingLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstraintsScriptingLibrary>,
               InternalVTableHelperCtorCaller<UConstraintsScriptingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton;
}

// UConstraintsScriptingLibrary @ 14649e770

UConstraintsScriptingLibrary * __thiscall
UConstraintsScriptingLibrary::UConstraintsScriptingLibrary
          (UConstraintsScriptingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UConstraintsScriptingLibrary__6B_;
  return this;
}

// UConstraintsScriptingLibrary @ 14649e7a0

UConstraintsScriptingLibrary * __thiscall
UConstraintsScriptingLibrary::UConstraintsScriptingLibrary
          (UConstraintsScriptingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UConstraintsScriptingLibrary__6B_;
  return this;
}

// ~UConstraintsScriptingLibrary @ 14649fab0

void __thiscall
UConstraintsScriptingLibrary::~UConstraintsScriptingLibrary(UConstraintsScriptingLibrary *this)

{
  *(undefined ***)this = &___7UConstraintsScriptingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddConstraint @ 1464a3780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UConstraintsScriptingLibrary::AddConstraint
          (UWorld *param_1,UTransformableHandle *param_2,UTransformableHandle *param_3,
          UTickableTransformConstraint *param_4,bool param_5)

{
  UTransformableHandle *pUVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  FStaticBasicLogRecord *pFVar5;
  
  if (param_1 == (UWorld *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  else if (param_4 == (UTickableTransformConstraint *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  else {
    if ((param_2 == (UTransformableHandle *)0x0) ||
       (cVar3 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2,1), cVar3 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((param_3 == (UTransformableHandle *)0x0) ||
       (cVar3 = (**(code **)(param_3->_padding_ + 0x2b0))(param_3,1), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar4) && (bVar2)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_2 != (UTransformableHandle *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (param_4->ParentTRSHandle).field0_0x0.DebugPtr = param_2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_3 != (UTransformableHandle *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      (param_4->ChildTRSHandle).field0_0x0.DebugPtr = param_3;
      ::Singleton.World = param_1;
      bVar4 = FConstraintsManagerController::AddConstraint
                        (&::Singleton,(UTickableConstraint *)param_4);
      if (bVar4) {
        pUVar1 = (param_4->ParentTRSHandle).field0_0x0.DebugPtr;
        param_4->bMaintainOffset = param_5;
        if ((((pUVar1 != (UTransformableHandle *)0x0) &&
             ((param_4->ChildTRSHandle).field0_0x0.DebugPtr != (UTransformableHandle *)0x0)) &&
            (cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1), cVar3 != '\0')) &&
           (pUVar1 = (param_4->ChildTRSHandle).field0_0x0.DebugPtr,
           cVar3 = (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,1), cVar3 != '\0')) {
          (**(code **)(param_4->_padding_ + 0x328))(param_4);
        }
        (**(code **)(param_4->_padding_ + 0x300))(param_4,param_1);
        ::Singleton.World = param_1;
        FConstraintsManagerController::StaticConstraintCreated
                  (&::Singleton,(UTickableConstraint *)param_4);
        return true;
      }
      (param_4->ParentTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
      (param_4->ChildTRSHandle).field0_0x0.DebugPtr = (UTransformableHandle *)0x0;
    }
    else {
      if ((byte)LogTemp._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogTemp);
  return false;
}

// CreateFromType @ 1464ac2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTransformConstraint * __cdecl
UConstraintsScriptingLibrary::CreateFromType(UWorld *param_1,ETransformConstraintType param_2)

{
  UTickableTransformConstraint *pUVar1;
  
  pUVar1 = UE::TransformConstraintUtil::CreateFromType(param_1,param_2,false);
  return pUVar1;
}

// CreateTransformableComponentHandle @ 1464ac410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTransformableComponentHandle * __cdecl
UConstraintsScriptingLibrary::CreateTransformableComponentHandle
          (UWorld *param_1,USceneComponent *param_2,FName *param_3)

{
  UTransformableComponentHandle *pUVar1;
  
  pUVar1 = UE::TransformConstraintUtil::CreateHandleForSceneComponent(param_2,param_3);
  return pUVar1;
}

// CreateTransformableHandle @ 1464ac430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTransformableHandle * __cdecl
UConstraintsScriptingLibrary::CreateTransformableHandle
          (UWorld *param_1,UObject *param_2,FName *param_3)

{
  UClass *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FString *pFVar4;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this;
  FTransformableInfo *pFVar5;
  undefined8 uVar6;
  UTransformableHandle *pUVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  FName local_78;
  FString local_70;
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_2 == (UObject *)0x0) {
    if (*param_3 == (FName)0x0) {
      if ((byte)LogTemp._0_1_ < 2) {
        return (UTransformableHandle *)0x0;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return (UTransformableHandle *)0x0;
    }
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTransformableHandle *)0x0;
    }
    pFVar4 = ::FName::ToString(param_3,&local_70);
    if ((pFVar4->Data).ArrayNum == 0) {
      pFVar8 = &::LOG_Static;
    }
    else {
      pFVar8 = &::LOG_Static;
    }
  }
  else {
    this = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
            *)FTransformableRegistry::Get();
    pUVar1 = *(UClass **)&param_2->field_0x10;
    if ((pUVar1 != (UClass *)0x0) &&
       ((pFVar5 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                  ::Find(this,pUVar1), pFVar5 != (FTransformableInfo *)0x0 ||
        (pFVar5 = FTransformableRegistry::FindInfo
                            ((FTransformableRegistry *)this,(UClass *)pUVar1->_padding_),
        pFVar5 != (FTransformableInfo *)0x0)))) {
      local_58 = *(code **)&pFVar5->CreateHandleFunc;
      local_30 = (longlong *)0x0;
      if (local_58 != (code *)0x0) {
        puVar2 = *(undefined8 **)&(pFVar5->CreateHandleFunc).field_0x28;
        puVar9 = (undefined8 *)&(pFVar5->CreateHandleFunc).field_0x10;
        if (puVar2 != (undefined8 *)0x0) {
          puVar9 = puVar2;
        }
        (**(code **)*puVar9)(puVar9,local_48);
        if (local_58 != (code *)0x0) {
          local_78 = (FName)param_2;
          UE::Core::Private::Function::CheckCallable(local_58);
          pcVar3 = local_58;
          plVar10 = local_48;
          if (local_30 != (longlong *)0x0) {
            plVar10 = local_30;
          }
          uVar6 = (**(code **)(*plVar10 + 8))();
          pUVar7 = (UTransformableHandle *)(*pcVar3)(uVar6,&local_78,param_3);
          if (local_58 != (code *)0x0) {
            plVar10 = local_48;
            if (local_30 != (longlong *)0x0) {
              plVar10 = local_30;
            }
            (**(code **)(*plVar10 + 0x10))();
            return pUVar7;
          }
          return pUVar7;
        }
      }
    }
    if ((byte)LogTemp._0_1_ < 2) {
      return (UTransformableHandle *)0x0;
    }
    local_78 = *(FName *)(*(longlong *)&param_2->field_0x10 + 0x18);
    ::FName::ToString(&local_78,&local_70);
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogTemp);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return (UTransformableHandle *)0x0;
}

// GetConstraintsArray @ 1464b25b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UTickableConstraint_*,TSizedDefaultAllocator<32>_> * __cdecl
UConstraintsScriptingLibrary::GetConstraintsArray
          (TArray<UTickableConstraint_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UWorld *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UTickableConstraint_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FWeakObjectPtr *this;
  undefined1 local_res8 [8];
  UObject *local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::Singleton.World = param_1;
  pTVar7 = FConstraintsManagerController::GetConstraintsArray(&::Singleton);
  this = (FWeakObjectPtr *)(pTVar7->AllocatorInstance).Data;
  iVar2 = pTVar7->ArrayNum;
  pFVar1 = this + iVar2;
  while( true ) {
    if (pTVar7->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this == pFVar1) break;
    local_28[0] = FWeakObjectPtr::Get(this);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 <
        pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<UTickableConstraint_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    this = this + 1;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_28[0];
  }
  return __return_storage_ptr__;
}

// GetManager @ 1464b46d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstraintsManager * __cdecl UConstraintsScriptingLibrary::GetManager(UWorld *param_1)

{
  return (UConstraintsManager *)0x0;
}

// GetPrivateStaticClass @ 1464b5be0

UClass * __cdecl UConstraintsScriptingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"ConstraintsScriptingLibrary",
               &Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton,
               StaticRegisterNativesUConstraintsScriptingLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstraintsScriptingLibrary>,
               InternalVTableHelperCtorCaller<UConstraintsScriptingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.InnerSingleton;
}

// RemoveConstraint @ 1464bf2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UConstraintsScriptingLibrary::RemoveConstraint(UWorld *param_1,int param_2)

{
  bool bVar1;
  
  ::Singleton.World = param_1;
  bVar1 = FConstraintsManagerController::RemoveConstraint(&::Singleton,param_2,false);
  return bVar1;
}

// RemoveThisConstraint @ 1464bf470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UConstraintsScriptingLibrary::RemoveThisConstraint(UWorld *param_1,UTickableConstraint *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  UTickableConstraint *pUVar7;
  uint uVar8;
  
  ::Singleton.World = param_1;
  pTVar6 = FConstraintsManagerController::GetConstraintsArray(&::Singleton);
  uVar8 = 0;
  iVar1 = pTVar6->ArrayNum;
  if (0 < iVar1) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pUVar7 = (UTickableConstraint *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
      if (param_2 == pUVar7) {
        bVar3 = FConstraintsManagerController::RemoveConstraint(&::Singleton,uVar8,false);
        return bVar3;
      }
      iVar1 = pTVar6->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar1);
  }
  return false;
}

// StaticRegisterNativesUConstraintsScriptingLibrary @ 1464c1fa0

void __cdecl UConstraintsScriptingLibrary::StaticRegisterNativesUConstraintsScriptingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddConstraint @ 1464c4840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execAddConstraint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  FConstraintsManagerController FVar6;
  UTickableConstraint *pUVar7;
  UWorld *pUVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  char cVar11;
  bool bVar12;
  UConstraintSubsystem *this;
  UWorld *pUVar13;
  UWorld *pUVar14;
  FStaticBasicLogRecord *pFVar15;
  bool bVar16;
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  UTickableConstraint *local_68;
  UWorld *local_60;
  UObject *local_58;
  UObject *local_50;
  UWorld *local_48 [2];
  
  pUVar14 = (UWorld *)0x0;
  local_60 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_50 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68 = (UTickableConstraint *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pUVar10 = local_50;
  pUVar9 = local_58;
  pUVar8 = local_60;
  pUVar7 = local_68;
  bVar16 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_60 == (UWorld *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) goto LAB_1464c4c93;
    pFVar15 = &::LOG_Static;
  }
  else if (local_68 == (UTickableConstraint *)0x0) {
    if ((byte)LogTemp._0_1_ < 2) goto LAB_1464c4c93;
    pFVar15 = &::LOG_Static;
  }
  else {
    if ((local_50 == (UObject *)0x0) ||
       (cVar11 = (**(code **)(*(longlong *)local_50 + 0x2b0))(local_50,1), cVar11 == '\0')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((pUVar9 == (UObject *)0x0) ||
       (cVar11 = (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9,1), cVar11 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar12) && (bVar5)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      pUVar7[1]._padding_ = (longlong)pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      pUVar7[1]._padding_ = (longlong)pUVar9;
      ::Singleton.World = pUVar8;
      this = UConstraintSubsystem::Get();
      FVar6 = ::Singleton;
      if (this != (UConstraintSubsystem *)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (::Singleton.World != (UWorld *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)::Singleton.World);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_48[0] = FVar6.World;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.World != (UWorld *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)FVar6.World);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
        bVar12 = FWeakObjectPtr::IsValid(&local_res20);
        pUVar13 = pUVar14;
        if (bVar12) {
          pUVar13 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
        }
        bVar12 = UConstraintSubsystem::HasConstraint(this,pUVar13,pUVar7);
        if (!bVar12) {
          pcVar3 = *(code **)(pUVar7->_padding_ + 0x300);
          bVar12 = FWeakObjectPtr::IsValid(&local_res20);
          pUVar13 = pUVar14;
          if (bVar12) {
            pUVar13 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
          }
          (*pcVar3)(pUVar7,pUVar13);
          bVar12 = FWeakObjectPtr::IsValid(&local_res20);
          pUVar13 = pUVar14;
          if (bVar12) {
            pUVar13 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
          }
          UConstraintSubsystem::AddConstraint(this,pUVar13,pUVar7);
          pcVar3 = *(code **)(pUVar7->_padding_ + 0x310);
          bVar12 = FWeakObjectPtr::IsValid(&local_res20);
          if (bVar12) {
            pUVar14 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
          }
          (*pcVar3)(pUVar7,pUVar14);
          bVar12 = FWeakObjectPtr::IsValid(&local_res20);
          if ((bVar12) &&
             (pUVar14 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar14 != (UWorld *)0x0)) {
            ::Singleton.World = pUVar14;
          }
          FConstraintsManagerController::Notify(ConstraintAdded,(UObject *)pUVar7);
          plVar4 = (longlong *)pUVar7[1]._padding_;
          *(bool *)&pUVar7[1]._padding_ = bVar16;
          if ((plVar4 != (longlong *)0x0) && (pUVar7[1]._padding_ != 0)) {
            cVar11 = (**(code **)(*plVar4 + 0x2b0))(plVar4,1);
            if ((cVar11 != '\0') &&
               (cVar11 = (**(code **)(*(longlong *)pUVar7[1]._padding_ + 0x2b0))
                                   ((longlong *)pUVar7[1]._padding_,1), cVar11 != '\0')) {
              (**(code **)(pUVar7->_padding_ + 0x328))(pUVar7);
            }
          }
          (**(code **)(pUVar7->_padding_ + 0x300))(pUVar7,pUVar8);
          ::Singleton.World = pUVar8;
          FConstraintsManagerController::StaticConstraintCreated(&::Singleton,pUVar7);
          *(undefined1 *)param_3 = 1;
          return;
        }
        bVar16 = FWeakObjectPtr::IsValid(&local_res20);
        if ((bVar16) &&
           (pUVar14 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar14 != (UWorld *)0x0)) {
          ::Singleton.World = pUVar14;
        }
      }
      pUVar7[1]._padding_ = 0;
      pUVar7[1]._padding_ = 0;
    }
    else {
      if ((byte)LogTemp._0_1_ < 2) goto LAB_1464c4c93;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    if ((byte)LogTemp._0_1_ < 2) goto LAB_1464c4c93;
    pFVar15 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogTemp);
LAB_1464c4c93:
  *(undefined1 *)param_3 = 0;
  return;
}

// execCreateFromType @ 1464c4cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execCreateFromType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  byte bVar3;
  FNameEntryId FVar4;
  UWorld *pUVar5;
  bool bVar6;
  UEnum *this;
  UClass *pUVar7;
  FName FVar8;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  UTickableParentConstraint *pUVar12;
  byte local_res10 [8];
  FName local_res18;
  UWorld *local_res20;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FString local_d0;
  FString local_c0;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_90;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_80;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_70;
  UObject local_60;
  UTickableParentConstraint *pUVar13;
  
  pUVar13 = (UTickableParentConstraint *)0x0;
  pUVar12 = (UTickableParentConstraint *)0x0;
  local_res20 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  bVar3 = local_res10[0];
  uVar11 = (ulonglong)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UWorld *)0x0) {
    pUVar12 = pUVar13;
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    goto LAB_1464c522c;
  }
  this = StaticEnum<enum_ETransformConstraintType>();
  bVar6 = UEnum::IsValidEnumValue(this,uVar11);
  if (!bVar6) {
    pUVar12 = pUVar13;
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    goto LAB_1464c522c;
  }
  UEnum::GetNameStringByValue(this,&local_c0,uVar11);
  ::FString::PrintfImpl(&local_d0,L"%sConstraint");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar10.Data = local_d0.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar10.Data);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  ::Singleton.World = pUVar5;
  if (bVar3 == 0) {
    pUVar7 = (UClass *)UConstraintSubsystem::Get();
    FVar4.Value = local_res18.ComparisonIndex.Value;
    if (pUVar7 != (UClass *)0x0) {
      FVar8 = (FName)UTickableTranslationConstraint::StaticClass();
      MakeUniqueObjectName((UObject *)&local_d8,pUVar7,FVar8,FVar4.Value);
      UConstraintSubsystem::GetConstraints
                ((UConstraintSubsystem *)pUVar7,&local_70,::Singleton.World);
      pTVar9 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>_::__l2::<lambda_1>_>
                         (&local_70,(<lambda_1>)local_d8);
      if (pTVar9 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
        FVar8 = (FName)UTickableTranslationConstraint::StaticClass();
        local_d8 = MakeUniqueObjectName
                             ((UObject *)&local_60.field_0x20,pUVar7,FVar8,
                              local_res18.ComparisonIndex.Value);
        local_d8 = *(FName *)local_d8;
      }
      pUVar12 = (UTickableParentConstraint *)
                NewObject<UTickableTranslationConstraint>
                          ((UObject *)pUVar7,local_d8,RF_Transactional,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_b0.AllocatorInstance.Data = local_70.AllocatorInstance.Data;
LAB_1464c5208:
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
    }
  }
  else if (bVar3 == 1) {
    pUVar7 = (UClass *)UConstraintSubsystem::Get();
    FVar4.Value = local_res18.ComparisonIndex.Value;
    if (pUVar7 != (UClass *)0x0) {
      FVar8 = (FName)UTickableRotationConstraint::StaticClass();
      MakeUniqueObjectName((UObject *)&local_e0,pUVar7,FVar8,FVar4.Value);
      UConstraintSubsystem::GetConstraints
                ((UConstraintSubsystem *)pUVar7,&local_80,::Singleton.World);
      pTVar9 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>_::__l2::<lambda_1>_>
                         (&local_80,(<lambda_1>)local_e0);
      if (pTVar9 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
        FVar8 = (FName)UTickableRotationConstraint::StaticClass();
        local_e0 = MakeUniqueObjectName
                             ((UObject *)&local_60.field_0x18,pUVar7,FVar8,
                              local_res18.ComparisonIndex.Value);
        local_e0 = *(FName *)local_e0;
      }
      pUVar12 = (UTickableParentConstraint *)
                NewObject<UTickableRotationConstraint>
                          ((UObject *)pUVar7,local_e0,RF_Transactional,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_b0.AllocatorInstance.Data = local_80.AllocatorInstance.Data;
      goto LAB_1464c5208;
    }
  }
  else if (bVar3 == 2) {
    pUVar7 = (UClass *)UConstraintSubsystem::Get();
    FVar4.Value = local_res18.ComparisonIndex.Value;
    if (pUVar7 != (UClass *)0x0) {
      FVar8 = (FName)UTickableScaleConstraint::StaticClass();
      MakeUniqueObjectName((UObject *)&local_e8,pUVar7,FVar8,FVar4.Value);
      UConstraintSubsystem::GetConstraints
                ((UConstraintSubsystem *)pUVar7,&local_90,::Singleton.World);
      pTVar9 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>_::__l2::<lambda_1>_>
                         (&local_90,(<lambda_1>)local_e8);
      if (pTVar9 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
        FVar8 = (FName)UTickableScaleConstraint::StaticClass();
        local_e8 = MakeUniqueObjectName
                             ((UObject *)&local_60.field_0x10,pUVar7,FVar8,
                              local_res18.ComparisonIndex.Value);
        local_e8 = *(FName *)local_e8;
      }
      pUVar12 = (UTickableParentConstraint *)
                NewObject<UTickableScaleConstraint>
                          ((UObject *)pUVar7,local_e8,RF_Transactional,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_b0.AllocatorInstance.Data = local_90.AllocatorInstance.Data;
      goto LAB_1464c5208;
    }
  }
  else if (bVar3 == 3) {
    pUVar7 = (UClass *)UConstraintSubsystem::Get();
    FVar4.Value = local_res18.ComparisonIndex.Value;
    if (pUVar7 != (UClass *)0x0) {
      FVar8 = (FName)UTickableParentConstraint::StaticClass();
      MakeUniqueObjectName((UObject *)&local_f0,pUVar7,FVar8,FVar4.Value);
      UConstraintSubsystem::GetConstraints
                ((UConstraintSubsystem *)pUVar7,&local_a0,::Singleton.World);
      pTVar9 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>_::__l2::<lambda_1>_>
                         (&local_a0,(<lambda_1>)local_f0);
      if (pTVar9 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
        FVar8 = (FName)UTickableParentConstraint::StaticClass();
        local_f0 = MakeUniqueObjectName
                             ((UObject *)&local_60.field_0x8,pUVar7,FVar8,
                              local_res18.ComparisonIndex.Value);
        local_f0 = *(FName *)local_f0;
      }
      pUVar12 = NewObject<UTickableParentConstraint>
                          ((UObject *)pUVar7,local_f0,RF_Transactional,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      local_b0.AllocatorInstance.Data = local_a0.AllocatorInstance.Data;
      goto LAB_1464c5208;
    }
  }
  else if (bVar3 == 4) {
    pUVar7 = (UClass *)UConstraintSubsystem::Get();
    FVar4.Value = local_res18.ComparisonIndex.Value;
    pUVar12 = pUVar13;
    if (pUVar7 != (UClass *)0x0) {
      FVar8 = (FName)UTickableLookAtConstraint::StaticClass();
      MakeUniqueObjectName((UObject *)&local_f8,pUVar7,FVar8,FVar4.Value);
      UConstraintSubsystem::GetConstraints
                ((UConstraintSubsystem *)pUVar7,&local_b0,::Singleton.World);
      pTVar9 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               ::
               FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>_::__l2::<lambda_1>_>
                         (&local_b0,(<lambda_1>)local_f8);
      if (pTVar9 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
        FVar8 = (FName)UTickableLookAtConstraint::StaticClass();
        local_f8 = MakeUniqueObjectName(&local_60,pUVar7,FVar8,local_res18.ComparisonIndex.Value);
        local_f8 = *(FName *)local_f8;
      }
      pUVar12 = (UTickableParentConstraint *)
                NewObject<UTickableLookAtConstraint>
                          ((UObject *)pUVar7,local_f8,RF_Transactional,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      goto LAB_1464c5208;
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6003528814179647138>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\TransformConstraintUtil.cpp"
                       ,0x15e,"false");
    pUVar12 = pUVar13;
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
LAB_1464c522c:
  *(UTickableParentConstraint **)param_3 = pUVar12;
  return;
}

// execCreateTransformableComponentHandle @ 1464c5250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execCreateTransformableComponentHandle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTransformableComponentHandle *pUVar2;
  FName *pFVar3;
  FName local_res10;
  USceneComponent *local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (USceneComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UE::TransformConstraintUtil::CreateHandleForSceneComponent(local_res18,pFVar3);
  *(UTransformableComponentHandle **)param_3 = pUVar2;
  return;
}

// execCreateTransformableHandle @ 1464c5360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execCreateTransformableHandle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTransformableHandle *pUVar2;
  FName *pFVar3;
  FName local_res10;
  UObject *local_res18;
  UWorld *local_res20;
  
  local_res20 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateTransformableHandle(local_res20,local_res18,pFVar3);
  *(UTransformableHandle **)param_3 = pUVar2;
  return;
}

// execGetConstraintsArray @ 1464c5480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execGetConstraintsArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FConstraintsManagerController FVar5;
  bool bVar6;
  int iVar7;
  UConstraintSubsystem *this;
  UWorld *pUVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  UObject *local_58;
  UWorld *local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  pUVar8 = (UWorld *)0x0;
  local_res20 = (UWorld *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::Singleton.World = local_res20;
  this = UConstraintSubsystem::Get();
  FVar5 = ::Singleton;
  if ((this == (UConstraintSubsystem *)0x0) || (::Singleton.World == (UWorld *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::GetConstraintsArray'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar9 = &::Empty;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)::Singleton.World);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_50 = FVar5.World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5.World != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar5.World);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_50);
    bVar6 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar6) {
      pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
    }
    pTVar9 = UConstraintSubsystem::GetConstraintsArray(this,pUVar8);
    bVar6 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar6) && (pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar8 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar8;
    }
  }
  this_00 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
  iVar2 = pTVar9->ArrayNum;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (pTVar9->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    local_58 = FWeakObjectPtr::Get(this_00);
    if (((local_48.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (int)local_40;
    if ((int)local_40 == local_40._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_48,(int *)((longlong)&local_40 + 4));
    }
    this_00 = this_00 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
    *(UObject **)(local_48.Data + (longlong)iVar7 * 8) = local_58;
  }
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_40;
    *(int *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execRemoveConstraint @ 1464c5750

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execRemoveConstraint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FObjectPtr_u_0 *this;
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  FConstraintsManagerController FVar7;
  FName FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UConstraintSubsystem *this_00;
  UWorld *pUVar12;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar13;
  UWorld *pUVar14;
  UWorld *pUVar15;
  ULevel *pUVar16;
  UClass *pUVar17;
  FObjectPtr_u_0 FVar18;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  UObjectBase *this_01;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined1 local_e0 [40];
  longlong local_b8;
  UWorld *local_b0;
  UObjectBase *local_a8;
  UWorld *local_a0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_98;
  FSharedReferencer<1> FStack_90;
  UWorld *local_88;
  UWorld *local_80;
  UWorld *local_78;
  longlong local_70;
  FSharedReferencer<1> local_68;
  UObjectBase *local_60;
  UWorld *local_58;
  undefined1 local_50;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_48;
  
  pUVar15 = (UWorld *)0x0;
  local_b0 = (UWorld *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_e8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  iVar1 = local_e8[0];
  lVar25 = (longlong)local_e8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::Singleton.World = local_b0;
  this_00 = UConstraintSubsystem::Get();
  local_88 = ::Singleton.World;
  if ((this_00 == (UConstraintSubsystem *)0x0) || (::Singleton.World == (UWorld *)0x0)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_a0 = (UWorld *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)::Singleton.World);
  }
  local_e0._8_8_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_e0 + 8),(FObjectPtr)&local_88);
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_e0 + 8));
  pUVar12 = pUVar15;
  if (bVar9) {
    pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_e0 + 8));
  }
  pTVar13 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar12);
  pUVar12 = pUVar15;
  if ((-1 < iVar1) && (iVar1 < pTVar13->ArrayNum)) {
    pUVar12 = (UWorld *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((pTVar13->AllocatorInstance).Data + lVar25 * 8)
                                 );
    local_a0 = pUVar12;
  }
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_e0 + 8));
  if ((bVar9) &&
     (pUVar14 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_e0 + 8)),
     pUVar14 != (UWorld *)0x0)) {
    ::Singleton.World = pUVar14;
  }
  FVar7.World = ::Singleton.World;
  if (pUVar12 == (UWorld *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (::Singleton.World != (UWorld *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)::Singleton.World);
  }
  local_e0._16_8_ = 0;
  local_80 = FVar7.World;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.World != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar7.World);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_e0 + 0x10),(FObjectPtr)&local_80);
  FConstraintsManagerController::Notify(ConstraintRemovedWithCompensation,(UObject *)pUVar12);
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_e0 + 0x10));
  if (bVar9) {
    pUVar15 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_e0 + 0x10));
  }
  UConstraintSubsystem::RemoveConstraint(this_00,pUVar15,(UTickableConstraint *)pUVar12,false);
  bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_e0 + 0x10));
  if ((bVar9) &&
     (pUVar15 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_e0 + 0x10)),
     pUVar15 != (UWorld *)0x0)) {
    ::Singleton.World = pUVar15;
  }
  if (::Singleton.World == (UWorld *)0x0) goto LAB_1464c5fc9;
  pUVar16 = UWorld::GetCurrentLevel(::Singleton.World);
  if (pUVar16 == (ULevel *)0x0) {
LAB_1464c5b0e:
    this_01 = (UObjectBase *)0x0;
    local_a8 = (UObjectBase *)0x0;
  }
  else {
    pFVar3 = (pUVar16->Actors).AllocatorInstance.Data;
    iVar1 = (pUVar16->Actors).ArrayNum;
    for (pFVar22 = pFVar3; pFVar22 != pFVar3 + (longlong)iVar1 * 8; pFVar22 = pFVar22 + 8) {
      lVar25 = *(longlong *)pFVar22;
      if ((lVar25 != 0) && ((*(uint *)(lVar25 + 8) >> 0x1e & 1) == 0)) {
        pUVar17 = AConstraintsActor::StaticClass();
        iVar11 = (int)pUVar17->_padding_;
        if ((iVar11 <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
            &pUVar17->_padding_)) {
          uVar21 = (uint)((longlong)pFVar22 - (longlong)pFVar3 >> 3);
          if (uVar21 != 0xffffffff) {
            uVar10 = 0;
            if ((int)uVar21 < (pUVar16->Actors).ArrayNum) {
              uVar10 = ~uVar21 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pUVar16->Actors).AllocatorInstance.Data;
            this = (FObjectPtr_u_0 *)(pFVar3 + (longlong)(int)uVar21 * 8);
            if (*(longlong *)(pFVar3 + (longlong)(int)uVar21 * 8) != 0) {
              pUVar17 = AConstraintsActor::StaticClass();
              bVar9 = FObjectPtr::IsA((FObjectPtr *)this,pUVar17);
              if (bVar9) {
                FVar18 = (FObjectPtr_u_0)this->Handle;
                goto LAB_1464c5a46;
              }
            }
          }
          break;
        }
      }
    }
    FVar18.Handle = (UObject *)0x0;
LAB_1464c5a46:
    if (FVar18.Handle == (UObject *)0x0) goto LAB_1464c5b0e;
    this_01 = *(UObjectBase **)&FVar18.Handle[0x11].field_0x18;
    local_a8 = this_01;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_01 == (UObjectBase *)0x0) goto LAB_1464c5fc9;
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
  }
  FVar7.World = ::Singleton.World;
  if (this_01 != (UObjectBase *)0x0) {
    pUVar17 = this_01[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
    plVar6 = &pUVar17->_padding_;
    if (pUVar17 != (UClass *)(plVar6 + (int)this_01[1].NamePrivate.Name.ComparisonIndex.Value)) {
      while (((UWorld *)pUVar17->_padding_ == (UWorld *)0x0 ||
             ((UWorld *)pUVar17->_padding_ != pUVar12))) {
        pUVar17 = (UClass *)&pUVar17->_padding_;
        if (pUVar17 == (UClass *)(plVar6 + (int)this_01[1].NamePrivate.Name.ComparisonIndex.Value))
        {
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (::Singleton.World != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)::Singleton.World);
      }
      local_e0._32_8_ = 0;
      local_78 = FVar7.World;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.World != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar7.World);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_e0 + 0x20),(FObjectPtr)&local_78);
      local_e0._0_8_ = pUVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pUVar17 = this_01[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
      if (((pUVar17 <= (UClass *)local_e0) &&
          (local_e0 < &pUVar17->_padding_ + (int)this_01[1].NamePrivate.Name.Number)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar21 = this_01[1].NamePrivate.Name.ComparisonIndex.Value;
      if (uVar21 != 0) {
        pUVar17 = this_01[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
        uVar26 = 0;
        bVar9 = (UWorld *)pUVar17->_padding_ != (UWorld *)local_e0._0_8_;
        lVar25 = 0;
        pUVar15 = (UWorld *)local_e0._0_8_;
        uVar10 = 0;
        do {
          uVar24 = uVar10;
          lVar5 = lVar25;
          do {
            lVar25 = lVar5 + 1;
            uVar24 = uVar24 + 1;
            if ((int)uVar21 <= lVar25) break;
            plVar6 = &pUVar17->_padding_ + lVar5;
            lVar5 = lVar25;
          } while (bVar9 == ((UWorld *)*plVar6 != pUVar15));
          if (bVar9 != false) {
            if (uVar26 != uVar10) {
              memmove(&pUVar17->_padding_ + (int)uVar26,&pUVar17->_padding_ + (int)uVar10,
                      (longlong)(int)(uVar24 - uVar10) << 3);
              pUVar15 = (UWorld *)local_e0._0_8_;
            }
            uVar26 = uVar26 + (uVar24 - uVar10);
          }
          bVar9 = (bool)(bVar9 ^ 1);
          uVar10 = uVar24;
        } while (lVar25 < (int)uVar21);
        local_a8[1].NamePrivate.Name.ComparisonIndex.Value = uVar26;
        pUVar12 = local_a0;
        param_3 = local_res18;
        this_01 = local_a8;
        local_e0._24_4_ = uVar26;
      }
      local_98 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
      FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (*(char *)((longlong)&this_01[1]._padding_ + 1) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnConstraintRemoved_BP");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FVar8 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar9 = UObjectBase::IsValidLowLevelFast(this_01,false);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DelegateOwner->IsValidLowLevelFast(false)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                               ,0xd7,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar19 = FSparseDelegateStorage::GetSharedMulticastDelegate
                            (&local_48,(UObject *)this_01,FVar8);
        local_68.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
        local_98 = pTVar19->Object;
        if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_68.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_70 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_90,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        if (local_98 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          local_50 = 0;
          local_60 = this_01;
          local_58 = pUVar12;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    (local_98,&local_60);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
      bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_e0 + 0x20));
      if ((bVar9) &&
         (pUVar15 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_e0 + 0x20)),
         pUVar15 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar15;
      }
      if (((this_01[1].NamePrivate.Name.ComparisonIndex.Value == 0) &&
          (::Singleton.World != (UWorld *)0x0)) &&
         (pUVar16 = UWorld::GetCurrentLevel(::Singleton.World), pUVar16 != (ULevel *)0x0)) {
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = 0;
        pUVar16 = UWorld::GetCurrentLevel(::Singleton.World);
        pFVar22 = (pUVar16->Actors).AllocatorInstance.Data;
        iVar1 = (pUVar16->Actors).ArrayNum;
        pFVar3 = pFVar22 + (longlong)iVar1 * 8;
        while( true ) {
          if ((pUVar16->Actors).ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res10);
          }
          if (pFVar22 == pFVar3) break;
          lVar25 = *(longlong *)pFVar22;
          if ((lVar25 != 0) && ((*(uint *)(lVar25 + 8) >> 0x1e & 1) == 0)) {
            pUVar17 = AConstraintsActor::StaticClass();
            iVar11 = (int)pUVar17->_padding_;
            if ((iVar11 <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
                &pUVar17->_padding_)) {
              local_b8 = *(longlong *)pFVar22;
              if (((local_f8.Data <= (FScriptContainerElement *)&local_b8) &&
                  ((FScriptContainerElement *)&local_b8 <
                   local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar11 = (int)local_f0;
              if ((int)local_f0 == local_f0._4_4_) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_f8,(int *)((longlong)&local_f0 + 4));
              }
              local_f0 = CONCAT44(local_f0._4_4_,iVar11 + 1);
              *(longlong *)(local_f8.Data + (longlong)iVar11 * 8) = local_b8;
            }
          }
          pFVar22 = pFVar22 + 8;
        }
        iVar1 = (int)local_f0;
        uVar20 = (ulonglong)(int)local_f0;
        pFVar3 = local_f8.Data + uVar20 * 8;
        FVar23.Data = local_f8.Data;
        while( true ) {
          if ((int)uVar20 != iVar1) {
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar23.Data == pFVar3) break;
          UWorld::DestroyActor(::Singleton.World,*(AActor **)FVar23.Data,true,true);
          uVar20 = local_f0 & 0xffffffff;
          FVar23.Data = FVar23.Data + 8;
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
      }
    }
  }
LAB_1464c5fc9:
  *(undefined1 *)param_3 = 1;
  return;
}

// execRemoveThisConstraint @ 1464c6030

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UConstraintsScriptingLibrary::execRemoveThisConstraint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FObjectPtr_u_0 *this;
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  FConstraintsManagerController FVar6;
  FName FVar7;
  UObject *pUVar8;
  bool bVar9;
  int iVar10;
  UConstraintSubsystem *pUVar11;
  UWorld *pUVar12;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar13;
  UObject *pUVar14;
  UWorld *pUVar15;
  ULevel *pUVar16;
  UClass *pUVar17;
  FObjectPtr_u_0 FVar18;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  UObjectBase *this_00;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined1 local_f8 [48];
  longlong local_c8;
  UObject *local_c0;
  UWorld *local_b8;
  UObjectBase *local_b0;
  UWorld *local_a8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_a0;
  FSharedReferencer<1> FStack_98;
  UWorld *local_90;
  UWorld *local_88;
  UWorld *local_80;
  UWorld *local_78;
  longlong local_70;
  FSharedReferencer<1> local_68;
  UObjectBase *local_60;
  UWorld *local_58;
  undefined1 local_50;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_48;
  
  pUVar15 = (UWorld *)0x0;
  local_b8 = (UWorld *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pUVar8 = local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::Singleton.World = local_b8;
  pUVar11 = UConstraintSubsystem::Get();
  FVar6 = ::Singleton;
  if ((pUVar11 == (UConstraintSubsystem *)0x0) || (::Singleton.World == (UWorld *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::GetConstraintsArray'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    pTVar13 = &::Empty;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)::Singleton.World);
    }
    local_f8._8_8_ = 0;
    local_90 = FVar6.World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.World != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar6.World);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f8 + 8),(FObjectPtr)&local_90);
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 8));
    pUVar12 = pUVar15;
    if (bVar9) {
      pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 8));
    }
    pTVar13 = UConstraintSubsystem::GetConstraintsArray(pUVar11,pUVar12);
    bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 8));
    if ((bVar9) &&
       (pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 8)),
       pUVar12 != (UWorld *)0x0)) {
      ::Singleton.World = pUVar12;
    }
  }
  iVar20 = pTVar13->ArrayNum;
  pUVar12 = pUVar15;
  if (0 < iVar20) {
    do {
      uVar26 = (uint)pUVar12;
      uVar22 = 0;
      if ((int)uVar26 < iVar20) {
        uVar22 = ~uVar26 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar26 * 8))
      ;
      if (pUVar8 == pUVar14) {
        pUVar11 = UConstraintSubsystem::Get();
        local_88 = ::Singleton.World;
        if ((pUVar11 != (UConstraintSubsystem *)0x0) && (::Singleton.World != (UWorld *)0x0)) {
          local_a8 = (UWorld *)0x0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)::Singleton.World);
          }
          local_f8._16_8_ = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UWorld *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_88);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f8 + 0x10),(FObjectPtr)&local_88);
          bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 0x10));
          if (bVar9) {
            pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x10));
          }
          else {
            pUVar12 = (UWorld *)0x0;
          }
          pTVar13 = UConstraintSubsystem::GetConstraintsArray(pUVar11,pUVar12);
          if ((-1 < (int)uVar26) && ((int)uVar26 < pTVar13->ArrayNum)) {
            if (((int)uVar26 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar15 = (UWorld *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)
                                          ((pTVar13->AllocatorInstance).Data +
                                          (longlong)(int)uVar26 * 8));
            local_a8 = pUVar15;
          }
          bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 0x10));
          if ((bVar9) &&
             (pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x10)),
             pUVar12 != (UWorld *)0x0)) {
            ::Singleton.World = pUVar12;
          }
          FVar6.World = ::Singleton.World;
          if (pUVar15 != (UWorld *)0x0) {
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (::Singleton.World != (UWorld *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)::Singleton.World);
            }
            local_f8._24_8_ = 0;
            local_80 = FVar6.World;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (FVar6.World != (UWorld *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)FVar6.World);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f8 + 0x18),(FObjectPtr)&local_80);
            FConstraintsManagerController::Notify
                      (ConstraintRemovedWithCompensation,(UObject *)pUVar15);
            bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 0x18));
            if (bVar9) {
              pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x18));
            }
            else {
              pUVar12 = (UWorld *)0x0;
            }
            UConstraintSubsystem::RemoveConstraint
                      (pUVar11,pUVar12,(UTickableConstraint *)pUVar15,false);
            bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 0x18));
            if ((bVar9) &&
               (pUVar12 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x18)),
               pUVar12 != (UWorld *)0x0)) {
              ::Singleton.World = pUVar12;
            }
            if (::Singleton.World == (UWorld *)0x0) goto LAB_1464c6a35;
            pUVar16 = UWorld::GetCurrentLevel(::Singleton.World);
            if (pUVar16 == (ULevel *)0x0) goto LAB_1464c6579;
            pFVar2 = (pUVar16->Actors).AllocatorInstance.Data;
            iVar20 = (pUVar16->Actors).ArrayNum;
            pFVar24 = pFVar2;
            goto joined_r0x0001464c646d;
          }
        }
        *(undefined1 *)param_3 = 0;
        return;
      }
      iVar20 = pTVar13->ArrayNum;
      pUVar12 = (UWorld *)(ulonglong)(uVar26 + 1);
    } while ((int)(uVar26 + 1) < iVar20);
  }
  *(undefined1 *)param_3 = 0;
  return;
joined_r0x0001464c646d:
  if (pFVar24 == pFVar2 + (longlong)iVar20 * 8) goto LAB_1464c64ae;
  lVar23 = *(longlong *)pFVar24;
  if ((lVar23 != 0) && ((*(uint *)(lVar23 + 8) >> 0x1e & 1) == 0)) {
    pUVar17 = AConstraintsActor::StaticClass();
    iVar10 = (int)pUVar17->_padding_;
    if ((iVar10 <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar10 * 8)
        == &pUVar17->_padding_)) {
      uVar22 = (uint)((longlong)pFVar24 - (longlong)pFVar2 >> 3);
      if (uVar22 != 0xffffffff) {
        uVar26 = 0;
        if ((int)uVar22 < (pUVar16->Actors).ArrayNum) {
          uVar26 = ~uVar22 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (pUVar16->Actors).AllocatorInstance.Data;
        this = (FObjectPtr_u_0 *)(pFVar2 + (longlong)(int)uVar22 * 8);
        if (*(longlong *)(pFVar2 + (longlong)(int)uVar22 * 8) != 0) {
          pUVar17 = AConstraintsActor::StaticClass();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)this,pUVar17);
          if (bVar9) {
            FVar18 = (FObjectPtr_u_0)this->Handle;
            goto LAB_1464c64b0;
          }
        }
      }
      goto LAB_1464c64ae;
    }
  }
  pFVar24 = pFVar24 + 8;
  goto joined_r0x0001464c646d;
LAB_1464c64ae:
  FVar18.Handle = (UObject *)0x0;
LAB_1464c64b0:
  if (FVar18.Handle == (UObject *)0x0) {
LAB_1464c6579:
    this_00 = (UObjectBase *)0x0;
    local_b0 = (UObjectBase *)0x0;
  }
  else {
    this_00 = *(UObjectBase **)&FVar18.Handle[0x11].field_0x18;
    local_b0 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      param_3 = local_res18;
      if (this_00 == (UObjectBase *)0x0) goto LAB_1464c6a35;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
  }
  FVar6.World = ::Singleton.World;
  param_3 = local_res18;
  if (this_00 != (UObjectBase *)0x0) {
    pUVar17 = this_00[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
    plVar5 = &pUVar17->_padding_;
    if (pUVar17 != (UClass *)(plVar5 + (int)this_00[1].NamePrivate.Name.ComparisonIndex.Value)) {
      while (((UWorld *)pUVar17->_padding_ == (UWorld *)0x0 ||
             ((UWorld *)pUVar17->_padding_ != pUVar15))) {
        pUVar17 = (UClass *)&pUVar17->_padding_;
        if (pUVar17 == (UClass *)(plVar5 + (int)this_00[1].NamePrivate.Name.ComparisonIndex.Value))
        {
          *local_res18 = 1;
          return;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (::Singleton.World != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)::Singleton.World);
      }
      local_f8._40_8_ = 0;
      local_78 = FVar6.World;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6.World != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar6.World);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(local_f8 + 0x28),(FObjectPtr)&local_78);
      local_f8._0_8_ = pUVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar15);
      }
      pUVar17 = this_00[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
      if (((pUVar17 <= (UClass *)local_f8) &&
          (local_f8 < &pUVar17->_padding_ + (int)this_00[1].NamePrivate.Name.Number)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar22 = this_00[1].NamePrivate.Name.ComparisonIndex.Value;
      if (uVar22 != 0) {
        pUVar17 = this_00[1].ClassPrivate.ObjectPtr.field0_0x0.DebugPtr;
        uVar28 = 0;
        bVar9 = (UWorld *)pUVar17->_padding_ != (UWorld *)local_f8._0_8_;
        lVar23 = 0;
        pUVar15 = (UWorld *)local_f8._0_8_;
        uVar26 = 0;
        do {
          uVar27 = uVar26;
          lVar4 = lVar23;
          do {
            lVar23 = lVar4 + 1;
            uVar27 = uVar27 + 1;
            if ((int)uVar22 <= lVar23) break;
            plVar5 = &pUVar17->_padding_ + lVar4;
            lVar4 = lVar23;
          } while (bVar9 == ((UWorld *)*plVar5 != pUVar15));
          if (bVar9 != false) {
            if (uVar28 != uVar26) {
              memmove(&pUVar17->_padding_ + (int)uVar28,&pUVar17->_padding_ + (int)uVar26,
                      (longlong)(int)(uVar27 - uVar26) << 3);
              pUVar15 = (UWorld *)local_f8._0_8_;
            }
            uVar28 = uVar28 + (uVar27 - uVar26);
          }
          bVar9 = (bool)(bVar9 ^ 1);
          uVar26 = uVar27;
        } while (lVar23 < (int)uVar22);
        local_b0[1].NamePrivate.Name.ComparisonIndex.Value = uVar28;
        this_00 = local_b0;
        pUVar15 = local_a8;
        local_f8._32_4_ = uVar28;
      }
      local_a0 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
      FStack_98.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (*(char *)((longlong)&this_00[1]._padding_ + 1) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnConstraintRemoved_BP");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FVar7 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar9 = UObjectBase::IsValidLowLevelFast(this_00,false);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("DelegateOwner->IsValidLowLevelFast(false)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                               ,0xd7,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar19 = FSparseDelegateStorage::GetSharedMulticastDelegate
                            (&local_48,(UObject *)this_00,FVar7);
        local_68.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
        local_a0 = pTVar19->Object;
        if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_68.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_70 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_98,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        if (local_a0 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
          local_50 = 0;
          local_60 = this_00;
          local_58 = pUVar15;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    (local_a0,&local_60);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_98.ReferenceController);
      bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_f8 + 0x28));
      if ((bVar9) &&
         (pUVar15 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_f8 + 0x28)),
         pUVar15 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar15;
      }
      param_3 = local_res18;
      if (((this_00[1].NamePrivate.Name.ComparisonIndex.Value == 0) &&
          (::Singleton.World != (UWorld *)0x0)) &&
         (pUVar16 = UWorld::GetCurrentLevel(::Singleton.World), param_3 = local_res18,
         pUVar16 != (ULevel *)0x0)) {
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 0;
        pUVar16 = UWorld::GetCurrentLevel(::Singleton.World);
        pFVar24 = (pUVar16->Actors).AllocatorInstance.Data;
        iVar20 = (pUVar16->Actors).ArrayNum;
        pFVar2 = pFVar24 + (longlong)iVar20 * 8;
        while( true ) {
          if ((pUVar16->Actors).ArrayNum != iVar20) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res10);
          }
          if (pFVar24 == pFVar2) break;
          lVar23 = *(longlong *)pFVar24;
          if ((lVar23 != 0) && ((*(uint *)(lVar23 + 8) >> 0x1e & 1) == 0)) {
            pUVar17 = AConstraintsActor::StaticClass();
            iVar10 = (int)pUVar17->_padding_;
            if ((iVar10 <= *(int *)(*(longlong *)(lVar23 + 0x10) + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar10 * 8) ==
                &pUVar17->_padding_)) {
              local_c8 = *(longlong *)pFVar24;
              if (((local_108.Data <= (FScriptContainerElement *)&local_c8) &&
                  ((FScriptContainerElement *)&local_c8 <
                   local_108.Data + (longlong)local_100._4_4_ * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar10 = (int)local_100;
              if ((int)local_100 == local_100._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_108,(int *)((longlong)&local_100 + 4));
              }
              local_100 = CONCAT44(local_100._4_4_,iVar10 + 1);
              *(longlong *)(local_108.Data + (longlong)iVar10 * 8) = local_c8;
            }
          }
          pFVar24 = pFVar24 + 8;
        }
        iVar20 = (int)local_100;
        uVar21 = (ulonglong)(int)local_100;
        pFVar2 = local_108.Data + uVar21 * 8;
        FVar25.Data = local_108.Data;
        while( true ) {
          if ((int)uVar21 != iVar20) {
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (FVar25.Data == pFVar2) break;
          UWorld::DestroyActor(::Singleton.World,*(AActor **)FVar25.Data,true,true);
          uVar21 = local_100 & 0xffffffff;
          FVar25.Data = FVar25.Data + 8;
        }
        param_3 = local_res18;
        if (local_108.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data);
          param_3 = local_res18;
        }
      }
    }
  }
LAB_1464c6a35:
  *(undefined1 *)param_3 = 1;
  return;
}

