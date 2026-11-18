// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// SetClick_WorldRefresh_WrapperImpl @ 14b7554b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_ServerList::SetClick_WorldRefresh_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(aFStack_148,"DS_System");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(aFStack_148,"DS_System");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_W_ServerList::OnClick_WorldRefresh",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_138.Ptr,0x30,L"LoginModule is nullptr.");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  return;
}

// StaticClass @ 14b7554c0

UClass * __cdecl UDS_VM_W_ServerList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ServerList",
               &Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ServerList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ServerList>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ServerList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton;
}

// UDS_VM_W_ServerList @ 14b758e50

UDS_VM_W_ServerList * __thiscall
UDS_VM_W_ServerList::UDS_VM_W_ServerList(UDS_VM_W_ServerList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_W_ServerList @ 14b758ea0

UDS_VM_W_ServerList * __thiscall
UDS_VM_W_ServerList::UDS_VM_W_ServerList(UDS_VM_W_ServerList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_ServerList @ 14b75b4b0

void __thiscall UDS_VM_W_ServerList::~UDS_VM_W_ServerList(UDS_VM_W_ServerList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerList__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75db30

IClassDescriptor * __thiscall
UDS_VM_W_ServerList::GetFieldNotificationDescriptor(UDS_VM_W_ServerList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ServerList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e2b0

UClass * __cdecl UDS_VM_W_ServerList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ServerList",
               &Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ServerList,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ServerList>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ServerList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ServerList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ServerList @ 14b75ef20

void __cdecl UDS_VM_W_ServerList::StaticRegisterNativesUDS_VM_W_ServerList(void)

{
  return;
}

// OnClick_WorldRefresh @ 14c027ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ServerList::OnClick_WorldRefresh(UDS_VM_W_ServerList *this,FWidgetEventField *param_1)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FModuleManager::Get();
  pFVar3 = ::FName::FName(local_148,"DS_System");
  bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_148,"DS_System");
    pIVar4 = FModuleManager::GetModule(pFVar2,*pFVar3);
    if (pIVar4 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x58))(pIVar4);
      return;
    }
  }
  pUVar5 = UDS_LogManager::GetInst();
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_W_ServerList::OnClick_WorldRefresh",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x30,L"LoginModule is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnSetViewModel @ 14c035000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ServerList::OnSetViewModel
          (UDS_VM_W_ServerList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *pTVar5;
  bool bVar6;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *pTVar7;
  UObject *pUVar8;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  UDS_LogManager *pUVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *local_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  int local_200;
  int local_1fc;
  UDS_UserObjectListItem *local_1f8;
  UDS_VM_W_ServerList *local_1f0;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *local_1e0;
  TSharedPtr<FDS_ViewModelContext,1> *local_1d8;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar10 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f0 = this;
  local_1d8 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  pTVar7 = UDS_SyncServer::GetWorldInfos();
  iVar2 = *(int *)&pTVar7->field_0x28;
  iStack_228 = 0;
  local_210 = 0;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar7->field_0x10;
  uStack_224 = 1;
  iStack_214 = 0;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&pTVar7->field_0x20;
    if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar16 = *puVar19;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_228;
      local_210 = local_210 + 0x20;
      iStack_228 = iStack_228 + 1;
      iStack_214 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14c0350ee;
      uVar16 = puVar19[lVar13 + 1];
    }
    uStack_224 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_224 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_200 = (int)lVar13;
    iStack_214 = local_210 + -1 + local_200;
    if (iVar2 < iStack_214) {
      iStack_214 = iVar2;
    }
  }
LAB_14c0350ee:
  uVar16 = *(uint *)&pTVar7->field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  iStack_208 = *(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34;
  uStack_218 = 0xffffffff;
  TStack_1a0._padding_ = CONCAT44(uStack_224,iStack_228);
  TStack_1a0.CurrentBitIndex = iStack_214;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_1a0._28_4_ = iStack_214;
  TStack_1a0.BaseBitIndex = local_210;
  uStack_180 = CONCAT44(uStack_204,iStack_208);
  local_230 = pTVar7;
  local_220 = (undefined1 *)pTVar20;
  iStack_20c = iStack_214;
  local_1e8 = pTVar20;
  local_1e0 = pTVar7;
  local_1a8 = pTVar7;
  TStack_1a0.Array = pTVar20;
  if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&pTVar7->field_0x28;
  if (uVar16 != uVar3) {
    puVar18 = *(undefined1 **)&pTVar7->field_0x20;
    if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c0351fe;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1fc = (int)lVar13;
    uVar16 = local_1fc + -1 + uVar15;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_14c0351fe:
  do {
    pTVar5 = local_1a8;
    if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)uStack_180) {
      local_238[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_WorldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
    }
    lVar13 = (longlong)TStack_1a0.CurrentBitIndex;
    if (((TStack_1a0.CurrentBitIndex == uVar16) && (TStack_1a0.Array == pTVar20)) &&
       (pTVar5 == pTVar7)) {
      local_1c0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_1c8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
      goto LAB_14c0354cf;
    }
    lVar17 = *(longlong *)pTVar5;
    pUVar8 = GetTransientPackageAsObject();
    this_00 = NewObject<UDS_UserObjectListItem>(pUVar8);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14c035457;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14c035457:
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_W_ServerList::OnSetViewModel",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar12,1,Warning,local_168.Ptr,0x16,
                     L"UDS_VM_W_ServerList::InitViewModel() NewObject<UDS_ListItemObject> failed");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
LAB_14c0354cf:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((local_1d8->SharedReferenceCount).ReferenceController);
        return;
      }
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar9 = ::operator_new(0x48);
    if (pFVar9 == (FDS_ViewModelContext *)0x0) {
      pFVar9 = (FDS_ViewModelContext *)0x0;
    }
    else {
      *(undefined8 *)&pFVar9->ViewModelTemplateKey = 0;
      pFVar9->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar9->ViewModelName).ComparisonIndex = 0;
      (pFVar9->ViewModelName).Number = 0;
      pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldInfo__6B_;
      pFVar9[1]._padding_ = 0;
      pFVar9[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar9[1].ViewModelName.ComparisonIndex = 0;
      pFVar9[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar9[1].ViewModelTemplateKey = 0;
      pFVar9[2]._padding_ = 0;
      ::FString::FString((FString *)(pFVar9 + 1),L"");
      pFVar9[1].ViewModelName.ComparisonIndex = 0xffffffff;
      pFVar9[1].ViewModelName.Number = 0xffffffff;
      *(undefined8 *)&pFVar9[1].ViewModelTemplateKey = 0xffffffffffffffff;
      *(undefined4 *)&pFVar9[2]._padding_ = 0xffffffff;
    }
    pTVar10 = ::operator_new(0x20);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      *(FDS_ViewModelContext **)&pTVar10[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar11 = FDS_ViewModelContext_WorldInfo::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar11;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b8.Object = pFVar9;
      local_1b8.SharedReferenceCount.ReferenceController = pTVar10;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = Data_WorldInfo;
    lVar17 = lVar13 * 0x38 + lVar17;
    ::FString::operator=((FString *)(pFVar9 + 1),(FString *)(lVar17 + 8));
    pFVar9[1].ViewModelName.ComparisonIndex.Value = *(uint *)(lVar17 + 0x18);
    pFVar9[1].ViewModelName.Number = *(uint *)(lVar17 + 0x1c);
    pFVar9[1].ViewModelTemplateKey = *(EDS_ViewModelTemplateKey *)(lVar17 + 0x20);
    *(undefined4 *)&pFVar9[1].field_0x1c = *(undefined4 *)(lVar17 + 0x24);
    *(undefined4 *)&pFVar9[2]._padding_ = *(undefined4 *)(lVar17 + 0x28);
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_178.Object = pFVar9;
    local_178.SharedReferenceCount.ReferenceController = pTVar10;
    UDS_UserObjectListItem::AddContext(this_00,&local_178);
    local_1f8 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    this = local_1f0;
    FDS_EntryBindingEventField::Add
              (&local_1f0->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_1f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
    pTVar20 = local_1e8;
    pTVar7 = local_1e0;
  } while( true );
}

