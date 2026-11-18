// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b4972a0

UClass * __cdecl UDS_FloatingTextAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FloatingTextAbility",
               &Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton,
               StaticRegisterNativesUDS_FloatingTextAbility,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FloatingTextAbility>,
               InternalVTableHelperCtorCaller<UDS_FloatingTextAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton;
}

// UDS_FloatingTextAbility @ 14b49a330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_FloatingTextAbility * __thiscall
UDS_FloatingTextAbility::UDS_FloatingTextAbility
          (UDS_FloatingTextAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CharBuffListMap = 0;
  *(undefined8 *)&(this->CharBuffListMap).field_0x8 = 0;
  *(undefined8 *)&(this->CharBuffListMap).field_0x20 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x28 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharBuffListMap).field_0x34 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CharBuffListMap).field_0x40 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x48 = 0;
  this->CurrentStateAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
  this->CurrentMoveAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
  return this;
}

// UDS_FloatingTextAbility @ 14b49a3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_FloatingTextAbility * __thiscall
UDS_FloatingTextAbility::UDS_FloatingTextAbility
          (UDS_FloatingTextAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->CharBuffListMap = 0;
  *(undefined8 *)&(this->CharBuffListMap).field_0x8 = 0;
  *(undefined8 *)&(this->CharBuffListMap).field_0x20 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x28 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CharBuffListMap).field_0x34 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CharBuffListMap).field_0x40 = 0;
  *(undefined4 *)&(this->CharBuffListMap).field_0x48 = 0;
  this->CurrentStateAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
  this->CurrentMoveAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
  return this;
}

// ~UDS_FloatingTextAbility @ 14b49ac00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_FloatingTextAbility::~UDS_FloatingTextAbility(UDS_FloatingTextAbility *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&(this->CharBuffListMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CharBuffListMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CharBuffListMap);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b49be90

UClass * __cdecl UDS_FloatingTextAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_FloatingTextAbility",
               &Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton,
               StaticRegisterNativesUDS_FloatingTextAbility,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_FloatingTextAbility>,
               InternalVTableHelperCtorCaller<UDS_FloatingTextAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_FloatingTextAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_FloatingTextAbility @ 14b49c080

void __cdecl UDS_FloatingTextAbility::StaticRegisterNativesUDS_FloatingTextAbility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_FloatingTextAbility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenBuffWindow @ 14b49cef0

void __cdecl
UDS_FloatingTextAbility::execOnOpenBuffWindow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  ulong64 local_res20;
  ulong64 local_18;
  UDS_UserWidget *local_10;
  
  local_10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  local_18 = 0;
  FUInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20 = 0;
  FUInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  OnOpenBuffWindow((UDS_FloatingTextAbility *)param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}

// execOnOpenWindow @ 14b49d050

void __cdecl
UDS_FloatingTextAbility::execOnOpenWindow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_FloatingTextInfo *pFVar2;
  UDS_UserWidget *local_res10;
  FDS_FloatingTextInfo local_288;
  FDS_FloatingTextInfo local_148;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FDS_FloatingTextInfo::FDS_FloatingTextInfo(&local_288);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FDS_FloatingTextInfo::FDS_FloatingTextInfo(&local_148,&local_288);
  OnOpenWindow((UDS_FloatingTextAbility *)param_1,local_res10,pFVar2);
  if (local_288.NumberData.IconIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.NumberData.IconIDs.AllocatorInstance.Data);
  }
  if (local_288.NumberData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.NumberData.AnimationSequenceList.AllocatorInstance.Data);
  }
  if (local_288.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data);
  }
  local_288.FloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.FloatingTextData.TextBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  return;
}

// execProcessDamageFontFloatingText @ 14b49d1a0

void __cdecl
UDS_FloatingTextAbility::execProcessDamageFontFloatingText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulong64 local_res10;
  bool local_e8;
  undefined7 uStack_e7;
  ulong64 uStack_e0;
  ulong64 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  int local_98;
  undefined4 uStack_94;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  FDS_StruckInfo local_78;
  
  local_e8 = false;
  uStack_e0 = 0;
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8 = 0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = -1;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res10 = 0;
  FUInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78._1_7_ = uStack_e7;
  local_78.HasDamage = local_e8;
  local_78.AttackerEntityID = uStack_e0;
  local_78.EventTime = local_c8;
  local_78.ExecuteTime = dStack_c0;
  local_78.DefenderEntityID = local_d8;
  local_78.SkillAttackID = (int)uStack_d0;
  local_78.Damage = uStack_d0._4_4_;
  local_78.AbnormalDestination.field0_0x0._s_0.Y = dStack_a8;
  local_78.AbnormalDestination.field0_0x0._s_0.Z = dStack_a0;
  local_78.AbnormalID = (int)local_b8;
  local_78.DamageInfo = local_b8._4_4_;
  local_78.AbnormalDestination.field0_0x0._s_0.X = dStack_b0;
  local_78._84_4_ = uStack_94;
  local_78.MultiHitPointIndex = local_98;
  local_78.EffectLocation.field0_0x0._s_0.Y = dStack_88;
  local_78.EffectLocation.field0_0x0._s_0.Z = dStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.EffectLocation.field0_0x0._s_0.X = dStack_90;
  ProcessDamageFontFloatingText((UDS_FloatingTextAbility *)param_1,&local_78,local_res10);
  return;
}

// ClearVariables @ 14b7a0180

void __thiscall UDS_FloatingTextAbility::ClearVariables(UDS_FloatingTextAbility *this)

{
  return;
}

// CloseWindow @ 14b7a02f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::CloseWindow
          (UDS_FloatingTextAbility *this,EDS_WindowWidget param_1,int param_2)

{
  bool bVar1;
  UDS_WindowManager *this_00;
  UDS_WindowInfo *this_01;
  float local_res10 [2];
  uint local_res20 [2];
  FWeakObjectPtr local_18 [2];
  
  if (((param_1 != None) && (param_2 != 0)) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_18);
    bVar1 = FWeakObjectPtr::IsValid(local_18);
    if (bVar1) {
      this_01 = (UDS_WindowInfo *)FWeakObjectPtr::Get(local_18);
      local_res10[0] = (float)param_2;
      bVar1 = UDS_WindowInfo::ContainsMultipleWindowInfo(this_01,(uint *)local_res10);
      if (bVar1) {
        local_res10[0] = 0.0;
        local_res20[0] = param_2;
        UDS_WindowManager::CloseWindow(this_00,param_1,local_res20,local_res10);
      }
    }
  }
  return;
}

// GetAbnormalScreenPosition @ 14b7aaa70

TVector2<double> * __thiscall
UDS_FloatingTextAbility::GetAbnormalScreenPosition
          (UDS_FloatingTextAbility *this,TVector2<double> *__return_storage_ptr__,
          TVector<double> *param_1,EDS_AbnormalType param_2)

{
  double dVar1;
  double dVar2;
  
  DS_Util::ProjectWorldToScreen(param_1,__return_storage_ptr__);
  if (((param_2 - Sleep & 0xfc) == 0) && (param_2 != Hold)) {
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Y - __real_4049000000000000;
  }
  else {
    if (1 < (byte)(param_2 - KnockFront)) {
      return __return_storage_ptr__;
    }
    dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Y - __real_4062c00000000000;
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X + __real_406f400000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
  return __return_storage_ptr__;
}

// GetDamageFontScreenPosition @ 14b7ab630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
UDS_FloatingTextAbility::GetDamageFontScreenPosition
          (UDS_FloatingTextAbility *this,TVector2<double> *__return_storage_ptr__,
          TVector<double> *param_1,EDS_DamageFontType param_2)

{
  uint uVar1;
  float fVar2;
  
  DS_Util::ProjectWorldToScreen(param_1,__return_storage_ptr__);
  if ((param_2 - Smite & 0xfb) == 0) {
    uVar1 = rand();
    fVar2 = (float)(uVar1 & 0x7fff) * __real_3b480190 + __real_435c0000;
  }
  else {
    if ((param_2 != Critical) && (param_2 != CriticalSmite)) {
      uVar1 = rand();
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (double)((float)(uVar1 & 0x7fff) * ___real_3be601cc - __real_42f00000) +
           (__return_storage_ptr__->field0_0x0)._s_0.X;
      uVar1 = rand();
      fVar2 = (float)(uVar1 & 0x7fff) * ___real_3b340168;
      goto LAB_14b7ab710;
    }
    uVar1 = rand();
    fVar2 = (float)(uVar1 & 0x7fff) * __real_3b480190 + __real_437a0000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)fVar2 + (__return_storage_ptr__->field0_0x0)._s_0.X;
  uVar1 = rand();
  fVar2 = (float)(uVar1 & 0x7fff) * __real_3b480190;
LAB_14b7ab710:
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(fVar2 - __real_42c80000) + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// GetDamageFontType @ 14b7ab740

EDS_DamageFontType __thiscall
UDS_FloatingTextAbility::GetDamageFontType
          (UDS_FloatingTextAbility *this,FDS_StruckInfo *param_1,bool param_2)

{
  int iVar1;
  EDS_DamageFontType EVar2;
  
  iVar1 = param_1->DamageInfo;
  if (iVar1 == 10) {
    return Hit;
  }
  if (iVar1 == 0x15) {
    return Critical;
  }
  if (iVar1 == 1) {
    return !param_2 * '\b' + Dodge;
  }
  if (iVar1 == 0xb) {
    return Immune;
  }
  if (iVar1 == 0xd) {
    return PkGuard;
  }
  if (iVar1 == 0x1f) {
    return Immortal;
  }
  if (iVar1 == 0xc) {
    return Unbeatable;
  }
  if (iVar1 == 0x16) {
    return Smite;
  }
  EVar2 = None;
  if (iVar1 == 0x17) {
    EVar2 = CriticalSmite;
  }
  return EVar2;
}

// GetHealFontScreenPosition @ 14b7abfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
UDS_FloatingTextAbility::GetHealFontScreenPosition
          (UDS_FloatingTextAbility *this,TVector2<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  uint uVar1;
  
  DS_Util::ProjectWorldToScreen(param_1,__return_storage_ptr__);
  uVar1 = rand();
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(uVar1 & 0x7fff) * __real_3ac80190 + __real_435c0000) +
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  uVar1 = rand();
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(__real_c2c80000 - (float)(uVar1 & 0x7fff) * ___real_3bc80190) +
       (__return_storage_ptr__->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

// OnAbilityAdded @ 14b7b3b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_FloatingTextAbility::OnAbilityAdded(UDS_FloatingTextAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  undefined1 local_res8 [8];
  
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnGroupDamageEventDelegate,(UDS_FloatingTextAbility *)local_res8
             ,(pmf_c4b47723 *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::HealBuffCurrentStatusResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnHealEventDelegate,(UDS_FloatingTextAbility *)local_res8,
             (pmf_025088bf *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::AbnormalEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnAbnormalEventDelegate,(UDS_FloatingTextAbility *)local_res8,
             (pmf_087301c1 *)this);
  TMulticastDelegateRegistration<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,server_msg::BuffInfo_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnBuffEventDelegate,(UDS_FloatingTextAbility *)local_res8,
             (pmf_493c0149 *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::BuffDamageResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnBuffDamageEventDelegate,(UDS_FloatingTextAbility *)local_res8,
             (pmf_6e32f959 *)this);
  TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_FloatingTextAbility>
            ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
              *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
             (UDS_FloatingTextAbility *)local_res8,(pmf_d662fbd6 *)this);
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (!bVar1) {
    TVar2 = UDS_CharStateData::GetData((ulong64)local_res8);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar2.WeakPtr;
  }
  return;
}

// OnAbilityRemoved @ 14b7b3e50

void __thiscall UDS_FloatingTextAbility::OnAbilityRemoved(UDS_FloatingTextAbility *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr aFStackX_8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar1 == '\x01') {
    UDS_CharStateData::GetData((ulong64)aFStackX_8);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)aFStackX_8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(aFStackX_8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 0x3a0))(this);
  if (cVar1 == '\x01') {
    UDS_CharBuffData::GetData((ulong64)aFStackX_8);
    bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)aFStackX_8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(aFStackX_8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 7),this);
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b41a0

void __thiscall UDS_FloatingTextAbility::OnAbilityRetryActivate(UDS_FloatingTextAbility *this)

{
  return;
}

// OnAbnormalEvent @ 14b7b41b0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnAbnormalEvent
          (UDS_FloatingTextAbility *this,AbnormalEventResponse *param_1)

{
  int iVar1;
  AbnormalInfo *pAVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_DataBase *this_00;
  ulong64 uVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr *this_01;
  UObject *pUVar7;
  UClass *pUVar8;
  AbnormalInfo *pAVar9;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1e8;
  UObject *local_1e0;
  FDS_StruckInfo local_1d8;
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar3 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_FloatingTextAbility::OnAbnormalEvent",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xb7,L"CharStateData is invalid.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
  uVar5 = UDS_DataBase::GetEntityID(this_00);
  local_1e0 = (UObject *)(param_1->_impl_).entity_id_;
  pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&local_1e0);
  if ((pFVar6 != (FDS_EntityBase *)0x0) && (pFVar6->EntityType == Totem)) {
    this_01 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,local_168);
    pUVar7 = FWeakObjectPtr::Get(this_01);
    if (pUVar7 == (UObject *)0x0) {
LAB_14b7b4302:
      pUVar7 = (UObject *)0x0;
    }
    else {
      pUVar8 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) goto LAB_14b7b4302;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    local_1e8.ObjectIndex = 0;
    local_1e8.ObjectSerialNumber = 0;
    local_1e0 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1e0);
    bVar3 = FWeakObjectPtr::IsValid(&local_1e8);
    if ((bVar3) &&
       (pUVar7 = FWeakObjectPtr::Get(&local_1e8), *(ulong64 *)&pUVar7[0x2d].field_0x20 == uVar5))
    goto LAB_14b7b437f;
  }
  if (((param_1->_impl_).entity_id_ != uVar5) && ((param_1->_impl_).target_entity_id_ != uVar5)) {
    return;
  }
LAB_14b7b437f:
  pAVar2 = (param_1->_impl_).abnormal_info_;
  local_1d8.AttackerEntityID = (param_1->_impl_).entity_id_;
  local_1d8.DefenderEntityID = (param_1->_impl_).target_entity_id_;
  local_1d8.ExecuteTime = 0.0;
  pAVar9 = &server_msg::_AbnormalInfo_default_instance_._instance;
  if (pAVar2 != (AbnormalInfo *)0x0) {
    pAVar9 = pAVar2;
  }
  local_1d8.AbnormalDestination.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1d8.EffectLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1d8.EventTime = (param_1->_impl_).event_time_;
  local_1d8.HasDamage = false;
  local_1d8.SkillAttackID = 0;
  local_1d8.Damage = 0;
  local_1d8.DamageInfo = 0;
  local_1d8.AbnormalDestination.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1d8.AbnormalDestination.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1d8.MultiHitPointIndex = -1;
  local_1d8.EffectLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1d8.EffectLocation.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1d8.AbnormalID = (pAVar9->_impl_).abnormal_id_;
  ProcessAbnormalFloatingTextInfo(this,&local_1d8,uVar5);
  return;
}

// OnBuffDamageEvent @ 14b7b4480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnBuffDamageEvent
          (UDS_FloatingTextAbility *this,BuffDamageResponse *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  bool bVar4;
  uint uVar5;
  UDS_LogManager *pUVar6;
  UDS_DataBase *this_00;
  ulong64 uVar7;
  undefined1 auStackY_268 [32];
  uint7 uStack_237;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1e4;
  undefined1 local_1c8 [56];
  TVector<double>_u_0 TStack_190;
  undefined8 local_178;
  TVector<double>_u_0 TStack_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar2 = (param_1->_impl_).trigger_entity_;
  uVar3 = (param_1->_impl_).target_entity_;
  uVar1 = (param_1->_impl_).delta_value_;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar4) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    uVar7 = UDS_DataBase::GetEntityID(this_00);
    TStack_190._16_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    TStack_190._20_4_ =
         (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar5 = -uVar1;
    local_1c8._0_8_ = (ulonglong)uStack_237 << 8;
    if ((int)uVar5 < 0) {
      uVar5 = uVar1;
    }
    local_1c8._24_8_ = (ulonglong)uVar5 << 0x20;
    uStack_1f8 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uStack_1f4 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    TStack_190._8_4_ = uStack_1f8;
    TStack_190._12_4_ = uStack_1f4;
    local_1c8._48_8_ = &DAT_a00000000;
    TStack_190._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_178._4_4_ = uStack_1e4;
    local_178._0_4_ = -1;
    TStack_170._8_4_ = uStack_1f8;
    TStack_170._12_4_ = uStack_1f4;
    local_1c8._32_8_ = 0.0;
    local_1c8._40_8_ = 0.0;
    TStack_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1c8._8_8_ = uVar2;
    local_1c8._16_8_ = uVar3;
    TStack_170._16_4_ = TStack_190._16_4_;
    TStack_170._20_4_ = TStack_190._20_4_;
    ProcessDamageFontFloatingText(this,(FDS_StruckInfo *)local_1c8,uVar7);
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_FloatingTextAbility::OnBuffDamageEvent",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x14d,L"CharStateData is invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return;
}

// OnBuffEvent @ 14b7b4640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnBuffEvent
          (UDS_FloatingTextAbility *this,ulong64 param_1,BuffInfo *param_2)

{
  TMap<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
  *this_00;
  ulonglong uVar1;
  ulong64 uVar2;
  RepeatedPtrField<server_msg::Buff> *pRVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  EDS_BuffApplyType EVar7;
  undefined7 uVar8;
  double dVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  UDS_LogManager *pUVar13;
  ulonglong uVar14;
  UDS_DataBase *this_01;
  ulong64 uVar15;
  UDS_CharBuffData *this_02;
  FDS_BuffInfo *pFVar16;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar17;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTVar18;
  FDS_BuffInfo *pFVar19;
  ulonglong *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  Impl_ *pIVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  double dVar28;
  undefined1 auStackY_2a8 [32];
  ulong64 local_278;
  undefined4 local_270 [2];
  FWeakObjectPtr local_268 [2];
  longlong *local_258;
  undefined1 auStack_250 [16];
  uint uStack_240;
  uint uStack_23c;
  longlong local_238;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_230;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *local_228;
  undefined2 local_220;
  int local_218 [2];
  UDS_FloatingTextAbility *local_210;
  undefined1 local_208 [8];
  ulong64 *local_200;
  undefined4 *local_1f8;
  FDS_BuffInfo *local_1f0;
  undefined1 local_1e8 [32];
  longlong local_1c8;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_210 = this;
  bVar11 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (!bVar11) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    local_1b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1b8,"UDS_FloatingTextAbility::OnBuffEvent",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Warning,local_1b8.Ptr,0xdd,L"CharStateData is invalid.");
    if ((void *)local_1b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1b8._padding_);
    return;
  }
  this_00 = &this->CharBuffListMap;
  if (*(int *)&(this->CharBuffListMap).field_0x8 != *(int *)&(this->CharBuffListMap).field_0x34) {
    puVar22 = *(undefined1 **)&(this->CharBuffListMap).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->CharBuffListMap).field_0x38;
    }
    iVar27 = *(int *)(puVar22 +
                     (ulonglong)
                     (*(int *)&(this->CharBuffListMap).field_0x48 - 1U &
                     (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar27 != -1) {
      do {
        if (*(ulong64 *)((longlong)iVar27 * 0x60 + *(longlong *)&this_00->field_0x0) == param_1) {
          UDS_CharBuffData::GetData((ulong64)local_268);
          bVar11 = FWeakObjectPtr::IsValid(local_268);
          if (bVar11) {
            pTVar18 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                       *)TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                         ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                                        *)this_00,param_1);
            TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
            ::TIterator::TIterator((TIterator *)local_1e8,pTVar18);
            local_220 = 0;
            stack0xfffffffffffffdb8 = local_1e8._16_16_;
            local_258 = (longlong *)local_1e8._0_8_;
            auStack_250._0_8_ = local_1e8._8_8_;
            local_238 = local_1c8;
            pTStack_230 = pTStack_1c0;
            uVar23 = local_1e8._24_8_ >> 0x20;
            uVar25 = local_1e8._28_4_;
            local_228 = pTVar18;
            if ((int)uVar25 < *(int *)(local_1e8._16_8_ + 0x18)) goto LAB_14b7b4820;
          }
          break;
        }
        iVar27 = *(int *)((longlong)iVar27 * 0x60 + 0x58 + *(longlong *)&this_00->field_0x0);
      } while (iVar27 != -1);
    }
  }
LAB_14b7b48fc:
  this_01 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
  uVar15 = UDS_DataBase::GetEntityID(this_01);
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar25 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3e45798ee2308c3a;
  uVar23 = *(ulonglong *)&(param_2->_impl_).buffs_;
  if ((uVar23 & 1) == 0) {
    pIVar24 = &param_2->_impl_;
  }
  else {
    pIVar24 = (Impl_ *)(uVar23 + 7);
  }
  iVar27 = *(int *)&(param_2->_impl_).buffs_.field_0x8;
  pRVar3 = &pIVar24->buffs_;
  uVar2 = local_278;
  do {
    if (pIVar24 == (Impl_ *)(&pRVar3->field_0x0 + (longlong)iVar27 * 8)) {
      iVar27 = 1;
      local_278 = uVar2;
      TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_1e8,
                 (TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
                  *)this_00);
      stack0xfffffffffffffdb8 = local_1e8._16_16_;
      local_258 = (longlong *)local_1e8._0_8_;
      auStack_250._0_8_ = local_1e8._8_8_;
      local_220._0_1_ = '\0';
      local_220._1_1_ = '\0';
      local_238 = local_1c8;
      pTStack_230 = pTStack_1c0;
      uVar23 = local_1e8._24_8_ >> 0x20;
      local_228 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                   *)this_00;
      if (local_1e8._28_4_ < *(int *)(local_1e8._16_8_ + 0x18)) {
        do {
          lVar26 = (longlong)(int)uVar23 * 0x60;
          if (*(int *)(lVar26 + 0x10 + *local_258) == *(int *)(lVar26 + 0x3c + *local_258)) {
            TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
                             *)pTStack_230,(int)uVar23);
            local_220._0_1_ = '\x01';
          }
          uStack_240 = uStack_240 & ~auStack_250._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_250);
          uVar23 = (ulonglong)uStack_23c;
        } while ((int)uStack_23c < *(int *)(auStack_250._8_8_ + 0x18));
        if (((char)local_220 != '\0') && (local_220._1_1_ != '\0')) {
          uVar25 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)&local_228->Elements)->field_0x8 -
                   *(int *)&((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)&local_228->Elements)->field_0x34;
          if (3 < uVar25) {
            uVar23 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
            lVar26 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
              }
            }
            iVar27 = 1 << ((byte)lVar26 & 0x1f);
          }
          if (((0 < (int)uVar25) && (local_228->HashSize < iVar27)) ||
             (iVar27 < local_228->HashSize)) {
            local_228->HashSize = iVar27;
            TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
                      *)local_228);
          }
        }
      }
      return;
    }
    lVar26 = *(longlong *)&pIVar24->buffs_;
    local_278 = uVar15;
    if (((uVar15 == param_1) || (local_278 = param_1, uVar15 == *(ulong64 *)(lVar26 + 0x20))) &&
       (uVar2 = local_278, local_278 != 0)) {
      UDS_CharBuffData::GetData((ulong64)local_268);
      bVar11 = FWeakObjectPtr::IsValid(local_268);
      uVar2 = local_278;
      if (bVar11) {
        this_02 = (UDS_CharBuffData *)FWeakObjectPtr::Get(local_268);
        local_218[0] = *(int *)(lVar26 + 0x18);
        pFVar16 = UDS_CharBuffData::GetBuffInfo(this_02,local_218);
        uVar2 = local_278;
        if (pFVar16 != (FDS_BuffInfo *)0x0) {
          if (*(int *)&(local_210->CharBuffListMap).field_0x8 !=
              *(int *)&(this->CharBuffListMap).field_0x34) {
            puVar22 = *(undefined1 **)&(this->CharBuffListMap).field_0x40;
            puVar21 = &(this->CharBuffListMap).field_0x38;
            if (puVar22 != (undefined1 *)0x0) {
              puVar21 = puVar22;
            }
            iVar12 = *(int *)(puVar21 +
                             ((ulonglong)(*(int *)&(this->CharBuffListMap).field_0x48 - 1) &
                             (local_278 >> 0x20) * 0x17 + local_278) * 4);
            if (iVar12 != -1) {
              do {
                if (*(ulonglong *)((longlong)iVar12 * 0x60 + *(longlong *)&this_00->field_0x0) ==
                    local_278) goto LAB_14b7b4a6a;
                iVar12 = *(int *)((longlong)iVar12 * 0x60 + 0x58 + *(longlong *)&this_00->field_0x0)
                ;
              } while (iVar12 != -1);
            }
          }
          local_200 = &local_278;
          TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<unsigned___int64_&>_>
                    ((TSet<TTuple<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>,FDefaultSetAllocator>
                      *)this_00,(TKeyInitializer<unsigned___int64_&> *)local_208,(bool *)&local_200)
          ;
LAB_14b7b4a6a:
          pTVar17 = TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                                   *)this_00,local_278);
          if (*(int *)&pTVar17->field_0x8 != *(int *)&pTVar17->field_0x34) {
            puVar22 = &pTVar17->field_0x38;
            if (*(undefined1 **)&pTVar17->field_0x40 != (undefined1 *)0x0) {
              puVar22 = *(undefined1 **)&pTVar17->field_0x40;
            }
            iVar12 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&pTVar17->field_0x48 - 1U & *(uint *)(lVar26 + 0x18)) * 4);
            if (iVar12 != -1) {
              do {
                if (*(uint *)((longlong)iVar12 * 0x38 + *(longlong *)pTVar17) ==
                    *(uint *)(lVar26 + 0x18)) {
                  if (iVar12 != -1) {
                    dVar28 = pFVar16->StartTicks;
                    pTVar17 = TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                              ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                                             *)this_00,local_278);
                    pFVar19 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                              ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                             *)pTVar17,*(int *)(lVar26 + 0x18));
                    dVar28 = pFVar19->StartTicks - dVar28;
                    uVar2 = local_278;
                    if ((double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar10,
                                         SUB84(dVar28,0) & uVar25) <= dVar9) goto LAB_14b7b4b11;
                    iVar12 = pFVar16->BuffID;
                    iVar4 = pFVar16->BuffLevel;
                    iVar5 = pFVar16->BuffOverlapCount;
                    uVar6 = *(undefined4 *)&pFVar16->field_0xc;
                    uVar2 = pFVar16->TriggerEntityID;
                    dVar28 = pFVar16->StartTicks;
                    EVar7 = pFVar16->BuffApplyType;
                    uVar8 = *(undefined7 *)&pFVar16->field_0x21;
                    pTVar17 = TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                              ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                                             *)this_00,local_278);
                    pFVar19 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                              ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                             *)pTVar17,*(int *)(lVar26 + 0x18));
                    pFVar19->BuffID = iVar12;
                    pFVar19->BuffLevel = iVar4;
                    pFVar19->BuffOverlapCount = iVar5;
                    *(undefined4 *)&pFVar19->field_0xc = uVar6;
                    pFVar19->TriggerEntityID = uVar2;
                    pFVar19->StartTicks = dVar28;
                    pFVar19->BuffApplyType = EVar7;
                    *(undefined7 *)&pFVar19->field_0x21 = uVar8;
                    goto LAB_14b7b4b00;
                  }
                  break;
                }
                iVar12 = *(int *)((longlong)iVar12 * 0x38 + 0x30 + *(longlong *)pTVar17);
              } while (iVar12 != -1);
            }
          }
          pTVar18 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                     *)TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                       ::FindChecked((TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
                                      *)this_00,local_278);
          local_270[0] = *(undefined4 *)(lVar26 + 0x18);
          local_1f8 = local_270;
          local_1f0 = pFVar16;
          TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&&,FDS_BuffInfo_&>_>
                    (pTVar18,(TPairInitializer<int_&&,FDS_BuffInfo_&> *)(local_208 + 4),
                     (bool *)&local_1f8);
LAB_14b7b4b00:
          ProcessBuffFloatingText(local_210,local_278,pFVar16);
          uVar2 = local_278;
        }
      }
    }
LAB_14b7b4b11:
    local_278 = uVar2;
    pIVar24 = (Impl_ *)&(pIVar24->buffs_).field_0x8;
    uVar2 = local_278;
  } while( true );
LAB_14b7b4820:
  iVar27 = *(int *)&(param_2->_impl_).buffs_.field_0x8;
  if (0 < iVar27) {
    uVar1 = *(ulonglong *)&(param_2->_impl_).buffs_;
    puVar20 = (ulonglong *)(uVar1 + 7);
    lVar26 = 0;
    do {
      uVar14 = uVar1;
      if ((uVar1 & 1) != 0) {
        uVar14 = *puVar20;
      }
      if (*(int *)((longlong)(int)uVar23 * 0x38 + *local_258) == *(int *)(uVar14 + 0x18))
      goto LAB_14b7b487d;
      lVar26 = lVar26 + 1;
      puVar20 = puVar20 + 1;
    } while (lVar26 < iVar27);
  }
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::RemoveByIndex(pTStack_230,uVar25);
  local_220 = CONCAT11(local_220._1_1_,1);
LAB_14b7b487d:
  uStack_240 = uStack_240 & ~auStack_250._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_250);
  if (*(int *)(auStack_250._8_8_ + 0x18) <= (int)uStack_23c) goto LAB_14b7b48a6;
  uVar23 = (ulonglong)uStack_23c;
  uVar25 = uStack_23c;
  goto LAB_14b7b4820;
LAB_14b7b48a6:
  if (((char)local_220 != '\0') && (local_220._1_1_ != '\0')) {
    uVar25 = *(int *)&(local_228->Elements).field_0x8 - *(int *)&(local_228->Elements).field_0x34;
    if (uVar25 < 4) {
      iVar27 = 1;
    }
    else {
      uVar23 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar27 = 1 << ((byte)lVar26 & 0x1f);
    }
    if (((0 < (int)uVar25) && (local_228->HashSize < iVar27)) || (iVar27 < local_228->HashSize)) {
      local_228->HashSize = iVar27;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::Rehash(local_228);
    }
  }
  goto LAB_14b7b48fc;
}

// OnCanActivate @ 14b7b64f0

bool __thiscall UDS_FloatingTextAbility::OnCanActivate(UDS_FloatingTextAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b7b88e0

void __thiscall
UDS_FloatingTextAbility::OnDeactivateAbility(UDS_FloatingTextAbility *this,bool *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnGroupDamageEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnBuffEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnHealEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnAbnormalEventDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// OnGroupDamageEvent @ 14b7b8cb0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnGroupDamageEvent
          (UDS_FloatingTextAbility *this,GroupDamageEventResponse *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  bool bVar10;
  UDS_LogManager *pUVar11;
  UDS_DataBase *this_00;
  ulong64 uVar12;
  FDS_EntityBase *pFVar13;
  FWeakObjectPtr *this_01;
  UObject *pUVar14;
  UClass *pUVar15;
  DamageDefaultTypeInternal *pDVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FTimerUnifiedDelegate *pFVar19;
  Impl_ *pIVar20;
  Impl_ *pIVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStackY_338 [32];
  FWeakObjectPtr local_300;
  FDelegateAllocation local_2f8;
  ulong64 local_2e8;
  UObject *local_2e0;
  UDS_FloatingTextAbility *local_2d8;
  FTimerHandle local_2d0;
  FTimerManager *local_2c8;
  code *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [16];
  FDS_StruckInfo local_288;
  undefined1 local_218 [64];
  double dStack_1d8;
  double dStack_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar10 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar10) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    uVar12 = UDS_DataBase::GetEntityID(this_00);
    fVar8 = __real_bf800000;
    if ((~*(byte *)&(param_1->_impl_).damage_events_ & 1) == 0) {
      lVar3 = *(longlong *)&(param_1->_impl_).damage_events_;
      pIVar21 = (Impl_ *)(lVar3 + 7);
      pIVar20 = (Impl_ *)(lVar3 + 7);
    }
    else {
      pIVar20 = &param_1->_impl_;
      pIVar21 = &param_1->_impl_;
    }
    puVar1 = &(pIVar20->damage_events_).field_0x0 +
             (longlong)*(int *)&(param_1->_impl_).damage_events_.field_0x8 * 8;
    if (pIVar21 != (Impl_ *)puVar1) {
      uVar9 = local_2a0._4_4_;
      do {
        lVar3 = *(longlong *)&pIVar21->damage_events_;
        local_2e8 = *(ulong64 *)(lVar3 + 0x28);
        pFVar13 = FDS_EntityBase::GetEntityBase(&local_2e8);
        if ((pFVar13 == (FDS_EntityBase *)0x0) || (pFVar13->EntityType != Totem)) {
LAB_14b7b8f07:
          if ((*(ulong64 *)(lVar3 + 0x28) == uVar12) || (*(ulong64 *)(lVar3 + 0x30) == uVar12))
          goto LAB_14b7b8f17;
        }
        else {
          this_01 = (FWeakObjectPtr *)(**(code **)(pFVar13->_padding_ + 0x150))(pFVar13,local_298);
          pUVar14 = FWeakObjectPtr::Get(this_01);
          if (pUVar14 == (UObject *)0x0) {
LAB_14b7b8e90:
            pUVar14 = (UObject *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_ADS_TotemActor_NoRegister();
            iVar2 = (int)pUVar15->_padding_;
            if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar15->_padding_)) goto LAB_14b7b8e90;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          local_300.ObjectIndex = 0;
          local_300.ObjectSerialNumber = 0;
          local_2e0 = pUVar14;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          FWeakObjectPtr::operator=(&local_300,(FObjectPtr)&local_2e0);
          bVar10 = FWeakObjectPtr::IsValid(&local_300);
          if ((!bVar10) ||
             (pUVar14 = FWeakObjectPtr::Get(&local_300),
             *(ulong64 *)&pUVar14[0x2d].field_0x20 != uVar12)) goto LAB_14b7b8f07;
LAB_14b7b8f17:
          local_218[0] = *(byte *)(lVar3 + 0x10) & 1;
          local_218._8_8_ = *(ulong64 *)(lVar3 + 0x28);
          uVar6 = *(undefined4 *)(lVar3 + 0x48);
          uVar7 = *(undefined4 *)(lVar3 + 0x4c);
          uVar23 = (undefined4)*(undefined8 *)(lVar3 + 0x40);
          uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
          local_218._16_8_ = *(ulong64 *)(lVar3 + 0x30);
          pDVar16 = &_Damage_default_instance_;
          if (*(DamageDefaultTypeInternal **)(lVar3 + 0x18) != (DamageDefaultTypeInternal *)0x0) {
            pDVar16 = *(DamageDefaultTypeInternal **)(lVar3 + 0x18);
          }
          local_218._48_4_ = 0;
          local_218._56_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1c8 = -1;
          dStack_1d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_218._28_4_ = (pDVar16->_instance)._impl_.amount_;
          local_218._24_4_ = *(int *)(lVar3 + 0x38);
          local_218._52_4_ = *(int *)(lVar3 + 0x3c);
          dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dVar5 = UDS_TimeUtilManager::GetCurrentServerTime();
          dVar5 = *(double *)(lVar3 + 0x40) - dVar5;
          if (0.0 < dVar5) {
            local_2d0.Handle = 0;
            local_2c8 = FDS_TimerManager::Get((UObject *)0x0);
            uStack_2b0 = 0;
            local_2b8 = ProcessDamageFontFloatingText;
            uStack_2ac = uVar9;
            local_2a8 = 0;
            local_2a0 = &local_2f8;
            local_2f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_2f8.DelegateSize = 0;
            puVar17 = UE::Core::Private::DelegateAllocate(0xa0,&local_2f8);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = &
                         ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_StruckInfo___K__6B_
              ;
              puVar17[1] = CONCAT71(local_218._1_7_,local_218[0]);
              puVar17[2] = local_218._8_8_;
              puVar17[3] = local_218._16_8_;
              puVar17[4] = CONCAT44(local_218._28_4_,local_218._24_4_);
              *(undefined4 *)(puVar17 + 5) = uVar6;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar7;
              *(undefined4 *)(puVar17 + 6) = uVar23;
              *(undefined4 *)((longlong)puVar17 + 0x34) = uVar24;
              puVar17[7] = CONCAT44(local_218._52_4_,local_218._48_4_);
              puVar17[8] = local_218._56_8_;
              puVar17[9] = dStack_1d8;
              puVar17[10] = dStack_1d0;
              puVar17[0xb] = CONCAT44(uStack_1c4,local_1c8);
              puVar17[0xc] = dStack_1c0;
              puVar17[0xd] = dStack_1b8;
              puVar17[0xe] = dStack_1b0;
              puVar17[0xf] = uVar12;
              uVar18 = FDelegateHandle::GenerateNewID();
              puVar17[0x10] = uVar18;
              *puVar17 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_FloatingTextAbility____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__UFDS_StruckInfo___K__6B_
              ;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UDS_FloatingTextAbility *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar17[0x11] = 0;
              local_2d8 = this;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UDS_FloatingTextAbility *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 0x11),(FObjectPtr)&local_2d8);
              puVar17[0x12] = local_2b8;
              puVar17[0x13] = CONCAT44(uStack_2ac,uStack_2b0);
            }
            pFVar19 = FTimerUnifiedDelegate::FTimerUnifiedDelegate
                                ((FTimerUnifiedDelegate *)local_218,
                                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                                  *)&local_2f8);
            FTimerManager::InternalSetTimer(local_2c8,&local_2d0,pFVar19,(float)dVar5,false,fVar8);
            uVar22 = (ulonglong)local_218[0x30];
            if ((3 < uVar22) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                    ,0xd4,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar22])(local_218);
            if ((local_2f8.DelegateSize != 0) &&
               (local_2f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_2f8.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_2f8,0,0,0x10);
              local_2f8.DelegateSize = 0;
            }
            if (local_2f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_2f8.DelegateAllocator);
            }
          }
          else {
            local_288._1_7_ = local_218._1_7_;
            local_288.HasDamage = (bool)local_218[0];
            local_288.Damage = local_218._28_4_;
            local_288.SkillAttackID = local_218._24_4_;
            local_288.AttackerEntityID = local_218._8_8_;
            local_288.DefenderEntityID = local_218._16_8_;
            local_288.DamageInfo = local_218._52_4_;
            local_288.AbnormalID = local_218._48_4_;
            local_288.AbnormalDestination.field0_0x0._s_0.X = (double)local_218._56_8_;
            local_288._84_4_ = uStack_1c4;
            local_288.MultiHitPointIndex = local_1c8;
            local_288.AbnormalDestination.field0_0x0._s_0.Y = dStack_1d8;
            local_288.AbnormalDestination.field0_0x0._s_0.Z = dStack_1d0;
            local_288.EffectLocation.field0_0x0._s_0.X = dStack_1c0;
            local_288.EffectLocation.field0_0x0._s_0.Y = dStack_1b8;
            local_288.EffectLocation.field0_0x0._s_0.Z = dStack_1b0;
            local_288.EventTime._0_4_ = uVar6;
            local_288.EventTime._4_4_ = uVar7;
            local_288.ExecuteTime._0_4_ = uVar23;
            local_288.ExecuteTime._4_4_ = uVar24;
            ProcessDamageFontFloatingText(this,&local_288,uVar12);
          }
        }
        pIVar21 = (Impl_ *)&(pIVar21->damage_events_).field_0x8;
      } while (pIVar21 != (Impl_ *)puVar1);
    }
  }
  else {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_FloatingTextAbility::OnGroupDamageEvent",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar11,1,Warning,local_1a8.Ptr,0x79,L"CharStateData is invalid.");
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
    }
  }
  return;
}

// OnHealEvent @ 14b7b9250

void __thiscall
UDS_FloatingTextAbility::OnHealEvent
          (UDS_FloatingTextAbility *this,HealBuffCurrentStatusResponse *param_1)

{
  ProcessHealFloatingText
            (this,(param_1->_impl_).trigger_entity_,(param_1->_impl_).stat_type_,
             (param_1->_impl_).delta_value_);
  return;
}

// OnMainCharChanged @ 14b7b9780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnMainCharChanged
          (UDS_FloatingTextAbility *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar1;
  undefined1 local_res18 [16];
  
  if (param_2 != (FDS_EntityBase *)0x0) {
    TVar1 = UDS_CharStateData::GetData((ulong64)local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->CharStateData).WeakPtr = *TVar1.WeakPtr;
    this->CurrentStateAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
    this->CurrentMoveAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
  }
  return;
}

// OnOpenBuffWindow @ 14b7b97d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnOpenBuffWindow
          (UDS_FloatingTextAbility *this,UDS_UserWidget *param_1,ulong64 param_2,ulong64 param_3,
          int param_4)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  undefined1 auStackY_2e8 [32];
  FWeakObjectPtr local_2b8;
  FWeakObjectPtr local_2b0;
  undefined8 local_2a8;
  UDS_UserWidget *local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_FloatingTextAbility::OnOpenBuffWindow",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x250,L"InWidget is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    UDS_CharBuffData::GetData((ulong64)&local_2b0);
    bVar2 = FWeakObjectPtr::IsValid(&local_2b0);
    if (bVar2) {
      pFVar4 = ::operator_new(0x38);
      pFVar7 = (FDS_ViewModelContext *)0x0;
      pFVar6 = pFVar7;
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
        pFVar4[1].ViewModelName.ComparisonIndex = 0;
        pFVar4[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
        (pFVar4->ViewModelName).ComparisonIndex = 0;
        (pFVar4->ViewModelName).Number = 0;
        pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_BuffInfo__6B_;
        pFVar4[1]._padding_ = 0;
        local_2a8 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar4 + 1),(FObjectPtr)&local_2a8);
        *(undefined8 *)&pFVar4[1].DerivedStaticStruct = 0;
        pFVar4[1].ViewModelName.ComparisonIndex.Value = 0;
        *(undefined2 *)&pFVar4[1].ViewModelName.Number = 0;
        *(undefined1 *)((longlong)&pFVar4[1].ViewModelName.Number + 2) = 0;
        pFVar6 = pFVar4;
      }
      pFVar4 = ::operator_new(0x20);
      if (pFVar4 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar4->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_BuffInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar6;
        pFVar7 = pFVar4;
      }
      if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = FDS_ViewModelContext_BuffInfo::StaticStruct();
      *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar5;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_298.Object = pFVar6;
        local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_298.SharedReferenceCount.ReferenceController);
      }
      pFVar6->ViewModelTemplateKey = Data_BuffInfo;
      pFVar6[1]._padding_ = (longlong)local_2b0;
      *(ulong64 *)&pFVar6[1].DerivedStaticStruct = param_3;
      pFVar6[1].ViewModelName.ComparisonIndex.Value = param_4;
      *(undefined2 *)&pFVar6[1].ViewModelName.Number = 0x101;
      if (pFVar7 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar7->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_288.Object = pFVar6;
      local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_2b8.ObjectIndex = 0;
      local_2b8.ObjectSerialNumber = 0;
      local_2a0 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_2a0);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2b8,&local_288,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar7);
    }
    else {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_FloatingTextAbility::OnOpenBuffWindow",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,599,L"charBuffData is invalid.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      (**(code **)(param_1->_padding_ + 0x4f8))(param_1);
    }
  }
  return;
}

// OnOpenWindow @ 14b7b9d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OnOpenWindow
          (UDS_FloatingTextAbility *this,UDS_UserWidget *param_1,FDS_FloatingTextInfo *param_2)

{
  EDS_WindowWidget EVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  TTuple<EDS_WindowWidget,int> TVar5;
  TTuple<EDS_WindowWidget,int> TVar6;
  bool bVar7;
  UDS_LogManager *pUVar8;
  FDS_ViewModelContext *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_00;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_198;
  EDS_WindowWidget local_190;
  uint uStack_18c;
  EDS_WindowWidget local_188;
  uint uStack_184;
  UDS_UserWidget *local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_FloatingTextAbility::OnOpenWindow",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,0x5d,L"InWidget is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((param_2->TargetEntityID == 0) && (param_2->AbnormalType != None)) {
      EVar1 = param_1->MyWindowID;
      if ((byte)(param_2->AbnormalType - KnockFront) < 2) {
        uStack_184 = param_1->MultipleID;
        TVar6._4_4_ = uStack_184;
        TVar6._0_4_ = EVar1;
        this->CurrentMoveAbnormal = TVar6;
        local_188 = EVar1;
      }
      else {
        uStack_18c = param_1->MultipleID;
        TVar5._4_4_ = uStack_18c;
        TVar5._0_4_ = EVar1;
        this->CurrentStateAbnormal = TVar5;
        local_190 = EVar1;
      }
    }
    pFVar9 = ::operator_new(0x160);
    if (pFVar9 == (FDS_ViewModelContext *)0x0) {
      pFVar9 = (FDS_ViewModelContext *)0x0;
    }
    else {
      memset(&pFVar9->field_0x1c,0,0x144);
      pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_FloatingText__6B_;
      pFVar9->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar9->ViewModelName).ComparisonIndex = 0;
      (pFVar9->ViewModelName).Number = 0;
      pFVar9->ViewModelTemplateKey = None;
      FDS_FloatingTextInfo::FDS_FloatingTextInfo((FDS_FloatingTextInfo *)(pFVar9 + 1));
    }
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    pTVar10 = ::operator_new(0x20);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_FloatingText__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar10[1].SharedReferenceCount = pFVar9;
      pTVar12 = pTVar10;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar11 = FDS_ViewModelContext_FloatingText::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar11;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_178.Object = pFVar9;
      local_178.SharedReferenceCount.ReferenceController = pTVar12;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_178);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = W_FloatingText;
    *(EDS_WindowWidget *)&pFVar9[1]._padding_ = (param_2->FloatingTextData).FloatingTextWindowID;
    FSlateBrush::operator=
              ((FSlateBrush *)&pFVar9[1].ViewModelName,&(param_2->FloatingTextData).TextBrush);
    *(int *)&pFVar9[7]._padding_ = (param_2->FloatingTextData).TextBrushID;
    uVar3 = *(undefined8 *)((longlong)&(param_2->FloatingTextData).TextEffectColor.field0_0x0 + 8);
    *(undefined8 *)((longlong)&pFVar9[7]._padding_ + 4) =
         *(undefined8 *)&(param_2->FloatingTextData).TextEffectColor.field0_0x0;
    *(undefined8 *)((longlong)&pFVar9[7].DerivedStaticStruct + 4) = uVar3;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pFVar9[7].ViewModelTemplateKey,
               &(param_2->FloatingTextData).AnimationSequenceList);
    dVar4 = (param_2->FloatingTextScreenPosition).field0_0x0._s_0.Y;
    pFVar9[8].ViewModelName = (FName)(param_2->FloatingTextScreenPosition).field0_0x0._s_0.X;
    *(double *)&pFVar9[8].ViewModelTemplateKey = dVar4;
    pFVar9[9]._padding_ = param_2->TargetEntityID;
    *(EDS_WindowWidget *)&pFVar9[9].DerivedStaticStruct = (param_2->NumberData).FloatingTextWindowID
    ;
    *(EDS_NumberFontType *)((longlong)&pFVar9[9].DerivedStaticStruct + 4) =
         (param_2->NumberData).NumberFontType;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pFVar9[9].ViewModelName,
               &(param_2->NumberData).AnimationSequenceList);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + 10),
               &(param_2->NumberData).IconIDs);
    pFVar9[10].ViewModelName.ComparisonIndex.Value = param_2->NumberValue;
    *(EDS_AbnormalType *)&pFVar9[10].ViewModelName.Number = param_2->AbnormalType;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168.Object = pFVar9;
    local_168.SharedReferenceCount.ReferenceController = pTVar12;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_198.ObjectIndex = 0;
    local_198.ObjectSerialNumber = 0;
    local_180 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_180);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_198,&local_168,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  FDS_FloatingTextInfo::~FDS_FloatingTextInfo(param_2);
  return;
}

// OnPostActivateAbility @ 14b7bc6d0

void __thiscall UDS_FloatingTextAbility::OnPostActivateAbility(UDS_FloatingTextAbility *this)

{
  return;
}

// OpenWindow @ 14b7bef70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::OpenWindow(UDS_FloatingTextAbility *this,FDS_FloatingTextInfo *param_1)

{
  EDS_WindowWidget EVar1;
  FDS_FloatingTextInfo *pFVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  UDS_FloatingTextAbility *local_res10;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pFVar2 = (FDS_FloatingTextInfo *)&param_1->NumberData;
  if (param_1->NumberValue == 0) {
    pFVar2 = param_1;
  }
  EVar1 = (pFVar2->FloatingTextData).FloatingTextWindowID;
  if ((EVar1 != None) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    uStack_80 = 0;
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    local_88 = OnOpenWindow;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x170,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__UFDS_FloatingTextInfo____6B_
      ;
      FDS_FloatingTextInfo::FDS_FloatingTextInfo((FDS_FloatingTextInfo *)(puVar3 + 2),param_1);
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[0x2a] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_FloatingTextAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__UFDS_FloatingTextInfo____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_FloatingTextAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[0x2b] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_FloatingTextAbility *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 0x2b),(FObjectPtr)&local_res10);
      puVar3[0x2c] = local_88;
      puVar3[0x2d] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_88,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_68);
    UDS_WindowManager::OpenWindow(this_00,EVar1,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
  }
  return;
}

// ProcessAbnormalFloatingTextInfo @ 14b7bf410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::ProcessAbnormalFloatingTextInfo
          (UDS_FloatingTextAbility *this,FDS_StruckInfo *param_1,ulong64 param_2)

{
  EDS_AbnormalType EVar1;
  ulong64 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *pFVar8;
  FDS_EntityBase *pFVar9;
  FDS_SkillAbnormalActionTableRow *pFVar10;
  UDS_LogManager *pUVar11;
  UDS_WindowManager *this_00;
  UDS_WindowInfo *this_01;
  FDS_FloatingTextData *pFVar12;
  UObject *pUVar13;
  float fVar14;
  TTuple<EDS_WindowWidget,int> TVar15;
  undefined1 auStackY_208 [32];
  float local_1c8;
  float local_1c4 [3];
  TVector2<double>_u_0 local_1b8;
  ulong64 local_1a8;
  TVector<double>_u_0 local_1a0;
  undefined1 local_188 [272];
  ForAnyElementType local_78;
  ForAnyElementType local_68;
  EDS_AbnormalType local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a8 = param_2;
  pFVar7 = FDS_EntityBase::GetEntityBase(&param_1->DefenderEntityID);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    return;
  }
  pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_1b8);
  bVar6 = FWeakObjectPtr::IsValid(pFVar8);
  if (!bVar6) {
    return;
  }
  if (pFVar7->bIsHiddenEntityActor == true) {
    return;
  }
  pFVar9 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if ((pFVar9 != (FDS_EntityBase *)0x0) && (pFVar9->bIsHiddenEntityActor == true)) {
    return;
  }
  if (param_1->AbnormalID == 0) {
    return;
  }
  pFVar10 = FDS_SkillAbnormalActionTableRow::Get((longlong)param_1->AbnormalID,true);
  if (pFVar10 == (FDS_SkillAbnormalActionTableRow *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_188._256_8_ = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_188,
               "UDS_FloatingTextAbility::ProcessAbnormalFloatingTextInfo",0x38,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,(wchar_t *)local_188._264_8_,0x1eb,
               L"AbnormalActionTableRow is nullptr. AbnormalID(%d)");
    if ((void *)local_188._256_8_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_188._256_8_);
    return;
  }
  EVar1 = pFVar10->AbnormalType;
  if ((EVar1 == Sleep) || ((EVar1 - Stun & 0xfd) == 0)) {
LAB_14b7bf581:
    if (1 < (byte)(EVar1 - KnockFront)) {
      TVar15 = this->CurrentStateAbnormal;
      this->CurrentStateAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
      goto LAB_14b7bf5b5;
    }
  }
  else if (EVar1 != KnockDown) {
    if (EVar1 != KnockFront) {
      return;
    }
    goto LAB_14b7bf581;
  }
  TVar15 = this->CurrentMoveAbnormal;
  this->CurrentMoveAbnormal = (TTuple<EDS_WindowWidget,int>)0x0;
LAB_14b7bf5b5:
  local_1c4[0] = 0.0;
  local_1c4[1] = 0.0;
  if (((TVar15._0_4_ != None) && (fVar14 = TVar15._4_4_, fVar14 != 0.0)) &&
     (this_00 = UDS_WindowManager::GetInst(), this_00 != (UDS_WindowManager *)0x0)) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_1b8);
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1b8._s_0);
    if (bVar6) {
      this_01 = (UDS_WindowInfo *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1b8._s_0);
      local_1c8 = fVar14;
      bVar6 = UDS_WindowInfo::ContainsMultipleWindowInfo(this_01,(uint *)&local_1c8);
      if (bVar6) {
        local_1c8 = 0.0;
        local_1c4[0] = fVar14;
        UDS_WindowManager::CloseWindow(this_00,TVar15._0_4_,(uint *)local_1c4,&local_1c8);
      }
    }
  }
  FDS_FloatingTextInfo::FDS_FloatingTextInfo((FDS_FloatingTextInfo *)local_188);
  uVar2 = param_1->DefenderEntityID;
  if (uVar2 != local_1a8) {
    local_188._256_8_ = uVar2;
  }
  pFVar12 = UDS_FloatingTextDataAsset::GetAbnormalFontData(pFVar10->AbnormalType,uVar2 == local_1a8)
  ;
  local_188._0_4_ = pFVar12->FloatingTextWindowID;
  FSlateBrush::operator=((FSlateBrush *)(local_188 + 0x10),&pFVar12->TextBrush);
  local_188._192_4_ = pFVar12->TextBrushID;
  local_188._196_8_ = *(undefined8 *)&(pFVar12->TextEffectColor).field0_0x0;
  local_188._204_8_ = *(undefined8 *)((longlong)&(pFVar12->TextEffectColor).field0_0x0 + 8);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_188 + 0xd8),
             &pFVar12->AnimationSequenceList);
  EVar1 = pFVar10->AbnormalType;
  pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_1a8);
  pUVar13 = FWeakObjectPtr::Get(pFVar8);
  lVar3 = *(longlong *)(pUVar13 + 0xb);
  local_1a0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_1a0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_1a0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_1a0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_1a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar3 != 0) {
    local_1a0._0_4_ = *(undefined4 *)(lVar3 + 0x210);
    local_1a0._4_4_ = *(undefined4 *)(lVar3 + 0x214);
    local_1a0._8_4_ = *(undefined4 *)(lVar3 + 0x218);
    local_1a0._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
    local_1a0._s_0.Z = *(double *)(lVar3 + 0x220);
  }
  DS_Util::ProjectWorldToScreen
            ((TVector<double> *)&local_1a0._s_0,(TVector2<double> *)&local_1b8._s_0);
  if ((((EVar1 - Sleep & 0xfc) == 0) &&
      (dVar5 = ___xmm_c049000000000000406f400000000000, dVar4 = _UNK_152742b88, EVar1 != Hold)) ||
     (dVar5 = ___xmm_c062c00000000000406f400000000000, dVar4 = _UNK_152742b98,
     (byte)(EVar1 - KnockFront) < 2)) {
    dVar4 = local_1b8._s_0.Y + dVar4;
    local_1b8._8_4_ = SUB84(dVar4,0);
    local_1b8._s_0.X = local_1b8._s_0.X + dVar5;
    local_1b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  }
  local_54 = pFVar10->AbnormalType;
  local_188._240_8_ = local_1b8._s_0.X;
  local_188._248_8_ = local_1b8._s_0.Y;
  OpenWindow(this,(FDS_FloatingTextInfo *)local_188);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((FScriptContainerElement *)local_188._216_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._216_8_);
  }
  local_188._16_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_188._176_8_);
  return;
}

// ProcessBuffFloatingText @ 14b7bf7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::ProcessBuffFloatingText
          (UDS_FloatingTextAbility *this,ulong64 param_1,FDS_BuffInfo *param_2)

{
  EDS_BuffApplyType EVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FDS_BuffBaseTableRow *pFVar6;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *pFVar8;
  UObject *pUVar9;
  UDS_WindowManager *this_00;
  undefined8 *puVar10;
  ulong64 uVar11;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar12;
  ulong64 local_res10 [2];
  UDS_FloatingTextAbility *local_res20;
  TVector2<double>_u_0 local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel local_50;
  undefined1 *local_38;
  
  if ((((param_1 != 0) &&
       (local_res10[0] = param_1, pFVar6 = FDS_BuffBaseTableRow::Get((longlong)param_2->BuffID,true)
       , pFVar6 != (FDS_BuffBaseTableRow *)0x0)) && (pFVar6->ShowDamageFont != false)) &&
     (pFVar7 = FDS_EntityBase::GetEntityBase(local_res10), pFVar7 != (FDS_EntityBase *)0x0)) {
    pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_res20);
    bVar5 = FWeakObjectPtr::IsValid(pFVar8);
    if ((bVar5) && (pFVar7->bIsHiddenEntityActor != true)) {
      local_98 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,&local_res20);
      pUVar9 = FWeakObjectPtr::Get(pFVar8);
      lVar2 = *(longlong *)(pUVar9 + 0xb);
      local_68._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_68._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      FStack_60.DelegateAllocator._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      FStack_60.DelegateAllocator._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      FStack_60._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_68._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        local_68._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        FStack_60.DelegateAllocator._0_4_ = *(undefined4 *)(lVar2 + 0x218);
        FStack_60.DelegateAllocator._4_4_ = *(undefined4 *)(lVar2 + 0x21c);
        FStack_60._8_8_ = *(double *)(lVar2 + 0x220);
      }
      DS_Util::ProjectWorldToScreen((TVector<double> *)local_68,(TVector2<double> *)&local_98._s_0);
      EVar1 = param_2->BuffApplyType;
      dVar4 = ___xmm_4024000000000000c049000000000000;
      dVar3 = _UNK_152742b68;
      if (((EVar1 == Buff) || (EVar1 == UniqueBuff)) ||
         (dVar4 = ___xmm_c024000000000000c049000000000000, dVar3 = _UNK_152742b78, EVar1 == DeBuff))
      {
        dVar3 = local_98._s_0.Y + dVar3;
        local_98._8_4_ = SUB84(dVar3,0);
        local_98._s_0.X = local_98._s_0.X + dVar4;
        local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      }
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        local_88 = OnOpenBuffWindow;
        uStack_80 = 0;
        local_68 = (undefined1  [8])0x0;
        FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        FStack_60._8_8_ = FStack_60._8_8_ & 0xffffffff00000000;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_50);
        local_38 = local_68 + 8;
        puVar10 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)(local_68 + 8));
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &
                     ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___K_KH__6B_
          ;
          puVar10[1] = local_res10[0];
          puVar10[2] = param_2->TriggerEntityID;
          *(int *)(puVar10 + 3) = param_2->BuffID;
          uVar11 = FDelegateHandle::GenerateNewID();
          puVar10[4] = uVar11;
          *puVar10 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_FloatingTextAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy___K_KH__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_FloatingTextAbility *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar10[5] = 0;
          local_res20 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_FloatingTextAbility *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 5),(FObjectPtr)&local_res20);
          puVar10[6] = local_88;
          puVar10[7] = CONCAT44(uStack_7c,uStack_80);
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        pTVar12 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *
                             )&local_88,
                             (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *
                             )local_68);
        UDS_WindowManager::OpenWindow(this_00,BuffFont,pTVar12);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_88);
        if ((FStack_60.DelegateSize != 0) &&
           (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(local_68 + 8),0,0,0x10);
          FStack_60._8_8_ = FStack_60._8_8_ & 0xffffffff00000000;
        }
        if (local_78 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                     (FDestructionSentinel *)&local_88);
        }
        if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_68);
      }
    }
  }
  return;
}

// ProcessDamageFontFloatingText @ 14b7bfab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::ProcessDamageFontFloatingText
          (UDS_FloatingTextAbility *this,FDS_StruckInfo *param_1,ulong64 param_2)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FDS_EntityBase *pFVar6;
  FWeakObjectPtr *pFVar7;
  FDS_EntityBase *pFVar8;
  FDS_FloatingTextData *pFVar9;
  UObject *pUVar10;
  FDS_FloatingTextNumberData *pFVar11;
  EDS_NumberFontType EVar12;
  EDS_DamageFontType EVar13;
  float fVar14;
  bool local_res10 [8];
  undefined1 local_res20 [8];
  TVector2<double>_u_0 local_1a8;
  TVector<double>_u_0 local_198;
  FDS_FloatingTextInfo local_178;
  
  pFVar6 = FDS_EntityBase::GetEntityBase(&param_1->DefenderEntityID);
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    return;
  }
  pFVar7 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,local_res10);
  bVar4 = FWeakObjectPtr::IsValid(pFVar7);
  if (!bVar4) {
    return;
  }
  if (pFVar6->bIsHiddenEntityActor == true) {
    return;
  }
  pFVar8 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if ((pFVar8 != (FDS_EntityBase *)0x0) && (pFVar8->bIsHiddenEntityActor == true)) {
    return;
  }
  iVar1 = param_1->DamageInfo;
  uVar2 = param_1->DefenderEntityID;
  if (iVar1 == 10) {
    EVar13 = Hit;
  }
  else if (iVar1 == 0x15) {
    EVar13 = Critical;
  }
  else if (iVar1 == 1) {
    EVar13 = Dodge;
    if (uVar2 != param_2) {
      EVar13 = Miss;
    }
  }
  else if (iVar1 == 0xb) {
    EVar13 = Immune;
  }
  else if (iVar1 == 0xd) {
    EVar13 = PkGuard;
  }
  else if (iVar1 == 0x1f) {
    EVar13 = Immortal;
  }
  else if (iVar1 == 0xc) {
    EVar13 = Unbeatable;
  }
  else if (iVar1 == 0x16) {
    EVar13 = Smite;
  }
  else {
    if (iVar1 != 0x17) {
      return;
    }
    EVar13 = CriticalSmite;
  }
  local_res10[0] = uVar2 == param_2;
  FDS_FloatingTextInfo::FDS_FloatingTextInfo(&local_178);
  pFVar9 = UDS_FloatingTextDataAsset::GetDamageFontData(EVar13,uVar2 == param_2);
  local_178.FloatingTextData.FloatingTextWindowID = pFVar9->FloatingTextWindowID;
  FSlateBrush::operator=(&local_178.FloatingTextData.TextBrush,&pFVar9->TextBrush);
  local_178.FloatingTextData.TextBrushID = pFVar9->TextBrushID;
  local_178.FloatingTextData.TextEffectColor.field0_0x0._0_8_ =
       *(undefined8 *)&(pFVar9->TextEffectColor).field0_0x0;
  local_178.FloatingTextData.TextEffectColor.field0_0x0._8_8_ =
       *(undefined8 *)((longlong)&(pFVar9->TextEffectColor).field0_0x0 + 8);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&local_178.FloatingTextData.AnimationSequenceList,&pFVar9->AnimationSequenceList);
  pFVar7 = (FWeakObjectPtr *)(**(code **)(pFVar6->_padding_ + 0x150))(pFVar6,local_res20);
  pUVar10 = FWeakObjectPtr::Get(pFVar7);
  lVar3 = *(longlong *)(pUVar10 + 0xb);
  local_198._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_198._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_198._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_198._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_198._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar3 != 0) {
    local_198._0_4_ = *(undefined4 *)(lVar3 + 0x210);
    local_198._4_4_ = *(undefined4 *)(lVar3 + 0x214);
    local_198._8_4_ = *(undefined4 *)(lVar3 + 0x218);
    local_198._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
    local_198._s_0.Z = *(double *)(lVar3 + 0x220);
  }
  DS_Util::ProjectWorldToScreen
            ((TVector<double> *)&local_198._s_0,(TVector2<double> *)&local_1a8._s_0);
  if ((EVar13 - Smite & 0xfb) == 0) {
    uVar5 = rand();
    fVar14 = (float)(uVar5 & 0x7fff) * __real_3b480190 + __real_435c0000;
  }
  else {
    if ((EVar13 != Critical) && (EVar13 != CriticalSmite)) {
      uVar5 = rand();
      local_1a8._s_0.X =
           local_1a8._s_0.X + (double)((float)(uVar5 & 0x7fff) * ___real_3be601cc - __real_42f00000)
      ;
      uVar5 = rand();
      fVar14 = (float)(uVar5 & 0x7fff) * ___real_3b340168;
      goto LAB_14b7bfd50;
    }
    uVar5 = rand();
    fVar14 = (float)(uVar5 & 0x7fff) * __real_3b480190 + __real_437a0000;
  }
  local_1a8._s_0.X = local_1a8._s_0.X + (double)fVar14;
  uVar5 = rand();
  fVar14 = (float)(uVar5 & 0x7fff) * __real_3b480190;
LAB_14b7bfd50:
  local_1a8._s_0.Y = local_1a8._s_0.Y + (double)(fVar14 - __real_42c80000);
  local_178.FloatingTextScreenPosition.field0_0x0._s_0.X = local_1a8._s_0.X;
  if (uVar2 != param_2) {
    local_178.TargetEntityID = param_1->DefenderEntityID;
  }
  local_178.FloatingTextScreenPosition.field0_0x0._s_0.Y = local_1a8._s_0.Y;
  if (0 < param_1->Damage) {
    EVar12 = DamageHit;
    if (EVar13 != Hit) {
      if (EVar13 == Critical) {
        EVar12 = DamageCritical;
      }
      else if (EVar13 == Smite) {
        EVar12 = DamageSmite;
      }
      else if (EVar13 == CriticalSmite) {
        EVar12 = DamageCriticalSmite;
      }
    }
    pFVar11 = UDS_FloatingTextDataAsset::GetNumberFontData(EVar12,local_res10[0]);
    local_178.NumberData.FloatingTextWindowID = pFVar11->FloatingTextWindowID;
    local_178.NumberData.NumberFontType = pFVar11->NumberFontType;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&local_178.NumberData.AnimationSequenceList,&pFVar11->AnimationSequenceList);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&local_178.NumberData.IconIDs,&pFVar11->IconIDs);
    local_178.NumberValue = param_1->Damage;
  }
  OpenWindow(this,&local_178);
  if (local_178.NumberData.IconIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.NumberData.IconIDs.AllocatorInstance.Data);
  }
  if (local_178.NumberData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.NumberData.AnimationSequenceList.AllocatorInstance.Data);
  }
  if (local_178.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data);
  }
  local_178.FloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.FloatingTextData.TextBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  return;
}

// ProcessHealFloatingText @ 14b7bfe80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_FloatingTextAbility::ProcessHealFloatingText
          (UDS_FloatingTextAbility *this,ulong64 param_1,EDS_StatusType param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  FDS_EntityBase *pFVar4;
  FWeakObjectPtr *pFVar5;
  FDS_EntityBase *pFVar6;
  UDS_DataBase *this_00;
  ulong64 uVar7;
  UObject *pUVar8;
  FDS_FloatingTextNumberData *pFVar9;
  EDS_NumberFontType EVar10;
  ulong64 local_res10;
  TVector2<double>_u_0 local_198;
  undefined1 local_188 [8];
  TVector<double>_u_0 local_180;
  FDS_FloatingTextInfo local_168;
  
  local_res10 = param_1;
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    pFVar5 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_188);
    bVar2 = FWeakObjectPtr::IsValid(pFVar5);
    if ((((bVar2) && (pFVar4->bIsHiddenEntityActor != true)) &&
        ((pFVar6 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar6 == (FDS_EntityBase *)0x0 ||
         (pFVar6->bIsHiddenEntityActor != true)))) && (0 < param_3)) {
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      uVar7 = UDS_DataBase::GetEntityID(this_00);
      bVar2 = local_res10 == uVar7;
      if ((bVar2) || (param_2 != Mp)) {
        if (param_2 == Hp) {
          EVar10 = RecorveryHP;
        }
        else {
          EVar10 = RecorveryHP;
          if (param_2 == Mp) {
            EVar10 = RecorveryMP;
          }
        }
        FDS_FloatingTextInfo::FDS_FloatingTextInfo(&local_168);
        pFVar5 = (FWeakObjectPtr *)(**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,local_188);
        pUVar8 = FWeakObjectPtr::Get(pFVar5);
        lVar1 = *(longlong *)(pUVar8 + 0xb);
        local_180._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_180._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_180._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (lVar1 != 0) {
          local_180._s_0.Z = *(double *)(lVar1 + 0x220);
          local_180._s_0.X = *(double *)(lVar1 + 0x210);
          local_180._s_0.Y = *(double *)(lVar1 + 0x218);
        }
        DS_Util::ProjectWorldToScreen
                  ((TVector<double> *)&local_180._s_0,(TVector2<double> *)&local_198._s_0);
        uVar3 = rand();
        local_198._s_0.X =
             local_198._s_0.X +
             (double)((float)(uVar3 & 0x7fff) * __real_3ac80190 + __real_435c0000);
        uVar3 = rand();
        local_168.FloatingTextScreenPosition.field0_0x0._s_0.Y =
             local_198._s_0.Y +
             (double)(__real_c2c80000 - (float)(uVar3 & 0x7fff) * ___real_3bc80190);
        local_168.FloatingTextScreenPosition.field0_0x0._s_0.X = local_198._s_0.X;
        pFVar9 = UDS_FloatingTextDataAsset::GetNumberFontData(EVar10,bVar2);
        local_168.NumberData.FloatingTextWindowID = pFVar9->FloatingTextWindowID;
        local_168.NumberData.NumberFontType = pFVar9->NumberFontType;
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&local_168.NumberData.AnimationSequenceList,&pFVar9->AnimationSequenceList);
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  (&local_168.NumberData.IconIDs,&pFVar9->IconIDs);
        local_168.NumberValue = param_3;
        OpenWindow(this,&local_168);
        if (local_168.NumberData.IconIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.NumberData.IconIDs.AllocatorInstance.Data);
        }
        if (local_168.NumberData.AnimationSequenceList.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.NumberData.AnimationSequenceList.AllocatorInstance.Data);
        }
        if (local_168.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.FloatingTextData.AnimationSequenceList.AllocatorInstance.Data);
        }
        local_168.FloatingTextData.TextBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.FloatingTextData.TextBrush.ResourceHandle.Data.SharedReferenceCount.
                   ReferenceController);
      }
    }
  }
  return;
}

