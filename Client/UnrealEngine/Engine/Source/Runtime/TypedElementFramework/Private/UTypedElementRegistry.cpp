// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 42

// StaticClass @ 142c887a0

UClass * __cdecl UTypedElementRegistry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementRegistry",
               &Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton,
               StaticRegisterNativesUTypedElementRegistry,0x960,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTypedElementRegistry>,
               InternalVTableHelperCtorCaller<UTypedElementRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton;
}

// CreateElementImpl<FTestTypedElementData> @ 142c8c3f0

TTypedElementOwner<FTestTypedElementData> * __thiscall
UTypedElementRegistry::CreateElementImpl<FTestTypedElementData>
          (UTypedElementRegistry *this,
          TTypedElementOwner<FTestTypedElementData> *__return_storage_ptr__,FName param_1,
          int param_2)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uchar uVar4;
  int iVar5;
  FRegisteredElementType *pFVar6;
  TTypedElementOwner<FTestTypedElementData> *pTVar7;
  FName *this_00;
  TTypedElementInternalData<FTestTypedElementData> *this_01;
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
      pTVar7 = (TTypedElementOwner<FTestTypedElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  uVar2 = FTestTypedElementData::Private_RegisteredTypeId;
  uVar4 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
  if (uVar4 != uVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                      ::__l2::TypeName,"FTestTypedElementData");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_res10 = `public:_static_class_FName___cdecl_FTestTypedElementData::StaticTypeName(void)'::
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
      pTVar7 = (TTypedElementOwner<FTestTypedElementData> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_res20[0] = param_2;
  this_01 = (TTypedElementInternalData<FTestTypedElementData> *)
            (**(code **)(pFVar6->_padding_ + 8))(pFVar6,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = this_01;
  if (this_01 != (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    iVar5 = FTypedElementInternalData::AddRef((FTypedElementInternalData *)this_01,true);
    __return_storage_ptr__->ReferenceId = iVar5;
  }
  return __return_storage_ptr__;
}

// CreateElementImpl<void> @ 142c8c660

TTypedElementOwner<void> * __thiscall
UTypedElementRegistry::CreateElementImpl<void>
          (UTypedElementRegistry *this,TTypedElementOwner<void> *__return_storage_ptr__,
          FName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FRegisteredElementType *pFVar5;
  TTypedElementOwner<void> *pTVar6;
  FName *this_00;
  FTypedElementInternalData *this_01;
  FName local_res10;
  FName local_res18;
  int local_res20 [2];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res18 = param_1;
  pFVar5 = GetRegisteredElementTypeFromName(this,&local_res18);
  if (pFVar5 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(&local_res18,&local_70);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x218,L"Element type \'%s\' has not been registered!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTypedElementOwner<void> *)(*pcVar1)();
      return pTVar6;
    }
  }
  cVar3 = (**(code **)(pFVar5->_padding_ + 0x38))(pFVar5);
  if (cVar3 != '\0') {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    ::FName::ToString(&local_res10,&local_40);
    this_00 = (FName *)(**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,local_78);
    ::FName::ToString(this_00,&local_50);
    ::FName::ToString(&local_res18,&local_60);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTypedElementOwner<void> *)(*pcVar1)();
      return pTVar6;
    }
  }
  local_res20[0] = param_2;
  this_01 = (FTypedElementInternalData *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5,local_res20);
  __return_storage_ptr__->ReferenceId = -1;
  __return_storage_ptr__->DataPtr = (TTypedElementInternalData<void> *)this_01;
  if (this_01 != (FTypedElementInternalData *)0x0) {
    iVar4 = FTypedElementInternalData::AddRef(this_01,true);
    __return_storage_ptr__->ReferenceId = iVar4;
  }
  return __return_storage_ptr__;
}

// DestroyElement<FTestTypedElementData> @ 142c8c950

void __thiscall
UTypedElementRegistry::DestroyElement<FTestTypedElementData>
          (UTypedElementRegistry *this,TTypedElementOwner<FTestTypedElementData> *param_1)

{
  TTypedElementInternalData<FTestTypedElementData> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRegisteredElementType *pFVar4;
  FTypedElementId *pFVar5;
  FTypedElementId *pFVar6;
  
  pFVar6 = &FTypedElementId::Unset;
  if (param_1->DataPtr == (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    pFVar5 = &FTypedElementId::Unset;
  }
  else {
    pFVar5 = (FTypedElementId *)&param_1->DataPtr->_padding_;
  }
  pFVar4 = GetRegisteredElementTypeFromId(this,*(uchar *)((longlong)pFVar5 + 3));
  if ((pFVar4 == (FRegisteredElementType *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredElementType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                         ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = param_1->DataPtr;
  if (pTVar1 != (TTypedElementInternalData<FTestTypedElementData> *)0x0) {
    pFVar6 = (FTypedElementId *)&pTVar1->_padding_;
  }
  (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,(uint)*(longlong *)pFVar6 & 0xffffff,pTVar1,1);
  param_1->DataPtr = (TTypedElementInternalData<FTestTypedElementData> *)0x0;
  param_1->ReferenceId = -1;
  return;
}

// GetElementImpl<ITestTypedElementInterfaceA> @ 142c8e880

void __thiscall
UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceA>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITestTypedElementInterfaceA> *param_3)

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
      pUVar8 = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
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

// GetElementImpl<ITestTypedElementInterfaceB> @ 142c8e9e0

void __thiscall
UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceB>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITestTypedElementInterfaceB> *param_3)

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
      pUVar8 = Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister();
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

// GetElementImpl<ITestTypedElementInterfaceC> @ 142c8eb40

void __thiscall
UTypedElementRegistry::GetElementImpl<ITestTypedElementInterfaceC>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITestTypedElementInterfaceC> *param_3)

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
      pUVar8 = Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister();
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

// GetElementImpl<ITypedElementCounterInterface> @ 142c8eca0

void __thiscall
UTypedElementRegistry::GetElementImpl<ITypedElementCounterInterface>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<ITypedElementCounterInterface> *param_3)

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
      pUVar8 = UTypedElementCounterInterface::StaticClass();
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

// GetElementImpl<void> @ 142c8ee00

void __thiscall
UTypedElementRegistry::GetElementImpl<void>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1,TSubclassOf<UInterface> *param_2
          ,TTypedElement<void> *param_3)

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
  UClass *pUVar10;
  
  if (*(FTypedElementInternalData **)param_3 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              (*(FTypedElementInternalData **)param_3,*(int *)&param_3->field_0x8);
  }
  pUVar10 = (UClass *)0x0;
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
    pUVar8 = pUVar10;
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
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      this_01 = param_1->DataPtr;
      if ((pUVar1 != (UClass *)0x0) &&
         (pUVar8 = Z_Construct_UClass_UInterface_NoRegister(), pUVar8 != (UClass *)0x0)) {
        iVar4 = (int)pUVar8->_padding_;
        if (((int)pUVar1->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar8->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar10 = (param_2->Class).field0_0x0.DebugPtr;
        }
      }
      pvVar9 = UObjectBaseUtility::GetInterfaceAddress
                         ((UObjectBaseUtility *)this_00.field0_0x0,pUVar10);
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

// GetElementInterface<ITestTypedElementInterfaceA> @ 142c8efa0

ITestTypedElementInterfaceA * __thiscall
UTypedElementRegistry::GetElementInterface<ITestTypedElementInterfaceA>
          (UTypedElementRegistry *this,FTypedElementHandle *param_1)

{
  UObject *this_00;
  UClass *pUVar1;
  ITestTypedElementInterfaceA *pIVar2;
  FTypedElementId *pFVar3;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0].DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
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
    pUVar1 = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    return pIVar2;
  }
  return (ITestTypedElementInterfaceA *)0x0;
}

// RegisterElementInterface<ITestTypedElementInterfaceA> @ 142c92fc0

void __thiscall
UTypedElementRegistry::RegisterElementInterface<ITestTypedElementInterfaceA>
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,bool param_3)

{
  UClass *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  this_00 = *(UClass **)&param_2->field_0x10;
  pUVar3 = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
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
  local_res18[0].DebugPtr = Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  RegisterElementInterfaceImpl
            (this,param_1,param_2,(TSubclassOf<UInterface> *)&local_res18[0].ObjectPtr,param_3);
  return;
}

// RegisterElementType<FTestTypedElementData,1> @ 142c93070

void __thiscall
UTypedElementRegistry::RegisterElementType<FTestTypedElementData,1>
          (UTypedElementRegistry *this,FName param_1)

{
  TRegisteredElementType<FTestTypedElementData,1> *this_00;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  local_res18 [2];
  
  this_00 = ::operator_new(0xe0);
  local_res18[0].Ptr = (FRegisteredElementType *)0x0;
  if (this_00 != (TRegisteredElementType<FTestTypedElementData,1> *)0x0) {
    memset(this_00,0,0xe0);
    local_res18[0].Ptr =
         (FRegisteredElementType *)
         TRegisteredElementType<FTestTypedElementData,1>::
         TRegisteredElementType<FTestTypedElementData,1>(this_00);
  }
  RegisterElementTypeImpl(this,param_1,local_res18);
  if ((TRegisteredElementType<FTestTypedElementData,1> *)local_res18[0].Ptr !=
      (TRegisteredElementType<FTestTypedElementData,1> *)0x0) {
    (**(code **)(local_res18[0].Ptr)->_padding_)(local_res18[0].Ptr,1);
  }
  return;
}

// UTypedElementRegistry @ 142c98da0

UTypedElementRegistry * __thiscall
UTypedElementRegistry::UTypedElementRegistry(UTypedElementRegistry *this,FVTableHelper *param_1)

{
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar1;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar2;
  longlong lVar3;
  
  UObject::UObject((UObject *)this,param_1);
  lVar3 = 0x1f;
  this->_padding_ = (longlong)&___7UTypedElementRegistry__6B_;
  (this->RegisteredElementTypesRW).Mutex.Mutex.Ptr = (void *)0x0;
  pTVar1 = this->RegisteredElementTypes;
  do {
    pTVar2 = pTVar1;
    pTVar2->Ptr = (FRegisteredElementType *)0x0;
    pTVar2[1].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[2].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[3].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[4].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[5].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[6].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[7].Ptr = (FRegisteredElementType *)0x0;
    lVar3 = lVar3 + -1;
    pTVar1 = pTVar2 + 8;
  } while (lVar3 != 0);
  pTVar2[8].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[9].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[10].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xb].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xc].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xd].Ptr = (FRegisteredElementType *)0x0;
  (this->RegisteredElementTypesNameToId).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RegisteredElementTypesNameToId).Pairs.ArrayNum = 0;
  (this->RegisteredElementTypesNameToId).Pairs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveElementListsCS,4000);
  *(undefined8 *)&(this->ActiveElementLists).Elements = 0;
  *(undefined8 *)&(this->ActiveElementLists).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveElementLists).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x34 = 0;
  (this->ActiveElementLists).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveElementLists).HashSize = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x34 = 0;
  (this->ActiveScriptElementLists).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveScriptElementLists).HashSize = 0;
  this->DisableElementDestructionOnGCCount = '\0';
  this->bIsWithinFrame = false;
  *(undefined8 *)&this->OnElementReplacedDelegate = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnElementUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnProcessingDeferredElementsToDestroyDelegate = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x18 = 2;
  return this;
}

// UTypedElementRegistry @ 142c98f30

UTypedElementRegistry * __thiscall
UTypedElementRegistry::UTypedElementRegistry(UTypedElementRegistry *this)

{
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar1;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [2];
  
  UObject::UObject((UObject *)this);
  lVar3 = 0x1f;
  this->_padding_ = (longlong)&___7UTypedElementRegistry__6B_;
  (this->RegisteredElementTypesRW).Mutex.Mutex.Ptr = (void *)0x0;
  pTVar1 = this->RegisteredElementTypes;
  do {
    pTVar2 = pTVar1;
    pTVar2->Ptr = (FRegisteredElementType *)0x0;
    pTVar2[1].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[2].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[3].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[4].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[5].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[6].Ptr = (FRegisteredElementType *)0x0;
    pTVar2[7].Ptr = (FRegisteredElementType *)0x0;
    lVar3 = lVar3 + -1;
    pTVar1 = pTVar2 + 8;
  } while (lVar3 != 0);
  pTVar2[8].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[9].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[10].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xb].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xc].Ptr = (FRegisteredElementType *)0x0;
  pTVar2[0xd].Ptr = (FRegisteredElementType *)0x0;
  (this->RegisteredElementTypesNameToId).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RegisteredElementTypesNameToId).Pairs.ArrayNum = 0;
  (this->RegisteredElementTypesNameToId).Pairs.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ActiveElementListsCS,4000);
  *(undefined8 *)&(this->ActiveElementLists).Elements = 0;
  *(undefined8 *)&(this->ActiveElementLists).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveElementLists).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveElementLists).Elements.field_0x34 = 0;
  (this->ActiveElementLists).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveElementLists).HashSize = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveScriptElementLists).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveScriptElementLists).Elements.field_0x34 = 0;
  (this->ActiveScriptElementLists).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveScriptElementLists).HashSize = 0;
  this->DisableElementDestructionOnGCCount = '\0';
  this->bIsWithinFrame = false;
  *(undefined8 *)&this->OnElementReplacedDelegate = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnElementReplacedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnElementUpdatedDelegate = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnElementUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnProcessingDeferredElementsToDestroyDelegate = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x18 = 2;
  FLLMScope::FLLMScope(local_res8,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(local_res10,EngineMisc,true);
  if ((this->_padding_ & 0x10) == 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(UTypedElementRegistry *)(local_res10 + 1),
               (pmf_ef70b916)this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(UTypedElementRegistry *)(local_res10 + 1),
               (pmf_ef70b916)this);
    this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UTypedElementRegistry *)(local_res10 + 1),(pmf_ef70b916)this);
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~UTypedElementRegistry @ 142c9a990

void __thiscall UTypedElementRegistry::~UTypedElementRegistry(UTypedElementRegistry *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  FRegisteredElementType *pFVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  longlong lVar8;
  TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *pTVar9;
  
  this->_padding_ = (longlong)&___7UTypedElementRegistry__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8,
             *(int *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnProcessingDeferredElementsToDestroyDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnElementUpdatedDelegate).field_0x8,
             *(int *)&(this->OnElementUpdatedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnElementUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnElementUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnElementReplacedDelegate).field_0x8,
             *(int *)&(this->OnElementReplacedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnElementReplacedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnElementReplacedDelegate);
  (this->ActiveScriptElementLists).HashSize = 0;
  FVar2 = (this->ActiveScriptElementLists).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TTypedElementList<FScriptTypedElementHandle>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTypedElementList<FScriptTypedElementHandle>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveScriptElementLists).Elements);
  (this->ActiveElementLists).HashSize = 0;
  FVar2 = (this->ActiveElementLists).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TTypedElementList<FTypedElementHandle>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTypedElementList<FTypedElementHandle>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveElementLists).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ActiveElementListsCS);
  pTVar9 = &this->RegisteredElementTypesNameToId;
  pFVar3 = (pTVar9->Pairs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lVar8 = 0xfe;
  do {
    pFVar4 = ((TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
               *)(pTVar9 + -1))[1].Ptr;
    pTVar9 = (TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *)
             ((TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
               *)(pTVar9 + -1) + 1);
    lVar8 = lVar8 + -1;
    if (pFVar4 != (FRegisteredElementType *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  } while (lVar8 != 0);
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RegisteredElementTypesRW);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RegisteredElementTypesRW);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddReferencedObjects @ 142ca3cd0

void __cdecl
UTypedElementRegistry::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  UObject *SRWLock;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<UTypedElementRegistry>(&local_58);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar6 = GetPrivateStaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    SRWLock = param_1 + 1;
    if ((SRWLock == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pUVar4 = param_1 + 1;
    while (pUVar4 = (UObject *)&pUVar4->field_0x8, pUVar4 != param_1 + 0x34) {
      lVar2 = *(longlong *)pUVar4;
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x20);
        lVar10 = *(longlong *)(lVar2 + 0x18);
        lVar9 = (longlong)iVar1 * 0x10 + lVar10;
        while( true ) {
          if (*(int *)(lVar2 + 0x20) != iVar1) {
            `TCheckedPointerIterator<TTuple<FName,TObjectPtr<UObject>_>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (lVar10 == lVar9) break;
          (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar10 + 8,0,0);
          lVar10 = lVar10 + 0x10;
        }
      }
    }
    if (SRWLock != (UObject *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    return;
  }
  pFVar7 = GetTypeName<UTypedElementRegistry>(&local_48);
  pwVar11 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar8);
}

// AddRegisteredElementType @ 142ca3e90

void __thiscall
UTypedElementRegistry::AddRegisteredElementType
          (UTypedElementRegistry *this,
          TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
          *param_1)

{
  FPlatformRWLock *SRWLock;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FRegisteredElementType *pFVar5;
  TTuple<FName,unsigned_char> *pTVar6;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FString local_28;
  
  if ((param_1->Ptr->TypeId == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegisteredElementType->TypeId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                         ,0x263,L"Element type ID was unassigned!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = GetRegisteredElementTypeFromId(this,param_1->Ptr->TypeId);
  if ((pFVar5 != (FRegisteredElementType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetRegisteredElementTypeFromId(InRegisteredElementType->TypeId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                         ,0x264,L"Element type \'%d\' has already been registered!"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = GetRegisteredElementTypeFromName(this,&param_1->Ptr->TypeName);
  if (pFVar5 != (FRegisteredElementType *)0x0) {
    ::FName::ToString(&param_1->Ptr->TypeName,&local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetRegisteredElementTypeFromName(InRegisteredElementType->TypeName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                       ,0x265,L"Element type \'%s\' has already been registered!");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SRWLock = &this->RegisteredElementTypesRW;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope(local_res8,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,EngineMisc,true);
  pFVar5 = param_1->Ptr;
  pTVar6 = TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::
           AllocateMemoryForEmplace<FName_const_&>
                     (&this->RegisteredElementTypesNameToId,&pFVar5->TypeName);
  uVar3 = (pFVar5->TypeName).Number;
  *(uint *)&pTVar6->field_0x0 = (pFVar5->TypeName).ComparisonIndex.Value;
  *(uint *)&pTVar6->field_0x4 = uVar3;
  pTVar6->field_0x8 = pFVar5->TypeId;
  pTVar1 = this->RegisteredElementTypes + ((ulonglong)param_1->Ptr->TypeId - 1);
  if (pTVar1 != param_1) {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FRegisteredElementType *)0x0;
    if (pFVar5 != (FRegisteredElementType *)0x0) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// CreateElementList @ 142ca9be0

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
UTypedElementRegistry::CreateElementList
          (UTypedElementRegistry *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          TArrayView<FTypedElementHandle_const_,int> *param_1)

{
  TArrayView<FTypedElementHandle_const_,int> local_18;
  
  TTypedElementList<FTypedElementHandle>::Private_CreateElementList(__return_storage_ptr__,this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TTypedElementList<FTypedElementHandle>::Append(__return_storage_ptr__->Object,&local_18);
  return __return_storage_ptr__;
}

// CreateElementList @ 142ca9c30

TSharedRef<TTypedElementList<FTypedElementHandle>,1> * __thiscall
UTypedElementRegistry::CreateElementList
          (UTypedElementRegistry *this,
          TSharedRef<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          TArrayView<FTypedElementId_const_,int> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FTypedElementReferences *pFVar3;
  longlong lVar4;
  undefined1 *puVar5;
  TObjectPtr<UObject> this_00;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  FTypedElementInternalData *pFVar12;
  FTypedElementId *pFVar13;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> *pTVar14;
  UTypedElementRegistry *this_01;
  TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
  *pTVar15;
  TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
  *pTVar16;
  ICounterCategory *pIVar17;
  UClass *pUVar18;
  FRegisteredElementType *pFVar19;
  UClass *pUVar20;
  TObjectPtr<UObject>_u_0 *pTVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  ICounterCategory *pIVar24;
  int *piVar25;
  undefined1 *puVar26;
  FTypedElementId_u_0 *pFVar27;
  longlong lVar28;
  TTypedElementList<FTypedElementHandle> *this_02;
  FTypedElementHandle *pFVar29;
  FTypedElementCounter *this_03;
  uint uVar30;
  FTypedElementId_u_0 *pFVar31;
  byte local_res20 [8];
  FTypedElementInternalData *local_c8;
  undefined8 uStack_c0;
  FTypedElementInternalData *local_b8;
  int local_b0;
  longlong *local_a8;
  uint local_a0;
  FTypedElementId_u_0 local_98 [2];
  FName local_90;
  FTypedElementHandle *local_88;
  FTypedElementId_u_0 *local_80;
  uint local_78 [2];
  UTypedElementRegistry *local_70;
  FTypedElementCounter *local_68;
  TTypedElementList<FTypedElementHandle> *local_60;
  FTypedElementId_u_0 *local_58;
  
  TTypedElementList<FTypedElementHandle>::Private_CreateElementList(__return_storage_ptr__,this);
  pFVar27 = &param_1->DataPtr->field0_0x0;
  pFVar31 = pFVar27 + param_1->ArrayNum;
  local_58 = pFVar31;
  if (pFVar27 != pFVar31) {
    do {
      pFVar12 = (FTypedElementInternalData *)0x0;
      local_80 = pFVar27;
      if (*(uchar *)((longlong)pFVar27 + 3) == '\0') {
        uStack_c0 = 0xffffffff;
      }
      else {
        pFVar19 = GetRegisteredElementTypeFromId(this,*(uchar *)((longlong)pFVar27 + 3));
        if ((pFVar19 == (FRegisteredElementType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("RegisteredElementType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                               ,0xbe,L"Element type ID \'%d\' has not been registered!"), bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
          return pTVar14;
        }
        iVar9 = -1;
        pFVar12 = (FTypedElementInternalData *)
                  (**(code **)(pFVar19->_padding_ + 0x18))(pFVar19,pFVar27->CombinedId & 0xffffff);
        if (pFVar12 != (FTypedElementInternalData *)0x0) {
          iVar9 = FTypedElementInternalData::AddRef(pFVar12,true);
        }
        uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar9);
      }
      if (pFVar12 != (FTypedElementInternalData *)0x0) {
        this_02 = __return_storage_ptr__->Object;
        local_c8 = pFVar12;
        local_60 = this_02;
        TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                     *)&this_02->OnPreChangeDelegate,this_02);
        if (local_c8 == (FTypedElementInternalData *)0x0) {
          pFVar13 = &FTypedElementId::Unset;
        }
        else {
          pFVar13 = &local_c8->Id;
        }
        local_98[0] = pFVar13->field0_0x0;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
        Emplace<unsigned_int>(&this_02->ElementCombinedIds,local_78,(bool *)local_98);
        pFVar2 = (this_02->ElementHandles).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar2 + (longlong)(this_02->ElementHandles).ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
          return pTVar14;
        }
        iVar9 = (this_02->ElementHandles).ArrayNum;
        piVar25 = &(this_02->ElementHandles).ArrayMax;
        if (iVar9 == *piVar25) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this_02->ElementHandles).AllocatorInstance,piVar25);
        }
        (this_02->ElementHandles).ArrayNum = iVar9 + 1;
        pFVar29 = (FTypedElementHandle *)
                  ((this_02->ElementHandles).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
        pFVar29->DataPtr = local_c8;
        pFVar29->ReferenceId = (int)uStack_c0;
        local_c8 = (FTypedElementInternalData *)0x0;
        this_03 = &this_02->ElementCounts;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
        local_88 = pFVar29;
        local_68 = this_03;
        this_01 = (UTypedElementRegistry *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_03);
        local_70 = this_01;
        if ((this_01 != (UTypedElementRegistry *)0x0) &&
           (pFVar29->DataPtr != (FTypedElementInternalData *)0x0)) {
          local_res20[0] = (pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId;
          piVar25 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar25 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_ElementType,"ElementType");
            _Init_thread_footer(&::_TSS0);
          }
          local_90 = NAME_ElementType;
          pTVar15 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                    ::Find(&(this_02->ElementCounts).CounterCategories,NAME_ElementType);
          if (pTVar15 ==
              (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
               *)0x0) {
            pTVar16 = TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>
                      ::AllocateMemoryForEmplace<FName_const_&>
                                (&(this_02->ElementCounts).CounterCategories,&local_90);
            pTVar15 = (TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>
                       *)&pTVar16->field_0x8;
            *(uint *)&pTVar16->field_0x0 = local_90.ComparisonIndex.Value;
            *(uint *)&pTVar16->field_0x4 = local_90.Number;
            *pTVar15 = (ICounterCategory *)0x0;
LAB_142ca9ed7:
            pIVar24 = (ICounterCategory *)0x0;
            pIVar17 = ::operator_new(0x60);
            if (pIVar17 != (ICounterCategory *)0x0) {
              *pIVar17 = (ICounterCategory)&___7__TCounterCategory_E_FTypedElementCounter__6B_;
              GetTypedElementCounterKeyName<unsigned_char>();
              pIVar17[2] = (ICounterCategory)0x0;
              pIVar17[3] = (ICounterCategory)0x0;
              pIVar17[6] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar17 + 7) = 0;
              *(undefined4 *)&pIVar17[7].field_0x4 = 0x80;
              *(undefined4 *)(pIVar17 + 8) = 0xffffffff;
              *(undefined4 *)&pIVar17[8].field_0x4 = 0;
              pIVar17[10] = (ICounterCategory)0x0;
              *(undefined4 *)(pIVar17 + 0xb) = 0;
              pIVar24 = pIVar17;
            }
            pIVar17 = pTVar15->Ptr;
            pTVar15->Ptr = pIVar24;
            if (pIVar17 != (ICounterCategory *)0x0) {
              (**(code **)*pIVar17)(pIVar17,1);
            }
          }
          else if (pTVar15->Ptr == (ICounterCategory *)0x0) goto LAB_142ca9ed7;
          pIVar24 = pTVar15->Ptr;
          pcVar6 = *(code **)((longlong)*pIVar24 + 0x18);
          if ((*piVar25 <
               `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
               _thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                   ::__l3::_thread_safe_static_guard_0__),
             `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
             _thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                            ::__l3::KeyTypeName,L"uint8");
            _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                                 ::__l3::_thread_safe_static_guard_0__);
          }
          (*pcVar6)(pIVar24,local_res20,
                    `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName);
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          pUVar18 = UTypedElementCounterInterface::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar18);
          }
          iVar9 = local_b0;
          if (local_b8 != (FTypedElementInternalData *)0x0) {
            lVar28 = (longlong)local_b0;
            LOCK();
            local_b8->RefCount = local_b8->RefCount + -1;
            UNLOCK();
            pFVar3 = (local_b8->References).Ptr;
            if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
              lVar4 = *(longlong *)&(pFVar3->References).field_0x0;
              puVar26 = &(pFVar3->References).field_0x10;
              bVar7 = (byte)iVar9 & 0x1f;
              local_a0 = 1 << bVar7 | 1U >> 0x20 - bVar7;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                return pTVar14;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              puVar23 = puVar26;
              if (puVar5 != (undefined1 *)0x0) {
                puVar23 = puVar5;
              }
              iVar10 = iVar9;
              if (iVar9 < 0) {
                iVar10 = iVar9 + 0x1f;
              }
              lVar1 = (longlong)(iVar10 >> 5) * 4;
              if (((*(uint *)(puVar23 + lVar1) & local_a0) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                return pTVar14;
              }
              if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) = iVar9
                ;
              }
              *(undefined4 *)(lVar28 * 0x108 + lVar4) = 0xffffffff;
              if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                uVar11 = 0xffffffff;
              }
              else {
                uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
              }
              *(undefined4 *)(lVar28 * 0x108 + 4 + lVar4) = uVar11;
              puVar5 = &(pFVar3->References).field_0x34;
              *(int *)puVar5 = *(int *)puVar5 + 1;
              *(int *)&(pFVar3->References).field_0x30 = iVar9;
              if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                return pTVar14;
              }
              puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
              if (puVar5 != (undefined1 *)0x0) {
                puVar26 = puVar5;
              }
              *(uint *)(puVar26 + lVar1) = *(uint *)(puVar26 + lVar1) & ~local_a0;
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
              pFVar29 = local_88;
              this_03 = local_68;
              this_01 = local_70;
            }
          }
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = -1;
          local_a8 = (longlong *)0x0;
          if (pFVar29->DataPtr == (FTypedElementInternalData *)0x0) {
LAB_142caa236:
            iVar9 = local_b0;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              lVar28 = (longlong)local_b0;
              LOCK();
              local_b8->RefCount = local_b8->RefCount + -1;
              UNLOCK();
              pFVar3 = (local_b8->References).Ptr;
              if ((pFVar3 != (FTypedElementReferences *)0x0) && (local_b0 != -1)) {
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
                lVar4 = *(longlong *)&pFVar3->References;
                puVar26 = &(pFVar3->References).field_0x10;
                bVar7 = (byte)iVar9 & 0x1f;
                uVar30 = 1 << bVar7 | 1U >> 0x20 - bVar7;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                  return pTVar14;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                puVar23 = puVar26;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar23 = puVar5;
                }
                iVar10 = iVar9;
                if (iVar9 < 0) {
                  iVar10 = iVar9 + 0x1f;
                }
                if (((*(uint *)(puVar23 + (longlong)(iVar10 >> 5) * 4) & uVar30) == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                  return pTVar14;
                }
                if (*(int *)&(pFVar3->References).field_0x34 != 0) {
                  *(int *)((longlong)*(int *)&(pFVar3->References).field_0x30 * 0x108 + lVar4) =
                       iVar9;
                }
                *(undefined4 *)(lVar28 * 0x108 + lVar4) = 0xffffffff;
                if (*(int *)&(pFVar3->References).field_0x34 < 1) {
                  uVar11 = 0xffffffff;
                }
                else {
                  uVar11 = *(undefined4 *)&(pFVar3->References).field_0x30;
                }
                *(undefined4 *)(lVar28 * 0x108 + 4 + lVar4) = uVar11;
                puVar5 = &(pFVar3->References).field_0x34;
                *(int *)puVar5 = *(int *)puVar5 + 1;
                *(int *)&(pFVar3->References).field_0x30 = iVar9;
                if (((iVar9 < 0) || (*(int *)&(pFVar3->References).field_0x28 <= iVar9)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
                  return pTVar14;
                }
                puVar5 = *(undefined1 **)&(pFVar3->References).field_0x20;
                if (puVar5 != (undefined1 *)0x0) {
                  puVar26 = puVar5;
                }
                *(uint *)(puVar26 + (longlong)(iVar10 >> 5) * 4) =
                     *(uint *)(puVar26 + (longlong)(iVar10 >> 5) * 4) & ~uVar30;
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
                pFVar29 = local_88;
              }
            }
          }
          else {
            pFVar19 = GetRegisteredElementTypeFromId
                                (this_01,(pFVar29->DataPtr->Id).field0_0x0._s_0.TypeId);
            if ((pFVar19 == (FRegisteredElementType *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredElementType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                                   ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar8
               )) {
              pcVar6 = (code *)swi(3);
              pTVar14 = (TSharedRef<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar6)();
              return pTVar14;
            }
            if ((pUVar18 == (UClass *)0x0) ||
               (pUVar20 = Z_Construct_UClass_UInterface_NoRegister(), pUVar20 == (UClass *)0x0)) {
LAB_142caa1a7:
              pUVar18 = (UClass *)0x0;
            }
            else {
              iVar9 = (int)pUVar20->_padding_;
              if (((int)pUVar18->_padding_ < iVar9) ||
                 ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar9 * 8) !=
                  &pUVar20->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (!bVar8) goto LAB_142caa1a7;
            }
            pTVar21 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>
                       ::Find(&pFVar19->Interfaces,(FName)pUVar18->_padding_)->field0_0x0;
            plVar22 = local_a8;
            if ((pTVar21 != (TObjectPtr<UObject>_u_0 *)0x0) &&
               (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar21->DebugPtr,
               this_00.field0_0x0 != (UObject *)0x0)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
              }
              pFVar12 = pFVar29->DataPtr;
              pUVar18 = UTypedElementCounterInterface::StaticClass();
              plVar22 = UObjectBaseUtility::GetInterfaceAddress
                                  ((UObjectBaseUtility *)this_00.field0_0x0,pUVar18);
              local_b8 = pFVar12;
              if (pFVar12 != (FTypedElementInternalData *)0x0) {
                local_b0 = FTypedElementInternalData::AddRef(pFVar12,true);
              }
            }
            local_a8 = plVar22;
            if (local_b8 != (FTypedElementInternalData *)0x0) {
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,this_03);
              }
              goto LAB_142caa236;
            }
          }
          local_a8 = (longlong *)0x0;
          local_b8 = (FTypedElementInternalData *)0x0;
          local_b0 = 0xffffffff;
          pFVar27 = local_80;
          this_02 = local_60;
          pFVar31 = local_58;
        }
        TTypedElementList<FTypedElementHandle>::NoteListChanged(this_02,Added,pFVar29);
        if (local_c8 != (FTypedElementInternalData *)0x0) {
          FTypedElementInternalData::ReleaseRef(local_c8,(int)uStack_c0);
        }
      }
      pFVar27 = pFVar27 + 1;
      local_c8 = (FTypedElementInternalData *)0x0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
    } while (pFVar27 != pFVar31);
  }
  return __return_storage_ptr__;
}

// CreateScriptHandle @ 142caa4d0

/* WARNING: Enum "Type": Some values do not have unique names */

FScriptTypedElementHandle __thiscall
UTypedElementRegistry::CreateScriptHandle(UTypedElementRegistry *this,FTypedElementId *param_1)

{
  longlong lVar1;
  FRegisteredElementType *pFVar2;
  longlong *plVar3;
  uint *in_R8;
  void *local_res18 [2];
  
  if ((FTypedElementId_u_0)*in_R8 == FTypedElementId::Unset.field0_0x0) {
    *(undefined8 *)param_1 = 0;
    return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
  }
  pFVar2 = GetRegisteredElementTypeFromId(this,SUB41(*in_R8,3));
  if (pFVar2 == (FRegisteredElementType *)0x0) {
    local_res18[0] = (void *)0x0;
    FFrame::KismetExecutionMessage
              (L"Element type ID has not been registered to this registry!",Error,(FName)0x0);
    *(undefined8 *)param_1 = 0;
    return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
  }
  plVar3 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,local_res18,*in_R8 & 0xffffff)
  ;
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  if (local_res18[0] != (void *)0x0) {
    *(int *)((longlong)local_res18[0] + 8) = *(int *)((longlong)local_res18[0] + 8) + -1;
    if (*(int *)((longlong)local_res18[0] + 8) == 0) {
      ::operator_delete(local_res18[0],0x10);
    }
  }
  *(longlong *)param_1 = lVar1;
  return (FScriptTypedElementHandle)(FScriptTypedElementInternalDataPtr)param_1;
}

// DestroyElement @ 142caa750

void __thiscall
UTypedElementRegistry::DestroyElement(UTypedElementRegistry *this,TTypedElementOwner<void> *param_1)

{
  TTypedElementInternalData<void> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FRegisteredElementType *pFVar4;
  FTypedElementId *pFVar5;
  FTypedElementId *pFVar6;
  
  pFVar6 = &FTypedElementId::Unset;
  if (param_1->DataPtr == (TTypedElementInternalData<void> *)0x0) {
    pFVar5 = &FTypedElementId::Unset;
  }
  else {
    pFVar5 = (FTypedElementId *)&param_1->DataPtr->field_0x8;
  }
  pFVar4 = GetRegisteredElementTypeFromId(this,(pFVar5->field0_0x0)._s_0.TypeId);
  if ((pFVar4 == (FRegisteredElementType *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredElementType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                         ,0x229,L"Element type ID \'%d\' has not been registered!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = param_1->DataPtr;
  if (pTVar1 != (TTypedElementInternalData<void> *)0x0) {
    pFVar6 = (FTypedElementId *)&pTVar1->field_0x8;
  }
  (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,pFVar6->field0_0x0 & 0xffffff,pTVar1,1);
  param_1->DataPtr = (TTypedElementInternalData<void> *)0x0;
  param_1->ReferenceId = -1;
  return;
}

// FinishDestroy @ 142cac3d0

void __thiscall UTypedElementRegistry::FinishDestroy(UTypedElementRegistry *this)

{
  UTypedElementRegistry *pUVar1;
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  
  pTVar2 = GetTypedElementRegistryInstance();
  pUVar1 = (UTypedElementRegistry *)pTVar2->Object;
  if ((pUVar1 == this) && (pUVar1 != (UTypedElementRegistry *)0x0)) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    pTVar2->Object = (UObject *)0x0;
  }
  ProcessDeferredElementsToDestroy(this);
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetElementHandle @ 142cad480

FTypedElementHandle * __thiscall
UTypedElementRegistry::GetElementHandle
          (UTypedElementRegistry *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementId *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRegisteredElementType *pFVar5;
  FTypedElementHandle *pFVar6;
  FTypedElementInternalData *this_00;
  
  bVar1 = (param_1->field0_0x0)._s_0.TypeId;
  if (bVar1 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
    __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
    __return_storage_ptr__->ReferenceId = -1;
    return __return_storage_ptr__;
  }
  pFVar5 = GetRegisteredElementTypeFromId(this,bVar1);
  if (pFVar5 == (FRegisteredElementType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                       ,0xbe,L"Element type ID \'%d\' has not been registered!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FTypedElementHandle *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = -1;
  this_00 = (FTypedElementInternalData *)
            (**(code **)(pFVar5->_padding_ + 0x18))
                      (pFVar5,(param_1->field0_0x0).CombinedId & 0xffffff);
  if (this_00 != (FTypedElementInternalData *)0x0) {
    iVar4 = FTypedElementInternalData::AddRef(this_00,true);
  }
  __return_storage_ptr__->DataPtr = this_00;
  __return_storage_ptr__->ReferenceId = iVar4;
  return __return_storage_ptr__;
}

// GetElementInterfaceImpl @ 142caddc0

UObject * __thiscall
UTypedElementRegistry::GetElementInterfaceImpl
          (UTypedElementRegistry *this,uchar param_1,TSubclassOf<UInterface> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  FRegisteredElementType *pFVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UObject> *pTVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  
  if (param_1 == '\0') {
    return (UObject *)0x0;
  }
  pFVar5 = GetRegisteredElementTypeFromId(this,param_1);
  if ((pFVar5 == (FRegisteredElementType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredElementType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                         ,0x91,L"Element type ID \'%d\' has not been registered!"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UObject *)(*pcVar3)();
    return pUVar6;
  }
  pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
  pUVar10 = (UClass *)0x0;
  pUVar9 = pUVar10;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar7 = Z_Construct_UClass_UInterface_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar9 = (param_2->Class).field0_0x0.DebugPtr;
    }
  }
  pTVar8 = TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     (&pFVar5->Interfaces,(FName)pUVar9->_padding_);
  if (((pTVar8 != (TObjectPtr<UObject> *)0x0) &&
      (pUVar10 = (UClass *)(pTVar8->field0_0x0).DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  return (UObject *)pUVar10;
}

// GetInstance @ 142cadf30

UTypedElementRegistry * __cdecl UTypedElementRegistry::GetInstance(void)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  pTVar1 = GetTypedElementRegistryInstance();
  return (UTypedElementRegistry *)pTVar1->Object;
}

// GetPrivateStaticClass @ 142caea50

UClass * __cdecl UTypedElementRegistry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementRegistry",
               &Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton,
               StaticRegisterNativesUTypedElementRegistry,0x960,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UTypedElementRegistry>,
               InternalVTableHelperCtorCaller<UTypedElementRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton;
}

// GetRegisteredElementTypeFromId @ 142caeb00

FRegisteredElementType * __thiscall
UTypedElementRegistry::GetRegisteredElementTypeFromId(UTypedElementRegistry *this,uchar param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FRegisteredElementType *pFVar3;
  
  SRWLock = &this->RegisteredElementTypesRW;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRegisteredElementType *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  if (param_1 == '\0') {
    pFVar3 = (FRegisteredElementType *)0x0;
  }
  else {
    pFVar3 = this->RegisteredElementTypes[(ulonglong)param_1 - 1].Ptr;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// GetRegisteredElementTypeFromName @ 142caeb90

FRegisteredElementType * __thiscall
UTypedElementRegistry::GetRegisteredElementTypeFromName(UTypedElementRegistry *this,FName *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FRegisteredElementType *pFVar3;
  byte *pbVar4;
  
  SRWLock = &this->RegisteredElementTypesRW;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRegisteredElementType *)(*pcVar1)();
      return pFVar3;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pbVar4 = TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                     (&this->RegisteredElementTypesNameToId,*param_1);
  if (pbVar4 == (byte *)0x0) {
    pFVar3 = (FRegisteredElementType *)0x0;
  }
  else {
    pFVar3 = this->RegisteredElementTypes[(ulonglong)*pbVar4 - 1].Ptr;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return pFVar3;
}

// NotifyElementListPendingChanges @ 142cb1c80

void __thiscall UTypedElementRegistry::NotifyElementListPendingChanges(UTypedElementRegistry *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  TTypedElementList<FScriptTypedElementHandle> *pTVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<TTypedElementList<FTypedElementHandle>_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<TTypedElementList<FScriptTypedElementHandle>_*,TSizedDefaultAllocator<32>_> local_38;
  
  lpCriticalSection = &this->ActiveElementListsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTypedElementList<FTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FTypedElementHandle>_*,0>,FDefaultSetAllocator>
  ::Array(&this->ActiveElementLists,&local_48);
  iVar7 = local_48.ArrayNum;
  bVar6 = false;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar11.Data = local_48.AllocatorInstance.Data;
LAB_142cb1ce0:
  if (local_48.ArrayNum != iVar7) {
    `TCheckedPointerIterator<TTypedElementList<FTypedElementHandle>_*,int,0>::operator!='::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if (FVar11.Data != pFVar1) {
    pTVar2 = *(TTypedElementList<FTypedElementHandle> **)FVar11.Data;
    if (bVar6) {
      uVar9 = ((uint)((ulonglong)pTVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar2 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ActiveElementLists).Elements.field_0x8 !=
          *(int *)&(this->ActiveElementLists).Elements.field_0x34) {
        FVar3 = (this->ActiveElementLists).Hash.SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&(this->ActiveElementLists).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar10 +
                        (ulonglong)
                        ((this->ActiveElementLists).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->ActiveElementLists).Elements;
          do {
            if (*(TTypedElementList<FTypedElementHandle> **)(lVar4 + (longlong)iVar8 * 0x10) ==
                pTVar2) {
              if (pTVar2->bHasPendingNotify == false) goto LAB_142cb1deb;
              pTVar2->bHasPendingNotify = false;
              TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                           *)&pTVar2->OnChangedDelegate,pTVar2);
              FVar11.Data = FVar11.Data + 8;
              goto LAB_142cb1ce0;
            }
            iVar8 = *(int *)(lVar4 + 8 + (longlong)iVar8 * 0x10);
          } while (iVar8 != -1);
          FVar11.Data = FVar11.Data + 8;
          goto LAB_142cb1ce0;
        }
      }
LAB_142cb1deb:
      FVar11.Data = FVar11.Data + 8;
    }
    else {
      if (pTVar2->bHasPendingNotify == false) {
        bVar6 = false;
        goto LAB_142cb1deb;
      }
      pTVar2->bHasPendingNotify = false;
      TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                   *)&pTVar2->OnChangedDelegate,pTVar2);
      FVar11.Data = FVar11.Data + 8;
      bVar6 = true;
    }
    goto LAB_142cb1ce0;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar6 = false;
  TSet<TTypedElementList<FScriptTypedElementHandle>_*,DefaultKeyFuncs<TTypedElementList<FScriptTypedElementHandle>_*,0>,FDefaultSetAllocator>
  ::Array(&this->ActiveScriptElementLists,&local_38);
  iVar7 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar11.Data = local_38.AllocatorInstance.Data;
LAB_142cb1e33:
  do {
    if (local_38.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TTypedElementList<FScriptTypedElementHandle>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar11.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    pTVar5 = *(TTypedElementList<FScriptTypedElementHandle> **)FVar11.Data;
    if (bVar6) {
      uVar9 = ((uint)((ulonglong)pTVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar5 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ActiveScriptElementLists).Elements.field_0x8 !=
          *(int *)&(this->ActiveScriptElementLists).Elements.field_0x34) {
        FVar3 = (this->ActiveScriptElementLists).Hash.SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&(this->ActiveScriptElementLists).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar3;
        }
        iVar8 = *(int *)((longlong)FVar10 +
                        (ulonglong)
                        ((this->ActiveScriptElementLists).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                        4);
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&(this->ActiveScriptElementLists).Elements;
          do {
            if (*(TTypedElementList<FScriptTypedElementHandle> **)(lVar4 + (longlong)iVar8 * 0x10)
                == pTVar5) {
              if (pTVar5->bHasPendingNotify == false) goto LAB_142cb1f3d;
              pTVar5->bHasPendingNotify = false;
              TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
              ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                           *)&pTVar5->OnChangedDelegate,pTVar5);
              FVar11.Data = FVar11.Data + 8;
              goto LAB_142cb1e33;
            }
            iVar8 = *(int *)(lVar4 + 8 + (longlong)iVar8 * 0x10);
          } while (iVar8 != -1);
          FVar11.Data = FVar11.Data + 8;
          goto LAB_142cb1e33;
        }
      }
LAB_142cb1f3d:
      FVar11.Data = FVar11.Data + 8;
      goto LAB_142cb1e33;
    }
    if (pTVar5->bHasPendingNotify == false) {
      bVar6 = false;
      goto LAB_142cb1f3d;
    }
    pTVar5->bHasPendingNotify = false;
    TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(TTypedElementList<FScriptTypedElementHandle>_const_&),FDefaultDelegateUserPolicy>
                 *)&pTVar5->OnChangedDelegate,pTVar5);
    FVar11.Data = FVar11.Data + 8;
    bVar6 = true;
  } while( true );
}

// OnBeginFrame @ 142cb2050

void __thiscall UTypedElementRegistry::OnBeginFrame(UTypedElementRegistry *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->DisableElementDestructionOnGCCount != 0xff) {
    this->DisableElementDestructionOnGCCount = this->DisableElementDestructionOnGCCount + '\x01';
    this->bIsWithinFrame = true;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DisableElementDestructionOnGCCount != ((uint8) 0xff)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                     ,0x28d,L"DisableElementDestructionOnGCCount overflow!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->DisableElementDestructionOnGCCount = this->DisableElementDestructionOnGCCount + '\x01';
  this->bIsWithinFrame = true;
  return;
}

// OnEndFrame @ 142cb2160

void __thiscall UTypedElementRegistry::OnEndFrame(UTypedElementRegistry *this)

{
  code *pcVar1;
  bool bVar2;
  
  NotifyElementListPendingChanges(this);
  ProcessDeferredElementsToDestroy(this);
  if (this->bIsWithinFrame != false) {
    if (this->DisableElementDestructionOnGCCount == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DisableElementDestructionOnGCCount != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                         ,0x293,L"DisableElementDestructionOnGCCount underflow!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->DisableElementDestructionOnGCCount = this->DisableElementDestructionOnGCCount + 0xff;
    this->bIsWithinFrame = false;
  }
  return;
}

// OnPostGarbageCollect @ 142cb21d0

void __thiscall UTypedElementRegistry::OnPostGarbageCollect(UTypedElementRegistry *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar11;
  FLLMScope aFStackX_8 [2];
  FMemScope FStackX_10;
  FDestructionSentinel FStack_48;
  
  if (this->DisableElementDestructionOnGCCount != '\0') {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnProcessingDeferredElementsToDestroyDelegate,(FWriteAccessScope *)&FStack_48);
  puVar1 = &(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar9 = *(int *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar7 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(), cVar6 == '\0')) {
        bVar7 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnProcessingDeferredElementsToDestroyDelegate,false);
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  SRWLock = &this->RegisteredElementTypesRW;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope(aFStackX_8,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&FStackX_10,EngineMisc,true);
  for (pTVar11 = this->RegisteredElementTypes;
      (TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *)pTVar11 !=
      &this->RegisteredElementTypesNameToId; pTVar11 = pTVar11 + 1) {
    if (pTVar11->Ptr != (FRegisteredElementType *)0x0) {
      (**(code **)(pTVar11->Ptr->_padding_ + 0x28))();
    }
  }
  FMemScope::~FMemScope(&FStackX_10);
  FLLMScope::~FLLMScope(aFStackX_8);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// Private_InitializeInstance @ 142cb2650

void __cdecl UTypedElementRegistry::Private_InitializeInstance(void)

{
  UTypedElementRegistry *pUVar1;
  code *pcVar2;
  bool bVar3;
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar4;
  UObject *pUVar5;
  UTypedElementRegistry *this;
  
  pTVar4 = GetTypedElementRegistryInstance();
  if (pTVar4->Object != (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                       ,0x34,L"Instance was already initialized!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  this = NewObject<UTypedElementRegistry>(pUVar5);
  pUVar1 = (UTypedElementRegistry *)pTVar4->Object;
  if (this == (UTypedElementRegistry *)0x0) {
    if (pUVar1 != (UTypedElementRegistry *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      pTVar4->Object = (UObject *)0x0;
    }
  }
  else if (pUVar1 != this) {
    if (pUVar1 != (UTypedElementRegistry *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)this);
    pTVar4->Object = (UObject *)this;
    return;
  }
  return;
}

// Private_ShutdownInstance @ 142cb26f0

void __cdecl UTypedElementRegistry::Private_ShutdownInstance(void)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  pTVar1 = GetTypedElementRegistryInstance();
  if (pTVar1->Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    pTVar1->Object = (UObject *)0x0;
  }
  return;
}

// ProcessDeferredElementsToDestroy @ 142cb2720

void __thiscall UTypedElementRegistry::ProcessDeferredElementsToDestroy(UTypedElementRegistry *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
  *pTVar11;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnProcessingDeferredElementsToDestroyDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar9 = *(int *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar7 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x68))(), cVar6 == '\0')) {
        bVar7 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnProcessingDeferredElementsToDestroyDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnProcessingDeferredElementsToDestroyDelegate,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  SRWLock = &this->RegisteredElementTypesRW;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  FLLMScope::FLLMScope(local_res8,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,EngineMisc,true);
  for (pTVar11 = this->RegisteredElementTypes;
      (TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess> *)pTVar11 !=
      &this->RegisteredElementTypesNameToId; pTVar11 = pTVar11 + 1) {
    if (pTVar11->Ptr != (FRegisteredElementType *)0x0) {
      (**(code **)(pTVar11->Ptr->_padding_ + 0x28))();
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return;
}

// RegisterElementInterfaceImpl @ 142cb42b0

void __thiscall
UTypedElementRegistry::RegisterElementInterfaceImpl
          (UTypedElementRegistry *this,FName param_1,UObject *param_2,
          TSubclassOf<UInterface> *param_3,bool param_4)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FRegisteredElementType *pFVar7;
  TObjectPtr<UObject> *pTVar8;
  UClass *pUVar9;
  TTuple<FName,TObjectPtr<UObject>_> *pTVar10;
  UClass *pUVar11;
  FName local_res10 [2];
  FLLMScope local_res20 [2];
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FMemScope local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_res10[0] = param_1;
  FLLMScope::FLLMScope(local_res20,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,EngineMisc,true);
  pUVar2 = (param_3->Class).field0_0x0.DebugPtr;
  pUVar11 = (UClass *)0x0;
  pUVar9 = *(UClass **)&param_2->field_0x10;
  pUVar6 = pUVar11;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UInterface_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = (param_3->Class).field0_0x0.DebugPtr;
    }
  }
  bVar4 = UClass::ImplementsInterface(pUVar9,pUVar6);
  if (!bVar4) {
    pUVar2 = (param_3->Class).field0_0x0.DebugPtr;
    pUVar9 = pUVar11;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar9 = (param_3->Class).field0_0x0.DebugPtr;
      }
    }
    local_c0 = (FName)pUVar9->_padding_;
    ::FName::ToString(&local_c0,&local_90);
    local_b8 = *(FName *)(*(longlong *)&param_2->field_0x10 + 0x18);
    ::FName::ToString(&local_b8,&local_a0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_70,(UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementInterface->GetClass()->ImplementsInterface(InBaseInterfaceType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                       ,0x80,L"Interface \'%s\' of type \'%s\' does not derive from \'%s\'!");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = GetRegisteredElementTypeFromName(this,local_res10);
  if (pFVar7 == (FRegisteredElementType *)0x0) {
    ::FName::ToString(local_res10,&local_60);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredElementType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                       ,0x83,L"Element type \'%s\' has not been registered!");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (!param_4) {
    pUVar2 = (param_3->Class).field0_0x0.DebugPtr;
    pUVar9 = pUVar11;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar9 = (param_3->Class).field0_0x0.DebugPtr;
      }
    }
    pTVar8 = TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                       (&pFVar7->Interfaces,(FName)pUVar9->_padding_);
    if (pTVar8 != (TObjectPtr<UObject> *)0x0) {
      pUVar2 = (param_3->Class).field0_0x0.DebugPtr;
      pUVar9 = pUVar11;
      if ((pUVar2 != (UClass *)0x0) &&
         (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
        iVar1 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar9 = (param_3->Class).field0_0x0.DebugPtr;
        }
      }
      local_b0 = (FName)pUVar9->_padding_;
      ::FName::ToString(&local_b0,&local_80);
      ::FName::ToString(local_res10,&local_50);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllowOverride || !RegisteredElementType->Interfaces.Contains(InBaseInterfaceType->GetFName())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                         ,0x85,
                         L"Element type \'%s\' has already registered an interface for \'%s\'!");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pUVar2 = (param_3->Class).field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UInterface_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar11 = (param_3->Class).field0_0x0.DebugPtr;
    }
  }
  local_c8 = (FName)pUVar11->_padding_;
  pTVar10 = TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::
            AllocateMemoryForEmplace<FName_&>(&pFVar7->Interfaces,&local_c8);
  *(uint *)&pTVar10->field_0x0 = local_c8.ComparisonIndex.Value;
  *(uint *)&pTVar10->field_0x4 = local_c8.Number;
  *(UObject **)&pTVar10->field_0x8 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_2);
  }
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// RegisterElementTypeImpl @ 142cb4690

void __thiscall
UTypedElementRegistry::RegisterElementTypeImpl
          (UTypedElementRegistry *this,FName param_1,
          TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
          *param_2)

{
  uchar uVar1;
  
  uVar1 = (**(code **)(param_2->Ptr->_padding_ + 0x38))();
  if (uVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&NextTypeIdCS,4000);
        atexit(`UTypedElementRegistry::RegisterElementTypeImpl'::__l5::
               _dynamic_atexit_destructor_for__NextTypeIdCS__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&NextTypeIdCS);
    uVar1 = NextTypeId;
    NextTypeId = NextTypeId + '\x01';
    (**(code **)(param_2->Ptr->_padding_ + 0x30))(param_2->Ptr,uVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&NextTypeIdCS);
  }
  param_2->Ptr->TypeId = uVar1;
  param_2->Ptr->TypeName = param_1;
  AddRegisteredElementType(this,param_2);
  return;
}

// RegistredElementTypesAndInterfacesToString @ 142cb4790

/* WARNING: Removing unreachable block (ram,0x000142cb4cf6) */
/* WARNING: Removing unreachable block (ram,0x000142cb4a25) */
/* WARNING: Removing unreachable block (ram,0x000142cb503c) */
/* WARNING: Type propagation algorithm not settling */

FString * __thiscall
UTypedElementRegistry::RegistredElementTypesAndInterfacesToString
          (UTypedElementRegistry *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  uint uVar7;
  int iVar8;
  FStringFormatArg *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FPlatformRWLock *SRWLock;
  FName *pFVar12;
  ForAnyElementType FVar13;
  FName *pFVar14;
  FRegisteredElementType *pFVar15;
  FName *this_00;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_188;
  undefined8 local_180;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_168;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_158;
  undefined1 local_148;
  undefined1 local_147 [7];
  FString local_140;
  FString local_130;
  FString local_120;
  uint local_110;
  FPlatformRWLock *local_108;
  FName *local_100;
  FStringFormatArg local_f8;
  FStringFormatArg local_d8;
  FStringFormatArg local_b8;
  FStringFormatArg local_98;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  SRWLock = &this->RegisteredElementTypesRW;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_108 = SRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar7 = (this->RegisteredElementTypesNameToId).Pairs.ArrayNum;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (local_180._4_4_ < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar7,&local_188,(int)local_180,(int *)((longlong)&local_180 + 4));
  }
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  pFVar6 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
  FStringFormatArg::FStringFormatArg(&local_f8,pFVar6);
  if (((local_168.AllocatorInstance.Data <= &local_f8) &&
      (&local_f8 <
       (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0x20))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = local_168.ArrayNum;
  if (local_168.ArrayNum == local_168.ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&local_168.AllocatorInstance,&local_168.ArrayMax);
  }
  local_168.ArrayNum = iVar4 + 1;
  pFVar9 = (FStringFormatArg *)(local_168.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
  (pFVar9->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar9->StringValue).Data.ArrayNum = 0;
  (pFVar9->StringValue).Data.ArrayMax = 0;
  FStringFormatArg::operator=(pFVar9,&local_f8);
  if (local_f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl
            (&local_140,L"Registred Type Elements and their Interfaces for the registry: {0}",
             &local_168);
  if (((local_188.Data <= (FScriptContainerElement *)&local_140) &&
      ((FScriptContainerElement *)&local_140 < local_188.Data + (longlong)local_180._4_4_ * 0x10))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_188,(int *)((longlong)&local_180 + 4));
  }
  local_180 = CONCAT44(local_180._4_4_,iVar4 + 1);
  pFVar10 = local_188.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_140.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_140.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_140.Data.ArrayMax;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
  if ((FStringFormatArg *)local_168.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  local_110 = (this->RegisteredElementTypesNameToId).Pairs.ArrayNum;
  uVar11 = (ulonglong)(int)local_110;
  this_00 = (FName *)(this->RegisteredElementTypesNameToId).Pairs.AllocatorInstance.Data;
  local_100 = (FName *)((longlong)this_00 + uVar11 * 0xc);
  do {
    pFVar14 = local_100;
    pFVar15 = (FRegisteredElementType *)0x0;
    if ((this->RegisteredElementTypesNameToId).Pairs.ArrayNum != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,unsigned_char>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar14) {
      iVar4 = (int)local_180;
      uVar11 = (ulonglong)(int)local_180;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10 = local_188.Data + uVar11 * 0x10;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      FVar13.Data = local_188.Data;
      while( true ) {
        iVar5 = (int)pFVar15;
        if ((int)uVar11 != iVar4) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_148);
          uVar11 = local_180 & 0xffffffff;
        }
        if (FVar13.Data == pFVar10) break;
        iVar8 = *(int *)(FVar13.Data + 8) + -1 + iVar5;
        if (*(int *)(FVar13.Data + 8) == 0) {
          iVar8 = iVar5;
        }
        FVar13.Data = FVar13.Data + 0x10;
        pFVar15 = (FRegisteredElementType *)(ulonglong)(iVar8 + 1);
      }
      ::FString::Reserve(__return_storage_ptr__,iVar5);
      iVar4 = (int)local_180;
      pFVar10 = local_188.Data + (longlong)(int)local_180 * 0x10;
      FVar13.Data = local_188.Data;
      while( true ) {
        if ((int)local_180 != iVar4) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_147);
        }
        if (FVar13.Data == pFVar10) break;
        iVar5 = *(int *)(FVar13.Data + 8) + -1;
        if (*(int *)(FVar13.Data + 8) == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar13.Data,iVar5);
        ::FString::AppendChar(__return_storage_ptr__,L'\n');
        FVar13.Data = FVar13.Data + 0x10;
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
      DestructItems<FString,int>((FString *)local_188.Data,(int)local_180);
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      return __return_storage_ptr__;
    }
    bVar1 = (byte)this_00[1].ComparisonIndex.Value;
    if ((SRWLock == (FPlatformRWLock *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    if (bVar1 != 0) {
      pFVar15 = this->RegisteredElementTypes[(ulonglong)bVar1 - 1].Ptr;
    }
    if (SRWLock != (FPlatformRWLock *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
    if (pFVar15 != (FRegisteredElementType *)0x0) {
      uVar7 = (int)local_180 + 1 + (pFVar15->Interfaces).Pairs.ArrayNum;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (local_180._4_4_ < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar7,&local_188,(int)local_180,(int *)((longlong)&local_180 + 4));
      }
      local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ArrayNum = 0;
      local_158.ArrayMax = 0;
      pFVar6 = ::FName::ToString(this_00,&local_68);
      FStringFormatArg::FStringFormatArg(&local_d8,pFVar6);
      if (((local_158.AllocatorInstance.Data <= &local_d8) &&
          (&local_d8 <
           (FStringFormatArg *)
           (local_158.AllocatorInstance.Data + (longlong)local_158.ArrayMax * 0x20))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      iVar4 = local_158.ArrayNum;
      if (local_158.ArrayNum == local_158.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_158.AllocatorInstance,&local_158.ArrayMax);
      }
      local_158.ArrayNum = iVar4 + 1;
      pFVar9 = (FStringFormatArg *)(local_158.AllocatorInstance.Data + (longlong)iVar4 * 0x20);
      (pFVar9->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar9->StringValue).Data.ArrayNum = 0;
      (pFVar9->StringValue).Data.ArrayMax = 0;
      FStringFormatArg::operator=(pFVar9,&local_d8);
      if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
      }
      ::FString::FormatImpl(&local_130,L"\tType: {0}",&local_158);
      if (((local_188.Data <= (FScriptContainerElement *)&local_130) &&
          ((FScriptContainerElement *)&local_130 < local_188.Data + (longlong)local_180._4_4_ * 0x10
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      iVar4 = (int)local_180;
      if ((int)local_180 == local_180._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_188,(int *)((longlong)&local_180 + 4));
      }
      local_180 = CONCAT44(local_180._4_4_,iVar4 + 1);
      pFVar10 = local_188.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_130.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 8) = local_130.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_130.Data.ArrayMax;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_158.AllocatorInstance.Data,local_158.ArrayNum);
      if ((FStringFormatArg *)local_158.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
      iVar4 = (pFVar15->Interfaces).Pairs.ArrayNum;
      pFVar14 = (FName *)(pFVar15->Interfaces).Pairs.AllocatorInstance.Data;
      pFVar12 = pFVar14 + (longlong)iVar4 * 2;
      while( true ) {
        if ((pFVar15->Interfaces).Pairs.ArrayNum != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,TObjectPtr<UObject>_>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        SRWLock = local_108;
        if (pFVar14 == pFVar12) break;
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 0;
        local_178.ArrayMax = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
        pFVar6 = ::FName::ToString(pFVar14,&local_58);
        FStringFormatArg::FStringFormatArg(&local_b8,pFVar6);
        if (((local_178.AllocatorInstance.Data <= &local_b8) &&
            (&local_b8 <
             (FStringFormatArg *)
             (local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        iVar5 = local_178.ArrayNum;
        if (local_178.ArrayNum == local_178.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        local_178.ArrayNum = iVar5 + 1;
        pFVar9 = (FStringFormatArg *)(local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20);
        (pFVar9->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->StringValue).Data.ArrayNum = 0;
        (pFVar9->StringValue).Data.ArrayMax = 0;
        FStringFormatArg::operator=(pFVar9,&local_b8);
        if (local_b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.StringValue.Data.AllocatorInstance.Data);
        }
        pFVar6 = UObjectBaseUtility::GetPathName
                           (*(UObjectBaseUtility **)((longlong)pFVar14[1] + 0x10),&local_48,
                            (UObject *)0x0);
        FStringFormatArg::FStringFormatArg(&local_98,pFVar6);
        if (((local_178.AllocatorInstance.Data <= &local_98) &&
            (&local_98 <
             (FStringFormatArg *)
             (local_178.AllocatorInstance.Data + (longlong)local_178.ArrayMax * 0x20))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        iVar5 = local_178.ArrayNum;
        if (local_178.ArrayNum == local_178.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        local_178.ArrayNum = iVar5 + 1;
        pFVar9 = (FStringFormatArg *)(local_178.AllocatorInstance.Data + (longlong)iVar5 * 0x20);
        (pFVar9->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar9->StringValue).Data.ArrayNum = 0;
        (pFVar9->StringValue).Data.ArrayMax = 0;
        FStringFormatArg::operator=(pFVar9,&local_98);
        if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
        }
        ::FString::FormatImpl(&local_120,L"\t\tInterface {0} is implemented by {1}",&local_178);
        if (((local_188.Data <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 <
             local_188.Data + (longlong)local_180._4_4_ * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        iVar5 = (int)local_180;
        if ((int)local_180 == local_180._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_188,(int *)((longlong)&local_180 + 4));
        }
        local_180 = CONCAT44(local_180._4_4_,iVar5 + 1);
        pFVar10 = local_188.Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(FScriptContainerElement **)pFVar10 = local_120.Data.AllocatorInstance.Data;
        *(int *)(pFVar10 + 8) = local_120.Data.ArrayNum;
        *(int *)(pFVar10 + 0xc) = local_120.Data.ArrayMax;
        local_120.Data.ArrayNum = 0;
        local_120.Data.ArrayMax = 0;
        local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
        if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_178.AllocatorInstance.Data);
        }
        pFVar14 = pFVar14 + 2;
      }
    }
    uVar11 = (ulonglong)local_110;
    this_00 = (FName *)&this_00[1].Number;
  } while( true );
}

// ReleaseElementId @ 142cb6130

void __thiscall
UTypedElementRegistry::ReleaseElementId(UTypedElementRegistry *this,FTypedElementId *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FRegisteredElementType *pFVar4;
  longlong lVar5;
  
  bVar1 = (param_1->field0_0x0)._s_0.TypeId;
  if (bVar1 != 0) {
    pFVar4 = GetRegisteredElementTypeFromId(this,bVar1);
    if (pFVar4 == (FRegisteredElementType *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredElementType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                         ,0xae,L"Element type ID \'%d\' has not been registered!");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar5 = (**(code **)(pFVar4->_padding_ + 0x18))
                      (pFVar4,(param_1->field0_0x0).CombinedId & 0xffffff);
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + -1;
    UNLOCK();
    (param_1->field0_0x0).CombinedId = 0;
  }
  return;
}

// StaticRegisterNativesUTypedElementRegistry @ 142cbc320

void __cdecl UTypedElementRegistry::StaticRegisterNativesUTypedElementRegistry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementRegistry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetElementInterface @ 142cc4520

void __cdecl
UTypedElementRegistry::execGetElementInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  FTypedElementId *pFVar4;
  void **ppvVar5;
  void *local_res10;
  UClass *local_res18;
  TObjectPtr<UClass>_u_0 local_res20;
  
  local_res10 = (void *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UClass *)0x0;
  ppvVar5 = &local_res10;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20.DebugPtr = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  if ((*ppvVar5 == (longlong *)0x0) ||
     (lVar2 = *(longlong *)*ppvVar5, pFVar4 = (FTypedElementId *)(lVar2 + 8), lVar2 == 0)) {
    pFVar4 = &FTypedElementId::Unset;
  }
  pUVar3 = GetElementInterfaceImpl
                     ((UTypedElementRegistry *)param_1,(pFVar4->field0_0x0)._s_0.TypeId,
                      (TSubclassOf<UInterface> *)&local_res20.ObjectPtr);
  *(UObject **)param_3 = pUVar3;
  if (local_res10 != (void *)0x0) {
    *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
    if (*(int *)((longlong)local_res10 + 8) == 0) {
      ::operator_delete(local_res10,0x10);
    }
  }
  return;
}

// execGetInstance @ 142cc4660

void __cdecl UTypedElementRegistry::execGetInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetTypedElementRegistryInstance();
  *(UObject **)param_3 = pTVar1->Object;
  return;
}

