// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 9

// StaticClass @ 14e113030

UClass * __cdecl UOptimusSkinnedMeshVertexAttributeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshVertexAttributeDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinnedMeshVertexAttributeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshVertexAttributeDataProvider>,
               local_res8,UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.InnerSingleton;
}

// UOptimusSkinnedMeshVertexAttributeDataProvider @ 14e15d3a0

UOptimusSkinnedMeshVertexAttributeDataProvider * __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::UOptimusSkinnedMeshVertexAttributeDataProvider
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkinnedMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UOptimusSkinnedMeshVertexAttributeDataProvider @ 14e15d400

UOptimusSkinnedMeshVertexAttributeDataProvider * __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::UOptimusSkinnedMeshVertexAttributeDataProvider
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->SkinnedMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMeshComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->AttributeName).ComparisonIndex = 0;
  (this->AttributeName).Number = 0;
  (this->WeakDataInterface).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UOptimusSkinnedMeshVertexAttributeDataProvider @ 14e164100

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::~UOptimusSkinnedMeshVertexAttributeDataProvider
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this)

{
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9600

UClass * __cdecl UOptimusSkinnedMeshVertexAttributeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkinnedMeshVertexAttributeDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.
                InnerSingleton,StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusSkinnedMeshVertexAttributeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkinnedMeshVertexAttributeDataProvider>,
               local_res8,UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1df190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::GetRenderProxy
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this)

{
  float fVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UOptimusDeformerInstance *this_00;
  FName *pFVar6;
  FComputeDataProviderRenderProxy *pFVar7;
  FComputeDataProviderRenderProxy FVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  FInstancedStruct local_88;
  FInstancedStruct local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  float local_48;
  byte local_44;
  FName local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUVar5 = FWeakObjectPtr::Get(&(this->WeakDataInterface).WeakPtr);
  this_00 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->WeakDeformerInstance).WeakPtr);
  if ((this_00 != (UOptimusDeformerInstance *)0x0) && (pUVar5 != (UObject *)0x0)) {
    pFVar6 = ::FName::FName(&local_68,0xd,L"AttributeName",FNAME_Add);
    UOptimusDeformerInstance::GetDataInterfacePropertyOverride
              (this_00,(FOptimusValueContainerStruct *)&local_88,(UComputeDataInterface *)pUVar5,
               *pFVar6);
    pFVar6 = ::FName::FName(&local_60,FOptimusValueContainerStruct::ValuePropertyName);
    FInstancedPropertyBag::GetValueName
              ((FInstancedPropertyBag *)&local_88,
               (TValueOrError<FName,EPropertyBagResult> *)&local_40,*pFVar6);
    uVar9 = (ulonglong)local_38;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar3)();
        return pFVar7;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9) != '\0') {
      if (local_38 != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar3)();
          return pFVar7;
        }
      }
      this->AttributeName = local_40;
    }
    FInstancedStruct::Reset(&local_88);
    pFVar6 = ::FName::FName(&local_58,0xc,L"DefaultValue",FNAME_Add);
    UOptimusDeformerInstance::GetDataInterfacePropertyOverride
              (this_00,(FOptimusValueContainerStruct *)&local_78,(UComputeDataInterface *)pUVar5,
               *pFVar6);
    ::FName::FName(&local_50,FOptimusValueContainerStruct::ValuePropertyName);
    FInstancedPropertyBag::GetValueFloat((FInstancedPropertyBag *)&local_78,(FName)&local_48);
    uVar9 = (ulonglong)local_44;
    if (2 < uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar3)();
        return pFVar7;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9) != '\0') {
      if (local_44 != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar3)();
          return pFVar7;
        }
      }
      this->DefaultValue = local_48;
    }
    FInstancedStruct::Reset(&local_78);
  }
  pFVar7 = ::operator_new(0x20);
  if (pFVar7 != (FComputeDataProviderRenderProxy *)0x0) {
    FVar2 = this->AttributeName;
    fVar1 = this->DefaultValue;
    pUVar5 = FWeakObjectPtr::Get(&(this->SkinnedMeshComponent).WeakPtr);
    *pFVar7 = (FComputeDataProviderRenderProxy)
              &___7FOptimusSkinnedMeshVertexAttributeDataProviderProxy__6B_;
    FVar8 = (FComputeDataProviderRenderProxy)0x0;
    pFVar7[2] = (FComputeDataProviderRenderProxy)0x0;
    if (pUVar5 != (UObject *)0x0) {
      FVar8 = *(FComputeDataProviderRenderProxy *)&pUVar5[0x33].field_0x18;
    }
    *(float *)(pFVar7 + 3) = fVar1;
    pFVar7[1] = FVar8;
    *(FName *)(pFVar7 + 2) = FVar2;
  }
  return pFVar7;
}

// SetDeformerInstance @ 14e21de80

void __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::SetDeformerInstance
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this,UOptimusDeformerInstance *param_1)

{
  UOptimusDeformerInstance *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider @ 14e225f20

void __cdecl
UOptimusSkinnedMeshVertexAttributeDataProvider::
StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider(void)

{
  return;
}

// _getUObject @ 14e239080

UObject * __thiscall
UOptimusSkinnedMeshVertexAttributeDataProvider::_getUObject
          (UOptimusSkinnedMeshVertexAttributeDataProvider *this)

{
  return (UObject *)&this[-1].SkinnedMeshComponent;
}

