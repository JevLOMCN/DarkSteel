// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 13

// StaticClass @ 149670e00

UClass * __cdecl UGizmoComponentHitTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentHitTarget",
               &Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton,
               StaticRegisterNativesUGizmoComponentHitTarget,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoComponentHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoComponentHitTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton;
}

// UGizmoComponentHitTarget @ 149684250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGizmoComponentHitTarget * __thiscall
UGizmoComponentHitTarget::UGizmoComponentHitTarget
          (UGizmoComponentHitTarget *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  *(undefined8 *)&this->Condition = 0;
  *(undefined8 *)&(this->Condition).field_0x28 = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateInteractingFunction = 0;
  *(undefined8 *)&(this->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSelectedFunction = 0;
  *(undefined8 *)&(this->UpdateSelectedFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSubduedFunction = 0;
  *(undefined8 *)&(this->UpdateSubduedFunction).field_0x28 = 0;
  return this;
}

// UGizmoComponentHitTarget @ 1496842d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGizmoComponentHitTarget * __thiscall
UGizmoComponentHitTarget::UGizmoComponentHitTarget
          (UGizmoComponentHitTarget *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  (this->Component).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  *(undefined8 *)&this->Condition = 0;
  *(undefined8 *)&(this->Condition).field_0x28 = 0;
  *(undefined8 *)&this->UpdateHoverFunction = 0;
  *(undefined8 *)&(this->UpdateHoverFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateInteractingFunction = 0;
  *(undefined8 *)&(this->UpdateInteractingFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSelectedFunction = 0;
  *(undefined8 *)&(this->UpdateSelectedFunction).field_0x28 = 0;
  *(undefined8 *)&this->UpdateSubduedFunction = 0;
  *(undefined8 *)&(this->UpdateSubduedFunction).field_0x28 = 0;
  return this;
}

// ~UGizmoComponentHitTarget @ 1496898c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UGizmoComponentHitTarget::~UGizmoComponentHitTarget(UGizmoComponentHitTarget *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoClickTarget__;
  if (*(longlong *)&this->UpdateSubduedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSubduedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSubduedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateSelectedFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateSelectedFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateSelectedFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateInteractingFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateInteractingFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateInteractingFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->UpdateHoverFunction != 0) {
    plVar1 = *(longlong **)&(this->UpdateHoverFunction).field_0x28;
    plVar2 = (longlong *)&(this->UpdateHoverFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Condition != 0) {
    plVar1 = *(longlong **)&(this->Condition).field_0x28;
    plVar2 = (longlong *)&(this->Condition).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IGizmoClickTarget__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Construct @ 149699b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UGizmoComponentHitTarget * __cdecl
UGizmoComponentHitTarget::Construct(UPrimitiveComponent *param_1,UObject *param_2)

{
  UGizmoComponentHitTarget *pUVar1;
  
  pUVar1 = NewObject<UGizmoComponentHitTarget>(param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (pUVar1->Component).field0_0x0.DebugPtr = param_1;
    return pUVar1;
  }
  (pUVar1->Component).field0_0x0.DebugPtr = param_1;
  return pUVar1;
}

// GetPrivateStaticClass @ 1496a4c10

UClass * __cdecl UGizmoComponentHitTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoComponentHitTarget",
               &Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton,
               StaticRegisterNativesUGizmoComponentHitTarget,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoComponentHitTarget>,
               InternalVTableHelperCtorCaller<UGizmoComponentHitTarget>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoComponentHitTarget.InnerSingleton;
}

// IsHit @ 1496ad5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInputRayHit * __thiscall
UGizmoComponentHitTarget::IsHit
          (UGizmoComponentHitTarget *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_struct_FInputRayHit___cdecl_UGizmoComponentHitTarget::IsHit(FInputDeviceRay_const_&)const_::_9_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
  FVar11;
  longlong *plVar12;
  undefined1 auStackY_308 [32];
  FName local_2a8;
  TStatId local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  undefined4 uStack_280;
  undefined1 uStack_27c;
  undefined2 uStack_27b;
  undefined1 uStack_279;
  undefined1 local_278;
  undefined7 uStack_277;
  double dStack_270;
  double local_258;
  uint uStack_250;
  undefined4 uStack_24c;
  void *local_248;
  FName FStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined1 local_218 [4];
  undefined4 local_214;
  float local_210;
  undefined4 local_174;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  FCollisionQueryParams local_118;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_308;
  dStack_270 = __real_47efffffe0000000;
  local_258 = __real_3ff0000000000000;
  local_278 = 0;
  uStack_250 = uStack_250 & 0xffffff00;
  uStack_24c = 0;
  local_248 = (void *)0x0;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  local_2a0.StatIdPtr = (TStatIdData *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2a8,(FObjectPtr)&local_2a0);
  FStack_240 = local_2a8;
  if (this->_padding_ != 0) {
    if ((void *)this->_padding_ != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
      pcVar3 = (code *)this->_padding_;
      plVar12 = &this->_padding_;
      if (*(longlong **)&this->Condition != (longlong *)0x0) {
        plVar12 = *(longlong **)&this->Condition;
      }
      uVar9 = (**(code **)(*plVar12 + 8))();
      cVar8 = (*pcVar3)(uVar9);
      if (cVar8 == '\0') goto LAB_1496ad9ba;
    }
    cVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x560))();
    if (cVar8 != '\0') {
      plVar12 = (longlong *)this->_padding_;
      if ((plVar12[0x15] != 0) && (-1 < *(char *)(plVar12[0x15] + 0x58))) {
        dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.X * __real_4290000000000000;
        dVar5 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z * __real_4290000000000000;
        dVar7 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y * __real_4290000000000000 +
                (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
        dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
        dVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        memset(local_218,0,0x100);
        local_160 = 0;
        uStack_158 = 0;
        uStack_27b = 0;
        uStack_279 = 0;
        local_288 = 0.0;
        uStack_280 = 0xffffffff;
        uStack_27c = 0;
        uStack_148 = 0xffffffff;
        local_214 = 0x3f800000;
        local_174 = 0xffffffff;
        local_150 = 0;
        pcVar3 = *(code **)(*plVar12 + 0xa30);
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          StatPtr_HitTest =
               (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_struct_FInputRayHit___cdecl_UGizmoComponentHitTarget::IsHit(FInputDeviceRay_const_&)const_::_9_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
                )0x0;
          pFVar10 = ::FName::FName(&local_2a8,"HitTest");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar10,L"HitTest",
                     "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                     ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS0);
        }
        FVar11 = StatPtr_HitTest;
        if (StatPtr_HitTest ==
            (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_struct_FInputRayHit___cdecl_UGizmoComponentHitTarget::IsHit(FInputDeviceRay_const_&)const_::_9_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
             )0x0) {
          pFVar10 = ::FName::FName(&local_2a8,"HitTest");
          FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_struct_FInputRayHit___cdecl_UGizmoComponentHitTarget::IsHit(FInputDeviceRay_const_&)const_::_9_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar10,L"HitTest",
                                "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,
                                true,ST_int64,true,false,MCR_Invalid);
        }
        local_2a0.StatIdPtr = (TStatIdData *)FVar11;
        if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          ::FName::FName(&::StaticName,"HitTest");
          _Init_thread_footer(&::_TSS0);
        }
        FCollisionQueryParams::FCollisionQueryParams
                  (&local_118,::StaticName,&local_2a0,true,(AActor *)0x0);
        local_298 = *(undefined4 *)&(param_1->WorldRay).Origin.field0_0x0;
        uStack_294 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 4);
        uStack_290 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 8);
        uStack_28c = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0xc);
        local_288 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        local_238._8_4_ = SUB84(dVar7,0);
        local_238._0_8_ = dVar6 + dVar1;
        local_238._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_228 = dVar5 + dVar2;
        cVar8 = (*pcVar3)(plVar12,local_218,&local_298,local_238);
        if (local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_118.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_118.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_118.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
        if (cVar8 != '\0') {
          FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_210);
          return __return_storage_ptr__;
        }
      }
    }
  }
LAB_1496ad9ba:
  *(ulonglong *)__return_storage_ptr__ = CONCAT71(uStack_277,local_278);
  __return_storage_ptr__->HitDepth = dStack_270;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_258;
  __return_storage_ptr__->bHasHitNormal = (bool)(char)uStack_250;
  *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)(uStack_250 >> 8);
  __return_storage_ptr__->HitIdentifier = uStack_24c;
  __return_storage_ptr__->HitOwner = local_248;
  (__return_storage_ptr__->HitObject).WeakPtr = (FWeakObjectPtr)FStack_240;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGizmoComponentHitTarget @ 1496c28e0

void __cdecl UGizmoComponentHitTarget::StaticRegisterNativesUGizmoComponentHitTarget(void)

{
  return;
}

// UpdateHoverState @ 1496c3f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGizmoComponentHitTarget::UpdateHoverState(UGizmoComponentHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->Condition).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->Condition).field_0x8;
    plVar4 = (longlong *)&(this->Condition).field_0x18;
    if (*(longlong **)&this->UpdateHoverFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateHoverFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateInteractingState @ 1496c41c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGizmoComponentHitTarget::UpdateInteractingState(UGizmoComponentHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateHoverFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateHoverFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateHoverFunction).field_0x18;
    if (*(longlong **)&this->UpdateInteractingFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateInteractingFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateSelectedState @ 1496c5490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGizmoComponentHitTarget::UpdateSelectedState(UGizmoComponentHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateInteractingFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateInteractingFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateInteractingFunction).field_0x18;
    if (*(longlong **)&this->UpdateSelectedFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateSelectedFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// UpdateSubdueState @ 1496c5a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UGizmoComponentHitTarget::UpdateSubdueState(UGizmoComponentHitTarget *this,bool param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = *(void **)&(this->UpdateSelectedFunction).field_0x8;
  if (pvVar1 != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->UpdateSelectedFunction).field_0x8;
    plVar4 = (longlong *)&(this->UpdateSelectedFunction).field_0x18;
    if (*(longlong **)&this->UpdateSubduedFunction != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->UpdateSubduedFunction;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,local_res8);
  }
  return;
}

// _getUObject @ 1496ca7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall UGizmoComponentHitTarget::_getUObject(UGizmoComponentHitTarget *this)

{
  return (UObject *)&this[-1].UpdateSubduedFunction.field_0x8;
}

