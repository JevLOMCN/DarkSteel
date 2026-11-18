// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 20

// IsNavigationRelevant`adjustor{192}' @ 146e158c8

/* [thunk]:public: virtual bool __cdecl UNavRelevantComponent::IsNavigationRelevant`adjustor{192}'
   (void)const __ptr64 */

bool __thiscall
UNavRelevantComponent::IsNavigationRelevant_adjustor_192__(UNavRelevantComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UNavRelevantComponent *)&this[-1]._padding_);
  return bVar1;
}

// StaticClass @ 146e29da0

UClass * __cdecl UNavRelevantComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavRelevantComponent",
               &Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton,
               StaticRegisterNativesUNavRelevantComponent,0x110,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavRelevantComponent>,
               InternalVTableHelperCtorCaller<UNavRelevantComponent>,aFStackX_8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton;
}

// UNavRelevantComponent @ 146e36e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavRelevantComponent * __thiscall
UNavRelevantComponent::UNavRelevantComponent(UNavRelevantComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->Bounds).IsValid = '\0';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavRelevantComponent__6B_;
  (this->CachedNavParent).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UNavRelevantComponent @ 146e36eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavRelevantComponent * __thiscall
UNavRelevantComponent::UNavRelevantComponent
          (UNavRelevantComponent *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->Bounds).IsValid = '\0';
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavRelevantComponent__6B_;
  (this->CachedNavParent).field0_0x0.DebugPtr = (UObject *)0x0;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 | 0xc0;
  puVar3 = &this->field_0x100;
  this->bAttachToOwnersRoot = 1;
  this->bNavParentCacheInitialized = 0;
  this->bBoundsInitialized = 0;
  return this;
}

// ~UNavRelevantComponent @ 146e37b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavRelevantComponent::~UNavRelevantComponent(UNavRelevantComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7INavRelevantInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CalcAndCacheBounds @ 146e43330

void __thiscall UNavRelevantComponent::CalcAndCacheBounds(UNavRelevantComponent *this)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_58;
  undefined7 uStack_1f;
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (this->_padding_ == 0) {
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
    if (lVar1 == 0) {
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_58 = *(double *)(lVar1 + 0x220);
      uVar9 = *(undefined4 *)(lVar1 + 0x210);
      uVar10 = *(undefined4 *)(lVar1 + 0x214);
      uVar11 = *(undefined4 *)(lVar1 + 0x218);
      uVar12 = *(undefined4 *)(lVar1 + 0x21c);
    }
  }
  dVar7 = (double)CONCAT44(uVar10,uVar9) + __real_4059000000000000;
  dVar8 = (double)CONCAT44(uVar12,uVar11) - __real_4059000000000000;
  dVar3 = local_58 - __real_4059000000000000;
  dVar6 = (double)CONCAT44(uVar12,uVar11) + __real_4059000000000000;
  local_58 = local_58 + __real_4059000000000000;
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = (double)CONCAT44(uVar10,uVar9) - __real_4059000000000000;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&(this->Bounds).Min.field0_0x0 = auVar4;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Min.field0_0x0 + 0x10) = auVar2;
  auVar5._8_4_ = SUB84(local_58,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)local_58 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8) = auVar5;
  (this->Bounds).IsValid = 1;
  (this->Bounds).Pad[0] = (char)uStack_1f;
  (this->Bounds).Pad[1] = (char)((uint7)uStack_1f >> 8);
  (this->Bounds).Pad[2] = (char)((uint7)uStack_1f >> 0x10);
  (this->Bounds).Pad[3] = (char)((uint7)uStack_1f >> 0x18);
  (this->Bounds).Pad[4] = (char)((uint7)uStack_1f >> 0x20);
  (this->Bounds).Pad[5] = (char)((uint7)uStack_1f >> 0x28);
  (this->Bounds).Pad[6] = (char)((uint7)uStack_1f >> 0x30);
  return;
}

// ForceNavigationRelevancy @ 146e54ea0

void __thiscall
UNavRelevantComponent::ForceNavigationRelevancy(UNavRelevantComponent *this,bool param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  this->bAttachToOwnersRoot = 0;
  *(uint *)&this->field_0x100 = *(uint *)&this->field_0x100 | param_1 ^ 1;
  if (param_1) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 0x40;
  }
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.UpdateComponentData,&FStack_28);
  plVar2 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.UpdateComponentData._16_4_ != 0) {
    plVar2 = (longlong *)FNavigationSystem::Delegates.UpdateComponentData._8_8_;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// GetNavigationBounds @ 146e5bec0

TBox<double> * __thiscall
UNavRelevantComponent::GetNavigationBounds
          (UNavRelevantComponent *this,TBox<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  if ((this->_padding_ & 2) == 0) {
    (**(code **)(this[-1]._padding_ + 0x4f8))();
    lVar1 = *(longlong *)&this[-1].Bounds.IsValid;
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x5c) < '\0')) {
      *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
    }
  }
  dVar2 = (double)this->_padding_;
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
  dVar2 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
  uVar6 = *(undefined1 *)&this->_padding_;
  uVar7 = *(undefined1 *)((longlong)&this->_padding_ + 1);
  uVar8 = *(undefined1 *)((longlong)&this->_padding_ + 2);
  uVar9 = *(undefined1 *)((longlong)&this->_padding_ + 3);
  uVar10 = *(undefined1 *)((longlong)&this->_padding_ + 4);
  uVar11 = *(undefined1 *)((longlong)&this->_padding_ + 5);
  uVar12 = *(undefined1 *)((longlong)&this->_padding_ + 6);
  uVar13 = *(undefined1 *)((longlong)&this->_padding_ + 7);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->IsValid = uVar6;
  __return_storage_ptr__->Pad[0] = uVar7;
  __return_storage_ptr__->Pad[1] = uVar8;
  __return_storage_ptr__->Pad[2] = uVar9;
  __return_storage_ptr__->Pad[3] = uVar10;
  __return_storage_ptr__->Pad[4] = uVar11;
  __return_storage_ptr__->Pad[5] = uVar12;
  __return_storage_ptr__->Pad[6] = uVar13;
  return __return_storage_ptr__;
}

// GetNavigationParent @ 146e5cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UNavRelevantComponent::GetNavigationParent(UNavRelevantComponent *this)

{
  UObject *pUVar1;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (((byte)LogNavigation._0_1_ < 2) || ((this->_padding_ & 4) != 0)) {
    pUVar1 = (UObject *)this->_padding_;
  }
  else {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)&this[-1]._padding_,&local_148,(UObject *)0x0,None);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UNavRelevantComponent::GetNavigationParent",0x2a,Yes);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    pUVar1 = (UObject *)this->_padding_;
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 146e5d2c0

UClass * __cdecl UNavRelevantComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavRelevantComponent",
               &Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton,
               StaticRegisterNativesUNavRelevantComponent,0x110,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavRelevantComponent>,
               InternalVTableHelperCtorCaller<UNavRelevantComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavRelevantComponent.InnerSingleton;
}

// IsNavigationRelevant @ 146e5fdc0

bool __thiscall UNavRelevantComponent::IsNavigationRelevant(UNavRelevantComponent *this)

{
  return (bool)(*(byte *)((longlong)&this->_padding_ + 2) >> 6 & 1);
}

// OnRegister @ 146e674d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavRelevantComponent::OnRegister(UNavRelevantComponent *this)

{
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *this_01;
  char cVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  if ((this->bAttachToOwnersRoot != 0) &&
     (this_00 = (UObjectBaseUtility *)this->_padding_, this_00 != (UObjectBaseUtility *)0x0)) {
    this_01 = *(UObjectBaseUtility **)(this_00 + 0xb);
    if (this_01 != (UObjectBaseUtility *)0x0) {
      pUVar2 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar2);
      if (((plVar3 != (longlong *)0x0) &&
          (cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*(longlong *)this_00 + 0x750))(this_00,this_01), cVar1 != '\0')) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        (this->CachedNavParent).field0_0x0.DebugPtr = (UObject *)this_01;
      }
    }
    if ((this->CachedNavParent).field0_0x0.DebugPtr == (UObject *)0x0) {
      pUVar2 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3), cVar1 != '\0')) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (this->CachedNavParent).field0_0x0.DebugPtr = (UObject *)this_00;
      }
    }
  }
  this->bNavParentCacheInitialized = 1;
  FNavigationSystem::OnComponentRegistered((UActorComponent *)this);
  return;
}

// OnUnregister @ 146e67630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavRelevantComponent::OnUnregister(UNavRelevantComponent *this)

{
  UActorComponent::OnUnregister((UActorComponent *)this);
  FNavigationSystem::OnComponentUnregistered((UActorComponent *)this);
  return;
}

// RefreshNavigationModifiers @ 146e6f800

void __thiscall UNavRelevantComponent::RefreshNavigationModifiers(UNavRelevantComponent *this)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNavigationSystem::Delegates.UpdateComponentData,&FStack_28);
  plVar1 = (longlong *)0x0;
  if (FNavigationSystem::Delegates.UpdateComponentData._16_4_ != 0) {
    plVar1 = (longlong *)FNavigationSystem::Delegates.UpdateComponentData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// SetNavigationRelevancy @ 146e72160

void __thiscall
UNavRelevantComponent::SetNavigationRelevancy(UNavRelevantComponent *this,bool param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  if (((bool)(bVar1 >> 6 & 1) != param_1) &&
     (lVar2 = this->_padding_,
     *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xbf | param_1 << 6, (lVar2 & 1) != 0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNavigationSystem::Delegates.UpdateComponentData,&FStack_28);
    plVar3 = (longlong *)0x0;
    if (FNavigationSystem::Delegates.UpdateComponentData._16_4_ != 0) {
      plVar3 = (longlong *)FNavigationSystem::Delegates.UpdateComponentData._8_8_;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
    return;
  }
  return;
}

// StaticRegisterNativesUNavRelevantComponent @ 146e73c20

void __cdecl UNavRelevantComponent::StaticRegisterNativesUNavRelevantComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNavRelevantComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateNavigationBounds @ 146e75c60

void __thiscall UNavRelevantComponent::UpdateNavigationBounds(UNavRelevantComponent *this)

{
  (**(code **)(this[-1]._padding_ + 0x4f8))();
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
  return;
}

// _getUObject @ 146e761e0

UObject * __thiscall UNavRelevantComponent::_getUObject(UNavRelevantComponent *this)

{
  return (UObject *)((longlong)&this[-1].Bounds.Max.field0_0x0 + 8);
}

// _getUObject`adjustor{152}' @ 146e761ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNavRelevantComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UNavRelevantComponent::_getUObject_adjustor_152__(UNavRelevantComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNavRelevantComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execSetNavigationRelevancy @ 146e76fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNavRelevantComponent::execSetNavigationRelevancy(UObject *param_1,FFrame *param_2,void *param_3)

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
  if (((bool)((byte)param_1[3].field_0x22 >> 6 & 1) != (local_res8[0] != 0)) &&
     (param_1[3].field_0x22 = param_1[3].field_0x22 & 0xbf | (local_res8[0] != 0) << 6,
     (param_1[3].field_0x20 & 1) != 0)) {
    FNavigationSystem::UpdateComponentData((UActorComponent *)param_1);
  }
  return;
}

