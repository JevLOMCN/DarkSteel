// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 23

// FObjectInitializer @ 141e857d0

FObjectInitializer * __thiscall
FObjectInitializer::FObjectInitializer(FObjectInitializer *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  TFunction<void___cdecl(void)> *pTVar6;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> _Dst;
  ForElementType<FName> _Dst_00;
  undefined8 *puVar7;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> _Src;
  ForElementType<FName> _Src_00;
  
  this->Obj = param_1->Obj;
  this->ObjectArchetype = param_1->ObjectArchetype;
  this->bCopyTransientsFromClassDefaults = param_1->bCopyTransientsFromClassDefaults;
  this->bShouldInitializePropsFromArchetype = param_1->bShouldInitializePropsFromArchetype;
  this->bSubobjectClassInitializationAllowed = param_1->bSubobjectClassInitializationAllowed;
  this->bIsDeferredInitializer = param_1->bIsDeferredInitializer;
  this->InstanceGraph = param_1->InstanceGraph;
  FOverrides::FOverrides(&this->SubobjectOverrides,&param_1->SubobjectOverrides);
  (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0;
  _Src = (param_1->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
  iVar3 = (param_1->ComponentInits).SubobjectInits.ArrayNum;
  (this->ComponentInits).SubobjectInits.ArrayNum = iVar3;
  if (_Src == (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
    _Src = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
           &param_1->ComponentInits;
  }
  piVar1 = &(this->ComponentInits).SubobjectInits.ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>_>
              (0x10,8,iVar3,0,
               (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> *)
               &this->ComponentInits,iVar3,piVar1);
    _Dst = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
      _Dst = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
             &this->ComponentInits;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 4);
  }
  (this->ConstructedSubobjects).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  _Src_00 = (param_1->ConstructedSubobjects).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->ConstructedSubobjects).ArrayNum;
  (this->ConstructedSubobjects).ArrayNum = iVar3;
  if (_Src_00 == (ForElementType<FName>)0x0) {
    _Src_00 = (ForElementType<FName>)&param_1->ConstructedSubobjects;
  }
  piVar1 = &(this->ConstructedSubobjects).ArrayMax;
  if (iVar3 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,iVar3,0,&(this->ConstructedSubobjects).AllocatorInstance,iVar3,piVar1);
    _Dst_00 = (this->ConstructedSubobjects).AllocatorInstance.SecondaryData;
    if (_Dst_00 == (ForElementType<FName>)0x0) {
      _Dst_00 = (ForElementType<FName>)&this->ConstructedSubobjects;
    }
    memcpy((void *)_Dst_00,(void *)_Src_00,(longlong)iVar3 << 3);
  }
  this->LastConstructedObject = param_1->LastConstructedObject;
  lVar4 = *(longlong *)&param_1->PropertyInitCallback;
  *(longlong *)&this->PropertyInitCallback = lVar4;
  *(undefined8 *)&(this->PropertyInitCallback).field_0x28 = 0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(param_1->PropertyInitCallback).field_0x28;
    puVar7 = (undefined8 *)&(param_1->PropertyInitCallback).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar7 = puVar5;
    }
    (**(code **)*puVar7)();
  }
  pTVar2 = &this->PropertyPostInitCallbacks;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PropertyPostInitCallbacks).ArrayMax;
  iVar3 = (param_1->PropertyPostInitCallbacks).ArrayNum;
  pTVar6 = (TFunction<void___cdecl(void)> *)
           (param_1->PropertyPostInitCallbacks).AllocatorInstance.Data;
  (this->PropertyPostInitCallbacks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<TFunction<void___cdecl(void)>,TFunction<void___cdecl(void)>,int>
              ((pTVar2->AllocatorInstance).Data,pTVar6,iVar3);
  }
  return this;
}

// InitNonNativeProperty @ 141ea5d10

bool __cdecl FObjectInitializer::InitNonNativeProperty(FProperty *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  
  pUVar4 = FField::GetOwnerClass((FField *)param_1);
  if ((pUVar4->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) != CLASS_None) {
    return false;
  }
  if (((uint)(int)param_1->PropertyFlags >> 9 & 1) == 0) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x150);
    if (param_1->ArrayDim < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (param_2 == (UObject *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*pcVar1)(param_1,&param_2->field_0x0 + param_1->Offset_Internal);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 14223d8f0

void __cdecl
`FObjectInitializer::FObjectInitializer'::__l1::<lambda_6_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 14223d900

void __cdecl
`FObjectInitializer::FObjectInitializer'::__l1::<lambda_7_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FObjectInitializer @ 1422572b0

FObjectInitializer * __thiscall
FObjectInitializer::FObjectInitializer
          (FObjectInitializer *this,UObject *param_1,UObject *param_2,
          EObjectInitializerOptions param_3,FObjectInstancingGraph *param_4)

{
  undefined1 *puVar1;
  
  this->Obj = param_1;
  this->ObjectArchetype = param_2;
  (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
  this->bCopyTransientsFromClassDefaults = (bool)((byte)param_3 & 1);
  this->InstanceGraph = param_4;
  this->bSubobjectClassInitializationAllowed = true;
  this->bIsDeferredInitializer = false;
  this->bShouldInitializePropsFromArchetype = (bool)((byte)(param_3 >> 1) & 1);
  (this->SubobjectOverrides).Overrides.ArrayNum = 0;
  (this->SubobjectOverrides).Overrides.ArrayMax = 8;
  (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0;
  (this->ComponentInits).SubobjectInits.ArrayNum = 0;
  (this->ComponentInits).SubobjectInits.ArrayMax = 8;
  (this->ConstructedSubobjects).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->ConstructedSubobjects).ArrayNum = 0;
  (this->ConstructedSubobjects).ArrayMax = 8;
  this->LastConstructedObject = (UObject *)0x0;
  *(undefined8 *)&this->PropertyInitCallback = 0;
  *(undefined8 *)&(this->PropertyInitCallback).field_0x28 = 0;
  *(undefined ***)&(this->PropertyInitCallback).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->PropertyInitCallback).field_0x18;
  *(code **)puVar1 =
       `FObjectInitializer::FObjectInitializer'::__l1::<lambda_7_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PropertyInitCallback =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  (this->PropertyPostInitCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPostInitCallbacks).ArrayNum = 0;
  (this->PropertyPostInitCallbacks).ArrayMax = 0;
  Construct_Internal(this);
  return this;
}

// FObjectInitializer @ 1422573a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FObjectInitializer * __thiscall
FObjectInitializer::FObjectInitializer
          (FObjectInitializer *this,UObject *param_1,FStaticConstructObjectParameters *param_2)

{
  FOverrides *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FObjectInstancingGraph *pFVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar9;
  FName FVar10;
  
  this->Obj = param_1;
  piVar2 = &(this->SubobjectOverrides).Overrides.ArrayMax;
  this->ObjectArchetype = param_2->Template;
  this->bCopyTransientsFromClassDefaults = param_2->bCopyTransientsFromClassDefaults;
  this->bShouldInitializePropsFromArchetype = true;
  this->bSubobjectClassInitializationAllowed = true;
  this->bIsDeferredInitializer = false;
  pFVar5 = param_2->InstanceGraph;
  (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
  this->InstanceGraph = pFVar5;
  (this->SubobjectOverrides).Overrides.ArrayNum = 0;
  *piVar2 = 8;
  (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0;
  (this->ComponentInits).SubobjectInits.ArrayNum = 0;
  (this->ComponentInits).SubobjectInits.ArrayMax = 8;
  (this->ConstructedSubobjects).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->ConstructedSubobjects).ArrayNum = 0;
  (this->ConstructedSubobjects).ArrayMax = 8;
  this->LastConstructedObject = (UObject *)0x0;
  lVar6 = *(longlong *)&param_2->PropertyInitCallback;
  *(longlong *)&this->PropertyInitCallback = lVar6;
  *(undefined8 *)&(this->PropertyInitCallback).field_0x28 = 0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)&(param_2->PropertyInitCallback).field_0x28;
    puVar8 = (undefined8 *)&(param_2->PropertyInitCallback).field_0x10;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = puVar7;
    }
    (**(code **)*puVar8)();
  }
  (this->PropertyPostInitCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPostInitCallbacks).ArrayNum = 0;
  (this->PropertyPostInitCallbacks).ArrayMax = 0;
  FVar10 = (FName)param_2->SubobjectOverrides;
  if ((FVar10 != (FName)0x0) && (pFVar1 = &this->SubobjectOverrides, (FName)pFVar1 != FVar10)) {
    FVar9 = (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar9 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)pFVar1;
    }
    DestructItems<FObjectInitializer::FOverrides::FOverride,int>
              ((FOverride *)FVar9,(this->SubobjectOverrides).Overrides.ArrayNum);
    iVar3 = *(int *)&((FOverride *)((longlong)FVar10 + 0x100))->ComponentClass;
    iVar4 = (this->SubobjectOverrides).Overrides.ArrayMax;
    if (((FOverride *)((longlong)FVar10 + 0x100))->ComponentName != (FName)0x0) {
      FVar10 = ((FOverride *)((longlong)FVar10 + 0x100))->ComponentName;
    }
    (this->SubobjectOverrides).Overrides.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      (this->SubobjectOverrides).Overrides.ArrayMax = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FOverrides::FOverride>_>
                (0x20,8,iVar3,iVar4,
                 (ForElementType<FObjectInitializer::FOverrides::FOverride> *)pFVar1,iVar3,piVar2);
      FVar9 = (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
        FVar9 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)pFVar1;
      }
      ConstructItems<FObjectInitializer::FOverrides::FOverride,FObjectInitializer::FOverrides::FOverride,int>
                ((void *)FVar9,(FOverride *)FVar10,iVar3);
    }
  }
  Construct_Internal(this);
  return this;
}

// FObjectInitializer @ 142257550

FObjectInitializer * __thiscall FObjectInitializer::FObjectInitializer(FObjectInitializer *this)

{
  undefined1 *puVar1;
  
  this->bCopyTransientsFromClassDefaults = false;
  this->bShouldInitializePropsFromArchetype = false;
  this->bSubobjectClassInitializationAllowed = true;
  this->bIsDeferredInitializer = false;
  (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
  this->Obj = (UObject *)0x0;
  this->ObjectArchetype = (UObject *)0x0;
  this->InstanceGraph = (FObjectInstancingGraph *)0x0;
  (this->SubobjectOverrides).Overrides.ArrayNum = 0;
  (this->SubobjectOverrides).Overrides.ArrayMax = 8;
  (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0;
  (this->ComponentInits).SubobjectInits.ArrayNum = 0;
  (this->ComponentInits).SubobjectInits.ArrayMax = 8;
  (this->ConstructedSubobjects).AllocatorInstance.SecondaryData = (ForElementType<FName>)0x0;
  (this->ConstructedSubobjects).ArrayNum = 0;
  (this->ConstructedSubobjects).ArrayMax = 8;
  this->LastConstructedObject = (UObject *)0x0;
  *(undefined8 *)&this->PropertyInitCallback = 0;
  *(undefined8 *)&(this->PropertyInitCallback).field_0x28 = 0;
  *(undefined ***)&(this->PropertyInitCallback).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->PropertyInitCallback).field_0x18;
  *(code **)puVar1 =
       `FObjectInitializer::FObjectInitializer'::__l1::<lambda_6_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PropertyInitCallback =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  (this->PropertyPostInitCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPostInitCallbacks).ArrayNum = 0;
  (this->PropertyPostInitCallbacks).ArrayMax = 0;
  Construct_Internal(this);
  return this;
}

// ~FObjectInitializer @ 1422595c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FObjectInitializer::~FObjectInitializer(FObjectInitializer *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  UClass *this_00;
  longlong *plVar5;
  ForElementType<FName> FVar6;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  FUObjectThreadContext *this_01;
  UClass *pUVar11;
  FObjectInitializer *pFVar12;
  FUObjectThreadContext *this_02;
  FObjectInitializer *pFVar13;
  longlong *plVar14;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 *local_20;
  
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_01 = (FUObjectThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar10);
  if (this->bIsDeferredInitializer == false) {
    piVar1 = &this_01->IsInConstructor;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadContext.IsInConstructor >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x104d,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    this_01->ConstructedObject = this->LastConstructedObject;
    if (this->Obj == (UObject *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x1051,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  else if (this->Obj == (UObject *)0x0) goto LAB_142259841;
  UObjectBaseUtility::ClearInternalFlags((UObjectBaseUtility *)this->Obj,PendingConstruction);
  uVar3 = *(uint *)&this->Obj->field_0x8;
  this_00 = *(UClass **)&this->Obj->field_0x10;
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  if (this_00 == pUVar11) {
    if (((uVar3 >> 4 & 1) != 0) && (this->ObjectArchetype != (UObject *)0x0)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObjectArchetype == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x106e,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  else if ((this->ObjectArchetype == (UObject *)0x0) && (this_00->_padding_ != 0)) {
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->ObjectArchetype = (UObject *)(this_00->ClassDefaultObject).field0_0x0;
  }
  bVar9 = FBlueprintSupport::IsDeferredCDOInitializationDisabled();
  if (bVar9) {
LAB_14225978b:
    PostConstructInit(this);
  }
  else {
    pFVar12 = FDeferredObjInitializationHelper::DeferObjectInitializerIfNeeded(this);
    if (pFVar12 == (FObjectInitializer *)0x0) goto LAB_14225978b;
    pFVar12->bIsDeferredInitializer = true;
    puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_20 = local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this_02 = (FUObjectThreadContext *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar10);
    pFVar13 = FUObjectThreadContext::TopInitializer(this_02);
    if (pFVar13 == pFVar12) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FUObjectThreadContext::Get().TopInitializer() != DeferredCopy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x107b,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  if (this->bIsDeferredInitializer == false) {
    pFVar12 = FUObjectThreadContext::TopInitializer(this_01);
    if (pFVar12 != this) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadContext.TopInitializer() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x1095,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if ((this_01->InitializerStack).ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar4 = (this_01->InitializerStack).ArrayNum;
    uVar3 = iVar4 - 1;
    pFVar2 = (this_01->InitializerStack).AllocatorInstance.Data + (longlong)(int)uVar3 * 8;
    iVar4 = ~uVar3 + iVar4;
    if (iVar4 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar4 << 3);
    }
    piVar1 = &(this_01->InitializerStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
LAB_142259841:
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)
             (this->PropertyPostInitCallbacks).AllocatorInstance.Data,
             (this->PropertyPostInitCallbacks).ArrayNum);
  pFVar2 = (this->PropertyPostInitCallbacks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->PropertyInitCallback != 0) {
    plVar5 = *(longlong **)&(this->PropertyInitCallback).field_0x28;
    plVar14 = (longlong *)&(this->PropertyInitCallback).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar14 = plVar5;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FVar6 = (this->ConstructedSubobjects).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FVar7 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  FVar15 = (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar15 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)&this->SubobjectOverrides;
  }
  DestructItems<FObjectInitializer::FOverrides::FOverride,int>
            ((FOverride *)FVar15,(this->SubobjectOverrides).Overrides.ArrayNum);
  FVar15 = (this->SubobjectOverrides).Overrides.AllocatorInstance.SecondaryData;
  if (FVar15 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FMemory::Free((void *)FVar15);
    return;
  }
  return;
}

// AssertIfInConstructor @ 1422611b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FObjectInitializer::AssertIfInConstructor(UObject *param_1,wchar_t *param_2)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  if ((*(int *)(pFVar2 + 5) != 0) && ((FTlsAutoCleanup)param_1 == pFVar2[6])) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  return;
}

// AssertIfSubobjectSetupIsNotAllowed @ 142261220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed
          (FObjectInitializer *this,TArrayView<FName_const_,int> *param_1)

{
  FName *pFVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  size_t sVar3;
  FString *pFVar4;
  FName *pFVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  int iVar7;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar6 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (this->bSubobjectClassInitializationAllowed == false) {
    pFVar5 = param_1->DataPtr;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = pFVar5 + param_1->ArrayNum;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    if (pFVar5 != pFVar1) {
      while( true ) {
        local_res8 = *pFVar5;
        _Str = L".";
        if ((int)uVar6 < 2) {
          _Str = L"";
        }
        sVar3 = wcslen(_Str);
        ::FString::AppendChars(&local_48,_Str,(int)sVar3);
        pFVar4 = ::FName::ToString(&local_res8,&local_28);
        iVar2 = (pFVar4->Data).ArrayNum;
        iVar7 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_48,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar7);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        pFVar5 = pFVar5 + 1;
        if (pFVar5 == pFVar1) break;
        uVar6 = local_48.Data._8_8_ & 0xffffffff;
      }
    }
    this_00 = (UObjectBaseUtility *)this->Obj;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName(this_00,(UObject *)0x0,&local_38,None);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if ((this_00 != (UObjectBaseUtility *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AssertIfSubobjectSetupIsNotAllowed @ 1422613b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed
          (FObjectInitializer *this,TStringView<wchar_t> *param_1)

{
  UObjectBaseUtility *this_00;
  FString local_18;
  
  if (this->bSubobjectClassInitializationAllowed == false) {
    this_00 = (UObjectBaseUtility *)this->Obj;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName(this_00,(UObject *)0x0,&local_18,None);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if ((this_00 != (UObjectBaseUtility *)0x0) &&
       (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AssertIfSubobjectSetupIsNotAllowed @ 142261460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(FObjectInitializer *this,FName param_1)

{
  UObjectBaseUtility *this_00;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (this->bSubobjectClassInitializationAllowed == false) {
    local_res10 = param_1;
    ::FName::GetPlainNameString(&local_res10,&local_28);
    this_00 = (UObjectBaseUtility *)this->Obj;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName(this_00,(UObject *)0x0,&local_38,None);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if ((this_00 != (UObjectBaseUtility *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Construct_Internal @ 142266620

void __thiscall FObjectInitializer::Construct_Internal(FObjectInitializer *this)

{
  FTlsAutoCleanup *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  FObjectInitializer *local_28;
  code *local_20;
  undefined1 *local_18;
  
  puVar6 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_18 = local_res10;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar6);
  *(int *)(pFVar7 + 5) = *(int *)(pFVar7 + 5) + 1;
  pFVar1 = pFVar7 + 2;
  this->LastConstructedObject = (UObject *)pFVar7[6];
  pFVar7[6] = (FTlsAutoCleanup)this->Obj;
  local_28 = this;
  if ((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      *(FScriptContainerElement **)pFVar1 + (longlong)*(int *)&pFVar7[3].field_0x4 * 8)) {
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
  iVar5 = *(int *)(pFVar7 + 3);
  if (iVar5 == *(int *)&pFVar7[3].field_0x4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar1,(int *)&pFVar7[3].field_0x4);
  }
  *(int *)(pFVar7 + 3) = iVar5 + 1;
  *(FObjectInitializer **)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar5 * 8) = local_28;
  if (this->Obj != (UObject *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FConfigCacheIni::GetBool
                  (GConfig,L"Kismet",L"bAllowNativeComponentClassOverrides",local_res8,&GEngineIni);
        bAllowNativeComponentClassOverrides = local_res8[0];
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (bAllowNativeComponentClassOverrides != false) {
      plVar2 = *(longlong **)&this->Obj->field_0x10;
      (**(code **)(*plVar2 + 0x390))(plVar2,this);
    }
  }
  return;
}

// CreateDefaultSubobject @ 142267ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FObjectInitializer::CreateDefaultSubobject
          (FObjectInitializer *this,UObject *param_1,FName param_2,UClass *param_3,UClass *param_4,
          bool param_5,bool param_6)

{
  int *piVar1;
  ForElementType<FName> FVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  UObject *pUVar12;
  ForElementType<FName> FVar13;
  UObject *this_00;
  ForElementType<FName> FVar14;
  longlong *plVar15;
  ForElementType<FName> FVar16;
  EObjectFlags EVar17;
  FName local_res18 [2];
  undefined1 auStackY_1d8 [32];
  undefined1 local_187 [7];
  TObjectPtr<UObject>_u_0 local_180;
  FString local_178;
  undefined8 local_168;
  FObjectInitializer *local_160;
  FName local_158;
  FName local_150;
  FString local_148;
  FString local_138;
  code *local_128;
  undefined1 *local_120;
  FOverrideDetails local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [104];
  longlong *local_70;
  int local_68;
  FOverrides *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_res18[0] = param_2;
  local_160 = this;
  puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_120 = local_187;
  local_128 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_128,puVar10);
  if (*(int *)(pFVar11 + 5) == 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  local_168 = 0;
  if (local_res18[0] == (FName)0x0) {
    ::FName::ToString(local_res18,&local_108);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  FOverrides::Get(&this->SubobjectOverrides,&local_118,local_res18[0],param_3,param_4,!param_5);
  if (local_118.Class == (UClass *)0x0) {
    return (UObject *)0x0;
  }
  if (param_3 == (UClass *)0x0) {
LAB_142267ce1:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverrideClass->IsChildOf(ReturnType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1756,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UObject *)(*pcVar5)();
      return pUVar12;
    }
  }
  else {
    iVar9 = (int)param_3->_padding_;
    if (((int)(local_118.Class)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((local_118.Class)->_padding_ + (longlong)iVar9 * 8) !=
        &param_3->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_142267ce1;
  }
  if (((local_118.Class)->ClassFlags & CLASS_Abstract) != CLASS_None) {
    if (param_5) {
      return (UObject *)0x0;
    }
    if ((*(byte *)(*(longlong *)&param_1->field_0x10 + 0xd4) & 1) != 0) {
      return (UObject *)0x0;
    }
    if ((byte)LogUObjectGlobals._0_1_ < 3) {
      return (UObject *)0x0;
    }
    local_158 = (FName)(local_118.Class)->_padding_;
    ::FName::ToString(&local_158,&local_148);
    ::FName::ToString(local_res18,&local_f8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return (UObject *)0x0;
    }
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
    return (UObject *)0x0;
  }
  if (((local_118.Class)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(local_118.Class);
  }
  local_180 = ((local_118.Class)->ClassDefaultObject).field0_0x0;
  EVar17 = *(EObjectFlags *)&param_1->field_0x8 &
           (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public) | RF_DefaultSubObject;
  if (((this->ObjectArchetype == (UObject *)0x0) ||
      (this->ObjectArchetype == *(UObject **)(*(longlong *)&param_1->field_0x10 + 0x110))) ||
     (bVar7 = true, (*(uint *)&param_1->field_0x8 >> 4 & 1) != 0)) {
    bVar7 = false;
  }
  FVar16 = (ForElementType<FName>)&this->ConstructedSubobjects;
  FVar2 = (this->ConstructedSubobjects).AllocatorInstance.SecondaryData;
  FVar13 = FVar2;
  if (FVar2 == (ForElementType<FName>)0x0) {
    FVar13 = FVar16;
  }
  for (FVar14 = FVar13;
      FVar14 != (ForElementType<FName>)
                ((longlong)FVar13 + (longlong)(this->ConstructedSubobjects).ArrayNum * 8);
      FVar14 = (ForElementType<FName>)((longlong)FVar14 + 8)) {
    if (*(FName *)FVar14 == local_res18[0]) {
      if ((int)((longlong)FVar14 - (longlong)FVar13 >> 3) != -1) {
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_178,None);
        ::FName::ToString(local_res18,&local_e8);
        local_150 = (FName)(local_118.Class)->_padding_;
        ::FName::ToString(&local_150,&local_138);
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        this = local_160;
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
          this = local_160;
        }
        goto LAB_142267fe6;
      }
      break;
    }
  }
  FVar13 = FVar16;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar13 = FVar2;
  }
  if ((ulonglong)FVar13 <= local_res18) {
    FVar13 = FVar16;
    if (FVar2 != (ForElementType<FName>)0x0) {
      FVar13 = FVar2;
    }
    if ((local_res18 <
         (FName *)((longlong)FVar13 + (longlong)(this->ConstructedSubobjects).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UObject *)(*pcVar5)();
      return pUVar12;
    }
  }
  iVar9 = (this->ConstructedSubobjects).ArrayNum;
  piVar1 = &(this->ConstructedSubobjects).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                      (0x408,(ForElementType<FName> *)FVar16,piVar1);
  }
  (this->ConstructedSubobjects).ArrayNum = iVar9 + 1;
  FVar2 = (this->ConstructedSubobjects).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FName>)0x0) {
    FVar16 = FVar2;
  }
  *(FName *)((longlong)FVar16 + (longlong)iVar9 * 8) = local_res18[0];
LAB_142267fe6:
  local_d8._0_8_ = local_118.Class;
  GetTransientPackage();
  local_d8._28_4_ = Borrowed;
  local_d8[0x20] = false;
  local_d8[0x21] = false;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8._64_8_ = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = local_118.SubOverrides;
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._16_4_ = local_res18[0].ComparisonIndex.Value;
  local_d8._20_4_ = local_res18[0].Number;
  local_d8._8_8_ = param_1;
  local_d8._24_4_ = EVar17;
  if (((!param_6) && (bVar7)) &&
     ((pUVar12 = UObject::GetDefaultSubobjectByName(this->ObjectArchetype,local_res18[0]),
      pUVar12 != (UObject *)0x0 && (local_180.DebugPtr != pUVar12)))) {
    iVar9 = (int)param_3->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &param_3->_padding_)) {
      local_d8._40_8_ = pUVar12;
    }
  }
  TVar6 = local_180;
  this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  pUVar12 = (UObject *)local_d8._40_8_;
  if ((UObject *)local_d8._40_8_ == (UObject *)0x0) {
    if (!param_6) {
      pUVar12 = GetArchetypeImpl(param_1,(IObjectArchetypePolicy *)0x0);
      bVar7 = UObject::IsInBlueprint(pUVar12);
      if (((bVar7) &&
          (pUVar12 = GetArchetypeImpl(this_00,(IObjectArchetypePolicy *)0x0),
          pUVar12 != (UObject *)0x0)) && (TVar6.DebugPtr != pUVar12)) {
        iVar9 = (int)param_3->_padding_;
        if ((iVar9 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
            &param_3->_padding_)) goto LAB_1422680e7;
      }
    }
  }
  else {
LAB_1422680e7:
    FSubobjectsToInit::Add(&this->ComponentInits,this_00,pUVar12);
  }
  if (((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0) &&
     (lVar3 = *(longlong *)&param_1->field_0x10, *(longlong *)(lVar3 + 0x40) != 0)) {
    iVar9 = (int)param_3->_padding_;
    if (((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar9) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
         &param_3->_padding_)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewSubobject->IsA(BaseClass)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x118c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UObject *)(*pcVar5)();
      return pUVar12;
    }
    lVar4 = *(longlong *)(*(longlong *)&this_00->field_0x20 + 0x10);
    if (lVar4 != 0) {
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) goto LAB_1422681a5;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsChildOf(NewSubobject->GetOuter()->GetClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x118e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pUVar12 = (UObject *)(*pcVar5)();
      return pUVar12;
    }
  }
LAB_1422681a5:
  UObjectBaseUtility::ClearGarbage((UObjectBaseUtility *)this_00);
  if (local_d8._64_8_ != 0) {
    plVar15 = (longlong *)(local_d8 + 0x50);
    if (local_70 != (longlong *)0x0) {
      plVar15 = local_70;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return this_00;
}

// CreateEditorOnlyDefaultSubobject @ 1422681e0

UObject * __thiscall
FObjectInitializer::CreateEditorOnlyDefaultSubobject
          (FObjectInitializer *this,UObject *param_1,FName param_2,UClass *param_3,bool param_4)

{
  return (UObject *)0x0;
}

// Get @ 14226dd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FObjectInitializer * __cdecl FObjectInitializer::Get(void)

{
  uint *puVar1;
  FUObjectThreadContext *this;
  FObjectInitializer *pFVar2;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FUObjectThreadContext *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  if (this->IsInConstructor == 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  pFVar2 = FUObjectThreadContext::TopInitializer(this);
  if (pFVar2 == (FObjectInitializer *)0x0) {
    pFVar2 = FUObjectThreadContext::ReportNull(this);
  }
  return pFVar2;
}

// GetClass @ 14226f140

UClass * __thiscall FObjectInitializer::GetClass(FObjectInitializer *this)

{
  return *(UClass **)&this->Obj->field_0x10;
}

// InitProperties @ 1422734c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FObjectInitializer::InitProperties(UObject *param_1,UClass *param_2,UObject *param_3,bool param_4)

{
  UClass *pUVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_InitProperties> FVar12;
  longlong lVar13;
  void *pvVar14;
  EClassFlags EVar15;
  int iVar16;
  FName FVar17;
  void *pvVar18;
  bool bVar19;
  UObject *pUVar20;
  FColor_u_0 local_74;
  FName local_70;
  FName local_68;
  UClass *local_60;
  FName local_58;
  FName local_50;
  
  if (GEventDrivenLoaderEnabled) {
    if (((param_2 != (UClass *)0x0) && (((uint)param_2->_padding_ >> 10 & 1) != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || !DefaultsClass || !DefaultsClass->HasAnyFlags(RF_NeedLoad)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                           ,0x11e3,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((GEventDrivenLoaderEnabled != false) && (param_3 != (UObject *)0x0)) &&
       (((*(uint *)&param_3->field_0x8 >> 10 & 1) != 0 &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GEventDrivenLoaderEnabled || !DefaultData || !DefaultData->HasAnyFlags(RF_NeedLoad)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                            ,0x11e4,L""), bVar8)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar12 = StatPtr_STAT_InitProperties;
  if (StatPtr_STAT_InitProperties == (FThreadSafeStaticStat<FStat_STAT_InitProperties>)0x0) {
    pFVar11 = ::FName::FName(&local_58,"STAT_InitProperties");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_InitProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitProperties,*pFVar11,
                        L"InitProperties","STATGROUP_Object","STATCAT_Advanced",L"Object",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar9 = false;
  bVar7 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_74.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_74._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_70.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                   ,0x11e6);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_68 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_1422736d4;
    }
  }
  bVar6 = bVar9;
  bVar8 = bVar7;
  bVar7 = false;
  local_68 = local_50;
  FVar17 = local_50;
LAB_1422736d4:
  if (((param_2 == (UClass *)0x0) || (param_1 == (UObject *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultsClass && Obj",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                         ,0x11e8,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    FOverridableManager::InheritEnabledFrom
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)param_1,param_3);
  }
  pUVar1 = *(UClass **)&param_1->field_0x10;
  EVar15 = pUVar1->ClassFlags & (CLASS_Intrinsic|CLASS_Native);
  bVar9 = EVar15 == CLASS_None;
  if ((param_4) || (param_2 != pUVar1)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  bVar19 = false;
  if ((*(uint *)&param_1->field_0x8 >> 10 & 1) == 0) {
    bVar19 = param_4;
  }
  local_60 = pUVar1;
  if ((EVar15 == CLASS_None) || (!bVar10)) {
    bVar5 = false;
    if (param_3 == (pUVar1->ClassDefaultObject).field0_0x0.DebugPtr) {
      bVar5 = bVar10;
    }
    if (bVar19 == false) {
      pUVar20 = (UObject *)0x0;
    }
    else {
      if ((param_2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(param_2);
      }
      pUVar20 = (param_2->ClassDefaultObject).field0_0x0.DebugPtr;
    }
    if ((GEventDrivenLoaderEnabled != false) && (bVar19 != false)) {
      if ((param_2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(param_2);
      }
      if (((*(uint *)&((param_2->ClassDefaultObject).field0_0x0.DebugPtr)->field_0x8 >> 10 & 1) != 0
          ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!GEventDrivenLoaderEnabled || !bCopyTransientsFromClassDefaults || !DefaultsClass->GetDefaultObject()->HasAnyFlags(RF_NeedLoad)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                                    ,0x1240,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar13 = 0x88;
    if (!bVar5) {
      lVar13 = 0x70;
    }
    pFVar3 = *(FProperty **)((longlong)&pUVar1->_padding_ + lVar13);
    for (; pFVar3 != (FProperty *)0x0;
        pFVar3 = *(FProperty **)((longlong)&pFVar3->_padding_ + lVar13)) {
      bVar10 = bVar9 != false;
      bVar9 = false;
      if (bVar10) {
        bVar9 = InitNonNativeProperty(pFVar3,param_1);
      }
      if ((pFVar3->PropertyFlags &
          (CPF_NonPIEDuplicateTransient|CPF_DuplicateTransient|CPF_Transient)) == CPF_None) {
        bVar10 = false;
LAB_142273ad8:
        if ((bVar19 == false) || (!bVar10)) {
          if (param_2 == (UClass *)0x0) {
            iVar16 = 0x7fffffff;
          }
          else {
            iVar16 = (int)param_2->_padding_;
          }
          if (iVar16 < pFVar3->ArrayDim * pFVar3->ElementSize + pFVar3->Offset_Internal)
          goto LAB_142273c6c;
          if ((pFVar3->ArrayDim < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((param_3 == (UObject *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar18 = &param_3->field_0x0 + pFVar3->Offset_Internal;
        }
        else {
          if ((pFVar3->ArrayDim < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pUVar20 == (UObject *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar18 = &pUVar20->field_0x0 + pFVar3->Offset_Internal;
        }
        if ((pFVar3->ArrayDim < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar14 = &param_1->field_0x0 + pFVar3->Offset_Internal;
        if (pvVar14 != pvVar18) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,pvVar14,pvVar18,pFVar3->ArrayDim);
          }
          else {
            memcpy(pvVar14,pvVar18,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
          }
        }
      }
      else {
        bVar10 = true;
        if ((pFVar3->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
            CPF_None) goto LAB_142273ad8;
      }
LAB_142273c6c:
      lVar13 = 0x60;
      if (!bVar5) {
        lVar13 = 0x48;
      }
      pUVar1 = local_60;
      FVar17 = local_68;
    }
    if (bVar5) {
      (**(code **)(pUVar1->_padding_ + 0x388))(pUVar1,param_1,param_3);
    }
  }
  else if (param_3 != (UObject *)0x0) {
    if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == param_3) {
      for (plVar2 = (longlong *)pUVar1->_padding_; plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[0xc]) {
        if (((plVar2[7] & 0x800000202000U) == 0) || ((plVar2[7] & 0x8000080000U) == 0)) {
          if (param_2 == (UClass *)0x0) {
            iVar16 = 0x7fffffff;
          }
          else {
            iVar16 = (int)param_2->_padding_;
          }
          if ((int)plVar2[6] * *(int *)((longlong)plVar2 + 0x34) + *(int *)((longlong)plVar2 + 0x44)
              <= iVar16) {
            if (((int)plVar2[6] < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar18 = &param_3->field_0x0 + *(int *)((longlong)plVar2 + 0x44);
            if (((int)plVar2[6] < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar14 = &param_1->field_0x0 + *(int *)((longlong)plVar2 + 0x44);
            if (pvVar14 != pvVar18) {
              if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
                (**(code **)(*plVar2 + 0xf0))(plVar2,pvVar14,pvVar18,(int)plVar2[6]);
              }
              else {
                memcpy(pvVar14,pvVar18,
                       (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
              }
            }
          }
        }
      }
    }
    else {
      for (plVar2 = (longlong *)pUVar1->_padding_; plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[9]) {
        if (((plVar2[7] & 0x800000202000U) == 0) || ((plVar2[7] & 0x8000080000U) == 0)) {
          if (param_2 == (UClass *)0x0) {
            iVar16 = 0x7fffffff;
          }
          else {
            iVar16 = (int)param_2->_padding_;
          }
          if ((int)plVar2[6] * *(int *)((longlong)plVar2 + 0x34) + *(int *)((longlong)plVar2 + 0x44)
              <= iVar16) {
            if (((int)plVar2[6] < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar18 = &param_3->field_0x0 + *(int *)((longlong)plVar2 + 0x44);
            if (((int)plVar2[6] < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar14 = &param_1->field_0x0 + *(int *)((longlong)plVar2 + 0x44);
            if (pvVar14 != pvVar18) {
              if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
                (**(code **)(*plVar2 + 0xf0))(plVar2,pvVar14,pvVar18,(int)plVar2[6]);
              }
              else {
                memcpy(pvVar14,pvVar18,
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
              }
            }
          }
        }
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// InitSubobjectProperties @ 142273eb0

bool __thiscall FObjectInitializer::InitSubobjectProperties(FObjectInitializer *this,bool param_1)

{
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  
  if ((param_1) && (this->bIsDeferredInitializer != false)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  uVar9 = 0;
  if (0 < (this->ComponentInits).SubobjectInits.ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FVar1 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
              &this->ComponentInits;
      if (FVar1 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar8 = FVar1;
      }
      pUVar2 = *(UObject **)(lVar11 + (longlong)FVar8);
      uVar7 = 0;
      if ((int)uVar9 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FVar1 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
              &this->ComponentInits;
      if (FVar1 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar8 = FVar1;
      }
      pUVar3 = *(UObject **)(lVar11 + 8 + (longlong)FVar8);
      InitProperties(pUVar2,*(UClass **)&pUVar3->field_0x10,pUVar3,false);
      if ((param_1) && ((*(uint *)&pUVar2->field_0x8 >> 10 & 1) == 0)) {
        bVar10 = true;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < (this->ComponentInits).SubobjectInits.ArrayNum);
  }
  return bVar10;
}

// InstanceSubobjects @ 1422744a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectInitializer::InstanceSubobjects
          (FObjectInitializer *this,UClass *param_1,bool param_2,bool param_3)

{
  FSubobjectsToInit *pFVar1;
  int iVar2;
  TNotNull<void_*> TVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_InstanceSubobjects> FVar12;
  UObject *pUVar13;
  FName FVar14;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar15;
  uint uVar16;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar17;
  UStruct *pUVar18;
  FObjectInstancingGraph *pFVar19;
  longlong lVar20;
  undefined1 auStackY_208 [32];
  undefined1 local_1a8;
  char local_1a7;
  char local_1a6;
  FName local_1a0;
  FColor_u_0 local_198 [2];
  FName local_190;
  FName local_188;
  UClass *local_178;
  FObjectInstancingGraph *local_170;
  FName local_168 [2];
  undefined1 local_158 [88];
  void *local_100;
  undefined4 local_f8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f0;
  void *local_b0;
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  FVar12 = StatPtr_STAT_InstanceSubobjects;
  local_1a7 = param_2;
  local_1a6 = param_3;
  local_178 = param_1;
  if (StatPtr_STAT_InstanceSubobjects == (FThreadSafeStaticStat<FStat_STAT_InstanceSubobjects>)0x0)
  {
    pFVar11 = ::FName::FName(local_168,"STAT_InstanceSubobjects");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_InstanceSubobjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InstanceSubobjects,*pFVar11,
                        L"InstanceSubobjects","STATGROUP_Object","STATCAT_Advanced",L"Object",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_190.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                   ,0x11b6);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_142274613;
    }
  }
  bVar7 = false;
  local_1a0 = local_188;
  FVar14 = local_188;
LAB_142274613:
  FObjectInstancingGraph::FObjectInstancingGraph((FObjectInstancingGraph *)local_158,false);
  pFVar19 = (FObjectInstancingGraph *)local_158;
  if (this->InstanceGraph != (FObjectInstancingGraph *)0x0) {
    pFVar19 = this->InstanceGraph;
  }
  local_170 = pFVar19;
  FObjectInstancingGraph::AddNewObject(pFVar19,this->Obj,this->ObjectArchetype);
  FVar17 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
  pFVar1 = &this->ComponentInits;
  iVar2 = (this->ComponentInits).SubobjectInits.ArrayNum;
  if (FVar17 == (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
    FVar17 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)pFVar1;
  }
  FVar15 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
           ((longlong)iVar2 * 0x10 + (longlong)FVar17);
  while( true ) {
    if ((this->ComponentInits).SubobjectInits.ArrayNum != iVar2) {
      local_1a8 = 0;
      `TCheckedPointerIterator<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    if (FVar17 == FVar15) break;
    FObjectInstancingGraph::AddNewObject
              (pFVar19,*(UObject **)FVar17,*(UObject **)((longlong)FVar17 + 8));
    FVar17 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
             ((longlong)FVar17 + 0x10);
  }
  if (local_1a7 != '\0') {
    pUVar13 = this->ObjectArchetype;
    if (pUVar13 == (UObject *)0x0) {
      pUVar13 = GetArchetypeImpl(this->Obj,(IObjectArchetypePolicy *)0x0);
    }
    TVar3.Val = this->Obj;
    if (TVar3.Val == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    if (pUVar13 == (UObject *)0x0) {
      pUVar18 = (UStruct *)0x0;
    }
    else {
      pUVar18 = *(UStruct **)&pUVar13->field_0x10;
    }
    UStruct::InstanceSubobjectTemplates
              ((UStruct *)local_178,TVar3,pUVar13,pUVar18,(TNotNull<UObject_*>)TVar3.Val,pFVar19);
  }
  pFVar19 = local_170;
  if ((local_1a6 != '\0') && (uVar16 = 0, 0 < (this->ComponentInits).SubobjectInits.ArrayNum)) {
    lVar20 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)pFVar1;
      if (FVar17 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar15 = FVar17;
      }
      TVar3.Val = *(void **)(lVar20 + (longlong)FVar15);
      uVar10 = 0;
      if ((int)uVar16 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)pFVar1;
      if (FVar17 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar15 = FVar17;
      }
      pvVar4 = *(void **)(lVar20 + 8 + (longlong)FVar15);
      if (((*(uint *)((longlong)TVar3.Val + 8) >> 10 & 1) == 0) ||
         (this->bIsDeferredInitializer != false)) {
        UStruct::InstanceSubobjectTemplates
                  (*(UStruct **)((longlong)TVar3.Val + 0x10),TVar3,pvVar4,
                   *(UStruct **)((longlong)pvVar4 + 0x10),(TNotNull<UObject_*>)TVar3.Val,pFVar19);
      }
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0x10;
      FVar14 = local_1a0;
    } while ((int)uVar16 < (this->ComponentInits).SubobjectInits.ArrayNum);
  }
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f0);
  local_f8 = 0;
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_158 + 0x18));
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// IsInstancingAllowed @ 142274c10

bool __thiscall FObjectInitializer::IsInstancingAllowed(FObjectInitializer *this)

{
  if ((this->InstanceGraph != (FObjectInstancingGraph *)0x0) &&
     ((this->InstanceGraph->InstancingOptions & DisableInstancing) != None)) {
    return false;
  }
  return true;
}

// PostConstructInit @ 14227a720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FObjectInitializer::PostConstructInit(FObjectInitializer *this)

{
  FSubobjectsToInit *this_00;
  void *_Dst;
  int iVar1;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PostConstructInitializeProperties> FVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  undefined8 uVar17;
  FThreadSafeStaticStat<FStat_STAT_PostReinitProperties> FVar18;
  FThreadSafeStaticStat<FStat_STAT_PostInitProperties> FVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  longlong *plVar22;
  ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> FVar23;
  FScriptContainerElement *pFVar24;
  FTlsAutoCleanup FVar25;
  uint uVar26;
  UClass *pUVar27;
  ulonglong uVar28;
  longlong *plVar29;
  FName FVar30;
  FScriptContainerElement *pFVar31;
  FName FVar32;
  longlong lVar33;
  ulonglong uVar34;
  bool bVar35;
  uint uVar36;
  UClass *pUVar37;
  FTlsAutoCleanup FVar38;
  FScriptContainerElement *pFVar39;
  undefined1 local_res20 [8];
  undefined1 local_128 [8];
  UClass *local_120;
  FName local_118;
  FColor_u_0 local_110;
  FColor_u_0 local_10c;
  FColor_u_0 local_108 [2];
  UClass *local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d0;
  FName local_c0;
  FObjectInitializer *local_b0;
  longlong local_a8;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  code *local_70;
  undefined1 *local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  if (this->Obj == (UObject *)0x0) {
    return;
  }
  FVar14 = StatPtr_STAT_PostConstructInitializeProperties;
  if (StatPtr_STAT_PostConstructInitializeProperties ==
      (FThreadSafeStaticStat<FStat_STAT_PostConstructInitializeProperties>)0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_PostConstructInitializeProperties");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_PostConstructInitializeProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostConstructInitializeProperties
                        ,*pFVar13,L"PostConstructInitializeProperties","STATGROUP_ObjectVerbose",
                        "STATCAT_Advanced",L"ObjectVerbose",false,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar30 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14227a899:
    bVar8 = bVar10;
    bVar6 = bVar9;
    bVar9 = false;
    local_118 = local_e0;
    FVar30 = local_e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_f8.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                   ,0x10a8);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14227a899;
    local_118 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar9 = true;
  }
  if (((*(uint *)&this->Obj->field_0x8 & 0x10) == 0) ||
     (bVar7 = 1, (*(uint *)&this->Obj->field_0x8 >> 0x1a & 1) != 0)) {
    bVar7 = 0;
  }
  pUVar37 = *(UClass **)&this->Obj->field_0x10;
  pUVar27 = (UClass *)pUVar37->_padding_;
  local_120 = pUVar37;
  local_100 = pUVar27;
  if (this->bIsDeferredInitializer != false) {
    if (((*(uint *)&this->Obj->field_0x8 >> 0x16 & 1) != 0) &&
       ((*(uint *)&this->ObjectArchetype->field_0x8 & 0x10) != 0)) {
      pUVar15 = this->Obj;
      FVar32.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
      FVar32.Number = *(uint *)&pUVar15->field_0x1c;
      pUVar15 = FindArchetypeFromRequiredInfoImpl<0,1>
                          (pUVar37,*(UObject **)&pUVar15->field_0x20,FVar32,
                           *(EObjectFlags *)&this->Obj->field_0x8,false,
                           (IObjectArchetypePolicy *)0x0);
      this->ObjectArchetype = pUVar15;
    }
    if (((*(int *)(*(longlong *)&this->ObjectArchetype->field_0x10 + 0xd4) < 0) &&
        (local_b0 = this,
        bVar10 = `FObjectInitializer::PostConstructInit'::__l18::<lambda_1>::operator()(&local_b0),
        !bVar10)) &&
       (uVar36 = (this->ComponentInits).SubobjectInits.ArrayNum - 1, pUVar37 = local_120,
       -1 < (int)uVar36)) {
      this_00 = &this->ComponentInits;
      lVar33 = (longlong)(int)uVar36 << 4;
      do {
        uVar26 = 0;
        if ((int)uVar36 < (this->ComponentInits).SubobjectInits.ArrayNum) {
          uVar26 = ~uVar36 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)this_00;
        if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
          FVar23 = FVar2;
        }
        local_a8 = lVar33 + (longlong)FVar23;
        FVar30 = *(FName *)(*(longlong *)(lVar33 + (longlong)FVar23) + 0x18);
        pUVar15 = GetArchetypeImpl(*(UObject **)(*(longlong *)(lVar33 + (longlong)FVar23) + 0x20),
                                   (IObjectArchetypePolicy *)0x0);
        pUVar15 = UClass::GetDefaultSubobjectByName(*(UClass **)&pUVar15->field_0x10,FVar30);
        if (pUVar15 == (UObject *)0x0) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6173121095420342048>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                              ,0x10e0,"NewTemplate != nullptr");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar26 = 0;
          if ((int)uVar36 < (this->ComponentInits).SubobjectInits.ArrayNum) {
            uVar26 = ~uVar36 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          ::RemoveAtSwapImpl(&this_00->SubobjectInits,uVar36);
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>_>
                    (0x10,8,(ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit> *
                            )this_00,(this->ComponentInits).SubobjectInits.ArrayNum,
                     &(this->ComponentInits).SubobjectInits.ArrayMax);
        }
        else {
          *(UObject **)(local_a8 + 8) = pUVar15;
        }
        lVar33 = lVar33 + -0x10;
        uVar36 = uVar36 - 1;
        pUVar27 = local_100;
        FVar30 = local_118;
        pUVar37 = local_120;
      } while (-1 < (int)uVar36);
    }
  }
  uVar28 = 0;
  if (this->bShouldInitializePropsFromArchetype != false) {
    if ((bVar7 == 0) ||
       (bVar10 = FIsDuplicatingClassForReinstancing::operator_bool
                           (&GIsDuplicatingClassForReinstancing), bVar10)) {
      pUVar27 = pUVar37;
    }
    if (((pUVar27 == (UClass *)0x0) &&
        (pUVar16 = Z_Construct_UClass_UObject_NoRegister(), pUVar27 = pUVar37, pUVar37 != pUVar16))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Class==UObject::StaticClass()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                               ,0x1106,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar15 = this->ObjectArchetype;
    if (pUVar15 == (UObject *)0x0) {
      pUVar15 = (pUVar27->ClassDefaultObject).field0_0x0.DebugPtr;
    }
    InitProperties(this->Obj,pUVar27,pUVar15,this->bCopyTransientsFromClassDefaults);
  }
  if ((this->InstanceGraph == (FObjectInstancingGraph *)0x0) ||
     ((this->InstanceGraph->InstancingOptions & DisableInstancing) == None)) {
    bVar10 = true;
    if (this->bIsDeferredInitializer == false) goto LAB_14227ab8a;
    bVar35 = true;
    bVar10 = true;
  }
  else {
    bVar10 = false;
LAB_14227ab8a:
    bVar35 = false;
  }
  if (0 < (this->ComponentInits).SubobjectInits.ArrayNum) {
    uVar34 = uVar28;
    do {
      uVar26 = (uint)uVar28;
      uVar36 = 0;
      if ((int)uVar26 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar36 = ~uVar26 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
               &this->ComponentInits;
      if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar23 = FVar2;
      }
      local_100 = *(UClass **)((longlong)FVar23 + uVar34);
      uVar36 = 0;
      if ((int)uVar26 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar36 = ~uVar26 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar37 = local_100;
      FVar2 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
               &this->ComponentInits;
      if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar23 = FVar2;
      }
      pUVar15 = *(UObject **)(uVar34 + 8 + (longlong)FVar23);
      InitProperties((UObject *)local_100,*(UClass **)&pUVar15->field_0x10,pUVar15,false);
      if ((bVar10) && (((uint)pUVar37->_padding_ >> 10 & 1) == 0)) {
        bVar35 = true;
      }
      uVar28 = (ulonglong)(uVar26 + 1);
      uVar34 = uVar34 + 0x10;
      FVar30 = local_118;
    } while ((int)(uVar26 + 1) < (this->ComponentInits).SubobjectInits.ArrayNum);
  }
  plVar29 = (longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd48)
  ;
  if ((longlong *)*plVar29 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar29 + 8))();
    puVar3 = (undefined8 *)*plVar29;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *plVar29 = 0;
  }
  bVar11 = false;
  if (((*(uint *)&this->Obj->field_0x8 >> 10 & 1) == 0) || (this->bIsDeferredInitializer != false))
  {
    if ((bVar7 != 0) || ((local_120->ClassFlags & CLASS_PerObjectConfig) != CLASS_None)) {
      UObject::LoadConfig(this->Obj,(UClass *)0x0,(wchar_t *)0x0,(uint)bVar7,(FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
    }
    if (bVar10) {
      pUVar15 = (local_120->ClassDefaultObject).field0_0x0.DebugPtr;
      if (((pUVar15 == (UObject *)0x0) || (pUVar15 != this->ObjectArchetype)) ||
         ((local_120->ClassFlags & CLASS_CompiledFromBlueprint) != CLASS_None)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((bVar7 == 0) || (this->bShouldInitializePropsFromArchetype != false)) &&
         (((local_120->ClassFlags >> 0x17 & 1) != 0 && (bVar5)))) {
        if (((bVar7 != 0) &&
            ((local_120->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) != CLASS_None)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bIsCDO || !Class->HasAnyClassFlags(CLASS_Intrinsic|CLASS_Native)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                                ,0x1133,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar11 = true;
      }
    }
  }
  if (*(void **)&this->PropertyInitCallback != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PropertyInitCallback);
    pcVar4 = *(code **)&this->PropertyInitCallback;
    plVar29 = *(longlong **)&(this->PropertyInitCallback).field_0x28;
    plVar22 = (longlong *)&(this->PropertyInitCallback).field_0x10;
    if (plVar29 != (longlong *)0x0) {
      plVar22 = plVar29;
    }
    uVar17 = (**(code **)(*plVar22 + 8))();
    (*pcVar4)(uVar17);
  }
  if ((bVar11) || (bVar35 != false)) {
    InstanceSubobjects(this,local_120,bVar11,bVar35);
  }
  uVar34 = 0;
  uVar28 = uVar34;
  if (0 < (this->ComponentInits).SubobjectInits.ArrayNum) {
    do {
      FVar18 = StatPtr_STAT_PostReinitProperties;
      if (StatPtr_STAT_PostReinitProperties ==
          (FThreadSafeStaticStat<FStat_STAT_PostReinitProperties>)0x0) {
        pFVar13 = ::FName::FName(&local_58,"STAT_PostReinitProperties");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_PostReinitProperties>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostReinitProperties,*pFVar13
                            ,L"PostReinitProperties","STATGROUP_Object","STATCAT_Advanced",L"Object"
                            ,true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar30 = *(FName *)FVar18;
      bVar35 = false;
      bVar11 = false;
      local_d0.ComparisonIndex.Value = 0;
      local_d0.Number = 0;
      if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14227afa3:
        bVar5 = false;
        FVar30 = local_d0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_10c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_10c._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
          bVar35 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_f0.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
            local_f0.Number = FVar30.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_f0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x1149);
            bVar35 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14227afa3;
        local_d0 = FVar30;
        FThreadStats::AddMessage(FVar30,CycleScopeStart);
        bVar5 = true;
      }
      uVar26 = (uint)uVar34;
      uVar36 = 0;
      if ((int)uVar26 < (this->ComponentInits).SubobjectInits.ArrayNum) {
        uVar36 = ~uVar26 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->ComponentInits).SubobjectInits.AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)
               &this->ComponentInits;
      if (FVar2 != (ForElementType<FObjectInitializer::FSubobjectsToInit::FSubobjectInit>)0x0) {
        FVar23 = FVar2;
      }
      (**(code **)(**(longlong **)((longlong)FVar23 + uVar28) + 0x58))();
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar35) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar5) {
        FThreadStats::AddMessage(FVar30,CycleScopeEnd);
      }
      uVar34 = (ulonglong)(uVar26 + 1);
      FVar30 = local_118;
      uVar28 = uVar28 + 0x10;
    } while ((int)(uVar26 + 1) < (this->ComponentInits).SubobjectInits.ArrayNum);
  }
  iVar1 = (this->PropertyPostInitCallbacks).ArrayNum;
  pFVar31 = (this->PropertyPostInitCallbacks).AllocatorInstance.Data;
  pFVar39 = pFVar31 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PropertyPostInitCallbacks).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar31 == pFVar39) break;
    if (*(void **)pFVar31 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar31);
      pFVar24 = *(FScriptContainerElement **)(pFVar31 + 0x28);
      pcVar4 = *(code **)pFVar31;
      if (pFVar24 == (FScriptContainerElement *)0x0) {
        pFVar24 = pFVar31 + 0x10;
      }
      uVar17 = (**(code **)(*(longlong *)pFVar24 + 8))();
      (*pcVar4)(uVar17);
    }
    pFVar31 = pFVar31 + 0x30;
  }
  FVar19 = StatPtr_STAT_PostInitProperties;
  if (StatPtr_STAT_PostInitProperties == (FThreadSafeStaticStat<FStat_STAT_PostInitProperties>)0x0)
  {
    pFVar13 = ::FName::FName(local_50,"STAT_PostInitProperties");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_PostInitProperties>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostInitProperties,*pFVar13,
                        L"PostInitProperties","STATGROUP_Object","STATCAT_Advanced",L"Object",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar19;
  bVar35 = false;
  bVar11 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_14227b203:
    bVar5 = false;
    FVar32 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar35 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_e8.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                   ,0x1157);
        bVar35 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14227b203;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar5 = true;
  }
  (**(code **)(*(longlong *)this->Obj + 0x50))();
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  if (bVar10) {
    (**(code **)(local_120->_padding_ + 0x378))(local_120,this->Obj,this->InstanceGraph);
  }
  puVar20 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_68 = local_128;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar21 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,puVar20);
  if (*(int *)(pFVar21 + 0x1c) != 0) {
    if ((*(int *)(pFVar21 + 0x1c) < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar25 = pFVar21[0x1b];
    uVar36 = *(int *)(pFVar21 + 0x1c) - 1;
    lVar33 = (longlong)(int)uVar36 * 8;
    if (FVar25 == (FTlsAutoCleanup)0x0) {
      FVar38 = pFVar21[(longlong)(int)uVar36 + 0xb];
      FVar25 = (FTlsAutoCleanup)(pFVar21 + 0xb);
    }
    else {
      FVar38 = *(FTlsAutoCleanup *)(lVar33 + (longlong)FVar25);
    }
    _Dst = (void *)((longlong)FVar25 + lVar33);
    iVar1 = ~uVar36 + *(int *)(pFVar21 + 0x1c);
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar1 << 3);
    }
    *(int *)(pFVar21 + 0x1c) = *(int *)(pFVar21 + 0x1c) + -1;
    if (FVar38 == (FTlsAutoCleanup)this->Obj) goto LAB_14227b3b6;
  }
  local_a0 = *(FName *)(*(longlong *)&this->Obj->field_0x10 + 0x18);
  ::FName::ToString(&local_a0,&local_80);
  local_98 = *(FName *)(*(longlong *)&this->Obj->field_0x10 + 0x18);
  ::FName::ToString(&local_98,&local_90);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
LAB_14227b3b6:
  if ((((*(uint *)&this->Obj->field_0x8 >> 10 & 1) == 0) || (this->bIsDeferredInitializer != false))
     && ((this->InstanceGraph == (FObjectInstancingGraph *)0x0 ||
         ((this->InstanceGraph->InstancingOptions & DisableInstancing) == None)))) {
    UObject::CheckDefaultSubobjects(this->Obj,false);
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)this->Obj,RF_NeedInitialization);
  this->Obj = (UObject *)0x0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

// operator() @ 1504893b0

bool __thiscall `FObjectInitializer::PostConstructInit'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6173121095420342063>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6173121095420342063>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150489428;
    }
  }
  bVar2 = false;
LAB_150489428:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

