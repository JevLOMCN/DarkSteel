// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b61bc20

UClass * __cdecl UDS_VM_Common_CombinationKeyGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_CombinationKeyGroup",
               &Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_CombinationKeyGroup,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_CombinationKeyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_CombinationKeyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton;
}

// UDS_VM_Common_CombinationKeyGroup @ 14b621190

UDS_VM_Common_CombinationKeyGroup * __thiscall
UDS_VM_Common_CombinationKeyGroup::UDS_VM_Common_CombinationKeyGroup
          (UDS_VM_Common_CombinationKeyGroup *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CombinationKeyGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->KeysMap = 0;
  *(undefined8 *)&(this->KeysMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeysMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysMap).field_0x34 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeysMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x48 = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bIsUpdate = false;
  (this->TargetScreenPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_Common_CombinationKeyGroup @ 14b621240

UDS_VM_Common_CombinationKeyGroup * __thiscall
UDS_VM_Common_CombinationKeyGroup::UDS_VM_Common_CombinationKeyGroup
          (UDS_VM_Common_CombinationKeyGroup *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CombinationKeyGroup__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  *(undefined8 *)&this->KeysMap = 0;
  *(undefined8 *)&(this->KeysMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeysMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeysMap).field_0x34 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->KeysMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeysMap).field_0x48 = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bIsUpdate = false;
  (this->TargetScreenPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_Common_CombinationKeyGroup @ 14b621e10

void __thiscall
UDS_VM_Common_CombinationKeyGroup::~UDS_VM_Common_CombinationKeyGroup
          (UDS_VM_Common_CombinationKeyGroup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_CombinationKeyGroup__6B_;
  *(undefined4 *)&(this->KeysMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeysMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->KeysMap);
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623dc0

IClassDescriptor * __thiscall
UDS_VM_Common_CombinationKeyGroup::GetFieldNotificationDescriptor
          (UDS_VM_Common_CombinationKeyGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_CombinationKeyGroup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624970

UClass * __cdecl UDS_VM_Common_CombinationKeyGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_CombinationKeyGroup",
               &Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_CombinationKeyGroup,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Common_CombinationKeyGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_CombinationKeyGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_CombinationKeyGroup.InnerSingleton;
}

// GetTickableTickType @ 14b624a40

ETickableTickType __thiscall
UDS_VM_Common_CombinationKeyGroup::GetTickableTickType(UDS_VM_Common_CombinationKeyGroup *this)

{
  return Conditional;
}

// IsUpdate @ 14b624a70

bool __thiscall UDS_VM_Common_CombinationKeyGroup::IsUpdate(UDS_VM_Common_CombinationKeyGroup *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_Common_CombinationKeyGroup @ 14b624ca0

void __cdecl
UDS_VM_Common_CombinationKeyGroup::StaticRegisterNativesUDS_VM_Common_CombinationKeyGroup(void)

{
  return;
}

// BindModel @ 14be74a20

void __thiscall
UDS_VM_Common_CombinationKeyGroup::BindModel(UDS_VM_Common_CombinationKeyGroup *this)

{
  UDS_InputEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnInputKeyAddRemoveEvent,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputKeyGroupType_const_&,int_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Common_CombinationKeyGroup>
              (&pUVar1->OnInputKeyAddRemoveEvent,
               (UDS_VM_Common_CombinationKeyGroup *)&stack0x00000010,(pmf_9244412a *)this);
  }
  return;
}

// InitViewModel @ 14be8c170

void __thiscall
UDS_VM_Common_CombinationKeyGroup::InitViewModel(UDS_VM_Common_CombinationKeyGroup *this)

{
  return;
}

// OnKeyAddRemoveEvent @ 14be99b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_CombinationKeyGroup::OnKeyAddRemoveEvent
          (UDS_VM_Common_CombinationKeyGroup *this,EDS_InputKeyGroupType *param_1,int *param_2,
          bool *param_3)

{
  TMap<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_KeyMappingDataTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [2];
  uint local_194;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *local_190;
  FDS_KeyMappingDataTableRow *local_188;
  FScriptContainerElement *local_180;
  UDS_VM_Common_CombinationKeyGroup *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->InputKeyGroupType & *param_1) == this->InputKeyGroupType) {
    local_178 = this;
    pFVar6 = FDS_KeyMappingDataTableRow::Get((longlong)*param_2,true);
    local_188 = pFVar6;
    if (pFVar6 == (FDS_KeyMappingDataTableRow *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = (longlong)pFVar6;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_Common_CombinationKeyGroup::OnKeyAddRemoveEvent",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_168.Ptr,0x79,
                   L"FDS_KeyMappingDataTableRow is nullptr id - %d");
        if ((FDS_KeyMappingDataTableRow *)local_168._padding_ != (FDS_KeyMappingDataTableRow *)0x0)
        {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      if (pFVar6->KeyRemoveType == Same) {
        if (*param_3 == false) {
          return;
        }
        this_00 = &this->KeysMap;
        if (*(int *)&(this->KeysMap).field_0x8 != *(int *)&(this->KeysMap).field_0x34) {
          puVar12 = *(undefined1 **)&(this->KeysMap).field_0x40;
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &(this->KeysMap).field_0x38;
          }
          iVar5 = *(int *)(puVar12 + (ulonglong)(*(int *)&(this->KeysMap).field_0x48 - 1U & 2) * 4);
          if (iVar5 != -1) {
            do {
              if (*(char *)((longlong)iVar5 * 0x20 + *(longlong *)this_00) == '\x02') {
                pTVar8 = TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
                         ::FindChecked(this_00,Same);
                pTVar8->ArrayNum = 0;
                if (pTVar8->ArrayMax < 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,0,&pTVar8->AllocatorInstance,0,&pTVar8->ArrayMax);
                }
                break;
              }
              iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)this_00);
            } while (iVar5 != -1);
          }
        }
        pFVar16 = (pFVar6->ID_KeyAction).AllocatorInstance.Data;
        iVar5 = (pFVar6->ID_KeyAction).ArrayNum;
        pFVar15 = pFVar16 + (longlong)iVar5 * 4;
        while( true ) {
          if ((pFVar6->ID_KeyAction).ArrayNum != iVar5) {
            `TCheckedPointerIterator<enum_EDS_KeyActionType_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_196);
          }
          if (pFVar16 == pFVar15) break;
          pTVar8 = TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(this_00,Same);
          iVar17 = pTVar8->ArrayNum;
          if (iVar17 == pTVar8->ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
          }
          pTVar8->ArrayNum = iVar17 + 1;
          uVar1 = *(undefined4 *)pFVar16;
          pFVar16 = pFVar16 + 4;
          *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar17 * 4) = uVar1;
        }
      }
      else {
        if (pFVar6->KeyRemoveType != Self) {
          return;
        }
        local_194 = (pFVar6->ID_KeyAction).ArrayNum;
        uVar9 = (ulonglong)(int)local_194;
        pFVar16 = (pFVar6->ID_KeyAction).AllocatorInstance.Data;
        pFVar15 = pFVar16 + uVar9 * 4;
        local_180 = pFVar15;
        if (*param_3 == false) {
          while( true ) {
            if ((pFVar6->ID_KeyAction).ArrayNum != (int)uVar9) {
              local_198 = 0;
              `TCheckedPointerIterator<enum_EDS_KeyActionType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_198);
            }
            if (pFVar16 == pFVar15) break;
            pTVar8 = TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->KeysMap,Self);
            pFVar10 = (pTVar8->AllocatorInstance).Data;
            pFVar2 = pFVar10 + (longlong)pTVar8->ArrayNum * 4;
            if (pFVar10 == pFVar2) {
LAB_14be99e31:
              uVar9 = (ulonglong)local_194;
              pFVar16 = pFVar16 + 4;
            }
            else {
              do {
                if (*(int *)pFVar10 == *(int *)pFVar16) {
                  pTVar8 = TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
                           ::FindChecked(&this->KeysMap,Self);
                  pFVar2 = (pTVar8->AllocatorInstance).Data;
                  local_190 = pTVar8;
                  if (((pFVar2 <= pFVar16) && (pFVar16 < pFVar2 + (longlong)pTVar8->ArrayMax * 4))
                     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  lVar11 = (longlong)pTVar8->ArrayNum;
                  if (pTVar8->ArrayNum != 0) {
                    pFVar15 = (pTVar8->AllocatorInstance).Data;
                    iVar17 = 0;
                    lVar13 = 0;
                    bVar4 = *(int *)pFVar15 != *(int *)pFVar16;
                    iVar5 = 0;
                    do {
                      lVar13 = lVar13 + 1;
                      iVar14 = iVar5 + 1;
                      if (lVar13 < lVar11) {
                        do {
                          if (bVar4 != (*(int *)(pFVar15 + lVar13 * 4) != *(int *)pFVar16)) break;
                          iVar14 = iVar14 + 1;
                          lVar13 = lVar13 + 1;
                        } while (lVar13 < lVar11);
                      }
                      if (bVar4 != false) {
                        if (iVar17 != iVar5) {
                          memmove(pFVar15 + (longlong)iVar17 * 4,pFVar15 + (longlong)iVar5 * 4,
                                  (longlong)(iVar14 - iVar5) << 2);
                        }
                        iVar17 = iVar17 + (iVar14 - iVar5);
                      }
                      bVar4 = (bool)(bVar4 ^ 1);
                      iVar5 = iVar14;
                    } while (lVar13 < lVar11);
                    local_190->ArrayNum = iVar17;
                    pFVar15 = local_180;
                    this = local_178;
                    pFVar6 = local_188;
                  }
                  goto LAB_14be99e31;
                }
                pFVar10 = pFVar10 + 4;
              } while (pFVar10 != pFVar2);
              uVar9 = (ulonglong)local_194;
              pFVar16 = pFVar16 + 4;
            }
          }
        }
        else {
          while( true ) {
            if ((pFVar6->ID_KeyAction).ArrayNum != (int)uVar9) {
              `TCheckedPointerIterator<enum_EDS_KeyActionType_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_197);
            }
            if (pFVar16 == pFVar15) break;
            pTVar8 = TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->KeysMap,Self);
            iVar5 = pTVar8->ArrayNum;
            if (iVar5 == pTVar8->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
            }
            pTVar8->ArrayNum = iVar5 + 1;
            iVar17 = *(int *)pFVar16;
            pFVar16 = pFVar16 + 4;
            *(int *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 4) = iVar17;
            uVar9 = (ulonglong)local_194;
          }
        }
      }
      SetInputKeyGroup(this);
    }
  }
  return;
}

// OnSetViewModel @ 14be9d180

void __thiscall
UDS_VM_Common_CombinationKeyGroup::OnSetViewModel
          (UDS_VM_Common_CombinationKeyGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  undefined1 *local_58;
  int *local_50;
  undefined1 *local_48;
  int *local_40;
  undefined1 *local_38;
  int *local_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_InputKeyGroup>
            ((TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> *)(local_80 + 8),&local_68);
  if ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)local_80._8_8_ ==
      (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  else {
    this->InputKeyGroupType =
         *(EDS_InputKeyGroupType *)
          &(((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(local_80._8_8_ + 0x20))->
           AllocatorInstance).Data;
    this->ParentWindowWidget =
         *(EDS_WindowWidget *)
          ((longlong)
           &(((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(local_80._8_8_ + 0x20))->
            AllocatorInstance).Data + 4);
    this->bIsUpdate =
         *(bool *)((longlong)
                   &(((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)
                     (local_80._8_8_ + 0x20))->AllocatorInstance).Data + 2);
    TSet<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset(&this->KeysMap);
    local_58 = local_res10;
    local_res10[0] = 3;
    local_50 = &((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(local_80._8_8_ + 0x40))->
                ArrayNum;
    TSet<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_KeyRemoveType_&&,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>_>
              (&this->KeysMap,
               (TPairInitializer<EDS_KeyRemoveType_&&,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>
                *)local_88,(bool *)&local_58);
    local_48 = local_res18;
    local_res18[0] = 2;
    local_40 = &((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(local_80._8_8_ + 0x30))->
                ArrayNum;
    TSet<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_KeyRemoveType_&&,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>_>
              (&this->KeysMap,
               (TPairInitializer<EDS_KeyRemoveType_&&,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>
                *)(local_88 + 4),(bool *)&local_48);
    local_38 = local_res20;
    local_res20[0] = 1;
    local_30 = &((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(local_80._8_8_ + 0x20))->
                ArrayNum;
    TSet<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_KeyRemoveType_&&,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>_>
              (&this->KeysMap,
               (TPairInitializer<EDS_KeyRemoveType_&&,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>
                *)local_80,(bool *)&local_38);
    SetInputKeyGroup(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bea73c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_Common_CombinationKeyGroup::OnUpdate(UDS_VM_Common_CombinationKeyGroup *this,float param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  bool bVar3;
  APlayerController *this_00;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res18 [2];
  FName local_18;
  int local_10;
  
  ADS_PlayerController::GetPlayerController();
  bVar3 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar3) {
    this_00 = (APlayerController *)FWeakObjectPtr::Get(local_res18);
    APlayerController::GetMousePosition
              (this_00,(double *)&this->TargetScreenPosition,
               &(this->TargetScreenPosition).field0_0x0._s_0.Y);
    pUVar4 = FWeakObjectPtr::Get(local_res18);
    fVar5 = UWidgetLayoutLibrary::GetViewportScale(pUVar4);
    dVar2 = (this->TargetScreenPosition).field0_0x0._s_0.Y *
            (__real_3ff0000000000000 / (double)fVar5);
    TVar1._8_4_ = SUB84(dVar2,0);
    TVar1._s_0.X = (this->TargetScreenPosition).field0_0x0._s_0.X *
                   (__real_3ff0000000000000 / (double)fVar5);
    TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (this->TargetScreenPosition).field0_0x0 = TVar1;
    local_10 = FFieldNotificationClassDescriptor::TargetScreenPosition.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::TargetScreenPosition.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetInputKeyGroup @ 14beb0520

void __thiscall
UDS_VM_Common_CombinationKeyGroup::SetInputKeyGroup(UDS_VM_Common_CombinationKeyGroup *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  TMap<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar9;
  UDS_UserObjectListItem *this_01;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FDS_ViewModelContext *pFVar14;
  uint uVar15;
  FDS_ViewModelContext *pFVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TMap<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  UDS_UserObjectListItem *local_b8 [2];
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TMap<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  puVar1 = &(this->KeysMap).field_0x10;
  iStack_e0 = 0;
  iVar12 = *(int *)&(this->KeysMap).field_0x28;
  local_e8 = &this->KeysMap;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar12 != 0) {
    puVar19 = *(uint **)&(this->KeysMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14beb05cd;
      uVar17 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_res18;
    if (iVar12 < iStack_cc) {
      iStack_cc = iVar12;
    }
  }
LAB_14beb05cd:
  uVar17 = *(uint *)&(this->KeysMap).field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_c0 = *(int *)&(this->KeysMap).field_0x8 - *(int *)&(this->KeysMap).field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar17 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_res10 = uVar17;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_88 = local_e8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->KeysMap).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(this->KeysMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar11 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar17 = uVar3;
      local_res10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14beb06e0;
      uVar17 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar17 = local_res20 + -1 + uVar15;
    local_res10 = uVar17;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
      local_res10 = uVar3;
    }
  }
LAB_14beb06e0:
  do {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar17) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->KeysMap).field_0x10)) &&
       (pTVar5 == &this->KeysMap)) {
      local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      return;
    }
    lVar10 = *(longlong *)pTVar5;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = *(int *)((longlong)TStack_80.CurrentBitIndex * 0x20 + 0x10 + lVar10);
    lVar13 = (longlong)local_f0;
    _Src = *(void **)((longlong)TStack_80.CurrentBitIndex * 0x20 + 8 + lVar10);
    if (local_f0 == 0) {
      local_ec = 0;
      iVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_f0,0,&local_f8,local_f0,&local_ec);
      memcpy(local_f8.Data,_Src,lVar13 << 2);
      iVar12 = local_f0;
    }
    uVar17 = iVar12 - 1;
    if (-1 < (int)uVar17) {
      lVar10 = (longlong)(int)uVar17 * 4;
      do {
        pFVar16 = (FDS_ViewModelContext *)0x0;
        if ((int)uVar17 < iVar12) {
          pFVar7 = ::operator_new(0x30);
          pFVar14 = pFVar16;
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar7->field_0x1c = 0;
            *(undefined4 *)((longlong)&pFVar7[1]._padding_ + 4) = 0;
            *(undefined4 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)->field_0x2 = 0;
            *(undefined2 *)&((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1].field_0x2 = 0;
            *(undefined8 *)&pFVar7->DerivedStaticStruct = 0;
            (pFVar7->ViewModelName).ComparisonIndex = 0;
            (pFVar7->ViewModelName).Number = 0;
            pFVar7->ViewModelTemplateKey = None;
            pFVar7->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
            *(undefined2 *)&pFVar7[1].DerivedStaticStruct = 0x100;
            pFVar14 = pFVar7;
          }
          pFVar7 = ::operator_new(0x20);
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar14;
            pFVar16 = pFVar7;
          }
          if ((pFVar14 == (FDS_ViewModelContext *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar8 = FDS_ViewModelContext_InputKey::StaticStruct();
          *(UScriptStruct **)&pFVar14->DerivedStaticStruct = pUVar8;
          this_00 = UDS_ViewModelContextManager::GetInst();
          if (this_00 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar16 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar16->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_98.Object = pFVar14;
            local_98.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar16;
            UDS_ViewModelContextManager::RegisterContext(this_00,&local_98);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_98.SharedReferenceCount.ReferenceController);
          }
          pFVar14->ViewModelTemplateKey = InputKey;
          uVar15 = 0;
          if ((int)uVar17 < local_f0) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)&pFVar14[1]._padding_ = *(undefined4 *)(local_f8.Data + lVar10);
          *(EDS_WindowWidget *)((longlong)&pFVar14[1]._padding_ + 4) = this->ParentWindowWidget;
          pUVar9 = GetTransientPackageAsObject();
          this_01 = NewObject<UDS_UserObjectListItem>(pUVar9);
          if (pFVar16 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar16->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar16->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_58.Object = pFVar14;
          local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar16
          ;
          UDS_UserObjectListItem::AddContext(this_01,&local_58);
          local_b8[0] = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)local_b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar16);
          iVar12 = local_f0;
        }
        lVar10 = lVar10 + -4;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    uVar17 = local_res10;
  } while( true );
}

// UnbindModel @ 14bebbac0

void __thiscall
UDS_VM_Common_CombinationKeyGroup::UnbindModel(UDS_VM_Common_CombinationKeyGroup *this)

{
  UDS_InputEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_InputEvent::GetEvent();
  if (pUVar1 != (UDS_InputEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnInputKeyAddRemoveEvent,this);
    return;
  }
  return;
}

