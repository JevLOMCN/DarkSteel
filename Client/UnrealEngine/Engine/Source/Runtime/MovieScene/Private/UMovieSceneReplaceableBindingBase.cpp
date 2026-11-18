// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// StaticClass @ 146056020

UClass * __cdecl UMovieSceneReplaceableBindingBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneReplaceableBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableBindingBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableBindingBase>,local_res8,
               UMovieSceneCustomBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton;
}

// UMovieSceneReplaceableBindingBase @ 1460592d0

UMovieSceneReplaceableBindingBase * __thiscall
UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
          (UMovieSceneReplaceableBindingBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneReplaceableBindingBase__6B_;
  return this;
}

// UMovieSceneReplaceableBindingBase @ 146059300

UMovieSceneReplaceableBindingBase * __thiscall
UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
          (UMovieSceneReplaceableBindingBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneReplaceableBindingBase__6B_;
  return this;
}

// ~UMovieSceneReplaceableBindingBase @ 1460596c0

void __thiscall
UMovieSceneReplaceableBindingBase::~UMovieSceneReplaceableBindingBase
          (UMovieSceneReplaceableBindingBase *this)

{
  *(undefined ***)this = &___7UMovieSceneCustomBinding__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AsSpawnable @ 14605a1c0

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneReplaceableBindingBase::AsSpawnable
          (UMovieSceneReplaceableBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UMovieSceneSpawnableBindingBase *)0x0;
}

// CreateInnerSpawnable @ 14605a260

UMovieSceneSpawnableBindingBase * __thiscall
UMovieSceneReplaceableBindingBase::CreateInnerSpawnable
          (UMovieSceneReplaceableBindingBase *this,UObject *param_1,UMovieScene *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UMovieSceneSpawnableBindingBase *pUVar6;
  UClass *pUVar7;
  UClass *local_res8;
  
  (**(code **)(*(longlong *)this + 0x300))(this,&local_res8);
  pUVar5 = local_res8;
  if ((local_res8 == (UClass *)0x0) ||
     (pUVar4 = UMovieSceneSpawnableBindingBase::StaticClass(), pUVar7 = local_res8,
     pUVar4 == (UClass *)0x0)) {
    return (UMovieSceneSpawnableBindingBase *)0x0;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return (UMovieSceneSpawnableBindingBase *)0x0;
  }
  if (local_res8 == (UClass *)0x0) {
    return (UMovieSceneSpawnableBindingBase *)0x0;
  }
  pUVar5 = UMovieSceneSpawnableBindingBase::StaticClass();
  if (pUVar5 == (UClass *)0x0) {
LAB_14605a312:
    pUVar5 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pUVar5 = local_res8;
    if (!bVar3) goto LAB_14605a312;
  }
  if (((pUVar5->ClassFlags & CLASS_Abstract) != CLASS_None) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2722253531808530277>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Bindings\\MovieSceneReplaceableBinding.cpp"
                         ,0x9b,"!SpawnableClass->HasAnyClassFlags(EClassFlags::CLASS_Abstract)"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UMovieSceneSpawnableBindingBase *)(*pcVar2)();
    return pUVar6;
  }
  pUVar5 = local_res8;
  if ((local_res8 != (UClass *)0x0) &&
     (pUVar7 = UMovieSceneSpawnableBindingBase::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14605a38b;
  }
  local_res8 = (UClass *)0x0;
LAB_14605a38b:
  pUVar6 = UClass::GetDefaultObject<UMovieSceneSpawnableBindingBase>(local_res8);
  pUVar6 = (UMovieSceneSpawnableBindingBase *)
           (**(code **)(pUVar6->_padding_ + 0x2d0))(pUVar6,param_1,param_2);
  if (pUVar6 != (UMovieSceneSpawnableBindingBase *)0x0) {
    pUVar5 = UMovieSceneSpawnableBindingBase::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pUVar6;
    }
  }
  return (UMovieSceneSpawnableBindingBase *)0x0;
}

// CreateNewCustomBinding @ 14605a430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCustomBinding * __thiscall
UMovieSceneReplaceableBindingBase::CreateNewCustomBinding
          (UMovieSceneReplaceableBindingBase *this,UObject *param_1,UMovieScene *param_2)

{
  undefined8 uVar1;
  UClass *pUVar2;
  FName FVar3;
  FString *pFVar4;
  FName *pFVar5;
  FName FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  FString local_d8;
  FName local_c8;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar8 = param_1;
  if (param_1 == (UObject *)0x0) {
    pUVar8 = *(UObject **)&this->field_0x10;
  }
  uVar1 = *(undefined8 *)&pUVar8->field_0x18;
  FVar3 = (FName)Z_Construct_UClass_UObject_NoRegister();
  local_f8 = 0;
  MakeUniqueObjectName((UObject *)local_e8,(UClass *)param_2,FVar3,(EUniqueObjectNameOptions)uVar1);
  pFVar4 = ::FName::ToString((FName *)local_e8,&local_c0);
  ::FString::ConcatFC(&local_d8,pFVar4,L"_CustomBinding");
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar10.Data = local_d8.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_c8,(wchar_t *)FVar10.Data);
  FVar3 = *pFVar5;
  FVar6 = (FName)Z_Construct_UClass_UObject_NoRegister();
  local_f8 = 0;
  MakeUniqueObjectName
            ((UObject *)local_e0,(UClass *)param_2,FVar6,FVar3.ComparisonIndex.Value.Value);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pUVar2 = *(UClass **)&this->field_0x10;
  if ((FName)local_e0 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_2,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_8_ = local_e0;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_2;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar8 + 0x308))(pUVar8,param_1,param_2);
  return (UMovieSceneCustomBinding *)pUVar8;
}

// GetBoundObjectClass @ 14605ad50

UClass * __thiscall
UMovieSceneReplaceableBindingBase::GetBoundObjectClass(UMovieSceneReplaceableBindingBase *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UMovieSceneSpawnableBindingBase *pUVar6;
  UClass *local_res8 [4];
  
  (**(code **)(*(longlong *)this + 0x300))(this,local_res8);
  pUVar5 = local_res8[0];
  if ((local_res8[0] == (UClass *)0x0) ||
     (pUVar4 = UMovieSceneSpawnableBindingBase::StaticClass(), pUVar3 = local_res8[0],
     pUVar4 == (UClass *)0x0)) {
LAB_14605adfb:
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    return pUVar5;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) || (local_res8[0] == (UClass *)0x0)) goto LAB_14605adfb;
  pUVar5 = UMovieSceneSpawnableBindingBase::StaticClass();
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14605ade1;
  }
  local_res8[0] = (UClass *)0x0;
LAB_14605ade1:
  pUVar6 = UClass::GetDefaultObject<UMovieSceneSpawnableBindingBase>(local_res8[0]);
  pUVar5 = (UClass *)(**(code **)(pUVar6->_padding_ + 0x2e8))(pUVar6);
  return pUVar5;
}

// GetInnerSpawnableClass @ 14605ae40

TSubclassOf<UMovieSceneSpawnableBindingBase> __thiscall
UMovieSceneReplaceableBindingBase::GetInnerSpawnableClass(UMovieSceneReplaceableBindingBase *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneReplaceableBinding.h"
             ,0x54,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UMovieSceneSpawnableBindingBase>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 14605bc00

UClass * __cdecl UMovieSceneReplaceableBindingBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneReplaceableBindingBase",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableBindingBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableBindingBase>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableBindingBase>,local_res8,
               UMovieSceneCustomBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableBindingBase.InnerSingleton;
}

// InitReplaceableBinding @ 14605c220

void __thiscall
UMovieSceneReplaceableBindingBase::InitReplaceableBinding
          (UMovieSceneReplaceableBindingBase *this,UObject *param_1,UMovieScene *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneReplaceableBinding.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  return;
}

// PostDuplicate @ 14605c380

void __thiscall
UMovieSceneReplaceableBindingBase::PostDuplicate
          (UMovieSceneReplaceableBindingBase *this,Type param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014605c389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0xf8))(this,param_1 == PIE);
  return;
}

// ResolveBinding @ 14605c4c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableBindingBase::ResolveBinding
          (UMovieSceneReplaceableBindingBase *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  atomic<int> *paVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pcVar2 = *(code **)(*(longlong *)this + 0x2f0);
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (*pcVar2)();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ResolveRuntimeBindingInternal @ 14605c6b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableBindingBase::ResolveRuntimeBindingInternal
          (UMovieSceneReplaceableBindingBase *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Bindings\\MovieSceneReplaceableBinding.h"
             ,0x4c,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneReplaceableBindingBase @ 14605d060

void __cdecl
UMovieSceneReplaceableBindingBase::StaticRegisterNativesUMovieSceneReplaceableBindingBase(void)

{
  return;
}

// SupportsBindingCreationFromObject @ 14605d0f0

bool __thiscall
UMovieSceneReplaceableBindingBase::SupportsBindingCreationFromObject
          (UMovieSceneReplaceableBindingBase *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UMovieSceneSpawnableBindingBase *pUVar7;
  UClass *local_res8;
  
  (**(code **)(*(longlong *)this + 0x300))(this,&local_res8);
  pUVar6 = local_res8;
  if ((local_res8 == (UClass *)0x0) ||
     (pUVar5 = UMovieSceneSpawnableBindingBase::StaticClass(), pUVar3 = local_res8,
     pUVar5 == (UClass *)0x0)) {
    return false;
  }
  iVar1 = (int)pUVar5->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  if (local_res8 == (UClass *)0x0) {
    return false;
  }
  pUVar6 = UMovieSceneSpawnableBindingBase::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14605d18c;
  }
  local_res8 = (UClass *)0x0;
LAB_14605d18c:
  pUVar7 = UClass::GetDefaultObject<UMovieSceneSpawnableBindingBase>(local_res8);
  uVar4 = (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,param_1);
  return (bool)uVar4;
}

// WillSpawnObject @ 14605d200

bool __thiscall
UMovieSceneReplaceableBindingBase::WillSpawnObject
          (UMovieSceneReplaceableBindingBase *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

