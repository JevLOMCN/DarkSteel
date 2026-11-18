// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 12

// StaticClass @ 14e4ccc90

UClass * __cdecl UInterchangeMeshUtilities::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeMeshUtilities",
               &Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshUtilities,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeMeshUtilities>,
               InternalVTableHelperCtorCaller<UInterchangeMeshUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton;
}

// UInterchangeMeshUtilities @ 14e4d8ce0

UInterchangeMeshUtilities * __thiscall
UInterchangeMeshUtilities::UInterchangeMeshUtilities
          (UInterchangeMeshUtilities *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeMeshUtilities__6B_;
  return this;
}

// UInterchangeMeshUtilities @ 14e4d8d10

UInterchangeMeshUtilities * __thiscall
UInterchangeMeshUtilities::UInterchangeMeshUtilities
          (UInterchangeMeshUtilities *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangeMeshUtilities__6B_;
  return this;
}

// ~UInterchangeMeshUtilities @ 14e4db090

void __thiscall
UInterchangeMeshUtilities::~UInterchangeMeshUtilities(UInterchangeMeshUtilities *this)

{
  *(undefined ***)this = &___7UInterchangeMeshUtilities__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f7fd0

UClass * __cdecl UInterchangeMeshUtilities::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangeMeshUtilities",
               &Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton,
               StaticRegisterNativesUInterchangeMeshUtilities,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeMeshUtilities>,
               InternalVTableHelperCtorCaller<UInterchangeMeshUtilities>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeMeshUtilities.InnerSingleton;
}

// ImportCustomLod @ 14e4fa440

TFuture<bool> * __cdecl
UInterchangeMeshUtilities::ImportCustomLod
          (TFuture<bool> *__return_storage_ptr__,UObject *param_1,int param_2,
          UInterchangeSourceData *param_3,bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  TPromise<bool> *this;
  code *pcVar2;
  bool bVar3;
  TSharedRef<TPromise<bool>,1> *pTVar4;
  TFuture<bool> *pTVar5;
  bool local_res8 [8];
  TSharedRef<TPromise<bool>,1> local_18;
  
  pTVar4 = MakeShared<TPromise<bool>,1>(&local_18);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  this = pTVar4->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (TPromise<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_res8[0] = false;
  TPromise<bool>::SetValue(this,local_res8);
  if (this == (TPromise<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar2)();
      return pTVar5;
    }
  }
  TPromise<bool>::GetFuture(this,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ImportMorphTarget @ 14e4fd7c0

TFuture<bool> * __cdecl
UInterchangeMeshUtilities::ImportMorphTarget
          (TFuture<bool> *__return_storage_ptr__,USkeletalMesh *param_1,int param_2,
          UInterchangeSourceData *param_3,bool param_4,FString *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  TPromise<bool> *this;
  code *pcVar2;
  bool bVar3;
  TSharedRef<TPromise<bool>,1> *pTVar4;
  TFuture<bool> *pTVar5;
  bool local_res8 [8];
  TSharedRef<TPromise<bool>,1> local_18;
  
  pTVar4 = MakeShared<TPromise<bool>,1>(&local_18);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  this = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this == (TPromise<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar2)();
      return pTVar5;
    }
  }
  local_res8[0] = false;
  TPromise<bool>::SetValue(this,local_res8);
  if (this == (TPromise<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TFuture<bool> *)(*pcVar2)();
      return pTVar5;
    }
  }
  TPromise<bool>::GetFuture(this,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// InternalImportCustomLod @ 14e4fdd00

TFuture<bool> * __cdecl
UInterchangeMeshUtilities::InternalImportCustomLod
          (TFuture<bool> *__return_storage_ptr__,TSharedPtr<TPromise<bool>,1> *param_1,
          UObject *param_2,int param_3,UInterchangeSourceData *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  TFuture<bool> *pTVar3;
  bool local_res8 [8];
  
  if (param_1->Object == (TPromise<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFuture<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  local_res8[0] = false;
  TPromise<bool>::SetValue(param_1->Object,local_res8);
  if (param_1->Object == (TPromise<bool> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TFuture<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  TPromise<bool>::GetFuture(param_1->Object,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ScriptedImportMorphTarget @ 14e504100

bool __thiscall
UInterchangeMeshUtilities::ScriptedImportMorphTarget
          (UInterchangeMeshUtilities *this,USkeletalMesh *param_1,int param_2,
          UInterchangeSourceData *param_3,FString *param_4)

{
  uchar uVar1;
  TReferenceControllerBase<1> *pTVar2;
  TPromise<bool> *this_00;
  TFutureState<bool> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  TSharedRef<TPromise<bool>,1> *pTVar8;
  bool local_28 [8];
  TSharedRef<TPromise<bool>,1> local_20;
  
  pTVar8 = MakeShared<TPromise<bool>,1>(&local_20);
  pTVar2 = (pTVar8->SharedReferenceCount).ReferenceController;
  this_00 = pTVar8->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.SharedReferenceCount.ReferenceController);
  if (this_00 == (TPromise<bool> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_28[0] = false;
  TPromise<bool>::SetValue(this_00,local_28);
  if (this_00 == (TPromise<bool> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (this_00->bFutureRetrieved != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pTVar3 = (this_00->State).Object;
  this_00->bFutureRetrieved = true;
  if (pTVar3 == (TFutureState<bool> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pTVar3 = (this_00->State).Object;
  pTVar4 = (this_00->State).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar3 == (TFutureState<bool> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  while (pTVar3->field_0x68 == '\0') {
    (**(code **)(**(longlong **)&pTVar3->field_0x60 + 0x20))
              (*(longlong **)&pTVar3->field_0x60,0xffffffff,0);
  }
  uVar1 = (pTVar3->Result).Pad[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (bool)uVar1;
}

// ShowMeshFilePicker @ 14e509400

bool __cdecl UInterchangeMeshUtilities::ShowMeshFilePicker(FString *param_1,FText *param_2)

{
  UClass *this;
  
  this = UInterchangeProjectSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return false;
}

// StaticRegisterNativesUInterchangeMeshUtilities @ 14e50aae0

void __cdecl UInterchangeMeshUtilities::StaticRegisterNativesUInterchangeMeshUtilities(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeMeshUtilities_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execScriptedImportMorphTarget @ 14e50f770

void __cdecl
UInterchangeMeshUtilities::execScriptedImportMorphTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  UInterchangeSourceData *local_res18;
  USkeletalMesh *local_res20;
  FString local_28;
  
  local_res20 = (USkeletalMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UInterchangeSourceData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ScriptedImportMorphTarget
                    ((UInterchangeMeshUtilities *)param_1,local_res20,local_res10[0],local_res18,
                     &local_28);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

