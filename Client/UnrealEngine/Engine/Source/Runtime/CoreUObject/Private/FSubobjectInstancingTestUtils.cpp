// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// CreateDynamicallyInstancedTestClass @ 1422d26d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
UE::FSubobjectInstancingTestUtils::CreateDynamicallyInstancedTestClass(UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  FObjectProperty *pFVar5;
  FFieldClass *pFVar6;
  FObjectPropertyBase *this;
  UClass *pUVar7;
  FObjectPropertyBase *this_00;
  FObjectPropertyBase *this_01;
  FObjectPropertyBase *this_02;
  USubobjectInstancingTestObject *pUVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  undefined1 auStackY_128 [32];
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong auStack_c8 [2];
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (UClass *)0x0) {
    param_1 = USubobjectInstancingTestObject::StaticClass();
  }
  this = (FObjectPropertyBase *)0x0;
  pUVar3 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UDynamicSubobjectInstancingTestClass::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_b8,pUVar4);
  auStack_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_b8._56_8_ = (UPackage *)0x0;
  auStack_b8._16_4_ = 0;
  auStack_b8._20_4_ = 0;
  auStack_b8._24_4_ = RF_Transient|RF_Public;
  auStack_b8._40_8_ = (UObject *)0x0;
  auStack_b8[0x20] = false;
  auStack_b8._8_8_ = pUVar3;
  pUVar4 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
  if (auStack_b8._64_8_ != 0) {
    plVar9 = (longlong *)(auStack_b8 + 0x50);
    if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)auStack_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  plVar9 = &pUVar4->_padding_;
  pUVar4->ClassFlags =
       pUVar4->ClassFlags |
       param_1->ClassFlags &
       (CLASS_ConfigDoNotCheckDefaults|CLASS_GlobalUserConfig|CLASS_Deprecated|
        CLASS_HasInstancedReference|CLASS_DefaultToInstanced|CLASS_NeedsDeferredDependencyLoading|
        CLASS_Const|CLASS_PerPlatformConfig|CLASS_PerObjectConfig|CLASS_NotPlaceable|
        CLASS_ProjectUserConfig|CLASS_Optional|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig) |
       CLASS_CompiledFromBlueprint;
  pUVar4->ClassCastFlags = pUVar4->ClassCastFlags | param_1->ClassCastFlags;
  pUVar4->ClassFlags = pUVar4->ClassFlags | CLASS_HasInstancedReference;
  if ((plVar9 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListStartPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                         ,0x3d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UClass *)(*pcVar1)();
    return pUVar4;
  }
  uVar10 = 0x106000000080000;
  if (pUVar4->bNeedsDynamicSubobjectInstancing != false) {
    uVar10 = 0x104000000000000;
  }
  uVar11 = uVar10 | 0x1000000000000000;
  if (pUVar4->bNeedsDynamicSubobjectInstancing != false) {
    uVar11 = uVar10;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 != (FObjectProperty *)0x0) {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    uStack_e0 = (ulonglong)pUVar4 | 1;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    if (((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe));
    }
    this = (FObjectPropertyBase *)
           FObjectProperty::FObjectProperty
                     (pFVar5,(FFieldVariant)&uStack_e0,
                      &SubobjectInstancingTest::Private::NonNativeSelfReferencePropertyName,
                      RF_Transient|RF_Public);
  }
  pUVar12 = (UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe);
  uVar13 = (ulonglong)pUVar4 | 1;
  this->_padding_ = this->_padding_ | uVar11;
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  FObjectPropertyBase::SetPropertyClass(this,pUVar7);
  if ((FObjectPropertyBase *)*plVar9 != this) {
    *plVar9 = (longlong)this;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 == (FObjectProperty *)0x0) {
    this_00 = (FObjectPropertyBase *)0x0;
  }
  else {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    uStack_d8 = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_00 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)&uStack_d8,
                         &SubobjectInstancingTest::Private::NonNativeInnerObjectPropertyName,
                         RF_Transient|RF_Public);
  }
  this_01 = (FObjectPropertyBase *)0x0;
  this_00->_padding_ = this_00->_padding_ | uVar10;
  pUVar7 = USubobjectInstancingTestObject::StaticClass();
  FObjectPropertyBase::SetPropertyClass(this_00,pUVar7);
  if ((FObjectPropertyBase *)this->_padding_ != this_00) {
    this->_padding_ = (longlong)this_00;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 != (FObjectProperty *)0x0) {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    uStack_d0 = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_01 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)&uStack_d0,
                         &SubobjectInstancingTest::Private::NonNativeOuterObjectPropertyName,
                         RF_Transient|RF_Public);
  }
  this_01->_padding_ = this_01->_padding_ | uVar10;
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  FObjectPropertyBase::SetPropertyClass(this_01,pUVar7);
  if ((FObjectPropertyBase *)this_00->_padding_ != this_01) {
    this_00->_padding_ = (longlong)this_01;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 == (FObjectProperty *)0x0) {
    this_02 = (FObjectPropertyBase *)0x0;
  }
  else {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    auStack_c8[0] = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_02 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)auStack_c8,
                         &SubobjectInstancingTest::Private::NonNativeEditTimeInnerObjectPropertyName
                         ,RF_Transient|RF_Public);
  }
  this_02->_padding_ = this_02->_padding_ | uVar10;
  pUVar7 = USubobjectInstancingTestObject::StaticClass();
  FObjectPropertyBase::SetPropertyClass(this_02,pUVar7);
  if ((FObjectPropertyBase *)this_01->_padding_ != this_02) {
    this_01->_padding_ = (longlong)this_02;
  }
  (**(code **)(pUVar4->_padding_ + 800))(pUVar4,param_1);
  (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4);
  UStruct::StaticLink((UStruct *)pUVar4,true);
  UClass::AssembleReferenceTokenStream(pUVar4,false);
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar12 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x3c8))(pUVar4,pUVar12);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this,pUVar12,pUVar12,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NonNativeInnerObjectName,L"NonNativeInnerObject");
    _Init_thread_footer(&::_TSS0);
  }
  pUVar8 = NewObject<USubobjectInstancingTestObject>
                     (pUVar12,NonNativeInnerObjectName,
                      *(EObjectFlags *)&pUVar12->field_0x8 &
                      (RF_Transient|RF_Transactional|RF_Public) | RF_ArchetypeObject,(UObject *)0x0,
                      false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,pUVar12,(UObject *)pUVar8,0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_01,pUVar12,(UObject *)0x0,0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_02,pUVar12,(UObject *)0x0,0);
  return pUVar4;
}

// CreateNonNativeInstancingTestClass @ 1422d29a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
UE::FSubobjectInstancingTestUtils::CreateNonNativeInstancingTestClass(UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  FObjectProperty *pFVar5;
  FFieldClass *pFVar6;
  FObjectPropertyBase *this;
  UClass *pUVar7;
  FObjectPropertyBase *this_00;
  FObjectPropertyBase *this_01;
  FObjectPropertyBase *this_02;
  USubobjectInstancingTestObject *pUVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  UObject *pUVar12;
  ulonglong uVar13;
  undefined1 auStackY_128 [32];
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong auStack_c8 [2];
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 == (UClass *)0x0) {
    param_1 = USubobjectInstancingTestObject::StaticClass();
  }
  this = (FObjectPropertyBase *)0x0;
  pUVar3 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_b8,pUVar4);
  auStack_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_b8._56_8_ = (UPackage *)0x0;
  auStack_b8._16_4_ = 0;
  auStack_b8._20_4_ = 0;
  auStack_b8._24_4_ = RF_Transient|RF_Public;
  auStack_b8._40_8_ = (UObject *)0x0;
  auStack_b8[0x20] = false;
  auStack_b8._8_8_ = pUVar3;
  pUVar4 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
  if (auStack_b8._64_8_ != 0) {
    plVar9 = (longlong *)(auStack_b8 + 0x50);
    if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)auStack_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  plVar9 = &pUVar4->_padding_;
  pUVar4->ClassFlags =
       pUVar4->ClassFlags |
       param_1->ClassFlags &
       (CLASS_ConfigDoNotCheckDefaults|CLASS_GlobalUserConfig|CLASS_Deprecated|
        CLASS_HasInstancedReference|CLASS_DefaultToInstanced|CLASS_NeedsDeferredDependencyLoading|
        CLASS_Const|CLASS_PerPlatformConfig|CLASS_PerObjectConfig|CLASS_NotPlaceable|
        CLASS_ProjectUserConfig|CLASS_Optional|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig) |
       CLASS_CompiledFromBlueprint;
  pUVar4->ClassCastFlags = pUVar4->ClassCastFlags | param_1->ClassCastFlags;
  pUVar4->ClassFlags = pUVar4->ClassFlags | CLASS_HasInstancedReference;
  if ((plVar9 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListStartPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                         ,0x3d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UClass *)(*pcVar1)();
    return pUVar4;
  }
  uVar10 = 0x106000000080000;
  if (pUVar4->bNeedsDynamicSubobjectInstancing != false) {
    uVar10 = 0x104000000000000;
  }
  uVar11 = uVar10 | 0x1000000000000000;
  if (pUVar4->bNeedsDynamicSubobjectInstancing != false) {
    uVar11 = uVar10;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 != (FObjectProperty *)0x0) {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    uStack_e0 = (ulonglong)pUVar4 | 1;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    if (((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe) != (UObject *)0x0) &&
       (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable((UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe));
    }
    this = (FObjectPropertyBase *)
           FObjectProperty::FObjectProperty
                     (pFVar5,(FFieldVariant)&uStack_e0,
                      &SubobjectInstancingTest::Private::NonNativeSelfReferencePropertyName,
                      RF_Transient|RF_Public);
  }
  pUVar12 = (UObject *)((ulonglong)pUVar4 & 0xfffffffffffffffe);
  uVar13 = (ulonglong)pUVar4 | 1;
  this->_padding_ = this->_padding_ | uVar11;
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  FObjectPropertyBase::SetPropertyClass(this,pUVar7);
  if ((FObjectPropertyBase *)*plVar9 != this) {
    *plVar9 = (longlong)this;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 == (FObjectProperty *)0x0) {
    this_00 = (FObjectPropertyBase *)0x0;
  }
  else {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    uStack_d8 = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_00 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)&uStack_d8,
                         &SubobjectInstancingTest::Private::NonNativeInnerObjectPropertyName,
                         RF_Transient|RF_Public);
  }
  this_01 = (FObjectPropertyBase *)0x0;
  this_00->_padding_ = this_00->_padding_ | uVar10;
  pUVar7 = USubobjectInstancingTestObject::StaticClass();
  FObjectPropertyBase::SetPropertyClass(this_00,pUVar7);
  if ((FObjectPropertyBase *)this->_padding_ != this_00) {
    this->_padding_ = (longlong)this_00;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 != (FObjectProperty *)0x0) {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    uStack_d0 = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_01 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)&uStack_d0,
                         &SubobjectInstancingTest::Private::NonNativeOuterObjectPropertyName,
                         RF_Transient|RF_Public);
  }
  this_01->_padding_ = this_01->_padding_ | uVar10;
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  FObjectPropertyBase::SetPropertyClass(this_01,pUVar7);
  if ((FObjectPropertyBase *)this_00->_padding_ != this_01) {
    this_00->_padding_ = (longlong)this_01;
  }
  pFVar5 = FMemory::Malloc(0x78,0);
  if (pFVar5 == (FObjectProperty *)0x0) {
    this_02 = (FObjectPropertyBase *)0x0;
  }
  else {
    pFVar6 = FObjectProperty::StaticClass();
    FField::FField((FField *)pFVar5,EC_InternalUseOnlyConstructor,pFVar6);
    *(undefined8 *)&pFVar5->field_0x48 = 0;
    *(undefined8 *)&pFVar5->field_0x50 = 0;
    *(undefined8 *)&pFVar5->field_0x58 = 0;
    *(undefined8 *)&pFVar5->field_0x60 = 0;
    *(undefined8 *)&pFVar5->field_0x68 = 0;
    *(undefined8 *)&pFVar5->field_0x70 = 0;
    *(undefined ***)pFVar5 = &___7FObjectProperty__6B_;
    auStack_c8[0] = uVar13;
    if ((pUVar12 != (UObject *)0x0) && (GC::GIsIncrementalReachabilityPending != false)) {
      GC::MarkAsReachable(pUVar12);
    }
    this_02 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (pFVar5,(FFieldVariant)auStack_c8,
                         &SubobjectInstancingTest::Private::NonNativeEditTimeInnerObjectPropertyName
                         ,RF_Transient|RF_Public);
  }
  this_02->_padding_ = this_02->_padding_ | uVar10;
  pUVar7 = USubobjectInstancingTestObject::StaticClass();
  FObjectPropertyBase::SetPropertyClass(this_02,pUVar7);
  if ((FObjectPropertyBase *)this_01->_padding_ != this_02) {
    this_01->_padding_ = (longlong)this_02;
  }
  (**(code **)(pUVar4->_padding_ + 800))(pUVar4,param_1);
  (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4);
  UStruct::StaticLink((UStruct *)pUVar4,true);
  UClass::AssembleReferenceTokenStream(pUVar4,false);
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar12 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  (**(code **)(pUVar4->_padding_ + 0x3c8))(pUVar4,pUVar12);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this,pUVar12,pUVar12,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NonNativeInnerObjectName,L"NonNativeInnerObject");
    _Init_thread_footer(&::_TSS0);
  }
  pUVar8 = NewObject<USubobjectInstancingTestObject>
                     (pUVar12,NonNativeInnerObjectName,
                      *(EObjectFlags *)&pUVar12->field_0x8 &
                      (RF_Transient|RF_Transactional|RF_Public) | RF_ArchetypeObject,(UObject *)0x0,
                      false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_00,pUVar12,(UObject *)pUVar8,0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_01,pUVar12,(UObject *)0x0,0);
  FObjectPropertyBase::SetObjectPropertyValue_InContainer(this_02,pUVar12,(UObject *)0x0,0);
  return pUVar4;
}

// GetNonNativeEditTimeInnerObjectPropertyName @ 1422d2ed0

FName __cdecl UE::FSubobjectInstancingTestUtils::GetNonNativeEditTimeInnerObjectPropertyName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = SubobjectInstancingTest::Private::NonNativeEditTimeInnerObjectPropertyName;
  return in_RCX;
}

// GetNonNativeInnerObjectPropertyName @ 1422d2ef0

FName __cdecl UE::FSubobjectInstancingTestUtils::GetNonNativeInnerObjectPropertyName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = SubobjectInstancingTest::Private::NonNativeInnerObjectPropertyName;
  return in_RCX;
}

// GetNonNativeOuterObjectPropertyName @ 1422d2f10

FName __cdecl UE::FSubobjectInstancingTestUtils::GetNonNativeOuterObjectPropertyName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = SubobjectInstancingTest::Private::NonNativeOuterObjectPropertyName;
  return in_RCX;
}

// GetNonNativeSelfReferencePropertyName @ 1422d2f30

FName __cdecl UE::FSubobjectInstancingTestUtils::GetNonNativeSelfReferencePropertyName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = SubobjectInstancingTest::Private::NonNativeSelfReferencePropertyName;
  return in_RCX;
}

