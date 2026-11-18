// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleImageUtils
// Functions: 17

// StaticClass @ 14cfa6e40

UClass * __cdecl UAppleImageUtilsBaseAsyncTaskBlueprintProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageUtilsBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.
                InnerSingleton,StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy,0x98
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// UAppleImageUtilsBaseAsyncTaskBlueprintProxy @ 14cfa8300

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::UAppleImageUtilsBaseAsyncTaskBlueprintProxy
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->ConversionTask).Object = (FAppleImageUtilsConversionTaskBase *)0x0;
  (this->ConversionTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConversionResult).Error.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConversionResult).Error.Data.ArrayNum = 0;
  (this->ConversionResult).Error.Data.ArrayMax = 0;
  (this->ConversionResult).ImageData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConversionResult).ImageData.ArrayNum = 0;
  (this->ConversionResult).ImageData.ArrayMax = 0;
  return this;
}

// UAppleImageUtilsBaseAsyncTaskBlueprintProxy @ 14cfa8380

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::UAppleImageUtilsBaseAsyncTaskBlueprintProxy
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFailure = 0;
  *(undefined8 *)&(this->OnFailure).field_0x8 = 0;
  *(undefined8 *)&(this->OnFailure).field_0x10 = 0;
  (this->ConversionTask).Object = (FAppleImageUtilsConversionTaskBase *)0x0;
  (this->ConversionTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ConversionResult).Error.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConversionResult).Error.Data.ArrayNum = 0;
  (this->ConversionResult).Error.Data.ArrayMax = 0;
  (this->ConversionResult).ImageData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConversionResult).ImageData.ArrayNum = 0;
  (this->ConversionResult).ImageData.ArrayMax = 0;
  this->bShouldTick = true;
  return this;
}

// ~UAppleImageUtilsBaseAsyncTaskBlueprintProxy @ 14cfa8440

void __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::~UAppleImageUtilsBaseAsyncTaskBlueprintProxy
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ConversionResult).ImageData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConversionResult).Error.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ConversionTask).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailure);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateProxyObjectForConvertToHEIF @ 14cfa8900

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF
          (UTexture *param_1,int param_2,bool param_3,bool param_4,float param_5,
          ETextureRotationDirection param_6)

{
  UObject *pUVar1;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar2;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar2 = IAppleImageUtilsPlugin::Get();
  pTVar3 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar2 + 0x48))
                     (pIVar2,local_18,param_1,param_2,param_3,param_4,param_5,param_6);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return this;
}

// CreateProxyObjectForConvertToJPEG @ 14cfa89c0

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG
          (UTexture *param_1,int param_2,bool param_3,bool param_4,float param_5,
          ETextureRotationDirection param_6)

{
  UObject *pUVar1;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar2;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar2 = IAppleImageUtilsPlugin::Get();
  pTVar3 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar2 + 0x40))
                     (pIVar2,local_18,param_1,param_2,param_3,param_4,param_5,param_6);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return this;
}

// CreateProxyObjectForConvertToPNG @ 14cfa8a80

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG
          (UTexture *param_1,bool param_2,bool param_3,float param_4,
          ETextureRotationDirection param_5)

{
  UObject *pUVar1;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar2;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar3;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar2 = IAppleImageUtilsPlugin::Get();
  pTVar3 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar2 + 0x50))
                     (pIVar2,local_28,param_1,param_2,param_3,param_4,param_5);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// CreateProxyObjectForConvertToTIFF @ 14cfa8b40

UAppleImageUtilsBaseAsyncTaskBlueprintProxy * __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF
          (UTexture *param_1,bool param_2,bool param_3,float param_4,
          ETextureRotationDirection param_5)

{
  UObject *pUVar1;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar2;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar3;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pUVar1 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar1);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar2 = IAppleImageUtilsPlugin::Get();
  pTVar3 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar2 + 0x58))
                     (pIVar2,local_28,param_1,param_2,param_3,param_4,param_5);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return this;
}

// GetPrivateStaticClass @ 14cfa8fb0

UClass * __cdecl UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleImageUtils",L"AppleImageUtilsBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.
                InnerSingleton,StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy,0x98
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// GetStatId @ 14cfa9060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_UAppleImageUtilsBaseAsyncTaskBlueprintProxy = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"UAppleImageUtilsBaseAsyncTaskBlueprintProxy");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_UAppleImageUtilsBaseAsyncTaskBlueprintProxy,*pFVar1,
               L"UAppleImageUtilsBaseAsyncTaskBlueprintProxy","STATGROUP_Tickables",
               "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_UAppleImageUtilsBaseAsyncTaskBlueprintProxy;
  if (_StatPtr_UAppleImageUtilsBaseAsyncTaskBlueprintProxy == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UAppleImageUtilsBaseAsyncTaskBlueprintProxy");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_UAppleImageUtilsBaseAsyncTaskBlueprintProxy::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_UAppleImageUtilsBaseAsyncTaskBlueprintProxy,*pFVar1,
                       L"UAppleImageUtilsBaseAsyncTaskBlueprintProxy","STATGROUP_Tickables",
                       "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// IsTickable @ 14cfa9220

bool __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::IsTickable
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this)

{
  return (bool)*(undefined1 *)&(this->ConversionTask).SharedReferenceCount.ReferenceController;
}

// StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy @ 14cfa9240

void __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::
StaticRegisterNativesUAppleImageUtilsBaseAsyncTaskBlueprintProxy(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UAppleImageUtilsBaseAsyncTaskBlueprintProxy_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14cfa9280

void __thiscall
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::Tick
          (UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this,float param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  FAppleImageUtilsConversionTaskBase *pFVar7;
  FAppleImageConversionDelegate *pFVar8;
  void *local_28 [2];
  void *local_18 [2];
  
  plVar2 = *(longlong **)&(this->OnSuccess).field_0x8;
  if (plVar2 == (longlong *)0x0) {
    ::FString::operator=((FString *)&this->OnFailure,L"Invalid conversion task");
    *(undefined1 *)&(this->ConversionTask).SharedReferenceCount.ReferenceController = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x10))();
    if (cVar4 == '\0') {
      return;
    }
    *(undefined1 *)&(this->ConversionTask).SharedReferenceCount.ReferenceController = 0;
    if ((*(longlong *)&(this->OnSuccess).field_0x8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = &this->OnFailure;
    cVar4 = (**(code **)**(undefined8 **)&(this->OnSuccess).field_0x8)();
    if (cVar4 == '\0') {
      ::FString::operator=((FString *)pFVar8,L"Success");
      if ((*(longlong *)&(this->OnSuccess).field_0x8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)&(this->OnSuccess).field_0x8;
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_28);
      puVar1 = &(this->OnFailure).field_0x10;
      if ((undefined8 *)puVar1 != puVar6) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(undefined8 *)puVar1 = *puVar6;
        *puVar6 = 0;
        *(undefined4 *)&(this->ConversionTask).Object = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)((longlong)&(this->ConversionTask).Object + 4) =
             *(undefined4 *)((longlong)puVar6 + 0xc);
        puVar6[1] = 0;
      }
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
      pFVar8 = (FAppleImageConversionDelegate *)&this->_padding_;
      goto LAB_14cfa9410;
    }
    pFVar7 = TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator->
                       ((TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
                        &(this->OnSuccess).field_0x8);
    puVar6 = (undefined8 *)(**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_18);
    if (pFVar8 != (FAppleImageConversionDelegate *)puVar6) {
      if (*(void **)pFVar8 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar8);
      }
      *(undefined8 *)pFVar8 = *puVar6;
      *puVar6 = 0;
      *(undefined4 *)&(this->OnFailure).field_0x8 = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)&(this->OnFailure).field_0xc = *(undefined4 *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  pFVar8 = (FAppleImageConversionDelegate *)&this->_padding_;
LAB_14cfa9410:
  FAppleImageConversionDelegate::Broadcast
            (pFVar8,(FAppleImageUtilsImageConversionResult *)&this->OnFailure);
  return;
}

// execCreateProxyObjectForConvertToHEIF @ 14cfa9530

void __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToHEIF
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar7;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_60 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_64 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar9 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar10 = local_res20[0] != 0;
  local_68 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
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
  uVar5 = local_60;
  uVar4 = local_64;
  uVar3 = local_68;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar6);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar7 = IAppleImageUtilsPlugin::Get();
  pTVar8 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar7 + 0x48))
                     (pIVar7,local_58,uVar5,uVar4,bVar9,bVar10,uVar3,uVar2);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  *(UAppleImageUtilsBaseAsyncTaskBlueprintProxy **)param_3 = this;
  return;
}

// execCreateProxyObjectForConvertToJPEG @ 14cfa9780

void __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToJPEG
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar7;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar8;
  bool bVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  local_60 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_64 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar9 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar10 = local_res20[0] != 0;
  local_68 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
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
  uVar5 = local_60;
  uVar4 = local_64;
  uVar3 = local_68;
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar6);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar7 = IAppleImageUtilsPlugin::Get();
  pTVar8 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar7 + 0x40))
                     (pIVar7,local_58,uVar5,uVar4,bVar9,bVar10,uVar3,uVar2);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  *(UAppleImageUtilsBaseAsyncTaskBlueprintProxy **)param_3 = this;
  return;
}

// execCreateProxyObjectForConvertToPNG @ 14cfa99d0

void __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToPNG
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar6;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  local_50 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar8 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar9 = local_res20[0] != 0;
  local_58[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
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
  uVar4 = local_50;
  uVar3 = local_58[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar5);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar6 = IAppleImageUtilsPlugin::Get();
  pTVar7 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,local_48,uVar4,bVar8,bVar9,uVar3,uVar2);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  *(UAppleImageUtilsBaseAsyncTaskBlueprintProxy **)param_3 = this;
  return;
}

// execCreateProxyObjectForConvertToTIFF @ 14cfa9c00

void __cdecl
UAppleImageUtilsBaseAsyncTaskBlueprintProxy::execCreateProxyObjectForConvertToTIFF
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  UAppleImageUtilsBaseAsyncTaskBlueprintProxy *this;
  IAppleImageUtilsPlugin *pIVar6;
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  local_50 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar8 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar9 = local_res20[0] != 0;
  local_58[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
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
  uVar4 = local_50;
  uVar3 = local_58[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = GetTransientPackageAsObject();
  this = NewObject<UAppleImageUtilsBaseAsyncTaskBlueprintProxy>(pUVar5);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  pIVar6 = IAppleImageUtilsPlugin::Get();
  pTVar7 = (TSharedPtr<FAppleImageUtilsConversionTaskBase,1> *)
           (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6,local_48,uVar4,bVar8,bVar9,uVar3,uVar2);
  TSharedPtr<FAppleImageUtilsConversionTaskBase,1>::operator=(&this->ConversionTask,pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  *(UAppleImageUtilsBaseAsyncTaskBlueprintProxy **)param_3 = this;
  return;
}

