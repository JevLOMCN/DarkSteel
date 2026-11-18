// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 94

// CallAddReferencedObjects @ 141eddc30

void __thiscall
UClass::CallAddReferencedObjects(UClass *this,UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (int)this->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &this->_padding_)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("This->IsA(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xf38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->CppClassStaticFunctions).AddReferencedObjects ==
      (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xf3a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141eddcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->CppClassStaticFunctions).AddReferencedObjects)(param_1,param_2);
  return;
}

// SerializeDefaultObject @ 141f10a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UClass::SerializeDefaultObject(UClass *this,UObject *param_1,FArchive *param_2)

{
  code *pcVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_1d8 [40];
  FStructuredArchiveFromArchive local_1b0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pcVar1 = *(code **)(this->_padding_ + 0x3c0);
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b0,param_2);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  (*pcVar1)(this,param_1,*(undefined8 *)FVar2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b0);
  return;
}

// StaticClass @ 141f52dc0

UClass * __cdecl UClass::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UClass.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Class",&Z_Registration_Info_UClass_UClass.InnerSingleton,
               StaticRegisterNativesUClass,0x208,8,CLASS_Intrinsic,CASTCLASS_UClass,L"Engine",
               InternalConstructor<UClass>,InternalVTableHelperCtorCaller<UClass>,local_res10,
               UStruct::StaticClass,UPackage::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UClass.InnerSingleton;
}

// UClass @ 141f66eb0

UClass * __thiscall UClass::UClass(UClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UClass__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CppClassStaticFunctions).AddReferencedObjects =
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  this->FirstOwnedClassRep = 0;
  (this->ClassWithin).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ClassConfigName).ComparisonIndex = 0;
  (this->ClassConfigName).Number = 0;
  (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassReps).ArrayNum = 0;
  (this->ClassReps).ArrayMax = 0;
  (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFields).ArrayNum = 0;
  (this->NetFields).ArrayMax = 0;
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bNeedsDynamicSubobjectInstancing = false;
  *(undefined8 *)&this->FuncMap = 0;
  *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->AllFunctionsCache = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  (this->Interfaces).ArrayMax = 0;
  (this->ReferenceSchema).SchemaView = 0;
  (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeFunctionLookupTable).ArrayNum = 0;
  (this->NativeFunctionLookupTable).ArrayMax = 0;
  return this;
}

// UClass @ 141f67020

UClass * __thiscall UClass::UClass(UClass *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UClass__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CppClassStaticFunctions).AddReferencedObjects =
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  this->ClassUnique = 0;
  this->FirstOwnedClassRep = 0;
  this->bCooked = false;
  this->bLayoutChanging = false;
  this->ClassFlags = CLASS_None;
  this->ClassCastFlags = CASTCLASS_None;
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  (this->ClassWithin).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ClassConfigName).ComparisonIndex = 0;
  (this->ClassConfigName).Number = 0;
  (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassReps).ArrayNum = 0;
  (this->ClassReps).ArrayMax = 0;
  (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFields).ArrayNum = 0;
  (this->NetFields).ArrayMax = 0;
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  *(undefined8 *)&this->FuncMap = 0;
  *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
  this->SparseClassData = (void *)0x0;
  this->bNeedsDynamicSubobjectInstancing = false;
  *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->AllFunctionsCache = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  (this->Interfaces).ArrayMax = 0;
  (this->ReferenceSchema).SchemaView = 0;
  (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeFunctionLookupTable).ArrayNum = 0;
  (this->NativeFunctionLookupTable).ArrayMax = 0;
  local_res8 = (FName)this->_padding_;
  FLoadTimeProfilerTracePrivate::OutputClassInfo(this,&local_res8);
  return this;
}

// UClass @ 141f671e0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __thiscall UClass::UClass(UClass *this,FObjectInitializer *param_1,UClass *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FUObjectItem *pFVar7;
  int iVar8;
  short sVar9;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStruct__6B_;
  this->_padding_ = (longlong)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_2 == (UClass *)0x0)) {
    this->_padding_ = 0;
    this->_padding_ = 0;
    if (param_2 == (UClass *)0x0) {
      *(undefined4 *)&this->_padding_ = 0;
      iVar5 = 1;
    }
    else {
      *(int *)&this->_padding_ = (int)param_2->_padding_;
      iVar5 = (int)*(short *)((longlong)&param_2->_padding_ + 4);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_2);
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_2->_padding_;
    iVar5 = (int)*(short *)((longlong)&param_2->_padding_ + 4);
  }
  iVar8 = 1;
  if (1 < iVar5) {
    iVar8 = iVar5;
  }
  sVar9 = (short)iVar8;
  if ((((longlong)iVar8 != (longlong)sVar9) || (sVar9 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UClass *)(*pcVar3)();
    return pUVar6;
  }
  *(short *)((longlong)&this->_padding_ + 4) = sVar9;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  this->ClassUnique = 0;
  this->FirstOwnedClassRep = 0;
  this->_padding_ = (longlong)&___7UClass__6B_;
  (this->CppClassStaticFunctions).AddReferencedObjects =
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  this->bCooked = false;
  this->bLayoutChanging = false;
  this->ClassFlags = CLASS_None;
  this->ClassCastFlags = CASTCLASS_None;
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  (this->ClassWithin).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ClassConfigName).ComparisonIndex = 0;
  (this->ClassConfigName).Number = 0;
  (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassReps).ArrayNum = 0;
  (this->ClassReps).ArrayMax = 0;
  (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFields).ArrayNum = 0;
  (this->NetFields).ArrayMax = 0;
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  this->SparseClassData = (void *)0x0;
  (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bNeedsDynamicSubobjectInstancing = false;
  *(undefined8 *)&this->FuncMap = 0;
  *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->AllFunctionsCache = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  (this->Interfaces).ArrayMax = 0;
  (this->ReferenceSchema).SchemaView = 0;
  (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeFunctionLookupTable).ArrayNum = 0;
  (this->NativeFunctionLookupTable).ArrayMax = 0;
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(lVar1 + 0xe0) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(lVar1 + 0xe0));
    }
    (this->ClassWithin).field0_0x0 = *(TObjectPtr<UClass>_u_0 *)(lVar1 + 0xe0);
    if ((this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) &&
       (pFVar7 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
       ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    plVar2 = (longlong *)this->_padding_;
    if ((plVar2 != (longlong *)0x0) &&
       (((this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0 ||
         ((this->CppClassStaticFunctions).AddReferencedObjects ==
          (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0)) ||
        (this->ClassVTableHelperCtorCaller == (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)0x0))))
    {
      (**(code **)(*plVar2 + 0x2b8))(plVar2);
      if (this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) {
        this->ClassConstructor = (_func___cdecl_void_FObjectInitializer_ptr *)plVar2[0x16];
      }
      if (this->ClassVTableHelperCtorCaller == (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)0x0) {
        this->ClassVTableHelperCtorCaller =
             (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)plVar2[0x17];
      }
      if ((this->CppClassStaticFunctions).AddReferencedObjects ==
          (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) {
        (this->CppClassStaticFunctions).AddReferencedObjects =
             (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)plVar2[0x18];
      }
      this->ClassCastFlags = this->ClassCastFlags | plVar2[0x1b];
    }
    if (this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
      local_res8 = *(FName *)(lVar1 + 0xe8);
    }
    else {
      ::FName::FName(&local_res8,L"Engine");
    }
    this->ClassConfigName = local_res8;
  }
  return this;
}

// UClass @ 141f67610

UClass * __thiscall
UClass::UClass(UClass *this,EStaticConstructor param_1,FName param_2,uint param_3,uint param_4,
              EClassFlags param_5,EClassCastFlags param_6,wchar_t *param_7,EObjectFlags param_8,
              _func___cdecl_void_FObjectInitializer_ptr *param_9,
              _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_10,
              FUObjectCppClassStaticFunctions *param_11)

{
  UStruct::UStruct((UStruct *)this,EC_StaticConstructor,param_3,param_4,param_8);
  this->_padding_ = (longlong)&___7UClass__6B_;
  this->ClassConstructor = param_9;
  this->ClassVTableHelperCtorCaller = param_10;
  (this->CppClassStaticFunctions).AddReferencedObjects = param_11->AddReferencedObjects;
  this->ClassFlags = param_5 | CLASS_Native;
  this->ClassCastFlags = param_6;
  this->ClassUnique = 0;
  this->FirstOwnedClassRep = 0;
  this->bCooked = false;
  this->bLayoutChanging = false;
  (this->ClassWithin).field0_0x0.DebugPtr = (UClass *)0x0;
  ::FName::FName(&this->ClassConfigName,param_7);
  (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassReps).ArrayNum = 0;
  (this->ClassReps).ArrayMax = 0;
  (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetFields).ArrayNum = 0;
  (this->NetFields).ArrayMax = 0;
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  this->SparseClassData = (void *)0x0;
  (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bNeedsDynamicSubobjectInstancing = false;
  *(undefined8 *)&this->FuncMap = 0;
  *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
  *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->AllFunctionsCache = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
  *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Interfaces).ArrayNum = 0;
  (this->Interfaces).ArrayMax = 0;
  (this->ReferenceSchema).SchemaView = 0;
  (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeFunctionLookupTable).ArrayNum = 0;
  (this->NativeFunctionLookupTable).ArrayMax = 0;
  return this;
}

// ~UClass @ 141f68f50

void __thiscall UClass::~UClass(UClass *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7UClass__6B_;
  pFVar1 = (this->Interfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::GC::FSchemaOwner::Reset(&this->ReferenceSchema);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  }
  *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AllFunctionsCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UFunction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllFunctionsCache);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  }
  *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->FuncMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FuncMap);
  pFVar1 = (this->NetFields).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClassReps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStruct::~UStruct((UStruct *)this);
  return;
}

// AddNativeFunction @ 141f6d240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UClass::AddNativeFunction
          (UClass *this,char *param_1,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res20;
  FString local_18;
  
  ::FName::FName(&local_res20,param_1);
  bVar2 = IsReloadActive();
  if (bVar2) {
    bVar2 = ReplaceNativeFunction(this,local_res20,param_2,true);
    if (bVar2) {
      return;
    }
    if (4 < (byte)LogClass._0_1_) {
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (this->NativeFunctionLookupTable).ArrayNum;
  piVar1 = &(this->NativeFunctionLookupTable).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->NativeFunctionLookupTable).AllocatorInstance,piVar1);
  }
  (this->NativeFunctionLookupTable).ArrayNum = iVar3 + 1;
  pFVar4 = (FName *)((this->NativeFunctionLookupTable).AllocatorInstance.Data +
                    (longlong)iVar3 * 0x10);
  *pFVar4 = local_res20;
  pFVar4[1] = (FName)param_2;
  return;
}

// AddNativeFunction @ 141f6d330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UClass::AddNativeFunction
          (UClass *this,wchar_t *param_1,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2
          )

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res20;
  FString local_18;
  
  ::FName::FName(&local_res20,param_1);
  bVar2 = IsReloadActive();
  if (bVar2) {
    bVar2 = ReplaceNativeFunction(this,local_res20,param_2,true);
    if (bVar2) {
      return;
    }
    if (4 < (byte)LogClass._0_1_) {
      ::FName::ToString(&local_res20,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (this->NativeFunctionLookupTable).ArrayNum;
  piVar1 = &(this->NativeFunctionLookupTable).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->NativeFunctionLookupTable).AllocatorInstance,piVar1);
  }
  (this->NativeFunctionLookupTable).ArrayNum = iVar3 + 1;
  pFVar4 = (FName *)((this->NativeFunctionLookupTable).AllocatorInstance.Data +
                    (longlong)iVar3 * 0x10);
  *pFVar4 = local_res20;
  pFVar4[1] = (FName)param_2;
  return;
}

// AddReferencedObjects @ 141f6d910

void __cdecl UClass::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  UScriptStruct *pUVar4;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  FString *pFVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  wchar_t *pwVar25;
  uint uVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  pUVar12 = CastChecked<UClass,UObject>(param_1);
  iVar16 = (pUVar12->Interfaces).ArrayNum;
  pFVar17 = (pUVar12->Interfaces).AllocatorInstance.Data;
  pFVar24 = pFVar17 + (longlong)iVar16 * 0x10;
  while( true ) {
    if ((pUVar12->Interfaces).ArrayNum != iVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FImplementedInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar17 == pFVar24) break;
    FReferenceCollector::AddStableReferenceFwd(param_2,(FObjectPtr *)pFVar17);
    pFVar17 = pFVar17 + 0x10;
  }
  iVar19 = 0;
  iVar16 = *(int *)&(pUVar12->FuncMap).field_0x28;
  puVar1 = &(pUVar12->FuncMap).field_0x10;
  uVar10 = 1;
  iVar11 = 0;
  iVar21 = 0;
  iVar15 = 0;
  if (iVar16 != 0) {
    puVar22 = *(uint **)&(pUVar12->FuncMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar23 = *puVar22;
    while (uVar23 == 0) {
      iVar19 = iVar19 + 1;
      iVar21 = iVar21 + 0x20;
      iVar11 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_141f6d9fd;
      uVar23 = puVar22[iVar19];
    }
    uVar10 = ~(uVar23 - 1) & uVar23;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    iVar11 = local_res20 + -1 + iVar21;
    if (iVar16 < iVar11) {
      iVar11 = iVar16;
    }
LAB_141f6d9fd:
    iVar15 = *(int *)&(pUVar12->FuncMap).field_0x28;
  }
  uVar23 = *(uint *)&(pUVar12->FuncMap).field_0x28;
  uVar26 = uVar23 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iVar19);
  TStack_88.CurrentBitIndex = iVar11;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar23 >> 5;
  TStack_88._28_4_ = iVar11;
  TStack_88.BaseBitIndex = iVar21;
  uStack_68 = CONCAT44(uStack_9c,
                       *(int *)&(pUVar12->FuncMap).field_0x8 -
                       *(int *)&(pUVar12->FuncMap).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar15 < (int)uVar23)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(pUVar12->FuncMap).field_0x28;
  if (uVar23 != uVar10) {
    puVar3 = *(undefined1 **)&(pUVar12->FuncMap).field_0x20;
    puVar20 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar23 == 0) {
      iVar16 = iVar16 + 1;
      uVar26 = uVar26 + 0x20;
      uVar23 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar16)
      goto LAB_141f6db10;
      uVar23 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar2 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar23 = (uVar26 - 1) + (int)lVar6;
    if ((int)uVar10 < (int)uVar23) {
      uVar23 = uVar10;
    }
  }
LAB_141f6db10:
  while( true ) {
    if (*(int *)&(pUVar12->FuncMap).field_0x8 - *(int *)&(pUVar12->FuncMap).field_0x34 !=
        (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UFunction>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_88.CurrentBitIndex == uVar23) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FReferenceCollector::AddStableReferenceFwd
              (param_2,(FObjectPtr *)
                       (*(longlong *)&pUVar12->FuncMap +
                       ((longlong)TStack_88.CurrentBitIndex * 3 + 1) * 8));
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  FReferenceCollector::AddStableReferenceFwd(param_2,(FObjectPtr *)&pUVar12->ClassWithin);
  cVar9 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (cVar9 == '\0') {
    (**(code **)(param_2->_padding_ + 0x10))(param_2,&pUVar12->ClassDefaultObject);
  }
  else {
    pUVar5 = (pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar5 != (UObject *)0x0) {
      iVar16 = (int)pUVar12->_padding_;
      if (((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar16) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
           &pUVar12->_padding_)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("This->IsA(this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xf38,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((pUVar12->CppClassStaticFunctions).AddReferencedObjects ==
           (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xf3a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (*(pUVar12->CppClassStaticFunctions).AddReferencedObjects)(pUVar5,param_2);
    }
  }
  pwVar25 = L"";
  FReferenceCollector::AddStableReferenceFwd(param_2,(FObjectPtr *)&pUVar12->SparseClassDataStruct);
  pUVar4 = (pUVar12->SparseClassDataStruct).field0_0x0.DebugPtr;
  if ((pUVar4 != (UScriptStruct *)0x0) && (pUVar12->SparseClassData != (void *)0x0)) {
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_2,pUVar4,pUVar12->SparseClassData,(UObject *)pUVar12);
  }
  pUVar13 = UStruct::GetPrivateStaticClass();
  iVar16 = (int)pUVar13->_padding_;
  if (((iVar16 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar16 * 8)
       == &pUVar13->_padding_)) && (pUVar12 != (UClass *)0x0)) {
    UObject::AddReferencedObjects((UObject *)pUVar12,param_2);
    return;
  }
  pFVar14 = GetTypeName<UStruct>(&local_60);
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  pFVar14 = GetFullNameForCastLogError<UObject>(&local_50,(UObject *)pUVar12);
  if ((pFVar14->Data).ArrayNum != 0) {
    pwVar25 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar25,pwVar18);
}

// AssembleReferenceTokenStreams @ 141f6f6b0

void __cdecl UClass::AssembleReferenceTokenStreams(void)

{
  int iVar1;
  UClass *this;
  UClass *pUVar2;
  bool bVar3;
  TIterator local_38;
  FScopedBootTiming local_20;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId7118,"AssembleReferenceTokenStreams (can be optimized)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
               ,0x1bce);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId7118);
  }
  FScopedBootTiming::FScopedBootTiming(&local_20,"AssembleReferenceTokenStreams (can be optimized)")
  ;
  local_38.Index = -1;
  local_38.Array = &GUObjectArray;
  local_38.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_38);
  while (local_38.CurrentObject != (FUObjectItem *)0x0) {
    this = (UClass *)((local_38.CurrentObject)->field1_0x8).Object;
    if (this != (UClass *)0x0) {
      pUVar2 = GetPrivateStaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar2->_padding_)) {
        if ((GExitPurge == false) &&
           ((((uint)this->_padding_ >> 0x11 & 1) == 0 &&
            ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)))) {
          (**(code **)(this->_padding_ + 0x400))(this);
        }
        if ((((uint)this->_padding_ >> 4 & 1) == 0) && ((this->ClassFlags >> 0x16 & 1) == 0)) {
          AssembleReferenceTokenStream(this,false);
        }
      }
    }
    FUObjectArray::TIterator::Advance(&local_38);
  }
  FScopedBootTiming::~FScopedBootTiming(&local_20);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Bind @ 141f711d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UClass::Bind(UClass *this)

{
  longlong *plVar1;
  FUObjectItem *pFVar2;
  FString local_18;
  
  if ((this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) &&
     (pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
     , ((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x39) & 1) != 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 != (longlong *)0x0) &&
     (((this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0 ||
       ((this->CppClassStaticFunctions).AddReferencedObjects ==
        (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0)) ||
      (this->ClassVTableHelperCtorCaller == (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)0x0)))) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) {
      this->ClassConstructor = (_func___cdecl_void_FObjectInitializer_ptr *)plVar1[0x16];
    }
    if (this->ClassVTableHelperCtorCaller == (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)0x0) {
      this->ClassVTableHelperCtorCaller =
           (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)plVar1[0x17];
    }
    if ((this->CppClassStaticFunctions).AddReferencedObjects ==
        (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) {
      (this->CppClassStaticFunctions).AddReferencedObjects =
           (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)plVar1[0x18];
    }
    this->ClassCastFlags = this->ClassCastFlags | plVar1[0x1b];
  }
  if (this->ClassConstructor == (_func___cdecl_void_FObjectInitializer_ptr *)0x0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CanCreateAssetOfClass @ 141f71a90

bool __thiscall UClass::CanCreateAssetOfClass(UClass *this)

{
  return true;
}

// CleanupSparseClassData @ 141f72190

void __thiscall UClass::CleanupSparseClassData(UClass *this)

{
  UScriptStruct *pUVar1;
  
  if (this->SparseClassData != (void *)0x0) {
    pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->SparseClassData,1);
    FMemory::Free(this->SparseClassData);
    this->SparseClassData = (void *)0x0;
  }
  return;
}

// ClearFunctionMapsCaches @ 141f721e0

void __thiscall UClass::ClearFunctionMapsCaches(UClass *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<FName,UFunction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>_>
  *this_00;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  this_00 = &this->AllFunctionsCache;
  bVar3 = 1 < *(int *)&(this->AllFunctionsCache).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->AllFunctionsCache).field_0xc;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->AllFunctionsCache).field_0x2c;
  *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllFunctionsCache).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 1;
    TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000141f722a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
  return;
}

// ClearSparseClassDataStruct @ 141f728c0

void __thiscall UClass::ClearSparseClassDataStruct(UClass *this,bool param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
  if (pUVar1 != (UScriptStruct *)0x0) {
    if (this->SparseClassData != (void *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->SparseClassData,1);
      FMemory::Free(this->SparseClassData);
      this->SparseClassData = (void *)0x0;
    }
    (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  }
  return;
}

// ConvertFullNameToShortTypeFullName @ 141f75650

FString * __cdecl
UClass::ConvertFullNameToShortTypeFullName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_68.DataPtr = (wchar_t *)0x0;
  local_68.Size = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_38.Size = 0;
  FPackageName::SplitFullObjectPath(&local_18,&local_68,&local_58,&local_48,&local_38,true);
  if ((local_68.Size != 0) && (local_58.Size != 0)) {
    local_18._12_4_ = local_68._12_4_;
    local_18.Size = local_68.Size;
    local_18.DataPtr = local_68.DataPtr;
    FPackageName::ObjectPathToObjectName(&local_28,&local_18);
    if (local_28.Size != local_68.Size) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::Reserve(&local_78,param_1->Size);
      ::FString::AppendChars(&local_78,local_28.DataPtr,local_28.Size);
      ::FString::AppendChars(&local_78,L" ",1);
      ::FString::AppendChars(&local_78,local_58.DataPtr,local_58.Size);
      if (local_48.Size != 0) {
        ::FString::AppendChars(&local_78,L".",1);
        ::FString::AppendChars(&local_78,local_48.DataPtr,local_48.Size);
        if (local_38.Size != 0) {
          ::FString::AppendChars(&local_78,L":",1);
          ::FString::AppendChars(&local_78,local_38.DataPtr,local_38.Size);
        }
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
  uVar1 = *(undefined8 *)&param_1->Size;
  pwVar2 = param_1->DataPtr;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize((FString *)&local_18,pwVar2,(int)uVar1);
  if (__return_storage_ptr__ != pFVar4) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  return __return_storage_ptr__;
}

// ConvertPathNameToShortTypeName @ 141f75820

FString * __cdecl
UClass::ConvertPathNameToShortTypeName
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  TStringView<wchar_t> *pTVar2;
  FString *pFVar3;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar2 = FPackageName::ObjectPathToObjectName(&local_18,&local_28);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)&local_28,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->Size);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  return __return_storage_ptr__;
}

// CreateDefaultObject @ 141f76d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall UClass::CreateDefaultObject(UClass *this)

{
  FFieldVariant *this_00;
  int iVar1;
  UObjectBase *pUVar2;
  UObject *pUVar3;
  _func___cdecl_void_FObjectInitializer_ptr *p_Var4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FLinkerLoad *pFVar10;
  UObject *pUVar11;
  FObjectInitializer *pFVar12;
  UPackage *pUVar13;
  FName FVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  EObjectInitializerOptions EVar17;
  wchar_t *pwVar18;
  undefined1 auStackY_358 [32];
  TFieldIterator<FMulticastSparseDelegateProperty> local_2f8;
  undefined8 local_2e0;
  UClass *local_2d8 [2];
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FObjectInitializer local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_141f77187;
  if (this->bLayoutChanging != false) {
    local_2d8[0] = this;
    `UClass::CreateDefaultObject'::__l5::<lambda_1>::operator()(local_2d8);
  }
  pUVar2 = (UObjectBase *)this->_padding_;
  pwVar18 = L"";
  pUVar8 = (UObject *)0x0;
  if (pUVar2 == (UObjectBase *)0x0) {
LAB_141f76e94:
    pUVar9 = Z_Construct_UClass_UObject_NoRegister();
    if (this != pUVar9) goto LAB_141f77187;
  }
  else {
    UObjectForceRegistration(pUVar2,true);
    if (pUVar2[6].OuterPrivate.ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0) {
      (**(code **)(pUVar2->_padding_ + 0x400))(pUVar2);
    }
    pUVar8 = pUVar2[6].OuterPrivate.ObjectPtr.field0_0x0.DebugPtr;
    if ((GConfig == (FConfigCacheIni *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GConfig",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0x13cf,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UObject *)(*pcVar5)();
      return pUVar8;
    }
    if (GEventDrivenLoaderEnabled == false) {
LAB_141f76e8f:
      if (pUVar8 == (UObject *)0x0) goto LAB_141f76e94;
    }
    else if ((pUVar8 == (UObject *)0x0) || ((*(uint *)&pUVar8->field_0x8 >> 10 & 1) != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentDefaultObject && !ParentDefaultObject->HasAnyFlags(RF_NeedLoad)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x13d2,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar5)();
        return pUVar8;
      }
      goto LAB_141f76e8f;
    }
  }
  if (((((this->ClassFlags >> 0x12 & 1) != 0) && (this->_padding_ == 0)) &&
      (bVar7 = FIsDuplicatingClassForReinstancing::operator_bool
                         (&GIsDuplicatingClassForReinstancing), !bVar7)) &&
     (pFVar10 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this),
     pFVar10 != (FLinkerLoad *)0x0)) {
    if (GEventDrivenLoaderEnabled == false) {
      for (pUVar11 = (UObject *)this->_padding_;
          (pUVar11 != (UObject *)0x0 && (*(UClass **)&pUVar11->field_0x20 == this));
          pUVar11 = *(UObject **)(pUVar11 + 1)) {
        UObject::ConditionalPreload(pUVar11);
      }
    }
    UStruct::StaticLink((UStruct *)this,true);
  }
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    local_2e0 = 0;
    pUVar11 = StaticAllocateObject
                        (this,(UObject *)this->_padding_,(FName)0x0,
                         RF_ArchetypeObject|RF_ClassDefaultObject|RF_Public,Borrowed,false,
                         (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                         (FGCReconstructionGuard *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (UObject *)0x0)) {
      (this->ClassDefaultObject).field0_0x0.DebugPtr = pUVar11;
      if ((pUVar11 == (UObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClassDefaultObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0x1400,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar5)();
        return pUVar8;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar11);
      (this->ClassDefaultObject).field0_0x0.DebugPtr = pUVar11;
    }
    local_2f8.Field = (FField *)this->_padding_;
    local_2f8.InterfaceIndex = -1;
    local_2f8.bIncludeSuper = false;
    local_2f8.bIncludeDeprecated = false;
    local_2f8.bIncludeInterface = false;
    local_2f8.Struct = (UStruct *)this;
    TFieldIterator<FMulticastSparseDelegateProperty>::IterateToNext(&local_2f8);
    pFVar6 = local_2f8.Field;
    while (local_2f8.Field = pFVar6, pFVar6 != (FField *)0x0) {
      pUVar11 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      if (((int)pFVar6[1]._padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar5)();
        return pUVar8;
      }
      if ((pUVar11 == (UObject *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UObject *)(*pcVar5)();
        return pUVar8;
      }
      iVar1 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
      this_00 = &pFVar6[2].Owner;
      if ((this_00->Container).Field == (FField *)0x0) {
        pFVar15 = GetTypeName<USparseDelegateFunction>(&local_2a8);
        if ((pFVar15->Data).ArrayNum != 0) {
          pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar18);
      }
      pUVar9 = USparseDelegateFunction::StaticClass();
      bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
      if ((!bVar7) || ((this_00->Container).Unknown == 0)) {
        pFVar15 = GetTypeName<USparseDelegateFunction>(&local_2c8);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar15 = GetFullNameForCastLogError<UFunction>
                            (&local_2b8,(UFunction *)(this_00->Container).Field);
        if ((pFVar15->Data).ArrayNum != 0) {
          pwVar18 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar18,pwVar16);
      }
      pUVar3 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      FSparseDelegateStorage::RegisterDelegateOffset
                (pUVar3,*(FName *)((this_00->Container).Unknown + 0xf0),
                 (longlong)pUVar11 + ((longlong)iVar1 - (longlong)pUVar3));
      local_2f8.Field = pFVar6->Next;
      TFieldIterator<FMulticastSparseDelegateProperty>::IterateToNext(&local_2f8);
      pFVar6 = local_2f8.Field;
    }
    p_Var4 = this->ClassConstructor;
    EVar17 = InitializeProperties;
    if ((this->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) != CLASS_None) {
      EVar17 = None;
    }
    pFVar12 = FObjectInitializer::FObjectInitializer
                        (&local_298,(this->ClassDefaultObject).field0_0x0.DebugPtr,pUVar8,EVar17,
                         (FObjectInstancingGraph *)0x0);
    (*p_Var4)(pFVar12);
    FObjectInitializer::~FObjectInitializer(&local_298);
    pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    if ((((uint)pUVar13->PackageFlagsPrivate >> 4 & 1) != 0) &&
       (pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this),
       ((uint)pUVar13->PackageFlagsPrivate >> 0x1d & 1) == 0)) {
      pUVar8 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      FVar14 = GetDefaultObjectName(this);
      FVar14 = *(FName *)FVar14;
      pUVar13 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      NotifyRegistrationEvent
                ((FName)pUVar13->_padding_,FVar14,NRT_ClassCDO,NRP_Finished,
                 (_func___cdecl_UObject_ptr *)0x0,false,pUVar8);
    }
    (**(code **)(*(longlong *)(this->ClassDefaultObject).field0_0x0.DebugPtr + 0x60))();
  }
LAB_141f77187:
  return (this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// CreateLinkAndAddChildFunctionsToMap @ 141f77230

void __thiscall
UClass::CreateLinkAndAddChildFunctionsToMap
          (UClass *this,FClassFunctionLinkInfo *param_1,uint param_2)

{
  uchar *puVar1;
  TObjectPtr<UFunction> *pTVar2;
  uint uVar3;
  FName FVar4;
  FName *pFVar5;
  TPairInitializer<FName_const_&,TObjectPtr<UFunction>_&&> local_res18;
  FName local_58;
  FName local_50;
  TObjectPtr<UFunction> **local_48;
  FName *local_40;
  
  if (param_2 != 0) {
    local_48 = &local_res18.Value;
    local_40 = &local_58;
    do {
      puVar1 = (uchar *)param_1->FuncNameUTF8;
      FVar4 = (FName)(*param_1->CreateFuncPtr)();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)this->_padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this->_padding_);
      }
      *(longlong *)((longlong)FVar4 + 0x28) = this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      this->_padding_ = (longlong)FVar4;
      pFVar5 = ::FName::FName(&local_50,puVar1);
      local_res18.Value = *(TObjectPtr<UFunction> **)pFVar5;
      AcquireSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
      local_58 = FVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FVar4);
      }
      TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UFunction>_&&>_>
                ((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                  *)&this->FuncMap,&local_res18,(bool *)&local_48);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
      AcquireSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
      pTVar2 = local_res18.Value;
      local_58 = (FName)local_res18.Value;
      if (*(int *)&(this->AllFunctionsCache).field_0x8 !=
          *(int *)&(this->AllFunctionsCache).field_0x34) {
        uVar3 = ::GetTypeHash((FNameEntryId)(uint)local_res18.Value);
        TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
                             *)&this->AllFunctionsCache,(uint)((ulonglong)pTVar2 >> 0x20) + uVar3,
                            &local_58);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
      param_1 = param_1 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// CreatePersistentUberGraphFrame @ 141f773b0

void __thiscall
UClass::CreatePersistentUberGraphFrame
          (UClass *this,UObject *param_1,bool param_2,bool param_3,UClass *param_4)

{
  return;
}

// CreateSparseClassData @ 141f78180

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UClass::CreateSparseClassData(UClass *this)

{
  int iVar1;
  UScriptStruct *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  UClass *this_01;
  void *pvVar9;
  uint uVar10;
  longlong lVar11;
  UScriptStruct *pUVar12;
  FString local_68;
  FString local_58;
  FString local_48;
  FDestructionSentinel local_38;
  
  if ((this->SparseClassData != (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SparseClassData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1a12,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  pUVar12 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
  if (pUVar12 != (UScriptStruct *)0x0) {
    uVar10 = (uint)*(short *)((longlong)&pUVar12->_padding_ + 4);
    pvVar8 = FMemory::Malloc((longlong)(int)((int)pUVar12->_padding_ + -1 + uVar10 & -uVar10),uVar10
                            );
    pUVar12 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
    this->SparseClassData = pvVar8;
    (**(code **)(pUVar12->_padding_ + 0x2f8))(pUVar12,pvVar8);
  }
  pvVar8 = this->SparseClassData;
  if (pvVar8 == (void *)0x0) {
    return (void *)0x0;
  }
  this_01 = (UClass *)UStruct::GetSuperStruct((UStruct *)this);
  if (this_01 == (UClass *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    pvVar9 = GetSparseClassData(this_01,ArchetypeIfNull);
    pvVar8 = this->SparseClassData;
  }
  pUVar12 = (UScriptStruct *)0x0;
  if (this->_padding_ != 0) {
    pUVar12 = *(UScriptStruct **)(this->_padding_ + 0x120);
  }
  if (pvVar9 != (void *)0x0) {
    this_00 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
    if (pUVar12 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar12->_padding_;
      if (((int)this_00->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar12->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pvVar8 = this->SparseClassData;
      if (bVar4) {
        UScriptStruct::CopyScriptStruct(pUVar12,pvVar8,pvVar9,1);
        goto LAB_141f783bb;
      }
    }
    if (this_00 != (UScriptStruct *)0x0) {
      iVar1 = (int)this_00->_padding_;
      if (((int)pUVar12->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
          &this_00->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        UScriptStruct::CopyScriptStruct(this_00,pvVar8,pvVar9,1);
        goto LAB_141f783bb;
      }
    }
    if (2 < (byte)LogClass._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar12,&local_48,(UObject *)0x0);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(this->SparseClassDataStruct).field0_0x0.DebugPtr,&local_68,
                 (UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141f783bb:
  pvVar8 = this->SparseClassData;
  pUVar12 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreUObjectDelegates::OnPostInitSparseClassData,(FWriteAccessScope *)&local_38);
  bVar4 = false;
  FCoreUObjectDelegates::OnPostInitSparseClassData._28_4_ =
       FCoreUObjectDelegates::OnPostInitSparseClassData._28_4_ + 1;
  uVar10 = FCoreUObjectDelegates::OnPostInitSparseClassData._16_4_ - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (int)FCoreUObjectDelegates::OnPostInitSparseClassData._16_4_) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pvVar8 = (void *)(*pcVar3)();
        return pvVar8;
      }
      if (((*(int *)(lVar11 + 8 + FCoreUObjectDelegates::OnPostInitSparseClassData._8_8_) == 0) ||
          (plVar2 = *(longlong **)(lVar11 + FCoreUObjectDelegates::OnPostInitSparseClassData._8_8_),
          plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,this,pUVar12,pvVar8), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  FCoreUObjectDelegates::OnPostInitSparseClassData._28_4_ =
       FCoreUObjectDelegates::OnPostInitSparseClassData._28_4_ + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::OnPostInitSparseClassData,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this->SparseClassData;
}

// DeferredRegister @ 141f789a0

void __thiscall
UClass::DeferredRegister(UClass *this,UClass *param_1,wchar_t *param_2,wchar_t *param_3)

{
  longlong lVar1;
  
  UObjectBase::DeferredRegister((UObjectBase *)this,param_1,param_2,param_3);
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    this->ClassFlags =
         this->ClassFlags |
         *(EClassFlags *)(lVar1 + 0xd4) &
         (CLASS_ConfigDoNotCheckDefaults|CLASS_GlobalUserConfig|CLASS_Deprecated|
          CLASS_HasInstancedReference|CLASS_DefaultToInstanced|CLASS_NeedsDeferredDependencyLoading|
          CLASS_Const|CLASS_PerPlatformConfig|CLASS_PerObjectConfig|CLASS_NotPlaceable|
          CLASS_ProjectUserConfig|CLASS_Optional|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig);
    this->ClassCastFlags = this->ClassCastFlags | *(EClassCastFlags *)(lVar1 + 0xd8);
  }
  return;
}

// DestroyPersistentUberGraphFrame @ 141f78c40

void __thiscall UClass::DestroyPersistentUberGraphFrame(UClass *this,UObject *param_1,bool param_2)

{
  return;
}

// FindArchetype @ 141f7ae60

UObject * __thiscall UClass::FindArchetype(UClass *this,UClass *param_1,FName param_2)

{
  return (UObject *)0x0;
}

// FindCommonBase @ 141f7ae70

UClass * __cdecl UClass::FindCommonBase(TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  int iVar6;
  
  if (param_1->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InClasses.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0x1971,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UClass *)(*pcVar3)();
      return pUVar5;
    }
  }
  if (param_1->ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UClass *)(*pcVar3)();
      return pUVar5;
    }
  }
  iVar6 = 1;
  pUVar5 = *(UClass **)(param_1->AllocatorInstance).Data;
  do {
    if ((iVar6 < 0) || (param_1->ArrayNum <= iVar6)) {
      return pUVar5;
    }
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UClass *)(*pcVar3)();
        return pUVar5;
      }
    }
    lVar2 = *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8);
    if (pUVar5 == (UClass *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClassA",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1963,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UClass *)(*pcVar3)();
        return pUVar5;
      }
    }
    if (lVar2 != 0) {
      if (pUVar5 == (UClass *)0x0) goto LAB_141f7afb5;
      do {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) break;
LAB_141f7afb5:
        pUVar5 = (UClass *)pUVar5->_padding_;
      } while (pUVar5 != (UClass *)0x0);
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

// FindCommonBase @ 141f7aff0

UClass * __cdecl UClass::FindCommonBase(UClass *param_1,UClass *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if ((param_1 == (UClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClassA",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0x1963,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UClass *)(*pcVar2)();
    return pUVar4;
  }
  if (param_2 != (UClass *)0x0) {
    pUVar4 = param_1;
    if (param_1 == (UClass *)0x0) goto LAB_141f7b059;
    do {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return pUVar4;
      }
LAB_141f7b059:
      pUVar4 = (UClass *)pUVar4->_padding_;
      param_1 = (UClass *)0x0;
    } while (pUVar4 != (UClass *)0x0);
  }
  return param_1;
}

// FindFunctionByName @ 141f7bdd0

UFunction * __thiscall UClass::FindFunctionByName(UClass *this,FName param_1,Type param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  FName FVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,TObjectPtr<UFunction>_> *pTVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  FPlatformRWLock *SRWLock;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  UClass *pUVar15;
  FScriptContainerElement *pFVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  FLLMScope local_res8 [2];
  FName local_res10;
  undefined1 local_res18 [16];
  UClass *local_78;
  FName local_70;
  UClass **local_68;
  FMemScope local_60;
  FMemScope local_58 [3];
  
  local_res10 = param_1;
  FLLMScope::FLLMScope((FLLMScope *)(local_res18 + 8),UObject,false,None,Default,true);
  FMemScope::FMemScope(local_58,UObject,true);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_UObject_UClass.UniqueName,false,None,Default,true);
  local_70 = LLMTagDeclaration_UObject_UClass.UniqueName;
  FMemScope::FMemScope(&local_60,&local_70,true);
  pUVar11 = (UClass *)this->_padding_;
  pUVar18 = (UClass *)0x0;
  local_78 = (UClass *)0x0;
  if ((param_2 == ExcludeSuper) ||
     (((this->Interfaces).ArrayNum == 0 && (pUVar11 == (UClass *)0x0)))) {
    AcquireSRWLockShared((PSRWLOCK)&this->FuncMapLock);
    pTVar8 = TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                     *)&this->FuncMap,local_res10);
    if ((pTVar8 != (TTuple<FName,TObjectPtr<UFunction>_> *)0x0) &&
       ((pUVar18 = *(UClass **)&pTVar8->field_0x8,
        UE::GC::GIsIncrementalReachabilityPending != false && (pUVar18 != (UClass *)0x0)))) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    goto LAB_141f7c239;
  }
  SRWLock = &this->AllFunctionsCacheLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  FVar5 = local_res10;
  local_70 = local_res10;
  uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  if (*(int *)&(this->AllFunctionsCache).field_0x8 != *(int *)&(this->AllFunctionsCache).field_0x34)
  {
    puVar13 = *(undefined1 **)&(this->AllFunctionsCache).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->AllFunctionsCache).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->AllFunctionsCache).field_0x48 - 1U & local_70.Number + uVar6) *
                    4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)&(this->AllFunctionsCache).field_0x0;
      do {
        if (*(FName *)(lVar3 + (longlong)iVar7 * 0x18) == FVar5) {
          if (((iVar7 != -1) && (lVar3 = lVar3 + (longlong)iVar7 * 0x18, lVar3 != 0)) &&
             (puVar9 = (undefined8 *)(lVar3 + 8), puVar9 != (undefined8 *)0x0)) {
            local_78 = (UClass *)*puVar9;
            goto LAB_141f7c240;
          }
          break;
        }
        iVar7 = *(int *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockShared((PSRWLOCK)&this->FuncMapLock);
  pTVar8 = TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                   *)&this->FuncMap,local_res10);
  if (pTVar8 == (TTuple<FName,TObjectPtr<UFunction>_> *)0x0) {
    pUVar10 = (UClass *)0x0;
  }
  else {
    pUVar10 = *(UClass **)&pTVar8->field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
  }
  local_78 = pUVar10;
  ReleaseSRWLockShared((PSRWLOCK)&this->FuncMapLock);
  if (local_78 != (UClass *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    local_70 = (FName)&local_res10;
    local_68 = &local_78;
    TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>
              ((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
                *)&this->AllFunctionsCache,
               (TPairInitializer<FName_const_&,UFunction_*_const_&> *)local_res18,(bool *)&local_70)
    ;
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    goto LAB_141f7c246;
  }
  if (0 < (this->Interfaces).ArrayNum) {
    iVar7 = (this->Interfaces).ArrayNum;
    pFVar14 = (this->Interfaces).AllocatorInstance.Data;
    pFVar16 = pFVar14 + (longlong)iVar7 * 0x10;
    while( true ) {
      if ((this->Interfaces).ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FImplementedInterface_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar14 == pFVar16) break;
      if (*(UClass **)pFVar14 == (UClass *)0x0) {
        local_78 = (UClass *)0x0;
      }
      else {
        local_78 = (UClass *)FindFunctionByName(*(UClass **)pFVar14,local_res10,IncludeSuper);
        if (local_78 != (UClass *)0x0) break;
      }
      pFVar14 = pFVar14 + 0x10;
    }
  }
  pUVar10 = pUVar18;
  if (pUVar11 != (UClass *)0x0) {
    pUVar10 = (UClass *)FindFunctionByName(pUVar11,local_res10,IncludeSuper);
  }
  pUVar11 = pUVar10;
  if ((local_78 != (UClass *)0x0) &&
     (pUVar15 = pUVar10, pUVar17 = pUVar18, pUVar11 = local_78, pUVar10 != (UClass *)0x0)) {
    do {
      if (pUVar17 != (UClass *)0x0) break;
      if (pUVar15 == (UClass *)0x0) {
LAB_141f7c090:
        pUVar17 = pUVar18;
      }
      else {
        pUVar11 = GetPrivateStaticClass();
        iVar7 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar7) ||
           (pUVar17 = pUVar15,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
           &pUVar11->_padding_)) goto LAB_141f7c090;
      }
      plVar1 = &pUVar15->_padding_;
      pUVar15 = (UClass *)*plVar1;
    } while ((UClass *)*plVar1 != (UClass *)0x0);
    pUVar15 = pUVar18;
    pUVar11 = local_78;
    if (local_78 != (UClass *)0x0) {
      do {
        if (pUVar15 != (UClass *)0x0) goto LAB_141f7c0f1;
        if (pUVar11 == (UClass *)0x0) {
LAB_141f7c0e0:
          pUVar15 = pUVar18;
        }
        else {
          pUVar12 = GetPrivateStaticClass();
          iVar7 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar7) ||
             (pUVar15 = pUVar11,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
             &pUVar12->_padding_)) goto LAB_141f7c0e0;
        }
        pUVar11 = (UClass *)pUVar11->_padding_;
      } while (pUVar11 != (UClass *)0x0);
      pUVar11 = local_78;
      if (pUVar15 != (UClass *)0x0) {
LAB_141f7c0f1:
        pUVar11 = local_78;
        if (((pUVar15->ClassFlags >> 0xe & 1) != 0) &&
           (pUVar12 = Z_Construct_UClass_UInterface_NoRegister(), pUVar11 = local_78,
           pUVar15 != pUVar12)) {
          for (; pUVar12 = pUVar18, pUVar11 = local_78, pUVar17 != (UClass *)0x0;
              pUVar17 = (UClass *)pUVar17->_padding_) {
            while ((iVar7 = (int)pUVar12, -1 < iVar7 && (iVar7 < (pUVar17->Interfaces).ArrayNum))) {
              lVar3 = *(longlong *)
                       ((pUVar17->Interfaces).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
              if (lVar3 != 0) {
                iVar2 = (int)pUVar15->_padding_;
                if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
                   (pUVar11 = pUVar10,
                   (longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8)
                   == &pUVar15->_padding_)) goto LAB_141f7c16c;
              }
              pUVar12 = (UClass *)(ulonglong)(iVar7 + 1);
            }
          }
        }
      }
    }
  }
LAB_141f7c16c:
  local_78 = pUVar11;
  AcquireSRWLockShared((PSRWLOCK)&this->FuncMapLock);
  pTVar8 = TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                   *)&this->FuncMap,local_res10);
  if (pTVar8 == (TTuple<FName,TObjectPtr<UFunction>_> *)0x0) {
LAB_141f7c1b6:
    AcquireSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
    local_70 = (FName)&local_res10;
    local_68 = &local_78;
    TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,UFunction_*_const_&>_>
              ((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
                *)&this->AllFunctionsCache,
               (TPairInitializer<FName_const_&,UFunction_*_const_&> *)local_res18,(bool *)&local_70)
    ;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AllFunctionsCacheLock);
    pUVar18 = local_78;
  }
  else {
    pUVar4 = *(UObject **)&pTVar8->field_0x8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      pUVar18 = local_78;
      if (pUVar4 == (UObject *)0x0) goto LAB_141f7c1b6;
    }
    else {
      if (pUVar4 == (UObject *)0x0) goto LAB_141f7c1b6;
      UE::GC::MarkAsReachable(pUVar4);
      pUVar18 = local_78;
    }
  }
LAB_141f7c239:
  local_78 = pUVar18;
  SRWLock = &this->FuncMapLock;
LAB_141f7c240:
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
LAB_141f7c246:
  pUVar11 = local_78;
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope((FLLMScope *)(local_res18 + 8));
  return (UFunction *)pUVar11;
}

// FinishDestroy @ 141f7de30

void __thiscall UClass::FinishDestroy(UClass *this)

{
  int *piVar1;
  
  piVar1 = &(this->NetFields).ArrayMax;
  (this->NetFields).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NetFields).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ClassReps).ArrayMax;
  (this->ClassReps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ClassReps).AllocatorInstance,0,piVar1);
  }
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  if (this->SparseClassData != (void *)0x0) {
    (**(code **)(((this->SparseClassDataStruct).field0_0x0.DebugPtr)->_padding_ + 0x300))();
    FMemory::Free(this->SparseClassData);
    this->SparseClassData = (void *)0x0;
  }
  (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  LOCK();
  this->_padding_ = 0;
  UNLOCK();
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetArchetypeForCDO @ 141f80870

UObject * __thiscall UClass::GetArchetypeForCDO(UClass *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x22] == 0) {
      (**(code **)(*plVar1 + 0x400))(plVar1);
    }
    return (UObject *)plVar1[0x22];
  }
  return (UObject *)0x0;
}

// GetArchetypeForSparseClassData @ 141f808b0

void * __thiscall
UClass::GetArchetypeForSparseClassData(UClass *this,EGetSparseClassDataMethod param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  UScriptStruct *pUVar5;
  UClass *this_00;
  UClass *pUVar6;
  
  this_00 = (UClass *)this->_padding_;
  if ((UClass *)this->_padding_ == (UClass *)0x0) {
    return (void *)0x0;
  }
  while( true ) {
    if (this_00->SparseClassData != (void *)0x0) {
      return this_00->SparseClassData;
    }
    if (param_1 == CreateIfNull) break;
    if (param_1 == ArchetypeIfNull) {
      pUVar6 = (UClass *)this_00->_padding_;
      pUVar5 = (UScriptStruct *)0x0;
      if (pUVar6 != (UClass *)0x0) {
        pUVar5 = (pUVar6->SparseClassDataStruct).field0_0x0.DebugPtr;
      }
      pUVar1 = (this_00->SparseClassDataStruct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar3 = pUVar5 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar5;
      }
      if (!bVar3) break;
    }
    else {
      if (param_1 == ReturnIfNull) {
        return (void *)0x0;
      }
      if (param_1 != DeferIfNull) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0x1a62,L"");
        if (!bVar3) {
          return (void *)0x0;
        }
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
      pUVar6 = (UClass *)this_00->_padding_;
      pUVar5 = (UScriptStruct *)0x0;
      if (pUVar6 != (UClass *)0x0) {
        pUVar5 = (pUVar6->SparseClassDataStruct).field0_0x0.DebugPtr;
      }
      pUVar1 = (this_00->SparseClassDataStruct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar3 = pUVar5 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar5;
      }
      if (!bVar3) {
        return (void *)0x0;
      }
    }
    this_00 = pUVar6;
    if (pUVar6 == (UClass *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar4 = CreateSparseClassData(this_00);
  return pvVar4;
}

// GetAssetRegistryTags @ 141f80b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UClass::GetAssetRegistryTags
          (UClass *this,TArray<UObject::FAssetRegistryTag,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UObject_const_*> *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  FAssetRegistryTagsContext *pFVar9;
  byte bVar10;
  ForElementType<UObject_const_*> *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 auStack_188 [8];
  UClass *pUStack_180;
  int iStack_178;
  int iStack_174;
  ForElementType<UObject_const_*> FStack_170;
  longlong *plStack_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FAssetRegistryTagsContext FStack_108;
  FString aFStack_100 [2];
  undefined4 uStack_d4;
  undefined1 auStack_c8 [32];
  uint *puStack_a8;
  uint uStack_a0;
  int iStack_94;
  void *pvStack_88;
  undefined4 uStack_80;
  FAssetBundleData *pFStack_68;
  bool bStack_53;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = (ForElementType<UObject_const_*> *)(lVar13 + 0xcb8);
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  puVar6 = pFVar11->InlineData;
  for (; pFVar11 !=
         (ForElementType<UObject_const_*> *)(puVar6 + (longlong)*(int *)(lVar13 + 0xcd0) * 8);
      pFVar11 = (ForElementType<UObject_const_*> *)(pFVar11->InlineData + 8)) {
    if (*(UClass **)pFVar11->InlineData == this) {
      return;
    }
  }
  FStack_170 = (ForElementType<UObject_const_*>)this;
  FAssetRegistryTagsContextData::FAssetRegistryTagsContextData
            ((FAssetRegistryTagsContextData *)auStack_c8,(UObject *)this,Uncategorized);
  bStack_53 = *(longlong *)(lVar13 + 0xcb0) != 0;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  pUStack_180 = this;
  if (((pFVar11 <= (ForElementType<UObject_const_*> *)&pUStack_180) &&
      (&pUStack_180 < pFVar11->InlineData + (longlong)*(int *)(lVar13 + 0xcd4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 == *(int *)(lVar13 + 0xcd4)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_const_*>_>
                      (0x808,pFVar3,(int *)(lVar13 + 0xcd4));
  }
  *(int *)(lVar13 + 0xcd0) = iVar8 + 1;
  pFVar11 = *(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8);
  if (*(ForElementType<UObject_const_*> **)(lVar13 + 0xcc8) ==
      (ForElementType<UObject_const_*> *)0x0) {
    pFVar11 = pFVar3;
  }
  *(UClass **)(pFVar11->InlineData + (longlong)iVar8 * 8) = pUStack_180;
  pcVar5 = *(code **)(this->_padding_ + 0x1b8);
  pFVar9 = FAssetRegistryTagsContext::FAssetRegistryTagsContext
                     (&FStack_108,(FAssetRegistryTagsContextData *)auStack_c8);
  (*pcVar5)(this,pFVar9);
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar13 + 0xcd0);
  if (iVar8 != 0) {
    uVar16 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar16 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = *(longlong *)(lVar13 + 0xcc8);
    if (*(longlong *)(lVar13 + 0xcc8) == 0) {
      lVar12 = lVar13 + 0xcb8;
    }
    if (*(UClass **)(lVar12 + -8 + (longlong)*(int *)(lVar13 + 0xcd0) * 8) == this)
    goto LAB_1420f919b;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!GAssetRegistryTagsObjectsBeingForwarded.IsEmpty() && GAssetRegistryTagsObjectsBeingForwarded.Last() == this"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                     ,0x966,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1420f919b:
  TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Pop
            ((TArray<UObject_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb8
             ),No);
  uVar16 = (auStack_c8._8_4_ - iStack_94) + param_1->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar16 = uStack_a0;
  iStack_160 = 0;
  iStack_148 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  if (uStack_a0 != 0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar18 = *puVar17;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_160;
      iStack_148 = iStack_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1420f9291;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_15c = -uVar18 & uVar18;
    uVar15 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_178 = (int)lVar13;
    uStack_14c = iStack_178 + -1 + iStack_148;
    if ((int)uStack_a0 < (int)uStack_14c) {
      uStack_14c = uStack_a0;
    }
  }
LAB_1420f9291:
  iStack_140 = auStack_c8._8_4_ - iStack_94;
  plStack_168 = (longlong *)auStack_c8;
  pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  uVar18 = uStack_a0 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_144 = uStack_d4;
  iVar8 = (int)uStack_a0 >> 5;
  TStack_130._28_4_ = uStack_d4;
  TStack_130.BaseBitIndex = iStack_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  bVar10 = (byte)uStack_a0;
  plStack_138 = plStack_168;
  TStack_130.Array = pTStack_158;
  if (((int)uStack_a0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 != uStack_a0) {
    puVar17 = (uint *)(auStack_c8 + 0x10);
    if (puStack_a8 != (uint *)0x0) {
      puVar17 = puStack_a8;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar8;
      uVar18 = uVar18 + 0x20;
      iVar8 = iVar8 + 1;
      uVar16 = uStack_a0;
      if ((int)((uStack_a0 - 1) + ((int)(uStack_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_1420f9392;
      uVar16 = puVar17[lVar13 + 1];
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_174 = (int)lVar13;
    uVar16 = iStack_174 + -1 + uVar18;
    if ((int)uStack_a0 < (int)uVar16) {
      uVar16 = uStack_a0;
    }
  }
LAB_1420f9392:
  while( true ) {
    plVar4 = plStack_138;
    if ((int)plStack_138[1] - *(int *)((longlong)plStack_138 + 0x34) != (int)uStack_110) {
      auStack_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_188);
    }
    if (((TStack_130.CurrentBitIndex == uVar16) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_c8 + 0x10))) &&
       (plVar4 == (longlong *)auStack_c8)) break;
    pFVar14 = (param_1->AllocatorInstance).Data;
    lVar13 = (longlong)TStack_130.CurrentBitIndex * 0x30 + *plVar4;
    pFVar2 = (FScriptContainerElement *)(lVar13 + 8);
    if (((pFVar14 <= pFVar2) && (pFVar2 < pFVar14 + (longlong)*piVar1 * 0x20)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar8 + 1;
    pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
    *(undefined8 *)pFVar14 = *(undefined8 *)pFVar2;
    *(undefined8 *)(pFVar14 + 8) = 0;
    *(undefined8 *)(pFVar14 + 8) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar13 + 0x10) = 0;
    *(undefined4 *)(pFVar14 + 0x10) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(pFVar14 + 0x14) = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined8 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(pFVar14 + 0x1c) = *(undefined4 *)(lVar13 + 0x24);
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  uVar15 = (ulonglong)_tls_index;
  plVar4 = *(longlong **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0);
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)FStack_170,aFStack_100,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*TLegacyGetAssetRegistryTags_OutBundles == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x970,L"Object %s has more than one FAssetBundleData!");
      if (aFStack_100[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(aFStack_100[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    **(undefined8 **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0xcb0) =
         pFStack_68;
  }
  uStack_80 = 0;
  if (pvStack_88 != (void *)0x0) {
    FMemory::Free(pvStack_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_c8);
  return;
}

// GetAssetRegistryTags @ 141f80b30

void __thiscall UClass::GetAssetRegistryTags(UClass *this,FAssetRegistryTagsContext param_1)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = *(undefined8 *)&(param_1.Data)->Tags;
  UObject::GetAssetRegistryTags((UObject *)this,(FAssetRegistryTagsContextData *)local_res10);
  return;
}

// GetAuthoritativeClass @ 141f80ee0

UClass * __thiscall UClass::GetAuthoritativeClass(UClass *this)

{
  bool bVar1;
  TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
  *this_00;
  UClass **ppUVar2;
  
  bVar1 = IsReloadActive();
  if (bVar1) {
    this_00 = GetClassesToReinstanceForHotReload();
    ppUVar2 = TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
              ::Find((TMapBase<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
                      *)this_00,this);
    if ((ppUVar2 != (UClass **)0x0) && (*ppUVar2 != (UClass *)0x0)) {
      this = *ppUVar2;
    }
  }
  return this;
}

// GetConfigName @ 141f812e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall UClass::GetConfigName(UClass *this,FString *__return_storage_ptr__)

{
  FName *this_00;
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FString *pFVar4;
  FName *pFVar5;
  FConfigBranch *pFVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_298 [32];
  FName local_268;
  FString local_260;
  FString local_250;
  FString local_240;
  FConfigContext local_228;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = &this->ClassConfigName;
  bVar2 = FConfigCacheIni::IsKnownConfigName(GConfig,*this_00);
  if (bVar2) {
    ::FName::ToString(this_00,__return_storage_ptr__);
  }
  else {
    FVar1 = *this_00;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_268);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    if (FVar1 == FVar7) {
      ::FString::FString(__return_storage_ptr__,&GEditorIni);
    }
    else {
      FVar1 = *this_00;
      FVar3 = FNameEntryId::FromValidEName((EName)&local_268);
      FVar8.Number = 0;
      FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
      if (FVar1 == FVar8) {
        ::FString::FString(__return_storage_ptr__,&GEditorSettingsIni);
      }
      else {
        FVar1 = *this_00;
        FVar3 = FNameEntryId::FromValidEName((EName)&local_268);
        FVar9.Number = 0;
        FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar3.Value);
        if (FVar1 == FVar9) {
          ::FString::FString(__return_storage_ptr__,&GEditorLayoutIni);
        }
        else {
          FVar1 = *this_00;
          FVar3 = FNameEntryId::FromValidEName((EName)&local_268);
          FVar10.Number = 0;
          FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar3.Value);
          if (FVar1 == FVar10) {
            ::FString::FString(__return_storage_ptr__,&GEditorKeyBindingsIni);
          }
          else if (*this_00 == (FName)0x0) {
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogClass);
            ::FString::FString(__return_storage_ptr__,L"");
          }
          else {
            local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.Data.ArrayNum = 0;
            local_260.Data.ArrayMax = 0;
            pFVar4 = ::FName::ToString(this_00,&local_240);
            pwVar12 = L"";
            if ((pFVar4->Data).ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
            }
            pFVar5 = ::FName::FName(&local_268,pwVar11);
            pFVar6 = FConfigCacheIni::FindBranch(GConfig,*pFVar5,&local_260);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
            if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.Data.AllocatorInstance.Data);
            }
            if (pFVar6 == (FConfigBranch *)0x0) {
              local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_250.Data.ArrayNum = 0;
              local_250.Data.ArrayMax = 0;
              local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_260.Data.ArrayNum = 0;
              local_260.Data.ArrayMax = 0;
              FConfigContext::FConfigContext(&local_228,GConfig,true,&local_260,(FConfigFile *)0x0);
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              pFVar4 = ::FName::ToString(this_00,&local_240);
              if ((pFVar4->Data).ArrayNum != 0) {
                pwVar12 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
              }
              FConfigContext::Load(&local_228,pwVar12,&local_250);
              if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_240.Data.AllocatorInstance.Data);
              }
              FConfigContext::~FConfigContext(&local_228);
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_250.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_250.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_250.Data.ArrayMax;
            }
            else {
              ::FString::FString(__return_storage_ptr__,&pFVar6->IniPath);
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultObjectName @ 141f81870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall UClass::GetDefaultObjectName(UClass *this)

{
  void *pvVar1;
  FName in_RDX;
  undefined1 auStack_888 [32];
  FName local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  pvVar1 = FGenericPlatformString::Memcpy(local_838,L"Default__",0x12);
  local_858.CurPos = (wchar_t *)((longlong)pvVar1 + 0x12);
  local_868[0] = (FName)this->_padding_;
  ::FName::AppendString(local_868,&local_858);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  ::FName::FName((FName *)in_RDX,local_858.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return in_RDX;
}

// GetDefaultObjectPreloadDependencies @ 141f81960

void __thiscall
UClass::GetDefaultObjectPreloadDependencies
          (UClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetDefaultObjectSubobjects @ 141f81970

void __thiscall
UClass::GetDefaultObjectSubobjects
          (UClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *this_00;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    (**(code **)(this->_padding_ + 0x400))();
  }
  this_00 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this_00 != (UObject *)0x0) {
    UObject::GetDefaultSubobjects(this_00,param_1);
    return;
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return;
}

// GetDefaultPropertiesFeedbackContext @ 141f819f0

FFeedbackContext * __cdecl UClass::GetDefaultPropertiesFeedbackContext(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&FeedbackContextImportDefaults);
      FeedbackContextImportDefaults._padding_ = (longlong)&___7FFeedbackContextImportDefaults__6B_;
      atexit(`UClass::GetDefaultPropertiesFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__FeedbackContextImportDefaults__);
      _Init_thread_footer(&::_TSS0);
      return (FFeedbackContext *)&FeedbackContextImportDefaults;
    }
  }
  return (FFeedbackContext *)&FeedbackContextImportDefaults;
}

// GetDefaultSubobjectByName @ 141f81a80

UObject * __thiscall UClass::GetDefaultSubobjectByName(UClass *this,FName param_1)

{
  UObject *pUVar1;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    (**(code **)(this->_padding_ + 0x400))();
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = UObject::GetDefaultSubobjectByName(pUVar1,param_1);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetDesc @ 141f81b50

FString * __thiscall UClass::GetDesc(UClass *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDescription @ 141f81b80

FString * __thiscall UClass::GetDescription(UClass *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPersistentUberGraphFrame @ 141f83b30

uchar * __thiscall
UClass::GetPersistentUberGraphFrame(UClass *this,UObject *param_1,UFunction *param_2)

{
  return (uchar *)0x0;
}

// GetPrefixCPP @ 141f83b40

wchar_t * __thiscall UClass::GetPrefixCPP(UClass *this)

{
  EClassFlags EVar1;
  ulonglong uVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  EVar1 = this->ClassFlags;
  bVar6 = false;
  do {
    if (bVar6) goto LAB_141f83b9d;
    uVar2 = this->_padding_;
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    this = (UClass *)this->_padding_;
    bVar6 = uVar2 == *(uint *)CONCAT44(extraout_var,FVar3.Value);
  } while (this != (UClass *)0x0);
  if (uVar2 == *(uint *)CONCAT44(extraout_var,FVar3.Value)) {
LAB_141f83b9d:
    pwVar5 = L"ADEPRECATED_";
    pwVar4 = L"A";
  }
  else {
    pwVar5 = L"UDEPRECATED_";
    pwVar4 = L"U";
  }
  if ((EVar1 & CLASS_Deprecated) != CLASS_None) {
    pwVar4 = pwVar5;
  }
  return pwVar4;
}

// GetPreloadDependencies @ 141f84610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UClass::GetPreloadDependencies(UClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UScriptStruct>_u_0 *pTVar1;
  UScriptStruct *pUVar2;
  UObjectBaseUtility *this_00;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  ICppStructOps *this_01;
  FFieldClass *pFVar11;
  TTuple<FProperty_const_*,void_const_*> *pTVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  uint uVar14;
  undefined1 auStackY_7a8 [32];
  TObjectPtr<UScriptStruct>_u_0 local_758;
  FString local_750;
  FPropertyValueIterator local_740;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  UStruct::GetPreloadDependencies((UStruct *)this,param_1);
  local_758 = (TObjectPtr<UScriptStruct>_u_0)(this->SparseClassDataStruct).field0_0x0.DebugPtr;
  if (local_758.DebugPtr != (UScriptStruct *)0x0) {
    pTVar1 = (TObjectPtr<UScriptStruct>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= &local_758) && (&local_758 < pTVar1 + param_1->ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = param_1->ArrayNum;
    if (iVar8 == param_1->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar8 + 1;
    ((TObjectPtr<UScriptStruct>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8))->
    DebugPtr = (UScriptStruct *)local_758;
    pvVar10 = GetSparseClassData(this,ArchetypeIfNull);
    this_01 = UScriptStruct::GetCppStructOps((this->SparseClassDataStruct).field0_0x0.DebugPtr);
    if (this_01 != (ICppStructOps *)0x0) {
      UScriptStruct::ICppStructOps::GetPreloadDependencies(this_01,pvVar10,param_1);
    }
    pUVar2 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
    pFVar11 = FStructProperty::StaticClass();
    FPropertyValueIterator::FPropertyValueIterator
              (&local_740,pFVar11,(UStruct *)pUVar2,pvVar10,FullRecursion,IncludeDeprecated);
    while( true ) {
      if (local_740.PropertyIteratorStack.ArrayNum < 1) break;
      pTVar12 = FPropertyValueIterator::operator->(&local_740);
      this_00 = *(UObjectBaseUtility **)(*(longlong *)pTVar12 + 0x70);
      if (this_00[4].field_0x14 == '\0') {
        UObjectBaseUtility::GetPathName(this_00,&local_750,(UObject *)0x0);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPrepareCppStructOpsCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x8f6,
                           L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                          );
        if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar3 = *(undefined8 **)&this_00[4].field_0x18;
      if (puVar3 != (undefined8 *)0x0) {
        pTVar12 = FPropertyValueIterator::operator->(&local_740);
        puVar4 = (uint *)*puVar3;
        uVar5 = *(undefined8 *)&pTVar12->field_0x8;
        if ((*(byte *)((longlong)puVar4 + 0x17) & 4) != 0) {
          if (((*puVar4 & 0x200) == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar14 = 0;
          for (uVar9 = *puVar4 & 0x1ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar14 = uVar14 + 1;
          }
          (**(code **)(puVar4 + (ulonglong)uVar14 * 2 + 6))(uVar5,param_1);
        }
      }
      FPropertyValueIterator::IterateToNext(&local_740);
    }
    FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_740;
    if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar13 = local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
              ((FPropertyValueStackEntry *)FVar13,local_740.PropertyIteratorStack.ArrayNum);
    if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FMemory::Free((void *)local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetPrivateStaticClass @ 141f84ab0

UClass * __cdecl UClass::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UClass.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"Class",&Z_Registration_Info_UClass_UClass.InnerSingleton,
               StaticRegisterNativesUClass,0x208,8,CLASS_Intrinsic,CASTCLASS_UClass,L"Engine",
               InternalConstructor<UClass>,InternalVTableHelperCtorCaller<UClass>,local_res10,
               UStruct::StaticClass,UPackage::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UClass.InnerSingleton;
}

// GetPropertyLinkFlags @ 141f86030

EStructPropertyLinkFlags __thiscall
UClass::GetPropertyLinkFlags(UClass *this,UStruct *param_1,FProperty *param_2)

{
  if (((param_1->Script).ArrayNum == 0) &&
     ((this->ClassFlags & (CLASS_Intrinsic|CLASS_Native)) != CLASS_None)) {
    if (((uint)(int)param_2->PropertyFlags >> 0xe & 1) != 0) {
      return ~(byte)(this->ClassFlags >> 10) & LinkPostConstruct;
    }
    return None;
  }
  return LinkDestructor|LinkPostConstruct;
}

// GetRestoreForUObjectOverwrite @ 141f86570

FRestoreForUObjectOverwrite * __thiscall UClass::GetRestoreForUObjectOverwrite(UClass *this)

{
  FRestoreForUObjectOverwrite *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FRestoreForUObjectOverwrite *pFVar3;
  FRestoreForUObjectOverwrite FVar4;
  
  pFVar3 = ::operator_new(0x58);
  if (pFVar3 == (FRestoreForUObjectOverwrite *)0x0) {
    return (FRestoreForUObjectOverwrite *)0x0;
  }
  pFVar3[1] = (FRestoreForUObjectOverwrite)this;
  *pFVar3 = (FRestoreForUObjectOverwrite)&___7FRestoreClassInfo__6B_;
  *(TObjectPtr<UClass>_u_0 *)(pFVar3 + 2) = (this->ClassWithin).field0_0x0;
  FVar4 = (FRestoreForUObjectOverwrite)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((FVar4 == (FRestoreForUObjectOverwrite)0x0) || ((int)this->_padding_ == 0)) {
    FVar4 = (FRestoreForUObjectOverwrite)0x0;
  }
  pFVar3[3] = FVar4;
  pFVar1 = pFVar3 + 9;
  *(EClassFlags *)(pFVar3 + 4) = this->ClassFlags & CLASS_Abstract;
  pFVar3[5] = (FRestoreForUObjectOverwrite)this->ClassCastFlags;
  pFVar3[6] = (FRestoreForUObjectOverwrite)this->ClassConstructor;
  pFVar3[7] = (FRestoreForUObjectOverwrite)this->ClassVTableHelperCtorCaller;
  pFVar3[8] = (FRestoreForUObjectOverwrite)(this->CppClassStaticFunctions).AddReferencedObjects;
  *pFVar1 = (FRestoreForUObjectOverwrite)0x0;
  iVar2 = (this->NativeFunctionLookupTable).ArrayNum;
  _Src = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
  *(int *)(pFVar3 + 10) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&pFVar3[10].field_0x4 = 0;
    return pFVar3;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)pFVar1,iVar2,(int *)&pFVar3[10].field_0x4);
  memcpy(*(FScriptContainerElement **)pFVar1,_Src,(longlong)iVar2 << 4);
  return pFVar3;
}

// GetSparseClassData @ 141f86bf0

void * __thiscall UClass::GetSparseClassData(UClass *this,EGetSparseClassDataMethod param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  
  while( true ) {
    if (this->SparseClassData != (void *)0x0) {
      return this->SparseClassData;
    }
    if (param_1 == CreateIfNull) break;
    if (param_1 == ArchetypeIfNull) {
      pUVar6 = (UClass *)this->_padding_;
      pUVar5 = (UScriptStruct *)0x0;
      if (pUVar6 != (UClass *)0x0) {
        pUVar5 = (pUVar6->SparseClassDataStruct).field0_0x0.DebugPtr;
      }
      pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar3 = pUVar5 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar5;
      }
      if (!bVar3) break;
    }
    else {
      if (param_1 == ReturnIfNull) {
        return (void *)0x0;
      }
      if (param_1 != DeferIfNull) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0x1a62,L"");
        if (!bVar3) {
          return (void *)0x0;
        }
        pcVar2 = (code *)swi(3);
        pvVar4 = (void *)(*pcVar2)();
        return pvVar4;
      }
      pUVar6 = (UClass *)this->_padding_;
      pUVar5 = (UScriptStruct *)0x0;
      if (pUVar6 != (UClass *)0x0) {
        pUVar5 = (pUVar6->SparseClassDataStruct).field0_0x0.DebugPtr;
      }
      pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        bVar3 = pUVar5 == (UScriptStruct *)0x0;
      }
      else {
        bVar3 = pUVar1 == pUVar5;
      }
      if (!bVar3) {
        return (void *)0x0;
      }
    }
    this = pUVar6;
    if (pUVar6 == (UClass *)0x0) {
      return (void *)0x0;
    }
  }
  pvVar4 = CreateSparseClassData(this);
  return pvVar4;
}

// GetSparseClassDataArchetypeStruct @ 141f86ce0

UScriptStruct * __thiscall UClass::GetSparseClassDataArchetypeStruct(UClass *this)

{
  if (this->_padding_ != 0) {
    return *(UScriptStruct **)(this->_padding_ + 0x120);
  }
  return (UScriptStruct *)0x0;
}

// GetSparseClassDataStruct @ 141f86d00

UScriptStruct * __thiscall UClass::GetSparseClassDataStruct(UClass *this)

{
  return (this->SparseClassDataStruct).field0_0x0.DebugPtr;
}

// HasProperty @ 141f8b630

bool __thiscall UClass::HasProperty(UClass *this,FProperty *param_1)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  ulonglong uVar3;
  
  this_00 = &param_1->_padding_;
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  bVar1 = FFieldVariant::IsA((FFieldVariant *)this_00,pUVar2);
  if ((bVar1) && ((*this_00 & 0xfffffffffffffffeU) != 0)) {
    pUVar2 = StaticClass();
    bVar1 = FFieldVariant::IsA((FFieldVariant *)this_00,pUVar2);
    if ((bVar1) && (uVar3 = *this_00 & 0xfffffffffffffffe, uVar3 != 0)) {
      if ((*(int *)(uVar3 + 0x38) <= (int)this->_padding_) &&
         (*(longlong *)(this->_padding_ + (longlong)*(int *)(uVar3 + 0x38) * 8) == uVar3 + 0x30)) {
        return true;
      }
    }
  }
  return false;
}

// HotReloadPrivateStaticClass @ 141f8b780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UClass::HotReloadPrivateStaticClass
          (UClass *this,uint param_1,EClassFlags param_2,EClassCastFlags param_3,wchar_t *param_4,
          _func___cdecl_void_FObjectInitializer_ptr *param_5,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_6,
          FUObjectCppClassStaticFunctions *param_7,UClass *param_8,UClass *param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  UObjectBase *pUVar11;
  FUObjectItem *pFVar12;
  UClass *pUVar13;
  uint uVar14;
  undefined4 in_register_00000014;
  ulonglong uVar15;
  undefined4 in_register_00000084;
  FVTableHelper local_res8 [8];
  undefined1 local_res10 [8];
  FName local_e8;
  TIterator local_e0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  _func___cdecl_void_FObjectInitializer_ptr *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  code *local_60;
  undefined1 *local_58;
  FString local_50;
  
  if (param_1 != (uint)this->_padding_) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FFeedbackContext::FFeedbackContext((FFeedbackContext *)&FeedbackContextImportDefaults);
      FeedbackContextImportDefaults._padding_ = (longlong)&___7FFeedbackContextImportDefaults__6B_;
      atexit(`UClass::GetDefaultPropertiesFeedbackContext'::__l2::
             _dynamic_atexit_destructor_for__FeedbackContextImportDefaults__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c8 = (FName)this->_padding_;
    ::FName::ToString(&local_c8,&local_a0);
    FOutputDevice::LogfImpl
              ((FOutputDevice *)&FeedbackContextImportDefaults,Warning,
               L"Property size mismatch. Will not update class %s (was %d, new %d).");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    return false;
  }
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    (**(code **)(this->_padding_ + 0x400))
              (this,CONCAT44(in_register_00000014,param_1),CONCAT44(in_register_00000084,param_2));
  }
  lVar2 = *(longlong *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  local_a8 = this->ClassConstructor;
  this->ClassConstructor = param_5;
  this->ClassVTableHelperCtorCaller = param_6;
  (this->CppClassStaticFunctions).AddReferencedObjects = param_7->AddReferencedObjects;
  if (5 < (byte)LogClass._0_1_) {
    local_c0 = (FName)this->_padding_;
    ::FName::ToString(&local_c0,&local_90);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  pUVar8 = Z_Construct_UClass_UPackage_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pvVar5 = ThreadLocalStoragePointer;
  uVar15 = (ulonglong)_tls_index;
  (this->ClassWithin).field0_0x0.DebugPtr = pUVar8;
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar15 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"UseVTableConstructors",
               &UseVTableConstructorsCache.bUseVTableConstructors,&GEngineIni);
    _Init_thread_footer(&::_TSS0);
  }
  bVar6 = GIsRetrievingVTablePtr;
  GIsRetrievingVTablePtr = true;
  puVar9 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_58 = local_res10;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar9);
  *(int *)(pFVar10 + 5) = *(int *)(pFVar10 + 5) + 1;
  EnsureRetrievingVTablePtrDuringCtor(L"FVTableHelper()");
  pUVar11 = (UObjectBase *)(*this->ClassVTableHelperCtorCaller)(local_res8);
  UObjectBaseUtility::AtomicallyClearInternalFlags
            ((UObjectBaseUtility *)pUVar11,PendingConstruction);
  *(int *)(pFVar10 + 5) = *(int *)(pFVar10 + 5) + -1;
  GIsRetrievingVTablePtr = bVar6;
  pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar11->InternalIndex);
  if (((ulonglong)((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) == 0) {
    pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar11->InternalIndex);
    if ((((ulonglong)((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    UObjectBase::AtomicallySetFlags(pUVar11,RF_MirroredGarbage);
    pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar11->InternalIndex);
    do {
      lVar3 = (pFVar12->field0_0x0).FlagsAndRefCount;
      uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
      if ((uVar14 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar12 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar3 == (pFVar12->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (pFVar12->field0_0x0).FlagsAndRefCount =
             ((longlong)(int)uVar14 | 0x200000U) << 0x20 | (longlong)(int)lVar3;
      }
      UNLOCK();
    } while (!bVar6);
    UObjectBaseUtility::AtomicallyClearInternalFlags((UObjectBaseUtility *)pUVar11,Async);
  }
  else if (2 < (byte)LogClass._0_1_) {
    local_b8 = (FName)this->_padding_;
    ::FName::ToString(&local_b8,&local_80);
    local_b0 = (pUVar11->NamePrivate).Name;
    ::FName::ToString(&local_b0,&local_50);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_9);
  }
  (this->ClassWithin).field0_0x0.DebugPtr = param_9;
  lVar3 = pUVar11->_padding_;
  if (lVar3 == lVar2) {
    if (1 < (byte)LogClass._0_1_) {
      local_e8 = (FName)this->_padding_;
      ::FName::ToString(&local_e8,&local_70);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_e0.Index = -1;
    local_e0.CurrentObject = (FUObjectItem *)0x0;
    local_e0.Array = &GUObjectArray;
    FUObjectArray::TIterator::Advance(&local_e0);
    while (local_e0.CurrentObject != (FUObjectItem *)0x0) {
      pUVar11 = ((local_e0.CurrentObject)->field1_0x8).Object;
      if (lVar2 == pUVar11->_padding_) {
        pUVar11->_padding_ = lVar3;
      }
      else {
        pUVar13 = GetPrivateStaticClass();
        pUVar8 = (pUVar11->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar13->_padding_;
        if (((iVar1 <= (int)pUVar8->_padding_) &&
            ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) ==
             &pUVar13->_padding_)) &&
           (pUVar8 = CastChecked<UClass,UObject>((UObject *)pUVar11),
           pUVar8->ClassConstructor == local_a8)) {
          pUVar8->ClassConstructor = this->ClassConstructor;
          pUVar8->ClassVTableHelperCtorCaller = this->ClassVTableHelperCtorCaller;
          (pUVar8->CppClassStaticFunctions).AddReferencedObjects = param_7->AddReferencedObjects;
        }
      }
      FUObjectArray::TIterator::Advance(&local_e0);
    }
    if (5 < (byte)LogClass._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
  }
  return true;
}

// ImplementsInterface @ 141f8c7d0

bool __thiscall UClass::ImplementsInterface(UClass *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  int iVar7;
  
  if (((param_1 != (UClass *)0x0) && ((param_1->ClassFlags & CLASS_Interface) != CLASS_None)) &&
     (pUVar6 = Z_Construct_UClass_UInterface_NoRegister(), param_1 != pUVar6)) {
    for (; this != (UClass *)0x0; this = (UClass *)this->_padding_) {
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (this->Interfaces).ArrayNum)); iVar7 = iVar7 + 1) {
        if ((iVar7 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar2 = *(longlong *)((this->Interfaces).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
        if (lVar2 != 0) {
          iVar1 = (int)param_1->_padding_;
          if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
              &param_1->_padding_)) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// InitPropertiesFromCustomList @ 141f8da50

void __thiscall UClass::InitPropertiesFromCustomList(UClass *this,uchar *param_1,uchar *param_2)

{
  return;
}

// InternalCreateDefaultObjectWrapper @ 141f8feb0

void __thiscall UClass::InternalCreateDefaultObjectWrapper(UClass *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f8feb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x400))();
  return;
}

// IsAsset @ 141f8ff80

bool __thiscall UClass::IsAsset(UClass *this)

{
  return false;
}

// IsFunctionImplementedInScript @ 141f900c0

bool __thiscall UClass::IsFunctionImplementedInScript(UClass *this,FName param_1)

{
  return false;
}

// IsNameStableForNetworking @ 141f90260

bool __thiscall UClass::IsNameStableForNetworking(UClass *this)

{
  return true;
}

// IsSafeToSerializeToStructuredArchives @ 141f90430

bool __cdecl UClass::IsSafeToSerializeToStructuredArchives(UClass *param_1)

{
  while( true ) {
    if (param_1 == (UClass *)0x0) {
      return true;
    }
    if ((param_1->ClassFlags & CLASS_MatchedSerializers) == CLASS_None) break;
    param_1 = (UClass *)param_1->_padding_;
  }
  return false;
}

// IsShortTypeName @ 141f90480

bool __cdecl UClass::IsShortTypeName(TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uStack_2c;
  TArrayView<wchar_t_const_,int> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1->Size == 0) {
    return true;
  }
  if (param_1->Size < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                       ,0x234,
                       L"Index out of bounds on StringView: index %i on a view with a length of %i")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*param_1->DataPtr == L'/') {
    return false;
  }
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = 5;
  local_28.DataPtr = L"./\\:";
  iVar4 = UE::String::FindFirstOfAnyChar(&local_18,&local_28,CaseSensitive,(int *)0x0);
  return iVar4 == -1;
}

// IsStructTrashed @ 141f90820

bool __thiscall UClass::IsStructTrashed(UClass *this)

{
  if (((this->_padding_ == 0) && (this->_padding_ == 0)) &&
     ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    return true;
  }
  return false;
}

// Link @ 141f90b70

void __thiscall UClass::Link(UClass *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2) && ((this->ClassFlags & CLASS_Intrinsic) != CLASS_None)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRelinkExistingProperties || !(ClassFlags & CLASS_Intrinsic)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0x1558,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UStruct::Link((UStruct *)this,param_1,param_2);
  return;
}

// OverridesSparseClassDataArchetype @ 141f940e0

bool __thiscall UClass::OverridesSparseClassDataArchetype(UClass *this)

{
  int iVar1;
  int iVar2;
  TObjectPtr<UScriptStruct>_u_0 this_00;
  UClass *this_01;
  void *pvVar3;
  FStructOpsFakeVTable *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  UScriptStruct *pUVar10;
  void *pvVar11;
  ICppStructOps *pIVar12;
  EStructOpsFakeVTableFlags EVar13;
  uint uVar14;
  int iVar15;
  char local_res8 [8];
  TObjectPtr<UScriptStruct>_u_0 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  this_00 = (TObjectPtr<UScriptStruct>_u_0)(this->SparseClassDataStruct).field0_0x0.DebugPtr;
  if ((this_00.DebugPtr == (UScriptStruct *)0x0) || (this->SparseClassData == (void *)0x0)) {
    return false;
  }
  this_01 = (UClass *)this->_padding_;
  if (this_01 == (UClass *)0x0) {
    pUVar10 = (UScriptStruct *)0x0;
  }
  else {
    pUVar10 = (this_01->SparseClassDataStruct).field0_0x0.DebugPtr;
  }
  if (this_00.DebugPtr != pUVar10) {
    return true;
  }
  if (this_01 == (UClass *)0x0) {
    pvVar11 = (void *)0x0;
  }
  else {
    pvVar11 = GetSparseClassData(this_01,ArchetypeIfNull);
  }
  pvVar3 = this->SparseClassData;
  if ((pvVar3 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("A",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xe72,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (pvVar11 == (void *)0x0) {
    return true;
  }
  if (((this_00.DebugPtr)->StructFlags & STRUCT_IdenticalNative) != STRUCT_NoFlags) {
    pIVar12 = UScriptStruct::GetCppStructOps(this_00.DebugPtr);
    if ((pIVar12 == (ICppStructOps *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xe7c,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_res8[0] = '\0';
    pFVar4 = pIVar12->FakeVPtr;
    if (((~(byte)(pFVar4->Flags >> 0xb) & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar14 = 0;
    for (EVar13 = pFVar4->Flags &
                  (Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                   PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct
                  ); EVar13 != None; EVar13 = EVar13 & EVar13 - Construct) {
      uVar14 = uVar14 + 1;
    }
    cVar9 = (**(code **)(&pFVar4[1].Flags + (ulonglong)uVar14 * 2))(pvVar3,pvVar11,0,local_res8);
    if (cVar9 != '\0') {
      if (local_res8[0] != '\0') {
        return false;
      }
      return true;
    }
  }
  local_40 = (longlong *)(this_00.DebugPtr)->_padding_;
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = this_00;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
  plVar6 = local_40;
  do {
    if (plVar6 == (longlong *)0x0) {
      return false;
    }
    iVar15 = 0;
    local_40 = plVar6;
    if (0 < (int)plVar6[6]) {
      do {
        pcVar5 = *(code **)(*plVar6 + 0xb8);
        if (((iVar15 < 0) || ((int)plVar6[6] <= iVar15)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar1 = *(int *)((longlong)plVar6 + 0x34);
        iVar2 = *(int *)((longlong)plVar6 + 0x44);
        if (((iVar15 < 0) || ((int)plVar6[6] <= iVar15)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if ((pvVar3 == (void *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        cVar9 = (*pcVar5)(plVar6,(longlong)pvVar3 +
                                 (longlong)*(int *)((longlong)plVar6 + 0x44) +
                                 (longlong)iVar15 * (longlong)*(int *)((longlong)plVar6 + 0x34),
                          (longlong)pvVar11 + (longlong)iVar2 + (longlong)iVar15 * (longlong)iVar1,0
                         );
        if (cVar9 == '\0') {
          return true;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)plVar6[6]);
    }
    local_40 = (longlong *)plVar6[3];
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
    plVar6 = local_40;
  } while( true );
}

// PostInitInstance @ 141f94530

void __thiscall
UClass::PostInitInstance(UClass *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  return;
}

// PostInitProperties @ 141f94540

void __thiscall UClass::PostInitProperties(UClass *this)

{
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) &&
     ((this->CppClassStaticFunctions).AddReferencedObjects ==
      (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0)) {
    (this->CppClassStaticFunctions).AddReferencedObjects = AddReferencedObjects;
  }
  return;
}

// PostLoad @ 141f94580

void __thiscall UClass::PostLoad(UClass *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ClassWithin).field0_0x0.DebugPtr == (UClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClassWithin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0x14f6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UStruct::PostLoad((UStruct *)this);
  if ((UObject *)this->_padding_ != (UObject *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this->_padding_);
  }
  if (-1 < (char)this->ClassFlags) {
    this->ClassFlags = this->ClassFlags & ~CLASS_ReplicationDataIsSetUp;
  }
  return;
}

// PostLoadDefaultObject @ 141f94980

void __thiscall UClass::PostLoadDefaultObject(UClass *this,UObject *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f94986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x98))(param_1);
  return;
}

// PostLoadInstance @ 141f949a0

void __thiscall UClass::PostLoadInstance(UClass *this,UObject *param_1)

{
  return;
}

// PurgeClass @ 141f954d0

void __thiscall UClass::PurgeClass(UClass *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,TObjectPtr<UFunction>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>_>
  *this_00;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  
  this->ClassConstructor = (_func___cdecl_void_FObjectInitializer_ptr *)0x0;
  piVar1 = &(this->ClassReps).ArrayMax;
  this->ClassVTableHelperCtorCaller = (_func___cdecl_UObject_ptr_FVTableHelper_ptr *)0x0;
  this->ClassFlags = CLASS_None;
  this->ClassCastFlags = CASTCLASS_None;
  this->ClassUnique = 0;
  (this->ClassReps).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ClassReps).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->NetFields).ArrayMax;
  (this->NetFields).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NetFields).AllocatorInstance,0,piVar1);
  }
  (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  piVar1 = &(this->Interfaces).ArrayMax;
  (this->Interfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Interfaces).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->NativeFunctionLookupTable).ArrayMax;
  (this->NativeFunctionLookupTable).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->NativeFunctionLookupTable).AllocatorInstance,0,piVar1);
  }
  (**(code **)(this->_padding_ + 800))(this);
  this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CppClassStaticFunctions).AddReferencedObjects =
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    DestructItems<TTuple<TFieldPath<FField>,int>,int>
              ((TTuple<TFieldPath<FField>,int> *)*puVar4,*(int *)(puVar4 + 1));
    if ((void *)*puVar4 != (void *)0x0) {
      FMemory::Free((void *)*puVar4);
    }
    ::operator_delete(puVar4,0x10);
    this->_padding_ = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  this_00 = &this->FuncMap;
  bVar6 = 1 < *(int *)&(this->FuncMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->FuncMap).field_0xc;
  *(undefined4 *)&(this->FuncMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->FuncMap).field_0x2c;
  *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FuncMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->FuncMap).field_0x48 = 1;
    TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  ClearFunctionMapsCaches(this);
  this->_padding_ = 0;
  plVar7 = (longlong *)this->_padding_;
  while (plVar7 != (longlong *)0x0) {
    plVar5 = (longlong *)plVar7[3];
    (**(code **)(*plVar7 + 8))(plVar7,1);
    plVar7 = plVar5;
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  LOCK();
  this->_padding_ = 0;
  UNLOCK();
  return;
}

// Rename @ 141f98ca0

bool __thiscall UClass::Rename(UClass *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FName this_00;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_30;
  
  bVar3 = UObject::Rename((UObject *)this,param_1,param_2,param_3);
  if ((bVar3) && (pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)
     ) {
    pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x170);
    this_00 = GetDefaultObjectName(this);
    pFVar4 = ::FName::ToString((FName *)this_00,&local_30);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(pUVar1,pwVar5,param_2,param_3);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return bVar3;
}

// ReplaceNativeFunction @ 141f999d0

bool __thiscall
UClass::ReplaceNativeFunction
          (UClass *this,FName param_1,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  IReload *pIVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (0 < (this->NativeFunctionLookupTable).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->NativeFunctionLookupTable).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->NativeFunctionLookupTable).AllocatorInstance.Data;
      if (*(FName *)(pFVar1 + lVar8) == param_1) {
        if (param_3) {
          uVar2 = *(undefined8 *)(pFVar1 + lVar8 + 8);
          pIVar7 = GetActiveReloadInterface();
          if (pIVar7 != (IReload *)0x0) {
            (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,param_2,uVar2);
          }
        }
        *(_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr **)(pFVar1 + lVar8 + 8) = param_2;
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < (this->NativeFunctionLookupTable).ArrayNum);
  }
  return false;
}

// Serialize @ 141f9cd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UClass::Serialize(UClass *this,FArchive *param_1)

{
  int *piVar1;
  uint *puVar2;
  EClassFlags *pEVar3;
  TArray<FImplementedInterface,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *this_01;
  UScriptStruct *pUVar8;
  UClass *this_02;
  UObject *pUVar9;
  code *pcVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FString *pFVar15;
  FStructuredArchiveFromArchive *this_03;
  FStructuredArchiveSlot FVar16;
  FArchive *pFVar17;
  FLinkerLoad *pFVar18;
  FLinkerLoad *pFVar19;
  int iVar20;
  ulonglong uVar21;
  FLinkerLoad *pFVar22;
  undefined1 auStackY_2c8 [32];
  bool local_288 [4];
  uint local_284;
  EClassFlags local_280;
  uint local_27c;
  uint local_278 [2];
  UObject *local_270;
  FSlotBase local_268;
  TArray<FImplementedInterface,TSizedDefaultAllocator<32>_> local_260;
  undefined8 local_250;
  undefined8 local_248 [2];
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar21 = 0;
  local_278[0] = 0;
  if (((param_1->field_0x28 & 1) != 0) ||
     (((param_1->field_0x2b & 2) != 0 && ((param_1->field_0x28 & 4) == 0)))) {
    UnhashObject((UObjectBase *)this);
  }
  UStruct::Serialize((UStruct *)this,param_1);
  if (((param_1->field_0x28 & 1) != 0) ||
     (((param_1->field_0x2b & 2) != 0 && ((param_1->field_0x28 & 4) == 0)))) {
    HashObject((UObjectBase *)this);
  }
  param_1->field_0x29 = param_1->field_0x29 | 0x20;
  AcquireSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  TSetPrivateFriend::
  Serialize<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                      *)&this->FuncMap);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FuncMapLock);
  pEVar3 = &this->ClassFlags;
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      ::operator<<(param_1,pEVar3);
    }
    else {
      ::operator<<(param_1,pEVar3);
      *pEVar3 = *pEVar3 & ~(CLASS_Intrinsic|CLASS_TokenStreamAssembled|CLASS_ReplicationDataIsSetUp|
                            CLASS_Native|CLASS_Optional);
    }
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    local_280 = *pEVar3 & ~(CLASS_Intrinsic|CLASS_TokenStreamAssembled|CLASS_ReplicationDataIsSetUp|
                            CLASS_Native|CLASS_Optional);
    if ((EClassFlags *)plVar6[1] < (EClassFlags *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_280);
      }
    }
    else {
      local_280 = *(EClassFlags *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
  }
  if (((*(int *)&param_1->field_0x40 < 0x13b) &&
      (*pEVar3 = *pEVar3 ^ CLASS_NotPlaceable, (*pEVar3 & CLASS_NotPlaceable) == CLASS_None)) &&
     ((*(uint *)(this->_padding_ + 0xd4) & 0x200) != 0)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2910729057672882285>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                        ,0x1793,
                        "HasAnyClassFlags(CLASS_NotPlaceable) || !GetSuperClass()->HasAnyClassFlags(CLASS_NotPlaceable)"
                       );
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    this->ClassFlags = this->ClassFlags | CLASS_NotPlaceable;
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ClassWithin);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->ClassConfigName);
  local_284 = 0;
  uVar13 = uVar21;
  if ((param_1->field_0x28 & 1) != 0) {
    piVar1 = &(this->Interfaces).ArrayMax;
    (this->Interfaces).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Interfaces).AllocatorInstance,0,piVar1);
    }
    if ((*(int *)&param_1->field_0x40 < 0x169) &&
       (bVar12 = FIsDuplicatingClassForReinstancing::operator_bool
                           (&GIsDuplicatingClassForReinstancing), uVar13 = 0, !bVar12)) {
      uVar13 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      plVar6 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_284);
        }
      }
      else {
        local_284 = *(uint *)*plVar6;
        *plVar6 = *plVar6 + 4;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))
                (param_1,uVar13 + ((longlong)(int)local_284 * 3 + 1) * 4);
    }
  }
  if ((param_1->field_0x2a & 0x20) == 0) {
    local_248[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_248);
  }
  if ((param_1->field_0x28 & 1) == 0) {
LAB_141f9d1ed:
    TArrayPrivateFriend::Serialize<FImplementedInterface,TSizedDefaultAllocator<32>_>
              (param_1,&this->Interfaces);
  }
  else {
    if ((this->ClassFlags & CLASS_Native) != CLASS_None) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_238,(UObject *)0x0,None);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasAnyClassFlags(CLASS_Native)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                          ,0x17c8,
                          L"Class %s loaded with CLASS_Native....we should not be loading any native classes."
                         );
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if ((this->ClassFlags & CLASS_Intrinsic) != CLASS_None) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_228,(UObject *)0x0,None);
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!HasAnyClassFlags(CLASS_Intrinsic)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                          ,0x17c9,
                          L"Class %s loaded with CLASS_Intrinsic....we should not be loading any intrinsic classes."
                         );
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    this->ClassFlags =
         this->ClassFlags &
         ~(CLASS_Intrinsic|CLASS_TokenStreamAssembled|CLASS_Native|CLASS_Optional);
    if ((*(uint *)&param_1->field_0x34 & 0x1000) == 0) {
      (**(code **)(this->_padding_ + 0x2c8))(this,param_1);
    }
    if ((param_1->field_0x28 & 1) == 0) goto LAB_141f9d1ed;
    uVar14 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if ((*(int *)&param_1->field_0x40 < 0x169) &&
       (bVar12 = FIsDuplicatingClassForReinstancing::operator_bool
                           (&GIsDuplicatingClassForReinstancing), !bVar12)) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar13);
    }
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FImplementedInterface,TSizedDefaultAllocator<32>_>
              (param_1,&local_260);
    FVar11.Data = local_260.AllocatorInstance.Data;
    if ((((this->Interfaces).ArrayNum == 0) && (iVar20 = local_260.ArrayNum, 0 < local_260.ArrayNum)
        ) && (pTVar4 = &this->Interfaces, pTVar4 != &local_260)) {
      piVar1 = &(this->Interfaces).ArrayMax;
      (this->Interfaces).ArrayNum = local_260.ArrayNum;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_260.ArrayNum,*piVar1,&pTVar4->AllocatorInstance,local_260.ArrayNum,
                 piVar1);
      ConstructItems<FImplementedInterface,FImplementedInterface,int>
                ((pTVar4->AllocatorInstance).Data,(FImplementedInterface *)FVar11.Data,iVar20);
    }
    if ((*(int *)&param_1->field_0x40 < 0x169) &&
       (bVar12 = FIsDuplicatingClassForReinstancing::operator_bool
                           (&GIsDuplicatingClassForReinstancing), !bVar12)) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar14);
    }
    if ((FImplementedInterface *)local_260.AllocatorInstance.Data != (FImplementedInterface *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  if (puVar7[1] < *puVar7 + 4) {
    local_278[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_278);
    if (1 < local_278[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar7 = *puVar7 + 4;
  }
  local_250 = 0;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1);
  if (*(int *)&param_1->field_0x40 < 0xf1) goto LAB_141f9d2e4;
  if ((param_1->field_0x28 & 4) != 0) {
    if ((this->bCooked == false) &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) {
      local_288[0] = false;
    }
    else {
      local_288[0] = true;
    }
    ::operator<<(param_1,local_288);
  }
  if ((param_1->field_0x28 & 1) == 0) goto LAB_141f9d2e4;
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  bVar12 = false;
  puVar2 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar2) {
    local_27c = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
    if (1 < local_27c) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar5 = local_27c;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_141f9d2db;
  }
  else {
    uVar5 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar2;
LAB_141f9d2db:
    bVar12 = uVar5 != 0;
  }
  this->bCooked = bVar12;
LAB_141f9d2e4:
  *(int *)&param_1->field_0x30 = *(int *)&param_1->field_0x30 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x2a & 2) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1);
    }
    else {
      pUVar9 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar9 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar9 + 200))();
      }
    }
  }
  else {
    if ((((*(uint *)&param_1->field_0x34 & 0x1000) == 0) &&
        (iVar20 = (int)*(short *)((longlong)&this->_padding_ + 4),
        (uint)(iVar20 + -1 + (int)this->_padding_ & -iVar20) < 0x28)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Ar.GetPortFlags() & PPF_Duplicate) || (GetStructureSize() >= sizeof(UObject))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x180d,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 10 & 1) != 0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!GetSuperClass() || !GetSuperClass()->HasAnyFlags(RF_NeedLoad)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x180e,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    this_00 = (UObjectBaseUtility *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
    local_270 = (UObject *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1);
    pUVar9 = local_270;
    this_01 = (UObjectBaseUtility *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
    if (this_01 == (UObjectBaseUtility *)0x0) {
      bVar12 = this_00 == (UObjectBaseUtility *)0x0;
    }
    else {
      bVar12 = this_01 == this_00;
    }
    if (bVar12) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_270 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_270);
      }
      (this->ClassDefaultObject).field0_0x0.DebugPtr = pUVar9;
      this->ClassUnique = 0;
    }
    else {
      if (this_01 == (UObjectBaseUtility *)0x0) {
        bVar12 = local_270 == (UObject *)0x0;
      }
      else {
        bVar12 = this_01 == (UObjectBaseUtility *)local_270;
      }
      if ((!bVar12) && (4 < (byte)LogClass._0_1_)) {
        if (this_01 != (UObjectBaseUtility *)0x0) {
          pFVar15 = UObjectBaseUtility::GetFullName(this_01,&local_1f8,(UObject *)0x0,None);
          if ((pFVar15->Data).ArrayNum == 0) {
            uVar21 = 1;
          }
          else {
            uVar21 = 1;
          }
        }
        if (local_270 != (UObject *)0x0) {
          uVar21 = (ulonglong)((uint)uVar21 | 2);
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_270,&local_208,(UObject *)0x0,None);
        }
        if (this_00 != (UObjectBaseUtility *)0x0) {
          uVar21 = (ulonglong)((uint)uVar21 | 4);
          UObjectBaseUtility::GetFullName(this_00,&local_218,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (((uVar21 & 4) != 0) &&
           (uVar21 = (ulonglong)((uint)uVar21 & 0xfffffffb),
           local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (((uVar21 & 2) != 0) &&
           (uVar21 = (ulonglong)((uint)uVar21 & 0xfffffffd),
           local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (((uVar21 & 1) != 0) &&
           (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
      this->ClassUnique = 0;
    }
  }
  pFVar22 = (FLinkerLoad *)0x0;
  if ((((param_1->field_0x28 & 5) == 0) &&
      ((**(code **)(*(longlong *)param_1 + 0x150))(param_1),
      (this->SparseClassDataStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) &&
     (this->SparseClassData != (void *)0x0)) {
    this_03 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1d8,param_1);
    FVar16 = FStructuredArchiveFromArchive::GetSlot(this_03);
    local_268.StructuredArchive = *(FStructuredArchive **)FVar16;
    if ((this->SparseClassDataStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
      pFVar17 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_268);
      if (((uint)((this->SparseClassDataStruct).field0_0x0.DebugPtr)->_padding_ >> 10 & 1) != 0) {
        (**(code **)(*(longlong *)pFVar17 + 0x1b0))(pFVar17);
      }
      GetSparseClassData(this,CreateIfNull);
      if (((pFVar17->field_0x28 & 5) == 0) || ((pFVar17->field_0x28 & 0x20) != 0)) {
        pUVar8 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
        if (*(int *)&pFVar17->field_0x34 == 0) {
          (**(code **)(pUVar8->_padding_ + 0x2d0))(pUVar8);
        }
        else {
          this_02 = (UClass *)this->_padding_;
          pFVar19 = pFVar22;
          pFVar18 = pFVar22;
          if (this_02 != (UClass *)0x0) {
            pFVar18 = (FLinkerLoad *)(this_02->SparseClassDataStruct).field0_0x0.DebugPtr;
            pFVar19 = GetSparseClassData(this_02,ArchetypeIfNull);
          }
          UStruct::SerializeBinEx
                    ((UStruct *)pUVar8,(FStructuredArchiveSlot)local_268.StructuredArchive,
                     this->SparseClassData,pFVar19,(UStruct *)pFVar18);
        }
      }
      else {
        pUVar8 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
        pFVar18 = pFVar22;
        if ((UClass *)this->_padding_ != (UClass *)0x0) {
          pFVar18 = GetSparseClassData((UClass *)this->_padding_,ArchetypeIfNull);
        }
        UScriptStruct::SerializeItem
                  (pUVar8,(FStructuredArchiveSlot)local_268.StructuredArchive,this->SparseClassData,
                   pFVar18);
      }
    }
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
  }
  *(int *)&param_1->field_0x30 = *(int *)&param_1->field_0x30 + -1;
  if (((param_1->field_0x28 & 1) != 0) &&
     ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0)) {
    if ((GConfig == (FConfigCacheIni *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("GConfig",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x185c,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((GEventDrivenLoaderEnabled == false) && ((param_1->field_0x28 & 2) == 0)) {
      if ((*(uint *)&param_1->field_0x34 & 0x401000) == 0) {
        pFVar18 = (FLinkerLoad *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        if ((pFVar18 == (FLinkerLoad *)0x0) || ((int)pFVar18->_padding_ != 1)) {
          pFVar18 = pFVar22;
        }
        if (((((this->ClassFlags & CLASS_CompiledFromBlueprint) == CLASS_None) ||
             ((*(uint *)(this->_padding_ + 0xd4) & 0x20000) == 0)) ||
            (pFVar18 == (FLinkerLoad *)0x0)) ||
           (bVar12 = FLinkerLoad::IsBlueprintFinalizationPending(pFVar18), !bVar12)) {
          if (1 < (byte)LogClass._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1e8,(UObject *)0x0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
          }
          if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2910729057672882065>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                ,0x186f,"ClassDefaultObject != nullptr");
            if (bVar12) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
              (**(code **)(this->_padding_ + 0x400))(this);
            }
          }
          pUVar9 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar9);
          }
          (this->ClassDefaultObject).field0_0x0.DebugPtr = pUVar9;
          (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
        }
      }
    }
    else {
      if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        (**(code **)(this->_padding_ + 0x400))(this);
      }
      pUVar9 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      (this->ClassDefaultObject).field0_0x0.DebugPtr = pUVar9;
    }
  }
  return;
}

// Serialize @ 141f9d880

void __thiscall UClass::Serialize(UClass *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeDefaultObject @ 141f9f2c0

void __thiscall
UClass::SerializeDefaultObject(UClass *this,UObject *param_1,FStructuredArchiveSlot param_2)

{
  code *pcVar1;
  UStruct *pUVar2;
  uint *puVar3;
  FArchive *pFVar4;
  UObject *pUVar5;
  FSlotBase local_res18;
  undefined1 local_res20 [8];
  code *local_28;
  undefined1 *local_20;
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_20 = local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar3);
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  (**(code **)(*(longlong *)pFVar4 + 0x218))(pFVar4,param_1);
  *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
  if (((pFVar4->field_0x28 & 5) == 0) || ((pFVar4->field_0x28 & 0x20) != 0)) {
    if (*(int *)&pFVar4->field_0x34 == 0) {
      (**(code **)(this->_padding_ + 0x2d0))(this,local_res18.StructuredArchive,param_1);
    }
    else {
      pUVar2 = (UStruct *)this->_padding_;
      pUVar5 = UObject::GetArchetype(param_1);
      UStruct::SerializeBinEx
                ((UStruct *)this,(FStructuredArchiveSlot)local_res18.StructuredArchive,param_1,
                 pUVar5,pUVar2);
    }
  }
  else {
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    pUVar5 = UObject::GetArchetype(param_1);
    (*pcVar1)(this,local_res18.StructuredArchive,param_1,this->_padding_,pUVar5,0);
  }
  *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + -1;
  (**(code **)(*(longlong *)pFVar4 + 0x220))(pFVar4,param_1);
  return;
}

// SerializeSparseClassData @ 141fa6ac0

void __thiscall UClass::SerializeSparseClassData(UClass *this,FStructuredArchiveSlot param_1)

{
  UScriptStruct *pUVar1;
  UClass *this_00;
  FArchive *pFVar2;
  void *pvVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  FSlotBase local_res10;
  
  if ((this->SparseClassDataStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    local_res10.StructuredArchive = (FStructuredArchive *)param_1;
    pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
    if (((uint)((this->SparseClassDataStruct).field0_0x0.DebugPtr)->_padding_ >> 10 & 1) != 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x1b0))(pFVar2);
    }
    GetSparseClassData(this,CreateIfNull);
    if (((pFVar2->field_0x28 & 5) != 0) && ((pFVar2->field_0x28 & 0x20) == 0)) {
      pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
      if ((UClass *)this->_padding_ == (UClass *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = GetSparseClassData((UClass *)this->_padding_,ArchetypeIfNull);
      }
      UScriptStruct::SerializeItem
                (pUVar1,(FStructuredArchiveSlot)local_res10.StructuredArchive,this->SparseClassData,
                 pvVar3);
      return;
    }
    pUVar1 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
    if (*(int *)&pFVar2->field_0x34 != 0) {
      this_00 = (UClass *)this->_padding_;
      if (this_00 == (UClass *)0x0) {
        pUVar4 = (UScriptStruct *)0x0;
        pUVar5 = pUVar4;
      }
      else {
        pUVar5 = (this_00->SparseClassDataStruct).field0_0x0.DebugPtr;
        pUVar4 = GetSparseClassData(this_00,ArchetypeIfNull);
      }
      UStruct::SerializeBinEx
                ((UStruct *)pUVar1,(FStructuredArchiveSlot)local_res10.StructuredArchive,
                 this->SparseClassData,pUVar4,(UStruct *)pUVar5);
      return;
    }
    (**(code **)(pUVar1->_padding_ + 0x2d0))
              (pUVar1,local_res10.StructuredArchive,this->SparseClassData);
  }
  return;
}

// SetDefaultObject @ 141fa9700

void __thiscall UClass::SetDefaultObject(UClass *this,UObject *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
    (this->ClassDefaultObject).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->ClassDefaultObject).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSparseClassDataStruct @ 141fab3e0

void __thiscall UClass::SetSparseClassDataStruct(UClass *this,UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_38;
  
  pUVar2 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
  if (pUVar2 == (UScriptStruct *)0x0) {
    bVar7 = param_1 == (UScriptStruct *)0x0;
  }
  else {
    bVar7 = pUVar2 == param_1;
  }
  if (!bVar7) {
    if (pUVar2 != (UScriptStruct *)0x0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      GetDerivedClasses(this,&local_38,true);
      iVar5 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
      FVar6.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6.Data == pFVar1) break;
        lVar3 = *(longlong *)FVar6.Data;
        plVar4 = *(longlong **)(lVar3 + 0x120);
        if (plVar4 != (longlong *)0x0) {
          pUVar2 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
          if (pUVar2 == (UScriptStruct *)0x0) {
            bVar7 = (UScriptStruct *)plVar4[8] == (UScriptStruct *)0x0;
          }
          else {
            bVar7 = pUVar2 == (UScriptStruct *)plVar4[8];
          }
          if (bVar7) {
            if (*(longlong *)(lVar3 + 0x118) != 0) {
              (**(code **)(*plVar4 + 0x300))(plVar4,*(longlong *)(lVar3 + 0x118),1);
              FMemory::Free(*(void **)(lVar3 + 0x118));
              *(undefined8 *)(lVar3 + 0x118) = 0;
            }
            (**(code **)(*plVar4 + 800))(plVar4,param_1);
          }
        }
        FVar6.Data = FVar6.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    if (this->SparseClassData != (void *)0x0) {
      pUVar2 = (this->SparseClassDataStruct).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,this->SparseClassData,1);
      FMemory::Free(this->SparseClassData);
      this->SparseClassData = (void *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->SparseClassDataStruct).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// SetSuperStruct @ 141fab5b0

void __thiscall UClass::SetSuperStruct(UClass *this,UStruct *param_1)

{
  UScriptStruct *pUVar1;
  
  UnhashObject((UObjectBase *)this);
  ClearFunctionMapsCaches(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  FStructBaseChain::ReinitializeBaseChainArray((FStructBaseChain *)&this->_padding_);
  if ((((this->SparseClassDataStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) &&
      (this->_padding_ != 0)) &&
     (pUVar1 = *(UScriptStruct **)(this->_padding_ + 0x120), pUVar1 != (UScriptStruct *)0x0)) {
    SetSparseClassDataStruct(this,pUVar1);
  }
  HashObject((UObjectBase *)this);
  return;
}

// SetUpRuntimeReplicationData @ 141fab680

void __thiscall UClass::SetUpRuntimeReplicationData(UClass *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UField>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRepRecord,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  code *pcVar7;
  FProperty *pFVar8;
  UField *pUVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  UClass *pUVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  FNameLexicalLess local_res8;
  FProperty *local_98;
  UField *local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TFieldIterator<UField> local_78;
  TFieldIterator<FField> local_60;
  
  if ((this->ClassFlags >> 0xb & 1) != 0) {
    return;
  }
  pTVar3 = &this->NetFields;
  piVar1 = &(this->NetFields).ArrayMax;
  iVar12 = 0;
  (this->NetFields).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pUVar14 = (UClass *)this->_padding_;
  pTVar4 = &this->ClassReps;
  if (pUVar14 == (UClass *)0x0) {
    piVar2 = &(this->ClassReps).ArrayMax;
    (this->ClassReps).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar2);
    }
  }
  else {
    SetUpRuntimeReplicationData(pUVar14);
    if (pTVar4 != &pUVar14->ClassReps) {
      iVar12 = (pUVar14->ClassReps).ArrayNum;
      piVar2 = &(this->ClassReps).ArrayMax;
      pFVar16 = (pUVar14->ClassReps).AllocatorInstance.Data;
      (this->ClassReps).ArrayNum = iVar12;
      if ((iVar12 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
        iVar12 = (this->ClassReps).ArrayNum;
        goto LAB_141fab7b3;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,*piVar2,&pTVar4->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar16,(longlong)iVar12 << 4);
      }
    }
    iVar12 = (this->ClassReps).ArrayNum;
  }
LAB_141fab7b3:
  this->FirstOwnedClassRep = iVar12;
  local_60.Field = (FField *)this->_padding_;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_60.InterfaceIndex = -1;
  local_60.bIncludeSuper = false;
  local_60.bIncludeDeprecated = true;
  local_60.bIncludeInterface = false;
  local_60.Struct = (UStruct *)this;
  TFieldIterator<FField>::IterateToNext(&local_60);
  pFVar8 = (FProperty *)local_60.Field;
  while (local_60.Field = (FField *)pFVar8, pFVar8 != (FProperty *)0x0) {
    if (((uint)(int)((FFieldClass *)pFVar8->_padding_)->CastFlags >> 0xf & 1) == 0) {
      local_98 = (FProperty *)0x0;
    }
    else {
      local_98 = pFVar8;
      if ((pFVar8 != (FProperty *)0x0) && ((pFVar8->PropertyFlags & CPF_Net) != CPF_None)) {
        pUVar14 = Z_Construct_UClass_UObject_NoRegister();
        bVar11 = FFieldVariant::IsA((FFieldVariant *)&pFVar8->_padding_,pUVar14);
        pUVar14 = (UClass *)0x0;
        if (bVar11) {
          pUVar14 = (UClass *)
                    ((((FFieldVariant *)&pFVar8->_padding_)->Container).Unknown & 0xfffffffffffffffe
                    );
        }
        if (pUVar14 == this) {
          if (((local_88.Data <= (FScriptContainerElement *)&local_98) &&
              ((FScriptContainerElement *)&local_98 < local_88.Data + (longlong)local_80._4_4_ * 8))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (uint)local_80;
          if ((uint)local_80 == local_80._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_88,(int *)((longlong)&local_80 + 4));
          }
          local_80 = CONCAT44(local_80._4_4_,iVar12 + 1);
          *(FProperty **)(local_88.Data + (longlong)iVar12 * 8) = local_98;
        }
      }
    }
    local_60.Field = (FField *)pFVar8->_padding_;
    TFieldIterator<FField>::IterateToNext(&local_60);
    pFVar8 = (FProperty *)local_60.Field;
  }
  local_78.Field = (UField *)this->_padding_;
  local_78.InterfaceIndex = -1;
  local_78.bIncludeSuper = false;
  local_78.bIncludeDeprecated = true;
  local_78.bIncludeInterface = false;
  local_78.Struct = (UStruct *)this;
  TFieldIterator<UField>::IterateToNext(&local_78);
  pUVar9 = local_78.Field;
  while (local_78.Field = pUVar9, pUVar9 != (UField *)0x0) {
    pUVar14 = UFunction::StaticClass();
    iVar12 = (int)pUVar14->_padding_;
    if (((iVar12 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
         &pUVar14->_padding_)) && (pUVar9 != (UField *)0x0)) {
      if (((PRIVATE_GIsRunningCommandlet == false) || (((uint)pUVar9->_padding_ >> 0x13 & 1) == 0))
         && ((pUVar9[1]._padding_ != 0 &&
             (((((uint)pUVar9[3]._padding_ ^ *(uint *)(pUVar9[1]._padding_ + 0xb0)) & 0x12040c0) !=
               0 && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("!bCanCheck || (!Func->GetSuperFunction() || (Func->GetSuperFunction()->FunctionFlags&((EFunctionFlags)(FUNC_Net | FUNC_NetReliable | FUNC_NetServer | FUNC_NetClient | FUNC_NetMulticast))) == (Func->FunctionFlags&((EFunctionFlags)(FUNC_Net | FUNC_NetReliable | FUNC_NetServer | FUNC_NetClient | FUNC_NetMulticast))))"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                         ,0x1607,L""), bVar11)))))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((pUVar9[3]._padding_ & 0x40) != 0) && (pUVar9[1]._padding_ == 0)) {
        local_90 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pFVar16 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar16 + (longlong)*piVar1 * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->NetFields).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->NetFields).ArrayNum = iVar12 + 1;
        *(UField **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_90;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UField *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_90);
        }
      }
    }
    local_78.Field = (pUVar9->Next).field0_0x0.DebugPtr;
    TFieldIterator<UField>::IterateToNext(&local_78);
    pUVar9 = local_78.Field;
  }
  uVar18 = this->ClassFlags >> 7;
  local_res8 = SUB81(this,0);
  if ((uVar18 & 1) == 0) {
    AlgoImpl::
    IntroSortInternal<FProperty_*,int,FIdentityFunctor,_UClass::SetUpRuntimeReplicationData_::__l36::FComparePropertyOffsets>
              ((FProperty **)local_88.Data,(uint)local_80,(FIdentityFunctor)local_res8,
               (FComparePropertyOffsets)local_res8);
  }
  uVar19 = (this->ClassReps).ArrayNum + (uint)local_80;
  if (-1 < (int)uVar19) {
    piVar2 = &(this->ClassReps).ArrayMax;
    if ((this->ClassReps).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar19,&pTVar4->AllocatorInstance,(this->ClassReps).ArrayNum,piVar2);
    }
    uVar15 = (ulonglong)(uint)local_80;
    uVar19 = 0;
    if (0 < (int)(uint)local_80) {
      lVar21 = 0;
      do {
        iVar12 = (this->ClassReps).ArrayNum;
        uVar17 = ~uVar19 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar19 < (int)uVar15) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar20 = 0;
        *(short *)(*(longlong *)(local_88.Data + lVar21) + 0x40) = (short)iVar12;
        while( true ) {
          uVar15 = (ulonglong)(int)(uint)local_80;
          uVar13 = 0;
          if ((int)uVar19 < (int)(uint)local_80) {
            uVar13 = uVar17;
          }
          if (uVar13 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar15 = local_80 & 0xffffffff;
          }
          if (*(int *)(*(longlong *)(local_88.Data + lVar21) + 0x30) <= iVar20) break;
          uVar13 = 0;
          if ((int)uVar19 < (int)uVar15) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar10.Data = local_88.Data;
          iVar12 = (this->ClassReps).ArrayNum;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar4->AllocatorInstance,piVar2);
          }
          (this->ClassReps).ArrayNum = iVar12 + 1;
          uVar5 = *(undefined8 *)(FVar10.Data + lVar21);
          pFVar16 = (pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(int *)(pFVar16 + 8) = iVar20;
          iVar20 = iVar20 + 1;
          *(undefined8 *)pFVar16 = uVar5;
        }
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 8;
      } while ((int)uVar19 < (int)uVar15);
    }
    if ((0xffff < (this->ClassReps).ArrayNum) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClassReps.Num() <= 65535",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                            ,0x162d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = (this->NetFields).ArrayNum;
    if (*piVar1 != iVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,&pTVar3->AllocatorInstance,iVar12,piVar1);
    }
    AlgoImpl::
    IntroSortInternal<TObjectPtr<UField>,int,UE::Core::Private::TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const_>,FNameLexicalLess>
              ((TObjectPtr<UField> *)(pTVar3->AllocatorInstance).Data,(this->NetFields).ArrayNum,
               (TProjectionMemberFunction<FName_(__cdecl_UObjectBase::*)(void)const>)0x141f81bb0,
               local_res8);
    this->ClassFlags = this->ClassFlags | CLASS_ReplicationDataIsSetUp;
    if (UE::Net::Private::GValidateReplicatedProperties != false) {
      if ((uVar18 & 1) != 0) {
        if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          (**(code **)(this->_padding_ + 0x400))(this);
        }
        pUVar6 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar6 + 0x298))(pUVar6,pTVar4);
      }
      UE::Net::Private::ValidateNetDeltaSerializeProperties(pTVar4);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
}

// SetupObjectInitializer @ 141fadb00

void __thiscall UClass::SetupObjectInitializer(UClass *this,FObjectInitializer *param_1)

{
  return;
}

// StaticRegisterNativesUClass @ 141faddc0

void __cdecl UClass::StaticRegisterNativesUClass(void)

{
  return;
}

// TagSubobjects @ 141fade90

void __thiscall UClass::TagSubobjects(UClass *this,EObjectFlags param_1)

{
  UObjectBase *this_00;
  UObject *pUVar1;
  code *pcVar2;
  FField *this_01;
  bool bVar3;
  FUObjectItem *pFVar4;
  TFieldIterator<FProperty> local_28;
  
  UObject::TagSubobjects((UObject *)this,param_1);
  if (this == (UClass *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (FField *)this->_padding_;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = false;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  this_01 = local_28.Field;
  while (local_28.Field = this_01, this_01 != (FField *)0x0) {
    bVar3 = FField::IsRooted(this_01);
    if (!bVar3) {
      this_01->FlagsPrivate = this_01->FlagsPrivate | param_1;
    }
    local_28.Field = this_01->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    this_01 = local_28.Field;
  }
  if (((this->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) &&
     (pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,
                          *(int *)&((this->ClassDefaultObject).field0_0x0.DebugPtr)->field_0xc),
     ((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) == 0)) {
    this_00 = (UObjectBase *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
    if (((~(byte)(param_1 >> 0x1e) & 1) == 0) &&
       ((((~this_00->ObjectFlags & param_1) >> 0x1e & 1) != 0 &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                            ,0x4b,
                            L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                           ), bVar3)))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UObjectBase::AtomicallySetFlags(this_00,param_1);
    pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x1e0))(pUVar1,param_1);
  }
  return;
}

// TryConvertShortTypeNameToPathName @ 141fae740

/* WARNING: Enum "Type": Some values do not have unique names */

FTopLevelAssetPath * __cdecl
UClass::TryConvertShortTypeNameToPathName
          (FTopLevelAssetPath *__return_storage_ptr__,UClass *param_1,TStringView<wchar_t> *param_2,
          Type param_3,wchar_t *param_4)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FTopLevelAssetPath *pFVar6;
  UObject *this;
  UPackage *pUVar7;
  EFindFirstObjectOptions EVar8;
  FTopLevelAssetPath local_88;
  FString local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  if (param_1 == (UClass *)0x0) {
LAB_141fae7c7:
    ::FString::FString(&local_78,L"None");
  }
  else {
    pUVar5 = UField::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_141fae81f;
    }
    if (param_1->_padding_ == 0) goto LAB_141fae7c7;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0,None);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("TypeClass && TypeClass->IsChildOf(UField::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                     ,0x1c4f,
                     L"TryConvertShortTypeNameToPathName requires a valid TypeClass parameter which is a subclass of UField. \"%s\" provided."
                    );
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FTopLevelAssetPath *)(*pcVar3)();
    return pFVar6;
  }
LAB_141fae81f:
  if (param_2->Size == 0) {
    (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
    (__return_storage_ptr__->PackageName).Number = 0;
    (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
    (__return_storage_ptr__->AssetName).Number = 0;
  }
  else {
    local_58.DataPtr = param_2->DataPtr;
    local_58.Size = param_2->Size;
    local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar4 = FPackageName::IsShortPackageName(&local_58);
    local_48.DataPtr = param_2->DataPtr;
    local_48.Size = param_2->Size;
    local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
    if (bVar4) {
      local_68 = 0;
      uStack_60 = 0;
      EVar8 = NativeFirst;
      if ((byte)(param_3 - Fatal) < 2) {
        EVar8 = EnsureIfAmbiguous|NativeFirst;
      }
      local_38.DataPtr = local_48.DataPtr;
      local_38._8_8_ = local_48._8_8_;
      this = StaticFindFirstObject(param_1,&local_38,EVar8,param_3,param_4);
      if (this == (UObject *)0x0) {
        local_88.PackageName.ComparisonIndex.Value = (uint)local_68;
        local_88.PackageName.Number = local_68._4_4_;
        local_88.AssetName.ComparisonIndex.Value = (uint)uStack_60;
        local_88.AssetName.Number = uStack_60._4_4_;
      }
      else {
        pUVar7 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
        if (*(UPackage **)&this->field_0x20 != pUVar7) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FoundType->GetOuter() == FoundType->GetOutermost()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                             ,0x1c65,
                             L"Trying to construct FTopLevelAssetPath for nested type: \"%s\"");
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FTopLevelAssetPath *)(*pcVar3)();
            return pFVar6;
          }
        }
        FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x18;
        FVar2.Number = *(uint *)&this->field_0x1c;
        local_88.PackageName.ComparisonIndex.Value = 0;
        local_88.PackageName.Number = 0;
        local_88.AssetName.ComparisonIndex.Value = 0;
        local_88.AssetName.Number = 0;
        FTopLevelAssetPath::TrySetPath
                  (&local_88,*(FName *)(*(longlong *)&this->field_0x20 + 0x18),FVar2);
      }
      (__return_storage_ptr__->PackageName).ComparisonIndex.Value =
           local_88.PackageName.ComparisonIndex.Value;
      (__return_storage_ptr__->PackageName).Number = local_88.PackageName.Number;
      (__return_storage_ptr__->AssetName).ComparisonIndex.Value =
           local_88.AssetName.ComparisonIndex.Value;
      (__return_storage_ptr__->AssetName).Number = local_88.AssetName.Number;
    }
    else {
      (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
      (__return_storage_ptr__->PackageName).Number = 0;
      (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
      (__return_storage_ptr__->AssetName).Number = 0;
      FTopLevelAssetPath::TrySetPath(__return_storage_ptr__,&local_48);
    }
  }
  return __return_storage_ptr__;
}

// TryFindTypeSlow @ 141fae970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UField * __cdecl
UClass::TryFindTypeSlow
          (UClass *param_1,TStringView<wchar_t> *param_2,EFindFirstObjectOptions param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UClass *pUVar6;
  UField *pUVar7;
  char *pcVar8;
  size_t sVar9;
  void *pvVar10;
  uint uVar11;
  char *_Str;
  ulong64 *puVar12;
  undefined1 auStackY_d48 [32];
  FString local_d10;
  FString local_d00;
  UClass *local_cf0;
  TStringView<wchar_t> local_ce8;
  TStringView<wchar_t> local_cd8;
  TStringView<wchar_t> local_cc8;
  TStringBuilderBase<wchar_t> local_cb8;
  wchar_t local_c98 [1024];
  wchar_t local_498 [4];
  ulong64 local_490 [9];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d48;
  local_cf0 = param_1;
  if (param_1 == (UClass *)0x0) {
LAB_141faea0c:
    ::FString::FString(&local_d10,L"None");
  }
  else {
    pUVar6 = UField::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar3 = (int)pUVar6->_padding_;
      if (((int)param_1->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_141faea64;
    }
    if (param_1->_padding_ == 0) goto LAB_141faea0c;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_d10,(UObject *)0x0,None);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TypeClass && TypeClass->IsChildOf(UField::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                     ,0x1c16,
                     L"TryFindType requires a valid TypeClass parameter which is a subclass of UField. \"%s\" provided."
                    );
  if (local_d10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d10.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UField *)(*pcVar1)();
    return pUVar7;
  }
LAB_141faea64:
  pUVar7 = (UField *)0x0;
  if (param_2->Size != 0) {
    iVar3 = (int)*(undefined8 *)&param_2->Size;
    if (iVar3 != 0) {
      iVar4 = FGenericPlatformStricmp::Strnicmp(param_2->DataPtr,L"None",(longlong)iVar3);
      if ((iVar4 == 0) && (*(short *)(&u_None + (longlong)iVar3 * 2) == 0)) {
        return (UField *)0x0;
      }
    }
    local_ce8.DataPtr = param_2->DataPtr;
    local_ce8.Size = param_2->Size;
    local_ce8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    bVar2 = FPackageName::IsShortPackageName(&local_ce8);
    if (bVar2) {
      local_cb8.Base = local_c98;
      local_cb8.bIsDynamic = false;
      local_cb8.bIsExternal = false;
      local_cb8.CurPos = local_c98;
      local_cb8.End = local_498;
      uVar5 = FWindowsPlatformStackWalk::CaptureStackBackTrace((ulong64 *)local_498,10,(void *)0x0);
      uVar11 = 1;
      if (1 < uVar5) {
        puVar12 = local_490;
        do {
          param_1 = local_cf0;
          if (9 < uVar11) break;
          local_448[0] = '\0';
          _Str = local_448;
          bVar2 = FGenericPlatformStackWalk::ProgramCounterToHumanReadableString
                            (uVar11,*puVar12,local_448,0x400,(FGenericCrashContext *)0x0);
          if ((bVar2) && (pcVar8 = strstr(local_448,"!"), pcVar8 != (char *)0x0)) {
            _Str = pcVar8 + 1;
          }
          iVar3 = 0;
          if (_Str != (char *)0x0) {
            sVar9 = strlen(_Str);
            iVar3 = (int)sVar9;
          }
          if (local_cb8.End < local_cb8.CurPos + iVar3) {
            TStringBuilderBase<wchar_t>::Extend(&local_cb8,(longlong)iVar3);
          }
          if (iVar3 != 0) {
            local_cb8.CurPos =
                 FGenericPlatformString::Convert<char,wchar_t>(local_cb8.CurPos,iVar3,_Str,iVar3);
          }
          if (local_cb8.End < local_cb8.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_cb8,2);
          }
          pvVar10 = FGenericPlatformString::Memcpy(local_cb8.CurPos,L"\r\n",4);
          local_cb8.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 1;
          param_1 = local_cf0;
        } while (uVar11 < uVar5);
      }
      local_cc8.DataPtr = param_2->DataPtr;
      local_cc8.Size = param_2->Size;
      local_cc8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      pUVar7 = (UField *)
               StaticFindFirstObject
                         (param_1,&local_cc8,param_3 | (EnsureIfAmbiguous|NativeFirst),Error,
                          L"TryFindType");
      if (2 < (byte)LogClass._0_1_) {
        if (local_cb8.End < local_cb8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_cb8,1);
        }
        *local_cb8.CurPos = L'\0';
        if (pUVar7 == (UField *)0x0) {
          ::FString::FString(&local_d00,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar7,&local_d00,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_d00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d00.Data.AllocatorInstance.Data);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_cb8);
    }
    else {
      local_cd8.DataPtr = param_2->DataPtr;
      local_cd8.Size = param_2->Size;
      local_cd8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      pUVar7 = (UField *)
               StaticFindObject(param_1,(UObject *)0x0,&local_cd8,param_3 >> 1 & ExactClass);
    }
  }
  return pUVar7;
}

// TryFindTypeSlowSafe @ 141faed40

UField * __cdecl
UClass::TryFindTypeSlowSafe
          (UClass *param_1,TStringView<wchar_t> *param_2,EFindFirstObjectOptions param_3)

{
  bool bVar1;
  UField *pUVar2;
  TStringView<wchar_t> local_18;
  
  bVar1 = UE::IsSavingPackage((UObject *)0x0);
  if (!bVar1) {
    bVar1 = IsGarbageCollectingAndLockingUObjectHashTables();
    if (!bVar1) {
      local_18.DataPtr = param_2->DataPtr;
      local_18.Size = param_2->Size;
      local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
      pUVar2 = TryFindTypeSlow(param_1,&local_18,param_3);
      return pUVar2;
    }
  }
  return (UField *)0x0;
}

// TryFixShortClassNameExportPath @ 141faedb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UClass::TryFixShortClassNameExportPath(FString *param_1,Type param_2,wchar_t *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FNameEntryId FVar5;
  wchar_t *pwVar6;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58 [16];
  FTopLevelAssetPath local_48;
  FString local_38;
  
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString((FString *)local_58,pwVar6);
  bVar2 = FPackageName::ParseExportTextPath((FString *)local_58,&local_88,&local_68);
  if ((FName)local_58._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (bVar2) {
    bVar2 = FPackageName::IsShortPackageName(&local_88);
    if (bVar2) {
      local_58._0_8_ = local_88.Data.AllocatorInstance.Data;
      FVar5.Value = local_88.Data.ArrayNum - 1;
      if (local_88.Data.ArrayNum == 0) {
        FVar5.Value = 0;
      }
      local_58._8_4_ = FVar5.Value;
      pUVar3 = StaticClass();
      TryConvertShortTypeNameToPathName
                (&local_48,pUVar3,(TStringView<wchar_t> *)local_58,param_2,param_3);
      bVar2 = local_48.PackageName == (FName)0x0;
      if ((local_48.PackageName != (FName)0x0) || (param_4)) {
        if (bVar2) {
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar4 = &local_78;
        }
        else {
          local_58._0_4_ = local_48.PackageName.ComparisonIndex.Value;
          local_58._4_4_ = local_48.PackageName.Number;
          local_58._8_4_ = local_48.AssetName.ComparisonIndex.Value;
          local_58._12_4_ = local_48.AssetName.Number;
          pFVar4 = FObjectPropertyBase::GetExportPath
                             (&local_38,(FTopLevelAssetPath *)local_58,&local_68);
        }
        if (param_1 != pFVar4) {
          pFVar1 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (param_1->Data).ArrayNum = (pFVar4->Data).ArrayNum;
          (param_1->Data).ArrayMax = (pFVar4->Data).ArrayMax;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if ((bVar2) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((!bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        bVar2 = true;
        goto LAB_141faef3b;
      }
    }
  }
  bVar2 = false;
LAB_141faef3b:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FName)local_88.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// __DefaultConstructor @ 141fb1470

void __cdecl UClass::__DefaultConstructor(FObjectInitializer *param_1)

{
  UClass *this;
  UClass *pUVar1;
  FName local_res8;
  
  this = (UClass *)param_1->Obj;
  if (this != (UClass *)0x0) {
    UObject::UObject((UObject *)this,param_1);
    *(undefined4 *)&this->_padding_ = 0xffffffff;
    this->_padding_ = 0;
    this->_padding_ = (longlong)&___7UClass__6B_;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    (this->CppClassStaticFunctions).AddReferencedObjects =
         (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
    this->ClassUnique = 0;
    this->FirstOwnedClassRep = 0;
    this->bCooked = false;
    this->bLayoutChanging = false;
    this->ClassFlags = CLASS_None;
    this->ClassCastFlags = CASTCLASS_None;
    pUVar1 = Z_Construct_UClass_UObject_NoRegister();
    (this->ClassWithin).field0_0x0.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ClassConfigName).ComparisonIndex = 0;
    (this->ClassConfigName).Number = 0;
    (this->ClassReps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ClassReps).ArrayNum = 0;
    (this->ClassReps).ArrayMax = 0;
    (this->NetFields).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NetFields).ArrayNum = 0;
    (this->NetFields).ArrayMax = 0;
    (this->ClassDefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (this->SparseClassDataStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined8 *)&this->FuncMap = 0;
    *(undefined8 *)&(this->FuncMap).field_0x8 = 0;
    *(undefined8 *)&(this->FuncMap).field_0x20 = 0;
    this->SparseClassData = (void *)0x0;
    this->bNeedsDynamicSubobjectInstancing = false;
    *(undefined4 *)&(this->FuncMap).field_0x28 = 0;
    *(undefined4 *)&(this->FuncMap).field_0x2c = 0x80;
    *(undefined4 *)&(this->FuncMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->FuncMap).field_0x34 = 0;
    *(undefined8 *)&(this->FuncMap).field_0x40 = 0;
    *(undefined4 *)&(this->FuncMap).field_0x48 = 0;
    (this->FuncMapLock).Mutex.Mutex.Ptr = (void *)0x0;
    *(undefined8 *)&this->AllFunctionsCache = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x8 = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x20 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x28 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x2c = 0x80;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x34 = 0;
    *(undefined8 *)&(this->AllFunctionsCache).field_0x40 = 0;
    *(undefined4 *)&(this->AllFunctionsCache).field_0x48 = 0;
    (this->AllFunctionsCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
    (this->Interfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Interfaces).ArrayNum = 0;
    (this->Interfaces).ArrayMax = 0;
    (this->ReferenceSchema).SchemaView = 0;
    (this->NativeFunctionLookupTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NativeFunctionLookupTable).ArrayNum = 0;
    (this->NativeFunctionLookupTable).ArrayMax = 0;
    local_res8 = (FName)this->_padding_;
    FLoadTimeProfilerTracePrivate::OutputClassInfo(this,&local_res8);
  }
  return;
}

// __VTableCtorCaller @ 141fb1640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UClass::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UClass__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[2].field_0xe = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x24 = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined4 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 10) = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    *(undefined4 *)&pUVar1[10].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)&pUVar1[0xb].field_0x4 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// AssembleReferenceTokenStream @ 142022830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UClass::AssembleReferenceTokenStream(UClass *this,bool param_1)

{
  code *pcVar1;
  FGCCSyncObject *pFVar2;
  bool bVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  FString local_28;
  
  FLLMScope::FLLMScope(local_res8,GC,false,None,Default,true);
  FMemScope::FMemScope(local_res18,GC,true);
  bVar3 = IsInGameThread();
  pFVar2 = GGCSingleton;
  if (!bVar3) {
    if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xbc,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar2->AsyncCounter).Counter == 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((this->ClassFlags & CLASS_Native) == CLASS_None) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GAssembleSchemaLock);
    AssembleReferenceTokenStreamInternal(this,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GAssembleSchemaLock);
  }
  else {
    AssembleReferenceTokenStreamInternal(this,param_1);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AssembleReferenceTokenStreamInternal @ 142022970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UClass::AssembleReferenceTokenStreamInternal(UClass *this,bool param_1)

{
  UClass *this_00;
  _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *p_Var1;
  code *pcVar2;
  FField *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *p_Var8;
  FSchemaView FVar9;
  ulonglong uVar10;
  longlong lVar11;
  FSchemaView FVar12;
  ulong64 *puVar13;
  ulonglong uVar14;
  _func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *p_Var15;
  undefined1 auStackY_298 [32];
  ForAnyElementType local_248;
  undefined8 local_240;
  FField *local_238;
  TFieldIterator<FProperty> local_230;
  int local_218;
  void *local_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  initializer_list<UE::GC::FMemberDeclaration> local_1f8;
  FString local_1e8;
  FSchemaBuilder local_1d8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((this->ClassFlags >> 0x16 & 1) == 0) {
    if (param_1) goto LAB_1420229b3;
  }
  else {
    if (!param_1) {
      return;
    }
LAB_1420229b3:
    this->ClassFlags = this->ClassFlags & ~CLASS_TokenStreamAssembled;
  }
  local_1f8._First = (FMemberDeclaration *)0x0;
  local_1f8._Last = (FMemberDeclaration *)0x0;
  UE::GC::FSchemaBuilder::FSchemaBuilder(&local_1d8,0,&local_1f8);
  this_00 = (UClass *)this->_padding_;
  p_Var8 = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
  FVar9.Handle = (ulong64)p_Var8;
  if (this_00 != (UClass *)0x0) {
    AssembleReferenceTokenStreamInternal(this_00,false);
    FVar9.Handle = (this_00->ReferenceSchema).SchemaView;
    UE::GC::FSchemaBuilder::Append(&local_1d8,FVar9);
  }
  iVar5 = local_1d8.Members.ArrayNum;
  local_230.Field = (FField *)this->_padding_;
  local_218 = local_1d8.Members.ArrayNum;
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240 = 0;
  local_210 = (void *)0x0;
  local_208 = 0;
  local_230.InterfaceIndex = -1;
  local_230.bIncludeSuper = false;
  local_230.bIncludeDeprecated = true;
  local_230.bIncludeInterface = false;
  local_230.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_230);
  pFVar3 = local_230.Field;
  while (local_230.Field = pFVar3, pFVar3 != (FField *)0x0) {
    local_238 = pFVar3;
    if ((pFVar3 == (FField *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Property",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GarbageCollectionSchema.h"
                           ,0x5d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((local_248.Data <= (FScriptContainerElement *)&local_238) &&
        ((FScriptContainerElement *)&local_238 < local_248.Data + (longlong)local_240._4_4_ * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)local_240;
    if ((int)local_240 == local_240._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_248,(int *)((longlong)&local_240 + 4));
    }
    local_240 = CONCAT44(local_240._4_4_,iVar5 + 1);
    *(FField **)(local_248.Data + (longlong)iVar5 * 8) = local_238;
    (**(code **)(pFVar3->_padding_ + 0x178))(pFVar3,&local_1d8,0,&local_210);
    if ((int)local_240 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = ((int)local_240 - ((int)local_240 + -1)) + -1;
    iVar5 = (int)local_240;
    if (iVar6 != 0) {
      memmove(local_248.Data + (longlong)((int)local_240 + -1) * 8,
              local_248.Data + (longlong)((int)local_240 + -1) * 8 + 8,(longlong)iVar6 << 3);
      iVar5 = (int)local_240;
    }
    local_240 = CONCAT44(local_240._4_4_,iVar5 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_248,iVar5 + -1,(int *)((longlong)&local_240 + 4));
    local_230.Field = pFVar3->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_230);
    pFVar3 = local_230.Field;
    iVar5 = local_218;
  }
  if (local_210 != (void *)0x0) {
    FMemory::Free(local_210);
  }
  if (((int)local_240 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Props.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GarbageCollectionSchema.h"
                         ,0x42,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
  if ((this->ClassFlags & CLASS_Intrinsic) != CLASS_None) {
    uVar7 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    FVar12.Handle = (ulong64)p_Var8;
    if (UE::GC::GIntrinsicClassSchemas._8_4_ != UE::GC::GIntrinsicClassSchemas._52_4_) {
      lVar11 = 0x154b8df48;
      if (UE::GC::GIntrinsicClassSchemas._64_8_ != 0) {
        lVar11 = UE::GC::GIntrinsicClassSchemas._64_8_;
      }
      for (iVar6 = *(int *)(lVar11 + (ulonglong)
                                     (UE::GC::GIntrinsicClassSchemas._72_4_ - 1 &
                                     (uVar7 >> 0x10 ^ uVar7)) * 4); iVar6 != -1;
          iVar6 = *(int *)(UE::GC::GIntrinsicClassSchemas._0_8_ + 0x10 + (longlong)iVar6 * 0x18)) {
        if (*(UClass **)(UE::GC::GIntrinsicClassSchemas._0_8_ + (longlong)iVar6 * 0x18) == this) {
          if (((iVar6 != -1) &&
              (lVar11 = UE::GC::GIntrinsicClassSchemas._0_8_ + (longlong)iVar6 * 0x18, lVar11 != 0))
             && (puVar13 = (ulong64 *)(lVar11 + 8), puVar13 != (ulong64 *)0x0)) {
            FVar12.Handle = *puVar13;
          }
          break;
        }
      }
    }
    UE::GC::FSchemaBuilder::Append(&local_1d8,FVar12);
  }
  uVar7 = *(uint *)(this->_padding_ + 0xd4) >> 0x11;
  if ((local_1d8.Members.ArrayNum == iVar5) && (0 < iVar5)) {
    p_Var1 = *(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr **)(this->_padding_ + 0xc0);
    if ((p_Var1 == (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ARO != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x1ad4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    p_Var15 = p_Var8;
    if (p_Var1 != UObject::AddReferencedObjects) {
      p_Var15 = p_Var1;
    }
    p_Var1 = (this->CppClassStaticFunctions).AddReferencedObjects;
    if ((p_Var1 == (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ARO != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x1ad4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (p_Var1 != UObject::AddReferencedObjects) {
      p_Var8 = p_Var1;
    }
    if (p_Var8 == p_Var15) goto LAB_142022e35;
  }
  if (((this->CppClassStaticFunctions).AddReferencedObjects ==
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ARO != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1ad4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar9 = UE::GC::FSchemaBuilder::Build
                    (&local_1d8,(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)local_200)
  ;
                    /* WARNING: Load size is inaccurate */
  FVar9.Handle = *FVar9.Handle;
LAB_142022e35:
  uVar14 = (uVar7 ^ FVar9.Handle) & 0xfffffffffffffffe ^ (ulonglong)uVar7;
  uVar10 = uVar14 & 0xfffffffffffffffe;
  if (((this->ReferenceSchema).SchemaView & 0xfffffffffffffffe) != uVar10) {
    if (uVar10 != 0) {
      LOCK();
      *(int *)(uVar10 - 4) = *(int *)(uVar10 - 4) + 1;
      UNLOCK();
    }
    FVar9.Handle = (this->ReferenceSchema).SchemaView;
    if ((FVar9.Handle & 0xfffffffffffffffe) != 0) {
      UE::GC::DropSchemaReference(FVar9);
    }
    (this->ReferenceSchema).SchemaView = uVar14;
  }
  if ((this->ClassFlags >> 0x16 & 1) != 0) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_1e8,(UObject *)0x0);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAnyClassFlags(CLASS_TokenStreamAssembled)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1b0c,L"GC schema already assembled for class \'%s\'");
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->ClassFlags = this->ClassFlags | CLASS_TokenStreamAssembled;
  UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_1d8);
  return;
}

// GetDefaultObject @ 1420fa350

UObject * __thiscall UClass::GetDefaultObject(UClass *this,bool param_1)

{
  if (((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) && (param_1)) {
    InternalCreateDefaultObjectWrapper(this);
    return (this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// operator() @ 150483580

bool __thiscall `UClass::CreateDefaultObject'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2910729057672883257>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2910729057672883257>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504835f5;
    }
  }
  bVar2 = false;
LAB_1504835f5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

