// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b51c740

UClass * __cdecl UDS_M_WaitCompleteItemRestoreSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteItemRestoreSlot",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteItemRestoreSlot,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_WaitCompleteItemRestoreSlot>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteItemRestoreSlot>,local_res8,
               UDS_M_WaitCompleteListSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton;
}

// UDS_M_WaitCompleteItemRestoreSlot @ 14b5225f0

UDS_M_WaitCompleteItemRestoreSlot * __thiscall
UDS_M_WaitCompleteItemRestoreSlot::UDS_M_WaitCompleteItemRestoreSlot
          (UDS_M_WaitCompleteItemRestoreSlot *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_WaitCompleteListSlot__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_WaitCompleteItemRestoreSlot__6B_;
  return this;
}

// UDS_M_WaitCompleteItemRestoreSlot @ 14b522640

UDS_M_WaitCompleteItemRestoreSlot * __thiscall
UDS_M_WaitCompleteItemRestoreSlot::UDS_M_WaitCompleteItemRestoreSlot
          (UDS_M_WaitCompleteItemRestoreSlot *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_WaitCompleteListSlot__6B_;
  *(undefined8 *)&this->field_0x1a8 = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->field_0x1a8,(FObjectPtr)local_res8);
  *(undefined ***)this = &___7UDS_M_WaitCompleteItemRestoreSlot__6B_;
  return this;
}

// ~UDS_M_WaitCompleteItemRestoreSlot @ 14b5236b0

void __thiscall
UDS_M_WaitCompleteItemRestoreSlot::~UDS_M_WaitCompleteItemRestoreSlot
          (UDS_M_WaitCompleteItemRestoreSlot *this)

{
  *(undefined ***)this = &___7UDS_M_WaitCompleteListSlot__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526820

UClass * __cdecl UDS_M_WaitCompleteItemRestoreSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteItemRestoreSlot",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteItemRestoreSlot,0x1b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_WaitCompleteItemRestoreSlot>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteItemRestoreSlot>,local_res8,
               UDS_M_WaitCompleteListSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteItemRestoreSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_WaitCompleteItemRestoreSlot @ 14b5275c0

void __cdecl
UDS_M_WaitCompleteItemRestoreSlot::StaticRegisterNativesUDS_M_WaitCompleteItemRestoreSlot(void)

{
  return;
}

// GetCommonPopupModel @ 14bd5ac30

TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> __thiscall
UDS_M_WaitCompleteItemRestoreSlot::GetCommonPopupModel(UDS_M_WaitCompleteItemRestoreSlot *this)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> TVar3;
  UDS_CommonPopupManager *this_00;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_GameInstance *local_28;
  undefined8 local_20;
  UDS_CommonPopupManager *local_18;
  undefined8 local_10;
  
  local_28 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UDS_GameInstance *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
  bVar2 = TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2589479123273384117>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                       ,0xb5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar3.WeakPtr;
    }
    *(undefined8 *)in_RDX = 0;
    local_20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_20);
    return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
  }
  local_18 = UDS_CommonPopupManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18 != (UDS_CommonPopupManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_18);
  bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2589479123273384120>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                       ,0xb8,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)TVar3.WeakPtr;
    }
    *(undefined8 *)in_RDX = 0;
    local_10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_10);
    return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
  }
  this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
  UDS_CommonPopupManager::CreateCommonPopup(this_00);
  return (TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>)in_RDX;
}

// GetContextList @ 14bd5b290

TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_WaitCompleteItemRestoreSlot::GetContextList
          (UDS_M_WaitCompleteItemRestoreSlot *this,
          TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr local_res8;
  longlong *local_res18;
  undefined1 local_res20 [8];
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UDS_M_WaitCompleteListSlot::GetContextList
            ((UDS_M_WaitCompleteListSlot *)this,__return_storage_ptr__);
  local_res8.ObjectIndex = *(int *)&this->field_0x1a8;
  local_res8.ObjectSerialNumber = *(int *)&this->field_0x1ac;
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res8);
    uVar7 = *(undefined8 *)&pUVar4[2].field_0x18;
    DS_ItemDataUtil::GetItemDataByUID((long64)local_res20);
    TVar8.WeakPtr._1_7_ = (undefined7)((ulonglong)uVar7 >> 8);
    TVar8.WeakPtr.ObjectIndex._0_1_ = 0x3e;
    DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res18,TVar8);
    if (local_res18 == (longlong *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2589479123273384045>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                         ,0x6d,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*local_res18 + 0x310))(local_res18,local_18);
      local_28 = *puVar6;
      local_20 = puVar6[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
         ((FScriptContainerElement *)&local_28 <
          pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar1)();
          return pTVar5;
        }
      }
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (iVar3 == __return_storage_ptr__->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar3 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar9 = local_28;
      *(longlong *)(pFVar9 + 8) = local_20;
      local_20 = 0;
      local_28 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    }
  }
  return __return_storage_ptr__;
}

// IsCancel @ 14bd6a390

bool __thiscall UDS_M_WaitCompleteItemRestoreSlot::IsCancel(UDS_M_WaitCompleteItemRestoreSlot *this)

{
  bool bVar1;
  UDS_WaitCompleteData *this_00;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0].ObjectIndex = *(int *)&this->field_0x1a8;
  local_res8[0].ObjectSerialNumber = *(int *)&this->field_0x1ac;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(local_res8);
  bVar1 = UDS_WaitCompleteData::IsComplete(this_00);
  return !bVar1;
}

// OnClickCommonPopupButtonEvent @ 14bd72990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_WaitCompleteItemRestoreSlot::OnClickCommonPopupButtonEvent
          (UDS_M_WaitCompleteItemRestoreSlot *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  UDS_WindowManager *this_00;
  long64 lVar5;
  float local_res20 [2];
  uint local_18 [2];
  FWeakObjectPtr local_10;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_10);
  if (bVar2) {
    if (param_2) {
      pUVar3 = FWeakObjectPtr::Get(&local_10);
      iVar1 = *(int *)&pUVar3[9].field_0x10;
      bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x1a8);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1a8);
        lVar5 = *(long64 *)&pUVar3[2].field_0x10;
      }
      else {
        lVar5 = 0;
      }
      uVar4 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListSlotData>
                        ((FDS_DataContainer *)&this->field_0x40,NpcEntityID);
      FDS_ItemRepairService::SendItemRestoreCancel(uVar4,lVar5,iVar1);
    }
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res20[0] = 0.0;
      local_18[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_18,local_res20);
    }
  }
  return;
}

// OnClickedCancel @ 14bd75100

void __thiscall
UDS_M_WaitCompleteItemRestoreSlot::OnClickedCancel(UDS_M_WaitCompleteItemRestoreSlot *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined1 local_178 [8];
  FDelegateAllocation local_170;
  undefined1 local_160 [8];
  FDelegateAllocation local_158;
  UDS_GameInstance *local_148;
  undefined8 local_140;
  UDS_CommonPopupManager *local_138;
  undefined8 local_130;
  UDS_M_WaitCompleteItemRestoreSlot *local_128;
  UDS_M_WaitCompleteItemRestoreSlot *local_120;
  FDS_Text local_118;
  FDS_Text local_c8;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_148 = UDS_GameInstance::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_148);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UDS_GameInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_148);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_148);
  bVar2 = TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GameInstance,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2589479123273384117>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                       ,0xb5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_140 = 0;
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_140);
  }
  else {
    local_138 = UDS_CommonPopupManager::GetInst();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_138 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_138);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_138 != (UDS_CommonPopupManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_138);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_138);
    bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_res18,
                       (void *)0x0);
    if (bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2589479123273384120>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                         ,0xb8,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_130 = 0;
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_130);
    }
    else {
      this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_res18);
      UDS_CommonPopupManager::CreateCommonPopup(this_00);
    }
  }
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_118.StringTableType = None;
    local_118.StringTableID = 0;
    local_118.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_118.StringEnumTableNameID.Number = 0;
    local_118.TimeExpressionType = None;
    local_118.DateTime.Ticks = 0;
    local_118.TimeSpan.Ticks = 0;
    local_118.IsExpression = false;
    local_118.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.UniqueString.Data.ArrayNum = 0;
    local_118.UniqueString.Data.ArrayMax = 0;
    local_118.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.FormatArgs.ArrayNum = 0;
    local_118.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_118,StringUi,0x9fed);
    UDS_M_CommonPopup::SetTitle(pUVar3,&local_118);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_c8.StringTableType = None;
    local_c8.StringTableID = 0;
    local_c8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_c8.StringEnumTableNameID.Number = 0;
    local_c8.TimeExpressionType = None;
    local_c8.DateTime.Ticks = 0;
    local_c8.TimeSpan.Ticks = 0;
    local_c8.IsExpression = false;
    local_c8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.UniqueString.Data.ArrayNum = 0;
    local_c8.UniqueString.Data.ArrayMax = 0;
    local_c8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.FormatArgs.ArrayNum = 0;
    local_c8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_c8,StringUi,0x9fee);
    UDS_M_CommonPopup::SetMainContent(pUVar3,&local_c8);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetButton(pUVar3,ButtonCancel,StringUi,0x65,false);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_178 = (undefined1  [8])0x0;
    local_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_170.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
               (FWriteAccessScope *)&local_78);
    local_60 = &local_170;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_170);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar4 + 1) = 1;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_WaitCompleteItemRestoreSlot____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_WaitCompleteItemRestoreSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_128 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_WaitCompleteItemRestoreSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_128);
      puVar4[4] = OnClickCommonPopupButtonEvent;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    UDS_M_CommonPopup::SetDelegate
              (pUVar3,ButtonCancel,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_178);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetButton(pUVar3,ButtonConfirm,StringUi,0x66,false);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    local_160 = (undefined1  [8])0x0;
    local_158.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_158.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
               (FWriteAccessScope *)&local_58);
    local_40 = &local_158;
    puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_158);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      *(undefined1 *)(puVar4 + 1) = 0;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_WaitCompleteItemRestoreSlot____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___N__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_WaitCompleteItemRestoreSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_120 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_M_WaitCompleteItemRestoreSlot *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_120);
      puVar4[4] = OnClickCommonPopupButtonEvent;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    UDS_M_CommonPopup::SetDelegate
              (pUVar3,ButtonConfirm,
               (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)local_160);
    pUVar3 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::OpenCommonPopup(pUVar3);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2589479123273384066>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteListSlot.cpp"
                       ,0x82,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedComplete @ 14bd757a0

void __thiscall
UDS_M_WaitCompleteItemRestoreSlot::OnClickedComplete(UDS_M_WaitCompleteItemRestoreSlot *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  FWeakObjectPtr local_res10 [3];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x1a8);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1a8);
      uVar5 = *(undefined8 *)&pUVar3[2].field_0x10;
    }
    else {
      uVar5 = 0;
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
    *(undefined8 *)local_18.AllocatorInstance.Data = uVar5;
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    iVar1 = *(int *)&pUVar3[9].field_0x10;
    uVar4 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListSlotData>
                      ((FDS_DataContainer *)&this->field_0x40,NpcEntityID);
    FDS_ItemRepairService::SendItemRestoreComplete(uVar4,&local_18,iVar1);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

