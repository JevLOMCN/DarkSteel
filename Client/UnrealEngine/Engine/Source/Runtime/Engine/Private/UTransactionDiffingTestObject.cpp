// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148870bc0

UClass * __cdecl UTransactionDiffingTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransactionDiffingTestObject",
               &Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton,
               StaticRegisterNativesUTransactionDiffingTestObject,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransactionDiffingTestObject>,
               InternalVTableHelperCtorCaller<UTransactionDiffingTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton;
}

// UTransactionDiffingTestObject @ 14887e670

UTransactionDiffingTestObject * __thiscall
UTransactionDiffingTestObject::UTransactionDiffingTestObject
          (UTransactionDiffingTestObject *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->AdditionalSoftObject).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTransactionDiffingTestObject__6B_;
  (this->NamesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamesArray).ArrayNum = 0;
  (this->NamesArray).ArrayMax = 0;
  (this->AdditionalName).ComparisonIndex = 0;
  (this->AdditionalName).Number = 0;
  (this->ObjectsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsArray).ArrayNum = 0;
  (this->ObjectsArray).ArrayMax = 0;
  (this->AdditionalObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SoftObjectsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftObjectsArray).ArrayNum = 0;
  (this->SoftObjectsArray).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->PropertyData = 0;
  this->NonPropertyData = 0;
  return this;
}

// UTransactionDiffingTestObject @ 14887e6f0

UTransactionDiffingTestObject * __thiscall
UTransactionDiffingTestObject::UTransactionDiffingTestObject
          (UTransactionDiffingTestObject *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->AdditionalSoftObject).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UTransactionDiffingTestObject__6B_;
  (this->NamesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamesArray).ArrayNum = 0;
  (this->NamesArray).ArrayMax = 0;
  (this->AdditionalName).ComparisonIndex = 0;
  (this->AdditionalName).Number = 0;
  (this->ObjectsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectsArray).ArrayNum = 0;
  (this->ObjectsArray).ArrayMax = 0;
  (this->AdditionalObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->SoftObjectsArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftObjectsArray).ArrayNum = 0;
  (this->SoftObjectsArray).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->PropertyData = 0;
  this->NonPropertyData = 0;
  return this;
}

// ~UTransactionDiffingTestObject @ 14887f0e0

void __thiscall
UTransactionDiffingTestObject::~UTransactionDiffingTestObject(UTransactionDiffingTestObject *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UTransactionDiffingTestObject__6B_;
  pvVar1 = *(void **)&(this->AdditionalSoftObject).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<TSoftObjectPtr<UObject>,int>
            ((TSoftObjectPtr<UObject> *)(this->SoftObjectsArray).AllocatorInstance.Data,
             (this->SoftObjectsArray).ArrayNum);
  pFVar2 = (this->SoftObjectsArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjectsArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NamesArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14888fe60

UClass * __cdecl UTransactionDiffingTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransactionDiffingTestObject",
               &Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton,
               StaticRegisterNativesUTransactionDiffingTestObject,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransactionDiffingTestObject>,
               InternalVTableHelperCtorCaller<UTransactionDiffingTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransactionDiffingTestObject.InnerSingleton;
}

// Serialize @ 148898ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTransactionDiffingTestObject::Serialize(UTransactionDiffingTestObject *this,FArchive *param_1)

{
  int *piVar1;
  FStructuredArchiveRecord FVar2;
  FArchive *this_00;
  int *piVar3;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this_01);
  FVar2 = *(FStructuredArchiveRecord *)FVar4;
  UObject::Serialize((UObject *)this,FVar2);
  piVar1 = &this->NonPropertyData;
  this_00 = *(FArchive **)(*(longlong *)FVar2 + 8);
  piVar3 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar3 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// Serialize @ 148898fb0

void __thiscall
UTransactionDiffingTestObject::Serialize
          (UTransactionDiffingTestObject *this,FStructuredArchiveRecord param_1)

{
  int *piVar1;
  FArchive *this_00;
  int *piVar2;
  
  UObject::Serialize((UObject *)this,param_1);
  piVar1 = &this->NonPropertyData;
  this_00 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return;
  }
  if ((this_00->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148899019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)piVar1);
  return;
}

// StaticRegisterNativesUTransactionDiffingTestObject @ 14889bc00

void __cdecl UTransactionDiffingTestObject::StaticRegisterNativesUTransactionDiffingTestObject(void)

{
  return;
}

