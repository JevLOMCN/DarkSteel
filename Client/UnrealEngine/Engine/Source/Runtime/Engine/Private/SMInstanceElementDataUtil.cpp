// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// operator() @ 147b3eef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SMInstanceElementDataUtil::<lambda_25>::operator()(<lambda_25> *this,IConsoleVariable *param_1)

{
  undefined1 auStack_98 [32];
  FGlobalComponentRecreateRenderStateContext local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FGlobalComponentRecreateRenderStateContext::FGlobalComponentRecreateRenderStateContext(&local_78);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      OnInstanceElementsEnabledChanged._0_8_ = 0;
      OnInstanceElementsEnabledChanged._8_8_ = 0;
      OnInstanceElementsEnabledChanged._16_8_ = ___xmm_00000000000000020000000000000000;
      OnInstanceElementsEnabledChanged._24_8_ = _UNK_150631d48;
      atexit(`SMInstanceElementDataUtil::OnSMInstanceElementsEnabledChanged'::__l2::
             _dynamic_atexit_destructor_for__OnInstanceElementsEnabledChanged__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&OnInstanceElementsEnabledChanged);
  FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext(&local_78)
  ;
  return;
}

// GetSMInstanceFromHandle @ 147b6e290

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSMInstanceManager * __cdecl
SMInstanceElementDataUtil::GetSMInstanceFromHandle
          (FSMInstanceManager *__return_storage_ptr__,FTypedElementHandle *param_1,bool param_2)

{
  FTypedElementInternalData *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  longlong *plVar3;
  ISMInstanceManager *pIVar4;
  FSMInstanceElementId *pFVar5;
  FSMInstanceElementIdMap *this_00;
  FSMInstanceId *pFVar6;
  UInstancedStaticMeshComponent *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FName local_res8;
  FSMInstanceId local_38;
  FSMInstanceId local_28;
  FSMInstanceId local_18;
  
  pFVar1 = param_1->DataPtr;
  if (pFVar1 == (FTypedElementInternalData *)0x0) {
    if (!param_2) {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      FFrame::KismetExecutionMessage(L"Element handle data is null!",Error,(FName)0x0);
    }
LAB_147b6e2d3:
    local_28._12_4_ = 0;
    pFVar6 = &local_28;
    local_28.ISMComponent = (UInstancedStaticMeshComponent *)0x0;
    local_28.InstanceIndex = -1;
  }
  else {
    if ((pFVar1->Id).field0_0x0._s_0.TypeId != FSMInstanceElementData::Private_RegisteredTypeId) {
      if (!param_2) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2
             ::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
           _thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                          ::__l2::TypeName,"FSMInstanceElementData");
          _Init_thread_footer(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        local_res8 = `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                     ::__l2::TypeName;
        ::FName::ToString(&local_res8,(FString *)&local_18);
        ::FString::PrintfImpl
                  ((FString *)&local_28,
                   L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!");
        pUVar7 = (UInstancedStaticMeshComponent *)L"";
        if (local_28.InstanceIndex != 0) {
          pUVar7 = local_28.ISMComponent;
        }
        FFrame::KismetExecutionMessage((wchar_t *)pUVar7,Error,(FName)0x0);
        if (local_28.ISMComponent != (UInstancedStaticMeshComponent *)0x0) {
          FMemory::Free(local_28.ISMComponent);
        }
        if (local_18.ISMComponent != (UInstancedStaticMeshComponent *)0x0) {
          FMemory::Free(local_18.ISMComponent);
        }
      }
      goto LAB_147b6e2d3;
    }
    pFVar5 = (FSMInstanceElementId *)(**(code **)(pFVar1->_padding_ + 0x10))();
    if (pFVar5 == (FSMInstanceElementId *)0x0) goto LAB_147b6e2d3;
    this_00 = FSMInstanceElementIdMap::Get();
    pFVar6 = FSMInstanceElementIdMap::GetSMInstanceIdFromSMInstanceElementId
                       (this_00,&local_18,pFVar5);
  }
  local_38 = *pFVar6;
  uVar8 = local_38.ISMComponent._0_4_;
  uVar9 = local_38.ISMComponent._4_4_;
  if ((local_38.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
     (local_38.InstanceIndex != -1)) {
    this = (UObjectBaseUtility *)(local_38.ISMComponent)->_padding_;
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar2 = Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
      plVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
      if (plVar3 != (longlong *)0x0) {
        pIVar4 = (ISMInstanceManager *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_38);
        uVar8 = local_38.ISMComponent._0_4_;
        uVar9 = local_38.ISMComponent._4_4_;
        goto LAB_147b6e49e;
      }
      pUVar2 = Z_Construct_UClass_USMInstanceManager_NoRegister();
      pIVar4 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
      uVar8 = local_38.ISMComponent._0_4_;
      uVar9 = local_38.ISMComponent._4_4_;
      if (pIVar4 != (ISMInstanceManager *)0x0) goto LAB_147b6e49e;
    }
    pIVar4 = (ISMInstanceManager *)&(local_38.ISMComponent)->_padding_;
    if (local_38.ISMComponent != (UInstancedStaticMeshComponent *)0x0) goto LAB_147b6e49e;
  }
  pIVar4 = (ISMInstanceManager *)0x0;
LAB_147b6e49e:
  __return_storage_ptr__->InstanceManager = pIVar4;
  *(undefined4 *)&(__return_storage_ptr__->InstanceId).ISMComponent = uVar8;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->InstanceId).ISMComponent + 4) = uVar9;
  (__return_storage_ptr__->InstanceId).InstanceIndex = local_38.InstanceIndex;
  *(undefined4 *)&(__return_storage_ptr__->InstanceId).field_0xc = local_38._12_4_;
  return __return_storage_ptr__;
}

// GetSMInstanceFromHandleChecked @ 147b6e500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSMInstanceManager * __cdecl
SMInstanceElementDataUtil::GetSMInstanceFromHandleChecked
          (FSMInstanceManager *__return_storage_ptr__,FTypedElementHandle *param_1)

{
  UObjectBaseUtility *this;
  code *pcVar1;
  bool bVar2;
  FSMInstanceManager *pFVar3;
  FSMInstanceElementId *pFVar4;
  FSMInstanceElementIdMap *this_00;
  UClass *pUVar5;
  longlong *plVar6;
  ISMInstanceManager *pIVar7;
  FTypedElementId *pFVar8;
  FName local_res8;
  FSMInstanceId local_28;
  FString local_18;
  
  if ((param_1->DataPtr == (FTypedElementInternalData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                         ,0x9e,L"Element handle data is null!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSMInstanceManager *)(*pcVar1)();
    return pFVar3;
  }
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar8 = &FTypedElementId::Unset;
  }
  else {
    pFVar8 = &param_1->DataPtr->Id;
  }
  if ((pFVar8->field0_0x0)._s_0.TypeId != FSMInstanceElementData::Private_RegisteredTypeId) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FSMInstanceElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res8 = `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'::
                 __l2::TypeName;
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDataOfType<ElementDataType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                       ,0x9f,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSMInstanceManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (FSMInstanceElementId *)(**(code **)(param_1->DataPtr->_padding_ + 0x10))();
  this_00 = FSMInstanceElementIdMap::Get();
  FSMInstanceElementIdMap::GetSMInstanceIdFromSMInstanceElementId(this_00,&local_28,pFVar4);
  if ((local_28.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
     (local_28.InstanceIndex != -1)) {
    this = (UObjectBaseUtility *)(local_28.ISMComponent)->_padding_;
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar5 = Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        pIVar7 = (ISMInstanceManager *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_28);
        goto LAB_147b6e6aa;
      }
      pUVar5 = Z_Construct_UClass_USMInstanceManager_NoRegister();
      pIVar7 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
      if (pIVar7 != (ISMInstanceManager *)0x0) goto LAB_147b6e6aa;
    }
    if (local_28.ISMComponent != (UInstancedStaticMeshComponent *)0x0) {
      pIVar7 = (ISMInstanceManager *)&(local_28.ISMComponent)->_padding_;
      goto LAB_147b6e6aa;
    }
  }
  pIVar7 = (ISMInstanceManager *)0x0;
LAB_147b6e6aa:
  __return_storage_ptr__->InstanceManager = pIVar7;
  (__return_storage_ptr__->InstanceId).ISMComponent = local_28.ISMComponent;
  *(ulonglong *)&(__return_storage_ptr__->InstanceId).InstanceIndex =
       CONCAT44(local_28._12_4_,local_28.InstanceIndex);
  return __return_storage_ptr__;
}

// GetSMInstanceManager @ 147b6e800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ISMInstanceManager * __cdecl SMInstanceElementDataUtil::GetSMInstanceManager(FSMInstanceId *param_1)

{
  UObjectBaseUtility *this;
  UClass *pUVar1;
  longlong *plVar2;
  ISMInstanceManager *pIVar3;
  
  if ((param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0) ||
     (param_1->InstanceIndex == -1)) {
    return (ISMInstanceManager *)0x0;
  }
  this = (UObjectBaseUtility *)param_1->ISMComponent->_padding_;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar1 = Z_Construct_UClass_USMInstanceManagerProvider_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b6e853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pIVar3 = (ISMInstanceManager *)
               (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
      return pIVar3;
    }
    pUVar1 = Z_Construct_UClass_USMInstanceManager_NoRegister();
    pIVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar1);
    if (pIVar3 != (ISMInstanceManager *)0x0) {
      return pIVar3;
    }
  }
  pIVar3 = (ISMInstanceManager *)&param_1->ISMComponent->_padding_;
  if (param_1->ISMComponent == (UInstancedStaticMeshComponent *)0x0) {
    pIVar3 = (ISMInstanceManager *)0x0;
  }
  return pIVar3;
}

// OnSMInstanceElementsEnabledChanged @ 147b7c110

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
SMInstanceElementDataUtil::OnSMInstanceElementsEnabledChanged(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`SMInstanceElementDataUtil::OnSMInstanceElementsEnabledChanged'::__l2::
             _dynamic_atexit_destructor_for__OnInstanceElementsEnabledChanged__);
      _Init_thread_footer(&::_TSS0);
      return &OnInstanceElementsEnabledChanged;
    }
  }
  return &OnInstanceElementsEnabledChanged;
}

// SMInstanceElementsEnabled @ 147b86870

bool __cdecl SMInstanceElementDataUtil::SMInstanceElementsEnabled(void)

{
  return GEnableSMInstanceElements != 0;
}

