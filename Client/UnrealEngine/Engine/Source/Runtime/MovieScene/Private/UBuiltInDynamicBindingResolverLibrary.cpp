// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 1461e8e90

UClass * __cdecl UBuiltInDynamicBindingResolverLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"BuiltInDynamicBindingResolverLibrary",
               &Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton,
               StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBuiltInDynamicBindingResolverLibrary>,
               InternalVTableHelperCtorCaller<UBuiltInDynamicBindingResolverLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton;
}

// UBuiltInDynamicBindingResolverLibrary @ 1461fd6b0

UBuiltInDynamicBindingResolverLibrary * __thiscall
UBuiltInDynamicBindingResolverLibrary::UBuiltInDynamicBindingResolverLibrary
          (UBuiltInDynamicBindingResolverLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
  return this;
}

// UBuiltInDynamicBindingResolverLibrary @ 1461fd6e0

UBuiltInDynamicBindingResolverLibrary * __thiscall
UBuiltInDynamicBindingResolverLibrary::UBuiltInDynamicBindingResolverLibrary
          (UBuiltInDynamicBindingResolverLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
  return this;
}

// ~UBuiltInDynamicBindingResolverLibrary @ 1461ff9b0

void __thiscall
UBuiltInDynamicBindingResolverLibrary::~UBuiltInDynamicBindingResolverLibrary
          (UBuiltInDynamicBindingResolverLibrary *this)

{
  *(undefined ***)this = &___7UBuiltInDynamicBindingResolverLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14621b580

UClass * __cdecl UBuiltInDynamicBindingResolverLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"BuiltInDynamicBindingResolverLibrary",
               &Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton,
               StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBuiltInDynamicBindingResolverLibrary>,
               InternalVTableHelperCtorCaller<UBuiltInDynamicBindingResolverLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBuiltInDynamicBindingResolverLibrary.InnerSingleton;
}

// ResolveToPlayerPawn @ 146232ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMovieSceneDynamicBindingResolveResult * __cdecl
UBuiltInDynamicBindingResolverLibrary::ResolveToPlayerPawn
          (FMovieSceneDynamicBindingResolveResult *__return_storage_ptr__,UObject *param_1,
          int param_2)

{
  TObjectPtr<UObject>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UWorld *this;
  FMovieSceneDynamicBindingResolveResult *pFVar6;
  UObject *pUVar7;
  int iVar8;
  TObjectPtr<UObject>_u_0 local_48;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_40;
  ForAnyElementType local_30;
  undefined8 local_28;
  TObjectPtr<UObject>_u_0 local_20;
  bool local_18;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this == (UWorld *)0x0) {
LAB_146232d1d:
    *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Objects).ArrayNum = 0;
    (__return_storage_ptr__->Objects).ArrayMax = 0;
    (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
    __return_storage_ptr__->bIsPossessedObject = true;
    return __return_storage_ptr__;
  }
  iVar4 = UWorld::GetNumPlayerControllers(this);
  if (iVar4 <= param_2) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1681850502385500137>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneDynamicBinding.cpp"
                       ,0x17,"PlayerControllerIndex < NumPlayerControllers");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar2)();
      return pFVar6;
    }
    goto LAB_146232d1d;
  }
  UWorld::GetPlayerControllerIterator(this,&local_40);
  if (0 < param_2) {
    local_40.Index = local_40.Index + param_2;
  }
  iVar4 = local_40.Index;
  uVar5 = 0;
  if (local_40.Index < (local_40.Container)->ArrayNum) {
    uVar5 = (uint)~local_40.Index >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar2)();
    return pFVar6;
  }
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                               (((local_40.Container)->AllocatorInstance).Data + (longlong)iVar4 * 8
                               ));
  if (pUVar7 == (UObject *)0x0) goto LAB_146232d1d;
  TVar1 = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&pUVar7[0x13].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_20 = (TObjectPtr<UObject>_u_0)0x0;
  local_18 = true;
  local_28._0_4_ = 0;
  local_48 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28._0_4_ = 0, TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
    iVar4 = (int)local_28;
    if (&local_48 < local_30.Data) goto LAB_146232e9a;
  }
  iVar4 = (int)local_28;
  if (&local_48 < (TObjectPtr<UObject>_u_0 *)(local_30.Data + (longlong)local_28._4_4_ * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar2)();
      return pFVar6;
    }
    iVar4 = (int)local_28;
  }
LAB_146232e9a:
  if (iVar4 == local_28._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_30,(int *)((longlong)&local_28 + 4));
  }
  iVar8 = iVar4 + 1;
  ((TObjectPtr<UObject>_u_0 *)(local_30.Data + (longlong)iVar4 * 8))->DebugPtr = (UObject *)local_48
  ;
  local_28._0_4_ = iVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_48.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_48.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = local_30.Data;
  (__return_storage_ptr__->Objects).ArrayNum = (int)local_28;
  (__return_storage_ptr__->Objects).ArrayMax = local_28._4_4_;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)TVar1;
  local_18 = true;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_20 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  __return_storage_ptr__->bIsPossessedObject = local_18;
  if (local_30.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_30.Data);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary @ 146237b50

void __cdecl
UBuiltInDynamicBindingResolverLibrary::StaticRegisterNativesUBuiltInDynamicBindingResolverLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBuiltInDynamicBindingResolverLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResolveToPlayerPawn @ 1462436d0

void __cdecl
UBuiltInDynamicBindingResolverLibrary::execResolveToPlayerPawn
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FMovieSceneDynamicBindingResolveResult *pFVar3;
  int local_res10 [2];
  UObject *local_res18;
  FMovieSceneDynamicBindingResolveResult local_28;
  
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
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = ResolveToPlayerPawn(&local_28,local_res18,local_res10[0]);
  if (param_3 != pFVar3) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar3->Objects).AllocatorInstance.Data;
    (pFVar3->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar3->Objects).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar3->Objects).ArrayMax;
    (pFVar3->Objects).ArrayNum = 0;
    (pFVar3->Objects).ArrayMax = 0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar3->Object).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(TObjectPtr<UObject>_u_0 *)((longlong)param_3 + 0x10) = (pFVar3->Object).field0_0x0;
  *(bool *)((longlong)param_3 + 0x18) = pFVar3->bIsPossessedObject;
  if (local_28.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Objects.AllocatorInstance.Data);
  }
  return;
}

