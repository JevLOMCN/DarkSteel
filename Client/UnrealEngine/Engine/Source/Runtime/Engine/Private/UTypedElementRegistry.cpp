// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// CreateElementImpl<FActorElementData> @ 147b2dee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementOwner<FActorElementData> * __thiscall
UTypedElementRegistry::CreateElementImpl<FActorElementData>
          (UTypedElementRegistry *this,TTypedElementOwner<FActorElementData> *__return_storage_ptr__
          ,FName param_1,int param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  FRegisteredElementType *pFVar6;
  TTypedElementOwner<FActorElementData> *pTVar7;
  FName *this_00;
  TTypedElementInternalData<FActorElementData> *this_01;
  FName local_res10;
  FName local_res18;
  int local_res20 [2];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = param_1;
  pFVar6 = GetRegisteredElementTypeFromName(this,&local_res18);
  if (pFVar6 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(&local_res18,&local_70);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x218,L"Element type \'%s\' has not been registered!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FActorElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar2 = FActorElementData::Private_RegisteredTypeId;
  uVar4 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  if (uVar4 != uVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::
                      __l2::TypeName,"FActorElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res10 = `public:_static_class_FName___cdecl_FActorElementData::StaticTypeName(void)'::__l2
                  ::TypeName;
    ::FName::ToString(&local_res10,&local_40);
    this_00 = (FName *)(**(code **)(pFVar6->_padding_ + 0x40))(pFVar6,local_78);
    ::FName::ToString(this_00,&local_50);
    ::FName::ToString(&local_res18,&local_60);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType->GetDataTypeId() == TTypedElementInternalDataStore<ElementDataType>::StaticDataTypeId()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x21a,
                       L"Element type \'%s\' uses \'%s\' as its handle data type, but \'%s\' was requested!"
                      );
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FActorElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_res20[0] = param_2;
  this_01 = (TTypedElementInternalData<FActorElementData> *)
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = this_01;
  if (this_01 != (TTypedElementInternalData<FActorElementData> *)0x0) {
    iVar5 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)this_01,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// CreateElementImpl<FComponentElementData> @ 147b2e150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementOwner<FComponentElementData> * __thiscall
UTypedElementRegistry::CreateElementImpl<FComponentElementData>
          (UTypedElementRegistry *this,
          TTypedElementOwner<FComponentElementData> *__return_storage_ptr__,FName param_1,
          int param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  FRegisteredElementType *pFVar6;
  TTypedElementOwner<FComponentElementData> *pTVar7;
  FName *this_00;
  TTypedElementInternalData<FComponentElementData> *this_01;
  FName local_res10;
  FName local_res18;
  int local_res20 [2];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = param_1;
  pFVar6 = GetRegisteredElementTypeFromName(this,&local_res18);
  if (pFVar6 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(&local_res18,&local_70);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x218,L"Element type \'%s\' has not been registered!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FComponentElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar2 = FComponentElementData::Private_RegisteredTypeId;
  uVar4 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  if (uVar4 != uVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FComponentElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res10 = `public:_static_class_FName___cdecl_FComponentElementData::StaticTypeName(void)'::
                  __l2::TypeName;
    ::FName::ToString(&local_res10,&local_40);
    this_00 = (FName *)(**(code **)(pFVar6->_padding_ + 0x40))(pFVar6,local_78);
    ::FName::ToString(this_00,&local_50);
    ::FName::ToString(&local_res18,&local_60);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType->GetDataTypeId() == TTypedElementInternalDataStore<ElementDataType>::StaticDataTypeId()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x21a,
                       L"Element type \'%s\' uses \'%s\' as its handle data type, but \'%s\' was requested!"
                      );
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FComponentElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_res20[0] = param_2;
  this_01 = (TTypedElementInternalData<FComponentElementData> *)
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = this_01;
  if (this_01 != (TTypedElementInternalData<FComponentElementData> *)0x0) {
    iVar5 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)this_01,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// CreateElementImpl<FObjectElementData> @ 147b2e3c0

TTypedElementOwner<FObjectElementData> * __thiscall
UTypedElementRegistry::CreateElementImpl<FObjectElementData>
          (UTypedElementRegistry *this,
          TTypedElementOwner<FObjectElementData> *__return_storage_ptr__,FName param_1,int param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  FRegisteredElementType *pFVar6;
  TTypedElementOwner<FObjectElementData> *pTVar7;
  FName *this_00;
  TTypedElementInternalData<FObjectElementData> *this_01;
  FName local_res10;
  FName local_res18;
  int local_res20 [2];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = param_1;
  pFVar6 = GetRegisteredElementTypeFromName(this,&local_res18);
  if (pFVar6 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(&local_res18,&local_70);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x218,L"Element type \'%s\' has not been registered!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FObjectElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar2 = FObjectElementData::Private_RegisteredTypeId;
  uVar4 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  if (uVar4 != uVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FObjectElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res10 = `public:_static_class_FName___cdecl_FObjectElementData::StaticTypeName(void)'::
                  __l2::TypeName;
    ::FName::ToString(&local_res10,&local_40);
    this_00 = (FName *)(**(code **)(pFVar6->_padding_ + 0x40))(pFVar6,local_78);
    ::FName::ToString(this_00,&local_50);
    ::FName::ToString(&local_res18,&local_60);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType->GetDataTypeId() == TTypedElementInternalDataStore<ElementDataType>::StaticDataTypeId()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x21a,
                       L"Element type \'%s\' uses \'%s\' as its handle data type, but \'%s\' was requested!"
                      );
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FObjectElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_res20[0] = param_2;
  this_01 = (TTypedElementInternalData<FObjectElementData> *)
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = this_01;
  if (this_01 != (TTypedElementInternalData<FObjectElementData> *)0x0) {
    iVar5 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)this_01,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// CreateElementImpl<FSMInstanceElementData> @ 147b2e630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTypedElementOwner<FSMInstanceElementData> * __thiscall
UTypedElementRegistry::CreateElementImpl<FSMInstanceElementData>
          (UTypedElementRegistry *this,
          TTypedElementOwner<FSMInstanceElementData> *__return_storage_ptr__,FName param_1,
          int param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  FRegisteredElementType *pFVar6;
  TTypedElementOwner<FSMInstanceElementData> *pTVar7;
  FName *this_00;
  TTypedElementInternalData<FSMInstanceElementData> *this_01;
  FName local_res10;
  FName local_res18;
  int local_res20 [2];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = param_1;
  pFVar6 = GetRegisteredElementTypeFromName(this,&local_res18);
  if (pFVar6 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(&local_res18,&local_70);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x218,L"Element type \'%s\' has not been registered!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar2 = FSMInstanceElementData::Private_RegisteredTypeId;
  uVar4 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  if (uVar4 != uVar2) {
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
    local_res10 = `public:_static_class_FName___cdecl_FSMInstanceElementData::StaticTypeName(void)'
                  ::__l2::TypeName;
    ::FName::ToString(&local_res10,&local_40);
    this_00 = (FName *)(**(code **)(pFVar6->_padding_ + 0x40))(pFVar6,local_78);
    ::FName::ToString(this_00,&local_50);
    ::FName::ToString(&local_res18,&local_60);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType->GetDataTypeId() == TTypedElementInternalDataStore<ElementDataType>::StaticDataTypeId()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x21a,
                       L"Element type \'%s\' uses \'%s\' as its handle data type, but \'%s\' was requested!"
                      );
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TTypedElementOwner<FSMInstanceElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_res20[0] = param_2;
  this_01 = (TTypedElementInternalData<FSMInstanceElementData> *)
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = this_01;
  if (this_01 != (TTypedElementInternalData<FSMInstanceElementData> *)0x0) {
    iVar5 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)this_01,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// GetElement<ITypedElementWorldInterface> @ 147b32160

TTypedElement<ITypedElementWorldInterface> * __thiscall
UTypedElementRegistry::GetElement<ITypedElementWorldInterface>
          (UTypedElementRegistry *this,
          TTypedElement<ITypedElementWorldInterface> *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  TObjectPtr<UClass>_u_0 local_res10;
  
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xffffffff;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  local_res10.DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  GetElementImpl<ITypedElementWorldInterface>
            (this,param_1,(TSubclassOf<UInterface> *)&local_res10.ObjectPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetElementImpl<ITypedElementHierarchyInterface> @ 147b321e0

void __thiscall
UTypedElementRegistry::GetElementImpl<ITypedElementHierarchyInterface>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITypedElementHierarchyInterface> *param_3)

{
  UClass *pUVar1;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRegisteredElementType *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  UClass *pUVar8;
  void *pvVar9;
  
  if (*(FTypedElementInternalData **)param_3 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              (*(FTypedElementInternalData **)param_3,*(int *)&param_3->field_0x8);
  }
  pUVar8 = (UClass *)0x0;
  *(undefined4 *)&param_3->field_0x8 = 0xffffffff;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&param_3->field_0x10 = 0;
  if (param_1->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar5 = GetRegisteredElementTypeFromId(this,(param_1->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar5 == (FRegisteredElementType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar1 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar1->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar8 = (param_2->Class).field0_0x0.DebugPtr;
      }
    }
    pTVar7 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                        (&pFVar5->Interfaces,(FName)pUVar8->_padding_)->field0_0x0;
    if ((pTVar7 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar7->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      this_01 = param_1->DataPtr;
      pUVar8 = Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
      pvVar9 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)this_00.field0_0x0,pUVar8);
      *(FTypedElementInternalData **)param_3 = this_01;
      if (this_01 != (FTypedElementInternalData *)0x0) {
        iVar4 = FTypedElementInternalData::AddRef(this_01,true);
        *(int *)&param_3->field_0x8 = iVar4;
      }
      *(void **)&param_3->field_0x10 = pvVar9;
    }
  }
  return;
}

// GetElementImpl<ITypedElementWorldInterface> @ 147b32340

void __thiscall
UTypedElementRegistry::GetElementImpl<ITypedElementWorldInterface>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITypedElementWorldInterface> *param_3)

{
  UClass *pUVar1;
  TObjectPtr<UObject> this_00;
  FTypedElementInternalData *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRegisteredElementType *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UObject>_u_0 *pTVar7;
  UClass *pUVar8;
  void *pvVar9;
  
  if (*(FTypedElementInternalData **)param_3 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              (*(FTypedElementInternalData **)param_3,*(int *)&param_3->field_0x8);
  }
  pUVar8 = (UClass *)0x0;
  *(undefined4 *)&param_3->field_0x8 = 0xffffffff;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&param_3->field_0x10 = 0;
  if (param_1->DataPtr != (FTypedElementInternalData *)0x0) {
    pFVar5 = GetRegisteredElementTypeFromId(this,(param_1->DataPtr->Id).field0_0x0._s_0.TypeId);
    if ((pFVar5 == (FRegisteredElementType *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
    if ((pUVar1 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar1->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar8 = (param_2->Class).field0_0x0.DebugPtr;
      }
    }
    pTVar7 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                        (&pFVar5->Interfaces,(FName)pUVar8->_padding_)->field0_0x0;
    if ((pTVar7 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar7->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      this_01 = param_1->DataPtr;
      pUVar8 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
      pvVar9 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)this_00.field0_0x0,pUVar8);
      *(FTypedElementInternalData **)param_3 = this_01;
      if (this_01 != (FTypedElementInternalData *)0x0) {
        iVar4 = FTypedElementInternalData::AddRef(this_01,true);
        *(int *)&param_3->field_0x8 = iVar4;
      }
      *(void **)&param_3->field_0x10 = pvVar9;
    }
  }
  return;
}

// GetElementInterface<ITypedElementWorldInterface> @ 147b324a0

ITypedElementWorldInterface * __thiscall
UTypedElementRegistry::GetElementInterface<ITypedElementWorldInterface>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1)

{
  UObject *this_00;
  UClass *pUVar1;
  ITypedElementWorldInterface *pIVar2;
  FTypedElementId *pFVar3;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0].DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0].DebugPtr);
  }
  pFVar3 = &param_1->DataPtr->Id;
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar3 = &FTypedElementId::Unset;
  }
  this_00 = GetElementInterfaceImpl
                      (this,(pFVar3->field0_0x0)._s_0.TypeId,
                       (TSubclassOf<UInterface> *)&local_res10[0].ObjectPtr);
  if (this_00 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    return pIVar2;
  }
  return (ITypedElementWorldInterface *)0x0;
}

// GetElementInterface<ITypedElementWorldInterface> @ 147b32530

ITypedElementWorldInterface * __thiscall
UTypedElementRegistry::GetElementInterface<ITypedElementWorldInterface>
          (UTypedElementRegistry *this,uchar param_1)

{
  UObject *this_00;
  UClass *pUVar1;
  ITypedElementWorldInterface *pIVar2;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  this_00 = GetElementInterfaceImpl
                      (this,param_1,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr);
  if (this_00 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    return pIVar2;
  }
  return (ITypedElementWorldInterface *)0x0;
}

// RegisterElementInterface<ITypedElementAssetDataInterface> @ 147b35ec0

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementAssetDataInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementInterface<ITypedElementCounterInterface> @ 147b35f70

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementCounterInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementInterface<ITypedElementHierarchyInterface> @ 147b36020

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementHierarchyInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementInterface<ITypedElementObjectInterface> @ 147b360d0

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementObjectInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementInterface<ITypedElementSelectionInterface> @ 147b36180

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementSelectionInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementInterface<ITypedElementWorldInterface> @ 147b36230

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITypedElementWorldInterface>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  bVar2 = UClass::ImplementsInterface(this_00,pUVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(BaseInterfaceType::UClassType::StaticClass())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0xa1,
                       L"The InElementInterface pass must implement the interface to register.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0].DebugPtr = Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

