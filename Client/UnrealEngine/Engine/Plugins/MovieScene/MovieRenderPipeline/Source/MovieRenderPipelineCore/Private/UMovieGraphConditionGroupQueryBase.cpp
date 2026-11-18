// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 31

// StaticClass @ 14dc9d2e0

UClass * __cdecl UMovieGraphConditionGroupQueryBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQueryBase",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQueryBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQueryBase>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQueryBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton;
}

// UMovieGraphConditionGroupQueryBase @ 14dcaf3c0

UMovieGraphConditionGroupQueryBase * __thiscall
UMovieGraphConditionGroupQueryBase::UMovieGraphConditionGroupQueryBase
          (UMovieGraphConditionGroupQueryBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  return this;
}

// UMovieGraphConditionGroupQueryBase @ 14dcaf3f0

UMovieGraphConditionGroupQueryBase * __thiscall
UMovieGraphConditionGroupQueryBase::UMovieGraphConditionGroupQueryBase
          (UMovieGraphConditionGroupQueryBase *this)

{
  UObject::UObject((UObject *)this);
  this->OpType = Add;
  this->bIsEnabled = true;
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  return this;
}

// ~UMovieGraphConditionGroupQueryBase @ 14dcb28b0

void __thiscall
UMovieGraphConditionGroupQueryBase::~UMovieGraphConditionGroupQueryBase
          (UMovieGraphConditionGroupQueryBase *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphConditionGroupQueryBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14dcc3620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQueryBase::Evaluate
          (UMovieGraphConditionGroupQueryBase *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3)

{
  return;
}

// EvaluateActorsAndComponents @ 14dcc5060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphConditionGroupQueryBase::EvaluateActorsAndComponents
          (UMovieGraphConditionGroupQueryBase *this,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *param_3,
          TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *param_4
          )

{
  return;
}

// GetActorForCurrentWorld @ 14dcca530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl UMovieGraphConditionGroupQueryBase::GetActorForCurrentWorld(AActor *param_1)

{
  bool bVar1;
  UWorld *this;
  
  if (param_1 != (AActor *)0x0) {
    this = AActor::GetWorld(param_1);
    if (this != (UWorld *)0x0) {
      bVar1 = UWorld::IsEditorWorld(this);
      if (bVar1) {
        return param_1;
      }
    }
  }
  return (AActor *)0x0;
}

// GetDisplayName @ 14dccc5a0

FText * __thiscall
UMovieGraphConditionGroupQueryBase::GetDisplayName(UMovieGraphConditionGroupQueryBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::DisplayName,L"MovieGraph",L"ConditionGroupQueryDisplayName",L"Query Base");
      atexit(`UMovieGraphConditionGroupQueryBase::GetDisplayName'::__l2::
             _dynamic_atexit_destructor_for__DisplayName__);
      _Init_thread_footer(&::_TSS0);
      return &::DisplayName;
    }
  }
  return &::DisplayName;
}

// GetIcon @ 14dccd9f0

FSlateIcon * __thiscall
UMovieGraphConditionGroupQueryBase::GetIcon(UMovieGraphConditionGroupQueryBase *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateIcon::FSlateIcon(&EmptyIcon);
      _Init_thread_footer(&::_TSS0);
      return &EmptyIcon;
    }
  }
  return &EmptyIcon;
}

// GetOperationType @ 14dccf230

EMovieGraphConditionGroupQueryOpType __thiscall
UMovieGraphConditionGroupQueryBase::GetOperationType(UMovieGraphConditionGroupQueryBase *this)

{
  return this->OpType;
}

// GetPrivateStaticClass @ 14dcd1ad0

UClass * __cdecl UMovieGraphConditionGroupQueryBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphConditionGroupQueryBase",
               &Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton,
               StaticRegisterNativesUMovieGraphConditionGroupQueryBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphConditionGroupQueryBase>,
               InternalVTableHelperCtorCaller<UMovieGraphConditionGroupQueryBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphConditionGroupQueryBase.InnerSingleton;
}

// IsEditorOnlyQuery @ 14dcd7180

bool __thiscall
UMovieGraphConditionGroupQueryBase::IsEditorOnlyQuery(UMovieGraphConditionGroupQueryBase *this)

{
  return false;
}

// IsEnabled @ 14dcd71a0

bool __thiscall
UMovieGraphConditionGroupQueryBase::IsEnabled(UMovieGraphConditionGroupQueryBase *this)

{
  return this->bIsEnabled;
}

// IsFirstConditionGroupQuery @ 14dcd72f0

bool __thiscall
UMovieGraphConditionGroupQueryBase::IsFirstConditionGroupQuery
          (UMovieGraphConditionGroupQueryBase *this)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 local_res10 [24];
  
  pUVar3 = UMovieGraphConditionGroup::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 == (UObject *)0x0) &&
     (bVar2 = `UMovieGraphConditionGroupQueryBase::IsFirstConditionGroupQuery'::__l3::<lambda_1>::
              operator()(local_res10), !bVar2)) {
    return false;
  }
  plVar1 = *(longlong **)&pUVar4[1].field_0x18;
  plVar5 = plVar1;
  while( true ) {
    if (plVar5 == plVar1 + *(int *)&pUVar4[1].field_0x20) {
      return false;
    }
    if ((UMovieGraphConditionGroupQueryBase *)*plVar5 == this) break;
    plVar5 = plVar5 + 1;
  }
  return (int)((longlong)plVar5 - (longlong)plVar1 >> 3) == 0;
}

// SetEnabled @ 14dce3070

void __thiscall
UMovieGraphConditionGroupQueryBase::SetEnabled
          (UMovieGraphConditionGroupQueryBase *this,bool param_1)

{
  this->bIsEnabled = param_1;
  return;
}

// SetOperationType @ 14dce3120

void __thiscall
UMovieGraphConditionGroupQueryBase::SetOperationType
          (UMovieGraphConditionGroupQueryBase *this,EMovieGraphConditionGroupQueryOpType param_1)

{
  longlong *plVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  
  if (param_1 == Add) {
    this->OpType = Add;
    return;
  }
  pUVar3 = UMovieGraphConditionGroup::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if ((pUVar4 != (UObject *)0x0) ||
     (bVar2 = `UMovieGraphConditionGroupQueryBase::SetOperationType'::__l6::<lambda_1>::operator()
                        (local_res10), bVar2)) {
    plVar1 = *(longlong **)&pUVar4[1].field_0x18;
    for (plVar5 = plVar1; plVar5 != plVar1 + *(int *)&pUVar4[1].field_0x20; plVar5 = plVar5 + 1) {
      if ((UMovieGraphConditionGroupQueryBase *)*plVar5 == this) {
        if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) == 0) {
          return;
        }
        break;
      }
    }
    this->OpType = param_1;
  }
  return;
}

// ShouldEvaluateComponents @ 14dce4ae0

bool __thiscall
UMovieGraphConditionGroupQueryBase::ShouldEvaluateComponents
          (UMovieGraphConditionGroupQueryBase *this)

{
  return false;
}

// ShouldHidePropertyNames @ 14dce4b20

bool __thiscall
UMovieGraphConditionGroupQueryBase::ShouldHidePropertyNames
          (UMovieGraphConditionGroupQueryBase *this)

{
  return false;
}

// StaticRegisterNativesUMovieGraphConditionGroupQueryBase @ 14dce63f0

void __cdecl
UMovieGraphConditionGroupQueryBase::StaticRegisterNativesUMovieGraphConditionGroupQueryBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphConditionGroupQueryBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEvaluate @ 14dcefe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphConditionGroupQueryBase::execEvaluate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  void **ppvVar3;
  ForAnyElementType *pFVar4;
  undefined1 auStackY_c8 [32];
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_90 = (void *)0x0;
  local_88 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98 = 0;
  ppvVar3 = &local_90;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar4 = &local_78;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar4 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,ppvVar3,local_98,pFVar4);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// execEvaluateActorsAndComponents @ 14dcf02a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphConditionGroupQueryBase::execEvaluateActorsAndComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  void **ppvVar3;
  ForAnyElementType *pFVar4;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8 = 0;
  ppvVar3 = &local_f0;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  pFVar4 = &local_88;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar4 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,ppvVar3,local_f8,pFVar4);
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  uVar2 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execGetOperationType @ 14dcf1530

void __cdecl
UMovieGraphConditionGroupQueryBase::execGetOperationType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 1);
  return;
}

// execIsEditorOnlyQuery @ 14dcf2060

void __cdecl
UMovieGraphConditionGroupQueryBase::execIsEditorOnlyQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsEnabled @ 14dcf20a0

void __cdecl
UMovieGraphConditionGroupQueryBase::execIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x1;
  return;
}

// execIsFirstConditionGroupQuery @ 14dcf2180

void __cdecl
UMovieGraphConditionGroupQueryBase::execIsFirstConditionGroupQuery
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = UMovieGraphConditionGroup::StaticClass();
  pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar4);
  if ((pUVar5 == (UObject *)0x0) &&
     (bVar2 = `UMovieGraphConditionGroupQueryBase::IsFirstConditionGroupQuery'::__l3::<lambda_1>::
              operator()(local_res10), !bVar2)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  plVar1 = *(longlong **)&pUVar5[1].field_0x18;
  plVar6 = plVar1;
  do {
    if (plVar6 == plVar1 + *(int *)&pUVar5[1].field_0x20) {
      iVar3 = -1;
LAB_14dcf2209:
      *(bool *)param_3 = iVar3 == 0;
      return;
    }
    if ((UObject *)*plVar6 == param_1) {
      iVar3 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
      goto LAB_14dcf2209;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}

// execSetEnabled @ 14dcf3730

void __cdecl
UMovieGraphConditionGroupQueryBase::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x1 = local_res8[0] != 0;
  return;
}

// execSetOperationType @ 14dcf3b50

void __cdecl
UMovieGraphConditionGroupQueryBase::execSetOperationType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  longlong *plVar7;
  char local_res10 [8];
  undefined1 local_res20 [8];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  pUVar5 = UMovieGraphConditionGroup::StaticClass();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  if ((pUVar6 != (UObject *)0x0) ||
     (bVar4 = `UMovieGraphConditionGroupQueryBase::SetOperationType'::__l6::<lambda_1>::operator()
                        (local_res20), bVar4)) {
    plVar2 = *(longlong **)&pUVar6[1].field_0x18;
    for (plVar7 = plVar2; plVar7 != plVar2 + *(int *)&pUVar6[1].field_0x20; plVar7 = plVar7 + 1) {
      if ((UObject *)*plVar7 == param_1) {
        if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) == 0) {
          return;
        }
        break;
      }
    }
    *(char *)(param_1 + 1) = cVar3;
  }
  return;
}

// execShouldEvaluateComponents @ 14dcf3cf0

void __cdecl
UMovieGraphConditionGroupQueryBase::execShouldEvaluateComponents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execShouldHidePropertyNames @ 14dcf3d30

void __cdecl
UMovieGraphConditionGroupQueryBase::execShouldHidePropertyNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// operator() @ 15058c900

bool __thiscall
`UMovieGraphConditionGroupQueryBase::IsFirstConditionGroupQuery'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7043781043005948536>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7043781043005948536>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cab0

bool __thiscall
`UMovieGraphConditionGroupQueryBase::SetOperationType'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7043781043005948453>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7043781043005948453>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

