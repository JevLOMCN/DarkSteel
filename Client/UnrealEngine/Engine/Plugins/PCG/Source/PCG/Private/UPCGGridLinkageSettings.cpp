// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c96720

UClass * __cdecl UPCGGridLinkageSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGridLinkageSettings",
               &Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton,
               StaticRegisterNativesUPCGGridLinkageSettings,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGridLinkageSettings>,
               InternalVTableHelperCtorCaller<UPCGGridLinkageSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149c97300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGGridLinkageContext * __cdecl
`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FPCGInitializeElementParams *param_1)

{
  FPCGGridLinkageContext *this;
  
  this = ::operator_new(0x260);
  if (this != (FPCGGridLinkageContext *)0x0) {
    memset(this,0,0x260);
    FPCGContext::FPCGContext((FPCGContext *)this);
    this->bScheduledGraph = false;
    this->_padding_ = (longlong)&___7FPCGGridLinkageContext__6B_;
    return this;
  }
  return (FPCGGridLinkageContext *)0x0;
}

// UPCGGridLinkageSettings @ 149ca4630

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGridLinkageSettings * __thiscall
UPCGGridLinkageSettings::UPCGGridLinkageSettings
          (UPCGGridLinkageSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->UpstreamPin).SoftObjectPtr.field_0x18;
  this->FromGrid = Uninitialized;
  this->ToGrid = Uninitialized;
  this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
  (this->ResourceKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceKey).Data.ArrayNum = 0;
  (this->ResourceKey).Data.ArrayMax = 0;
  this->GenerationGrid = Uninitialized;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->UpstreamPin).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UPCGGridLinkageSettings @ 149ca46d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGridLinkageSettings * __thiscall
UPCGGridLinkageSettings::UPCGGridLinkageSettings(UPCGGridLinkageSettings *this)

{
  undefined1 *this_00;
  FObjectInitializer *pFVar1;
  undefined8 local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this_00 = &(this->UpstreamPin).SoftObjectPtr.field_0x18;
  this->FromGrid = Uninitialized;
  this->ToGrid = Uninitialized;
  this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
  (this->ResourceKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceKey).Data.ArrayNum = 0;
  (this->ResourceKey).Data.ArrayMax = 0;
  this->GenerationGrid = Uninitialized;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UpstreamPin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->UpstreamPin).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UPCGGridLinkageSettings @ 149ca66e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall UPCGGridLinkageSettings::~UPCGGridLinkageSettings(UPCGGridLinkageSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
  pvVar1 = *(void **)&(this->UpstreamPin).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ResourceKey).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149cb91f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGridLinkageSettings::CreateElement
          (UPCGGridLinkageSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  UClass *pUVar5;
  FName FVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<IPCGElement,1> *pTVar8;
  undefined ***pppuVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 auStackY_108 [32];
  FGCScopeGuard local_c8 [4];
  undefined8 local_c4;
  UPCGGridLinkageSettings *local_b8;
  FName FStack_b0;
  FName local_a8;
  code *local_98 [2];
  undefined **local_88;
  UPCGGridLinkageSettings *local_80;
  FName FStack_78;
  undefined8 local_70;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FGCScopeGuard::FGCScopeGuard(local_c8);
  FVar4 = (FName)TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&this->UpstreamPin);
  if (FVar4 != (FName)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGPin_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(((UPCGPin *)FVar4)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((UPCGPin *)FVar4)->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      FGCScopeGuard::~FGCScopeGuard(local_c8);
      FVar6 = (((UPCGPin *)FVar4)->Properties).Label;
      local_a8 = FVar6;
      goto LAB_149cb9285;
    }
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FGCScopeGuard::~FGCScopeGuard(local_c8);
  local_c4 = 0;
  FVar4 = FVar6;
LAB_149cb9285:
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_40 = (undefined ***)0x0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6APEAUFPCGGridLinkageContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),FPCGContext_*,FPCGInitializeElementParams_const_&>
                ::Call;
  local_b8 = this;
  FStack_b0 = FVar6;
  pTVar7 = ::operator_new(0xf0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGGridLinkageElement_PCGGraphExecutor___00_SharedPointerInternals__6B_
    ;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,bool,FPCGContext_*>
                  ::Call;
    local_70 = 0;
    local_80 = local_b8;
    FStack_78 = FStack_b0;
    PCGGraphExecutor::FPCGGridLinkageElement::FPCGGridLinkageElement
              ((FPCGGridLinkageElement *)(pTVar7 + 1),
               (TFunction<bool___cdecl(FPCGContext_*)> *)local_98,
               (TFunction<FPCGContext_*___cdecl(FPCGInitializeElementParams_const_&)> *)local_68,
               this->FromGrid,this->ToGrid,this->GenerationGrid,&this->ResourceKey,(UPCGPin *)FVar4)
    ;
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSharedPtr<IPCGElement,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (local_68[0] != (code *)0x0) {
    pppuVar9 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar9 = local_40;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149ccba40

UClass * __cdecl UPCGGridLinkageSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGridLinkageSettings",
               &Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton,
               StaticRegisterNativesUPCGGridLinkageSettings,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGridLinkageSettings>,
               InternalVTableHelperCtorCaller<UPCGGridLinkageSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGGridLinkageSettings @ 149cdd470

void __cdecl UPCGGridLinkageSettings::StaticRegisterNativesUPCGGridLinkageSettings(void)

{
  return;
}

