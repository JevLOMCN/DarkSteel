// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 33

// StaticClass @ 14814f9f0

UClass * __cdecl UFXSystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemComponent",
               &Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton,
               StaticRegisterNativesUFXSystemComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFXSystemComponent>,
               InternalVTableHelperCtorCaller<UFXSystemComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton;
}

// UFXSystemComponent @ 14815b140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFXSystemComponent * __thiscall
UFXSystemComponent::UFXSystemComponent(UFXSystemComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->ParticlePerfStats = (FParticlePerfStats *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// UFXSystemComponent @ 14815b1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UFXSystemComponent * __thiscall
UFXSystemComponent::UFXSystemComponent(UFXSystemComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->ParticlePerfStats = (FParticlePerfStats *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UFXSystemComponent @ 1481603a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UFXSystemComponent::~UFXSystemComponent(UFXSystemComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// ActivateSystem @ 148164760

void __thiscall UFXSystemComponent::ActivateSystem(UFXSystemComponent *this,bool param_1)

{
  return;
}

// DeactivateImmediate @ 14816e990

void __thiscall UFXSystemComponent::DeactivateImmediate(UFXSystemComponent *this)

{
  return;
}

// GetApproxMemoryUsage @ 148176e50

uint __thiscall UFXSystemComponent::GetApproxMemoryUsage(UFXSystemComponent *this)

{
  return 0;
}

// GetFXSystemAsset @ 148179dc0

UFXSystemAsset * __thiscall UFXSystemComponent::GetFXSystemAsset(UFXSystemComponent *this)

{
  return (UFXSystemAsset *)0x0;
}

// GetPrivateStaticClass @ 14817d030

UClass * __cdecl UFXSystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FXSystemComponent",
               &Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton,
               StaticRegisterNativesUFXSystemComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFXSystemComponent>,
               InternalVTableHelperCtorCaller<UFXSystemComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFXSystemComponent.InnerSingleton;
}

// PrecacheAssetPSOs @ 14818cef0

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

void __thiscall
UFXSystemComponent::PrecacheAssetPSOs(UFXSystemComponent *this,UFXSystemAsset *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  byte *pbVar4;
  TRefCountPtr<FBaseGraphTask> *pTVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined1 auStackY_c8 [32];
  TRefCountPtr<FBaseGraphTask> local_78;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar11 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar11,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     ((bVar8 = IsComponentPSOPrecachingEnabled(), bVar8 && (param_1 != (UFXSystemAsset *)0x0)))) {
    local_78.Reference = (param_1->PrecachePSOsEvent).Reference;
    if (local_78.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_78.Reference)->field_0x30 = *(int *)&(local_78.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    bVar8 = IsInGameThread();
    if (((!bVar8) && (bVar8 = IsInParallelGameThread(), !bVar8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread() || IsInParallelGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                           ,0x146,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar3 = &this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)plVar3,0,piVar1);
    }
    pbVar4 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar4 = *pbVar4 & 0xcf;
    if ((local_78.Reference == (FBaseGraphTask *)0x0) || ((local_78.Reference)->field_0xd0 != '\0'))
    {
      local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 4;
    }
    else {
      local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 4;
      if (((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)plVar3 ==
           &param_1->MaterialPSOPrecacheRequestIDs) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar6 = (param_1->MaterialPSOPrecacheRequestIDs).ArrayNum;
      if (iVar6 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar6,(ForAnyElementType *)plVar3,(int *)&this->_padding_,piVar1);
        memcpy((void *)(*plVar3 + (longlong)iVar9 * 4),
               (param_1->MaterialPSOPrecacheRequestIDs).AllocatorInstance.Data,(longlong)iVar6 << 2)
        ;
      }
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_70.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar10 <= &local_78) {
        FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
        if (local_70.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar10 = local_70.AllocatorInstance.SecondaryData;
        }
        if ((&local_78 <
             (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar10 + (longlong)local_70.ArrayMax * 8))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      lVar12 = (longlong)local_70.ArrayNum;
      FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar10 = local_70.AllocatorInstance.SecondaryData;
      }
      local_70.ArrayNum = local_70.ArrayNum + 1;
      pTVar5 = (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar10 + lVar12 * 8);
      pTVar5->Reference = (FBaseGraphTask *)0x0;
      pTVar5->Reference = local_78.Reference;
      if (local_78.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_78.Reference)->field_0x30 = *(int *)&(local_78.Reference)->field_0x30 + 1;
        UNLOCK();
      }
    }
    UPrimitiveComponent::RequestRecreateRenderStateWhenPSOPrecacheFinished
              ((UPrimitiveComponent *)this,&local_70);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar10 = local_70.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar10,local_70.ArrayNum);
    if (local_70.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_78.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &(local_78.Reference)->field_0x30;
      iVar6 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (local_78.Reference != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_78.Reference)(local_78.Reference,1);
      }
    }
  }
  return;
}

// ReleaseToPool @ 14818f210

void __thiscall UFXSystemComponent::ReleaseToPool(UFXSystemComponent *this)

{
  return;
}

// RequiresLWCTileRecache @ 148191980

bool __cdecl
UFXSystemComponent::RequiresLWCTileRecache(TVector<float> *param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<float>_u_0 local_48;
  TVector<double>_u_0 local_38 [2];
  
  fVar1 = GFXLWCTileRecache;
  if (0.0 < GFXLWCTileRecache) {
    local_38[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_38[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_38[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    TLargeWorldRenderScalar<double>::GetTileFor
              ((TVector<float> *)&local_48._s_0,(TVector<double> *)&local_38[0]._s_0);
    fVar3 = (float)((uint)((param_1->field0_0x0)._s_0.Y - local_48._s_0.Y) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar2 = (float)((uint)((param_1->field0_0x0)._s_0.X - local_48._s_0.X) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = (float)((uint)((param_1->field0_0x0)._s_0.Z - local_48._s_0.Z) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
    return fVar1 <= fVar3;
  }
  return false;
}

// SetActorParameter @ 148194e50

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
UFXSystemComponent::SetActorParameter(UFXSystemComponent *this,FName param_1,AActor *param_2)

{
  return;
}

// SetAutoAttachmentParameters @ 148195160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UFXSystemComponent::SetAutoAttachmentParameters
          (UFXSystemComponent *this,USceneComponent *param_1,FName param_2,EAttachmentRule param_3,
          EAttachmentRule param_4,EAttachmentRule param_5)

{
  return;
}

// SetBoolParameter @ 148195770

void __thiscall
UFXSystemComponent::SetBoolParameter(UFXSystemComponent *this,FName param_1,bool param_2)

{
  return;
}

// SetColorParameter @ 1481957b0

void __thiscall
UFXSystemComponent::SetColorParameter(UFXSystemComponent *this,FName param_1,FLinearColor *param_2)

{
  return;
}

// SetEmitterEnable @ 148195c70

void __thiscall
UFXSystemComponent::SetEmitterEnable(UFXSystemComponent *this,FName param_1,bool param_2)

{
  return;
}

// SetFloatParameter @ 148195d80

void __thiscall
UFXSystemComponent::SetFloatParameter(UFXSystemComponent *this,FName param_1,float param_2)

{
  return;
}

// SetIntParameter @ 148196390

void __thiscall
UFXSystemComponent::SetIntParameter(UFXSystemComponent *this,FName param_1,int param_2)

{
  return;
}

// SetUseAutoManageAttachment @ 1481983b0

void __thiscall
UFXSystemComponent::SetUseAutoManageAttachment(UFXSystemComponent *this,bool param_1)

{
  return;
}

// SetVectorParameter @ 1481983e0

void __thiscall
UFXSystemComponent::SetVectorParameter
          (UFXSystemComponent *this,FName param_1,TVector<double> *param_2)

{
  return;
}

// StaticRegisterNativesUFXSystemComponent @ 1481a1b60

void __cdecl UFXSystemComponent::StaticRegisterNativesUFXSystemComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UFXSystemComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFXSystemAsset @ 1481b6bb0

void __cdecl
UFXSystemComponent::execGetFXSystemAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0xac0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execReleaseToPool @ 1481b6ce0

void __cdecl UFXSystemComponent::execReleaseToPool(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001481b6cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xae0))();
  return;
}

// execSetActorParameter @ 1481b6d10

void __cdecl
UFXSystemComponent::execSetActorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xab8))(param_1,local_res8,local_res10);
  return;
}

// execSetAutoAttachmentParameters @ 1481b6f40

void __cdecl
UFXSystemComponent::execSetAutoAttachmentParameters(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xad0))
            (param_1,local_20,local_28,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execSetBoolParameter @ 1481b78b0

void __cdecl
UFXSystemComponent::execSetBoolParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSetColorParameter @ 1481b7990

void __cdecl
UFXSystemComponent::execSetColorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xab0))(param_1,local_res8,&local_18);
  return;
}

// execSetEmitterEnable @ 1481b7a70

void __cdecl
UFXSystemComponent::execSetEmitterEnable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0xac8))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSetFloatParameter @ 1481b7b50

void __cdecl
UFXSystemComponent::execSetFloatParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xaa0))(param_1,local_res10,local_res8[0]);
  return;
}

// execSetIntParameter @ 1481b7c30

void __cdecl UFXSystemComponent::execSetIntParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xa98))(param_1,local_res10,local_res8[0]);
  return;
}

// execSetUseAutoManageAttachment @ 1481b83b0

void __cdecl
UFXSystemComponent::execSetUseAutoManageAttachment(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0xad8))(param_1,local_res8[0] != 0);
  return;
}

// execSetVectorParameter @ 1481b8450

void __cdecl
UFXSystemComponent::execSetVectorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0xaa8))(param_1,local_res8,&local_28);
  return;
}

