// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 1422c5c90

UClass * __cdecl USubobjectInstancingTestOuterObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestOuterObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestOuterObject,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestOuterObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestOuterObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton;
}

// USubobjectInstancingTestOuterObject @ 1422ceb30

USubobjectInstancingTestOuterObject * __thiscall
USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
          (USubobjectInstancingTestOuterObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubobjectInstancingTestOuterObject__6B_;
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->NullObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->SharedObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->ExternalObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InternalObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->TransientInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->EditTimeInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->LocalOnlyInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObjectFromType).field0_0x0.DebugPtr =
       (USubobjectInstancingDefaultToInstancedTestObject *)0x0;
  (this->InnerObjectUsingNew).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObjectPostInit).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObjectArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerObjectArray).ArrayNum = 0;
  (this->InnerObjectArray).ArrayMax = 0;
  (this->InnerObjectFromTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InnerObjectFromTypeArray).ArrayNum = 0;
  (this->InnerObjectFromTypeArray).ArrayMax = 0;
  *(undefined8 *)&(this->InnerObjectSet).Elements = 0;
  *(undefined8 *)&(this->InnerObjectSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x30 = 0xffffffff;
  (this->InnerObjectSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InnerObjectSet).HashSize = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x30 = 0xffffffff;
  (this->InnerObjectFromTypeSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InnerObjectFromTypeSet).HashSize = 0;
  *(undefined8 *)&this->InnerObjectMap = 0;
  *(undefined8 *)&(this->InnerObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectMap).field_0x34 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InnerObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->InnerObjectFromTypeMap = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x34 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x48 = 0;
  (this->StructWithInnerObjects).InnerObject.field0_0x0.DebugPtr =
       (USubobjectInstancingTestObject *)0x0;
  (this->StructWithInnerObjects).InnerObjectFromType.field0_0x0.DebugPtr =
       (USubobjectInstancingDefaultToInstancedTestObject *)0x0;
  (this->StructWithInnerObjects).InnerObjectArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StructWithInnerObjects).InnerObjectArray.ArrayNum = 0;
  (this->StructWithInnerObjects).InnerObjectArray.ArrayMax = 0;
  (this->OptionalInnerObject).bIsSet = false;
  (this->OptionalInnerObjectFromType).bIsSet = false;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayNum = 0;
  (this->InnerObjectWithDirectlyNestedObject).field0_0x0.DebugPtr =
       (USubobjectInstancingTestDirectlyNestedObject *)0x0;
  (this->InnerObjectWithIndirectlyNestedObject).field0_0x0.DebugPtr =
       (USubobjectInstancingTestIndirectlyNestedObject *)0x0;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayMax = -1;
  return this;
}

// USubobjectInstancingTestOuterObject @ 1422ced00

USubobjectInstancingTestOuterObject * __thiscall
USubobjectInstancingTestOuterObject::USubobjectInstancingTestOuterObject
          (USubobjectInstancingTestOuterObject *this,FObjectInitializer *param_1)

{
  TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int *piVar3;
  TOptional<TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  int *piVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  UClass *pUVar12;
  USubobjectInstancingTestObject *pUVar13;
  UPackage *pUVar14;
  USubobjectInstancingDefaultToInstancedTestObject *pUVar15;
  USubobjectInstancingTestOuterObject *pUVar16;
  USubobjectInstancingTestDirectlyNestedObject *pUVar17;
  USubobjectInstancingTestIndirectlyNestedObject *pUVar18;
  TObjectPtr<USubobjectInstancingTestObject> local_res8;
  TObjectPtr<USubobjectInstancingTestObject> local_res18;
  TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject> local_res20;
  UObject *local_248;
  UObject *local_240;
  UObject *local_238;
  UObject *local_230;
  UObject *local_228;
  UObject *local_220;
  UObject *local_218;
  UObject *local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject> local_1f8;
  UObject *local_1f0;
  UObject *local_1e8;
  UObject *local_1e0;
  UObject *local_1d8;
  UObject *local_1d0;
  UObject *local_1c8;
  UObject *local_1c0;
  UObject *local_1b8;
  UObject *local_1b0;
  UObject *local_1a8;
  UObject *local_1a0;
  UObject *local_198;
  UObject **local_190;
  UObject **local_188;
  UObject **local_180;
  UObject **local_178;
  UObject **local_170;
  UObject **local_168;
  UObject **local_160;
  UObject **local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  undefined8 local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  undefined8 local_40;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubobjectInstancingTestOuterObject__6B_;
  pTVar1 = &this->InnerObjectArray;
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&(this->InnerObjectSet).Elements = 0;
  pTVar2 = &this->InnerObjectFromTypeArray;
  *(undefined8 *)&(this->InnerObjectSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectSet).Elements.field_0x20 = 0;
  (this->NullObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->SharedObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->ExternalObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InternalObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->TransientInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->EditTimeInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->LocalOnlyInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObjectFromType).field0_0x0.DebugPtr =
       (USubobjectInstancingDefaultToInstancedTestObject *)0x0;
  (this->InnerObjectUsingNew).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (this->InnerObjectPostInit).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InnerObjectArray).ArrayNum = 0;
  (this->InnerObjectArray).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InnerObjectFromTypeArray).ArrayNum = 0;
  (this->InnerObjectFromTypeArray).ArrayMax = 0;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InnerObjectSet).Elements.field_0x34 = 0;
  (this->InnerObjectSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InnerObjectSet).HashSize = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InnerObjectFromTypeSet).Elements.field_0x34 = 0;
  (this->InnerObjectFromTypeSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InnerObjectFromTypeSet).HashSize = 0;
  *(undefined8 *)&this->InnerObjectMap = 0;
  *(undefined8 *)&(this->InnerObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InnerObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->InnerObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->InnerObjectMap).field_0x48 = 0;
  *(undefined8 *)&this->InnerObjectFromTypeMap = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->InnerObjectFromTypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x48 = 0;
  (this->StructWithInnerObjects).InnerObject.field0_0x0.DebugPtr =
       (USubobjectInstancingTestObject *)0x0;
  (this->StructWithInnerObjects).InnerObjectFromType.field0_0x0.DebugPtr =
       (USubobjectInstancingDefaultToInstancedTestObject *)0x0;
  (this->StructWithInnerObjects).InnerObjectArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StructWithInnerObjects).InnerObjectArray.ArrayNum = 0;
  (this->StructWithInnerObjects).InnerObjectArray.ArrayMax = 0;
  (this->OptionalInnerObject).bIsSet = false;
  (this->OptionalInnerObjectFromType).bIsSet = false;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayNum = 0;
  (this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayMax = -1;
  (this->InnerObjectWithDirectlyNestedObject).field0_0x0.DebugPtr =
       (USubobjectInstancingTestDirectlyNestedObject *)0x0;
  (this->InnerObjectWithIndirectlyNestedObject).field0_0x0.DebugPtr =
       (USubobjectInstancingTestIndirectlyNestedObject *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (this->SelfRef).field0_0x0.DebugPtr = (UObject *)this;
  (this->NullObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  pFVar11 = ::FName::FName(&local_c0,L"InnerObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->InnerObject).field0_0x0.DebugPtr = pUVar13;
  pFVar11 = ::FName::FName(&local_58,L"SharedObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->SharedObject).field0_0x0.DebugPtr = pUVar13;
  pFVar11 = ::FName::FName(&local_50,L"ExternalObject");
  FVar6 = *pFVar11;
  pUVar14 = GetTransientPackage();
  pUVar13 = NewObject<USubobjectInstancingTestObject>
                      ((UObject *)pUVar14,FVar6,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->ExternalObject).field0_0x0.DebugPtr = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (this->InnerObject).field0_0x0.DebugPtr,
     pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->InternalObject).field0_0x0 = (this->InnerObject).field0_0x0;
  pFVar11 = ::FName::FName(&local_48,L"TransientInnerObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->TransientInnerObject).field0_0x0.DebugPtr = pUVar13;
  (this->EditTimeInnerObject).field0_0x0.DebugPtr = (USubobjectInstancingTestObject *)0x0;
  pFVar11 = ::FName::FName(&local_150,L"LocalOnlyInnerObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->LocalOnlyInnerObject).field0_0x0.DebugPtr = pUVar13;
  pFVar11 = ::FName::FName(&local_148,L"InnerObjectFromType");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  pUVar15 = (USubobjectInstancingDefaultToInstancedTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (USubobjectInstancingDefaultToInstancedTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->InnerObjectFromType).field0_0x0.DebugPtr = pUVar15;
  pFVar11 = ::FName::FName(&local_140,L"InnerObjectUsingNew");
  pUVar13 = NewObject<USubobjectInstancingTestObject>
                      ((UObject *)this,*pFVar11,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->InnerObjectUsingNew).field0_0x0.DebugPtr = pUVar13;
  pFVar11 = ::FName::FName(&local_138,L"InnerObjectArrayElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_240 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_240 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_240);
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_240) &&
     ((FScriptContainerElement *)&local_240 <
      pFVar7 + (longlong)(this->InnerObjectArray).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->InnerObjectArray).ArrayNum;
  if (iVar10 == (this->InnerObjectArray).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar1->AllocatorInstance,&(this->InnerObjectArray).ArrayMax);
  }
  (this->InnerObjectArray).ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_240;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_240 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_240);
  }
  pFVar11 = ::FName::FName(&local_130,L"InnerObjectArrayElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_238 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_238);
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_238) &&
     ((FScriptContainerElement *)&local_238 <
      pFVar7 + (longlong)(this->InnerObjectArray).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->InnerObjectArray).ArrayNum;
  if (iVar10 == (this->InnerObjectArray).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar1->AllocatorInstance,&(this->InnerObjectArray).ArrayMax);
  }
  (this->InnerObjectArray).ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_238;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_238);
  }
  pFVar11 = ::FName::FName(&local_128,L"InnerObjectFromTypeArrayElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_230 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_230);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_230) &&
     ((FScriptContainerElement *)&local_230 <
      pFVar7 + (longlong)(this->InnerObjectFromTypeArray).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->InnerObjectFromTypeArray).ArrayNum;
  if (iVar10 == (this->InnerObjectFromTypeArray).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,&(this->InnerObjectFromTypeArray).ArrayMax)
    ;
  }
  (this->InnerObjectFromTypeArray).ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_230;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_230);
  }
  pFVar11 = ::FName::FName(&local_120,L"InnerObjectFromTypeArrayElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_248 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_248 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_248);
  }
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_248) &&
     ((FScriptContainerElement *)&local_248 <
      pFVar7 + (longlong)(this->InnerObjectFromTypeArray).ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->InnerObjectFromTypeArray).ArrayNum;
  if (iVar10 == (this->InnerObjectFromTypeArray).ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,&(this->InnerObjectFromTypeArray).ArrayMax)
    ;
  }
  (this->InnerObjectFromTypeArray).ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_248;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_248 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_248);
  }
  pFVar11 = ::FName::FName(&local_118,L"InnerObjectSetElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1f0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1f0);
  }
  TSet<TObjectPtr<USubobjectInstancingTestObject>,DefaultKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<USubobjectInstancingTestObject>_>
            (&this->InnerObjectSet,&local_res8,(bool *)&local_1f0);
  pFVar11 = ::FName::FName(&local_110,L"InnerObjectSetElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1e8 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1e8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1e8);
  }
  TSet<TObjectPtr<USubobjectInstancingTestObject>,DefaultKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<USubobjectInstancingTestObject>_>
            (&this->InnerObjectSet,&local_res18,(bool *)&local_1e8);
  pFVar11 = ::FName::FName(&local_108,L"InnerObjectFromTypeSetElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_1e0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1e0);
  }
  TSet<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,DefaultKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>
            (&this->InnerObjectFromTypeSet,&local_res20,(bool *)&local_1e0);
  pFVar11 = ::FName::FName(&local_100,L"InnerObjectFromTypeSetElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_1d8 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1d8);
  }
  TSet<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,DefaultKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>
            (&this->InnerObjectFromTypeSet,&local_1f8,(bool *)&local_1d8);
  pFVar11 = ::FName::FName(&local_f8,L"InnerObjectMapVal_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1c8 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1c8);
  }
  pFVar11 = ::FName::FName(&local_f0,L"InnerObjectMapKey_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1d0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1d0);
  }
  local_180 = &local_1d0;
  local_178 = &local_1c8;
  TSet<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<USubobjectInstancingTestObject>_&&,TObjectPtr<USubobjectInstancingTestObject>_&&>_>
            ((TSet<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
              *)&this->InnerObjectMap,
             (TPairInitializer<TObjectPtr<USubobjectInstancingTestObject>_&&,TObjectPtr<USubobjectInstancingTestObject>_&&>
              *)local_208,(bool *)&local_180);
  pFVar11 = ::FName::FName(&local_e8,L"InnerObjectMapVal_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1b8 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1b8);
  }
  pFVar11 = ::FName::FName(&local_e0,L"InnerObjectMapKey_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_1c0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1c0);
  }
  local_170 = &local_1c0;
  local_168 = &local_1b8;
  TSet<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<USubobjectInstancingTestObject>_&&,TObjectPtr<USubobjectInstancingTestObject>_&&>_>
            ((TSet<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>,0>,FDefaultSetAllocator>
              *)&this->InnerObjectMap,
             (TPairInitializer<TObjectPtr<USubobjectInstancingTestObject>_&&,TObjectPtr<USubobjectInstancingTestObject>_&&>
              *)(local_208 + 4),(bool *)&local_170);
  pFVar11 = ::FName::FName(&local_d8,L"InnerObjectFromTypeMapVal_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_1a8 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1a8);
  }
  pFVar11 = ::FName::FName(&local_d0,L"InnerObjectFromTypeMapKey_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_1b0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1b0);
  }
  local_160 = &local_1b0;
  local_158 = &local_1a8;
  TSet<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&>_>
            ((TSet<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
              *)&this->InnerObjectFromTypeMap,
             (TPairInitializer<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&>
              *)local_200,(bool *)&local_160);
  pFVar11 = ::FName::FName(&local_c8,L"InnerObjectFromTypeMapVal_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_198 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_198);
  }
  pFVar11 = ::FName::FName(&local_80,L"InnerObjectFromTypeMapKey_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  local_1a0 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1a0);
  }
  local_190 = &local_1a0;
  local_188 = &local_198;
  TSet<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&>_>
            ((TSet<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,0>,FDefaultSetAllocator>
              *)&this->InnerObjectFromTypeMap,
             (TPairInitializer<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_&&>
              *)(local_200 + 4),(bool *)&local_190);
  pFVar11 = ::FName::FName(&local_b8,L"InnerObjectForStruct");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->StructWithInnerObjects).InnerObject.field0_0x0.DebugPtr = pUVar13;
  pFVar11 = ::FName::FName(&local_b0,L"InnerObjectFromTypeForStruct");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  pUVar15 = (USubobjectInstancingDefaultToInstancedTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (USubobjectInstancingDefaultToInstancedTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->StructWithInnerObjects).InnerObjectFromType.field0_0x0.DebugPtr = pUVar15;
  pTVar1 = &(this->StructWithInnerObjects).InnerObjectArray;
  pFVar11 = ::FName::FName(&local_a8,L"InnerObjectForStructArrayElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_228 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_228);
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_228) &&
     ((FScriptContainerElement *)&local_228 <
      pFVar7 + (longlong)(this->StructWithInnerObjects).InnerObjectArray.ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->StructWithInnerObjects).InnerObjectArray.ArrayNum;
  piVar3 = &(this->StructWithInnerObjects).InnerObjectArray.ArrayMax;
  if (iVar10 == (this->StructWithInnerObjects).InnerObjectArray.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->StructWithInnerObjects).InnerObjectArray.ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_228;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_228);
  }
  pFVar11 = ::FName::FName(&local_a0,L"InnerObjectForStructArrayElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_220 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_220);
  }
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_220) &&
     ((FScriptContainerElement *)&local_220 <
      pFVar7 + (longlong)(this->StructWithInnerObjects).InnerObjectArray.ArrayMax * 8)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = (this->StructWithInnerObjects).InnerObjectArray.ArrayNum;
  if (iVar10 == (this->StructWithInnerObjects).InnerObjectArray.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->StructWithInnerObjects).InnerObjectArray.ArrayNum = iVar10 + 1;
  *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_220;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_220);
  }
  pFVar11 = ::FName::FName(&local_98,L"OptionalInnerObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  pUVar13 = (USubobjectInstancingTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  if ((TOptional<TObjectPtr<USubobjectInstancingTestObject>_> *)&local_90 !=
      &this->OptionalInnerObject) {
    (this->OptionalInnerObject).TypedValue.field0_0x0.DebugPtr = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar13 != (USubobjectInstancingTestObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->OptionalInnerObject).bIsSet = true;
  }
  pFVar11 = ::FName::FName(&local_88,L"OptionalInnerObjectFromType");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingDefaultToInstancedTestObject::StaticClass();
  pUVar15 = (USubobjectInstancingDefaultToInstancedTestObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (USubobjectInstancingDefaultToInstancedTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  if ((TOptional<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_> *)&local_40 !=
      &this->OptionalInnerObjectFromType) {
    (this->OptionalInnerObjectFromType).TypedValue.field0_0x0.DebugPtr = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (USubobjectInstancingDefaultToInstancedTestObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->OptionalInnerObjectFromType).bIsSet = true;
  }
  pTVar4 = &this->OptionalInnerObjectArray;
  pFVar7 = (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayNum;
  piVar5 = &(this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayMax;
  *piVar3 = 0;
  *piVar5 = 0;
  pFVar11 = ::FName::FName(&local_78,L"OptionalInnerObjectArrayElem_0");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_218 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_218);
  }
  if ((*(UObject ***)&pTVar4->field0_0x0 <= &local_218) &&
     (&local_218 < *(UObject ***)&pTVar4->field0_0x0 + *piVar5)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = *piVar3;
  if (iVar10 == *piVar5) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pTVar4,piVar5);
  }
  *piVar3 = iVar10 + 1;
  *(UObject **)((pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data + (longlong)iVar10 * 8) =
       local_218;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_218);
  }
  if (*piVar5 == -1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  pFVar11 = ::FName::FName(&local_70,L"OptionalInnerObjectArrayElem_1");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestObject::StaticClass();
  local_210 = UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_210);
  }
  if ((*(UObject ***)&pTVar4->field0_0x0 <= &local_210) &&
     (&local_210 < *(UObject ***)&pTVar4->field0_0x0 + *piVar5)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pUVar16 = (USubobjectInstancingTestOuterObject *)(*pcVar8)();
      return pUVar16;
    }
  }
  iVar10 = *piVar3;
  if (iVar10 == *piVar5) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pTVar4,piVar5);
  }
  *piVar3 = iVar10 + 1;
  *(UObject **)((pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data + (longlong)iVar10 * 8) =
       local_210;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_210);
  }
  pFVar11 = ::FName::FName(&local_68,L"InnerObjectWithDirectlyNestedObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestDirectlyNestedObject::StaticClass();
  pUVar17 = (USubobjectInstancingTestDirectlyNestedObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (USubobjectInstancingTestDirectlyNestedObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->InnerObjectWithDirectlyNestedObject).field0_0x0.DebugPtr = pUVar17;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar17->OwnerObject).field0_0x0.DebugPtr = (UObject *)this;
  pFVar11 = ::FName::FName(&local_60,L"InnerObjectWithIndirectlyNestedObject");
  FVar6 = *pFVar11;
  pUVar12 = USubobjectInstancingTestIndirectlyNestedObject::StaticClass();
  pUVar18 = (USubobjectInstancingTestIndirectlyNestedObject *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar12,pUVar12,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar18 != (USubobjectInstancingTestIndirectlyNestedObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->InnerObjectWithIndirectlyNestedObject).field0_0x0.DebugPtr = pUVar18;
  return this;
}

// ~USubobjectInstancingTestOuterObject @ 1422d14b0

void __thiscall
USubobjectInstancingTestOuterObject::~USubobjectInstancingTestOuterObject
          (USubobjectInstancingTestOuterObject *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7USubobjectInstancingTestOuterObject__6B_;
  if (((this->OptionalInnerObjectArray).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->OptionalInnerObjectArray).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StructWithInnerObjects).InnerObjectArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->InnerObjectFromTypeMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InnerObjectFromTypeMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>,TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InnerObjectFromTypeMap);
  *(undefined4 *)&(this->InnerObjectMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InnerObjectMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USubobjectInstancingTestObject>,TObjectPtr<USubobjectInstancingTestObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InnerObjectMap);
  (this->InnerObjectFromTypeSet).HashSize = 0;
  FVar3 = (this->InnerObjectFromTypeSet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InnerObjectFromTypeSet).Elements);
  (this->InnerObjectSet).HashSize = 0;
  FVar3 = (this->InnerObjectSet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USubobjectInstancingTestObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USubobjectInstancingTestObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InnerObjectSet).Elements);
  pFVar1 = (this->InnerObjectFromTypeArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InnerObjectArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d3540

UClass * __cdecl USubobjectInstancingTestOuterObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SubobjectInstancingTestOuterObject",
               &Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton,
               StaticRegisterNativesUSubobjectInstancingTestOuterObject,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubobjectInstancingTestOuterObject>,
               InternalVTableHelperCtorCaller<USubobjectInstancingTestOuterObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubobjectInstancingTestOuterObject.InnerSingleton;
}

// PostInitProperties @ 1422d3840

void __thiscall
USubobjectInstancingTestOuterObject::PostInitProperties(USubobjectInstancingTestOuterObject *this)

{
  FName *pFVar1;
  USubobjectInstancingTestObject *pUVar2;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  pFVar1 = ::FName::FName(&local_res8,L"InnerObjectPostInit");
  pUVar2 = NewObject<USubobjectInstancingTestObject>
                     ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (USubobjectInstancingTestObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->InnerObjectPostInit).field0_0x0.DebugPtr = pUVar2;
  return;
}

// StaticRegisterNativesUSubobjectInstancingTestOuterObject @ 1422e3e10

void __cdecl
USubobjectInstancingTestOuterObject::StaticRegisterNativesUSubobjectInstancingTestOuterObject(void)

{
  return;
}

