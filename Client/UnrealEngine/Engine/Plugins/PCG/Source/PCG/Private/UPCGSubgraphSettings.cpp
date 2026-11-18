// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// GetOriginalSubgraphInterface @ 149c24be0

UPCGGraphInterface * __thiscall
UPCGSubgraphSettings::GetOriginalSubgraphInterface(UPCGSubgraphSettings *this)

{
  return (UPCGGraphInterface *)(this->SubgraphInstance).field0_0x0.DebugPtr;
}

// StaticClass @ 149c35090

UClass * __cdecl UPCGSubgraphSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubgraphSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGSubgraphSettings>,aFStackX_8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton;
}

// UPCGSubgraphSettings @ 149f33520

UPCGSubgraphSettings * __thiscall
UPCGSubgraphSettings::UPCGSubgraphSettings(UPCGSubgraphSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSubgraphSettings__6B_;
  (this->SubgraphInstance).field0_0x0.DebugPtr = (UPCGGraphInstance *)0x0;
  (this->SubgraphOverride).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  return this;
}

// UPCGSubgraphSettings @ 149f33560

UPCGSubgraphSettings * __thiscall
UPCGSubgraphSettings::UPCGSubgraphSettings(UPCGSubgraphSettings *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPCGGraphInstance *pUVar4;
  FName local_res8;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSubgraphSettings__6B_;
  (this->SubgraphInstance).field0_0x0.DebugPtr = (UPCGGraphInstance *)0x0;
  (this->SubgraphOverride).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"PCGSubgraphInstance");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UPCGGraphInstance_NoRegister();
  pUVar4 = (UPCGGraphInstance *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGGraphInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SubgraphInstance).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UPCGSubgraphSettings @ 149f34d60

void __thiscall UPCGSubgraphSettings::~UPCGSubgraphSettings(UPCGSubgraphSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGBaseSubgraphSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149f411b0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSubgraphSettings::CreateElement
          (UPCGSubgraphSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGSubgraphElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSubgraphElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateNode @ 149f41480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGNode * __thiscall UPCGSubgraphSettings::CreateNode(UPCGSubgraphSettings *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGNode *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UPCGSubgraphNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UPCGNode *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// GetAdditionalTitleInformation @ 149f47140

FString * __thiscall
UPCGSubgraphSettings::GetAdditionalTitleInformation
          (UPCGSubgraphSettings *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  longlong lVar2;
  FText *this_00;
  FString *pFVar3;
  FName local_res8 [4];
  FText local_18;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4f0))();
  if ((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1), lVar2 != 0)) {
    local_res8[0] = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(local_res8,(FString *)&local_18);
    ::FName::NameToDisplayString(__return_storage_ptr__,(FString *)&local_18,false);
    if (local_18.TextData.Reference == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_18.TextData.Reference);
    return __return_storage_ptr__;
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"PCGSubgraphElement",L"NodeTitleExtendedInvalidSubgraph",
                       L"Missing Subgraph");
  pFVar3 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4e250

UClass * __cdecl UPCGSubgraphSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubgraphSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGSubgraphSettings>,local_res8,
               UPCGBaseSubgraphSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubgraphSettings.InnerSingleton;
}

// GetSubgraphInterface @ 149f4f3f0

UPCGGraphInterface * __thiscall
UPCGSubgraphSettings::GetSubgraphInterface(UPCGSubgraphSettings *this)

{
  UPCGGraphInstance *pUVar1;
  
  pUVar1 = (UPCGGraphInstance *)(this->SubgraphOverride).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    pUVar1 = (this->SubgraphInstance).field0_0x0.DebugPtr;
  }
  return (UPCGGraphInterface *)pUVar1;
}

// IsDynamicGraph @ 149f520d0

bool __thiscall UPCGSubgraphSettings::IsDynamicGraph(UPCGSubgraphSettings *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FPCGSettingsOverridableParam *pFVar5;
  UPCGPin *this_00;
  UPCGNode *this_01;
  FName local_res8;
  
  this_01 = (UPCGNode *)this->_padding_;
  if (this_01 != (UPCGNode *)0x0) {
    pUVar3 = UPCGNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_149f5213e;
  }
  if (this->_padding_ == 0) {
    return false;
  }
  this_01 = *(UPCGNode **)(this->_padding_ + 0x20);
  if (this_01 == (UPCGNode *)0x0) {
    return false;
  }
  pUVar3 = UPCGNode::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(this_01->_padding_ + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return false;
  }
LAB_149f5213e:
  pFVar4 = ::FName::FName(&local_res8,0x10,L"SubgraphOverride",FNAME_Add);
  pFVar5 = TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UPCGSubgraphSettings::IsSubgraphOverridden_::__l2::<lambda_1>_>
                     ((TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,(<lambda_1>)*pFVar4);
  if ((pFVar5 != (FPCGSettingsOverridableParam *)0x0) &&
     (this_00 = UPCGNode::GetInputPin(this_01,&pFVar5->Label), this_00 != (UPCGPin *)0x0)) {
    bVar2 = UPCGPin::IsConnected(this_00);
    return bVar2;
  }
  return false;
}

// IsSubgraphOverridden @ 149f52be0

bool __thiscall UPCGSubgraphSettings::IsSubgraphOverridden(UPCGSubgraphSettings *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FPCGSettingsOverridableParam *pFVar5;
  UPCGPin *this_00;
  UPCGNode *this_01;
  FName local_res8;
  
  this_01 = (UPCGNode *)this->_padding_;
  if (this_01 != (UPCGNode *)0x0) {
    pUVar3 = UPCGNode::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_149f52c4e;
  }
  if (this->_padding_ == 0) {
    return false;
  }
  this_01 = *(UPCGNode **)(this->_padding_ + 0x20);
  if (this_01 == (UPCGNode *)0x0) {
    return false;
  }
  pUVar3 = UPCGNode::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(this_01->_padding_ + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_) {
    return false;
  }
LAB_149f52c4e:
  pFVar4 = ::FName::FName(&local_res8,0x10,L"SubgraphOverride",FNAME_Add);
  pFVar5 = TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UPCGSubgraphSettings::IsSubgraphOverridden_::__l2::<lambda_1>_>
                     ((TArray<FPCGSettingsOverridableParam,TSizedDefaultAllocator<32>_> *)
                      &this->_padding_,(<lambda_1>)*pFVar4);
  if ((pFVar5 != (FPCGSettingsOverridableParam *)0x0) &&
     (this_00 = UPCGNode::GetInputPin(this_01,&pFVar5->Label), this_00 != (UPCGPin *)0x0)) {
    bVar2 = UPCGPin::IsConnected(this_00);
    return bVar2;
  }
  return false;
}

// PostLoad @ 149f580b0

void __thiscall UPCGSubgraphSettings::PostLoad(UPCGSubgraphSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// SetSubgraphInternal @ 149f62e80

void __thiscall
UPCGSubgraphSettings::SetSubgraphInternal(UPCGSubgraphSettings *this,UPCGGraphInterface *param_1)

{
  UPCGGraphInstance::SetGraph((this->SubgraphInstance).field0_0x0.DebugPtr,param_1);
  return;
}

// StaticRegisterNativesUPCGSubgraphSettings @ 149f63c70

void __cdecl UPCGSubgraphSettings::StaticRegisterNativesUPCGSubgraphSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGSubgraphSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubgraphAssetFilter @ 149f63cd0

bool __thiscall
UPCGSubgraphSettings::SubgraphAssetFilter(UPCGSubgraphSettings *this,FAssetData *param_1)

{
  return false;
}

// execSubgraphAssetFilter @ 149f72b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGSubgraphSettings::execSubgraphAssetFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  FAssetDataTagMapSharedView_u_0 local_50;
  undefined8 uStack_48;
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_50.Loose = (FAssetDataTagMap *)0x0;
  uStack_48 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_24 = 2;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_50.Fixed);
  return;
}

