// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 18

// StaticClass @ 1465895f0

UClass * __cdecl UMovieSceneReplaceableActorBinding_BPBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableActorBinding_BPBase",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableActorBinding_BPBase>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableActorBinding_BPBase>,local_res8,
               UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton;
}

// UMovieSceneReplaceableActorBinding_BPBase @ 14661b860

UMovieSceneReplaceableActorBinding_BPBase * __thiscall
UMovieSceneReplaceableActorBinding_BPBase::UMovieSceneReplaceableActorBinding_BPBase
          (UMovieSceneReplaceableActorBinding_BPBase *this,FVTableHelper *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableActorBinding_BPBase__6B_;
  this->CustomBindingPriority = UMovieSceneCustomBinding::BaseEnginePriority;
  (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UMovieSceneReplaceableActorBinding_BPBase @ 14661b8a0

UMovieSceneReplaceableActorBinding_BPBase * __thiscall
UMovieSceneReplaceableActorBinding_BPBase::UMovieSceneReplaceableActorBinding_BPBase
          (UMovieSceneReplaceableActorBinding_BPBase *this,FObjectInitializer *param_1)

{
  UMovieSceneReplaceableBindingBase::UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableActorBinding_BPBase__6B_;
  this->CustomBindingPriority = UMovieSceneCustomBinding::BaseEnginePriority;
  (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UMovieSceneReplaceableActorBinding_BPBase @ 146621d30

void __thiscall
UMovieSceneReplaceableActorBinding_BPBase::~UMovieSceneReplaceableActorBinding_BPBase
          (UMovieSceneReplaceableActorBinding_BPBase *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneReplaceableActorBinding_BPBase__6B_;
  UMovieSceneReplaceableBindingBase::~UMovieSceneReplaceableBindingBase
            ((UMovieSceneReplaceableBindingBase *)this);
  return;
}

// BP_InitReplaceableBinding @ 14663e7e0

void __thiscall
UMovieSceneReplaceableActorBinding_BPBase::BP_InitReplaceableBinding
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1,UMovieScene *param_2)

{
  UFunction *pUVar1;
  UObject *local_18;
  UMovieScene *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// BP_InitReplaceableBinding_Implementation @ 14663e830

void __thiscall
UMovieSceneReplaceableActorBinding_BPBase::BP_InitReplaceableBinding_Implementation
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1,UMovieScene *param_2)

{
  return;
}

// BP_ResolveRuntimeBinding @ 14663e840

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableActorBinding_BPBase::BP_ResolveRuntimeBinding
          (UMovieSceneReplaceableActorBinding_BPBase *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveContext *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  UMovieSceneSequence *pUVar3;
  TObjectPtr<UObject> *pTVar4;
  int iVar5;
  UFunction *pUVar6;
  TObjectPtr<UObject>_u_0 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  TObjectPtr<UMovieSceneSequence>_u_0 local_30;
  TObjectPtr<UObject> *local_28;
  undefined8 local_20;
  UObject *local_18;
  
  local_40 = 0;
  uStack_38 = 0;
  local_28 = (TObjectPtr<UObject> *)0x0;
  local_20 = 0;
  local_18 = (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar2 = (param_1->WorldContext).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_48 = (param_1->WorldContext).field0_0x0;
  local_40._0_4_ = (param_1->Binding).BindingID.A;
  local_40._4_4_ = (param_1->Binding).BindingID.B;
  uStack_38._0_4_ = (param_1->Binding).BindingID.C;
  uStack_38._4_4_ = (param_1->Binding).BindingID.D;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->Binding).Sequence.field0_0x0.DebugPtr, pUVar3 != (UMovieSceneSequence *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_30 = (param_1->Binding).Sequence.field0_0x0;
  pUVar6 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_48);
  pTVar4 = local_28;
  iVar5 = (int)local_20;
  piVar1 = &(__return_storage_ptr__->Objects).ArrayMax;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_20,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_20,piVar1)
    ;
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((__return_storage_ptr__->Objects).AllocatorInstance.Data,pTVar4,iVar5);
  }
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  if (local_28 != (TObjectPtr<UObject> *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// BP_SupportsBindingCreationFromObject @ 14663e990

bool __thiscall
UMovieSceneReplaceableActorBinding_BPBase::BP_SupportsBindingCreationFromObject
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1)

{
  UFunction *pUVar1;
  UObject *local_18;
  char local_10;
  
  local_10 = '\0';
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject
                     );
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10 != '\0';
}

// BP_SupportsBindingCreationFromObject_Implementation @ 14663e9e0

bool __thiscall
UMovieSceneReplaceableActorBinding_BPBase::BP_SupportsBindingCreationFromObject_Implementation
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// GetCustomBindingPriority @ 146689c10

int __thiscall
UMovieSceneReplaceableActorBinding_BPBase::GetCustomBindingPriority
          (UMovieSceneReplaceableActorBinding_BPBase *this)

{
  return this->CustomBindingPriority;
}

// GetInnerSpawnableClass @ 14668a490

TSubclassOf<UMovieSceneSpawnableBindingBase> __thiscall
UMovieSceneReplaceableActorBinding_BPBase::GetInnerSpawnableClass
          (UMovieSceneReplaceableActorBinding_BPBase *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->PreviewSpawnableType).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UMovieSceneSpawnableBindingBase>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 1466969f0

UClass * __cdecl UMovieSceneReplaceableActorBinding_BPBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneReplaceableActorBinding_BPBase",
               &Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton,
               StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneReplaceableActorBinding_BPBase>,
               InternalVTableHelperCtorCaller<UMovieSceneReplaceableActorBinding_BPBase>,local_res8,
               UMovieSceneReplaceableBindingBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneReplaceableActorBinding_BPBase.InnerSingleton;
}

// InitReplaceableBinding @ 14669d190

void __thiscall
UMovieSceneReplaceableActorBinding_BPBase::InitReplaceableBinding
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1,UMovieScene *param_2)

{
  UFunction *pUVar1;
  UObject *local_18;
  UMovieScene *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_InitReplaceableBinding);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// ResolveRuntimeBindingInternal @ 1466da950

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneBindingResolveResult * __thiscall
UMovieSceneReplaceableActorBinding_BPBase::ResolveRuntimeBindingInternal
          (UMovieSceneReplaceableActorBinding_BPBase *this,
          FMovieSceneBindingResolveResult *__return_storage_ptr__,
          FMovieSceneBindingResolveParams *param_1,int param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  int *piVar1;
  UMovieSceneSequence *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TObjectPtr<UObject> *pTVar5;
  int iVar6;
  UObject *pUVar7;
  UFunction *pUVar8;
  UObject *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  UMovieSceneSequence *local_40;
  TObjectPtr<UObject> *local_38;
  undefined8 local_30;
  UObject *local_28;
  
  pUVar7 = FWeakObjectPtr::Get(&(param_3->Object->WeakPlaybackContext).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  uVar3._0_4_ = (param_1->ObjectBindingID).A;
  uVar3._4_4_ = (param_1->ObjectBindingID).B;
  uVar4._0_4_ = (param_1->ObjectBindingID).C;
  uVar4._4_4_ = (param_1->ObjectBindingID).D;
  pUVar2 = (param_1->Sequence).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSequence *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_38 = (TObjectPtr<UObject> *)0x0;
  local_30 = 0;
  local_28 = (UObject *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_58 = pUVar7;
  local_50 = uVar3;
  uStack_48 = uVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSequence *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_40 = pUVar2;
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_ResolveRuntimeBinding);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_58);
  pTVar5 = local_38;
  iVar6 = (int)local_30;
  piVar1 = &(__return_storage_ptr__->Objects).ArrayMax;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = (int)local_30;
  if ((int)local_30 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_30,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_30,piVar1)
    ;
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((__return_storage_ptr__->Objects).AllocatorInstance.Data,pTVar5,iVar6);
  }
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  if (local_38 != (TObjectPtr<UObject> *)0x0) {
    FMemory::Free(local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase @ 1466fe810

void __cdecl
UMovieSceneReplaceableActorBinding_BPBase::
StaticRegisterNativesUMovieSceneReplaceableActorBinding_BPBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneReplaceableActorBinding_BPBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsBindingCreationFromObject @ 1466fe8c0

bool __thiscall
UMovieSceneReplaceableActorBinding_BPBase::SupportsBindingCreationFromObject
          (UMovieSceneReplaceableActorBinding_BPBase *this,UObject *param_1)

{
  UFunction *pUVar1;
  UObject *local_18;
  char local_10;
  
  local_10 = '\0';
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UMovieSceneReplaceableActorBinding_BPBase_BP_SupportsBindingCreationFromObject
                     );
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10 != '\0';
}

// execBP_InitReplaceableBinding @ 146720ba0

void __cdecl
UMovieSceneReplaceableActorBinding_BPBase::execBP_InitReplaceableBinding
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res10,local_res8);
  return;
}

// execBP_SupportsBindingCreationFromObject @ 146720c80

void __cdecl
UMovieSceneReplaceableActorBinding_BPBase::execBP_SupportsBindingCreationFromObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x310))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

