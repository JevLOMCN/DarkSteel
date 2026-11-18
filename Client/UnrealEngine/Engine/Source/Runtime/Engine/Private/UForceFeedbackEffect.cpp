// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147ba7620

UClass * __cdecl UForceFeedbackEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackEffect",
               &Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton,
               StaticRegisterNativesUForceFeedbackEffect,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UForceFeedbackEffect>,
               InternalVTableHelperCtorCaller<UForceFeedbackEffect>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton;
}

// UForceFeedbackEffect @ 147bbc700

UForceFeedbackEffect * __thiscall
UForceFeedbackEffect::UForceFeedbackEffect(UForceFeedbackEffect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UForceFeedbackEffect__6B_;
  (this->ChannelDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelDetails).ArrayNum = 0;
  (this->ChannelDetails).ArrayMax = 0;
  *(undefined8 *)&this->PerDeviceOverrides = 0;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x48 = 0;
  (this->DeviceProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProperties).ArrayNum = 0;
  (this->DeviceProperties).ArrayMax = 0;
  return this;
}

// UForceFeedbackEffect @ 147bbc770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UForceFeedbackEffect * __thiscall
UForceFeedbackEffect::UForceFeedbackEffect(UForceFeedbackEffect *this,FObjectInitializer *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  UForceFeedbackEffect *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_108 [32];
  uint *local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  uint local_b8 [2];
  undefined1 local_b0 [72];
  void *local_68;
  undefined4 local_60;
  void *local_58;
  ForAnyElementType local_40;
  TObjectPtr<UCurveFloat>_u_0 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  UObject::UObject((UObject *)this,param_1);
  local_b8[0] = local_b8[0] | 0xf;
  this->_padding_ = (longlong)&___7UForceFeedbackEffect__6B_;
  (this->ChannelDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelDetails).ArrayNum = 0;
  (this->ChannelDetails).ArrayMax = 0;
  *(undefined8 *)&this->PerDeviceOverrides = 0;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->PerDeviceOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x48 = 0;
  (this->DeviceProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceProperties).ArrayNum = 0;
  (this->DeviceProperties).ArrayMax = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)local_b0);
  pFVar9 = (this->ChannelDetails).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)local_b8) &&
     (lVar8 = (longlong)(this->ChannelDetails).ArrayMax,
     (FScriptContainerElement *)local_b8 < pFVar9 + lVar8 * 0x90)) {
    local_d0 = (longlong)(this->ChannelDetails).ArrayNum;
    local_c8 = 0x90;
    local_e8 = local_b8;
    local_e0 = pFVar9;
    local_d8 = lVar8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar7 = (UForceFeedbackEffect *)(*pcVar2)();
      return pUVar7;
    }
  }
  iVar4 = (this->ChannelDetails).ArrayNum;
  if (iVar4 == (this->ChannelDetails).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&(this->ChannelDetails).AllocatorInstance,
                       &(this->ChannelDetails).ArrayMax);
  }
  pFVar9 = (this->ChannelDetails).AllocatorInstance.Data;
  (this->ChannelDetails).ArrayNum = iVar4 + 1;
  uVar5 = local_b8[0] & 1;
  pFVar9 = pFVar9 + (longlong)iVar4 * 0x90;
  uVar1 = *(uint *)pFVar9;
  *(uint *)pFVar9 = uVar1 & 0xfffffffe | uVar5;
  uVar6 = local_b8[0] & 2;
  *(uint *)pFVar9 = uVar1 & 0xfffffffc | uVar5 | uVar6;
  *(uint *)pFVar9 = uVar1 & 0xfffffff8 | uVar5 | uVar6 | local_b8[0] & 4;
  *(uint *)pFVar9 = uVar1 & 0xfffffff0 | uVar5 | uVar6 | local_b8[0] & 4 | local_b8[0] & 8;
  FRichCurve::FRichCurve((FRichCurve *)(pFVar9 + 8),(FRichCurve *)local_b0);
  ((TObjectPtr<UCurveFloat>_u_0 *)(pFVar9 + 0x88))->DebugPtr = (UCurveFloat *)local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_30.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_30.DebugPtr);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  local_b0._0_8_ = &___7FIndexedCurve__6B_;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_b0 + 8));
  return this;
}

// ~UForceFeedbackEffect @ 147bbf3f0

void __thiscall UForceFeedbackEffect::~UForceFeedbackEffect(UForceFeedbackEffect *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UForceFeedbackEffect__6B_;
  pFVar1 = (this->DeviceProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PerDeviceOverrides).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PerDeviceOverrides).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FForceFeedbackEffectOverridenChannelDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FForceFeedbackEffectOverridenChannelDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FForceFeedbackEffectOverridenChannelDetails>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerDeviceOverrides);
  DestructItems<FForceFeedbackChannelDetails,int>
            ((FForceFeedbackChannelDetails *)(this->ChannelDetails).AllocatorInstance.Data,
             (this->ChannelDetails).ArrayNum);
  pFVar1 = (this->ChannelDetails).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetCurrentChannelDetails @ 147bdf610

TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> * __thiscall
UForceFeedbackEffect::GetCurrentChannelDetails(UForceFeedbackEffect *this,FPlatformUserId param_1)

{
  UInputDeviceSubsystem *this_00;
  TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  FHardwareDeviceIdentifier local_28;
  
  this_00 = UInputDeviceSubsystem::Get();
  pTVar2 = &this->ChannelDetails;
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    pTVar1 = &TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
              ::Find((TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
                      *)&this->PerDeviceOverrides,local_28.HardwareDeviceIdentifier)->ChannelDetails
    ;
    if (pTVar1 != (TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar2 = pTVar1;
    }
  }
  return pTVar2;
}

// GetDuration @ 147bdfb00

float __thiscall UForceFeedbackEffect::GetDuration(UForceFeedbackEffect *this)

{
  float *pfVar1;
  FPlatformUserId FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IPlatformInputDeviceMapper *pIVar6;
  int *piVar7;
  UInputDeviceSubsystem *this_00;
  TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *pTVar8;
  FRichCurve *this_01;
  int iVar9;
  uint uVar10;
  float fVar11;
  float local_res8 [2];
  undefined1 local_res10 [8];
  float local_res18 [4];
  FHardwareDeviceIdentifier local_48;
  
  pfVar1 = &this->Duration;
  if ((__real_322bcc77 < *pfVar1 || __real_322bcc77 == *pfVar1) &&
     (!UE::Input::Private::bShouldAlwaysEvaluateForceFeedbackDuration)) {
    return *pfVar1;
  }
  *pfVar1 = 0.0;
  pIVar6 = IPlatformInputDeviceMapper::Get();
  piVar7 = (int *)(**(code **)(pIVar6->_padding_ + 0x50))(pIVar6,local_res10);
  FVar2.InternalId = *piVar7;
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_48,FVar2);
    pTVar8 = &TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
              ::Find((TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
                      *)&this->PerDeviceOverrides,local_48.HardwareDeviceIdentifier)->ChannelDetails
    ;
    if (pTVar8 != (TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_147bdfb97;
  }
  pTVar8 = &this->ChannelDetails;
LAB_147bdfb97:
  iVar9 = pTVar8->ArrayNum;
  uVar10 = 0;
  if (iVar9 < 1) {
    fVar11 = this->Duration;
  }
  else {
    do {
      uVar5 = 0;
      if ((int)uVar10 < iVar9) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar11 = (float)(*pcVar3)();
        return fVar11;
      }
      this_01 = FRuntimeFloatCurve::GetRichCurveConst
                          ((FRuntimeFloatCurve *)
                           ((((TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)
                             &pTVar8->AllocatorInstance)->AllocatorInstance).Data +
                           (longlong)(int)uVar10 * 0x90 + 8));
      FRichCurve::GetTimeRange(this_01,local_res18,local_res8);
      if (*pfVar1 <= local_res8[0] && local_res8[0] != *pfVar1) {
        *pfVar1 = local_res8[0];
      }
      iVar9 = pTVar8->ArrayNum;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar9);
    fVar11 = this->Duration;
  }
  return fVar11;
}

// GetPrivateStaticClass @ 147be5160

UClass * __cdecl UForceFeedbackEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackEffect",
               &Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton,
               StaticRegisterNativesUForceFeedbackEffect,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UForceFeedbackEffect>,
               InternalVTableHelperCtorCaller<UForceFeedbackEffect>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackEffect.InnerSingleton;
}

// GetTotalDevicePropertyDuration @ 147bebf30

float __thiscall UForceFeedbackEffect::GetTotalDevicePropertyDuration(UForceFeedbackEffect *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DeviceProperties).AllocatorInstance.Data;
  iVar2 = (this->DeviceProperties).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  fVar5 = 0.0;
  while( true ) {
    if ((this->DeviceProperties).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UInputDeviceProperty>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    fVar4 = fVar5;
    if ((*(longlong **)pFVar3 != (longlong *)0x0) &&
       (fVar4 = (float)(**(code **)(**(longlong **)pFVar3 + 0x2d0))(), fVar4 <= fVar5)) {
      fVar4 = fVar5;
    }
    pFVar3 = pFVar3 + 8;
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetValues @ 147bec9b0

void __thiscall
UForceFeedbackEffect::GetValues
          (UForceFeedbackEffect *this,float param_1,FForceFeedbackValues *param_2,
          FPlatformUserId param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  UInputDeviceSubsystem *this_00;
  TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *pTVar6;
  FRichCurve *this_01;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  FHardwareDeviceIdentifier local_68 [4];
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,local_68,param_3);
    pTVar6 = &TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
              ::Find((TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
                      *)&this->PerDeviceOverrides,local_68[0].HardwareDeviceIdentifier)->
              ChannelDetails;
    if (pTVar6 != (TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_147beca0c;
  }
  pTVar6 = &this->ChannelDetails;
LAB_147beca0c:
  fVar3 = __real_3f800000;
  iVar7 = pTVar6->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (((TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)
                &pTVar6->AllocatorInstance)->AllocatorInstance).Data;
      this_01 = FRuntimeFloatCurve::GetRichCurveConst((FRuntimeFloatCurve *)(pFVar1 + lVar8 + 8));
      fVar10 = FRichCurve::Eval(this_01,param_1,0.0);
      fVar11 = fVar10 * param_4;
      if (fVar3 <= fVar10 * param_4) {
        fVar11 = fVar3;
      }
      if (((byte)pFVar1[lVar8] & 1) != 0) {
        fVar10 = param_2->LeftLarge;
        if (param_2->LeftLarge <= fVar11) {
          fVar10 = fVar11;
        }
        param_2->LeftLarge = fVar10;
      }
      if (((byte)pFVar1[lVar8] & 2) != 0) {
        fVar10 = fVar11;
        if (fVar11 <= param_2->LeftSmall) {
          fVar10 = param_2->LeftSmall;
        }
        param_2->LeftSmall = fVar10;
      }
      if (((byte)pFVar1[lVar8] & 4) != 0) {
        fVar10 = param_2->RightLarge;
        if (param_2->RightLarge <= fVar11) {
          fVar10 = fVar11;
        }
        param_2->RightLarge = fVar10;
      }
      if (((byte)pFVar1[lVar8] & 8) != 0) {
        fVar10 = param_2->RightSmall;
        if (param_2->RightSmall <= fVar11) {
          fVar10 = fVar11;
        }
        param_2->RightSmall = fVar10;
      }
      iVar7 = pTVar6->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// StaticRegisterNativesUForceFeedbackEffect @ 147c035e0

void __cdecl UForceFeedbackEffect::StaticRegisterNativesUForceFeedbackEffect(void)

{
  return;
}

