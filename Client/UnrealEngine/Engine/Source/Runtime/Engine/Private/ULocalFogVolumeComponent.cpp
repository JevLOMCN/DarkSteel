// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// StaticClass @ 147892050

UClass * __cdecl ULocalFogVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalFogVolumeComponent",
               &Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton,
               StaticRegisterNativesULocalFogVolumeComponent,0x290,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULocalFogVolumeComponent>,
               InternalVTableHelperCtorCaller<ULocalFogVolumeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton;
}

// ULocalFogVolumeComponent @ 1478a9e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULocalFogVolumeComponent * __thiscall
ULocalFogVolumeComponent::ULocalFogVolumeComponent
          (ULocalFogVolumeComponent *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->RadialFogExtinction = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->HeightFogExtinction = 1.0;
  this->HeightFogFalloff = 1000.0;
  this->HeightFogOffset = 0.0;
  this->FogPhaseG = 0.2;
  (this->FogAlbedo).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::Black;
  this->FogSortPriority = 0;
  (this->FogEmissive).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// ULocalFogVolumeComponent @ 1478a9ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULocalFogVolumeComponent * __thiscall
ULocalFogVolumeComponent::ULocalFogVolumeComponent
          (ULocalFogVolumeComponent *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->RadialFogExtinction = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->HeightFogExtinction = 1.0;
  this->HeightFogFalloff = 1000.0;
  this->HeightFogOffset = 0.0;
  this->FogPhaseG = 0.2;
  (this->FogAlbedo).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::Black;
  this->FogSortPriority = 0;
  this->LocalFogVolumeSceneProxy = (FLocalFogVolumeSceneProxy *)0x0;
  (this->FogEmissive).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~ULocalFogVolumeComponent @ 1478ac170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULocalFogVolumeComponent::~ULocalFogVolumeComponent(ULocalFogVolumeComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// CreateRenderState_Concurrent @ 1478c1b40

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
ULocalFogVolumeComponent::CreateRenderState_Concurrent
          (ULocalFogVolumeComponent *this,FRegisterComponentContext *param_1)

{
  bool bVar1;
  FLocalFogVolumeSceneProxy *this_00;
  FLocalFogVolumeSceneProxy *pFVar2;
  UWorld *pUVar3;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  bVar1 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if (((this->_padding_ & 0x20) != 0) && (bVar1)) {
    bVar1 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
    if (bVar1) {
      bVar1 = USceneComponent::ShouldRender((USceneComponent *)this);
      if (((bVar1) && ((this->_padding_ & 1) != 0)) &&
         ((this->_padding_ == 0 || ((*(uint *)(this->_padding_ + 8) & 0x10) == 0)))) {
        this_00 = ::operator_new(0xa0);
        pFVar2 = (FLocalFogVolumeSceneProxy *)0x0;
        if (this_00 != (FLocalFogVolumeSceneProxy *)0x0) {
          pFVar2 = FLocalFogVolumeSceneProxy::FLocalFogVolumeSceneProxy(this_00,this);
        }
        this->LocalFogVolumeSceneProxy = pFVar2;
        pUVar3 = (UWorld *)this->_padding_;
        if (pUVar3 == (UWorld *)0x0) {
          pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
                    /* WARNING: Could not recover jumptable at 0x0001478c1be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pUVar3->Scene->_padding_ + 0x2b8))
                  (pUVar3->Scene,this->LocalFogVolumeSceneProxy);
        return;
      }
    }
  }
  return;
}

// CreateSceneProxy @ 1478c23c0

FLocalFogVolumeSceneProxy * __thiscall
ULocalFogVolumeComponent::CreateSceneProxy(ULocalFogVolumeComponent *this)

{
  FLocalFogVolumeSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(0xa0);
  if (pFVar1 != (FLocalFogVolumeSceneProxy *)0x0) {
    pFVar1 = FLocalFogVolumeSceneProxy::FLocalFogVolumeSceneProxy(pFVar1,this);
    return pFVar1;
  }
  return (FLocalFogVolumeSceneProxy *)0x0;
}

// DestroyRenderState_Concurrent @ 1478c3370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::DestroyRenderState_Concurrent(ULocalFogVolumeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLocalFogVolumeSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLocalFogVolumeSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  if (this->LocalFogVolumeSceneProxy != (FLocalFogVolumeSceneProxy *)0x0) {
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x2c0))(pUVar3->Scene,this->LocalFogVolumeSceneProxy);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ULocalFogVolumeComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->LocalFogVolumeSceneProxy;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ULocalFogVolumeComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ULocalFogVolumeComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroyLocalFogVolumeSceneProxyCommand80>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`ULocalFogVolumeComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroyLocalFogVolumeSceneProxyCommand80>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->LocalFogVolumeSceneProxy = (FLocalFogVolumeSceneProxy *)0x0;
  }
  return;
}

// GetPrivateStaticClass @ 1478d9770

UClass * __cdecl ULocalFogVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalFogVolumeComponent",
               &Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton,
               StaticRegisterNativesULocalFogVolumeComponent,0x290,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ULocalFogVolumeComponent>,
               InternalVTableHelperCtorCaller<ULocalFogVolumeComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalFogVolumeComponent.InnerSingleton;
}

// SendRenderTransformCommand @ 1478ed650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULocalFogVolumeComponent::SendRenderTransformCommand(ULocalFogVolumeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  FLocalFogVolumeSceneProxy *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_f8 = this->LocalFogVolumeSceneProxy;
  if (local_f8 != (FLocalFogVolumeSceneProxy *)0x0) {
    local_158 = (code *)this->_padding_;
    pcStack_150 = (code *)this->_padding_;
    local_148 = (code *)this->_padding_;
    pcStack_140 = (code *)this->_padding_;
    local_138 = (code *)this->_padding_;
    pcStack_130 = (code *)this->_padding_;
    local_128 = (code *)this->_padding_;
    pcStack_120 = (code *)this->_padding_;
    local_118 = (code *)this->_padding_;
    pcStack_110 = (code *)this->_padding_;
    local_108 = (code *)this->_padding_;
    pcStack_100 = (code *)this->_padding_;
    local_88[0] = (code *)0x0;
    local_e8 = local_158;
    pcStack_e0 = pcStack_150;
    local_d8 = local_148;
    pcStack_d0 = pcStack_140;
    local_c8 = local_138;
    pcStack_c0 = pcStack_130;
    local_b8 = local_128;
    pcStack_b0 = pcStack_120;
    local_a8 = local_118;
    pcStack_a0 = pcStack_110;
    local_98 = local_108;
    pcStack_90 = pcStack_100;
    local_60 = FMemory::Malloc(0x80,0x10);
    local_60[2] = (code *)local_f8;
    local_60[3] = pcStack_f0;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ULocalFogVolumeComponent::SendRenderTransformCommand'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[4] = local_158;
    local_60[5] = pcStack_150;
    local_60[6] = local_148;
    local_60[7] = pcStack_140;
    local_60[8] = local_138;
    local_60[9] = pcStack_130;
    local_60[10] = local_128;
    local_60[0xb] = pcStack_120;
    local_60[0xc] = local_118;
    local_60[0xd] = pcStack_110;
    local_60[0xe] = local_108;
    local_60[0xf] = pcStack_100;
    if (local_60 != (code **)0xfffffffffffffff0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ULocalFogVolumeComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ULocalFogVolumeComponent::SendRenderTransformCommand_::__l5::TSTR_FUpdateLocalFogVolumeSceneProxyTransformCommand36>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`ULocalFogVolumeComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateLocalFogVolumeSceneProxyTransformCommand36>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// SendRenderTransform_Concurrent @ 1478ed9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SendRenderTransform_Concurrent(ULocalFogVolumeComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_178 [32];
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  FLocalFogVolumeSceneProxy *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  local_f8 = this->LocalFogVolumeSceneProxy;
  if (local_f8 != (FLocalFogVolumeSceneProxy *)0x0) {
    local_158 = (code *)this->_padding_;
    pcStack_150 = (code *)this->_padding_;
    local_148 = (code *)this->_padding_;
    pcStack_140 = (code *)this->_padding_;
    local_138 = (code *)this->_padding_;
    pcStack_130 = (code *)this->_padding_;
    local_128 = (code *)this->_padding_;
    pcStack_120 = (code *)this->_padding_;
    local_118 = (code *)this->_padding_;
    pcStack_110 = (code *)this->_padding_;
    local_108 = (code *)this->_padding_;
    pcStack_100 = (code *)this->_padding_;
    local_88[0] = (code *)0x0;
    local_e8 = local_158;
    pcStack_e0 = pcStack_150;
    local_d8 = local_148;
    pcStack_d0 = pcStack_140;
    local_c8 = local_138;
    pcStack_c0 = pcStack_130;
    local_b8 = local_128;
    pcStack_b0 = pcStack_120;
    local_a8 = local_118;
    pcStack_a0 = pcStack_110;
    local_98 = local_108;
    pcStack_90 = pcStack_100;
    local_60 = FMemory::Malloc(0x80,0x10);
    local_60[2] = (code *)local_f8;
    local_60[3] = pcStack_f0;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`ULocalFogVolumeComponent::SendRenderTransformCommand'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[4] = local_158;
    local_60[5] = pcStack_150;
    local_60[6] = local_148;
    local_60[7] = pcStack_140;
    local_60[8] = local_138;
    local_60[9] = pcStack_130;
    local_60[10] = local_128;
    local_60[0xb] = pcStack_120;
    local_60[0xc] = local_118;
    local_60[0xd] = pcStack_110;
    local_60[0xe] = local_108;
    local_60[0xf] = pcStack_100;
    if (local_60 != (code **)0xfffffffffffffff0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ULocalFogVolumeComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ULocalFogVolumeComponent::SendRenderTransformCommand_::__l5::TSTR_FUpdateLocalFogVolumeSceneProxyTransformCommand36>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`ULocalFogVolumeComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateLocalFogVolumeSceneProxyTransformCommand36>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// SetFogAlbedo @ 1478f2570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetFogAlbedo(ULocalFogVolumeComponent *this,FLinearColor *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (((fVar5 = (param_1->field0_0x0)._s_0.R, fVar5 != (this->FogAlbedo).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->FogAlbedo).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->FogAlbedo).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->FogAlbedo).field0_0x0._s_0.A)))))) {
    fVar4 = (param_1->field0_0x0)._s_0.G;
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    fVar3 = (param_1->field0_0x0)._s_0.B;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    fVar2 = (param_1->field0_0x0)._s_0.A;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    (this->FogAlbedo).field0_0x0._s_0.R = fVar5;
    (this->FogAlbedo).field0_0x0._s_0.G = fVar4;
    (this->FogAlbedo).field0_0x0._s_0.B = fVar3;
    (this->FogAlbedo).field0_0x0._s_0.A = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetFogEmissive @ 1478f2690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetFogEmissive(ULocalFogVolumeComponent *this,FLinearColor *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (((fVar5 = (param_1->field0_0x0)._s_0.R, fVar5 != (this->FogEmissive).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->FogEmissive).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->FogEmissive).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->FogEmissive).field0_0x0._s_0.A)))))) {
    fVar4 = (param_1->field0_0x0)._s_0.G;
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    fVar3 = (param_1->field0_0x0)._s_0.B;
    if (__real_7e967699 <= fVar4) {
      fVar4 = __real_7e967699;
    }
    fVar2 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar2) {
      fVar2 = __real_7e967699;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    (this->FogEmissive).field0_0x0._s_0.R = fVar5;
    (this->FogEmissive).field0_0x0._s_0.G = fVar4;
    (this->FogEmissive).field0_0x0._s_0.B = fVar3;
    (this->FogEmissive).field0_0x0._s_0.A = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetFogPhaseG @ 1478f2800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ULocalFogVolumeComponent::SetFogPhaseG(ULocalFogVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->FogPhaseG)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->FogPhaseG = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetHeightFogExtinction @ 1478f2af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetHeightFogExtinction(ULocalFogVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->HeightFogExtinction)
     ) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->HeightFogExtinction = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetHeightFogFalloff @ 1478f2b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetHeightFogFalloff(ULocalFogVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->HeightFogFalloff)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->HeightFogFalloff = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetHeightFogOffset @ 1478f2bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetHeightFogOffset(ULocalFogVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->HeightFogOffset)) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->HeightFogOffset = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetRadialFogExtinction @ 1478f4960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULocalFogVolumeComponent::SetRadialFogExtinction(ULocalFogVolumeComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->RadialFogExtinction)
     ) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    this->RadialFogExtinction = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesULocalFogVolumeComponent @ 1478f8020

void __cdecl ULocalFogVolumeComponent::StaticRegisterNativesULocalFogVolumeComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_ULocalFogVolumeComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetFogAlbedo @ 14790cb80

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
ULocalFogVolumeComponent::execSetFogAlbedo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0xf].field_0xc ||
       (local_54 != *(float *)&param_1[0xf].field_0x10)) ||
      ((local_50 != *(float *)&param_1[0xf].field_0x14 ||
       (local_4c != *(float *)&param_1[0xf].field_0x18)))))) {
    if (__real_3f800000 <= local_58) {
      local_58 = __real_3f800000;
    }
    if (__real_3f800000 <= local_54) {
      local_54 = __real_3f800000;
    }
    if (__real_3f800000 <= local_50) {
      local_50 = __real_3f800000;
    }
    if (__real_3f800000 <= local_4c) {
      local_4c = __real_3f800000;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0xf].field_0xc = local_58;
    *(float *)&param_1[0xf].field_0x10 = local_54;
    *(float *)&param_1[0xf].field_0x14 = local_50;
    *(float *)&param_1[0xf].field_0x18 = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogEmissive @ 14790ce20

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
ULocalFogVolumeComponent::execSetFogEmissive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0xf].field_0x1c ||
       (local_54 != *(float *)&param_1[0xf].field_0x20)) ||
      ((local_50 != *(float *)&param_1[0xf].field_0x24 || (local_4c != *(float *)(param_1 + 0x10))))
      ))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0xf].field_0x1c = local_58;
    *(float *)&param_1[0xf].field_0x20 = local_54;
    *(float *)&param_1[0xf].field_0x24 = local_50;
    *(float *)(param_1 + 0x10) = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetFogPhaseG @ 14790d180

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
ULocalFogVolumeComponent::execSetFogPhaseG(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0xf].field_0x8)) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)&param_1[0xf].field_0x8 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHeightFogExtinction @ 14790d860

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
ULocalFogVolumeComponent::execSetHeightFogExtinction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0xe].field_0x24)) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)&param_1[0xe].field_0x24 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHeightFogFalloff @ 14790d930

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
ULocalFogVolumeComponent::execSetHeightFogFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)(param_1 + 0xf))) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0xf) = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHeightFogOffset @ 14790da00

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
ULocalFogVolumeComponent::execSetHeightFogOffset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0xf].field_0x4)) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)&param_1[0xf].field_0x4 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRadialFogExtinction @ 147910cf0

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
ULocalFogVolumeComponent::execSetRadialFogExtinction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float fVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar3 != *(float *)&param_1[0xe].field_0x20)) {
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)&param_1[0xe].field_0x20 = fVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

