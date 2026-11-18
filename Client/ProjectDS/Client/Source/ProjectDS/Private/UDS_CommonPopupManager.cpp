// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b461b50

UClass * __cdecl UDS_CommonPopupManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonPopupManager",
               &Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton,
               StaticRegisterNativesUDS_CommonPopupManager,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonPopupManager>,
               InternalVTableHelperCtorCaller<UDS_CommonPopupManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton;
}

// UDS_CommonPopupManager @ 14b465b70

UDS_CommonPopupManager * __thiscall
UDS_CommonPopupManager::UDS_CommonPopupManager(UDS_CommonPopupManager *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CommonPopupManager__6B_;
  (this->QuantityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->QuantityData).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantitySelectionDelegate = 0;
  *(undefined8 *)&(this->QuantitySelectionDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QuantitySelectionDelegate).field_0x10 = 0;
  (this->CommonPopupModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonPopupModelList).ArrayNum = 0;
  (this->CommonPopupModelList).ArrayMax = 0;
  return this;
}

// UDS_CommonPopupManager @ 14b465bd0

UDS_CommonPopupManager * __thiscall
UDS_CommonPopupManager::UDS_CommonPopupManager
          (UDS_CommonPopupManager *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CommonPopupManager__6B_;
  (this->QuantityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->QuantityData).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->QuantitySelectionDelegate = 0;
  *(undefined8 *)&(this->QuantitySelectionDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->QuantitySelectionDelegate).field_0x10 = 0;
  (this->CommonPopupModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommonPopupModelList).ArrayNum = 0;
  (this->CommonPopupModelList).ArrayMax = 0;
  return this;
}

// ~UDS_CommonPopupManager @ 14b4666c0

void __thiscall UDS_CommonPopupManager::~UDS_CommonPopupManager(UDS_CommonPopupManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_CommonPopupManager__6B_;
  pFVar1 = (this->CommonPopupModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->QuantitySelectionDelegate);
  pvVar2 = *(void **)&(this->QuantitySelectionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->QuantitySelectionDelegate);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b468560

UClass * __cdecl UDS_CommonPopupManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonPopupManager",
               &Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton,
               StaticRegisterNativesUDS_CommonPopupManager,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonPopupManager>,
               InternalVTableHelperCtorCaller<UDS_CommonPopupManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonPopupManager.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonPopupManager @ 14b468cf0

void __cdecl UDS_CommonPopupManager::StaticRegisterNativesUDS_CommonPopupManager(void)

{
  return;
}

// CreateCommonPopup @ 14ba9a2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> __thiscall
UDS_CommonPopupManager::CreateCommonPopup(UDS_CommonPopupManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> TVar8;
  longlong *plVar9;
  FWeakObjectPtr in_RDX;
  FObjectPtr_u_0 FVar10;
  undefined1 auStackY_108 [32];
  UObject *local_b8;
  undefined8 local_b0;
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_M_CommonPopup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = this;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387232>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x20,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
      return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar8.WeakPtr;
    }
    FVar10.Handle = (UObject *)&local_b0;
    *(undefined8 *)in_RDX = 0;
    local_b0 = 0;
  }
  else {
    local_b8 = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    pFVar2 = (this->CommonPopupModelList).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
       ((FScriptContainerElement *)&local_b8 <
        pFVar2 + (longlong)(this->CommonPopupModelList).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.WeakPtr = (FWeakObjectPtr)(*pcVar3)();
        return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar8.WeakPtr;
      }
    }
    iVar5 = (this->CommonPopupModelList).ArrayNum;
    piVar1 = &(this->CommonPopupModelList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->CommonPopupModelList).AllocatorInstance,piVar1);
    }
    (this->CommonPopupModelList).ArrayNum = iVar5 + 1;
    *(UObject **)((this->CommonPopupModelList).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_b8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_b8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_b8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
    }
    *(undefined8 *)in_RDX = 0;
    local_a8[0] = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FVar10.Handle = (UObject *)local_a8;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)FVar10);
  return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
}

// CreateQuantitySelectionPopup @ 14ba9ca10

TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> __thiscall
UDS_CommonPopupManager::CreateQuantitySelectionPopup
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_InventoryQuantityData,FWeakObjectPtr> param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  bool bVar1;
  EDS_InventoryType EVar2;
  EDS_CommonPopupContext EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> TVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  int *piVar10;
  int *piVar11;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar14;
  UDS_ItemData *pUVar15;
  UDS_QuantityData *pUVar16;
  FString *pFVar17;
  FText *pFVar18;
  FObjectPtr_u_0 FVar19;
  code *pcVar20;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_stack_00000028;
  EDS_InventoryType local_1e8 [8];
  FWeakObjectPtr local_1e0;
  EDS_InventoryType local_1d8 [8];
  EDS_InventoryType local_1d0 [8];
  EDS_InventoryType local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FDS_StringUiID local_198;
  FDS_StringUiID local_188;
  FText local_178;
  FText local_168;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_158;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_140;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_128;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_110;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_f8;
  FDS_Text local_e0;
  FDS_Text local_90;
  
  local_res18 = param_2.WeakPtr;
  local_res20 = (FWeakObjectPtr)param_3;
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar8 = FWeakObjectPtr::Get(&local_res18);
      pUVar9 = FWeakObjectPtr::Get(&local_res20);
      local_1e8[0] = (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9);
      piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar8[10].field_0x18,(uint)local_1e8[0],local_1e8);
      piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar8[8].field_0x18,(uint)local_1e8[0],local_1e8);
      if (*piVar10 + *piVar11 != 0) {
        (this->QuantityData).WeakPtr = local_res20;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (&this->QuantitySelectionDelegate,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)in_stack_00000028);
        CreateCommonPopup(this);
        bVar1 = FWeakObjectPtr::IsValid(&local_1e0);
        if (bVar1) {
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          pFVar13 = FDS_Text::FromStringTable(&local_e0,StringUi,0x157d);
          UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          pFVar13 = FDS_Text::FromStringTable(&local_90,StringUi,0x157e);
          UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    ::CreateUObject<UDS_CommonPopupManager>
                              (&local_158,this,(pmf_dd1ba275)0x14babeff0);
          UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonCancel,pTVar14);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x65,false);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    ::CreateUObject<UDS_CommonPopupManager>
                              (&local_140,this,(pmf_dd1ba275)0x14babf0c0);
          UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar14);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    ::CreateUObject<UDS_CommonPopupManager>
                              (&local_128,this,(pmf_dd1ba275)0x14babe8c0);
          UDS_M_CommonPopup::SetDelegate(pUVar12,Slider,pTVar14);
          pUVar15 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
          pUVar8 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
          EVar2 = (**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8);
          iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar15,EVar2);
          if (0 < iVar4) {
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            pUVar15 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
            pUVar8 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            EVar2 = (**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8);
            iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar15,EVar2);
            pUVar8 = FWeakObjectPtr::Get(&local_res18);
            UDS_M_CommonPopup::SetItemSlot
                      (pUVar12,ItemSlot01,*(int *)&pUVar8[8].field_0x10,0,0,iVar4,CommonPopup);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_CommonPopupManager>
                                (&local_110,this,(pmf_dd1ba275)0x14babea30);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ItemSlot01,pTVar14);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar12,ItemSlot01);
          }
          pUVar8 = FWeakObjectPtr::Get(&local_res18);
          pUVar9 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
          local_1d8[0] = (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9);
          piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                    ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                              (&pUVar8[10].field_0x18,(uint)local_1d8[0],local_1d8);
          if (0 < *piVar10) {
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            pUVar8 = FWeakObjectPtr::Get(&local_res18);
            pUVar9 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            local_1d0[0] = (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9);
            piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar8[10].field_0x18,(uint)local_1d0[0],local_1d0);
            iVar4 = *piVar10;
            pUVar8 = FWeakObjectPtr::Get(&local_res18);
            UDS_M_CommonPopup::SetItemSlot
                      (pUVar12,ItemSlot02,*(int *)&pUVar8[8].field_0x10,0,0,iVar4,CommonPopup);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            pTVar14 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                      ::CreateUObject<UDS_CommonPopupManager>
                                (&local_f8,this,(pmf_dd1ba275)0x14babec40);
            UDS_M_CommonPopup::SetDelegate(pUVar12,ItemSlot02,pTVar14);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            EVar3 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar12);
            if (EVar3 == None) {
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
              UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar12,ItemSlot02);
            }
          }
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          EVar3 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar12);
          if (EVar3 == ItemSlot01) {
            pUVar16 = (UDS_QuantityData *)FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            iVar5 = UDS_QuantityData::GetMaxQuantity(pUVar16);
            pUVar15 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
            pUVar8 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            EVar2 = (**(code **)(*(longlong *)pUVar8 + 0x2c0))(pUVar8);
            iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar15,EVar2);
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            local_188.ID = 0x1fcfd;
            local_188._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            pFVar17 = FDS_StringUiID::Str(&local_188);
            pFVar18 = FText::FromString(&local_168,pFVar17);
            pUVar8 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            pcVar20 = *(code **)(*(longlong *)pUVar8 + 0x318);
          }
          else {
            if (EVar3 != ItemSlot02) {
              bVar1 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3948308068789387154>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                                 ,0x6e,"false");
              if (bVar1) {
                pcVar20 = (code *)swi(3);
                TVar7.WeakPtr = (FWeakObjectPtr)(*pcVar20)();
                return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar7.WeakPtr;
              }
              *(undefined8 *)param_1.WeakPtr = 0;
              local_1a0 = 0;
              FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)&local_1a0);
              goto LAB_14ba9d123;
            }
            pUVar16 = (UDS_QuantityData *)FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            iVar5 = UDS_QuantityData::GetMaxQuantity(pUVar16);
            pUVar8 = FWeakObjectPtr::Get(&local_res18);
            pUVar9 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            local_1c8[0] = (**(code **)(*(longlong *)pUVar9 + 0x2c0))(pUVar9);
            piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar8[10].field_0x18,(uint)local_1c8[0],local_1c8);
            iVar4 = *piVar10;
            pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
            local_198.ID = 0x1fcfd;
            local_198._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            pFVar17 = FDS_StringUiID::Str(&local_198);
            pFVar18 = FText::FromString(&local_178,pFVar17);
            pUVar8 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
            pcVar20 = *(code **)(*(longlong *)pUVar8 + 0x310);
          }
          iVar6 = (*pcVar20)(pUVar8);
          if (iVar4 < iVar5) {
            iVar5 = iVar4;
          }
          UDS_M_CommonPopup::SetSlider(pUVar12,0,iVar5,iVar6,pFVar18,1);
          UpdateButtonState(this,(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)local_1e0);
          pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_1e0);
          UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
          *(FWeakObjectPtr *)param_1.WeakPtr = local_1e0;
        }
        else {
          bVar1 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3948308068789387203>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                             ,0x3d,"false");
          if (bVar1) {
            pcVar20 = (code *)swi(3);
            TVar7.WeakPtr = (FWeakObjectPtr)(*pcVar20)();
            return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar7.WeakPtr;
          }
          *(undefined8 *)param_1.WeakPtr = 0;
          local_1a8 = 0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)&local_1a8);
        }
LAB_14ba9d123:
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)in_stack_00000028);
        return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr;
      }
      FVar19.Handle = (UObject *)&local_1b0;
      local_1b0 = 0;
    }
    else {
      bVar1 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3948308068789387211>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                         ,0x35,"false");
      if (bVar1) {
        pcVar20 = (code *)swi(3);
        TVar7.WeakPtr = (FWeakObjectPtr)(*pcVar20)();
        return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar7.WeakPtr;
      }
      FVar19.Handle = (UObject *)&local_1b8;
      local_1b8 = 0;
    }
  }
  else {
    bVar1 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387212>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x34,"false");
    if (bVar1) {
      pcVar20 = (code *)swi(3);
      TVar7.WeakPtr = (FWeakObjectPtr)(*pcVar20)();
      return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar7.WeakPtr;
    }
    FVar19.Handle = (UObject *)&local_1c0;
    local_1c0 = 0;
  }
  *(undefined8 *)param_1.WeakPtr = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1.WeakPtr,(FObjectPtr)FVar19);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(in_stack_00000028);
  if (*(void **)&in_stack_00000028->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&in_stack_00000028->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)in_stack_00000028);
  return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)param_1.WeakPtr;
}

// GetInst @ 14baab460

UDS_CommonPopupManager * __cdecl UDS_CommonPopupManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_CommonPopupManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_CommonPopupManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_CommonPopupManager_NoRegister();
  pUVar3 = (UDS_CommonPopupManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_CommonPopupManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_CommonPopupManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_CommonPopupManager *)0x0;
}

// IsPopupOpened @ 14baba4f0

bool __thiscall UDS_CommonPopupManager::IsPopupOpened(UDS_CommonPopupManager *this)

{
  return 0 < (this->CommonPopupModelList).ArrayNum;
}

// OnChangedSliderInventoryQuantity @ 14babe8c0

void __thiscall
UDS_CommonPopupManager::OnChangedSliderInventoryQuantity
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  bool bVar1;
  EDS_CommonPopupContext EVar2;
  int iVar3;
  UDS_M_CommonPopup *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->QuantityData).WeakPtr);
    if (bVar1) {
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      EVar2 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar4);
      if (EVar2 == ItemSlot01) {
        pUVar5 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
        pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x308);
      }
      else {
        if (EVar2 != ItemSlot02) {
          bVar1 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3948308068789387094>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                             ,0xaa,"false");
          if (!bVar1) {
            return;
          }
          goto code_r0x00014babe9b7;
        }
        pUVar5 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
        pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x300);
      }
      pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      iVar3 = UDS_M_CommonPopup::GetSliderCount(pUVar4);
      (*pcVar6)(pUVar5,iVar3);
      UpdateButtonState(this,(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)local_res10);
      return;
    }
    bVar1 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387112>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x98,"false");
    if (!bVar1) {
      return;
    }
  }
  else {
    bVar1 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387113>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x97,"false");
    if (!bVar1) {
      return;
    }
  }
code_r0x00014babe9b7:
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// OnClickedCommonPopupItemSlot01 @ 14babea30

void __thiscall
UDS_CommonPopupManager::OnClickedCommonPopupItemSlot01
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  EDS_InventoryType EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UDS_M_CommonPopup *pUVar9;
  UDS_QuantityData *pUVar10;
  UDS_ItemData *this_00;
  UObject *pUVar11;
  TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    this_01 = &this->QuantityData;
    bVar3 = FWeakObjectPtr::IsValid(&this_01->WeakPtr);
    if (bVar3) {
      pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar9,ItemSlot01);
      pUVar10 = (UDS_QuantityData *)FWeakObjectPtr::Get(&this_01->WeakPtr);
      UDS_QuantityData::GetItemUID(pUVar10);
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_res20);
      bVar3 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar3) {
        this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res20);
        pUVar11 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        EVar4 = (**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11);
        iVar5 = UDS_ItemData::GetStackCount_UnTradable(this_00,EVar4);
        pUVar11 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        pUVar10 = (UDS_QuantityData *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        iVar6 = (**(code **)(*(longlong *)pUVar11 + 0x310))(pUVar11);
        iVar7 = UDS_QuantityData::GetMaxQuantity(pUVar10);
        pUVar9 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pUVar11 = FWeakObjectPtr::Get(&this_01->WeakPtr);
        iVar8 = (**(code **)(*(longlong *)pUVar11 + 0x318))(pUVar11);
        iVar2 = iVar7 - iVar6;
        if (iVar5 < iVar7 - iVar6) {
          iVar2 = iVar5;
        }
        UDS_M_CommonPopup::UpdateSlider(pUVar9,0,iVar2,iVar8);
        pUVar11 = FWeakObjectPtr::Get(&local_res10);
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_28[0] = 0;
        pcVar1 = *(code **)(*(longlong *)pUVar11 + 0x2e0);
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_28);
        (*pcVar1)(pUVar11,local_res18,0);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3948308068789387056>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                           ,0xd0,"false");
        if (bVar3) goto code_r0x00014babeb30;
      }
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387061>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0xcb,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387062>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0xca,"false");
    if (!bVar3) {
      return;
    }
  }
code_r0x00014babeb30:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// OnClickedCommonPopupItemSlot02 @ 14babec40

void __thiscall
UDS_CommonPopupManager::OnClickedCommonPopupItemSlot02
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UDS_M_CommonPopup *pUVar8;
  UDS_QuantityData *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  int *piVar12;
  TWeakObjectPtr<UDS_QuantityData,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res10;
  EDS_InventoryType local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  undefined8 local_20;
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    this_00 = &this->QuantityData;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
      UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar8,ItemSlot02);
      pUVar9 = (UDS_QuantityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_QuantityData::GetItemUID(pUVar9);
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_28);
      bVar4 = FWeakObjectPtr::IsValid(&local_28);
      if (bVar4) {
        pUVar10 = FWeakObjectPtr::Get(&local_28);
        pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_res18[0] = (**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11);
        piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                            (&pUVar10[10].field_0x18,(uint)local_res18[0],local_res18);
        iVar1 = *piVar12;
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pUVar9 = (UDS_QuantityData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar5 = (**(code **)(*(longlong *)pUVar10 + 0x318))(pUVar10);
        iVar6 = UDS_QuantityData::GetMaxQuantity(pUVar9);
        pUVar8 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar7 = (**(code **)(*(longlong *)pUVar10 + 0x310))(pUVar10);
        iVar3 = iVar6 - iVar5;
        if (iVar1 < iVar6 - iVar5) {
          iVar3 = iVar1;
        }
        UDS_M_CommonPopup::UpdateSlider(pUVar8,0,iVar3,iVar7);
        pUVar10 = FWeakObjectPtr::Get(&local_res10);
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_20 = 0;
        pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x2e0);
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
        (*pcVar2)(pUVar10,local_res20,0);
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3948308068789387039>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                           ,0xe1,"false");
        if (bVar4) goto code_r0x00014babed40;
      }
      return;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387044>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0xdc,"false");
    if (!bVar4) {
      return;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387045>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0xdb,"false");
    if (!bVar4) {
      return;
    }
  }
code_r0x00014babed40:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnClickedRegisterPopupCancel @ 14babeff0

void __thiscall
UDS_CommonPopupManager::OnClickedRegisterPopupCancel
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387141>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x7b,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014babf075:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->QuantityData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387140>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x7c,"false");
    if (bVar2) goto code_r0x00014babf075;
  }
  return;
}

// OnClickedRegisterPopupConfirm @ 14babf0c0

void __thiscall
UDS_CommonPopupManager::OnClickedRegisterPopupConfirm
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_M_CommonPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387131>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x85,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014babf153:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->QuantityData).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4);
    pUVar4 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
    iVar3 = (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4);
    if (iVar3 < 1) {
      local_28._0_8_ = 0;
      local_28._8_8_ = 0;
      local_28._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x157f,Alert_System_01,&local_28);
      return;
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->QuantitySelectionDelegate);
    this_00 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(local_res10);
    UDS_M_CommonPopup::CloseCommonPopup(this_00);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387130>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x86,"false");
    if (bVar2) goto code_r0x00014babf153;
  }
  return;
}

// ReleaseCommonPopup @ 14bac6e10

void __thiscall
UDS_CommonPopupManager::ReleaseCommonPopup
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FWeakObjectPtr local_res10;
  UObject *local_38 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    local_38[0] = FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38[0]);
    }
    pFVar2 = (this->CommonPopupModelList).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar2 + (longlong)(this->CommonPopupModelList).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->CommonPopupModelList).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar2 = (this->CommonPopupModelList).AllocatorInstance.Data;
      bVar4 = *(UObject **)pFVar2 != local_38[0];
      lVar6 = 0;
      pUVar5 = local_38[0];
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(UObject **)(pFVar2 + lVar6 * 8) != pUVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pUVar5 = local_38[0];
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (this->CommonPopupModelList).ArrayNum = iVar9;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3948308068789387224>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_CommonPopupManager.cpp"
                       ,0x28,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// UpdateButtonState @ 14bad59f0

void __thiscall
UDS_CommonPopupManager::UpdateButtonState
          (UDS_CommonPopupManager *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_ModelBase *this_00;
  FWeakObjectPtr *this_01;
  UClass *pUVar6;
  undefined1 *puVar7;
  FObjectPtr_u_0 FVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_res10 = param_1.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  if (*(int *)&pUVar5[0x16].field_0x8 != *(int *)&pUVar5[0x17].field_0xc) {
    puVar7 = *(undefined1 **)&pUVar5[0x17].field_0x18;
    if (*(undefined1 **)&pUVar5[0x17].field_0x18 == (undefined1 *)0x0) {
      puVar7 = &pUVar5[0x17].field_0x10;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&pUVar5[0x17].field_0x20 - 1U & 0xb) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(pUVar5 + 0x16);
      do {
        if (*(char *)(lVar1 + (longlong)iVar4 * 0x14) == '\v') {
          this_01 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(pUVar5 + 0x16,ButtonConfirm)->WeakPtr;
          pUVar5 = FWeakObjectPtr::Get(this_01);
          if (pUVar5 == (UObject *)0x0) {
LAB_14bad5ba4:
            pUVar5 = (UObject *)0x0;
          }
          else {
            pUVar6 = Z_Construct_UClass_UDS_M_CommonIconTextButton_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) goto LAB_14bad5ba4;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_38 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          FVar8.Handle = (UObject *)&local_38;
          goto LAB_14bad5a9b;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1729980661818720170>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.h"
                     ,0x56,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar8.Handle = (UObject *)&local_30;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_30 = 0;
LAB_14bad5a9b:
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)FVar8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&(this->QuantityData).WeakPtr);
    iVar4 = (**(code **)(*(longlong *)pUVar5 + 800))(pUVar5);
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
              ((FDS_DataContainer *)&pUVar5[1].field_0x18,IsDisabled,iVar4 < 1);
    this_00 = (UDS_ModelBase *)FWeakObjectPtr::Get(&local_res18);
    UDS_ModelBase::SetDirty(this_00,true);
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    local_28[0] = 0;
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x2e0);
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_28);
    (*pcVar2)(pUVar5,local_res20,0);
  }
  return;
}

