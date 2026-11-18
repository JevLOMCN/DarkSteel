// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 14773ae50

UScriptStruct * __cdecl FInstanceCacheDataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstanceCacheDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInstanceCacheDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstanceCacheDataBase,(UObject *)pUVar1,
                         L"InstanceCacheDataBase");
  }
  return Z_Registration_Info_UScriptStruct_FInstanceCacheDataBase.OuterSingleton;
}

// ~FInstanceCacheDataBase @ 1477f37c0

void __thiscall FInstanceCacheDataBase::~FInstanceCacheDataBase(FInstanceCacheDataBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FInstanceCacheDataBase__6B_;
  pFVar1 = (this->ReferencedNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReferencedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DuplicatedObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SavedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddReferencedObjects @ 147805020

void __thiscall
FInstanceCacheDataBase::AddReferencedObjects
          (FInstanceCacheDataBase *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ReferencedObjects).AllocatorInstance.Data,
             (this->ReferencedObjects).ArrayNum,0,0);
  return;
}

// GetUniqueTransientObject @ 14783e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
FInstanceCacheDataBase::GetUniqueTransientObject(FInstanceCacheDataBase *this,UClass *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStackY_f8 [32];
  FScopedAllowAbstractClassAllocation local_b8 [8];
  UObject *local_b0;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pUVar4 = (param_1->ClassWithin).field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) && (pUVar4 != param_1)) {
    pUVar1 = Z_Construct_UClass_UObject_NoRegister();
    pUVar4 = (param_1->ClassWithin).field0_0x0.DebugPtr;
    if (pUVar4 == (UClass *)0x0) {
      bVar6 = pUVar1 == (UClass *)0x0;
    }
    else {
      bVar6 = pUVar4 == pUVar1;
    }
    if (!bVar6) {
      FScopedAllowAbstractClassAllocation::FScopedAllowAbstractClassAllocation(local_b8);
      pUVar4 = (param_1->ClassWithin).field0_0x0.DebugPtr;
      local_b0 = (UObject *)0x0;
      pUVar2 = GetUniqueTransientObject(this,pUVar4);
      pUVar2 = NewObject<UObject>(pUVar2,pUVar4,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      FScopedAllowAbstractClassAllocation::~FScopedAllowAbstractClassAllocation(local_b8);
      return pUVar2;
    }
  }
  if ((this->UniqueTransientPackage).DuplicatedObject == (UObject *)0x0) {
    FScopedAllowAbstractClassAllocation::FScopedAllowAbstractClassAllocation(local_b8);
    pUVar3 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._8_8_ = pUVar3;
    local_b0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    iStack_a8 = 0;
    for (pUVar2 = local_b0; pUVar2 != (UObject *)0x0; pUVar2 = *(UObject **)&pUVar2->field_0x20) {
      iStack_a8 = iStack_a8 + 1;
    }
    (this->UniqueTransientPackage).DuplicatedObject = local_b0;
    *(ulonglong *)&(this->UniqueTransientPackage).ObjectPathDepth = CONCAT44(uStack_a4,iStack_a8);
    FScopedAllowAbstractClassAllocation::~FScopedAllowAbstractClassAllocation(local_b8);
  }
  return (this->UniqueTransientPackage).DuplicatedObject;
}

// FInstanceCacheDataBase @ 1478a7810

FInstanceCacheDataBase * __thiscall
FInstanceCacheDataBase::FInstanceCacheDataBase
          (FInstanceCacheDataBase *this,FInstanceCacheDataBase *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FDataCacheDuplicatedObjectData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  
  pTVar1 = &this->SavedProperties;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FInstanceCacheDataBase__6B_;
  iVar6 = (param_1->SavedProperties).ArrayNum;
  piVar2 = &(this->SavedProperties).ArrayMax;
  pFVar7 = (param_1->SavedProperties).AllocatorInstance.Data;
  (this->SavedProperties).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  iVar6 = (param_1->UniqueTransientPackage).ObjectPathDepth;
  uVar8 = *(undefined4 *)&(param_1->UniqueTransientPackage).field_0xc;
  pTVar3 = &this->DuplicatedObjects;
  piVar2 = &(this->DuplicatedObjects).ArrayMax;
  (this->UniqueTransientPackage).DuplicatedObject =
       (param_1->UniqueTransientPackage).DuplicatedObject;
  (this->UniqueTransientPackage).ObjectPathDepth = iVar6;
  *(undefined4 *)&(this->UniqueTransientPackage).field_0xc = uVar8;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->DuplicatedObjects).ArrayNum;
  pFVar7 = (param_1->DuplicatedObjects).AllocatorInstance.Data;
  (this->DuplicatedObjects).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  pTVar4 = &this->ReferencedObjects;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ReferencedObjects).ArrayMax;
  iVar6 = (param_1->ReferencedObjects).ArrayNum;
  pFVar7 = (param_1->ReferencedObjects).AllocatorInstance.Data;
  (this->ReferencedObjects).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar4->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar7,iVar6);
  }
  pTVar5 = &this->ReferencedNames;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ReferencedNames).ArrayMax;
  iVar6 = (param_1->ReferencedNames).ArrayNum;
  pFVar7 = (param_1->ReferencedNames).AllocatorInstance.Data;
  (this->ReferencedNames).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  return this;
}

