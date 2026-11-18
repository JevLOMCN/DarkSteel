// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 31

// StaticClass @ 1496cc2f0

UClass * __cdecl UInteractiveGizmoManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmoManager",
               &Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmoManager,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveGizmoManager>,
               InternalVTableHelperCtorCaller<UInteractiveGizmoManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton;
}

// UInteractiveGizmoManager @ 1496d2980

UInteractiveGizmoManager * __thiscall
UInteractiveGizmoManager::UInteractiveGizmoManager(UInteractiveGizmoManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  *(undefined8 *)&this->GizmoBuilders = 0;
  *(undefined8 *)&(this->GizmoBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->GizmoBuilders).field_0x20 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->GizmoBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GizmoBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x48 = 0;
  this->bDefaultGizmosRegistered = false;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  this->InputRouter = (UInputRouter *)0x0;
  return this;
}

// UInteractiveGizmoManager @ 1496d2a20

UInteractiveGizmoManager * __thiscall
UInteractiveGizmoManager::UInteractiveGizmoManager
          (UInteractiveGizmoManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  (this->ActiveGizmos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGizmos).ArrayNum = 0;
  (this->ActiveGizmos).ArrayMax = 0;
  *(undefined8 *)&this->GizmoBuilders = 0;
  *(undefined8 *)&(this->GizmoBuilders).field_0x8 = 0;
  *(undefined8 *)&(this->GizmoBuilders).field_0x20 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x28 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x2c = 0x80;
  *(undefined4 *)&(this->GizmoBuilders).field_0x34 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GizmoBuilders).field_0x40 = 0;
  *(undefined4 *)&(this->GizmoBuilders).field_0x48 = 0;
  this->bDefaultGizmosRegistered = false;
  (this->GizmoActorBuilder).Object = (FCombinedTransformGizmoActorFactory *)0x0;
  (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UInteractiveGizmoManager @ 1496d4380

void __thiscall UInteractiveGizmoManager::~UInteractiveGizmoManager(UInteractiveGizmoManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IToolContextTransactionProvider__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GizmoActorBuilder).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->GizmoBuilders).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GizmoBuilders).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GizmoBuilders);
  DestructItems<FActiveGizmo,int>
            ((FActiveGizmo *)(this->ActiveGizmos).AllocatorInstance.Data,
             (this->ActiveGizmos).ArrayNum);
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IToolContextTransactionProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginUndoTransaction @ 1496d7590

void __thiscall
UInteractiveGizmoManager::BeginUndoTransaction(UInteractiveGizmoManager *this,FText *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496d7597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  return;
}

// Create3AxisTransformGizmo @ 1496d97b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UInteractiveGizmoManager::Create3AxisTransformGizmo
          (UInteractiveGizmoManager *this,void *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if (this->bDefaultGizmosRegistered == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDefaultGizmosRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                       ,0x151,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = (UCombinedTransformGizmo *)
           (**(code **)(this->_padding_ + 0x2d0))
                     (this,&DefaultThreeAxisTransformBuilderIdentifier,param_2,param_1);
  if (pUVar4 == (UCombinedTransformGizmo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                       ,0x153,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UCombinedTransformGizmo *)0x0;
}

// CreateCustomRepositionableTransformGizmo @ 1496d9b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UInteractiveGizmoManager::CreateCustomRepositionableTransformGizmo
          (UInteractiveGizmoManager *this,ETransformGizmoSubElements param_1,void *param_2,
          FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if ((this->bDefaultGizmosRegistered == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDefaultGizmosRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                         ,0x162,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
    return pUVar4;
  }
  if (((this->GizmoActorBuilder).Object == (FCombinedTransformGizmoActorFactory *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
    return pUVar4;
  }
  ((this->GizmoActorBuilder).Object)->EnableElements = param_1;
  pUVar4 = (UCombinedTransformGizmo *)
           (**(code **)(this->_padding_ + 0x2d0))
                     (this,&CustomRepositionableThreeAxisTransformBuilderIdentifier,param_3,param_2)
  ;
  if (pUVar4 == (UCombinedTransformGizmo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                       ,0x165,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UCombinedTransformGizmo *)0x0;
}

// CreateCustomTransformGizmo @ 1496d9c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCombinedTransformGizmo * __thiscall
UInteractiveGizmoManager::CreateCustomTransformGizmo
          (UInteractiveGizmoManager *this,ETransformGizmoSubElements param_1,void *param_2,
          FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UCombinedTransformGizmo *pUVar4;
  UClass *pUVar5;
  
  if ((this->bDefaultGizmosRegistered == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDefaultGizmosRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                         ,0x159,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
    return pUVar4;
  }
  if (((this->GizmoActorBuilder).Object == (FCombinedTransformGizmoActorFactory *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
    return pUVar4;
  }
  ((this->GizmoActorBuilder).Object)->EnableElements = param_1;
  pUVar4 = (UCombinedTransformGizmo *)
           (**(code **)(this->_padding_ + 0x2d0))
                     (this,&CustomThreeAxisTransformBuilderIdentifier,param_3,param_2);
  if (pUVar4 == (UCombinedTransformGizmo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewGizmo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                       ,0x15c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UCombinedTransformGizmo *)(*pcVar2)();
      return pUVar4;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UCombinedTransformGizmo *)0x0;
}

// CreateGizmo @ 1496d9db0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UInteractiveGizmo * __thiscall
UInteractiveGizmoManager::CreateGizmo
          (UInteractiveGizmoManager *this,FString *param_1,FString *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  UInteractiveGizmoBuilder *pUVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TObjectPtr<UInteractiveGizmoBuilder> *pTVar11;
  UInteractiveGizmo *pUVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  UInteractiveGizmoBuilder *local_res10;
  UInteractiveGizmo *local_148;
  FString local_140;
  FString local_130;
  void *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar6 = 0;
  if (iVar7 == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar6 = iVar7 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar13);
  iVar6 = TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
                      *)&this->GizmoBuilders,uVar5,param_1);
  if (iVar6 != -1) {
    pTVar11 = TMapBase<FString,TObjectPtr<UInteractiveGizmoBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>_>
              ::FindChecked((TMapBase<FString,TObjectPtr<UInteractiveGizmoBuilder>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>_>
                             *)&this->GizmoBuilders,param_1);
    local_res10 = (pTVar11->field0_0x0).DebugPtr;
    if ((param_2->Data).ArrayNum < 2) {
LAB_1496d9fa8:
      pUVar4 = local_res10;
      local_f8 = (void *)0x0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_d8 = 0;
      (**(code **)((longlong)*this->QueriesAPI + 0x10))(this->QueriesAPI,&local_118);
      pUVar12 = (UInteractiveGizmo *)(**(code **)(*(longlong *)pUVar4 + 0x2b0))(pUVar4,&local_118);
      if (pUVar12 == (UInteractiveGizmo *)0x0) {
        pcVar3 = *(code **)(this->_padding_ + 0x300);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"UInteractiveGizmoManager",L"CreateGizmoReturnNullMessage",
                            L"UInteractiveGizmoManager::CreateGizmo: BuildGizmo() returned null");
        (*pcVar3)(this,pFVar8,0);
        pUVar12 = (UInteractiveGizmo *)0x0;
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
      else {
        (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
        (**(code **)(this->InputRouter->_padding_ + 0x2c0))(this->InputRouter,&pUVar12->_padding_);
        (**(code **)(this->_padding_ + 0x308))(this);
        local_148 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        local_140.Data.ArrayNum = (param_1->Data).ArrayNum;
        lVar15 = (longlong)local_140.Data.ArrayNum;
        pFVar14 = (param_1->Data).AllocatorInstance.Data;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_140.Data.ArrayNum == 0) {
          local_140.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_140,
                     local_140.Data.ArrayNum,&local_140.Data.ArrayMax);
          memcpy(local_140.Data.AllocatorInstance.Data,pFVar14,lVar15 * 2);
        }
        local_130.Data.ArrayNum = (param_2->Data).ArrayNum;
        lVar15 = (longlong)local_130.Data.ArrayNum;
        pFVar14 = (param_2->Data).AllocatorInstance.Data;
        local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_130.Data.ArrayNum == 0) {
          local_130.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_130.Data.ArrayNum,0,(ForAnyElementType *)&local_130,
                     local_130.Data.ArrayNum,&local_130.Data.ArrayMax);
          memcpy(local_130.Data.AllocatorInstance.Data,pFVar14,lVar15 * 2);
        }
        pFVar14 = (this->ActiveGizmos).AllocatorInstance.Data;
        local_120 = param_3;
        if (((pFVar14 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar14 + (longlong)(this->ActiveGizmos).ArrayMax * 0x30)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar3 = (code *)swi(3);
          pUVar12 = (UInteractiveGizmo *)(*pcVar3)();
          return pUVar12;
        }
        iVar6 = (this->ActiveGizmos).ArrayNum;
        piVar1 = &(this->ActiveGizmos).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&(this->ActiveGizmos).AllocatorInstance,piVar1);
        }
        pFVar14 = (this->ActiveGizmos).AllocatorInstance.Data;
        (this->ActiveGizmos).ArrayNum = iVar6 + 1;
        pFVar14 = pFVar14 + (longlong)iVar6 * 0x30;
        *(UInteractiveGizmo **)pFVar14 = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148 != (UInteractiveGizmo *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_148);
        }
        ::FString::FString((FString *)(pFVar14 + 8),&local_140);
        ::FString::FString((FString *)(pFVar14 + 0x18),&local_130);
        *(void **)(pFVar14 + 0x28) = local_120;
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8 == (void *)0x0) {
        return pUVar12;
      }
      FMemory::Free(local_f8);
      return pUVar12;
    }
    iVar6 = (this->ActiveGizmos).ArrayNum;
    pFVar14 = (this->ActiveGizmos).AllocatorInstance.Data;
    pFVar16 = pFVar14 + (longlong)iVar6 * 0x30;
    do {
      if ((this->ActiveGizmos).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar14 == pFVar16) goto LAB_1496d9fa8;
      iVar7 = *(int *)(pFVar14 + 0x20);
      iVar2 = (param_2->Data).ArrayNum;
      if (iVar7 == iVar2) {
        if (iVar7 < 2) goto LAB_1496d9f15;
        iVar7 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar14 + 0x18),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar17 = iVar7 == 0;
      }
      else {
        bVar17 = iVar7 + iVar2 == 1;
      }
      if (bVar17) goto LAB_1496d9f15;
      pFVar14 = pFVar14 + 0x30;
    } while( true );
  }
  pcVar3 = *(code **)(this->_padding_ + 0x300);
  pFVar8 = FText::FromString(&local_78,param_1);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"UInteractiveGizmoManager",L"CreateGizmoCannotFindFailedMessage",
                      L"UInteractiveGizmoManager::CreateGizmo: could not find requested type {0}");
  pFVar10 = FTextFormat::FTextFormat(&local_68,pFVar9,Default);
  pFVar8 = FText::Format<FText>(&local_c8,pFVar10,pFVar8);
  (*pcVar3)(this,pFVar8,0);
  local_98.TextData.Reference = local_b8.TextData.Reference;
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    local_98.TextData.Reference = local_b8.TextData.Reference;
  }
LAB_1496d9f88:
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return (UInteractiveGizmo *)0x0;
LAB_1496d9f15:
  pcVar3 = *(code **)(this->_padding_ + 0x300);
  pFVar8 = FText::FromString(&local_58,param_2);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_98,L"UInteractiveGizmoManager",L"CreateGizmoExistsMessage",
                      L"UInteractiveGizmoManager::CreateGizmo: instance identifier {0} already in use!"
                     );
  pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
  pFVar8 = FText::Format<FText>(&local_a8,pFVar10,pFVar8);
  (*pcVar3)(this,pFVar8,0);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  goto LAB_1496d9f88;
}

// DeregisterGizmoType @ 1496da7d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UInteractiveGizmoManager::DeregisterGizmoType(UInteractiveGizmoManager *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar10 = L"";
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
                      *)&this->GizmoBuilders,uVar4,param_1);
  if (iVar5 == -1) {
    pcVar2 = *(code **)(this->_padding_ + 0x300);
    pFVar6 = FText::FromString(&local_28,param_1);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UInteractiveGizmoManager",L"DeregisterFailedMessage",
                        L"UInteractiveGizmoManager::DeregisterGizmoType: could not find requested type {0}"
                       );
    pFVar8 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
    pFVar6 = FText::Format<FText>(&local_48,pFVar8,pFVar6);
    (*pcVar2)(this,pFVar6,0);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    bVar3 = false;
  }
  else {
    if (*(int *)&(this->GizmoBuilders).field_0x8 != *(int *)&(this->GizmoBuilders).field_0x34) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
      TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
                  *)&this->GizmoBuilders,uVar4,param_1);
    }
    bVar3 = true;
  }
  return bVar3;
}

// DestroyAllGizmosByOwner @ 1496da9f0

void __thiscall
UInteractiveGizmoManager::DestroyAllGizmosByOwner(UInteractiveGizmoManager *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  iVar4 = (this->ActiveGizmos).ArrayNum;
  iVar5 = 0;
  pFVar6 = (this->ActiveGizmos).AllocatorInstance.Data;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  pFVar8 = pFVar6 + (longlong)iVar4 * 0x30;
  while( true ) {
    if ((this->ActiveGizmos).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iVar5 = (int)local_38;
    }
    if (pFVar6 == pFVar8) break;
    if (*(void **)(pFVar6 + 0x28) == param_1) {
      local_48 = *(undefined8 *)pFVar6;
      iVar3 = iVar5;
      if ((local_40.Data <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar3 = (int)local_38;
      }
      if (iVar3 == local_38._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_40,(int *)((longlong)&local_38 + 4));
      }
      iVar5 = iVar3 + 1;
      local_38 = CONCAT44(local_38._4_4_,iVar5);
      *(undefined8 *)(local_40.Data + (longlong)iVar3 * 8) = local_48;
    }
    pFVar6 = pFVar6 + 0x30;
  }
  pFVar6 = local_40.Data + (longlong)iVar5 * 8;
  FVar7.Data = local_40.Data;
  iVar4 = iVar5;
  while( true ) {
    if (iVar4 != iVar5) {
      `TCheckedPointerIterator<UInteractiveGizmo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar7.Data == pFVar6) break;
    (**(code **)(this->_padding_ + 0x2d8))(this,*(undefined8 *)FVar7.Data);
    FVar7.Data = FVar7.Data + 8;
    iVar4 = (int)local_38;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// DestroyAllGizmosOfType @ 1496dab60

void __thiscall
UInteractiveGizmoManager::DestroyAllGizmosOfType(UInteractiveGizmoManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  void *local_18;
  int local_10;
  
  (**(code **)(this->_padding_ + 0x2f0))(this,&local_18,param_1);
  uVar4 = 0;
  if (0 < local_10) {
    lVar5 = 0;
    do {
      pcVar1 = *(code **)(this->_padding_ + 0x2d8);
      uVar3 = 0;
      if ((int)uVar4 < local_10) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*pcVar1)(this,*(undefined8 *)(lVar5 + (longlong)local_18));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < local_10);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// DestroyGizmo @ 1496daee0

bool __thiscall
UInteractiveGizmoManager::DestroyGizmo(UInteractiveGizmoManager *this,UInteractiveGizmo *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  
  pFVar5 = (this->ActiveGizmos).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)(this->ActiveGizmos).ArrayNum * 0x30;
  while( true ) {
    if (pFVar5 == pFVar4) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3674468212491157363>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                          ,0x8d,"ActiveGizmos.FindByPredicate(Pred)");
      if (!bVar12) {
        return false;
      }
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    if (*(UInteractiveGizmo **)pFVar5 == (UInteractiveGizmo *)0x0) {
      bVar12 = param_1 == (UInteractiveGizmo *)0x0;
    }
    else {
      bVar12 = *(UInteractiveGizmo **)pFVar5 == param_1;
    }
    if (bVar12) break;
    pFVar5 = pFVar5 + 0x30;
  }
  plVar7 = (longlong *)0x0;
  plVar6 = &param_1->_padding_;
  if (param_1 == (UInteractiveGizmo *)0x0) {
    plVar6 = plVar7;
  }
  (**(code **)(this->InputRouter->_padding_ + 0x2e8))(this->InputRouter,plVar6);
  (**(code **)(param_1->_padding_ + 0x2b8))(param_1);
  (**(code **)(this->InputRouter->_padding_ + 0x2c8))(this->InputRouter,&param_1->_padding_);
  iVar9 = (this->ActiveGizmos).ArrayNum;
  lVar3 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar5 = (this->ActiveGizmos).AllocatorInstance.Data;
    if (*(UInteractiveGizmo **)pFVar5 == (UInteractiveGizmo *)0x0) {
      bVar12 = param_1 == (UInteractiveGizmo *)0x0;
    }
    else {
      bVar12 = *(UInteractiveGizmo **)pFVar5 == param_1;
    }
    bVar12 = !bVar12;
    plVar6 = plVar7;
    plVar11 = plVar7;
    do {
      iVar9 = (int)plVar6;
      plVar7 = (longlong *)((longlong)plVar7 + 1);
      plVar6 = (longlong *)(ulonglong)(iVar9 + 1);
      if ((longlong)plVar7 < lVar3) {
        pFVar4 = pFVar5 + (longlong)plVar7 * 0x30;
        do {
          if (*(UInteractiveGizmo **)pFVar4 == (UInteractiveGizmo *)0x0) {
            bVar13 = param_1 == (UInteractiveGizmo *)0x0;
          }
          else {
            bVar13 = *(UInteractiveGizmo **)pFVar4 == param_1;
          }
          if (bVar12 != !bVar13) break;
          plVar6 = (longlong *)(ulonglong)((int)plVar6 + 1);
          plVar7 = (longlong *)((longlong)plVar7 + 1);
          pFVar4 = pFVar4 + 0x30;
        } while ((longlong)plVar7 < lVar3);
      }
      iVar8 = (int)plVar6 - iVar9;
      if (bVar12 == false) {
        DestructItems<FActiveGizmo,int>((FActiveGizmo *)(pFVar5 + (longlong)iVar9 * 0x30),iVar8);
      }
      else {
        iVar10 = (int)plVar11;
        if (iVar10 != iVar9) {
          memmove(pFVar5 + (longlong)iVar10 * 0x30,pFVar5 + (longlong)iVar9 * 0x30,
                  (longlong)iVar8 * 0x30);
        }
        plVar11 = (longlong *)(ulonglong)(uint)(iVar10 + iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
    } while ((longlong)plVar7 < lVar3);
    (this->ActiveGizmos).ArrayNum = (int)plVar11;
  }
  (**(code **)(this->_padding_ + 0x308))(this);
  return true;
}

// DisplayMessage @ 1496db0e0

void __thiscall
UInteractiveGizmoManager::DisplayMessage
          (UInteractiveGizmoManager *this,FText *param_1,EToolMessageLevel param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496db0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->TransactionsAPI + 8))();
  return;
}

// DrawHUD @ 1496db410

void __thiscall
UInteractiveGizmoManager::DrawHUD
          (UInteractiveGizmoManager *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveGizmos).ArrayNum;
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ActiveGizmos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x2c8))(*(longlong **)pFVar2,param_1,param_2);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// EmitObjectChange @ 1496db510

void __thiscall
UInteractiveGizmoManager::EmitObjectChange
          (UInteractiveGizmoManager *this,UObject *param_1,
          TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> param_2,FText *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  FToolCommandChange FVar3;
  FToolCommandChange local_res8 [4];
  
  plVar1 = (longlong *)this->_padding_;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  local_res8[0] = *param_2.Ptr;
  *param_2.Ptr = (FToolCommandChange)0x0;
  (*pcVar2)(plVar1,param_1,local_res8);
  FVar3 = *param_2.Ptr;
  if (FVar3 != (FToolCommandChange)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496db550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)FVar3 + 0x48))(FVar3,1);
    return;
  }
  return;
}

// EndUndoTransaction @ 1496db820

void __thiscall UInteractiveGizmoManager::EndUndoTransaction(UInteractiveGizmoManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496db827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x20))();
  return;
}

// FindAllGizmosOfType @ 1496dc140

TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> * __thiscall
UInteractiveGizmoManager::FindAllGizmosOfType
          (UInteractiveGizmoManager *this,
          TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar8 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (0 < (this->ActiveGizmos).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ActiveGizmos).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar2 + lVar9 + 0x10);
      if (iVar1 == iVar6) {
        if (1 < iVar1) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar2 + lVar9 + 8),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
          goto LAB_1496dc1fc;
        }
LAB_1496dc207:
        uVar5 = 0;
        if ((int)uVar8 < (this->ActiveGizmos).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        local_38[0] = *(undefined8 *)((this->ActiveGizmos).AllocatorInstance.Data + lVar9);
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UInteractiveGizmo_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_38[0];
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
LAB_1496dc1fc:
        if (bVar4) goto LAB_1496dc207;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar8 < (this->ActiveGizmos).ArrayNum);
  }
  return __return_storage_ptr__;
}

// FindGizmoByInstanceIdentifier @ 1496dc800

UInteractiveGizmo * __thiscall
UInteractiveGizmoManager::FindGizmoByInstanceIdentifier
          (UInteractiveGizmoManager *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UInteractiveGizmo *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->ActiveGizmos).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ActiveGizmos).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UInteractiveGizmo *)(*pcVar3)();
        return pUVar7;
      }
      pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
      iVar6 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar2 + lVar9 + 0x20);
      if (iVar1 == iVar6) {
        if (iVar1 < 2) goto LAB_1496dc8da;
        iVar6 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar2 + lVar9 + 0x18),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar4 = iVar6 == 0;
      }
      else {
        bVar4 = iVar1 + iVar6 == 1;
      }
      if (bVar4) {
LAB_1496dc8da:
        uVar5 = 0;
        if ((int)uVar8 < (this->ActiveGizmos).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UInteractiveGizmo *)(*pcVar3)();
          return pUVar7;
        }
        return *(UInteractiveGizmo **)
                ((this->ActiveGizmos).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar8 < (this->ActiveGizmos).ArrayNum);
  }
  return (UInteractiveGizmo *)0x0;
}

// GetContextObjectStore @ 1496dcbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UContextObjectStore * __thiscall
UInteractiveGizmoManager::GetContextObjectStore(UInteractiveGizmoManager *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UInteractiveToolsContext::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(UContextObjectStore **)(lVar2 + 0x88);
    }
  }
  return _DAT_00000088;
}

// GetContextQueriesAPI @ 1496dcc90

IToolsContextQueriesAPI * __thiscall
UInteractiveGizmoManager::GetContextQueriesAPI(UInteractiveGizmoManager *this)

{
  return this->QueriesAPI;
}

// GetPrivateStaticClass @ 1496dd480

UClass * __cdecl UInteractiveGizmoManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveGizmoManager",
               &Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton,
               StaticRegisterNativesUInteractiveGizmoManager,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractiveGizmoManager>,
               InternalVTableHelperCtorCaller<UInteractiveGizmoManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveGizmoManager.InnerSingleton;
}

// Initialize @ 1496def10

void __thiscall
UInteractiveGizmoManager::Initialize
          (UInteractiveGizmoManager *this,IToolsContextQueriesAPI *param_1,
          IToolsContextTransactionsAPI *param_2,UInputRouter *param_3)

{
  this->QueriesAPI = param_1;
  this->TransactionsAPI = param_2;
  this->InputRouter = param_3;
  return;
}

// PostInvalidation @ 1496e3050

void __thiscall UInteractiveGizmoManager::PostInvalidation(UInteractiveGizmoManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e3057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
  return;
}

// RegisterDefaultGizmos @ 1496e3640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UInteractiveGizmoManager::RegisterDefaultGizmos(UInteractiveGizmoManager *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UCombinedTransformGizmoBuilder *pUVar5;
  UGizmoViewContext *pUVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  int iVar11;
  FCombinedTransformGizmoActorFactory *pFVar12;
  undefined1 auStack_378 [32];
  FCombinedTransformGizmoActorFactory *local_358;
  FSharedReferencer<1> FStack_350;
  FCombinedTransformGizmoActorFactory *local_348;
  TReferenceControllerBase<1> *pTStack_340;
  FCombinedTransformGizmoActorFactory *local_338;
  TReferenceControllerBase<1> *pTStack_330;
  undefined1 local_328 [128];
  undefined1 local_2a8 [128];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  TReferenceControllerBase<1> *pTVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  if ((this->bDefaultGizmosRegistered != false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDefaultGizmosRegistered == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                         ,0x122,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_328,pUVar4);
  local_328._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_328);
  if (local_328._64_8_ != 0) {
    plVar7 = (longlong *)(local_328 + 0x50);
    if ((longlong *)local_328._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_328._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,&DefaultAxisPositionBuilderIdentifier,pUVar3);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UPlanePositionGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2a8,pUVar4);
  local_2a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2a8);
  if (local_2a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_2a8 + 0x50);
    if ((longlong *)local_2a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_2a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,&DefaultPlanePositionBuilderIdentifier,pUVar3);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UAxisAngleGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_228,pUVar4);
  local_228._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
  if (local_228._64_8_ != 0) {
    plVar7 = (longlong *)(local_228 + 0x50);
    if ((longlong *)local_228._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_228._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,&DefaultAxisAngleBuilderIdentifier,pUVar3);
  pUVar3 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UCombinedTransformGizmoBuilder>(pUVar3);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  iVar9 = 0;
  iVar11 = iVar9;
  if (DefaultAxisPositionBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultAxisPositionBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&pUVar5->AxisPositionBuilderIdentifier,
             (wchar_t *)DefaultAxisPositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  iVar11 = iVar9;
  if (DefaultPlanePositionBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultPlanePositionBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&pUVar5->PlanePositionBuilderIdentifier,
             (wchar_t *)DefaultPlanePositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  iVar11 = DefaultAxisAngleBuilderIdentifier.Data.ArrayNum + -1;
  if (DefaultAxisAngleBuilderIdentifier.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&pUVar5->AxisAngleBuilderIdentifier,
             (wchar_t *)DefaultAxisAngleBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  (**(code **)(this->_padding_ + 0x2c0))(this,&DefaultThreeAxisTransformBuilderIdentifier,pUVar5);
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1496e38a6:
    pTVar8 = pTVar10;
  }
  else {
    pUVar4 = UInteractiveToolsContext::StaticClass();
    iVar11 = (int)pUVar4->_padding_;
    if ((*(int *)(pTVar8[1]._padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pTVar8[1]._padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar4->_padding_)) goto LAB_1496e38a6;
  }
  pUVar6 = UContextObjectStore::FindContext<UGizmoViewContext>
                     (*(UContextObjectStore **)&pTVar8[8].SharedReferenceCount);
  if (pUVar6 != (UGizmoViewContext *)0x0) goto LAB_1496e3964;
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UGizmoViewContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar4);
  local_1a8._8_8_ = pUVar3;
  pUVar6 = (UGizmoViewContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1496e3952:
    pTVar8 = pTVar10;
  }
  else {
    pUVar4 = UInteractiveToolsContext::StaticClass();
    iVar11 = (int)pUVar4->_padding_;
    if ((*(int *)(pTVar8[1]._padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pTVar8[1]._padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar4->_padding_)) goto LAB_1496e3952;
  }
  UContextObjectStore::AddContextObject
            (*(UContextObjectStore **)&pTVar8[8].SharedReferenceCount,(UObject *)pUVar6);
LAB_1496e3964:
  FStack_350.ReferenceController = ::operator_new(0x28);
  if (FStack_350.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_358 = ___xmm_00000000000000000000000000000010;
    pFVar12 = (FCombinedTransformGizmoActorFactory *)&DAT_00000010;
    FStack_350.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_350.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar12 = (FCombinedTransformGizmoActorFactory *)(FStack_350.ReferenceController + 1);
    (FStack_350.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_350.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCombinedTransformGizmoActorFactory___00_SharedPointerInternals__6B_
    ;
    FStack_350.ReferenceController[2]._padding_ = (longlong)pUVar6;
    FStack_350.ReferenceController[1]._padding_ =
         (longlong)&___7FCombinedTransformGizmoActorFactory__6B_;
    FStack_350.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x1fffe;
    if ((pFVar12 == (FCombinedTransformGizmoActorFactory *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    LOCK();
    (FStack_350.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_350.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = FStack_350.ReferenceController;
    local_358 = pFVar12;
  }
  if (&this->GizmoActorBuilder != (TSharedPtr<FCombinedTransformGizmoActorFactory,1> *)&local_358) {
    (this->GizmoActorBuilder).Object = pFVar12;
    local_358 = (FCombinedTransformGizmoActorFactory *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GizmoActorBuilder).SharedReferenceCount,&FStack_350);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_350.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  pUVar3 = GetTransientPackageAsObject();
  pUVar5 = NewObject<UCombinedTransformGizmoBuilder>(pUVar3);
  iVar11 = iVar9;
  if (DefaultAxisPositionBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultAxisPositionBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&pUVar5->AxisPositionBuilderIdentifier,
             (wchar_t *)DefaultAxisPositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  iVar11 = iVar9;
  if (DefaultPlanePositionBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultPlanePositionBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&pUVar5->PlanePositionBuilderIdentifier,
             (wchar_t *)DefaultPlanePositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  iVar11 = iVar9;
  if (DefaultAxisAngleBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultAxisAngleBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            (&pUVar5->AxisAngleBuilderIdentifier,
             (wchar_t *)DefaultAxisAngleBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  local_348 = (this->GizmoActorBuilder).Object;
  pTStack_340 = (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
  if (pTStack_340 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_340->SharedReferenceCount = (atomic<int>)((int)pTStack_340->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (pUVar5->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
  (pUVar5->GizmoActorBuilder).Object = local_348;
  (pUVar5->GizmoActorBuilder).SharedReferenceCount.ReferenceController = pTStack_340;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  (**(code **)(this->_padding_ + 0x2c0))(this,&CustomThreeAxisTransformBuilderIdentifier,pUVar5);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_URepositionableTransformGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_128,pUVar4);
  local_128._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
  if (local_128._64_8_ != 0) {
    plVar7 = (longlong *)(local_128 + 0x50);
    if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_128._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  iVar11 = DefaultAxisPositionBuilderIdentifier.Data.ArrayNum + -1;
  if (DefaultAxisPositionBuilderIdentifier.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            ((FString *)(pUVar3 + 1),
             (wchar_t *)DefaultAxisPositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  iVar11 = iVar9;
  if (DefaultPlanePositionBuilderIdentifier.Data.ArrayNum != 0) {
    iVar11 = DefaultPlanePositionBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            ((FString *)&pUVar3[1].field_0x10,
             (wchar_t *)DefaultPlanePositionBuilderIdentifier.Data.AllocatorInstance.Data,iVar11);
  if (DefaultAxisAngleBuilderIdentifier.Data.ArrayNum != 0) {
    iVar9 = DefaultAxisAngleBuilderIdentifier.Data.ArrayNum + -1;
  }
  ::FString::AssignRange
            ((FString *)&pUVar3[1].field_0x20,
             (wchar_t *)DefaultAxisAngleBuilderIdentifier.Data.AllocatorInstance.Data,iVar9);
  local_338 = (this->GizmoActorBuilder).Object;
  pTStack_330 = (this->GizmoActorBuilder).SharedReferenceCount.ReferenceController;
  if (pTStack_330 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_330->SharedReferenceCount = (atomic<int>)((int)pTStack_330->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = *(TReferenceControllerBase<1> **)&pUVar3[2].field_0x10;
  *(FCombinedTransformGizmoActorFactory **)&pUVar3[2].field_0x8 = local_338;
  *(TReferenceControllerBase<1> **)&pUVar3[2].field_0x10 = pTStack_330;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  (**(code **)(this->_padding_ + 0x2c0))
            (this,&CustomRepositionableThreeAxisTransformBuilderIdentifier,pUVar3);
  pUVar3 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UScalableSphereGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = pUVar3;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar7 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,&DefaultScalableSphereBuilderIdentifier,pUVar3);
  this->bDefaultGizmosRegistered = true;
  return;
}

// RegisterGizmoType @ 1496e3d00

void __thiscall
UInteractiveGizmoManager::RegisterGizmoType
          (UInteractiveGizmoManager *this,FString *param_1,UInteractiveGizmoBuilder *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TPairInitializer<FString_const_&,TObjectPtr<UInteractiveGizmoBuilder>_&&> local_res8;
  FString *local_18;
  TObjectPtr<UInteractiveGizmoBuilder> **local_10;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar5 = TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
                      *)&this->GizmoBuilders,uVar4,param_1);
  if (iVar5 == -1) {
    local_res8.Value = (TObjectPtr<UInteractiveGizmoBuilder> *)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UInteractiveGizmoBuilder *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_10 = &local_res8.Value;
    local_18 = param_1;
    TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInteractiveGizmoBuilder>_&&>_>
              ((TSet<TTuple<FString,TObjectPtr<UInteractiveGizmoBuilder>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveGizmoBuilder>,0>,FDefaultSetAllocator>
                *)&this->GizmoBuilders,&local_res8,(bool *)&local_18);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3674468212491157440>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveGizmoManager.cpp"
                       ,0x40,"GizmoBuilders.Contains(Identifier) == false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Render @ 1496e5350

void __thiscall
UInteractiveGizmoManager::Render(UInteractiveGizmoManager *this,IToolsContextRenderAPI *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveGizmos).ArrayNum;
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ActiveGizmos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x2c0))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// Shutdown @ 1496e61d0

void __thiscall UInteractiveGizmoManager::Shutdown(UInteractiveGizmoManager *this)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FActiveGizmo *pFVar4;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this->QueriesAPI = (IToolsContextQueriesAPI *)0x0;
  iVar2 = (this->ActiveGizmos).ArrayNum;
  pFVar4 = (FActiveGizmo *)(this->ActiveGizmos).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,0,&local_38,iVar2,&local_2c);
    ConstructItems<FActiveGizmo,FActiveGizmo,int>(local_38.Data,pFVar4,iVar2);
  }
  iVar2 = local_30;
  pFVar4 = (FActiveGizmo *)(local_38.Data + (longlong)local_30 * 0x30);
  FVar3.Data = local_38.Data;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FActiveGizmo *)FVar3.Data == pFVar4) break;
    (**(code **)(this->_padding_ + 0x2d8))
              (this,(((FActiveGizmo *)FVar3.Data)->Gizmo).field0_0x0.DebugPtr);
    FVar3.Data = FVar3.Data + 0x30;
  }
  piVar1 = &(this->ActiveGizmos).ArrayMax;
  pFVar4 = (FActiveGizmo *)(this->ActiveGizmos).AllocatorInstance.Data;
  iVar2 = (this->ActiveGizmos).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FActiveGizmo,int>(pFVar4,iVar2);
    (this->ActiveGizmos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->ActiveGizmos).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FActiveGizmo,int>(pFVar4,iVar2);
    (this->ActiveGizmos).ArrayNum = 0;
  }
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  if (this->bDefaultGizmosRegistered != false) {
    (**(code **)(this->_padding_ + 0x2c8))(this,&DefaultAxisPositionBuilderIdentifier);
    (**(code **)(this->_padding_ + 0x2c8))(this,&DefaultPlanePositionBuilderIdentifier);
    (**(code **)(this->_padding_ + 0x2c8))(this,&DefaultAxisAngleBuilderIdentifier);
    (**(code **)(this->_padding_ + 0x2c8))(this,&DefaultThreeAxisTransformBuilderIdentifier);
    (**(code **)(this->_padding_ + 0x2c8))(this,&DefaultScalableSphereBuilderIdentifier);
  }
  DestructItems<FActiveGizmo,int>((FActiveGizmo *)local_38.Data,local_30);
  if ((FActiveGizmo *)local_38.Data != (FActiveGizmo *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// StaticRegisterNativesUInteractiveGizmoManager @ 1496e66c0

void __cdecl UInteractiveGizmoManager::StaticRegisterNativesUInteractiveGizmoManager(void)

{
  return;
}

// Tick @ 1496e6960

void __thiscall UInteractiveGizmoManager::Tick(UInteractiveGizmoManager *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ActiveGizmos).ArrayNum;
  pFVar2 = (this->ActiveGizmos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ActiveGizmos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FActiveGizmo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(**(longlong **)pFVar2 + 0x2d0))(*(longlong **)pFVar2,param_1);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// _getUObject @ 1496e8120

UObject * __thiscall UInteractiveGizmoManager::_getUObject(UInteractiveGizmoManager *this)

{
  return (UObject *)&this[-1].GizmoBuilders.field_0x40;
}

