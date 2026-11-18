// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 58

// SerializeBin @ 141f109a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UStruct::SerializeBin(UStruct *this,FArchive *param_1,void *param_2)

{
  code *pcVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_1d8 [40];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pcVar1 = *(code **)(this->_padding_ + 0x2d0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  (*pcVar1)(this,*(undefined8 *)FVar2,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

// SerializeTaggedProperties @ 141f10fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStruct::SerializeTaggedProperties
          (UStruct *this,FArchive *param_1,uchar *param_2,UStruct *param_3,uchar *param_4,
          UObject *param_5)

{
  code *pcVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_208 [32];
  uchar *local_1e8;
  UObject *local_1e0;
  FStructuredArchiveFromArchive local_1d0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_208;
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1d0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1e0 = param_5;
  local_1e8 = param_4;
  (*pcVar1)(this,*(undefined8 *)FVar2,param_2,param_3);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d0);
  return;
}

// StaticClass @ 141f536d0

UClass * __cdecl UStruct::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Struct",&Z_Registration_Info_UClass_UStruct.InnerSingleton,
               StaticRegisterNativesUStruct,0xb0,8,CLASS_Intrinsic,CASTCLASS_UStruct,L"Engine",
               InternalConstructor<UStruct>,InternalVTableHelperCtorCaller<UStruct>,local_res10,
               UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UStruct.InnerSingleton;
}

// UStruct @ 141f68040

UStruct * __thiscall UStruct::UStruct(UStruct *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = 0;
  (this->SuperStruct).field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->Children).field0_0x0.DebugPtr = (UField *)0x0;
  this->StructStateFlags = (atomic<unsigned_short>)0x0;
  (this->Script).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Script).ArrayNum = 0;
  (this->Script).ArrayMax = 0;
  (this->ScriptAndPropertyObjectReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptAndPropertyObjectReferences).ArrayNum = 0;
  (this->ScriptAndPropertyObjectReferences).ArrayMax = 0;
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  return this;
}

// UStruct @ 141f680b0

UStruct * __thiscall
UStruct::UStruct(UStruct *this,FObjectInitializer *param_1,UStruct *param_2,ulong64 param_3,
                ulong64 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UStruct *pUVar4;
  int iVar5;
  short sVar6;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = 0;
  (this->SuperStruct).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Children).field0_0x0.DebugPtr = (UField *)0x0;
  this->ChildProperties = (FField *)0x0;
  if (param_3 == 0) {
    if (param_2 == (UStruct *)0x0) {
      param_3 = 0;
    }
    else {
      param_3 = (ulong64)(uint)param_2->PropertiesSize;
    }
  }
  else if (((param_3 != (longlong)(int)param_3) || ((int)param_3 < 0)) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
          bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UStruct *)(*pcVar1)();
    return pUVar4;
  }
  this->PropertiesSize = (int)param_3;
  if (param_4 == 0) {
    iVar5 = 1;
    if (param_2 != (UStruct *)0x0) {
      iVar5 = (int)param_2->MinAlignment;
    }
    iVar3 = 1;
    if (1 < iVar5) {
      iVar3 = iVar5;
    }
    param_4 = (ulong64)iVar3;
  }
  sVar6 = (short)param_4;
  if (((param_4 != (longlong)sVar6) || (sVar6 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UStruct *)(*pcVar1)();
    return pUVar4;
  }
  this->MinAlignment = sVar6;
  this->StructStateFlags = (atomic<unsigned_short>)0x0;
  (this->Script).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Script).ArrayNum = 0;
  (this->Script).ArrayMax = 0;
  this->PropertyLink = (FProperty *)0x0;
  this->RefLink = (FProperty *)0x0;
  this->DestructorLink = (FProperty *)0x0;
  this->PostConstructLink = (FProperty *)0x0;
  (this->ScriptAndPropertyObjectReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptAndPropertyObjectReferences).ArrayNum = 0;
  (this->ScriptAndPropertyObjectReferences).ArrayMax = 0;
  this->UnresolvedScriptProperties =
       (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  return this;
}

// UStruct @ 141f68230

UStruct * __thiscall
UStruct::UStruct(UStruct *this,UStruct *param_1,ulong64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  UStruct *pUVar5;
  int iVar6;
  short sVar7;
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = 0;
  (this->SuperStruct).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Children).field0_0x0.DebugPtr = (UField *)0x0;
  this->ChildProperties = (FField *)0x0;
  if (param_2 == 0) {
    if (param_1 == (UStruct *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = (ulong64)(uint)param_1->PropertiesSize;
    }
  }
  else if (((param_2 != (longlong)(int)param_2) || ((int)param_2 < 0)) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("IntFitsIn<OutType>(In)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
          bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UStruct *)(*pcVar1)();
    return pUVar5;
  }
  this->PropertiesSize = (int)param_2;
  if (param_3 == 0) {
    iVar6 = 1;
    if (param_1 != (UStruct *)0x0) {
      iVar6 = (int)param_1->MinAlignment;
    }
    iVar3 = 1;
    if (1 < iVar6) {
      iVar3 = iVar6;
    }
    param_3 = (ulong64)iVar3;
  }
  sVar7 = (short)param_3;
  if (((param_3 != (longlong)sVar7) || (sVar7 < 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UStruct *)(*pcVar1)();
    return pUVar5;
  }
  this->MinAlignment = sVar7;
  this->StructStateFlags = (atomic<unsigned_short>)0x0;
  (this->Script).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Script).ArrayNum = 0;
  (this->Script).ArrayMax = 0;
  this->PropertyLink = (FProperty *)0x0;
  this->RefLink = (FProperty *)0x0;
  this->DestructorLink = (FProperty *)0x0;
  this->PostConstructLink = (FProperty *)0x0;
  (this->ScriptAndPropertyObjectReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptAndPropertyObjectReferences).ArrayNum = 0;
  (this->ScriptAndPropertyObjectReferences).ArrayMax = 0;
  this->UnresolvedScriptProperties =
       (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  return this;
}

// UStruct @ 141f683c0

UStruct * __thiscall
UStruct::UStruct(UStruct *this,EStaticConstructor param_1,int param_2,int param_3,
                EObjectFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  UStruct *pUVar3;
  
  UObject::UObject((UObject *)this,EC_StaticConstructor,param_4);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = 0;
  (this->SuperStruct).field0_0x0.DebugPtr = (UStruct *)0x0;
  (this->Children).field0_0x0.DebugPtr = (UField *)0x0;
  this->ChildProperties = (FField *)0x0;
  this->PropertiesSize = param_2;
  if (param_3 != (short)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UStruct *)(*pcVar1)();
      return pUVar3;
    }
  }
  this->MinAlignment = (short)param_3;
  this->StructStateFlags = (atomic<unsigned_short>)0x0;
  (this->Script).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Script).ArrayNum = 0;
  (this->Script).ArrayMax = 0;
  this->PropertyLink = (FProperty *)0x0;
  this->RefLink = (FProperty *)0x0;
  this->DestructorLink = (FProperty *)0x0;
  this->PostConstructLink = (FProperty *)0x0;
  (this->ScriptAndPropertyObjectReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScriptAndPropertyObjectReferences).ArrayNum = 0;
  (this->ScriptAndPropertyObjectReferences).ArrayMax = 0;
  this->UnresolvedScriptProperties =
       (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  return this;
}

// ~UStruct @ 141f691a0

void __thiscall UStruct::~UStruct(UStruct *this)

{
  FField *pFVar1;
  TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FField *pFVar4;
  
  this->_padding_ = (longlong)&___7UStruct__6B_;
  pFVar4 = this->ChildProperties;
  while (pFVar4 != (FField *)0x0) {
    pFVar1 = pFVar4->Next;
    (**(code **)(pFVar4->_padding_ + 8))(pFVar4,1);
    pFVar4 = pFVar1;
  }
  this->ChildProperties = (FField *)0x0;
  pTVar2 = this->UnresolvedScriptProperties;
  if (pTVar2 != (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0) {
    DestructItems<TTuple<TFieldPath<FField>,int>,int>
              ((TTuple<TFieldPath<FField>,int> *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pTVar2,0x10);
    this->UnresolvedScriptProperties =
         (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  pFVar3 = (this->Script).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ScriptAndPropertyObjectReferences).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  operator_delete__((void *)this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddCppProperty @ 141f6d0d0

void __thiscall UStruct::AddCppProperty(UStruct *this,FProperty *param_1)

{
  param_1->_padding_ = (longlong)this->ChildProperties;
  this->ChildProperties = (FField *)param_1;
  return;
}

// AddReferencedObjects @ 141f6dd10

void __cdecl UStruct::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UStruct>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UStruct>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ArePropertyGuidsAvailable @ 141f6f6a0

bool __thiscall UStruct::ArePropertyGuidsAvailable(UStruct *this)

{
  return false;
}

// CollectBytecodeAndPropertyReferencedObjects @ 141f72c50

void __thiscall UStruct::CollectBytecodeAndPropertyReferencedObjects(UStruct *this)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  FField *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int local_res8 [2];
  FReferenceCollector local_d8;
  UStruct *local_c8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *local_c0;
  FArchiveState local_b8;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *local_28;
  UStruct *local_20;
  
  pTVar2 = &this->ScriptAndPropertyObjectReferences;
  iVar4 = 0;
  piVar1 = &(this->ScriptAndPropertyObjectReferences).ArrayMax;
  (this->ScriptAndPropertyObjectReferences).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar5 = (this->ScriptAndPropertyObjectReferences).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->ScriptAndPropertyObjectReferences).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pFVar6 = pFVar6 + 8;
  }
  FArchiveState::FArchiveState(&local_b8);
  local_b8.ArIsObjectReferenceCollector = '\x01';
  local_b8._padding_ = (longlong)&___7FArchiveScriptReferenceCollector__6B_;
  local_28 = pTVar2;
  local_20 = this;
  FArchiveState::SetIsPersistent(&local_b8,false);
  local_b8._42_1_ = local_b8._42_1_ & 0xfd;
  local_res8[0] = 0;
  if (0 < (this->Script).ArrayNum) {
    do {
      (**(code **)(this->_padding_ + 0x310))(this,local_res8,&local_b8);
    } while (local_res8[0] < (this->Script).ArrayNum);
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar7 = (pTVar2->AllocatorInstance).Data, iVar5 = iVar4,
     0 < (this->ScriptAndPropertyObjectReferences).ArrayNum)) {
    do {
      if (*(UObject **)pFVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar7);
      }
      iVar5 = iVar5 + 1;
      pFVar7 = pFVar7 + 8;
    } while (iVar5 < (this->ScriptAndPropertyObjectReferences).ArrayNum);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar5 = (this->ScriptAndPropertyObjectReferences).ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->ScriptAndPropertyObjectReferences).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pFVar6 = pFVar6 + 8;
  }
  pFVar3 = this->ChildProperties;
  local_d8.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_d8._padding_ = (longlong)&___7FPropertyReferenceCollector__6B_;
  local_c0 = pTVar2;
  local_c8 = this;
  for (; pFVar3 != (FField *)0x0; pFVar3 = pFVar3->Next) {
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,&local_d8);
  }
  FReferenceCollector::~FReferenceCollector(&local_d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar7 = (pTVar2->AllocatorInstance).Data,
     0 < (this->ScriptAndPropertyObjectReferences).ArrayNum)) {
    do {
      if (*(UObject **)pFVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar7);
      }
      iVar4 = iVar4 + 1;
      pFVar7 = pFVar7 + 8;
    } while (iVar4 < (this->ScriptAndPropertyObjectReferences).ArrayNum);
  }
  return;
}

// CollectBytecodeAndPropertyReferencedObjectsRecursively @ 141f72e30

void __thiscall UStruct::CollectBytecodeAndPropertyReferencedObjectsRecursively(UStruct *this)

{
  int iVar1;
  UStruct *this_00;
  UClass *pUVar2;
  
  CollectBytecodeAndPropertyReferencedObjects(this);
  for (this_00 = (UStruct *)(this->Children).field0_0x0.DebugPtr; this_00 != (UStruct *)0x0;
      this_00 = (UStruct *)this_00->_padding_) {
    pUVar2 = GetPrivateStaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      CollectBytecodeAndPropertyReferencedObjectsRecursively(this_00);
    }
  }
  return;
}

// CollectBytecodeReferencedObjects @ 141f72e90

void __thiscall
UStruct::CollectBytecodeReferencedObjects
          (UStruct *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int local_res8 [2];
  FArchiveState local_a8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_18;
  UStruct *local_10;
  
  FArchiveState::FArchiveState(&local_a8);
  local_a8.ArIsObjectReferenceCollector = '\x01';
  local_a8._padding_ = (longlong)&___7FArchiveScriptReferenceCollector__6B_;
  local_18 = param_1;
  local_10 = this;
  FArchiveState::SetIsPersistent(&local_a8,false);
  local_a8._42_1_ = local_a8._42_1_ & 0xfd;
  local_res8[0] = 0;
  if (0 < (this->Script).ArrayNum) {
    do {
      (**(code **)(this->_padding_ + 0x310))(this,local_res8,&local_a8);
    } while (local_res8[0] < (this->Script).ArrayNum);
  }
  FArchive::~FArchive((FArchive *)&local_a8);
  return;
}

// CollectPropertyReferencedObjects @ 141f72f40

void __thiscall
UStruct::CollectPropertyReferencedObjects
          (UStruct *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FField *pFVar1;
  FReferenceCollector local_28;
  UStruct *local_18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_10;
  
  pFVar1 = this->ChildProperties;
  local_28.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_28._padding_ = (longlong)&___7FPropertyReferenceCollector__6B_;
  local_18 = this;
  local_10 = param_1;
  for (; pFVar1 != (FField *)0x0; pFVar1 = pFVar1->Next) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,&local_28);
  }
  FReferenceCollector::~FReferenceCollector(&local_28);
  return;
}

// CustomFindProperty @ 141f78520

FProperty * __thiscall UStruct::CustomFindProperty(UStruct *this,FName param_1)

{
  return (FProperty *)0x0;
}

// DebugIsPropertyChainReady @ 141f78830

bool __thiscall UStruct::DebugIsPropertyChainReady(UStruct *this)

{
  return (bool)(SUB21(this->StructStateFlags,0) & 1);
}

// DestroyChildPropertiesAndResetPropertyLinks @ 141f78ad0

void __thiscall UStruct::DestroyChildPropertiesAndResetPropertyLinks(UStruct *this)

{
  FField *pFVar1;
  FField *pFVar2;
  
  pFVar2 = this->ChildProperties;
  while (pFVar2 != (FField *)0x0) {
    pFVar1 = pFVar2->Next;
    (**(code **)(pFVar2->_padding_ + 8))(pFVar2,1);
    pFVar2 = pFVar1;
  }
  this->ChildProperties = (FField *)0x0;
  this->PropertyLink = (FProperty *)0x0;
  this->RefLink = (FProperty *)0x0;
  this->DestructorLink = (FProperty *)0x0;
  this->PostConstructLink = (FProperty *)0x0;
  if (this->UnversionedGameSchema != (atomic<FUnversionedStructSchema_const_*>)0x0) {
    FMemory::Free((void *)this->UnversionedGameSchema);
  }
  LOCK();
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  UNLOCK();
  return;
}

// DestroyStruct @ 141f78f90

void __thiscall UStruct::DestroyStruct(UStruct *this,void *param_1,int param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  
  bVar3 = false;
  pFVar1 = this->DestructorLink;
  uVar7 = this->MinAlignment + -1 + this->PropertiesSize & -(int)this->MinAlignment;
  do {
    if ((pFVar1 == (FProperty *)0x0) || (bVar3)) {
      return;
    }
    if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      bVar3 = false;
      if ((pFVar1->ElementSize * pFVar1->ArrayDim + pFVar1->Offset_Internal <= (int)uVar7) &&
         (0 < param_2)) {
        uVar5 = (ulonglong)(uint)param_2;
        pvVar6 = param_1;
        do {
          if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
            if ((pFVar1->ArrayDim < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((pvVar6 == (void *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (*pcVar2)(pFVar1,(longlong)pFVar1->Offset_Internal + (longlong)pvVar6);
          }
          pvVar6 = (void *)((longlong)pvVar6 + (longlong)(int)uVar7);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      bVar3 = true;
    }
    pFVar1 = pFVar1->DestructorLinkNext;
  } while( true );
}

// FindPropertyGuidFromName @ 141f7cca0

FGuid * __thiscall
UStruct::FindPropertyGuidFromName(UStruct *this,FGuid *__return_storage_ptr__,FName param_1)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindPropertyNameFromGuid @ 141f7ccc0

FName __thiscall UStruct::FindPropertyNameFromGuid(UStruct *this,FGuid *param_1)

{
  param_1->A = 0;
  param_1->B = 0;
  return (FName)param_1;
}

// FinishDestroy @ 141f7dfe0

void __thiscall UStruct::FinishDestroy(UStruct *this)

{
  int *piVar1;
  
  if (this->UnversionedGameSchema != (atomic<FUnversionedStructSchema_const_*>)0x0) {
    FMemory::Free((void *)this->UnversionedGameSchema);
  }
  LOCK();
  this->UnversionedGameSchema = (atomic<FUnversionedStructSchema_const_*>)0x0;
  UNLOCK();
  piVar1 = &(this->Script).ArrayMax;
  (this->Script).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Script).AllocatorInstance,0,piVar1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetAuthoredNameForField @ 141f80c00

FString * __thiscall
UStruct::GetAuthoredNameForField(UStruct *this,FString *__return_storage_ptr__,FField *param_1)

{
  bool bVar1;
  
  if (param_1 == (FField *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  bVar1 = IsThisNotNull(param_1,"FField::GetName");
  if (bVar1) {
    ::FName::ToString(&param_1->NamePrivate,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// GetAuthoredNameForField @ 141f80c80

FString * __thiscall
UStruct::GetAuthoredNameForField(UStruct *this,FString *__return_storage_ptr__,UField *param_1)

{
  FName local_res18 [2];
  
  if (param_1 != (UField *)0x0) {
    local_res18[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res18,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInheritanceSuper @ 141f81f70

UStruct * __thiscall UStruct::GetInheritanceSuper(UStruct *this)

{
  return (this->SuperStruct).field0_0x0.DebugPtr;
}

// GetPrefixCPP @ 141f83bd0

wchar_t * __thiscall UStruct::GetPrefixCPP(UStruct *this)

{
  return L"F";
}

// GetPreloadDependencies @ 141f848c0

void __thiscall
UStruct::GetPreloadDependencies
          (UStruct *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UStruct>_u_0 *pTVar1;
  TObjectPtr<UField>_u_0 TVar2;
  TObjectPtr<UField>_u_0 *pTVar3;
  FField *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TObjectPtr<UStruct>_u_0 local_18;
  TObjectPtr<UField>_u_0 local_10;
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  local_18 = (this->SuperStruct).field0_0x0;
  pTVar1 = (TObjectPtr<UStruct>_u_0 *)(param_1->AllocatorInstance).Data;
  if (((pTVar1 <= &local_18) && (&local_18 < pTVar1 + param_1->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar7 + 1;
  *(TObjectPtr<UStruct>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18;
  TVar2 = (TObjectPtr<UField>_u_0)(this->Children).field0_0x0.DebugPtr;
  do {
    if (TVar2.DebugPtr == (UField *)0x0) {
      for (pFVar4 = this->ChildProperties; pFVar4 != (FField *)0x0; pFVar4 = pFVar4->Next) {
        (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,param_1);
      }
      return;
    }
    pUVar8 = UFunction::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      pTVar3 = (TObjectPtr<UField>_u_0 *)(param_1->AllocatorInstance).Data;
      local_10 = TVar2;
      if ((pTVar3 <= &local_10) &&
         ((&local_10 < pTVar3 + param_1->ArrayMax &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      ((TObjectPtr<UField>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8))->
      DebugPtr = (UField *)local_10;
    }
    TVar2 = (TObjectPtr<UField>_u_0)((TVar2.DebugPtr)->Next).field0_0x0.DebugPtr;
  } while( true );
}

// GetPrivateStaticClass @ 141f851e0

UClass * __cdecl UStruct::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UStruct.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Struct",&Z_Registration_Info_UClass_UStruct.InnerSingleton,
               StaticRegisterNativesUStruct,0xb0,8,CLASS_Intrinsic,CASTCLASS_UStruct,L"Engine",
               InternalConstructor<UStruct>,InternalVTableHelperCtorCaller<UStruct>,local_res10,
               UField::StaticClass,UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UStruct.InnerSingleton;
}

// GetStructPathName @ 141f875b0

FTopLevelAssetPath * __thiscall
UStruct::GetStructPathName(UStruct *this,FTopLevelAssetPath *__return_storage_ptr__)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FTopLevelAssetPath *pFVar6;
  FString local_18;
  
  pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  if ((UPackage *)this->_padding_ != pUVar5) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter() == GetPackage()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0xaaf,
                       L"Only top level objects are supported by FTopLevelAssetPath. This object is a subobject: \"%s\""
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTopLevelAssetPath *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar1 = (FName)this->_padding_;
  FVar2 = *(FName *)(this->_padding_ + 0x18);
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,FVar2,FVar1);
  return __return_storage_ptr__;
}

// GetSuperStruct @ 141f87720

UStruct * __thiscall UStruct::GetSuperStruct(UStruct *this)

{
  return (this->SuperStruct).field0_0x0.DebugPtr;
}

// HasAllStructStateFlags @ 141f8b490

bool __thiscall UStruct::HasAllStructStateFlags(UStruct *this,EStructStateFlags param_1)

{
  return ((ushort)this->StructStateFlags & param_1) == param_1;
}

// InitializeStruct @ 141f8e570

void __thiscall UStruct::InitializeStruct(UStruct *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  void *pvVar8;
  
  if ((param_1 == (void *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x4a5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = this->PropertiesSize + -1 + (int)this->MinAlignment & -(int)this->MinAlignment;
  memset(param_1,0,(longlong)(int)uVar6);
  pFVar3 = this->PropertyLink;
  do {
    if (pFVar3 == (FProperty *)0x0) {
      return;
    }
    if ((int)uVar6 < pFVar3->ArrayDim * pFVar3->ElementSize + pFVar3->Offset_Internal) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2910729057672887122>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x4ae,"Property->IsInContainer(Stride)");
      if (!bVar5) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = (ulonglong)(uint)param_2;
    pvVar8 = param_1;
    if (0 < param_2) {
      do {
        if (((uint)(int)pFVar3->PropertyFlags >> 9 & 1) == 0) {
          pcVar4 = *(code **)(pFVar3->_padding_ + 0x150);
          if ((pFVar3->ArrayDim < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pvVar8 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*pcVar4)(pFVar3,(longlong)pFVar3->Offset_Internal + (longlong)pvVar8);
        }
        else {
          iVar1 = pFVar3->ArrayDim;
          iVar2 = pFVar3->ElementSize;
          if ((iVar1 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pvVar8 == (void *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          memset((void *)((longlong)pFVar3->Offset_Internal + (longlong)pvVar8),0,
                 (longlong)iVar2 * (longlong)iVar1);
        }
        uVar7 = uVar7 - 1;
        pvVar8 = (void *)((longlong)pvVar8 + (longlong)(int)uVar6);
      } while (uVar7 != 0);
    }
    pFVar3 = pFVar3->PropertyLinkNext;
  } while( true );
}

// InstanceSubobjectTemplates @ 141f8fc40

void __thiscall
UStruct::InstanceSubobjectTemplates
          (UStruct *this,TNotNull<void_*> param_1,void *param_2,UStruct *param_3,
          TNotNull<UObject_*> param_4,FObjectInstancingGraph *param_5)

{
  char cVar1;
  FProperty *pFVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  
  pFVar2 = this->RefLink;
  cVar1 = *(char *)(*(longlong *)&(param_4.Val)->field_0x10 + 0x128);
  do {
    if (pFVar2 == (FProperty *)0x0) {
      return;
    }
    if (((cVar1 == '\0') &&
        ((pFVar2->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
         CPF_None)) && ((pFVar2->PropertyFlags & CPF_AllowSelfReference) == CPF_None)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((param_5 != (FObjectInstancingGraph *)0x0) &&
       (uVar7 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
                -0x7a143595, uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb,
       *(int *)&(param_5->SubobjectInstantiationExclusionList).Elements.field_0x8 !=
       *(int *)&(param_5->SubobjectInstantiationExclusionList).Elements.field_0x34)) {
      FVar3 = (param_5->SubobjectInstantiationExclusionList).Hash.SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&(param_5->SubobjectInstantiationExclusionList).Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      iVar8 = *(int *)((longlong)FVar9 +
                      (ulonglong)
                      ((param_5->SubobjectInstantiationExclusionList).HashSize - 1U &
                      (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar8 != -1) {
        lVar10 = *(longlong *)&(param_5->SubobjectInstantiationExclusionList).Elements;
        do {
          if (*(FProperty **)(lVar10 + (longlong)iVar8 * 0x10) == pFVar2) {
            bVar5 = true;
            goto LAB_141f8fd57;
          }
          iVar8 = *(int *)(lVar10 + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    bVar5 = false;
LAB_141f8fd57:
    if ((bVar6) && (!bVar5)) {
      pcVar4 = *(code **)(pFVar2->_padding_ + 0x160);
      if (param_2 == (void *)0x0) {
LAB_141f8fdda:
        lVar10 = 0;
      }
      else {
        if (param_3 == (UStruct *)0x0) {
          iVar8 = 0x7fffffff;
        }
        else {
          iVar8 = param_3->PropertiesSize;
        }
        if (iVar8 < pFVar2->ArrayDim * pFVar2->ElementSize + pFVar2->Offset_Internal)
        goto LAB_141f8fdda;
        if ((pFVar2->ArrayDim < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = (longlong)pFVar2->Offset_Internal + (longlong)param_2;
      }
      if ((pFVar2->ArrayDim < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_1.Val == (void *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(pFVar2,(longlong)pFVar2->Offset_Internal + (longlong)param_1.Val,lVar10,param_4.Val,
                param_5);
    }
    pFVar2 = pFVar2->NextRef;
  } while( true );
}

// IsStructTrashed @ 141f90870

bool __thiscall UStruct::IsStructTrashed(UStruct *this)

{
  return false;
}

// Link @ 141f90de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStruct::Link(UStruct *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  EObjectFlags EVar3;
  FField *pFVar4;
  FField *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  FProperty *pFVar9;
  FProperty *this_00;
  FName FVar10;
  FProperty **ppFVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  FNameEntryId FVar17;
  int iVar18;
  UClass *pUVar19;
  ICppStructOps *pIVar21;
  UPackage *pUVar22;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FString *pFVar23;
  short sVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  wchar_t *pwVar27;
  FProperty **ppFVar28;
  FProperty **ppFVar29;
  longlong lVar30;
  wchar_t *pwVar31;
  FProperty **ppFVar32;
  UStruct *pUVar33;
  FProperty *pFVar34;
  FProperty **ppFVar35;
  longlong lVar36;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  int local_138;
  FProperty *local_130;
  longlong local_128;
  FName local_120;
  FName local_118;
  TFieldIterator<FProperty> local_110;
  uint local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  void *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [16];
  FScriptContainerElement *local_90;
  UStruct *local_88;
  FProperty **local_80;
  FReferenceCollector local_78;
  UStruct *local_68;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *local_60;
  FString local_58;
  FString local_48;
  UStruct *pUVar20;
  
  pUVar33 = (UStruct *)0x0;
  pwVar31 = L"";
  if (param_2) {
    local_128 = (**(code **)(this->_padding_ + 0x2c0))();
    if ((param_1->field_0x28 & 1) != 0) {
      if (local_128 != 0) {
        (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
      }
      (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
    }
    local_138 = 1;
    local_res20 = (FProperty **)((ulonglong)local_res20._4_4_ << 0x20);
    pUVar20 = pUVar33;
    lVar30 = local_128;
    do {
      this->PropertiesSize = 0;
      this->MinAlignment = 1;
      iVar15 = (int)pUVar20;
      if (lVar30 != 0) {
        this->PropertiesSize = *(int *)(lVar30 + 0x58);
        this->MinAlignment = *(short *)(lVar30 + 0x5c);
        iVar15 = (int)local_res20;
      }
      pFVar34 = (FProperty *)this->ChildProperties;
      if (pFVar34 != (FProperty *)0x0) {
        do {
          pUVar19 = Z_Construct_UClass_UObject_NoRegister();
          bVar12 = FFieldVariant::IsA((FFieldVariant *)&pFVar34->_padding_,pUVar19);
          pUVar20 = pUVar33;
          if (bVar12) {
            pUVar20 = (UStruct *)
                      ((((FFieldVariant *)&pFVar34->_padding_)->Container).Unknown &
                      0xfffffffffffffffe);
          }
          if (pUVar20 != this) break;
          if (((uint)(int)((FFieldClass *)pFVar34->_padding_)->CastFlags >> 0xf & 1) == 0) {
            local_130 = (FProperty *)0x0;
          }
          else {
            local_130 = pFVar34;
            if (pFVar34 != (FProperty *)0x0) {
              if (((pFVar34->PropertyFlags >> 0x23 & 1) != 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!Property->IsEditorOnlyProperty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                      ,0x3a3,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar9 = local_130;
              pUVar19 = Z_Construct_UClass_UObject_NoRegister();
              bVar12 = FFieldVariant::IsA((FFieldVariant *)&pFVar9->_padding_,pUVar19);
              pUVar20 = pUVar33;
              if (bVar12) {
                pUVar20 = (UStruct *)
                          ((((FFieldVariant *)&pFVar9->_padding_)->Container).Unknown &
                          0xfffffffffffffffe);
              }
              if (pUVar20 != this) {
                local_80 = &local_130;
                local_88 = this;
                `UStruct::Link'::__l24::<lambda_1>::operator()(&local_88);
              }
              pFVar9 = local_130;
              EVar3 = *(EObjectFlags *)&local_130->_padding_;
              bVar12 = IsThisNotNull(local_130,"FField::GetFName");
              this_00 = local_130;
              if (bVar12) {
                local_120 = *(FName *)&pFVar9->_padding_;
              }
              else {
                local_120.ComparisonIndex.Value = 0;
                local_120.Number = 0;
              }
              FVar10 = local_120;
              (**(code **)(local_130->_padding_ + 0xa8))(local_130);
              iVar15 = FProperty::SetupOffset(this_00);
              pFVar9 = local_130;
              this->PropertiesSize = iVar15;
              if (((byte)(EVar3 >> 6) & 1) ==
                  ((byte)(*(EObjectFlags *)&local_130->_padding_ >> 6) & 1)) {
                bVar12 = IsThisNotNull(local_130,"FField::GetFName");
                if (bVar12) {
                  local_118 = *(FName *)&pFVar9->_padding_;
                }
                else {
                  local_118.ComparisonIndex.Value = 0;
                  local_118.Number = 0;
                }
                if (FVar10 == local_118) {
                  iVar15 = (**(code **)(local_130->_padding_ + 0x168))();
                  if (iVar15 < this->MinAlignment) {
                    iVar15 = (int)this->MinAlignment;
                  }
                  if ((iVar15 != (short)iVar15) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IntFitsIn<OutType>(In)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                          ,0xaa,
                                          L"Loss of data caused by narrowing conversion, In = %lld")
                     , bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  this->MinAlignment = (short)iVar15;
                  goto LAB_141f91052;
                }
              }
              local_138 = local_138 + 1;
              if ((0x3f < local_138) &&
                 (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_2910729057672887368>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                      ,0x3b8,"LoopNum < MaxLoopLimit"), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              break;
            }
          }
LAB_141f91052:
          pFVar34 = (FProperty *)pFVar34->_padding_;
        } while (pFVar34 != (FProperty *)0x0);
        lVar30 = local_128;
        iVar15 = (int)local_res20;
      }
      uVar16 = iVar15 + 1;
      pUVar20 = (UStruct *)(ulonglong)uVar16;
      local_res20 = (FProperty **)CONCAT44(local_res20._4_4_,uVar16);
    } while ((int)uVar16 < local_138);
    lVar30 = this->_padding_;
    pUVar19 = UScriptStruct::StaticClass();
    if (pUVar19 != (UClass *)0x0) {
      iVar15 = (int)pUVar19->_padding_;
      if ((*(int *)(lVar30 + 0x38) < iVar15) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar19->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        for (pFVar4 = this->ChildProperties; pFVar4 != (FField *)0x0; pFVar4 = pFVar4->Next) {
          if (((((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0x15 & 1) != 0) &&
              (pFVar5 = pFVar4[2].Next, pFVar5 != (FField *)0x0)) &&
             (((uint)(int)pFVar5->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) {
            pUVar33 = (UStruct *)pFVar5[2].Owner.Container.Field;
            if (pUVar33 == (UStruct *)0x0) {
              bVar12 = this == (UStruct *)0x0;
            }
            else {
              bVar12 = pUVar33 == this;
            }
            if (bVar12) {
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
            }
          }
        }
        pUVar19 = UScriptStruct::StaticClass();
        iVar15 = (int)pUVar19->_padding_;
        if (((*(int *)(this->_padding_ + 0x38) < iVar15) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
             &pUVar19->_padding_)) || (this == (UStruct *)0x0)) {
          pFVar23 = GetTypeName<UScriptStruct>(&local_58);
          if ((pFVar23->Data).ArrayNum == 0) {
            pwVar27 = L"";
          }
          else {
            pwVar27 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
          pFVar23 = GetFullNameForCastLogError<UStruct>(&local_48,this);
          if ((pFVar23->Data).ArrayNum != 0) {
            pwVar31 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar31,pwVar27);
        }
        (**(code **)(this->_padding_ + 0x368))(this);
        pIVar21 = UScriptStruct::GetCppStructOps((UScriptStruct *)this);
        if (pIVar21 != (ICppStructOps *)0x0) {
          sVar24 = (short)pIVar21->Alignment;
          if ((pIVar21->Alignment != (int)sVar24) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this->MinAlignment = sVar24;
          this->PropertiesSize = pIVar21->Size;
        }
      }
    }
  }
  else {
    for (pFVar4 = this->ChildProperties; pFVar4 != (FField *)0x0; pFVar4 = pFVar4->Next) {
      pUVar19 = Z_Construct_UClass_UObject_NoRegister();
      bVar12 = FFieldVariant::IsA(&pFVar4->Owner,pUVar19);
      pUVar20 = pUVar33;
      if (bVar12) {
        pUVar20 = (UStruct *)((pFVar4->Owner).Container.Unknown & 0xfffffffffffffffe);
      }
      if (pUVar20 != this) break;
      if ((pFVar4 != (FField *)0x0) &&
         (((uint)(int)pFVar4->ClassPrivate->CastFlags >> 0xf & 1) != 0)) {
        (**(code **)(pFVar4->_padding_ + 0xa8))(pFVar4,param_1);
      }
    }
  }
  pUVar22 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  lVar30 = pUVar22->_padding_;
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  if (lVar30 == local_a0._4_8_) {
    uVar6 = this->_padding_;
    FVar17 = FNameEntryId::FromValidEName((EName)local_b8);
    uStack_f4 = 0;
    local_f8 = *(uint *)CONCAT44(extraout_var,FVar17.Value);
    if (uVar6 == local_f8) {
      if ((this->MinAlignment != 0x10) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("MinAlignment == alignof(FMatrix)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                              ,0x3fb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((this->PropertiesSize != 0x80) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PropertiesSize == sizeof(FMatrix)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                              ,0x3fc,L""), bVar12)) {
code_r0x000141f9156a:
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      FVar17 = FNameEntryId::FromValidEName((EName)local_b4);
      uStack_ec = 0;
      local_f0 = *(uint *)CONCAT44(extraout_var_00,FVar17.Value);
      if (uVar6 == local_f0) {
        if ((this->MinAlignment != 0x10) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("MinAlignment == alignof(FPlane)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                ,0x400,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this->PropertiesSize != 0x20) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("PropertiesSize == sizeof(FPlane)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                ,0x401,L""), bVar12)) goto code_r0x000141f9156a;
      }
      else {
        FVar17 = FNameEntryId::FromValidEName((EName)local_b0);
        uStack_e4 = 0;
        local_e8 = *(uint *)CONCAT44(extraout_var_01,FVar17.Value);
        if (uVar6 == local_e8) {
          if ((this->MinAlignment != 0x10) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MinAlignment == alignof(FVector4)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                  ,0x405,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((this->PropertiesSize != 0x20) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PropertiesSize == sizeof(FVector4)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                  ,0x406,L""), bVar12)) goto code_r0x000141f9156a;
        }
        else {
          FVar17 = FNameEntryId::FromValidEName((EName)local_ac);
          uStack_dc = 0;
          local_e0 = *(uint *)CONCAT44(extraout_var_02,FVar17.Value);
          if (uVar6 == local_e0) {
            if ((this->MinAlignment != 0x10) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MinAlignment == alignof(FQuat)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                    ,0x40a,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((this->PropertiesSize != 0x20) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PropertiesSize == sizeof(FQuat)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                    ,0x40b,L""), bVar12)) goto code_r0x000141f9156a;
          }
          else {
            FVar17 = FNameEntryId::FromValidEName((EName)local_a8);
            uStack_d4 = 0;
            local_d8 = *(uint *)CONCAT44(extraout_var_03,FVar17.Value);
            if (uVar6 == local_d8) {
              if ((this->MinAlignment != 8) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MinAlignment == alignof(double)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                      ,0x40f,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((this->PropertiesSize != 8) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PropertiesSize == sizeof(double)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                      ,0x410,L""), bVar12)) goto code_r0x000141f9156a;
            }
            else {
              FVar17 = FNameEntryId::FromValidEName((EName)local_a4);
              uStack_cc = 0;
              local_d0 = *(uint *)CONCAT44(extraout_var_04,FVar17.Value);
              if (uVar6 == local_d0) {
                if ((this->MinAlignment != 4) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("MinAlignment == alignof(FColor)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                        ,0x414,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if ((this->PropertiesSize != 4) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PropertiesSize == sizeof(FColor)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                        ,0x415,L""), bVar12)) goto code_r0x000141f9156a;
              }
            }
          }
        }
      }
    }
  }
  ppFVar28 = &this->PropertyLink;
  if ((ppFVar28 == (FProperty **)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListStartPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                          ,0x3d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ppFVar32 = &this->DestructorLink;
  if ((ppFVar32 == (FProperty **)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListStartPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                          ,0x3d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ppFVar29 = &this->RefLink;
  if ((ppFVar29 == (FProperty **)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListStartPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                          ,0x3d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ppFVar35 = &this->PostConstructLink;
  if ((ppFVar35 == (FProperty **)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListStartPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                          ,0x3d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_110.Field = this->ChildProperties;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_110.InterfaceIndex = -1;
  local_110.bIncludeSuper = true;
  local_110.bIncludeDeprecated = true;
  local_110.bIncludeInterface = false;
  local_110.Struct = this;
  TFieldIterator<FProperty>::IterateToNext(&local_110);
  ppFVar11 = local_res20;
  if ((FProperty *)local_110.Field != (FProperty *)0x0) {
    ppFVar28 = &this->PropertyLink;
    do {
      pFVar4 = local_110.Field;
      bVar13 = 2;
      pUVar19 = FField::GetOwnerClass(local_110.Field);
      if (pUVar19 != (UClass *)0x0) {
        bVar13 = (**(code **)(pUVar19->_padding_ + 0x370))(pUVar19,this,pFVar4);
      }
      if ((*(EPropertyFlags *)((longlong)pFVar4 + 0x38) & (CPF_NoDestructor|CPF_IsPlainOldData)) ==
          CPF_None) {
        cVar14 = (**(code **)(pFVar4->_padding_ + 0x140))(pFVar4,&local_c8);
        if (cVar14 == '\0') {
          if ((*(EPropertyFlags *)((longlong)pFVar4 + 0x38) & (CPF_NoDestructor|CPF_IsPlainOldData))
              != CPF_None) goto LAB_141f916d7;
        }
        else {
          bVar13 = bVar13 | 2;
        }
      }
      else {
LAB_141f916d7:
        bVar13 = bVar13 & 0xfd;
      }
      cVar14 = (**(code **)(pFVar4->_padding_ + 0x170))(pFVar4,&local_c8,0xf);
      if (cVar14 != '\0') {
        if (*ppFVar29 != (FProperty *)pFVar4) {
          *ppFVar29 = (FProperty *)pFVar4;
        }
        ppFVar29 = (FProperty **)((longlong)pFVar4 + 0x50);
      }
      if ((bVar13 & 2) != 0) {
        if (*ppFVar32 != (FProperty *)pFVar4) {
          *ppFVar32 = (FProperty *)pFVar4;
        }
        ppFVar32 = (FProperty **)((longlong)pFVar4 + 0x58);
      }
      if ((bVar13 & 1) != 0) {
        if (*ppFVar35 != (FProperty *)pFVar4) {
          *ppFVar35 = (FProperty *)pFVar4;
        }
        ppFVar35 = (FProperty **)((longlong)pFVar4 + 0x60);
      }
      if (*ppFVar28 != (FProperty *)pFVar4) {
        *ppFVar28 = (FProperty *)pFVar4;
      }
      local_110.Field = pFVar4->Next;
      ppFVar28 = (FProperty **)((longlong)pFVar4 + 0x48);
      TFieldIterator<FProperty>::IterateToNext(&local_110);
      ppFVar11 = ppFVar28;
    } while ((FProperty *)local_110.Field != (FProperty *)0x0);
  }
  local_res20 = ppFVar11;
  iVar15 = 0;
  if (*ppFVar28 != (FProperty *)0x0) {
    *ppFVar28 = (FProperty *)0x0;
  }
  if (*ppFVar32 != (FProperty *)0x0) {
    *ppFVar32 = (FProperty *)0x0;
  }
  if (*ppFVar29 != (FProperty *)0x0) {
    *ppFVar29 = (FProperty *)0x0;
  }
  if (*ppFVar35 != (FProperty *)0x0) {
    *ppFVar35 = (FProperty *)0x0;
  }
  pTVar2 = &this->ScriptAndPropertyObjectReferences;
  pFVar25 = (pTVar2->AllocatorInstance).Data;
  iVar18 = (this->ScriptAndPropertyObjectReferences).ArrayNum;
  pFVar26 = pFVar25 + (longlong)iVar18 * 8;
  while( true ) {
    if ((this->ScriptAndPropertyObjectReferences).ArrayNum != iVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar25 == pFVar26) break;
    pFVar25 = pFVar25 + 8;
  }
  pFVar4 = this->ChildProperties;
  local_78.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
  local_78._padding_ = (longlong)&___7FPropertyReferenceCollector__6B_;
  local_60 = pTVar2;
  local_68 = this;
  for (; pFVar4 != (FField *)0x0; pFVar4 = pFVar4->Next) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,&local_78);
  }
  FReferenceCollector::~FReferenceCollector(&local_78);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar26 = (pTVar2->AllocatorInstance).Data,
     0 < (this->ScriptAndPropertyObjectReferences).ArrayNum)) {
    do {
      if (*(UObject **)pFVar26 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar26);
      }
      iVar15 = iVar15 + 1;
      pFVar26 = pFVar26 + 8;
    } while (iVar15 < (this->ScriptAndPropertyObjectReferences).ArrayNum);
  }
  iVar15 = (this->ScriptAndPropertyObjectReferences).ArrayNum + -1;
  if (-1 < iVar15) {
    lVar36 = (longlong)iVar15;
    pTVar2 = &this->ScriptAndPropertyObjectReferences;
    lVar30 = lVar36 * 8;
    do {
      if (((this->ScriptAndPropertyObjectReferences).ArrayNum <= iVar15) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar18 = (this->ScriptAndPropertyObjectReferences).ArrayNum;
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar30) == 0) {
        if ((iVar18 <= iVar15) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = (pTVar2->AllocatorInstance).Data + lVar36 * 8;
        iVar18 = ((this->ScriptAndPropertyObjectReferences).ArrayNum - iVar15) + -1;
        if (iVar18 != 0) {
          memmove(pFVar26,pFVar26 + 8,(longlong)iVar18 << 3);
        }
        piVar1 = &(this->ScriptAndPropertyObjectReferences).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->ScriptAndPropertyObjectReferences).ArrayNum
                   ,&(this->ScriptAndPropertyObjectReferences).ArrayMax);
      }
      else {
        if ((iVar18 <= iVar15) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar26 = (pTVar2->AllocatorInstance).Data + lVar30;
        if (*(longlong *)pFVar26 != 0) {
          pUVar19 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
          bVar12 = FObjectPtr::IsA((FObjectPtr *)pFVar26,pUVar19);
          if ((bVar12) && (lVar7 = *(longlong *)pFVar26, lVar7 != 0)) {
            if (((this->ScriptAndPropertyObjectReferences).ArrayNum <= iVar15) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_90 = (pTVar2->AllocatorInstance).Data + lVar36 * 8;
            TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator>::
            Emplace<UClass_*_*_const_&>
                      ((TSet<UClass_*_*,DefaultKeyFuncs<UClass_*_*,0>,FDefaultSetAllocator> *)
                       (lVar7 + 0x328),(UClass ***)local_a0,(bool *)&local_90);
          }
        }
        if (((this->ScriptAndPropertyObjectReferences).ArrayNum <= iVar15) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar30);
        pUVar19 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
        lVar7 = *(longlong *)(lVar7 + 0x10);
        iVar18 = (int)pUVar19->_padding_;
        if (((iVar18 <= *(int *)(lVar7 + 0x38)) &&
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar18 * 8) ==
             &pUVar19->_padding_)) &&
           (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2910729057672887158>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                ,0x48a,
                                "!(ScriptAndPropertyObjectReferences[ReferenceIndex]->IsA<ULinkerPlaceholderFunction>())"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar36 = lVar36 + -1;
      lVar30 = lVar30 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  LOCK();
  this->StructStateFlags = (atomic<unsigned_short>)((ushort)this->StructStateFlags | 1);
  UNLOCK();
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// LoadTaggedPropertiesFromText @ 141f921f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStruct::LoadTaggedPropertiesFromText
          (UStruct *this,FStructuredArchiveSlot param_1,uchar *param_2,UStruct *param_3,
          uchar *param_4,UObject *param_5)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchive *pFVar7;
  uint *puVar8;
  UClass *pUVar9;
  FProperty *this_00;
  uint uVar10;
  ForAnyElementType FVar11;
  uchar *puVar12;
  FName FVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  uchar *puVar18;
  FSlotBase FVar19;
  FSlotBase local_res10 [3];
  undefined1 auStackY_368 [32];
  FArchiveFieldName local_326;
  uint local_324;
  uint local_320;
  undefined1 local_31c [4];
  int local_318;
  FName local_310;
  UStruct *local_308;
  uint local_300;
  int local_2fc;
  uchar *local_2f8;
  FGuid local_2f0;
  FPropertyTypeName local_2e0 [2];
  uchar *local_2d8;
  FArchive *local_2d0;
  FString local_2c8;
  undefined8 local_2b8;
  FName local_2b0;
  FStructuredArchiveSlot local_2a8;
  FName local_2a0;
  FName local_298;
  undefined1 local_290 [24];
  undefined1 *local_278;
  void *local_270 [3];
  undefined1 local_258 [12];
  FName local_24c;
  FName local_244 [5];
  int local_218;
  EPropertyTagSerializeType local_1e6;
  TStringBuilderBase<wchar_t> local_1d8;
  wchar_t local_1b8 [32];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [32];
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [32];
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [32];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_2d8 = param_4;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_308 = param_3;
  local_2f8 = param_2;
  local_2a0 = (FName)this;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  local_2d0 = pFVar7;
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_278 = local_31c;
  local_290._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)(local_290 + 0x10),puVar8);
  local_324 = 0;
  bVar16 = pFVar7->field_0x2b & 0x40;
  pFVar1 = (local_res10[0].StructuredArchive)->Formatter->Inner;
  puVar8 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar8 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,&local_324);
    }
  }
  else {
    local_324 = *puVar8;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res10[0].StructuredArchive;
  local_2fc = 0;
  if ((int)local_324 < 1) {
    return;
  }
LAB_141f92310:
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  ::operator<<((FVar4.StructuredArchive)->Formatter->Inner,&local_2c8);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_2c8.Data.ArrayNum != 0) {
    FVar11.Data = local_2c8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_310,(wchar_t *)FVar11.Data);
  bVar5 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((FVar4.StructuredArchive)->Formatter,local_326,false);
  if (bVar5) {
    local_2f0.A = 0;
    local_2f0.B = 0;
    local_2f0.C = 0;
    local_2f0.D = 0;
    ::operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,&local_2f0);
    if (((local_2f0.D != 0 || local_2f0.C != 0) || local_2f0.A != 0) || local_2f0.B != 0) {
      (**(code **)(this->_padding_ + 0x350))(this,&local_298,&local_2f0);
      local_2b8 = 0;
      if (local_298 != (FName)0x0) {
        local_310 = local_298;
      }
    }
  }
  if ((bVar16 != 0) && ((*(uint *)&pFVar7->field_0x34 & 0x401000) == 0)) {
    FVar13 = (FName)this;
    if ((FName)this == (FName)0x0) goto LAB_141f923e5;
    do {
      pUVar9 = StaticClass();
      iVar17 = (int)pUVar9->_padding_;
      if ((iVar17 <= *(int *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)FVar13 + 0x10) + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar9->_padding_)) goto LAB_141f923f0;
LAB_141f923e5:
      FVar13 = *(FName *)((longlong)FVar13 + 0x20);
    } while (FVar13 != (FName)0x0);
  }
  goto LAB_141f9241f;
  while (FVar13 = *(FName *)((longlong)FVar13 + 0x40), FVar13 != (FName)0x0) {
LAB_141f923f0:
    FProperty::FindRedirectedPropertyName((UStruct *)local_290,FVar13);
    if ((FName)local_290._0_8_ != (FName)0x0) {
      local_310.ComparisonIndex.Value = local_290._0_4_;
      local_310.Number = local_290._4_4_;
      break;
    }
  }
LAB_141f9241f:
  this_00 = FindPropertyByName(this,local_310);
  if (((this_00 != (FProperty *)0x0) ||
      (this_00 = (FProperty *)(**(code **)(this->_padding_ + 0x308))(this,local_310),
      this_00 != (FProperty *)0x0)) &&
     (bVar5 = FProperty::ShouldSerializeValue(this_00,pFVar7), bVar5)) {
    uVar10 = this_00->ArrayDim;
    bVar5 = false;
    bVar3 = false;
    if (1 < (int)uVar10) {
      local_320 = 0;
      pFVar1 = (FVar4.StructuredArchive)->Formatter->Inner;
      puVar8 = (uint *)**(undefined8 **)&pFVar1->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar1->field_0x8)[1] < puVar8 + 1) {
        local_300 = uVar10;
        if ((pFVar1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_320,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar1,&local_320);
        }
      }
      else {
        local_320 = *puVar8;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
      }
      bVar5 = true;
      local_2a8 = (FStructuredArchiveSlot)FVar4.StructuredArchive;
      uVar10 = local_320;
      if (this_00->ArrayDim < (int)local_320) {
        uVar10 = this_00->ArrayDim;
      }
      bVar3 = true;
    }
    local_318 = 0;
    pFVar7 = local_2d0;
    local_300 = uVar10;
    if (0 < (int)uVar10) {
      do {
        iVar17 = local_318;
        FVar19.StructuredArchive = FVar4.StructuredArchive;
        if (bVar5) {
          FVar19.StructuredArchive = (FStructuredArchive *)local_2a8;
        }
        FPropertyTag::FPropertyTag((FPropertyTag *)local_258);
        ::operator<<((FStructuredArchiveSlot)FVar19.StructuredArchive,(FPropertyTag *)local_258);
        FPropertyTag::SetProperty((FPropertyTag *)local_258,this_00);
        local_244[0] = local_310;
        local_218 = iVar17;
        if (local_1e6 != Skipped) {
          if ((bVar16 != 0) &&
             (UE::ApplyRedirectsToPropertyType
                        ((FPropertyTypeName)(int)local_2e0,
                         (FProperty *)(ulonglong)(uint)local_258._8_4_), local_2e0[0].Index != 0)) {
            FPropertyTag::SetType((FPropertyTag *)local_258,local_2e0[0]);
          }
          if ((param_5 == (UObject *)0x0) || ((*(uint *)&param_5->field_0x8 >> 0x15 & 1) == 0)) {
            iVar6 = (**(code **)(this_00->_padding_ + 0xb0))
                              (this_00,local_258,FVar19.StructuredArchive,param_2);
            if (iVar6 == 0) {
              (**(code **)(this_00->_padding_ + 0x158))(this_00,&local_2b0);
              if (local_24c == local_2b0) {
                lVar14 = (longlong)local_218;
                if (((local_218 < 0) || (this_00->ArrayDim <= local_218)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((param_2 == (uchar *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar15 = (longlong)local_218;
                puVar18 = local_2f8 +
                          (longlong)this_00->Offset_Internal + this_00->ElementSize * lVar14;
                if (local_2d8 == (uchar *)0x0) {
LAB_141f92a43:
                  puVar12 = (uchar *)0x0;
                }
                else {
                  if (local_308 == (UStruct *)0x0) {
                    iVar6 = 0x7fffffff;
                  }
                  else {
                    iVar6 = local_308->PropertiesSize;
                  }
                  if (iVar6 < this_00->ArrayDim * this_00->ElementSize + this_00->Offset_Internal)
                  goto LAB_141f92a43;
                  if (((local_218 < 0) || (this_00->ArrayDim <= local_218)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  puVar12 = local_2d8 +
                            (longlong)this_00->Offset_Internal + this_00->ElementSize * lVar15;
                }
                FPropertyTag::SerializeTaggedProperty
                          ((FPropertyTag *)local_258,
                           (FStructuredArchiveSlot)FVar19.StructuredArchive,this_00,puVar18,puVar12)
                ;
                param_2 = local_2f8;
              }
              else if (2 < (byte)LogClass._0_1_) {
                (**(code **)(*(longlong *)local_2d0 + 0x18))(local_2d0,local_270);
                local_b8.Base = local_98;
                local_b8.bIsDynamic = false;
                local_b8.bIsExternal = false;
                local_b8.CurPos = local_98;
                local_b8.End = (wchar_t *)local_58;
                ::FName::AppendString(&local_2b0,&local_b8);
                if (local_b8.End < local_b8.CurPos + 1) {
                  TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
                }
                local_118.Base = local_f8;
                *local_b8.CurPos = L'\0';
                local_118.CurPos = local_f8;
                local_118.End = (wchar_t *)&local_b8;
                local_118.bIsDynamic = false;
                local_118.bIsExternal = false;
                ::FName::AppendString(&local_24c,&local_118);
                if (local_118.End < (TStringBuilderBase<wchar_t> *)(local_118.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_118,1);
                }
                *local_118.CurPos = L'\0';
                local_178.bIsDynamic = false;
                local_178.bIsExternal = false;
                local_290._8_8_ = *(longlong *)((longlong)local_2a0 + 0x18);
                local_178.Base = local_158;
                local_178.CurPos = local_158;
                local_178.End = (wchar_t *)&local_118;
                ::FName::AppendString((FName *)(local_290 + 8),&local_178);
                if (local_178.End < (TStringBuilderBase<wchar_t> *)(local_178.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_178,1);
                }
                *local_178.CurPos = L'\0';
                local_1d8.Base = local_1b8;
                local_1d8.CurPos = local_1b8;
                local_1d8.bIsDynamic = false;
                local_1d8.bIsExternal = false;
                local_1d8.End = (wchar_t *)&local_178;
                ::FName::AppendString(local_244,&local_1d8);
                if (local_1d8.End < (TStringBuilderBase<wchar_t> *)(local_1d8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1d8,1);
                }
                *local_1d8.CurPos = L'\0';
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1d8);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_118);
                TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
                param_2 = local_2f8;
                iVar17 = local_318;
                if (local_270[0] != (void *)0x0) {
                  FMemory::Free(local_270[0]);
                  param_2 = local_2f8;
                  iVar17 = local_318;
                }
              }
            }
            else if ((((iVar6 != 1) && (iVar6 != 2)) && (iVar6 != 3)) &&
                    (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("false",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                        ,0x5d2,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        local_318 = iVar17 + 1;
        pFVar7 = local_2d0;
        this = (UStruct *)local_2a0;
        bVar5 = bVar3;
      } while (local_318 < (int)uVar10);
    }
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  local_2fc = local_2fc + 1;
  if ((int)local_324 <= local_2fc) {
    return;
  }
  goto LAB_141f92310;
}

// PostLoad @ 141f946a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStruct::PostLoad(UStruct *this)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  ulonglong uVar7;
  FFieldPath *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FFieldPath *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FFieldPath *local_res20;
  FString local_88;
  FString local_78;
  FReferenceCollector local_68;
  UStruct *local_58;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *local_50;
  
  UObject::PostLoad((UObject *)this);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  pTVar2 = this->UnresolvedScriptProperties;
  if (pTVar2 == (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0) {
    return;
  }
  local_res18 = pTVar2->ArrayNum;
  uVar7 = (ulonglong)(int)local_res18;
  this_00 = (FFieldPath *)(pTVar2->AllocatorInstance).Data;
  local_res20 = (FFieldPath *)((longlong)this_00 + uVar7 * 0x28);
  pFVar8 = local_res20;
  do {
    while( true ) {
      if (pTVar2->ArrayNum != (int)uVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<TFieldPath<FField>,int>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_00 == pFVar8) {
        pTVar2 = this->UnresolvedScriptProperties;
        if (pTVar2 == (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0) {
          return;
        }
        DestructItems<TTuple<TFieldPath<FField>,int>,int>
                  ((TTuple<TFieldPath<FField>,int> *)(pTVar2->AllocatorInstance).Data,
                   pTVar2->ArrayNum);
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        ::operator_delete(pTVar2,0x10);
        this->UnresolvedScriptProperties =
             (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0;
        return;
      }
      pFVar5 = FField::StaticClass();
      pFVar6 = FFieldPath::GetTyped(this_00,pFVar5,this);
      if (pFVar6 == (FField *)0x0) break;
      if (((this->Script).ArrayNum < *(int *)&this_00[1].ResolvedField + 8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(int32)Script.Num() >= (int32)(MissingProperty.Value + sizeof(FField*))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0x9e7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar1 = &this->ScriptAndPropertyObjectReferences;
      *(FField **)((this->Script).AllocatorInstance.Data + *(int *)&this_00[1].ResolvedField) =
           pFVar6;
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      iVar11 = (this->ScriptAndPropertyObjectReferences).ArrayNum;
      pFVar10 = pFVar9 + (longlong)iVar11 * 8;
      while( true ) {
        if ((this->ScriptAndPropertyObjectReferences).ArrayNum != iVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar9 == pFVar10) break;
        pFVar9 = pFVar9 + 8;
      }
      local_68.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
      local_68._padding_ = (longlong)&___7FPropertyReferenceCollector__6B_;
      local_58 = this;
      local_50 = pTVar1;
      (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,&local_68);
      FReferenceCollector::~FReferenceCollector(&local_68);
      pFVar8 = local_res20;
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_141f948ef;
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      iVar11 = 0;
      if ((this->ScriptAndPropertyObjectReferences).ArrayNum < 1) goto LAB_141f948ef;
      do {
        if (*(UObject **)pFVar10 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar10);
        }
        iVar11 = iVar11 + 1;
        pFVar10 = pFVar10 + 8;
      } while (iVar11 < (this->ScriptAndPropertyObjectReferences).ArrayNum);
      this_00 = (FFieldPath *)&this_00[1].ResolvedOwner;
      uVar7 = (ulonglong)local_res18;
      pFVar8 = local_res20;
    }
    if (((this_00->Path).ArrayNum != 0) && (2 < (byte)LogClass._0_1_)) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0,None);
      FFieldPath::ToString(this_00,&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar8 = local_res20;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
        pFVar8 = local_res20;
      }
    }
LAB_141f948ef:
    uVar7 = (ulonglong)local_res18;
    this_00 = (FFieldPath *)&this_00[1].ResolvedOwner;
  } while( true );
}

// PreloadChildren @ 141f949b0

void __thiscall UStruct::PreloadChildren(UStruct *this,FArchive *param_1)

{
  int iVar1;
  UField *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (this->Children).field0_0x0.DebugPtr;
  do {
    if (pUVar2 == (UField *)0x0) {
      return;
    }
    if ((GEventDrivenLoaderEnabled == false) || (pUVar2 == (UField *)0x0)) {
LAB_141f949f7:
      (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,pUVar2);
    }
    else {
      pUVar3 = UFunction::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_141f949f7;
    }
    pUVar2 = (pUVar2->Next).field0_0x0.DebugPtr;
  } while( true );
}

// RegisterDependencies @ 141f95a80

void __thiscall UStruct::RegisterDependencies(UStruct *this)

{
  UStruct *pUVar1;
  
  pUVar1 = (this->SuperStruct).field0_0x0.DebugPtr;
  if (pUVar1 != (UStruct *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141f95a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 8))();
    return;
  }
  return;
}

// ResolveVisitedPathInfo @ 141f9a600

void * __thiscall
UStruct::ResolveVisitedPathInfo(UStruct *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UStruct *pUVar4;
  void *pvVar5;
  int iVar6;
  
  if ((param_2->ParentStructType == (UStruct *)0x0) ||
     (pUVar4 = FField::GetOwnerStruct((FField *)param_2->Property), pUVar4 == (UStruct *)0x0)) {
    return (void *)0x0;
  }
  iVar6 = (int)pUVar4->_padding_;
  if ((int)this->_padding_ < iVar6) {
    return (void *)0x0;
  }
  if ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar6 * 8) != &pUVar4->_padding_) {
    return (void *)0x0;
  }
  pFVar1 = param_2->Property;
  if (param_2->PropertyInfo == StaticArrayIndex) {
    iVar6 = param_2->Index;
    if (-1 < iVar6) goto LAB_141f9a66a;
  }
  else {
    iVar6 = 0;
LAB_141f9a66a:
    if (iVar6 < pFVar1->ArrayDim) goto LAB_141f9a6a0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar2)();
    return pvVar5;
  }
LAB_141f9a6a0:
  if ((param_1 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar2)();
    return pvVar5;
  }
  return (void *)((longlong)param_1 +
                 (longlong)pFVar1->Offset_Internal + (longlong)pFVar1->ElementSize * (longlong)iVar6
                 );
}

// Serialize @ 141f9de50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStruct::Serialize(UStruct *this,FArchive *param_1)

{
  byte bVar1;
  UStruct *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UField *pUVar9;
  longlong lVar10;
  FLinker *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  FLinker *pFVar14;
  FLinker *pFVar15;
  undefined8 uVar16;
  uint uVar17;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  TArray<UField_*,TSizedDefaultAllocator<32>_> local_2c8;
  TObjectPtr<UField>_u_0 local_2b8;
  UField *local_2b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2a8;
  undefined8 local_298;
  FStructScriptLoader local_290;
  FArchiveState local_278;
  undefined8 local_1e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_1e0;
  undefined8 local_1d8;
  FArchiveProxy local_1c8;
  TTuple<TFieldPath<FField>,int> *local_130;
  int local_128;
  undefined4 local_124;
  uint *local_120;
  UStruct *local_118;
  FArchiveProxy local_108;
  TTuple<TFieldPath<FField>,int> *local_70;
  int local_68;
  undefined4 local_64;
  uint *local_60;
  UStruct *local_58;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar6 < 0x1d) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->_padding_);
  }
  pUVar2 = (this->SuperStruct).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SuperStruct);
  if (((param_1->field_0x28 & 1) != 0) ||
     ((pUVar2 != (UStruct *)0x0 && (pUVar2 != (this->SuperStruct).field0_0x0.DebugPtr)))) {
    FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  pFVar14 = (FLinker *)0x0;
  if (iVar6 < 0x1d) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Children);
  }
  else {
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ArrayNum = 0;
    local_2c8.ArrayMax = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_2b8 = (TObjectPtr<UField>_u_0)(this->Children).field0_0x0.DebugPtr;
      pFVar11 = pFVar14;
      if (local_2b8.DebugPtr != (UField *)0x0) {
        while( true ) {
          iVar6 = (int)pFVar11;
          if ((local_2c8.AllocatorInstance.Data <= &local_2b8) &&
             (&local_2b8 <
              (TObjectPtr<UField>_u_0 *)
              (local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 8))) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = local_2c8.ArrayNum;
          }
          if (iVar6 == local_2c8.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
          }
          local_2c8.ArrayNum = iVar6 + 1U;
          ((TObjectPtr<UField>_u_0 *)(local_2c8.AllocatorInstance.Data + (longlong)iVar6 * 8))->
          DebugPtr = (UField *)local_2b8;
          local_2b8 = (TObjectPtr<UField>_u_0)((local_2b8.DebugPtr)->Next).field0_0x0.DebugPtr;
          if (local_2b8.DebugPtr == (UField *)0x0) break;
          pFVar11 = (FLinker *)(ulonglong)(iVar6 + 1U);
        }
      }
      TArrayPrivateFriend::Serialize<UField_*,TSizedDefaultAllocator<32>_>(param_1,&local_2c8);
    }
    else {
      TArrayPrivateFriend::Serialize<UField_*,TSizedDefaultAllocator<32>_>(param_1,&local_2c8);
      uVar12 = local_2c8._8_8_ & 0xffffffff;
      (this->Children).field0_0x0.DebugPtr = (UField *)0x0;
      pFVar11 = pFVar14;
      pFVar15 = pFVar14;
      if (0 < local_2c8.ArrayNum) {
LAB_141f9df82:
        uVar13 = (uint)pFVar11;
        uVar7 = 0;
        if ((int)uVar13 < (int)uVar12) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar12 = local_2c8._8_8_ & 0xffffffff;
        }
        if (*(longlong *)(local_2c8.AllocatorInstance.Data + (longlong)&pFVar15->_padding_) == 0)
        goto code_r0x000141f9dfdd;
        uVar7 = 0;
        if ((int)uVar13 < (int)uVar12) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar12 = local_2c8._8_8_ & 0xffffffff;
        }
        pUVar9 = *(UField **)(local_2c8.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        local_2b0 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UField *)0x0)) {
          (this->Children).field0_0x0.DebugPtr = pUVar9;
          if (pUVar9 == (UField *)0x0) goto LAB_141f9e2b8;
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
          uVar12 = local_2c8._8_8_ & 0xffffffff;
          (this->Children).field0_0x0.DebugPtr = pUVar9;
        }
        uVar13 = uVar13 + 1;
        local_2b0 = pUVar9;
        if ((int)uVar13 < (int)uVar12) {
          lVar10 = (longlong)(int)uVar13 * 8;
          do {
            uVar17 = ~uVar13 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar13 < (int)uVar12) {
              uVar7 = uVar17;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = local_2c8._8_8_ & 0xffffffff;
            }
            if (*(longlong *)(local_2c8.AllocatorInstance.Data + lVar10) != 0) {
              uVar7 = 0;
              if ((int)uVar13 < (int)uVar12) {
                uVar7 = uVar17;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pUVar9 = *(UField **)(local_2c8.AllocatorInstance.Data + lVar10);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UField *)0x0))
              {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
              (local_2b0->Next).field0_0x0.DebugPtr = pUVar9;
              uVar12 = (ulonglong)local_2c8.ArrayNum;
              uVar7 = 0;
              if ((int)uVar13 < local_2c8.ArrayNum) {
                uVar7 = uVar17;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar12 = local_2c8._8_8_ & 0xffffffff;
              }
              pUVar9 = *(UField **)(local_2c8.AllocatorInstance.Data + lVar10);
              local_2b0 = pUVar9;
            }
            uVar13 = uVar13 + 1;
            lVar10 = lVar10 + 8;
          } while ((int)uVar13 < (int)uVar12);
        }
        (pUVar9->Next).field0_0x0.DebugPtr = (UField *)0x0;
      }
    }
LAB_141f9e2b8:
    if ((TObjectPtr<UField>_u_0 *)local_2c8.AllocatorInstance.Data != (TObjectPtr<UField>_u_0 *)0x0)
    {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
  }
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
  if (3 < iVar6) {
    SerializeProperties(this,param_1);
  }
  if ((param_1->field_0x28 & 1) == 0) {
    local_res10[0] = (this->Script).ArrayNum;
    uVar16 = 0xffffffffffffffff;
    if ((param_1->field_0x28 & 4) != 0) {
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      local_res18[0] = 0;
      uVar16 = (**(code **)(*(longlong *)param_1 + 0x28))();
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
    }
    bVar5 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
    if (!bVar5) {
      local_res8[0] = 0;
      pUVar9 = (UField *)(**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      local_2b0 = pUVar9;
      if (((param_1->field_0x29 & 1) == 0) ||
         (lVar10 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1), lVar10 == 0)) {
        FArchiveProxy::FArchiveProxy(&local_108,param_1);
        local_70 = (TTuple<TFieldPath<FField>,int> *)0x0;
        local_108._padding_ = (longlong)&___7FPropertyProxyArchive__6B_;
        local_60 = local_res8;
        local_68 = 0;
        local_64 = 0;
        local_108._padding_._3_1_ =
             (local_108.InnerArchive)->field_0x2b & 0x10 | local_108._padding_._3_1_ & 0xef;
        local_58 = this;
        if ((int)local_res8[0] < (int)local_res10[0]) {
          do {
            (**(code **)(this->_padding_ + 0x310))(this,local_res8,&local_108);
          } while ((int)local_res8[0] < (int)local_res10[0]);
        }
        DestructItems<TTuple<TFieldPath<FField>,int>,int>(local_70,local_68);
        if (local_70 != (TTuple<TFieldPath<FField>,int> *)0x0) {
          FMemory::Free(local_70);
        }
        FArchiveProxy::~FArchiveProxy(&local_108);
      }
      else {
        pFVar11 = (FLinker *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        if (((pFVar11 == (FLinker *)0x0) || (pFVar11->LinkerType != Save)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("LinkerCastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                               ,0x265,L""), pFVar11 = pFVar14, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar10 = pFVar11[1]._padding_;
        bVar1 = param_1->field_0x29;
        local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_278._padding_ = 0;
        local_278.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_2a8.ArrayNum = 0;
        local_2a8.ArrayMax = 0;
        local_278.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_278.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_298 = 0;
        local_278.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_278._40_8_ = 0;
        local_278.ArSerializingDefaults = 0;
        local_278.ArPortFlags = 0;
        local_278.ArMaxSerializeSize = 0;
        local_278.ArUEVer.FileVersionUE4 = 0;
        local_278.ArUEVer.FileVersionUE5 = 0;
        local_278.ArLicenseeUEVer = 0;
        local_278.ArEngineVer.Major = 0;
        local_278.ArEngineVer.Minor = 0;
        local_278.ArEngineVer.Patch = 0;
        local_278.ArEngineVer._6_2_ = 0;
        local_278.ArEngineVer.Changelist = 0;
        local_278.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_278.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_278.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_278.SerializedProperty = (FProperty *)0x0;
        local_278.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_278.bCustomVersionsAreReset = false;
        local_278._129_7_ = 0;
        local_278.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_278);
        local_1e8 = 0;
        local_278._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_1e0 = &local_2a8;
        local_1d8 = 0;
        FArchiveState::SetIsSaving(&local_278,true);
        (**(code **)(local_278._padding_ + 0x108))(&local_278,bVar1 & 1);
        local_278._padding_ = (longlong)&___7FMemoryWriter__6B_;
        pFVar11[1]._padding_ = (longlong)&local_278;
        FArchiveProxy::FArchiveProxy(&local_1c8,param_1);
        local_130 = (TTuple<TFieldPath<FField>,int> *)0x0;
        local_1c8._padding_ = (longlong)&___7FPropertyProxyArchive__6B_;
        local_120 = local_res8;
        local_128 = 0;
        local_124 = 0;
        local_1c8._padding_._3_1_ =
             (local_1c8.InnerArchive)->field_0x2b & 0x10 | local_1c8._padding_._3_1_ & 0xef;
        local_118 = this;
        if ((int)local_res8[0] < (int)local_res10[0]) {
          do {
            (**(code **)(this->_padding_ + 0x310))(this,local_res8,&local_1c8);
          } while ((int)local_res8[0] < (int)local_res10[0]);
        }
        DestructItems<TTuple<TFieldPath<FField>,int>,int>(local_130,local_128);
        if (local_130 != (TTuple<TFieldPath<FField>,int> *)0x0) {
          FMemory::Free(local_130);
        }
        FArchiveProxy::~FArchiveProxy(&local_1c8);
        pFVar11[1]._padding_ = lVar10;
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,local_2a8.AllocatorInstance.Data,(longlong)local_2a8.ArrayNum);
        FLinker::UpdateScriptSHAKey(pFVar11,&local_2a8);
        FArchive::~FArchive((FArchive *)&local_278);
        pUVar9 = local_2b0;
        if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a8.AllocatorInstance.Data);
          pUVar9 = local_2b0;
        }
      }
      if (local_res8[0] != local_res10[0]) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      }
      if ((param_1->field_0x28 & 4) != 0) {
        lVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar16);
        local_res20[0] = (uint)(lVar10 - (longlong)pUVar9);
        if ((lVar10 - (longlong)pUVar9 != (longlong)(int)local_res20[0]) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          }
        }
        else {
          local_res20[0] = *(uint *)*plVar3;
          *plVar3 = *plVar3 + 4;
        }
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar10);
      }
    }
  }
  else {
    FStructScriptLoader::FStructScriptLoader(&local_290,this,param_1);
    FStructScriptLoader::LoadStructWithScript(&local_290,this,param_1,true);
    pUVar8 = UClass::GetPrivateStaticClass();
    iVar6 = (int)pUVar8->_padding_;
    if (((*(int *)(this->_padding_ + 0x38) < iVar6) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8)
         != &pUVar8->_padding_)) && ((*(uint *)&param_1->field_0x34 & 0x1000) == 0)) {
      (**(code **)(this->_padding_ + 0x2c8))
                (this,param_1,CONCAT71((int7)((ulonglong)&pUVar8->_padding_ >> 8),1));
    }
  }
  if (((param_1->field_0x2b & 1) != 0) && ((param_1->field_0x29 & 1) == 0)) {
    TArrayPrivateFriend::Serialize<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>
              (param_1,&this->ScriptAndPropertyObjectReferences);
  }
  return;
code_r0x000141f9dfdd:
  pFVar11 = (FLinker *)(ulonglong)(uVar13 + 1);
  pFVar15 = (FLinker *)&pFVar15->_padding_;
  if ((int)uVar12 <= (int)(uVar13 + 1)) goto LAB_141f9e2b8;
  goto LAB_141f9df82;
}

// Serialize @ 141f9e860

void __thiscall UStruct::Serialize(UStruct *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeBin @ 141f9ec00

void __thiscall UStruct::SerializeBin(UStruct *this,FStructuredArchiveSlot param_1,void *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FSlotBase FVar6;
  bool bVar7;
  FArchive *pFVar8;
  int iVar9;
  longlong lVar10;
  FSlotBase local_res10;
  FSlotBase local_res20;
  FSlotBase local_58;
  FSerializedPropertyScope local_50;
  FSerializedPropertyScope local_40;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  FVar6.StructuredArchive = local_res10.StructuredArchive;
  if ((pFVar8->field_0x2b & 1) == 0) {
    if ((pFVar8->field_0x2c & 1) == 0) {
      for (pFVar2 = this->PropertyLink; pFVar2 != (FProperty *)0x0;
          pFVar2 = pFVar2->PropertyLinkNext) {
        local_58.StructuredArchive = FVar6.StructuredArchive;
        pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_58);
        bVar7 = FProperty::ShouldSerializeValue(pFVar2,pFVar8);
        if (bVar7) {
          iVar1 = pFVar2->ArrayDim;
          iVar9 = 0;
          if (0 < iVar1) {
            lVar10 = 0;
            do {
              local_40.Ar = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                      (&local_58);
              local_40.Property = pFVar2;
              FSerializedPropertyScope::PushProperty(&local_40);
              pcVar3 = *(code **)(pFVar2->_padding_ + 0xc0);
              if ((pFVar2->ArrayDim <= iVar9) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((param_2 == (void *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              (*pcVar3)(pFVar2,FVar6.StructuredArchive,
                        (longlong)param_2 +
                        (longlong)pFVar2->Offset_Internal + pFVar2->ElementSize * lVar10,0);
              FSerializedPropertyScope::PopProperty(&local_40);
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 1;
            } while (iVar9 < iVar1);
          }
        }
      }
    }
    else {
      puVar4 = *(undefined8 **)&pFVar8->field_0x60;
      for (puVar5 = puVar4; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[3]) {
        pFVar2 = (FProperty *)*puVar5;
        if (pFVar2 != (FProperty *)0x0) {
          *(undefined8 *)&pFVar8->field_0x60 = puVar5[2];
          FProperty::SerializeBinProperty
                    (pFVar2,(FStructuredArchiveSlot)FVar6.StructuredArchive,param_2,
                     *(int *)(puVar5 + 1));
          *(undefined8 **)&pFVar8->field_0x60 = puVar4;
        }
      }
    }
  }
  else {
    for (pFVar2 = this->RefLink; pFVar2 != (FProperty *)0x0; pFVar2 = pFVar2->NextRef) {
      local_res20.StructuredArchive = FVar6.StructuredArchive;
      pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res20);
      bVar7 = FProperty::ShouldSerializeValue(pFVar2,pFVar8);
      if (bVar7) {
        iVar1 = pFVar2->ArrayDim;
        iVar9 = 0;
        if (0 < iVar1) {
          lVar10 = 0;
          do {
            local_50.Ar = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                    (&local_res20);
            local_50.Property = pFVar2;
            FSerializedPropertyScope::PushProperty(&local_50);
            pcVar3 = *(code **)(pFVar2->_padding_ + 0xc0);
            if ((pFVar2->ArrayDim <= iVar9) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((param_2 == (void *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (*pcVar3)(pFVar2,FVar6.StructuredArchive,
                      (longlong)param_2 +
                      (longlong)pFVar2->Offset_Internal + pFVar2->ElementSize * lVar10,0);
            FSerializedPropertyScope::PopProperty(&local_50);
            iVar9 = iVar9 + 1;
            lVar10 = lVar10 + 1;
          } while (iVar9 < iVar1);
        }
      }
    }
  }
  return;
}

// SerializeBinEx @ 141f9eee0

void __thiscall
UStruct::SerializeBinEx
          (UStruct *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3,UStruct *param_4
          )

{
  code *pcVar1;
  FProperty *this_00;
  FSlotBase FVar2;
  bool bVar3;
  char cVar4;
  FArchive *pFVar5;
  int iVar6;
  FProperty *pFVar7;
  longlong lVar8;
  longlong lVar9;
  FSlotBase local_68;
  FSerializedPropertyScope local_60;
  TFieldIterator<FProperty> local_50;
  
  if ((param_3 == (void *)0x0) || (param_4 == (UStruct *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141f9f161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d0))();
    return;
  }
  if (this == (UStruct *)0x0) {
    local_50.Field = (FField *)0x0;
  }
  else {
    local_50.Field = this->ChildProperties;
  }
  local_50.InterfaceIndex = -1;
  local_50.bIncludeSuper = true;
  local_50.bIncludeDeprecated = true;
  local_50.bIncludeInterface = false;
  local_50.Struct = this;
  TFieldIterator<FProperty>::IterateToNext(&local_50);
  this_00 = (FProperty *)local_50.Field;
  do {
    if (this_00 == (FProperty *)0x0) {
      return;
    }
    local_68.StructuredArchive = (FStructuredArchive *)param_1;
    local_50.Field = (FField *)this_00;
    pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_68);
    FVar2.StructuredArchive = local_68.StructuredArchive;
    bVar3 = FProperty::ShouldSerializeValue(this_00,pFVar5);
    pFVar7 = this_00;
    if ((bVar3) && (iVar6 = 0, 0 < this_00->ArrayDim)) {
      do {
        if (((iVar6 < 0) || (this_00->ArrayDim <= iVar6)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar9 = (longlong)param_2 +
                (longlong)this_00->Offset_Internal +
                (longlong)this_00->ElementSize * (longlong)iVar6;
        if (param_4->PropertiesSize <
            this_00->ElementSize * this_00->ArrayDim + this_00->Offset_Internal) {
          lVar8 = 0;
        }
        else {
          if (((iVar6 < 0) || (this_00->ArrayDim <= iVar6)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar8 = (longlong)param_3 +
                  (longlong)this_00->Offset_Internal +
                  (longlong)this_00->ElementSize * (longlong)iVar6;
        }
        cVar4 = (**(code **)(this_00->_padding_ + 0xb8))
                          (this_00,lVar9,lVar8,*(undefined4 *)&pFVar5->field_0x34);
        if (cVar4 == '\0') {
          local_60.Ar = pFVar5;
          local_60.Property = this_00;
          FSerializedPropertyScope::PushProperty(&local_60);
          (**(code **)(this_00->_padding_ + 0xc0))(this_00,FVar2.StructuredArchive,lVar9,lVar8);
          FSerializedPropertyScope::PopProperty(&local_60);
        }
        iVar6 = iVar6 + 1;
        pFVar7 = (FProperty *)local_50.Field;
      } while (iVar6 < this_00->ArrayDim);
    }
    local_50.Field = (FField *)pFVar7->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    this_00 = (FProperty *)local_50.Field;
  } while( true );
}

// SerializeExpr @ 141f9f3d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EExprToken __thiscall UStruct::SerializeExpr(UStruct *this,int *param_1,FArchive *param_2)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  EExprToken EVar9;
  FScriptContainerElement FVar10;
  char cVar11;
  uint uVar12;
  FString *pFVar13;
  FLinkerLoad *pFVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  FScriptContainerElement local_res20 [8];
  FScriptContainerElement local_3f0;
  FScriptContainerElement local_3ef;
  FScriptContainerElement local_3ee;
  FScriptContainerElement local_3ed;
  FScriptContainerElement local_3ec [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_3e8;
  FScriptContainerElement local_3e0;
  FScriptContainerElement local_3df;
  FScriptContainerElement local_3de;
  FScriptContainerElement local_3dd;
  ushort local_3dc [2];
  ushort local_3d8 [2];
  ushort local_3d4 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_3d0;
  ushort local_3c8 [2];
  uint local_3c4;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  uint local_394 [3];
  FString local_388;
  int local_378;
  int local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  int local_33c;
  int local_338;
  int local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  int local_320 [2];
  uint local_318;
  undefined4 uStack_314;
  uint local_310;
  undefined4 uStack_30c;
  uint local_308;
  undefined4 uStack_304;
  ulonglong local_300;
  int local_2f8;
  uint local_2f4;
  int local_2f0 [2];
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  ulonglong local_2b8;
  undefined4 local_2b0;
  ulong64 local_2a8;
  ulong64 local_2a0;
  ulong64 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  FString local_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  long64 local_160;
  long64 local_158;
  long64 local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  FSoftObjectPath local_118;
  FScriptContainerElement *local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  FString local_60;
  TStringView<wchar_t> local_48 [2];
  
  pTVar21 = &this->Script;
  uVar18 = 0;
  if ((param_2->field_0x28 & 1) == 0) {
    uVar22 = *param_1;
    uVar20 = uVar18;
    if ((int)uVar22 < (this->Script).ArrayNum) {
      uVar20 = ~uVar22 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    local_res20[0] = (pTVar21->AllocatorInstance).Data[(int)uVar22];
  }
  plVar4 = *(longlong **)&param_2->field_0x8;
  if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,1);
  }
  else {
    local_res20[0] = *(FScriptContainerElement *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  if ((param_2->field_0x28 & 4) == 0) {
    uVar22 = *param_1;
    uVar20 = uVar18;
    if ((int)uVar22 < (this->Script).ArrayNum) {
      uVar20 = ~uVar22 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    (pTVar21->AllocatorInstance).Data[(int)uVar22] = local_res20[0];
  }
  uVar22 = *param_1;
  *param_1 = uVar22 + 1;
  uVar20 = uVar18;
  if ((int)uVar22 < (this->Script).ArrayNum) {
    uVar20 = ~uVar22 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  FVar1 = (pTVar21->AllocatorInstance).Data[(int)uVar22];
  uVar20 = 0;
  uVar17 = 0;
  uVar22 = 0;
  uVar12 = 0;
  switch(FVar1) {
  case (FScriptContainerElement)0x0:
  case (FScriptContainerElement)0x1:
  case (FScriptContainerElement)0x2:
  case (FScriptContainerElement)0x33:
  case (FScriptContainerElement)0x48:
  case (FScriptContainerElement)0x6c:
    local_208 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_208 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_208);
    uVar6 = local_208;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x3:
  case (FScriptContainerElement)0x5:
  case (FScriptContainerElement)0x8:
  case (FScriptContainerElement)0xa:
  case (FScriptContainerElement)0xd:
  case (FScriptContainerElement)0xe:
  case (FScriptContainerElement)0x10:
  case (FScriptContainerElement)0x47:
  case (FScriptContainerElement)0x49:
  case (FScriptContainerElement)0x56:
  case (FScriptContainerElement)0x57:
  case (FScriptContainerElement)0x58:
  case (FScriptContainerElement)0x59:
  case (FScriptContainerElement)0x6e:
  case (FScriptContainerElement)0x6f:
  default:
    if (2 < (byte)LogScriptSerialization._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScriptSerialization);
    }
    break;
  case (FScriptContainerElement)0x4:
  case (FScriptContainerElement)0x4e:
  case (FScriptContainerElement)0x4f:
  case (FScriptContainerElement)0x51:
  case (FScriptContainerElement)0x5d:
  case (FScriptContainerElement)0x6d:
  case (FScriptContainerElement)0x72:
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x6:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_328 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_328);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_328;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x7:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_330 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_330);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_330;
    }
    *param_1 = *param_1 + 4;
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x9:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3c8[0] = *(ushort *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    ::operator<<(param_2,local_3c8);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(ushort *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_3c8[0];
    }
    uVar18 = *param_1 + 2;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3de = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    ::operator<<(param_2,(uchar *)&local_3de);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (pTVar21->AllocatorInstance).Data;
      FVar10 = local_3de;
LAB_141f9f691:
      pFVar16[(int)uVar18] = FVar10;
    }
    goto LAB_141f9f695;
  case (FScriptContainerElement)0xb:
  case (FScriptContainerElement)0x15:
  case (FScriptContainerElement)0x16:
  case (FScriptContainerElement)0x17:
  case (FScriptContainerElement)0x25:
  case (FScriptContainerElement)0x26:
  case (FScriptContainerElement)0x27:
  case (FScriptContainerElement)0x28:
  case (FScriptContainerElement)0x2a:
  case (FScriptContainerElement)0x2d:
  case (FScriptContainerElement)0x30:
  case (FScriptContainerElement)0x32:
  case (FScriptContainerElement)0x3a:
  case (FScriptContainerElement)0x3c:
  case (FScriptContainerElement)0x3e:
  case (FScriptContainerElement)0x40:
  case (FScriptContainerElement)0x4a:
  case (FScriptContainerElement)0x4d:
  case (FScriptContainerElement)0x53:
  case (FScriptContainerElement)0x5a:
  case (FScriptContainerElement)0x5e:
  case (FScriptContainerElement)0x66:
    break;
  case (FScriptContainerElement)0xc:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3c4 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c4);
      }
    }
    else {
      local_3c4 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3c4;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0xf:
    local_220 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_220 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_220);
    uVar6 = local_220;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    *param_1 = *param_1 + 8;
    goto switchD_141f9f59d_caseD_14;
  case (FScriptContainerElement)0x11:
    local_240 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_240 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_240);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_3e8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_240;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
       ((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_3e8;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3df = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    ::operator<<(param_2,(uchar *)&local_3df);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      (pTVar21->AllocatorInstance).Data[(int)uVar18] = local_3df;
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x12:
  case (FScriptContainerElement)0x19:
  case (FScriptContainerElement)0x1a:
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar12 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3c0 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3c0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3c0);
      }
    }
    else {
      local_3c0 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3c0;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    local_280 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_280 = *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_280);
    bVar15 = param_2->field_0x28;
    uVar6 = local_280;
    goto joined_r0x000141f9f995;
  case (FScriptContainerElement)0x13:
    local_238 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_238 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_238);
    uVar6 = local_238;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x14:
  case (FScriptContainerElement)0x43:
  case (FScriptContainerElement)0x44:
  case (FScriptContainerElement)0x5c:
  case (FScriptContainerElement)0x5f:
  case (FScriptContainerElement)0x60:
  case (FScriptContainerElement)0x62:
  case (FScriptContainerElement)0x6b:
    goto switchD_141f9f59d_caseD_14;
  case (FScriptContainerElement)0x18:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_32c = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_32c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_32c;
    }
    *param_1 = *param_1 + 4;
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x1b:
  case (FScriptContainerElement)0x45:
    local_318 = 0;
    uStack_314 = 0;
    local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
    local_2e0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (pTVar21->AllocatorInstance).Data;
      uStack_164 = *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8);
      local_2e8 = *(ulonglong *)(pFVar16 + (int)uVar18);
      local_168 = (uint)local_2e8;
      local_318 = (uint)local_2e8;
      uStack_314 = uStack_164;
    }
    local_2e0 = uStack_314;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_318);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_124 = local_318;
      local_11c = uStack_314;
      local_2e0 = uStack_314;
      uStack_120 = 0;
      local_2e8 = (ulonglong)local_318;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (this->Script).AllocatorInstance.Data;
      *(ulonglong *)(pFVar16 + (int)uVar18) = local_2e8;
      *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8) = local_2e0;
    }
    *param_1 = *param_1 + 0xc;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '\x16');
    break;
  case (FScriptContainerElement)0x1c:
  case (FScriptContainerElement)0x46:
  case (FScriptContainerElement)0x68:
    local_290 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_290 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_290);
    uVar6 = local_290;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '\x16');
    break;
  case (FScriptContainerElement)0x1d:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3bc = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3bc,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3bc);
      }
    }
    else {
      local_3bc = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3bc;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x1e:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3b4 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b4);
      }
    }
    else {
      local_3b4 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3b4;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x1f:
    do {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_3ef = (pTVar21->AllocatorInstance).Data[(int)uVar18];
      }
      plVar4 = *(longlong **)&param_2->field_0x8;
      if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ef,1);
      }
      else {
        local_3ef = *(FScriptContainerElement *)*plVar4;
        *plVar4 = *plVar4 + 1;
      }
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        (pTVar21->AllocatorInstance).Data[(int)uVar18] = local_3ef;
      }
      uVar18 = *param_1;
      *param_1 = uVar18 + 1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
    } while ((pTVar21->AllocatorInstance).Data[(int)uVar18] != (FScriptContainerElement)0x0);
    break;
  case (FScriptContainerElement)0x20:
    local_270 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_270 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x150))(param_2,&local_270);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_270;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    break;
  case (FScriptContainerElement)0x21:
    local_310 = 0;
    uStack_30c = 0;
    local_2d8 = (ulonglong)local_2d8._4_4_ << 0x20;
    local_2d0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (pTVar21->AllocatorInstance).Data;
      uStack_16c = *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8);
      local_2d8 = *(ulonglong *)(pFVar16 + (int)uVar18);
      local_170 = (uint)local_2d8;
      local_310 = (uint)local_2d8;
      uStack_30c = uStack_16c;
    }
    local_2d0 = uStack_30c;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_310);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_148 = local_310;
      local_140 = uStack_30c;
      local_2d0 = uStack_30c;
      uStack_144 = 0;
      local_2d8 = (ulonglong)local_310;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (this->Script).AllocatorInstance.Data;
      *(ulonglong *)(pFVar16 + (int)uVar18) = local_2d8;
      *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8) = local_2d0;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case (FScriptContainerElement)0x22:
    bVar15 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_2f0[0] = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,local_2f0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_2f0[0];
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_378 = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_378);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_378;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_374 = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_374);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_374;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_150 = *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,&local_150);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_150;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_158 = *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_158);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_158;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_160 = *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_160);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(long64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_160;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x23:
    bVar15 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_370 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,&local_370);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_370;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_36c = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_36c);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_36c;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_368 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_368);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_368;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1f0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,&local_1f0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1f0;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1e8 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1e8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1e8;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1e0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1e0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1e0;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x24:
  case (FScriptContainerElement)0x2c:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3ec[0] = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3ec,1);
    }
    else {
      local_3ec[0] = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      (this->Script).AllocatorInstance.Data[(int)uVar18] = local_3ec[0];
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x29:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3ee = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    pTVar21 = &this->Script;
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ee,1);
    }
    else {
      local_3ee = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      (pTVar21->AllocatorInstance).Data[(int)uVar18] = local_3ee;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 1;
    uVar20 = uVar22;
    if ((int)uVar18 < (this->Script).ArrayNum) {
      uVar20 = ~uVar18 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar10 = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    if (FVar10 == (FScriptContainerElement)0x0) {
      return (EExprToken)FVar1;
    }
    if (FVar10 == (FScriptContainerElement)0x1) {
      (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    }
    else {
      if ((FVar10 == (FScriptContainerElement)0x2) || (FVar10 == (FScriptContainerElement)0x3))
      goto switchD_141f9f59d_caseD_4;
      if (FVar10 != (FScriptContainerElement)0x4) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                           ,399,
                           L"Unknown EBlueprintTextLiteralType! Please update XFERTEXT to handle this type of text."
                          );
        if (!bVar8) {
          return (EExprToken)FVar1;
        }
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_278 = 0;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_278 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_278);
      uVar6 = local_278;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
      }
      uVar18 = *param_1;
      *param_1 = uVar18 + 8;
      if ((param_2->field_0x28 & 4) == 0) {
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
      }
    }
    goto switchD_141f9f59d_caseD_14;
  case (FScriptContainerElement)0x2b:
    bVar15 = param_2->field_0x28 & 1;
    if ((int)((ulonglong)*(undefined8 *)&param_2->field_0x40 >> 0x20) < 0x3ec) {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_364 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,&local_364);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_364;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_360 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_360);
      local_3e8 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_360;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_35c = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_35c);
      pTVar7 = local_3e8;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < local_3e8->ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_35c;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_358 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_358);
      local_3e8 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_358;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_354 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_354);
      pTVar7 = local_3e8;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar12;
        if ((int)uVar18 < local_3e8->ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_354;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_350 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_350);
      local_3e8 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_350;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_34c = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_34c);
      pTVar7 = local_3e8;
      local_3d0 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar22;
        if ((int)uVar18 < local_3e8->ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_34c;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_348 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_348);
      pTVar7 = local_3d0;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar22;
        if ((int)uVar18 < local_3d0->ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_348;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar20 = uVar22;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_344 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_344);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_344;
      }
      uVar18 = *param_1 + 4;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_340 = *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_340);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(float *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_340;
      }
      *param_1 = *param_1 + 4;
    }
    else {
      if (bVar15 == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1d8 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      pTVar21 = &this->Script;
      ::operator<<(param_2,&local_1d8);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1d8;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1d0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1d0);
      local_3d0 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1d0;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1c8 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1c8);
      pTVar7 = local_3d0;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < local_3d0->ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_1c8;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1c0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1c0);
      local_3d0 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1c0;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1b8 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1b8);
      pTVar7 = local_3d0;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < local_3d0->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_1b8;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1b0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1b0);
      local_3d0 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_1b0;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1a8 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1a8);
      pTVar7 = local_3d0;
      local_3e8 = pTVar21;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < local_3d0->ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_1a8;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_1a0 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_1a0);
      pTVar7 = local_3e8;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < local_3e8->ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar7->AllocatorInstance).Data + (int)uVar18) = local_1a0;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_198 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_198);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_198;
      }
      uVar18 = *param_1 + 8;
      *param_1 = uVar18;
      if ((param_2->field_0x28 & 1) == 0) {
        uVar22 = uVar12;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_190 = *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
      }
      ::operator<<(param_2,&local_190);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(double *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_190;
      }
      *param_1 = *param_1 + 8;
    }
    break;
  case (FScriptContainerElement)0x2e:
    local_230 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_230 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_230);
    uVar6 = local_230;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x2f:
    local_268 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_268 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_268);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_3e8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_268;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
       ((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_3e8;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_33c = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_33c);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_33c;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '0');
    break;
  case (FScriptContainerElement)0x31:
    pFVar14 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
    if (((pFVar14 == (FLinkerLoad *)0x0) || ((param_2->field_0x28 & 1) == 0)) ||
       (0x12e < *(int *)&param_2->field_0x40)) {
      (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    }
    else {
      local_188 = 0;
      (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_188);
      uVar6 = local_188;
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar22 = ~uVar18 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = uVar6;
      }
      *param_1 = *param_1 + 8;
    }
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '2');
    break;
  case (FScriptContainerElement)0x34:
    do {
      do {
        if ((param_2->field_0x28 & 1) == 0) {
          uVar20 = *param_1;
          uVar17 = uVar22;
          if ((int)uVar20 < (this->Script).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          local_3dc[0] = *(ushort *)((pTVar21->AllocatorInstance).Data + (int)uVar20);
        }
        plVar4 = *(longlong **)&param_2->field_0x8;
        if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3dc,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,local_3dc);
          }
        }
        else {
          local_3dc[0] = *(ushort *)*plVar4;
          *plVar4 = *plVar4 + 2;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar20 = *param_1;
          uVar17 = uVar22;
          if ((int)uVar20 < (this->Script).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          *(ushort *)((pTVar21->AllocatorInstance).Data + (int)uVar20) = local_3dc[0];
        }
        *param_1 = *param_1 + 2;
        uVar17 = *param_1 - 1;
        uVar20 = uVar18;
        if ((int)uVar17 < (this->Script).ArrayNum) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
      } while ((pTVar21->AllocatorInstance).Data[(int)uVar17] != (FScriptContainerElement)0x0);
      uVar17 = *param_1 - 2;
      uVar20 = uVar18;
      if ((int)uVar17 < (this->Script).ArrayNum) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
    } while ((pTVar21->AllocatorInstance).Data[(int)uVar17] != (FScriptContainerElement)0x0);
    break;
  case (FScriptContainerElement)0x35:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_2a8 = *(ulong64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_2a8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_2a8);
      }
    }
    else {
      local_2a8 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(ulong64 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_2a8;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x36:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_298 = *(ulong64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_298,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_298);
      }
    }
    else {
      local_298 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(ulong64 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_298;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x37:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_2a0 = *(ulong64 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ulong64 *)plVar4[1] < (ulong64 *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_2a0,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_2a0);
      }
    }
    else {
      local_2a0 = *(ulong64 *)*plVar4;
      *plVar4 = *plVar4 + 8;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(ulong64 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_2a0;
    }
    *param_1 = *param_1 + 8;
    break;
  case (FScriptContainerElement)0x38:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3f0 = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3f0,1);
    }
    else {
      local_3f0 = *(FScriptContainerElement *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (this->Script).AllocatorInstance.Data;
      FVar10 = local_3f0;
      goto LAB_141f9f691;
    }
LAB_141f9f695:
    *param_1 = *param_1 + 1;
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x39:
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_338 = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_338);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(int *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_338;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != ':');
    break;
  case (FScriptContainerElement)0x3b:
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_334 = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_334);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(int *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_334;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '<');
    break;
  case (FScriptContainerElement)0x3d:
    local_258 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_258 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_258);
    uVar6 = local_258;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3a0 = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a0);
      }
    }
    else {
      local_3a0 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3a0;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '>');
    break;
  case (FScriptContainerElement)0x3f:
    local_250 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_250 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_250);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_3e8 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_250;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)
       ((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_3e8;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    local_248 = 0;
    local_3e8 = pTVar21;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_248 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_248);
    uVar6 = local_248;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = uVar6;
    }
    pTVar21 = local_3e8;
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < local_3e8->ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_39c = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_39c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_39c);
      }
    }
    else {
      local_39c = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_39c;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '@');
    break;
  case (FScriptContainerElement)0x41:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3b0 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b0);
      }
    }
    else {
      local_3b0 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3b0;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3ac = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ac,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3ac);
      }
    }
    else {
      local_3ac = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3ac;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3a8 = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a8);
      }
    }
    else {
      local_3a8 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3a8;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x42:
    local_210 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_210 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_210);
    bVar15 = param_2->field_0x28;
    uVar6 = local_210;
    goto joined_r0x000141f9f995;
  case (FScriptContainerElement)0x4b:
    local_308 = 0;
    uStack_304 = 0;
    local_2c8 = (ulonglong)local_2c8._4_4_ << 0x20;
    local_2c0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (pTVar21->AllocatorInstance).Data;
      uStack_17c = *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8);
      local_2c8 = *(ulonglong *)(pFVar16 + (int)uVar18);
      local_180 = (uint)local_2c8;
      local_308 = (uint)local_2c8;
      uStack_304 = uStack_17c;
    }
    local_2c0 = uStack_304;
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_308);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_13c = local_308;
      local_134 = uStack_304;
      local_2c0 = uStack_304;
      uStack_138 = 0;
      local_2c8 = (ulonglong)local_308;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (this->Script).AllocatorInstance.Data;
      *(ulonglong *)(pFVar16 + (int)uVar18) = local_2c8;
      *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8) = local_2c0;
    }
    *param_1 = *param_1 + 0xc;
    break;
  case (FScriptContainerElement)0x4c:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_2f4 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_2f4);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_2f4;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x50:
    if ((param_2->field_0x28 & 1) != 0) {
      uVar18 = *param_1 - 1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      (pTVar21->AllocatorInstance).Data[(int)uVar18] = (FScriptContainerElement)0x5e;
    }
    break;
  case (FScriptContainerElement)0x52:
  case (FScriptContainerElement)0x54:
  case (FScriptContainerElement)0x55:
    local_228 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_228 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_228);
    uVar6 = local_228;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x5b:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar17;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3b8 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3b8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3b8);
      }
    }
    else {
      local_3b8 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3b8;
    }
    *param_1 = *param_1 + 4;
    break;
  case (FScriptContainerElement)0x61:
    local_300 = 0;
    local_2b8 = local_2b8 & 0xffffffff00000000;
    local_2b0 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (pTVar21->AllocatorInstance).Data;
      local_2b0 = *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8);
      local_2b8 = *(ulonglong *)(pFVar16 + (int)uVar18);
      local_178 = (undefined4)local_2b8;
      local_300 = CONCAT44(local_2b0,(undefined4)local_2b8);
      uStack_174 = local_2b0;
    }
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,&local_300);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      local_130 = (undefined4)local_300;
      local_2b0 = (undefined4)(local_300 >> 0x20);
      uStack_12c = 0;
      local_2b8 = local_300 & 0xffffffff;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      local_128 = local_2b0;
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pFVar16 = (this->Script).AllocatorInstance.Data;
      *(ulonglong *)(pFVar16 + (int)uVar18) = local_2b8;
      *(undefined4 *)(pFVar16 + (longlong)(int)uVar18 + 8) = local_2b0;
    }
    *param_1 = *param_1 + 0xc;
switchD_141f9f59d_caseD_14:
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x63:
    local_288 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_288 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,&local_288);
    uVar6 = local_288;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 8;
    if ((param_2->field_0x28 & 4) == 0) {
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      HandlePlaceholderScriptRef((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != '\x16');
    break;
  case (FScriptContainerElement)0x64:
    local_218 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar20;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_218 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_218);
    bVar15 = param_2->field_0x28;
    uVar6 = local_218;
joined_r0x000141f9f995:
    if ((bVar15 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    *param_1 = *param_1 + 8;
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x65:
    local_260 = 0;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_260 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    (**(code **)(*(longlong *)param_2 + 0x160))(param_2,&local_260);
    uVar6 = local_260;
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(undefined8 *)((this->Script).AllocatorInstance.Data + (int)uVar18) = uVar6;
    }
    uVar18 = *param_1 + 8;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3a4 = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3a4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_3a4);
      }
    }
    else {
      local_3a4 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3a4;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != 'f');
    break;
  case (FScriptContainerElement)0x67:
    if (((param_2->field_0x28 & 4) != 0) && ((param_2->field_0x2b & 1) != 0)) {
      if ((param_2->field_0x28 & 1) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        local_3e0 = (pTVar21->AllocatorInstance).Data[(int)uVar18];
      }
      ::operator<<(param_2,(uchar *)&local_3e0);
      if ((param_2->field_0x28 & 4) == 0) {
        uVar18 = *param_1;
        uVar20 = uVar17;
        if ((int)uVar18 < (this->Script).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        (this->Script).AllocatorInstance.Data[(int)uVar18] = local_3e0;
      }
      uVar18 = *param_1;
      *param_1 = uVar18 + 1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      FVar1 = (this->Script).AllocatorInstance.Data[(int)uVar18];
      if (((FVar1 != (FScriptContainerElement)0x1f) && (FVar1 != (FScriptContainerElement)0x34)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Expr == EX_StringConst || Expr == EX_UnicodeStringConst",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ScriptSerialization.h"
                             ,0x1a0,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.Data.ArrayNum = 0;
      local_388.Data.ArrayMax = 0;
      uVar18 = *param_1;
      iVar3 = (this->Script).ArrayNum;
      if (FVar1 == (FScriptContainerElement)0x1f) {
        uVar20 = uVar22;
        if ((int)uVar18 < iVar3) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        ::FString::FString(&local_200,(char *)((this->Script).AllocatorInstance.Data + (int)uVar18))
        ;
        if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_388.Data.AllocatorInstance.Data);
        }
        local_388.Data.AllocatorInstance.Data = local_200.Data.AllocatorInstance.Data;
        local_388.Data.ArrayNum = local_200.Data.ArrayNum;
        local_388.Data.ArrayMax = local_200.Data.ArrayMax;
        local_200.Data.ArrayNum = 0;
        local_200.Data.ArrayMax = 0;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        do {
          if ((param_2->field_0x28 & 1) == 0) {
            uVar18 = *param_1;
            uVar20 = uVar22;
            if ((int)uVar18 < (this->Script).ArrayNum) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              EVar9 = (*pcVar5)();
              return EVar9;
            }
            local_3ed = (this->Script).AllocatorInstance.Data[(int)uVar18];
          }
          plVar4 = *(longlong **)&param_2->field_0x8;
          if ((FScriptContainerElement *)plVar4[1] < (FScriptContainerElement *)*plVar4 + 1) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_3ed,1);
          }
          else {
            local_3ed = *(FScriptContainerElement *)*plVar4;
            *plVar4 = *plVar4 + 1;
          }
          if ((param_2->field_0x28 & 4) == 0) {
            uVar18 = *param_1;
            uVar20 = uVar12;
            if ((int)uVar18 < (this->Script).ArrayNum) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              EVar9 = (*pcVar5)();
              return EVar9;
            }
            (this->Script).AllocatorInstance.Data[(int)uVar18] = local_3ed;
          }
          uVar18 = *param_1;
          *param_1 = uVar18 + 1;
          uVar20 = uVar12;
          if ((int)uVar18 < (this->Script).ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
        } while ((this->Script).AllocatorInstance.Data[(int)uVar18] != (FScriptContainerElement)0x0)
        ;
      }
      else {
        uVar20 = uVar22;
        if ((int)uVar18 < iVar3) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        pFVar13 = ::FString::FString(&local_60,
                                     (ushort *)((this->Script).AllocatorInstance.Data + (int)uVar18)
                                    );
        if (&local_388 != pFVar13) {
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          local_388.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_388.Data.ArrayNum = (pFVar13->Data).ArrayNum;
          local_388.Data.ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        StringConv::InlineCombineSurrogates(&local_388);
        do {
          do {
            if ((param_2->field_0x28 & 1) == 0) {
              uVar18 = *param_1;
              uVar20 = uVar22;
              if ((int)uVar18 < (this->Script).ArrayNum) {
                uVar20 = ~uVar18 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                EVar9 = (*pcVar5)();
                return EVar9;
              }
              local_3d8[0] = *(ushort *)((this->Script).AllocatorInstance.Data + (int)uVar18);
            }
            plVar4 = *(longlong **)&param_2->field_0x8;
            if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
              if ((param_2->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3d8,2);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_2,local_3d8);
              }
            }
            else {
              local_3d8[0] = *(ushort *)*plVar4;
              *plVar4 = *plVar4 + 2;
            }
            if ((param_2->field_0x28 & 4) == 0) {
              uVar18 = *param_1;
              uVar20 = uVar12;
              if ((int)uVar18 < (this->Script).ArrayNum) {
                uVar20 = ~uVar18 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                EVar9 = (*pcVar5)();
                return EVar9;
              }
              *(ushort *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3d8[0];
            }
            *param_1 = *param_1 + 2;
            uVar20 = *param_1 - 1;
            uVar18 = uVar12;
            if ((int)uVar20 < (this->Script).ArrayNum) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              EVar9 = (*pcVar5)();
              return EVar9;
            }
          } while ((this->Script).AllocatorInstance.Data[(int)uVar20] !=
                   (FScriptContainerElement)0x0);
          uVar20 = *param_1 - 2;
          uVar18 = uVar12;
          if ((int)uVar20 < (this->Script).ArrayNum) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
        } while ((this->Script).AllocatorInstance.Data[(int)uVar20] != (FScriptContainerElement)0x0)
        ;
      }
      local_f8 = local_388.Data.AllocatorInstance.Data;
      local_118.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_118.AssetPath.PackageName.Number = 0;
      local_118.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_118.AssetPath.AssetName.Number = 0;
      local_118.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.SubPathString.Data.ArrayNum = 0;
      local_118.SubPathString.Data.ArrayMax = 0;
      uStack_f0 = local_388.Data.ArrayNum - 1;
      if (local_388.Data.ArrayNum == 0) {
        uStack_f0 = uVar12;
      }
      local_48[0]._12_4_ = uStack_ec;
      local_48[0].Size = uStack_f0;
      local_48[0].DataPtr = (wchar_t *)local_388.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_118,local_48);
      (**(code **)(*(longlong *)param_2 + 0x140))(param_2,&local_118);
      if (local_118.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
        return (EExprToken)FVar1;
      }
      return (EExprToken)FVar1;
    }
    goto switchD_141f9f59d_caseD_4;
  case (FScriptContainerElement)0x69:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3d4[0] = *(ushort *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((ushort *)plVar4[1] < (ushort *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_3d4,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_3d4);
      }
    }
    else {
      local_3d4[0] = *(ushort *)*plVar4;
      *plVar4 = *plVar4 + 2;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(ushort *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_3d4[0];
    }
    uVar18 = *param_1;
    *param_1 = uVar18 + 2;
    uVar20 = uVar22;
    if ((int)uVar18 < (this->Script).ArrayNum) {
      uVar20 = ~uVar18 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    uVar2 = *(ushort *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar20 = uVar22;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_398 = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
    }
    plVar4 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_398,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_398);
      }
    }
    else {
      local_398 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_398;
    }
    *param_1 = *param_1 + 4;
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    uVar19 = 0;
    if (uVar2 != 0) {
      do {
        (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
        if ((param_2->field_0x28 & 1) == 0) {
          uVar18 = *param_1;
          uVar22 = uVar12;
          if ((int)uVar18 < (this->Script).ArrayNum) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          local_394[0] = *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18);
        }
        plVar4 = *(longlong **)&param_2->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_2->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_394,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_2,local_394);
          }
        }
        else {
          local_394[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        if ((param_2->field_0x28 & 4) == 0) {
          uVar18 = *param_1;
          uVar22 = uVar12;
          if ((int)uVar18 < (this->Script).ArrayNum) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            EVar9 = (*pcVar5)();
            return EVar9;
          }
          *(uint *)((this->Script).AllocatorInstance.Data + (int)uVar18) = local_394[0];
        }
        *param_1 = *param_1 + 4;
        (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar2);
    }
switchD_141f9f59d_caseD_4:
    (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    break;
  case (FScriptContainerElement)0x6a:
    uVar18 = *param_1;
    if ((int)uVar18 < (this->Script).ArrayNum) {
      uVar20 = ~uVar18 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    if ((pTVar21->AllocatorInstance).Data[(int)uVar18] == (FScriptContainerElement)0x4) {
      *param_1 = *param_1 + 0xc;
    }
    *param_1 = *param_1 + 1;
    break;
  case (FScriptContainerElement)0x70:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_2f8 = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    ::operator<<(param_2,&local_2f8);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_2f8;
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_324 = *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    ::operator<<(param_2,&local_324);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(uint *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_324;
    }
    *param_1 = *param_1 + 4;
    do {
      cVar11 = (**(code **)(this->_padding_ + 0x310))(this,param_1,param_2);
    } while (cVar11 != 'q');
    break;
  case (FScriptContainerElement)0x71:
    if ((param_2->field_0x28 & 1) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_320[0] = *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18);
    }
    pTVar21 = &this->Script;
    ::operator<<(param_2,local_320);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      *(int *)((pTVar21->AllocatorInstance).Data + (int)uVar18) = local_320[0];
    }
    uVar18 = *param_1 + 4;
    *param_1 = uVar18;
    if ((param_2->field_0x28 & 1) == 0) {
      uVar22 = uVar12;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar22 = ~uVar18 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      local_3dd = (pTVar21->AllocatorInstance).Data[(int)uVar18];
    }
    ::operator<<(param_2,(schar *)&local_3dd);
    if ((param_2->field_0x28 & 4) == 0) {
      uVar18 = *param_1;
      if ((int)uVar18 < (this->Script).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      (pTVar21->AllocatorInstance).Data[(int)uVar18] = local_3dd;
    }
    *param_1 = *param_1 + 1;
  }
  return (EExprToken)FVar1;
}

// SerializeProperties @ 141fa6750

void __thiscall UStruct::SerializeProperties(UStruct *this,FArchive *param_1)

{
  int iVar1;
  FField *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FFieldObjectUnion FVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res10 [2];
  FName local_res18;
  FName local_res20;
  FField *local_68;
  FFieldObjectUnion local_60;
  FName local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  uVar9 = 0;
  uVar7 = 0;
  local_res10[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    local_res10[0] = uVar9;
    for (pFVar2 = this->ChildProperties; pFVar2 != (FField *)0x0; pFVar2 = pFVar2->Next) {
      local_res10[0] = local_res10[0] + 1;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    for (pFVar2 = this->ChildProperties; pFVar2 != (FField *)0x0; pFVar2 = pFVar2->Next) {
      local_58 = pFVar2->ClassPrivate->Name;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_58);
      (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,param_1);
      uVar7 = uVar7 + 1;
    }
    if ((((param_1->field_0x28 & 4) != 0) && (uVar7 != local_res10[0])) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Ar.IsSaving() || VerifySerializedFieldsCount == PropertyCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0x90e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    local_44[0] = 0;
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
    }
    if (0 < (int)local_res10[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_res10[0],&local_50,0,local_44);
    }
    if (0 < (int)local_res10[0]) {
      FVar8.Unknown = (ulonglong)this | 1;
      do {
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res18);
        local_res20.ComparisonIndex.Value = 0;
        local_res20.Number = 0;
        local_60.Unknown = FVar8.Unknown;
        if (((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
        }
        local_68 = FField::Construct(&local_res18,(FFieldVariant *)&local_60,&local_res20,RF_NoFlags
                                    );
        if ((local_68 == (FField *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Prop",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                               ,0x8ee,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(local_68->_padding_ + 0x10))(local_68,param_1);
        if (((local_50.Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < local_50.Data + (longlong)local_44[0] * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_48 == local_44[0]) {
          local_48 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_50,local_44);
        }
        iVar1 = local_48 + 1;
        uVar9 = uVar9 + 1;
        *(FField **)(local_50.Data + (longlong)local_48 * 8) = local_68;
        local_48 = iVar1;
      } while ((int)uVar9 < (int)local_res10[0]);
    }
    uVar9 = local_48 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 * 8;
      do {
        uVar6 = uVar7;
        if ((int)uVar9 < local_48) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = *(FField **)(local_50.Data + lVar10);
        lVar10 = lVar10 + -8;
        uVar9 = uVar9 - 1;
        pFVar2->Next = this->ChildProperties;
        this->ChildProperties = pFVar2;
      } while (-1 < (int)uVar9);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// SerializeTaggedProperties @ 141fa6c00

void __thiscall
UStruct::SerializeTaggedProperties
          (UStruct *this,FStructuredArchiveSlot param_1,uchar *param_2,UStruct *param_3,
          uchar *param_4,UObject *param_5)

{
  FArchiveState *pFVar1;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res10);
  if (pFVar1->ArUseUnversionedPropertySerialization != '\0') {
    SerializeUnversionedProperties
              (this,(FStructuredArchiveSlot)local_res10.StructuredArchive,param_2,param_3,param_4);
    return;
  }
  SerializeVersionedTaggedProperties
            (this,(FStructuredArchiveSlot)local_res10.StructuredArchive,param_2,param_3,param_4,
             param_5);
  return;
}

// SerializeVersionedTaggedProperties @ 141fa7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStruct::SerializeVersionedTaggedProperties
          (UStruct *this,FStructuredArchiveSlot param_1,uchar *param_2,UStruct *param_3,
          uchar *param_4,UObject *param_5)

{
  FArchive *pFVar1;
  byte *pbVar2;
  EOverriddenPropertyOperation *pEVar3;
  longlong *plVar4;
  code *pcVar5;
  FSlotBase FVar6;
  uint uVar7;
  FName FVar8;
  UStruct *pUVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  EOverriddenPropertyOperation EVar15;
  int iVar16;
  FArchive *this_00;
  uint *puVar17;
  UClass *pUVar18;
  FOverriddenPropertySet *pFVar19;
  FOverridableManager *this_01;
  FOverriddenPropertySet *pFVar20;
  undefined8 *puVar21;
  FProperty *pFVar22;
  longlong lVar23;
  FString *pFVar24;
  undefined8 uVar25;
  FProperty *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  uchar *puVar29;
  uint uVar30;
  FOverriddenPropertySet *pFVar31;
  FName FVar32;
  longlong lVar33;
  int iVar34;
  wchar_t *pwVar35;
  uchar *puVar36;
  char *pcVar37;
  char *pcVar38;
  byte bVar39;
  FSlotBase local_res10 [3];
  undefined1 auStackY_968 [32];
  byte local_908;
  byte local_906;
  EOverriddenPropertyOperation local_905;
  char local_904;
  uint local_900;
  uint local_8fc;
  FName local_8f8;
  undefined8 *local_8f0;
  FScriptContainerElement *local_8e8;
  undefined1 local_8e0 [8];
  uchar *local_8d8;
  uchar *local_8d0;
  UStruct *local_8c8;
  wchar_t *local_8c0;
  FPropertyTypeName local_8b8;
  FPropertyTypeName local_8b4;
  FPropertyTypeName local_8b0;
  FName local_8ac;
  FName local_8a4;
  FName local_89c;
  undefined8 local_894;
  FName local_888;
  undefined8 local_880;
  FPropertyTag local_878;
  FString local_7f8;
  FString local_7e8;
  FName local_7d8;
  FName local_7d0;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  undefined1 local_7a8 [24];
  FString local_790;
  FString local_780;
  FName local_770;
  TObjectPtr<UStruct>_u_0 local_768;
  TObjectPtr<UField>_u_0 local_760;
  FString local_758;
  ForAnyElementType local_748 [2];
  FProperty *local_738 [2];
  FProperty *local_728 [2];
  FString local_718;
  TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *local_708 [2];
  FString local_6f8;
  FString local_6e8;
  void *local_6d8 [2];
  FString local_6c8;
  FString local_6b8;
  void *local_6a8 [2];
  FGuid local_698;
  FEnableOverridableSerializationScope local_688;
  FPropertyTag local_678;
  TStringBuilderBase<wchar_t> local_5f8;
  wchar_t local_5d8 [32];
  TStringBuilderBase<wchar_t> local_598;
  wchar_t local_578 [32];
  TStringBuilderBase<wchar_t> local_538;
  wchar_t local_518 [32];
  TStringBuilderBase<wchar_t> local_4d8;
  wchar_t local_4b8 [32];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [32];
  TStringBuilderBase<wchar_t> local_418;
  wchar_t local_3f8 [32];
  TStringBuilderBase<wchar_t> local_3b8;
  wchar_t local_398 [64];
  TStringBuilderBase<wchar_t> local_318;
  wchar_t local_2f8 [64];
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_968;
  pFVar31 = (FOverriddenPropertySet *)0x0;
  local_8d8 = param_4;
  local_900 = 0;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_8f8 = (FName)this;
  local_8d0 = param_2;
  local_8c8 = param_3;
  if ((param_2 == (uchar *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                          ,0x652,L"Expecting a non null data ptr"), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  puVar17 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_760.DebugPtr = (UField *)local_8e0;
  local_768.DebugPtr =
       (UStruct *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
       ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_768.ObjectPtr,puVar17);
  pUVar18 = UClass::StaticClass();
  iVar16 = (int)pUVar18->_padding_;
  pFVar20 = pFVar31;
  if ((*(int *)(this->_padding_ + 0x38) < iVar16) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar18->_padding_)) {
    bVar11 = false;
    bVar14 = false;
  }
  else {
    bVar14 = false;
    bVar11 = true;
    if (0x3f2 < (int)((ulonglong)*(undefined8 *)&this_00->field_0x40 >> 0x20)) {
      local_906 = 0;
      if (((this_00->field_0x28 & 4) != 0) &&
         (((local_906 = 0, UE::OS::GUseForCooking != false ||
           (*(longlong *)&this_00->field_0x68 == 0)) ||
          (*(longlong *)(*(longlong *)&this_00->field_0x68 + 0x10) == 0)))) {
        if ((FOverridableManager::OverridableManager == (FOverridableManager *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OverridableManager",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverridableManager.h"
                                ,0x43,L"Expected the overridable manager to be created."), bVar11))
        {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (param_2 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        pFVar19 = FOverridableManager::GetOverriddenPropertiesInternal
                            (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)param_2);
        bVar14 = false;
        pFVar20 = (FOverriddenPropertySet *)0x0;
        if (pFVar19 != (FOverriddenPropertySet *)0x0) {
          local_906 = 2;
          bVar14 = true;
          pFVar20 = pFVar19;
        }
      }
      pFVar1 = (local_res10[0].StructuredArchive)->Formatter->Inner;
      pbVar2 = (byte *)**(undefined8 **)&pFVar1->field_0x8;
      if ((byte *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pbVar2 + 1) {
        (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1);
      }
      else {
        local_906 = *pbVar2;
        **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
      }
      bVar11 = true;
      if ((local_906 & 2) != 0) {
        if (((this_00->field_0x2c & 1) != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!UnderlyingArchive.ArUseCustomPropertyList",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                ,0x668,
                                L"Overridable serialization does not support custom property list"),
           bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this_00->field_0x28 & 4) == 0) {
          local_905 = None;
        }
        else {
          local_905 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                                (pFVar20,(FArchiveSerializedPropertyChain *)0x0,(FProperty *)0x0);
        }
        pFVar1 = (local_res10[0].StructuredArchive)->Formatter->Inner;
        pEVar3 = (EOverriddenPropertyOperation *)**(undefined8 **)&pFVar1->field_0x8;
        if ((EOverriddenPropertyOperation *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pEVar3 + 1) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_905,1);
        }
        else {
          local_905 = *pEVar3;
          **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
        }
        if ((this_00->field_0x28 & 1) != 0) {
          bVar14 = true;
          this_01 = FOverridableManager::Get();
          if (param_2 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          pFVar20 = FOverridableManager::RestoreOverrideOperation
                              (this_01,(TNotNull<UObject_*>)param_2,local_905,true,
                               (bool)((byte)this_00->field_0x2c >> 1 & 1));
        }
      }
    }
  }
  FEnableOverridableSerializationScope::FEnableOverridableSerializationScope
            (&local_688,bVar14,pFVar20);
  if ((*(int *)&this_00->field_0x40 < 0x1f7) || ((this_00->field_0x2b & 0x40) == 0)) {
LAB_141fa80cb:
    local_904 = '\0';
  }
  else {
    cVar13 = (**(code **)(this->_padding_ + 0x360))(this);
    local_904 = '\x01';
    if (cVar13 == '\0') goto LAB_141fa80cb;
  }
  FVar6.StructuredArchive = local_res10[0].StructuredArchive;
  if (((this_00->field_0x2b & 0x40) == 0) || ((this_00->field_0x28 & 2) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((this_00->field_0x28 & 1) != 0) {
    pFVar26 = this->PropertyLink;
    bVar39 = 0;
    if (pFVar26 == (FProperty *)0x0) {
      local_8fc = 0;
    }
    else {
      local_8fc = pFVar26->ArrayDim;
    }
    if ((this_00->field_0x29 & 4) == 0) {
LAB_141fa8124:
      uVar7 = local_8fc;
      FPropertyTag::FPropertyTag(&local_878);
      ::operator<<((FStructuredArchiveSlot)FVar6.StructuredArchive,&local_878);
      if (local_878.Name != (FName)0x0) {
        uVar30 = local_8fc;
        if ((bVar39 != 0) && (uVar30 = uVar7 - 1, (int)uVar30 < 1)) {
          for (pFVar26 = pFVar26->PropertyLinkNext; pFVar26 != (FProperty *)0x0;
              pFVar26 = pFVar26->PropertyLinkNext) {
            bVar11 = FProperty::ShouldSerializeValue(pFVar26,this_00);
            if (bVar11) {
              if (pFVar26 != (FProperty *)0x0) {
                uVar30 = pFVar26->ArrayDim;
                goto LAB_141fa818c;
              }
              break;
            }
          }
          uVar30 = 0;
        }
LAB_141fa818c:
        local_908 = 0;
        local_8fc = uVar30;
        if ((local_904 != '\0') && (local_878.HasPropertyGuid != '\0')) {
          (**(code **)(*(longlong *)local_8f8 + 0x350))(local_8f8,&local_7b0);
          local_894 = 0;
          if ((local_7b0 != (FName)0x0) && (local_878.Name != local_7b0)) {
            local_878.Name = local_7b0;
          }
        }
        pFVar22 = pFVar26;
        if (pFVar26 == (FProperty *)0x0) {
LAB_141fa821a:
          FVar8 = local_8f8;
          FVar10 = local_878.Name;
          if ((bVar14) && ((*(uint *)&this_00->field_0x34 & 0x401000) == 0)) {
            FVar32 = local_8f8;
            if (local_8f8 == (FName)0x0) goto LAB_141fa8259;
            do {
              pUVar18 = StaticClass();
              iVar16 = (int)pUVar18->_padding_;
              if ((iVar16 <= *(int *)(*(longlong *)((longlong)FVar32 + 0x10) + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)FVar32 + 0x10) + 0x30) +
                   (longlong)iVar16 * 8) == &pUVar18->_padding_)) goto LAB_141fa8270;
LAB_141fa8259:
              FVar32 = *(FName *)((longlong)FVar32 + 0x20);
              FVar10 = local_878.Name;
            } while (FVar32 != (FName)0x0);
          }
          goto joined_r0x000141fa82a4;
        }
        bVar11 = IsThisNotNull(pFVar26,"FField::GetFName");
        if (bVar11) {
          local_8ac = (FName)pFVar26->_padding_;
        }
        else {
          local_8ac.ComparisonIndex.Value = 0;
          local_8ac.Number = 0;
        }
        if (local_8ac != local_878.Name) goto LAB_141fa821a;
        goto LAB_141fa8432;
      }
    }
LAB_141fa908f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_141fa9683;
  }
  if ((((this_00->field_0x28 & 4) == 0) && ((this_00->field_0x2b & 5) == 0)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("UnderlyingArchive.IsSaving() || UnderlyingArchive.IsCountingMemory() || UnderlyingArchive.IsObjectReferenceCollector()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                          ,0x7d9,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this_00->field_0x2c & 1) != 0) {
    (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_6a8);
    local_7b8 = *(FName *)((longlong)local_8f8 + 0x18);
    ::FName::ToString(&local_7b8,&local_6b8);
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!UnderlyingArchive.ArUseCustomPropertyList",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                        ,0x7dc,
                        L"Custom property lists only work with binary serialization, not tagged property serialization. Attempted for struct \'%s\' and archive \'%s\'. "
                       );
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
    if (local_6a8[0] != (void *)0x0) {
      FMemory::Free(local_6a8[0]);
    }
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar9 = local_8c8;
  if (local_8c8 == (UStruct *)0x0) {
LAB_141fa91c1:
    local_8fc = local_8fc & 0xffffff00;
  }
  else {
    pUVar18 = UScriptStruct::StaticClass();
    lVar23 = pUVar9->_padding_;
    iVar16 = (int)pUVar18->_padding_;
    if ((*(int *)(lVar23 + 0x38) < iVar16) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar18->_padding_)) goto LAB_141fa91c1;
    local_8fc = (uint)pUVar9[1]._padding_ >> 4 & 0xffffff01;
  }
  if (((this_00->field_0x2a & 4) == 0) && ((local_8d8 != (uchar *)0x0 || (bVar11)))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if ((this_00->field_0x2c & 1) == 0) {
    local_8f0 = (undefined8 *)0x0;
    pFVar26 = *(FProperty **)((longlong)local_8f8 + 0x70);
    puVar21 = local_8f0;
joined_r0x000141fa9219:
    while (local_8f0 = puVar21, pFVar26 != (FProperty *)0x0) {
      bVar14 = FProperty::ShouldSerializeValue(pFVar26,this_00);
      if (bVar14) {
        if (puVar21 == (undefined8 *)0x0) {
          local_900 = pFVar26->ArrayDim;
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(puVar21 + 1);
          local_900 = iVar16 + 1;
        }
        if (iVar16 < (int)local_900) {
          pwVar35 = (wchar_t *)(longlong)iVar16;
          do {
            local_8c0 = pwVar35;
            if (((iVar16 < 0) || (pFVar26->ArrayDim <= iVar16)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_8d0 == (uchar *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_8e8 = (FScriptContainerElement *)
                        (local_8d0 +
                        (longlong)pFVar26->Offset_Internal +
                        (longlong)pFVar26->ElementSize * (longlong)pwVar35);
            if (local_8d8 == (uchar *)0x0) {
LAB_141fa9363:
              puVar36 = (uchar *)0x0;
            }
            else {
              if (local_8c8 == (UStruct *)0x0) {
                iVar34 = 0x7fffffff;
              }
              else {
                iVar34 = local_8c8->PropertiesSize;
              }
              if (iVar34 < pFVar26->ArrayDim * pFVar26->ElementSize + pFVar26->Offset_Internal)
              goto LAB_141fa9363;
              if (((iVar16 < 0) || (pFVar26->ArrayDim <= iVar16)) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar36 = local_8d8 +
                        (longlong)pFVar26->Offset_Internal +
                        (longlong)pFVar26->ElementSize * (longlong)pwVar35;
            }
            if ((puVar21 == (undefined8 *)0x0) && (bVar11)) {
              lVar23 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              pcVar38 = (char *)(lVar23 + 0x9d48);
              if (*pcVar38 == '\0') {
                __dyn_tls_on_demand_init();
              }
              pcVar37 = (char *)(lVar23 + 0xc98);
              if ((*pcVar37 != '\0') &&
                 (EVar15 = FOverridableSerializationLogic::GetOverriddenPropertyOperation
                                     (this_00,pFVar26,(uchar *)local_8e8,puVar36), EVar15 != None))
              goto LAB_141fa93fc;
              if (*pcVar38 == '\0') {
                __dyn_tls_on_demand_init();
              }
              if ((*pcVar37 == '\0') &&
                 (cVar13 = (**(code **)(pFVar26->_padding_ + 0xb8))
                                     (pFVar26,local_8e8,puVar36,*(undefined4 *)&this_00->field_0x34)
                 , cVar13 == '\0')) goto LAB_141fa93fc;
            }
            else {
LAB_141fa93fc:
              lVar23 = 0;
              if ((char)local_8fc != '\0') {
                puVar36 = (uchar *)0x0;
              }
              FPropertyTag::FPropertyTag(&local_678,pFVar26,iVar16,(uchar *)local_8e8);
              if ((local_904 != '\0') &&
                 ((*(longlong *)&this_00->field_0x68 == 0 ||
                  (*(longlong *)(*(longlong *)&this_00->field_0x68 + 0x10) == 0)))) {
                (**(code **)(*(longlong *)local_8f8 + 0x358))(local_8f8,&local_698,local_678.Name);
                FPropertyTag::SetPropertyGuid(&local_678,&local_698);
              }
              local_278.Base = local_258;
              local_278.bIsDynamic = false;
              local_278.bIsExternal = false;
              local_278.CurPos = local_258;
              local_278.End = (wchar_t *)local_58;
              ::FName::ToString(&local_678.Name,&local_278);
              if (local_278.End < local_278.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_278,1);
              }
              *local_278.CurPos = L'\0';
              ::operator<<((FStructuredArchiveSlot)FVar6.StructuredArchive,&local_678);
              lVar33 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
              if (((this_00->field_0x2c & 1) != 0) && (local_8f0 != (undefined8 *)0x0)) {
                lVar23 = *(longlong *)&this_00->field_0x60;
                *(undefined8 *)&this_00->field_0x60 = local_8f0[2];
              }
              FPropertyTag::SerializeTaggedProperty
                        (&local_678,(FStructuredArchiveSlot)FVar6.StructuredArchive,pFVar26,
                         (uchar *)local_8e8,puVar36);
              if (lVar23 != 0) {
                *(longlong *)&this_00->field_0x60 = lVar23;
              }
              lVar23 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
              iVar34 = (int)(lVar23 - lVar33);
              if ((lVar23 - lVar33 != (longlong)iVar34) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IntFitsIn<OutType>(In)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                      ,0xaa,
                                      L"Loss of data caused by narrowing conversion, In = %lld"),
                 bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_678.Size = iVar34;
              if (0 < iVar34) {
                uVar25 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
                (**(code **)(*(longlong *)this_00 + 0x1b8))(this_00,local_678.SizeOffset);
                plVar4 = *(longlong **)&this_00->field_0x8;
                if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
                  if ((this_00->field_0x2a & 1) == 0) {
                    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_678.Size,4);
                  }
                  else {
                    FArchive::SerializeByteOrderSwapped(this_00,(uint *)&local_678.Size);
                  }
                }
                else {
                  local_678.Size = *(int *)*plVar4;
                  *plVar4 = *plVar4 + 4;
                }
                (**(code **)(*(longlong *)this_00 + 0x1b8))(this_00,uVar25);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
            }
            iVar16 = iVar16 + 1;
            pwVar35 = (wchar_t *)((longlong)local_8c0 + 1);
            puVar21 = local_8f0;
            local_8c0 = pwVar35;
          } while (iVar16 < (int)local_900);
        }
      }
      if ((this_00->field_0x2c & 1) == 0) {
        pFVar26 = pFVar26->PropertyLinkNext;
        puVar21 = local_8f0;
      }
      else if ((local_8f0 == (undefined8 *)0x0) ||
              (local_8f0 = (undefined8 *)local_8f0[3], local_8f0 == (undefined8 *)0x0)) {
        pFVar26 = (FProperty *)0x0;
        puVar21 = local_8f0;
      }
      else {
        pFVar26 = (FProperty *)*local_8f0;
        puVar21 = local_8f0;
      }
    }
  }
  else {
    local_8f0 = *(undefined8 **)&this_00->field_0x60;
    if (local_8f0 != (undefined8 *)0x0) {
      pFVar26 = (FProperty *)*local_8f0;
      puVar21 = local_8f0;
      goto joined_r0x000141fa9219;
    }
  }
  local_880 = 0;
  (**(code **)(*(longlong *)this_00 + 0x178))(this_00,&local_880);
LAB_141fa9683:
  FEnableOverridableSerializationScope::~FEnableOverridableSerializationScope(&local_688);
  return;
  while (FVar32 = *(FName *)((longlong)FVar32 + 0x40), FVar10 = local_878.Name, FVar32 != (FName)0x0
        ) {
LAB_141fa8270:
    FProperty::FindRedirectedPropertyName((UStruct *)local_7a8,FVar32);
    FVar10 = (FName)local_7a8._0_8_;
    if ((FName)local_7a8._0_8_ != (FName)0x0) break;
  }
joined_r0x000141fa82a4:
  do {
    local_878.Name = FVar10;
    if (pFVar22 == (FProperty *)0x0) break;
    bVar11 = IsThisNotNull(pFVar22,"FField::GetFName");
    if (bVar11) {
      local_8a4 = (FName)pFVar22->_padding_;
    }
    else {
      local_8a4.ComparisonIndex.Value = 0;
      local_8a4.Number = 0;
    }
    if (local_8a4 == local_878.Name) {
      if (pFVar22 != (FProperty *)0x0) goto LAB_141fa842b;
      break;
    }
    pFVar22 = pFVar22->PropertyLinkNext;
    FVar10 = local_878.Name;
  } while( true );
  pFVar22 = *(FProperty **)((longlong)FVar8 + 0x70);
  while( true ) {
    if ((pFVar22 == (FProperty *)0x0) || (pFVar22 == pFVar26)) goto LAB_141fa8331;
    bVar11 = IsThisNotNull(pFVar22,"FField::GetFName");
    if (bVar11) {
      local_89c = (FName)pFVar22->_padding_;
    }
    else {
      local_89c.ComparisonIndex.Value = 0;
      local_89c.Number = 0;
    }
    if (local_89c == local_878.Name) break;
    pFVar22 = pFVar22->PropertyLinkNext;
  }
  if (pFVar22 != (FProperty *)0x0) goto LAB_141fa842b;
LAB_141fa8331:
  local_8fc = 0;
  puVar21 = (undefined8 *)(**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  local_8f0 = puVar21;
  pFVar22 = (FProperty *)(**(code **)(*(longlong *)FVar8 + 0x308))(FVar8,local_878.Name);
  goto LAB_141fa835f;
LAB_141fa842b:
  local_8fc = pFVar22->ArrayDim;
LAB_141fa8432:
  puVar21 = (undefined8 *)(**(code **)(*(longlong *)this_00 + 0x28))();
  local_8f0 = puVar21;
LAB_141fa835f:
  bVar39 = 0;
  if (local_878.SerializeType == Skipped) goto LAB_141fa907a;
  if ((bVar14) &&
     (UE::ApplyRedirectsToPropertyType
                ((FPropertyTypeName)(int)&local_8b8,
                 (FProperty *)(ulonglong)(uint)local_878.TypeName.Index), local_8b8.Index != 0)) {
    FPropertyTag::SetType(&local_878,local_8b8);
  }
  FPropertyTag::SetProperty(&local_878,pFVar22);
  if ((pFVar22 == (FProperty *)0x0) ||
     (((pFVar22->PropertyFlags & CPF_EditorOnly) != CPF_None && (GForceLoadEditorOnly == false)))) {
LAB_141fa8b61:
    lVar23 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
    lVar23 = lVar23 - (longlong)local_8f0;
    if (local_908 != 0) {
LAB_141fa8b7b:
      if (local_878.Size != lVar23) {
        pFVar24 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)local_8f8,&local_6f8,(UObject *)0x0,None);
        if ((pFVar24->Data).ArrayNum == 0) {
          local_8e8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_8e8 = (pFVar24->Data).AllocatorInstance.Data;
        }
        if (pFVar22 != (FProperty *)0x0) {
          local_900 = (uint)pFVar31 | 1;
          bVar11 = IsThisNotNull(pFVar22,"FField::GetName");
          if (bVar11) {
            ::FName::ToString((FName *)&pFVar22->_padding_,&local_7f8);
          }
          else {
            ::FString::FString(&local_7f8,L"None");
          }
        }
        (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_708);
        local_8b4.Index = local_878.TypeName.Index;
        local_3b8.Base = local_398;
        local_3b8.bIsDynamic = false;
        local_3b8.bIsExternal = false;
        local_3b8.CurPos = local_398;
        local_3b8.End = (wchar_t *)&local_318;
        UE::operator<<(&local_3b8,&local_8b4);
        if (local_3b8.End < (TStringBuilderBase<wchar_t> *)(local_3b8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_3b8,1);
        }
        *local_3b8.CurPos = L'\0';
        local_8c0 = local_3b8.Base;
        local_7c8 = *(FName *)((longlong)local_8f8 + 0x18);
        ::FName::ToString(&local_7c8,&local_790);
        ::FName::ToString(&local_878.Name,&local_718);
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Tag.Size == Loaded",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x7af,
                            L"Size mismatch in %s of %s of type %s. Loaded %lld bytes but expected %d. Package: %s. Property: \'%s\'. Type: \'%s\'."
                           );
        if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_718.Data.AllocatorInstance.Data);
        }
        if (local_790.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_790.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3b8);
        if (local_708[0] !=
            (TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_708[0]);
        }
        pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
        if ((local_900 & 1) != 0) {
          local_900 = local_900 & 0xfffffffe;
          pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
          if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
          }
        }
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar23 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar20 = *(FOverriddenPropertySet **)(lVar23 + 0xca0);
      bVar39 = local_908;
      if (pFVar20 != (FOverriddenPropertySet *)0x0) {
        FOverriddenPropertySet::ConditionallyRestoreOverriddenPropertyOperation
                  (pFVar20,local_878.OverrideOperation,
                   *(FArchiveSerializedPropertyChain **)&this_00->field_0x78,pFVar22);
      }
      goto LAB_141fa907a;
    }
  }
  else {
    if ((pFVar22->ArrayDim <= local_878.ArrayIndex) || (local_878.ArrayIndex < 0)) {
      if (2 < (byte)LogClass._0_1_) {
        (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_728);
        local_418.bIsDynamic = false;
        local_418.bIsExternal = false;
        local_7d0 = *(FName *)((longlong)local_8f8 + 0x18);
        local_418.Base = local_3f8;
        local_418.CurPos = local_3f8;
        local_418.End = (wchar_t *)&local_3b8;
        ::FName::AppendString(&local_7d0,&local_418);
        if (local_418.End < (TStringBuilderBase<wchar_t> *)(local_418.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_418,1);
        }
        *local_418.CurPos = L'\0';
        local_478.Base = local_458;
        local_478.CurPos = local_458;
        local_478.End = (wchar_t *)&local_418;
        local_478.bIsDynamic = false;
        local_478.bIsExternal = false;
        ::FName::AppendString(&local_878.Name,&local_478);
        if (local_478.End < (TStringBuilderBase<wchar_t> *)(local_478.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_478,1);
        }
        *local_478.CurPos = L'\0';
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_418);
        FVar27.Data = (FScriptContainerElement *)local_728[0];
        if (local_728[0] != (FProperty *)0x0) {
LAB_141fa84e7:
          FMemory::Free(FVar27.Data);
          goto LAB_141fa84ec;
        }
LAB_141fa8b56:
        pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
      }
      goto LAB_141fa8b61;
    }
    bVar11 = FProperty::ShouldSerializeValue(pFVar22,this_00);
    if (bVar11) {
      iVar16 = (**(code **)(pFVar22->_padding_ + 0xb0))(pFVar22,&local_878);
      if (iVar16 == 0) {
        (**(code **)(pFVar22->_padding_ + 0x158))(pFVar22,&local_888);
        if (local_878.Type != local_888) {
          if ((byte)LogClass._0_1_ < 3) goto LAB_141fa8b61;
          (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_738);
          local_4d8.Base = local_4b8;
          local_4d8.bIsDynamic = false;
          local_4d8.bIsExternal = false;
          local_4d8.CurPos = local_4b8;
          local_4d8.End = (wchar_t *)&local_478;
          ::FName::AppendString(&local_888,&local_4d8);
          if (local_4d8.End < (TStringBuilderBase<wchar_t> *)(local_4d8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_4d8,1);
          }
          local_538.Base = local_518;
          *local_4d8.CurPos = L'\0';
          local_538.CurPos = local_518;
          local_538.End = (wchar_t *)&local_4d8;
          local_538.bIsDynamic = false;
          local_538.bIsExternal = false;
          ::FName::AppendString(&local_878.Type,&local_538);
          if (local_538.End < (TStringBuilderBase<wchar_t> *)(local_538.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_538,1);
          }
          *local_538.CurPos = L'\0';
          local_598.bIsDynamic = false;
          local_598.bIsExternal = false;
          local_7d8 = *(FName *)((longlong)local_8f8 + 0x18);
          local_598.Base = local_578;
          local_598.CurPos = local_578;
          local_598.End = (wchar_t *)&local_538;
          ::FName::AppendString(&local_7d8,&local_598);
          if (local_598.End < (TStringBuilderBase<wchar_t> *)(local_598.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_598,1);
          }
          *local_598.CurPos = L'\0';
          local_5f8.Base = local_5d8;
          local_5f8.CurPos = local_5d8;
          local_5f8.bIsDynamic = false;
          local_5f8.bIsExternal = false;
          local_5f8.End = (wchar_t *)&local_598;
          ::FName::AppendString(&local_878.Name,&local_5f8);
          if (local_5f8.End < (TStringBuilderBase<wchar_t> *)(local_5f8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_5f8,1);
          }
          *local_5f8.CurPos = L'\0';
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_5f8);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_598);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_538);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4d8);
          if (local_738[0] == (FProperty *)0x0) goto LAB_141fa8b56;
          FMemory::Free(local_738[0]);
          lVar23 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
          lVar23 = lVar23 - (longlong)local_8f0;
          goto LAB_141fa84fb;
        }
        lVar23 = (longlong)local_878.ArrayIndex;
        if (((local_878.ArrayIndex < 0) || (pFVar22->ArrayDim <= local_878.ArrayIndex)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar36 = local_8d0;
        if ((local_8d0 == (uchar *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar29 = local_8d8;
        iVar16 = pFVar22->ElementSize;
        iVar34 = pFVar22->Offset_Internal;
        lVar33 = (longlong)local_878.ArrayIndex;
        if (local_8d8 == (uchar *)0x0) {
LAB_141fa8993:
          puVar29 = (uchar *)0x0;
        }
        else {
          if (local_8c8 == (UStruct *)0x0) {
            iVar28 = 0x7fffffff;
          }
          else {
            iVar28 = local_8c8->PropertiesSize;
          }
          if (iVar28 < pFVar22->ArrayDim * iVar16 + iVar34) goto LAB_141fa8993;
          if (((local_878.ArrayIndex < 0) || (pFVar22->ArrayDim <= local_878.ArrayIndex)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar29 = puVar29 + (longlong)pFVar22->Offset_Internal + lVar33 * pFVar22->ElementSize;
        }
        FPropertyTag::SerializeTaggedProperty
                  (&local_878,(FStructuredArchiveSlot)FVar6.StructuredArchive,pFVar22,
                   puVar36 + (longlong)iVar34 + iVar16 * lVar23,puVar29);
LAB_141fa89ae:
        local_908 = ~((byte)this_00->field_0x29 >> 2) & 1;
        goto LAB_141fa8b61;
      }
      if (iVar16 == 1) goto LAB_141fa89ae;
      if (iVar16 == 2) goto LAB_141fa84ec;
      if (iVar16 != 3) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x767,L"");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_141fa8b61;
      }
      local_908 = 1;
      lVar23 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
      lVar23 = lVar23 - (longlong)puVar21;
      goto LAB_141fa8b7b;
    }
    if ((2 < (byte)LogClass._0_1_) && ((this_00->field_0x29 & 1) != 0)) {
      (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_748);
      local_770 = *(FName *)((longlong)local_8f8 + 0x18);
      ::FName::ToString(&local_770,(FString *)(local_7a8 + 8));
      ::FName::ToString(&local_878.Name,&local_758);
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Skipping_saved__15080bc88,
                 (FLogCategoryBase *)&LogClass);
      if ((FField *)local_758.Data.AllocatorInstance.Data != (FField *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      if ((void *)local_7a8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_7a8._8_8_);
      }
      FVar27.Data = local_748[0].Data;
      if (local_748[0].Data != (FScriptContainerElement *)0x0) goto LAB_141fa84e7;
    }
LAB_141fa84ec:
    lVar23 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
    lVar23 = lVar23 - (longlong)puVar21;
  }
LAB_141fa84fb:
  bVar39 = local_908;
  if (local_878.Size == lVar23) {
    pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
  }
  else {
    if (local_878.Size < 1) {
      pFVar24 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)local_8f8,&local_6c8,(UObject *)0x0,None);
      if ((pFVar24->Data).ArrayNum == 0) {
        local_8e8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_8e8 = (pFVar24->Data).AllocatorInstance.Data;
      }
      if (pFVar22 != (FProperty *)0x0) {
        local_900 = local_900 | 2;
        bVar11 = IsThisNotNull(pFVar22,"FField::GetName");
        if (bVar11) {
          ::FName::ToString((FName *)&pFVar22->_padding_,&local_7e8);
        }
        else {
          ::FString::FString(&local_7e8,L"None");
        }
      }
      (**(code **)(*(longlong *)this_00 + 0x18))(this_00,local_6d8);
      local_8b0.Index = local_878.TypeName.Index;
      local_318.Base = local_2f8;
      local_318.bIsDynamic = false;
      local_318.bIsExternal = false;
      local_318.CurPos = local_2f8;
      local_318.End = (wchar_t *)&local_278;
      UE::operator<<(&local_318,&local_8b0);
      if (local_318.End < (TStringBuilderBase<wchar_t> *)(local_318.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_318,1);
      }
      *local_318.CurPos = L'\0';
      local_7c0 = *(FName *)((longlong)local_8f8 + 0x18);
      ::FName::ToString(&local_7c0,&local_780);
      ::FName::ToString(&local_878.Name,&local_6e8);
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Tag.Size > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                          ,0x7cd,
                          L"Invalid property tag size %d in %s of %s of type %s. Package: %s. Property: \'%s\'. Type: \'%s\'."
                         );
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
      if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_780.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_318);
      if (local_6d8[0] != (void *)0x0) {
        FMemory::Free(local_6d8[0]);
      }
      pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
      if ((local_900 & 2) != 0) {
        local_900 = local_900 & 0xfffffffd;
        pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
        if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
        }
      }
      if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar31 = (FOverriddenPropertySet *)(ulonglong)local_900;
    }
    (**(code **)(*(longlong *)this_00 + 0x1b8))
              (this_00,(longlong)local_878.Size + (longlong)local_8f0);
  }
LAB_141fa907a:
  pFVar26 = pFVar22;
  if ((this_00->field_0x29 & 4) != 0) goto LAB_141fa908f;
  goto LAB_141fa8124;
}

// SetSuperStruct @ 141fab630

void __thiscall UStruct::SetSuperStruct(UStruct *this,UStruct *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SuperStruct).field0_0x0.DebugPtr = param_1;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  return;
}

// StaticLink @ 141fadd60

void __thiscall UStruct::StaticLink(UStruct *this,bool param_1)

{
  FArchiveState local_98;
  
  FArchiveState::FArchiveState(&local_98);
  local_98._padding_ = (longlong)&___7FNullArchive__6B_;
  (**(code **)(this->_padding_ + 0x2c8))(this,&local_98,param_1);
  FArchive::~FArchive((FArchive *)&local_98);
  return;
}

// StaticRegisterNativesUStruct @ 141fade50

void __cdecl UStruct::StaticRegisterNativesUStruct(void)

{
  return;
}

// TagSubobjects @ 141fadfd0

void __thiscall UStruct::TagSubobjects(UStruct *this,EObjectFlags param_1)

{
  FField *this_00;
  bool bVar1;
  TFieldIterator<FProperty> local_28;
  
  UObject::TagSubobjects((UObject *)this,param_1);
  if (this == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = this->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = false;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = this;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  this_00 = local_28.Field;
  while (this_00 != (FField *)0x0) {
    local_28.Field = this_00;
    bVar1 = FField::IsRooted(this_00);
    if (!bVar1) {
      this_00->FlagsPrivate = this_00->FlagsPrivate | param_1;
    }
    local_28.Field = this_00->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    this_00 = local_28.Field;
  }
  return;
}

// Visit @ 141fb0570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPropertyVisitorControlFlow __thiscall
UStruct::Visit(UStruct *this,void *param_1,
              TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
              *param_2,EScope param_3)

{
  EPropertyVisitorControlFlow EVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  void **local_a8;
  void *local_a0;
  undefined8 local_98;
  EScope local_90;
  void *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = (void *)0x0;
  local_a8 = &local_88;
  local_b8 = *(undefined8 *)param_2;
  local_b0 = *(undefined8 *)&param_2->field_0x8;
  local_80 = 0;
  local_78 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_98 = 0;
  local_a0 = param_1;
  local_90 = param_3;
  EVar1 = (**(code **)(this->_padding_ + 0x340))(this,&local_a8,&local_b8);
  if (local_48 != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_78 != 0) {
    plVar2 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar2 = local_50;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return EVar1;
}

// Visit @ 141fb0670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPropertyVisitorControlFlow __thiscall
UStruct::Visit(UStruct *this,void *param_1,
              TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
              *param_2)

{
  EPropertyVisitorControlFlow EVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
  *local_c8;
  code *local_c0;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorPath_const_&,FPropertyVisitorData_const_&)>
  **local_b8;
  void **local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  void *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0 = &local_88;
  local_88 = (void *)0x0;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UStruct::Visit'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
             ::Call;
  local_b8 = &local_c8;
  local_80 = 0;
  local_78 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_c8 = param_2;
  local_a8 = param_1;
  EVar1 = (**(code **)(this->_padding_ + 0x340))(this,&local_b0,&local_c0);
  if (local_48 != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_78 != 0) {
    plVar2 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar2 = local_50;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return EVar1;
}

// Visit @ 141fb0760

EPropertyVisitorControlFlow __thiscall
UStruct::Visit(UStruct *this,FPropertyVisitorContext *param_1,
              TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
              *param_2)

{
  EScope EVar1;
  FProperty *pFVar2;
  EPropertyVisitorControlFlow EVar3;
  longlong lVar4;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_28;
  
  EVar1 = param_1->Scope;
  EVar3 = StepOver;
  lVar4 = 0x78;
  if (EVar1 != ObjectRefs) {
    lVar4 = 0x70;
  }
  pFVar2 = *(FProperty **)((longlong)&this->_padding_ + lVar4);
  while( true ) {
    if (pFVar2 == (FProperty *)0x0) {
      return EVar3;
    }
    local_28._0_8_ = *(undefined8 *)param_2;
    local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
    EVar3 = PropertyVisitorHelpers::VisitProperty(this,pFVar2,param_1,&local_28);
    if (EVar3 == Stop) break;
    if (EVar3 == StepOut) {
      return StepOver;
    }
    lVar4 = 0x50;
    if (EVar1 != ObjectRefs) {
      lVar4 = 0x48;
    }
    pFVar2 = *(FProperty **)((longlong)&pFVar2->_padding_ + lVar4);
  }
  return Stop;
}

// FindPropertyByName @ 14213b630

FProperty * __thiscall UStruct::FindPropertyByName(UStruct *this,FName param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  
  pFVar1 = this->PropertyLink;
  while( true ) {
    if (pFVar1 == (FProperty *)0x0) {
      return (FProperty *)0x0;
    }
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    if (bVar2) {
      FVar3 = (FName)pFVar1->_padding_;
    }
    else {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
    }
    if (FVar3 == param_1) break;
    pFVar1 = pFVar1->PropertyLinkNext;
  }
  return pFVar1;
}

// FindPropertyByOffset @ 14213b6a0

FProperty * __thiscall UStruct::FindPropertyByOffset(UStruct *this,int param_1)

{
  FProperty *pFVar1;
  
  pFVar1 = this->PropertyLink;
  while( true ) {
    if (pFVar1 == (FProperty *)0x0) {
      return (FProperty *)0x0;
    }
    if (pFVar1->Offset_Internal == param_1) break;
    pFVar1 = pFVar1->PropertyLinkNext;
  }
  return pFVar1;
}

// operator() @ 150483670

bool __thiscall `UStruct::Link'::__l24::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FFieldObjectUnion local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar6 = false;
  local_res10.Unknown = local_res10.Unknown & 0xffffffff00000000;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2910729057672887386>);
  if (bVar5) {
    local_res10 = (FFieldObjectUnion)
                  ((FFieldObjectUnion *)(**(longlong **)((longlong)this + 8) + 0x10))->Unknown;
    if ((((local_res10.Unknown & 1) != 0) &&
        ((UObject *)(local_res10.Unknown & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res10.Unknown & 0xfffffffffffffffe));
    }
    FFieldVariant::GetFullName((FFieldVariant *)&local_res10,&local_28);
    pvVar1 = (void *)**(undefined8 **)((longlong)this + 8);
    bVar6 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar6) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_48);
    }
    else {
      ::FString::FString(&local_48,L"None");
    }
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_38,(UObject *)0x0,None);
    bVar4 = true;
    bVar3 = true;
    bVar6 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2910729057672887386>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504837a7;
    }
  }
  bVar5 = false;
LAB_1504837a7:
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  return false;
}

