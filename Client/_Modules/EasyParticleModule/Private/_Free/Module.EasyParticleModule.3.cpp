// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 17

// `dynamic_initializer_for_'ModuleRegistrantEasyParticleModule'' @ 1411dd960

void __cdecl _dynamic_initializer_for__ModuleRegistrantEasyParticleModule__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "EasyParticleModule";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"EasyParticleModule",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FEasyParticleModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EasyParticleCount'' @ 1411dd9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EasyParticleCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EasyParticleCount == (FThreadSafeStaticStat<FStat_STAT_EasyParticleCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EasyParticleCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EasyParticleCount,*pFVar1,
               L"UIParticle Count","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EasyParticleTickTime'' @ 1411dda40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EasyParticleTickTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EasyParticleTickTime ==
      (FThreadSafeStaticStat<FStat_STAT_EasyParticleTickTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_EasyParticleTickTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EasyParticleTickTime,*pFVar1,
               L"UIParticle Tick","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14acbf620

void * __thiscall
FEasyParticleModule::_scalar_deleting_destructor_(FEasyParticleModule *this,uint param_1)

{
  *this = (FEasyParticleModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Cast<UEasyParticleComponent_Basic_Runtime,UEasyParticleComponentRuntime> @ 14acbf680

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Basic_Runtime * __cdecl
Cast<UEasyParticleComponent_Basic_Runtime,UEasyParticleComponentRuntime>
          (UEasyParticleComponentRuntime *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UEasyParticleComponentRuntime *)0x0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Basic_Runtime_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UEasyParticleComponent_Basic_Runtime *)param_1;
    }
  }
  return (UEasyParticleComponent_Basic_Runtime *)0x0;
}

// Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime> @ 14acbf6d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Child_Runtime * __cdecl
Cast<UEasyParticleComponent_Child_Runtime,UEasyParticleComponentRuntime>
          (UEasyParticleComponentRuntime *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UEasyParticleComponentRuntime *)0x0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Child_Runtime_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UEasyParticleComponent_Child_Runtime *)param_1;
    }
  }
  return (UEasyParticleComponent_Child_Runtime *)0x0;
}

// EnumHasAnyFlags<enum_EStatFlags> @ 14acbf740

bool __cdecl EnumHasAnyFlags<enum_EStatFlags>(EStatFlags param_1,EStatFlags param_2)

{
  return (param_2 & param_1) != None;
}

// MakeTDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> @ 14acbf780

TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEasyParticle,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewObject<UEasyParticleComponent_Child> @ 14acbf830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEasyParticleComponent_Child * __cdecl NewObject<UEasyParticleComponent_Child>(UObject *param_1)

{
  UClass *pUVar1;
  UEasyParticleComponent_Child *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UEasyParticleComponent_Child_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEasyParticleComponent_Child *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEasyParticleRootState> @ 14acbf8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEasyParticleRootState * __cdecl NewObject<UEasyParticleRootState>(UObject *param_1)

{
  UClass *pUVar1;
  UEasyParticleRootState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UEasyParticleRootState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEasyParticleRootState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UEasyParticleState> @ 14acbf970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEasyParticleState * __cdecl NewObject<UEasyParticleState>(UObject *param_1)

{
  UClass *pUVar1;
  UEasyParticleState *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UEasyParticleState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UEasyParticleState *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `vector_deleting_destructor'`adjustor{536}' @ 14acc227c

/* [thunk]:public: virtual void * __ptr64 __cdecl SEasyParticle::`vector deleting
   destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
SEasyParticle::_vector_deleting_destructor__adjustor_536__(SEasyParticle *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SEasyParticle *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14acc2290

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UEasyParticle,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UEasyParticle,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acc22c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SEasyParticle,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SEasyParticle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14acc2300

void * __thiscall SEasyParticle::_scalar_deleting_destructor_(SEasyParticle *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ParticleEnd);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,600);
  }
  return this;
}

// load @ 14acca830

/* WARNING: Enum "memory_order": Some values do not have unique names */

FMinimalName __thiscall
std::_Atomic_storage<FMinimalName,8>::load
          (_Atomic_storage<FMinimalName,8> *this,memory_order param_1)

{
  FMinimalName FVar1;
  int in_register_00000014;
  
  *(FMinimalName *)CONCAT44(in_register_00000014,param_1) = (this->_Storage)._Value;
  FVar1.Number = in_register_00000014;
  FVar1.Index.Value = param_1;
  return FVar1;
}

// IMPLEMENT_MODULE_EasyParticleModule @ 14acca850

void __cdecl IMPLEMENT_MODULE_EasyParticleModule(void)

{
  return;
}

