// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 23

// StaticClass @ 14ea712b0

UClass * __cdecl UCompositeCoreSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCoreSubsystem",
               &Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton,
               StaticRegisterNativesUCompositeCoreSubsystem,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCompositeCoreSubsystem>,
               InternalVTableHelperCtorCaller<UCompositeCoreSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton;
}

// UCompositeCoreSubsystem @ 14ea77050

UCompositeCoreSubsystem * __thiscall
UCompositeCoreSubsystem::UCompositeCoreSubsystem
          (UCompositeCoreSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->CompositeCoreViewExtension).Object = (FCompositeCoreSceneViewExtension *)0x0;
  (this->CompositeCoreViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCompositeCoreSubsystem @ 14ea77090

UCompositeCoreSubsystem * __thiscall
UCompositeCoreSubsystem::UCompositeCoreSubsystem(UCompositeCoreSubsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->CompositeCoreViewExtension).Object = (FCompositeCoreSceneViewExtension *)0x0;
  (this->CompositeCoreViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UCompositeCoreSubsystem @ 14ea77680

void __thiscall UCompositeCoreSubsystem::~UCompositeCoreSubsystem(UCompositeCoreSubsystem *this)

{
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CompositeCoreViewExtension).SharedReferenceCount.ReferenceController);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// Deinitialize @ 14ea7cfd0

void __thiscall UCompositeCoreSubsystem::Deinitialize(UCompositeCoreSubsystem *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CompositeCoreViewExtension !=
      (TSharedPtr<FCompositeCoreSceneViewExtension,1> *)&local_18) {
    (this->CompositeCoreViewExtension).Object = (FCompositeCoreSceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CompositeCoreViewExtension).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14ea7ee90

UClass * __cdecl UCompositeCoreSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CompositeCore",L"CompositeCoreSubsystem",
               &Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton,
               StaticRegisterNativesUCompositeCoreSubsystem,0x58,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UCompositeCoreSubsystem>,
               InternalVTableHelperCtorCaller<UCompositeCoreSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCoreSubsystem.InnerSingleton;
}

// GetStatId @ 14ea7f0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UCompositeCoreSubsystem::GetStatId(UCompositeCoreSubsystem *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_UCompositeCoreSubsystem = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"UCompositeCoreSubsystem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_UCompositeCoreSubsystem,*pFVar1,L"UCompositeCoreSubsystem",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_UCompositeCoreSubsystem;
  if (_StatPtr_UCompositeCoreSubsystem == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UCompositeCoreSubsystem");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_UCompositeCoreSubsystem::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_UCompositeCoreSubsystem,*pFVar1,L"UCompositeCoreSubsystem",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// Initialize @ 14ea80000

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
UCompositeCoreSubsystem::Initialize(UCompositeCoreSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FCompositeCoreSceneViewExtension *this_00;
  FAutoRegister local_res18 [8];
  TRawPtrProxy<FCompositeCoreSceneViewExtension> local_res20;
  FCompositeCoreSceneViewExtension *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FCompositeCoreSceneViewExtension,1> local_28;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar3 != (UWorld *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
    this_00 = ::operator_new(0x1e0);
    if (this_00 == (FCompositeCoreSceneViewExtension *)0x0) {
      this_00 = (FCompositeCoreSceneViewExtension *)0x0;
    }
    else {
      FWorldSceneViewExtension::FWorldSceneViewExtension
                ((FWorldSceneViewExtension *)this_00,local_res18,pUVar3);
      this_00->_padding_ = (longlong)&___7FCompositeCoreSceneViewExtension__6B_;
      *(undefined8 *)&(this_00->CompositePrimitives).Elements = 0;
      *(undefined8 *)&(this_00->CompositePrimitives).Elements.field_0x8 = 0;
      *(undefined8 *)&(this_00->CompositePrimitives).Elements.field_0x20 = 0;
      *(undefined4 *)&(this_00->CompositePrimitives).Elements.field_0x28 = 0;
      *(undefined4 *)&(this_00->CompositePrimitives).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(this_00->CompositePrimitives).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->CompositePrimitives).Elements.field_0x34 = 0;
      (this_00->CompositePrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (this_00->CompositePrimitives).HashSize = 0;
      (this_00->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this_00->ExternalInputs_RenderThread).Pairs.ArrayNum = 0;
      (this_00->ExternalInputs_RenderThread).Pairs.ArrayMax = 0;
      (this_00->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this_00->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum = 0;
      (this_00->CustomRenderTargetPerView_RenderThread).Pairs.ArrayMax = 0;
      (this_00->RenderWork_RenderThread).bIsSet = false;
      (this_00->BuiltInRenderPassOptions).bIsSet = false;
      this_00->bHasCustomRenderWork = false;
      (this_00->MainRenderMode).bIsSet = false;
      *(undefined8 *)&(this_00->AllowedViewModes).Elements = 0;
      *(undefined8 *)&(this_00->AllowedViewModes).Elements.field_0x8 = 0;
      *(undefined8 *)&(this_00->AllowedViewModes).Elements.field_0x20 = 0;
      *(undefined4 *)&(this_00->AllowedViewModes).Elements.field_0x28 = 0;
      *(undefined4 *)&(this_00->AllowedViewModes).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(this_00->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->AllowedViewModes).Elements.field_0x34 = 0;
      *(undefined8 *)&(this_00->AllowedViewModes).Hash.SecondaryData.field_0x0 = 0;
      (this_00->AllowedViewModes).HashSize = 0;
      (this_00->SceneCapturesUpdateQueue).AllocatorInstance.Data =
           (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
      (this_00->SceneCapturesUpdateQueue).ArrayNum = 0;
      (this_00->SceneCapturesUpdateQueue).ArrayMax = 0;
      (this_00->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (this_00->CachedOutputsPerView_RenderThread).Pairs.ArrayNum = 0;
      (this_00->CachedOutputsPerView_RenderThread).Pairs.ArrayMax = 0;
      if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
         (0 < *(int *)(this_00->_padding_ + 8))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    local_res20.Object = this_00;
    TSharedRef<FCompositeCoreSceneViewExtension,1>::
    TSharedRef<FCompositeCoreSceneViewExtension,1><FCompositeCoreSceneViewExtension>
              (&local_28,&local_res20);
    local_18.Object = (ISceneViewExtension *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    local_38 = local_28.Object;
    local_30.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->CompositeCoreViewExtension !=
        (TSharedPtr<FCompositeCoreSceneViewExtension,1> *)&local_38) {
      (this->CompositeCoreViewExtension).Object = local_28.Object;
      local_38 = (FCompositeCoreSceneViewExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CompositeCoreViewExtension).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// IsProjectSettingsValid @ 14ea80bd0

bool __cdecl UCompositeCoreSubsystem::IsProjectSettingsValid(void)

{
  char cVar1;
  char cVar2;
  IConsoleManager *pIVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      CVarAlphaOutput =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.PostProcessing.PropagateAlpha",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar3 = IConsoleManager::Get();
      CVarSupportPrimitiveAlphaHoldout =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))
                     (pIVar3,L"r.Deferred.SupportPrimitiveAlphaHoldout",1);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (CVarAlphaOutput == (IConsoleVariable *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*(longlong *)CVarAlphaOutput + 0xc0))();
  }
  if (CVarSupportPrimitiveAlphaHoldout == (IConsoleVariable *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)CVarSupportPrimitiveAlphaHoldout + 0xc0))();
  }
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    return true;
  }
  return false;
}

// IsTickableInEditor @ 14ea80d20

bool __thiscall UCompositeCoreSubsystem::IsTickableInEditor(UCompositeCoreSubsystem *this)

{
  return true;
}

// RegisterPrimitive @ 14ea81aa0

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
UCompositeCoreSubsystem::RegisterPrimitive
          (UCompositeCoreSubsystem *this,UPrimitiveComponent *param_1)

{
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(UPrimitiveComponent **)local_18.AllocatorInstance.Data = param_1;
  RegisterPrimitives(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RegisterPrimitives @ 14ea81b30

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
UCompositeCoreSubsystem::RegisterPrimitives
          (UCompositeCoreSubsystem *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCompositeCoreSceneViewExtension *pFVar3;
  UPrimitiveComponent *this_00;
  code *pcVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  IConsoleManager *pIVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> local_res20;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UPrimitiveComponent *local_58;
  FWeakObjectPtr local_50;
  UPrimitiveComponent *local_48 [2];
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    CVarAlphaOutput =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"r.PostProcessing.PropagateAlpha",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar10 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar9 = IConsoleManager::Get();
    CVarSupportPrimitiveAlphaHoldout =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar9 + 0xc0))
                   (pIVar9,L"r.Deferred.SupportPrimitiveAlphaHoldout",1);
    _Init_thread_footer(&::_TSS1);
  }
  if (CVarAlphaOutput == (IConsoleVariable *)0x0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*(longlong *)CVarAlphaOutput + 0xc0))();
  }
  if (CVarSupportPrimitiveAlphaHoldout == (IConsoleVariable *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(*(longlong *)CVarSupportPrimitiveAlphaHoldout + 0xc0))();
  }
  if ((cVar5 == '\0') || (cVar6 == '\0')) {
    if ((*piVar10 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (2 < (byte)LogCompositeCore._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Both__Alpha_Out_152ff1bb8,
                   (FLogCategoryBase *)&LogCompositeCore);
      }
      ThreadSafeOnce255 = 1;
      _Init_thread_footer(&::_TSS0);
      return;
    }
  }
  else {
    pFVar3 = (this->CompositeCoreViewExtension).Object;
    if (pFVar3 != (FCompositeCoreSceneViewExtension *)0x0) {
      bVar7 = IsInGameThread();
      if ((!bVar7) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                             ,0x58,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      iVar2 = param_1->ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar2 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar11 == pFVar1) break;
        this_00 = *(UPrimitiveComponent **)pFVar11;
        if ((this_00 != (UPrimitiveComponent *)0x0) &&
           ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          local_68.ObjectIndex = 0;
          local_68.ObjectSerialNumber = 0;
          local_58 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
          local_50 = local_68;
          iVar8 = TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>_>
                            (&pFVar3->CompositePrimitives,
                             local_68.ObjectSerialNumber ^ local_68.ObjectIndex,
                             (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_50)
          ;
          if (iVar8 == -1) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            local_60.ObjectIndex = 0;
            local_60.ObjectSerialNumber = 0;
            local_48[0] = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=(&local_60,(FObjectPtr)local_48);
            TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
                      (&pFVar3->CompositePrimitives,&local_res20,(bool *)&local_60);
          }
          if (!(bool)this_00->bHoldout) {
            UPrimitiveComponent::SetHoldout(this_00,true);
          }
        }
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  return;
}

// ResetBuiltInRenderPassOptions @ 14ea822b0

void __thiscall
UCompositeCoreSubsystem::ResetBuiltInRenderPassOptions(UCompositeCoreSubsystem *this)

{
  FCompositeCoreSceneViewExtension *pFVar1;
  
  pFVar1 = (this->CompositeCoreViewExtension).Object;
  if ((pFVar1 != (FCompositeCoreSceneViewExtension *)0x0) &&
     ((pFVar1->BuiltInRenderPassOptions).bIsSet != false)) {
    (pFVar1->BuiltInRenderPassOptions).bIsSet = false;
  }
  return;
}

// ResetRenderWork @ 14ea822f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCompositeCoreSubsystem::ResetRenderWork(UCompositeCoreSubsystem *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  FCompositeCoreSceneViewExtension *pFVar4;
  code *pcVar5;
  bool bVar6;
  TWeakPtr<FSceneViewExtensionBase,1> *pTVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  undefined1 auStackY_d8 [32];
  TWeakPtr<FSceneViewExtensionBase,1> TStack_a8;
  code *apcStack_98 [2];
  undefined **ppuStack_88;
  FSceneViewExtensionBase *pFStack_80;
  TReferenceControllerBase<1> *pTStack_78;
  undefined ***pppuStack_70;
  undefined1 auStack_68 [16];
  undefined **ppuStack_58;
  FSceneViewExtensionBase *pFStack_50;
  TReferenceControllerBase<1> *pTStack_48;
  undefined ***pppuStack_40;
  byte bStack_38;
  ulonglong uStack_28;
  
  pFVar4 = (this->CompositeCoreViewExtension).Object;
  if (pFVar4 == (FCompositeCoreSceneViewExtension *)0x0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar4->bHasCustomRenderWork = false;
  if ((pFVar4->MainRenderMode).bIsSet != false) {
    (pFVar4->MainRenderMode).bIsSet = false;
  }
  if (*(int *)&(pFVar4->AllowedViewModes).Elements.field_0x8 !=
      *(int *)&(pFVar4->AllowedViewModes).Elements.field_0x34) {
    TSet<enum_EViewModeIndex,DefaultKeyFuncs<enum_EViewModeIndex,0>,FDefaultSetAllocator>::
    UnhashElements(&pFVar4->AllowedViewModes);
    iVar3 = *(int *)&(pFVar4->AllowedViewModes).Elements.field_0xc;
    *(undefined4 *)&(pFVar4->AllowedViewModes).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&pFVar4->AllowedViewModes,0,
                 (int *)&(pFVar4->AllowedViewModes).Elements.field_0xc);
    }
    *(undefined4 *)&(pFVar4->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->AllowedViewModes).Elements.field_0x34 = 0;
    *(undefined4 *)&(pFVar4->AllowedViewModes).Elements.field_0x28 = 0;
  }
  (pFVar4->SceneCapturesUpdateQueue).ArrayNum = 0;
  if ((pFVar4->SceneCapturesUpdateQueue).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_>_>
              (8,4,0,&(pFVar4->SceneCapturesUpdateQueue).AllocatorInstance,0,
               &(pFVar4->SceneCapturesUpdateQueue).ArrayMax);
  }
  pTVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsWeak
                     ((TSharedFromThis<FSceneViewExtensionBase,1> *)&pFVar4->_padding_,&TStack_a8);
  pFStack_80 = pTVar7->Object;
  pTStack_78 = (pTVar7->WeakReferenceCount).ReferenceController;
  (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7->Object = (FSceneViewExtensionBase *)0x0;
  ppuStack_88 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::`2'::<lambda_1>,1,0>
                 ::_vftable_;
  apcStack_98[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
       ::Call;
  pppuStack_70 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    auStack_68._0_8_ = apcStack_98[0];
    pppuStack_40 = pppuStack_70;
    ppuStack_58 = ppuStack_88;
    pFStack_50 = pFStack_80;
    pTStack_48 = pTStack_78;
    apcStack_98[0] = (code *)0x0;
    bStack_38 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork180>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)auStack_68,pFVar8);
    uVar10 = (ulonglong)bStack_38;
    if (2 < uVar10) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)auStack_68._0_8_ != (code *)0x0) {
        pppuVar9 = (undefined ***)(auStack_68 + 0x10);
        if (pppuStack_40 != (undefined ***)0x0) {
          pppuVar9 = pppuStack_40;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(auStack_68);
    }
  }
  if (apcStack_98[0] != (code *)0x0) {
    pppuVar9 = &ppuStack_88;
    if (pppuStack_70 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_70;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (TStack_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TStack_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((TStack_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (TStack_a8.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SetBuiltInRenderPassOptions @ 14ea825f0

void __thiscall
UCompositeCoreSubsystem::SetBuiltInRenderPassOptions
          (UCompositeCoreSubsystem *this,FBuiltInRenderPassOptions *param_1)

{
  bool bVar1;
  FCompositeCoreSceneViewExtension *pFVar2;
  
  pFVar2 = (this->CompositeCoreViewExtension).Object;
  if ((pFVar2 != (FCompositeCoreSceneViewExtension *)0x0) &&
     ((TOptional<UE::CompositeCore::FBuiltInRenderPassOptions> *)param_1 !=
      &pFVar2->BuiltInRenderPassOptions)) {
    (pFVar2->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.bIsSet = false;
    bVar1 = (param_1->ViewUserFlagsOverride).bIsSet;
    (pFVar2->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.bIsSet = bVar1;
    if (bVar1 != false) {
      (pFVar2->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.TypedValue =
           (param_1->ViewUserFlagsOverride).TypedValue;
    }
    (pFVar2->BuiltInRenderPassOptions).TypedValue.bEnableUnlitViewmode =
         param_1->bEnableUnlitViewmode;
    (pFVar2->BuiltInRenderPassOptions).TypedValue.DilationSize = param_1->DilationSize;
    (pFVar2->BuiltInRenderPassOptions).TypedValue.bOpacifyOutput = param_1->bOpacifyOutput;
    (pFVar2->BuiltInRenderPassOptions).bIsSet = true;
  }
  return;
}

// SetRenderWork @ 14ea826b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UCompositeCoreSubsystem::SetRenderWork(UCompositeCoreSubsystem *this,FRenderWork *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  atomic<int> *paVar3;
  TSet<EViewModeIndex,DefaultKeyFuncs<EViewModeIndex,0>,FDefaultSetAllocator> *this_01;
  TArray<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  TArray<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> aVar7;
  int iVar8;
  FCompositeCoreSceneViewExtension *pFVar9;
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *pTVar10;
  code *pcVar11;
  bool bVar12;
  TWeakPtr<FSceneViewExtensionBase,1> *pTVar13;
  code **ppcVar14;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar15;
  byte bVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined1 auStackY_1b8 [32];
  undefined1 uStack_188;
  undefined1 auStack_187 [7];
  TWeakPtr<FSceneViewExtensionBase,1> TStack_180;
  code *apcStack_168 [2];
  code *apcStack_158 [3];
  code **ppcStack_140;
  undefined1 auStack_138 [40];
  code **ppcStack_110;
  byte bStack_108;
  FRenderWork FStack_f8;
  FSceneViewExtensionBase *pFStack_58;
  TReferenceControllerBase<1> *pTStack_50;
  ulonglong uStack_48;
  
  pFVar9 = (this->CompositeCoreViewExtension).Object;
  if (pFVar9 == (FCompositeCoreSceneViewExtension *)0x0) {
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar8 = (param_1->PreprocessingPasses).Pairs.ArrayNum;
  pFVar17 = (param_1->PreprocessingPasses).Pairs.AllocatorInstance.Data;
  pFVar6 = pFVar17 + (longlong)iVar8 * 0x18;
  bVar19 = 1;
  while( true ) {
    if ((param_1->PreprocessingPasses).Pairs.ArrayNum != iVar8) {
      uStack_188 = 0;
      `TCheckedPointerIterator<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&uStack_188);
    }
    if (pFVar17 == pFVar6) break;
    bVar16 = 0;
    if (*(int *)(pFVar17 + 0x10) == 0) {
      bVar16 = bVar19;
    }
    pFVar17 = pFVar17 + 0x18;
    bVar19 = bVar16;
  }
  iVar8 = (param_1->FramePasses).Pairs.ArrayNum;
  pFVar17 = (param_1->FramePasses).Pairs.AllocatorInstance.Data;
  pFVar6 = pFVar17 + (longlong)iVar8 * 0x18;
  while( true ) {
    if ((param_1->FramePasses).Pairs.ArrayNum != iVar8) {
      auStack_187[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStack_187);
    }
    if (pFVar17 == pFVar6) break;
    bVar19 = bVar19 & *(int *)(pFVar17 + 0x10) == 0;
    pFVar17 = pFVar17 + 0x18;
  }
  pFVar9->bHasCustomRenderWork =
       (bool)(((param_1->SceneCapturesUpdateQueue).ArrayNum == 0 &&
              (param_1->MainRenderMode).bIsSet == false) & bVar19 ^ 1);
  if (&param_1->MainRenderMode != &pFVar9->MainRenderMode) {
    if ((param_1->MainRenderMode).bIsSet == false) {
      if ((pFVar9->MainRenderMode).bIsSet != false) {
        (pFVar9->MainRenderMode).bIsSet = false;
      }
    }
    else {
      (pFVar9->MainRenderMode).TypedValue = (param_1->MainRenderMode).TypedValue;
      (pFVar9->MainRenderMode).bIsSet = true;
    }
  }
  this_01 = &pFVar9->AllowedViewModes;
  if (this_01 != &param_1->AllowedViewModes) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(pFVar9->AllowedViewModes).Hash,&(pFVar9->AllowedViewModes).HashSize,
               &(param_1->AllowedViewModes).Hash,(param_1->AllowedViewModes).HashSize);
    iVar8 = *(int *)&(param_1->AllowedViewModes).Elements.field_0x8;
    TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this_01,iVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,(ForAnyElementType *)this_01,
               (int *)&(pFVar9->AllowedViewModes).Elements.field_0x8,
               (int *)&(pFVar9->AllowedViewModes).Elements.field_0xc);
    puVar1 = &(param_1->AllowedViewModes).Elements.field_0x10;
    this_00 = &(pFVar9->AllowedViewModes).Elements.field_0x10;
    *(undefined4 *)&(pFVar9->AllowedViewModes).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x30;
    *(undefined4 *)&(pFVar9->AllowedViewModes).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar8 != 0) {
      memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->AllowedViewModes).Elements,
             (longlong)iVar8 * 0xc);
    }
  }
  pTVar4 = &param_1->SceneCapturesUpdateQueue;
  pTVar5 = &pFVar9->SceneCapturesUpdateQueue;
  if (pTVar5 != pTVar4) {
    pTVar10 = (pTVar5->AllocatorInstance).Data;
    if (pTVar10 != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar10);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data =
         (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
    (pFVar9->SceneCapturesUpdateQueue).ArrayNum = (param_1->SceneCapturesUpdateQueue).ArrayNum;
    (pFVar9->SceneCapturesUpdateQueue).ArrayMax = (param_1->SceneCapturesUpdateQueue).ArrayMax;
    (param_1->SceneCapturesUpdateQueue).ArrayNum = 0;
    (param_1->SceneCapturesUpdateQueue).ArrayMax = 0;
  }
  pTVar13 = TSharedFromThis<FSceneViewExtensionBase,1>::AsWeak
                      ((TSharedFromThis<FSceneViewExtensionBase,1> *)&pFVar9->_padding_,&TStack_180)
  ;
  UE::CompositeCore::FRenderWork::FRenderWork(&FStack_f8,param_1);
  pFStack_58 = pTVar13->Object;
  pTStack_50 = (pTVar13->WeakReferenceCount).ReferenceController;
  (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FSceneViewExtensionBase *)0x0;
  apcStack_168[0] = (code *)0x0;
  ppcVar14 = FMemory::Malloc(0xb8,8);
  *ppcVar14 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  ppcStack_140 = ppcVar14;
  UE::CompositeCore::FRenderWork::FRenderWork((FRenderWork *)(ppcVar14 + 1),&FStack_f8);
  ppcVar14[0x15] = (code *)pFStack_58;
  ppcVar14[0x16] = (code *)pTStack_50;
  if ((FRenderWork *)(ppcVar14 + 1) != (FRenderWork *)0x0) {
    apcStack_168[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
  }
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  pFStack_58 = (FSceneViewExtensionBase *)0x0;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::SetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork142>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_168);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    auStack_138._0_8_ = apcStack_168[0];
    ppcStack_110 = ppcStack_140;
    ppcStack_140 = (code **)0x0;
    auStack_138._16_8_ = apcStack_158[0];
    auStack_138._24_8_ = apcStack_158[1];
    auStack_138._32_8_ = apcStack_158[2];
    apcStack_168[0] = (code *)0x0;
    bStack_108 = 2;
    pFVar15 = (FRenderCommandTag *)
              TRenderCommandTag<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork142>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)auStack_138,pFVar15);
    uVar18 = (ulonglong)bStack_108;
    if (2 < uVar18) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)auStack_138._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(auStack_138 + 0x10);
        if (ppcStack_110 != (code **)0x0) {
          ppcVar14 = ppcStack_110;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(auStack_138);
    }
  }
  if (apcStack_168[0] != (code *)0x0) {
    ppcVar14 = apcStack_168 + 2;
    if (ppcStack_140 != (code **)0x0) {
      ppcVar14 = ppcStack_140;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)pTStack_50 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(pTStack_50->_padding_ + 8))(pTStack_50,1);
    }
  }
  UE::CompositeCore::FRenderWork::~FRenderWork(&FStack_f8);
  if (TStack_180.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(TStack_180.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar7 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar7 == (atomic<int>)0x1) {
      (**(code **)((TStack_180.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (TStack_180.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// StaticRegisterNativesUCompositeCoreSubsystem @ 14ea83130

void __cdecl UCompositeCoreSubsystem::StaticRegisterNativesUCompositeCoreSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCompositeCoreSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14ea83470

void __thiscall UCompositeCoreSubsystem::Tick(UCompositeCoreSubsystem *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((char)this->_padding_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\WorldSubsystem.cpp"
                       ,0x83,L"Ticking should have been disabled for an uninitialized subsystem!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UnregisterPrimitive @ 14ea83aa0

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
UCompositeCoreSubsystem::UnregisterPrimitive
          (UCompositeCoreSubsystem *this,UPrimitiveComponent *param_1)

{
  FCompositeCoreSceneViewExtension *this_00;
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(UPrimitiveComponent **)local_18.AllocatorInstance.Data = param_1;
  this_00 = (this->CompositeCoreViewExtension).Object;
  if (this_00 != (FCompositeCoreSceneViewExtension *)0x0) {
    FCompositeCoreSceneViewExtension::UnregisterPrimitives_GameThread(this_00,&local_18);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UnregisterPrimitives @ 14ea83b30

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
UCompositeCoreSubsystem::UnregisterPrimitives
          (UCompositeCoreSubsystem *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  FCompositeCoreSceneViewExtension *pFVar2;
  UPrimitiveComponent *this_01;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr *pFVar11;
  undefined1 auStackX_10 [8];
  FWeakObjectPtr FStackX_18;
  FScriptContainerElement *pFStackX_20;
  FWeakObjectPtr FStack_78;
  UPrimitiveComponent *pUStack_70;
  FWeakObjectPtr FStack_68;
  UPrimitiveComponent *pUStack_60;
  FWeakObjectPtr FStack_58;
  FWeakObjectPtr aFStack_50 [2];
  
  pFVar2 = (this->CompositeCoreViewExtension).Object;
  if (pFVar2 == (FCompositeCoreSceneViewExtension *)0x0) {
    return;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                         ,0x70,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 8;
  pFStackX_20 = pFVar9;
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_10);
    }
    if (pFVar10 == pFVar9) {
      return;
    }
    this_01 = *(UPrimitiveComponent **)pFVar10;
    if ((this_01 != (UPrimitiveComponent *)0x0) && ((*(uint *)&this_01->field_0x8 >> 0x1e & 1) == 0)
       ) {
      this_00 = &pFVar2->CompositePrimitives;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FStackX_18.ObjectIndex = 0;
      FStackX_18.ObjectSerialNumber = 0;
      pUStack_70 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&pUStack_70);
      FStack_68 = FStackX_18;
      iVar7 = TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>_>
                        (this_00,FStackX_18.ObjectSerialNumber ^ FStackX_18.ObjectIndex,
                         (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&FStack_68);
      if (iVar7 != -1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FStack_78.ObjectIndex = 0;
        FStack_78.ObjectSerialNumber = 0;
        pUStack_60 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&FStack_78,(FObjectPtr)&pUStack_60);
        FVar5 = FStack_78;
        pFVar9 = pFStackX_20;
        if (*(int *)&(pFVar2->CompositePrimitives).Elements.field_0x8 !=
            *(int *)&(pFVar2->CompositePrimitives).Elements.field_0x34) {
          FVar3 = (pFVar2->CompositePrimitives).Hash.SecondaryData;
          FVar8 = (ForElementType<FSetElementId>)&(pFVar2->CompositePrimitives).Hash;
          if (FVar3 != (ForElementType<FSetElementId>)0x0) {
            FVar8 = FVar3;
          }
          iVar7 = *(int *)((longlong)FVar8 +
                          ((longlong)(pFVar2->CompositePrimitives).HashSize - 1U &
                          (longlong)(FStack_78.ObjectSerialNumber ^ FStack_78.ObjectIndex)) * 4);
          while (pFVar9 = pFStackX_20, iVar7 != -1) {
            pFVar11 = (FWeakObjectPtr *)((longlong)iVar7 * 0x10 + *(longlong *)&this_00->Elements);
            FStack_58 = FVar5;
            aFStack_50[0] = *pFVar11;
            bVar6 = TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>::
                    UEOpEquals<UPrimitiveComponent_const_,bool>
                              ((TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)
                               aFStack_50,
                               (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)
                               &FStack_58);
            if (bVar6) {
              TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(this_00,iVar7);
              pFVar9 = pFStackX_20;
              break;
            }
            iVar7 = pFVar11[1].ObjectIndex;
          }
        }
      }
      if ((bool)this_01->bHoldout) {
        UPrimitiveComponent::SetHoldout(this_01,false);
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// ValidateProjectSettings @ 14ea83da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCompositeCoreSubsystem::ValidateProjectSettings(UCompositeCoreSubsystem *this)

{
  char cVar1;
  char cVar2;
  IConsoleManager *pIVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      CVarAlphaOutput =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.PostProcessing.PropagateAlpha",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar3 = IConsoleManager::Get();
      CVarSupportPrimitiveAlphaHoldout =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))
                     (pIVar3,L"r.Deferred.SupportPrimitiveAlphaHoldout",1);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (CVarAlphaOutput == (IConsoleVariable *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(*(longlong *)CVarAlphaOutput + 0xc0))();
  }
  if (CVarSupportPrimitiveAlphaHoldout == (IConsoleVariable *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)CVarSupportPrimitiveAlphaHoldout + 0xc0))();
  }
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    return true;
  }
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (2 < (byte)LogCompositeCore._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Both__Alpha_Out_152ff1bb8,
                   (FLogCategoryBase *)&LogCompositeCore);
      }
      ThreadSafeOnce255 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return false;
}

// execRegisterPrimitive @ 14ea841f0

void __cdecl
UCompositeCoreSubsystem::execRegisterPrimitive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(undefined8 *)local_18.AllocatorInstance.Data = uVar2;
  RegisterPrimitives((UCompositeCoreSubsystem *)param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execUnregisterPrimitive @ 14ea843a0

void __cdecl
UCompositeCoreSubsystem::execUnregisterPrimitive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 local_res8 [2];
  TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(undefined8 *)local_18.AllocatorInstance.Data = uVar2;
  if (*(FCompositeCoreSceneViewExtension **)&param_1[1].field_0x20 !=
      (FCompositeCoreSceneViewExtension *)0x0) {
    FCompositeCoreSceneViewExtension::UnregisterPrimitives_GameThread
              (*(FCompositeCoreSceneViewExtension **)&param_1[1].field_0x20,&local_18);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

