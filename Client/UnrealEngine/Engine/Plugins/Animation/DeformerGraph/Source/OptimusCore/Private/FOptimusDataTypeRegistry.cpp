// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 81

// <lambda_invoker_cdecl> @ 14e11f550

FBoolProperty * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FBoolProperty *pFVar1;
  FFieldClass *pFVar2;
  FName local_res10;
  ulonglong local_res18;
  
  local_res10 = param_2;
  pFVar1 = FMemory::Malloc(0x78,0);
  if (pFVar1 == (FBoolProperty *)0x0) {
    pFVar1 = (FBoolProperty *)0x0;
  }
  else {
    pFVar2 = FBoolProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    pFVar1->_padding_ = (longlong)&___7FBoolProperty__6B_;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    local_res18 = *(ulonglong *)param_1.Container;
    if ((((local_res18 & 1) != 0) &&
        ((UObject *)(local_res18 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18 & 0xfffffffffffffffe));
    }
    pFVar1 = FBoolProperty::FBoolProperty(pFVar1,(FFieldVariant)&local_res18,&local_res10,RF_Public)
    ;
  }
  FBoolProperty::SetBoolSize(pFVar1,1,true,0);
  return pFVar1;
}

// <lambda_invoker_cdecl> @ 14e11f730

FIntProperty * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FIntProperty *this;
  FFieldClass *pFVar1;
  FIntProperty *pFVar2;
  FName local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FIntProperty *)0x0;
  if (this != (FIntProperty *)0x0) {
    pFVar1 = FIntProperty::StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FIntProperty__6B_;
    local_res18[0] = *(ulonglong *)param_1.Container;
    if ((((local_res18[0] & 1) != 0) &&
        ((UObject *)(local_res18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18[0] & 0xfffffffffffffffe));
    }
    pFVar2 = FIntProperty::FIntProperty(this,(FFieldVariant)local_res18,&local_res10,RF_Public);
  }
  *(ulonglong *)&pFVar2->field_0x38 = *(ulonglong *)&pFVar2->field_0x38 | 0x8000000000000;
  return pFVar2;
}

// <lambda_invoker_cdecl> @ 14e11f890

FUInt32Property * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FUInt32Property *this;
  FFieldClass *pFVar1;
  FUInt32Property *pFVar2;
  FName local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FUInt32Property *)0x0;
  if (this != (FUInt32Property *)0x0) {
    pFVar1 = FUInt32Property::StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FUInt32Property__6B_;
    local_res18[0] = *(ulonglong *)param_1.Container;
    if ((((local_res18[0] & 1) != 0) &&
        ((UObject *)(local_res18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18[0] & 0xfffffffffffffffe));
    }
    pFVar2 = FUInt32Property::FUInt32Property
                       (this,(FFieldVariant)local_res18,&local_res10,RF_Public);
  }
  *(ulonglong *)&pFVar2->field_0x38 = *(ulonglong *)&pFVar2->field_0x38 | 0x8000000000000;
  return pFVar2;
}

// <lambda_invoker_cdecl> @ 14e11f9f0

FFloatProperty * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FFloatProperty *this;
  FFieldClass *pFVar1;
  FFloatProperty *pFVar2;
  FName local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FFloatProperty *)0x0;
  if (this != (FFloatProperty *)0x0) {
    pFVar1 = FFloatProperty::StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FFloatProperty__6B_;
    local_res18[0] = *(ulonglong *)param_1.Container;
    if ((((local_res18[0] & 1) != 0) &&
        ((UObject *)(local_res18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18[0] & 0xfffffffffffffffe));
    }
    pFVar2 = FFloatProperty::FFloatProperty(this,(FFieldVariant)local_res18,&local_res10,RF_Public);
  }
  *(ulonglong *)&pFVar2->field_0x38 = *(ulonglong *)&pFVar2->field_0x38 | 0x8000000000000;
  return pFVar2;
}

// <lambda_invoker_cdecl> @ 14e11fb10

FDoubleProperty * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FDoubleProperty *this;
  FFieldClass *pFVar1;
  FDoubleProperty *pFVar2;
  FName local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  this = FMemory::Malloc(0x70,0);
  pFVar2 = (FDoubleProperty *)0x0;
  if (this != (FDoubleProperty *)0x0) {
    pFVar1 = FDoubleProperty::StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined ***)this = &___7FDoubleProperty__6B_;
    local_res18[0] = *(ulonglong *)param_1.Container;
    if ((((local_res18[0] & 1) != 0) &&
        ((UObject *)(local_res18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18[0] & 0xfffffffffffffffe));
    }
    pFVar2 = FDoubleProperty::FDoubleProperty
                       (this,(FFieldVariant)local_res18,&local_res10,RF_Public);
  }
  *(ulonglong *)&pFVar2->field_0x38 = *(ulonglong *)&pFVar2->field_0x38 | 0x8000000000000;
  return pFVar2;
}

// <lambda_invoker_cdecl> @ 14e11fc70

bool __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_6>::<lambda_invoker_cdecl>
          (TArrayView<unsigned_char_const_,int> *param_1,FShaderValueContainerView *param_2)

{
  code *pcVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TTransform<double> *this;
  float *pfVar18;
  uchar *puVar19;
  uchar *puVar20;
  uchar *puVar21;
  bool bVar22;
  undefined1 uVar23;
  int iVar24;
  UScriptStruct *this_00;
  ICppStructOps *pIVar25;
  FShaderValueTypeHandle this_01;
  TMatrix<double> *pTVar26;
  TMatrix<double> local_a8;
  
  this = (TTransform<double> *)param_1->DataPtr;
  iVar24 = param_1->ArrayNum;
  puVar21 = (param_2->ShaderValue).DataPtr;
  puVar20 = (param_2->ShaderValue).DataPtr;
  puVar19 = (param_2->ShaderValue).DataPtr;
  pfVar18 = (float *)(param_2->ShaderValue).DataPtr;
  iVar2 = (param_2->ShaderValue).ArrayNum;
  this_00 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  pIVar25 = UScriptStruct::GetCppStructOps(this_00);
  if (iVar24 == pIVar25->Size) {
    this_01 = FShaderValueType::Get(Float,4,4);
    iVar24 = FShaderValueType::GetResourceElementSize(this_01.ValueTypePtr);
    if (iVar2 == iVar24) {
      pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(this,&local_a8);
      dVar3 = pTVar26->M[1][2];
      dVar4 = pTVar26->M[1][3];
      dVar5 = pTVar26->M[1][0];
      dVar6 = pTVar26->M[1][1];
      dVar7 = pTVar26->M[2][2];
      dVar8 = pTVar26->M[2][3];
      dVar9 = pTVar26->M[2][0];
      dVar10 = pTVar26->M[2][1];
      dVar11 = pTVar26->M[3][2];
      dVar12 = pTVar26->M[3][3];
      dVar13 = pTVar26->M[3][0];
      dVar14 = pTVar26->M[3][1];
      dVar15 = pTVar26->M[0][2];
      dVar16 = pTVar26->M[0][3];
      dVar17 = pTVar26->M[0][1];
      *pfVar18 = (float)pTVar26->M[0][0];
      pfVar18[1] = (float)dVar17;
      pfVar18[2] = (float)dVar15;
      pfVar18[3] = (float)dVar16;
      *(ulonglong *)(puVar19 + 0x10) = CONCAT44((float)dVar6,(float)dVar5);
      *(ulonglong *)(puVar19 + 0x18) = CONCAT44((float)dVar4,(float)dVar3);
      *(float *)(puVar20 + 0x20) = (float)dVar9;
      *(float *)(puVar20 + 0x24) = (float)dVar10;
      *(float *)(puVar20 + 0x28) = (float)dVar7;
      *(float *)(puVar20 + 0x2c) = (float)dVar8;
      *(float *)(puVar21 + 0x30) = (float)dVar13;
      *(float *)(puVar21 + 0x34) = (float)dVar14;
      *(float *)(puVar21 + 0x38) = (float)dVar11;
      *(float *)(puVar21 + 0x3c) = (float)dVar12;
      bVar22 = true;
    }
    else {
      bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8742395069035707971>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                          ,0x1bd,
                          "OutShaderValue.ShaderValue.Num() == FShaderValueType::Get(EShaderFundamentalType::Float, 4, 4)->GetResourceElementSize()"
                         );
      if (bVar22) goto code_r0x00014e11fd38;
      bVar22 = false;
    }
  }
  else {
    bVar22 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8742395069035707972>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                        ,0x1bc,
                        "InRawValue.Num() == TBaseStructure<FTransform>::Get()->GetCppStructOps()->GetSize()"
                       );
    if (bVar22) {
code_r0x00014e11fd38:
      pcVar1 = (code *)swi(3);
      uVar23 = (*pcVar1)();
      return (bool)uVar23;
    }
    bVar22 = false;
  }
  return bVar22;
}

// <lambda_invoker_cdecl> @ 14e11fe50

FNameProperty * __cdecl
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_7>::<lambda_invoker_cdecl>
          (FFieldVariant param_1,FName param_2)

{
  FNameProperty *pFVar1;
  FFieldClass *pFVar2;
  FName local_res10;
  ulonglong local_res18 [2];
  
  local_res10 = param_2;
  pFVar1 = FMemory::Malloc(0x70,0);
  if (pFVar1 != (FNameProperty *)0x0) {
    pFVar2 = FNameProperty::StaticClass();
    FField::FField((FField *)pFVar1,EC_InternalUseOnlyConstructor,pFVar2);
    *(undefined8 *)&pFVar1->field_0x48 = 0;
    *(undefined8 *)&pFVar1->field_0x50 = 0;
    *(undefined8 *)&pFVar1->field_0x58 = 0;
    *(undefined8 *)&pFVar1->field_0x60 = 0;
    *(undefined8 *)&pFVar1->field_0x68 = 0;
    *(undefined ***)pFVar1 = &___7FNameProperty__6B_;
    local_res18[0] = *(ulonglong *)param_1.Container;
    if ((((local_res18[0] & 1) != 0) &&
        ((UObject *)(local_res18[0] & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18[0] & 0xfffffffffffffffe));
    }
    pFVar1 = FNameProperty::FNameProperty(pFVar1,(FFieldVariant)local_res18,&local_res10,RF_Public);
    return pFVar1;
  }
  return (FNameProperty *)0x0;
}

// <lambda_2> @ 14e14bc70

<lambda_2> * __thiscall
`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  int iVar1;
  FPropertyConversionInfo *pFVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->ConversionEntries).ArrayNum;
  pFVar2 = (FPropertyConversionInfo *)(param_1->ConversionEntries).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    ConstructItems<_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,int>
              (*(void **)this,pFVar2,iVar1);
  }
  *(int *)((longlong)this + 0x10) = param_1->ExpectedPropertySize;
  *(int *)((longlong)this + 0x14) = param_1->ExpectedShaderValueSize;
  return this;
}

// <lambda_2> @ 14e14bde0

<lambda_2> * __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  int iVar1;
  FPropertyConversionInfo *pFVar2;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->ConversionEntries).ArrayNum;
  pFVar2 = (FPropertyConversionInfo *)(param_1->ConversionEntries).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    ConstructItems<_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,int>
              (*(void **)this,pFVar2,iVar1);
  }
  *(int *)((longlong)this + 0x10) = param_1->ExpectedPropertySize;
  *(int *)((longlong)this + 0x14) = param_1->ExpectedShaderValueSize;
  return this;
}

// <lambda_3> @ 14e14bed0

<lambda_3> * __thiscall
`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>::<lambda_3>
          (void *this,<lambda_3> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)&param_1->ArrayPropertyCreateFunc;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(longlong *)this = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->ArrayPropertyCreateFunc).field_0x28;
    puVar3 = (undefined8 *)&(param_1->ArrayPropertyCreateFunc).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)(puVar3,(longlong)this + 0x10);
  }
  *(int *)((longlong)this + 0x30) = param_1->ElementShaderValueSize;
  lVar1 = *(longlong *)&param_1->ElementPropertyValueConvertFunc;
  *(longlong *)((longlong)this + 0x40) = lVar1;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->ElementPropertyValueConvertFunc).field_0x28;
    puVar3 = (undefined8 *)&(param_1->ElementPropertyValueConvertFunc).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return this;
}

// FOptimusDataTypeRegistry @ 14e1517d0

FOptimusDataTypeRegistry * __thiscall
FOptimusDataTypeRegistry::FOptimusDataTypeRegistry(FOptimusDataTypeRegistry *this)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FOptimusDataTypeRegistry__6B_;
  *(undefined8 *)&this->RegisteredTypes = 0;
  *(undefined8 *)&(this->RegisteredTypes).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTypes).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTypes).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTypes).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredTypes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredTypes).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredTypes).field_0x48 = 0;
  (this->RegistrationOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegistrationOrder).ArrayNum = 0;
  (this->RegistrationOrder).ArrayMax = 0;
  *(undefined8 *)&(this->TypeWithAtomicSupport).Elements = 0;
  *(undefined8 *)&(this->TypeWithAtomicSupport).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TypeWithAtomicSupport).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TypeWithAtomicSupport).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TypeWithAtomicSupport).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TypeWithAtomicSupport).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TypeWithAtomicSupport).Elements.field_0x30 = 0xffffffff;
  (this->TypeWithAtomicSupport).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TypeWithAtomicSupport).HashSize = 0;
  *(undefined8 *)&this->OnDataTypeChanged = 0;
  *(undefined8 *)&(this->OnDataTypeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataTypeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnDataTypeChanged).field_0x18 = 2;
  return this;
}

// ~FOptimusDataTypeRegistry @ 14e1612e0

void __thiscall FOptimusDataTypeRegistry::~FOptimusDataTypeRegistry(FOptimusDataTypeRegistry *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FOptimusDataTypeRegistry__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataTypeChanged).field_0x8,*(int *)&(this->OnDataTypeChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnDataTypeChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataTypeChanged);
  (this->TypeWithAtomicSupport).HashSize = 0;
  FVar2 = (this->TypeWithAtomicSupport).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TypeWithAtomicSupport).Elements);
  pFVar3 = (this->RegistrationOrder).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->RegisteredTypes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredTypes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredTypes);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 14e1678f0

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FArrayProperty *pFVar3;
  FFieldClass *pFVar4;
  FName *pFVar5;
  FProperty *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  FName local_res18;
  FName local_res20;
  FArrayProperty *local_28;
  FName local_20;
  
  local_res18 = param_2;
  pFVar3 = FMemory::Malloc(0x80,0);
  if (pFVar3 == (FArrayProperty *)0x0) {
    pFVar3 = (FArrayProperty *)0x0;
  }
  else {
    pFVar4 = FArrayProperty::StaticClass();
    FField::FField((FField *)pFVar3,EC_InternalUseOnlyConstructor,pFVar4);
    pFVar3->_padding_ = (longlong)&___7FArrayProperty__6B_;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    pFVar3 = FArrayProperty::FArrayProperty
                       (pFVar3,(FFieldVariant)&local_res8,&local_res18,RF_NoFlags,None);
  }
  pFVar5 = ::FName::FName(&local_20,L"Inner");
  local_res20 = *pFVar5;
  local_28 = pFVar3;
  if (((ulonglong)pFVar3 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FProperty *)(*pcVar1)();
      return pFVar6;
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar8 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar8 = *(longlong **)((longlong)this + 0x28);
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  pFVar6 = (FProperty *)(*pcVar1)(uVar7,&local_28,&local_res20);
  pFVar3->Inner = pFVar6;
  return (FProperty *)pFVar3;
}

// operator() @ 14e167a30

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  UScriptStruct *pUVar1;
  FStructProperty *pFVar2;
  FFieldClass *pFVar3;
  int iVar4;
  ulonglong local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pFVar2 = FMemory::Malloc(0x78,0);
  if (pFVar2 == (FStructProperty *)0x0) {
    pFVar2 = (FStructProperty *)0x0;
  }
  else {
    pFVar3 = FStructProperty::StaticClass();
    FField::FField((FField *)pFVar2,EC_InternalUseOnlyConstructor,pFVar3);
    pFVar2->_padding_ = (longlong)&___7FStructProperty__6B_;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    (pFVar2->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    pFVar2 = FStructProperty::FStructProperty
                       (pFVar2,(FFieldVariant)&local_res8,local_res18,RF_Public);
  }
  pUVar1 = *(UScriptStruct **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pFVar2->Struct).field0_0x0.DebugPtr = pUVar1;
  iVar4 = (int)*(short *)(*(longlong *)((longlong)this + 8) + 0x5c);
  FProperty::SetElementSize
            ((FProperty *)pFVar2,
             *(int *)(*(longlong *)((longlong)this + 8) + 0x58) + -1 + iVar4 & -iVar4);
  if (*(char *)this != '\0') {
    pFVar2->_padding_ = pFVar2->_padding_ | 0x8000000000000;
  }
  return (FProperty *)pFVar2;
}

// operator() @ 14e167b40

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>::operator()
          (void *this,FOptimusDataType *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined1 local_res8 [8];
  
  param_1->TypeName = **(FName **)this;
  plVar1 = *(longlong **)((longlong)this + 8);
  pIVar2 = (param_1->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_1->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar1 + 1);
  (param_1->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)this + 0x10);
  if ((FShaderValueType *)**(undefined8 **)((longlong)this + 0x10) == (FShaderValueType *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FShaderValueType::GetResourceElementSize
                      ((FShaderValueType *)**(undefined8 **)((longlong)this + 0x10));
  }
  param_1->ShaderValueSize = iVar8;
  param_1->TypeCategory = **(FName **)((longlong)this + 0x18);
  if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0x10) != '\0') {
    param_1->bHasCustomPinColor = true;
    puVar4 = *(undefined8 **)((longlong)this + 0x20);
    if (*(char *)(puVar4 + 2) == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = puVar4[1];
    *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar6;
  }
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x28);
  return;
}

// operator() @ 14e167c40

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>::operator()
          (void *this,FOptimusDataType *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 uVar4;
  int iVar5;
  UObject *local_res8;
  
  param_1->TypeName = **(FName **)this;
  plVar1 = *(longlong **)((longlong)this + 8);
  pIVar2 = (param_1->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_1->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar1 + 1);
  (param_1->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)this + 0x10);
  iVar5 = FShaderValueType::GetResourceElementSize
                    ((FShaderValueType *)**(undefined8 **)((longlong)this + 0x10));
  param_1->ShaderValueSize = iVar5;
  param_1->TypeCategory = **(FName **)((longlong)this + 0x18);
  local_res8 = (UObject *)**(undefined8 **)((longlong)this + 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res8);
  param_1->bHasCustomPinColor = true;
  uVar4 = (*(undefined8 **)((longlong)this + 0x28))[1];
  *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = **(undefined8 **)((longlong)this + 0x28);
  *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar4;
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x30);
  return;
}

// operator() @ 14e167e10

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  FObjectProperty *this_00;
  FFieldClass *pFVar1;
  FObjectPropertyBase *this_01;
  ulonglong local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  this_00 = FMemory::Malloc(0x78,0);
  if (this_00 == (FObjectProperty *)0x0) {
    this_01 = (FObjectPropertyBase *)0x0;
  }
  else {
    pFVar1 = FObjectProperty::StaticClass();
    FField::FField((FField *)this_00,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined ***)this_00 = &___7FObjectProperty__6B_;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    *(undefined8 *)&this_00->field_0x58 = 0;
    *(undefined8 *)&this_00->field_0x60 = 0;
    *(undefined8 *)&this_00->field_0x68 = 0;
    *(undefined8 *)&this_00->field_0x70 = 0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    this_01 = (FObjectPropertyBase *)
              FObjectProperty::FObjectProperty
                        (this_00,(FFieldVariant)&local_res8,local_res18,RF_Public);
  }
  FObjectPropertyBase::SetPropertyClass(this_01,*(UClass **)this);
  this_01->_padding_ = this_01->_padding_ | 0x8000000000000;
  return (FProperty *)this_01;
}

// operator() @ 14e167ef0

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  UScriptStruct *pUVar1;
  FStructProperty *pFVar2;
  FFieldClass *pFVar3;
  int iVar4;
  ulonglong local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pFVar2 = FMemory::Malloc(0x78,0);
  if (pFVar2 == (FStructProperty *)0x0) {
    pFVar2 = (FStructProperty *)0x0;
  }
  else {
    pFVar3 = FStructProperty::StaticClass();
    FField::FField((FField *)pFVar2,EC_InternalUseOnlyConstructor,pFVar3);
    pFVar2->_padding_ = (longlong)&___7FStructProperty__6B_;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    (pFVar2->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    pFVar2 = FStructProperty::FStructProperty
                       (pFVar2,(FFieldVariant)&local_res8,local_res18,RF_Public);
  }
  pUVar1 = *(UScriptStruct **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pFVar2->Struct).field0_0x0.DebugPtr = pUVar1;
  iVar4 = (int)*(short *)(*(longlong *)((longlong)this + 8) + 0x5c);
  FProperty::SetElementSize
            ((FProperty *)pFVar2,
             *(int *)(*(longlong *)((longlong)this + 8) + 0x58) + -1 + iVar4 & -iVar4);
  if (*(char *)this != '\0') {
    pFVar2->_padding_ = pFVar2->_padding_ | 0x8000000000000;
  }
  return (FProperty *)pFVar2;
}

// operator() @ 14e168990

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  UScriptStruct *pUVar1;
  FStructProperty *pFVar2;
  FFieldClass *pFVar3;
  int iVar4;
  ulonglong local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pFVar2 = FMemory::Malloc(0x78,0);
  if (pFVar2 == (FStructProperty *)0x0) {
    pFVar2 = (FStructProperty *)0x0;
  }
  else {
    pFVar3 = FStructProperty::StaticClass();
    FField::FField((FField *)pFVar2,EC_InternalUseOnlyConstructor,pFVar3);
    pFVar2->_padding_ = (longlong)&___7FStructProperty__6B_;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    (pFVar2->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    pFVar2 = FStructProperty::FStructProperty
                       (pFVar2,(FFieldVariant)&local_res8,local_res18,RF_Public);
  }
  pUVar1 = *(UScriptStruct **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pFVar2->Struct).field0_0x0.DebugPtr = pUVar1;
  iVar4 = (int)*(short *)(*(longlong *)((longlong)this + 8) + 0x5c);
  FProperty::SetElementSize
            ((FProperty *)pFVar2,
             *(int *)(*(longlong *)((longlong)this + 8) + 0x58) + -1 + iVar4 & -iVar4);
  if (*(char *)this != '\0') {
    pFVar2->_padding_ = pFVar2->_padding_ | 0x8000000000000;
  }
  return (FProperty *)pFVar2;
}

// operator() @ 14e168aa0

FProperty * __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>::operator()
          (void *this,FFieldVariant param_1,FName param_2)

{
  UScriptStruct *pUVar1;
  FStructProperty *pFVar2;
  FFieldClass *pFVar3;
  int iVar4;
  ulonglong local_res8;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pFVar2 = FMemory::Malloc(0x78,0);
  if (pFVar2 == (FStructProperty *)0x0) {
    pFVar2 = (FStructProperty *)0x0;
  }
  else {
    pFVar3 = FStructProperty::StaticClass();
    FField::FField((FField *)pFVar2,EC_InternalUseOnlyConstructor,pFVar3);
    pFVar2->_padding_ = (longlong)&___7FStructProperty__6B_;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    (pFVar2->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    local_res8 = *(ulonglong *)param_1.Container;
    if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0)
        ) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
    }
    pFVar2 = FStructProperty::FStructProperty
                       (pFVar2,(FFieldVariant)&local_res8,local_res18,RF_Public);
  }
  pUVar1 = *(UScriptStruct **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pFVar2->Struct).field0_0x0.DebugPtr = pUVar1;
  iVar4 = (int)*(short *)(*(longlong *)((longlong)this + 8) + 0x5c);
  FProperty::SetElementSize
            ((FProperty *)pFVar2,
             *(int *)(*(longlong *)((longlong)this + 8) + 0x58) + -1 + iVar4 & -iVar4);
  if (*(char *)this != '\0') {
    pFVar2->_padding_ = pFVar2->_padding_ | 0x8000000000000;
  }
  return (FProperty *)pFVar2;
}

// operator() @ 14e169d70

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>::operator()
          (void *this,FOptimusDataType *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FName local_res18;
  
  param_1->TypeName = **(FName **)this;
  plVar1 = *(longlong **)((longlong)this + 8);
  pIVar2 = (param_1->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_1->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar1 + 1);
  pFVar6 = ::FName::FName(&local_res18,L"object");
  param_1->TypeCategory = *pFVar6;
  local_res10 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res10);
  param_1->bHasCustomPinColor = true;
  puVar4 = *(undefined8 **)((longlong)this + 0x18);
  if (*(char *)(puVar4 + 2) != '\0') {
    uVar5 = puVar4[1];
    *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar5;
  }
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x20);
  return;
}

// operator() @ 14e169e40

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>::operator()
          (void *this,FOptimusDataType *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FName local_res18;
  
  param_1->TypeName = **(FName **)this;
  plVar1 = *(longlong **)((longlong)this + 8);
  pIVar2 = (param_1->DisplayName).TextData.Reference;
  pIVar3 = (ITextData *)*plVar1;
  if (pIVar2 != pIVar3) {
    (param_1->DisplayName).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar1 + 1);
  pFVar6 = ::FName::FName(&local_res18,L"struct");
  param_1->TypeCategory = *pFVar6;
  local_res10 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res10);
  param_1->bHasCustomPinColor = true;
  puVar4 = *(undefined8 **)((longlong)this + 0x18);
  if (*(char *)(puVar4 + 2) != '\0') {
    uVar5 = puVar4[1];
    *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = *puVar4;
    *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar5;
  }
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x20);
  return;
}

// operator() @ 14e169f10

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>::operator()
          (void *this,FOptimusDataType *param_1)

{
  EOptimusDataTypeFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FName local_res18;
  
  param_1->TypeName = **(FName **)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  pIVar3 = (param_1->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_1->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_1->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)this + 0x10);
  param_1->ShaderValueSize = **(int **)((longlong)this + 0x18);
  pFVar9 = ::FName::FName(&local_res18,L"struct");
  param_1->TypeCategory = *pFVar9;
  local_res10 = (UObject *)**(undefined8 **)((longlong)this + 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res10);
  if (*(char *)(*(longlong *)((longlong)this + 0x28) + 0x10) != '\0') {
    param_1->bHasCustomPinColor = true;
    puVar5 = *(undefined8 **)((longlong)this + 0x28);
    if (*(char *)(puVar5 + 2) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar7 = puVar5[1];
    *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = *puVar5;
    *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar7;
  }
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x30);
  EVar1 = param_1->TypeFlags;
  param_1->TypeFlags = EVar1 | IsStructType;
  if (**(char **)((longlong)this + 0x38) != '\0') {
    param_1->TypeFlags = EVar1 | (ShowElements|IsStructType);
  }
  return;
}

// operator() @ 14e16a040

bool __thiscall
`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>::operator()
          (void *this,TArrayView<unsigned_char_const_,int> *param_1,
          FShaderValueContainerView *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  FArrayShaderValue *pFVar14;
  undefined8 uVar15;
  FOptimusDataTypeRegistry *this_00;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  undefined1 local_res20 [8];
  undefined4 uStack_144;
  undefined4 uStack_12c;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_128;
  uchar *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  ulonglong *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FArrayShaderValue *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  int local_b0;
  undefined4 uStack_ac;
  ulonglong *local_a8;
  undefined8 uStack_a0;
  FScriptContainerElement *local_98;
  undefined8 uStack_90;
  FArrayShaderValue *local_88;
  undefined8 uStack_80;
  uchar *local_78;
  undefined8 uStack_70;
  FArrayShaderValue *local_68;
  undefined8 uStack_60;
  
  if (param_1->ArrayNum == *(int *)((longlong)this + 0x10)) {
    if ((param_2->ShaderValue).ArrayNum == *(int *)((longlong)this + 0x14)) {
      uVar2 = *(uint *)((longlong)this + 8);
      uVar23 = (ulonglong)(int)uVar2;
      plVar19 = *(longlong **)this;
      plVar21 = plVar19 + 6;
      plVar22 = plVar19 + uVar23 * 0xc;
      do {
        if (*(int *)((longlong)this + 8) != (int)uVar23) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::FPropertyConversionInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (plVar19 == plVar22) {
          return true;
        }
        lVar4 = *plVar19;
        puVar5 = param_1->DataPtr;
        if ((*(int *)(lVar4 + 0x30) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        if ((puVar5 == (uchar *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        puVar24 = (ulonglong *)(puVar5 + *(int *)(lVar4 + 0x44));
        if (((*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) >> 0x15 & 1) == 0) || (lVar4 == 0)) {
          pTVar7 = (TReferenceControllerBase<1> *)plVar21[-4];
          pFVar8 = (FName *)plVar21[-5];
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((int)plVar21[5] < *(int *)((longlong)plVar21 + 0x24)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ConversionInfo.ShaderValueSize <= ConversionInfo.ShaderValueInlineSize"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                                  ,0x348,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar14 = (param_2->ArrayList).DataPtr + *(int *)((longlong)plVar21 + 0x2c);
          if ((pFVar8 == (FName *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          this_00 = FOptimusDataTypeRegistry::Get();
          FOptimusDataTypeRegistry::FindArrayMetadata(this_00,&local_128,*pFVar8);
          iVar3 = local_128.ArrayNum;
          if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.AllocatorInstance.Data);
          }
          local_b0 = iVar3;
          if ((iVar3 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          local_118 = (param_2->ShaderValue).DataPtr + (int)plVar21[4];
          iStack_110 = *(int *)((longlong)plVar21 + 0x24);
          if ((iStack_110 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          puVar5 = local_118;
          uStack_e0 = CONCAT44(uStack_ac,local_b0);
          uVar15 = CONCAT44(uStack_10c,iStack_110);
          iStack_100 = *(int *)(lVar4 + 0x34) * *(int *)(lVar4 + 0x30);
          local_108 = puVar24;
          local_e8 = pFVar14;
          if ((iStack_100 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          uStack_a0 = CONCAT44(uStack_fc,iStack_100);
          local_68 = local_e8;
          uStack_60 = uStack_e0;
          local_78 = puVar5;
          local_a8 = local_108;
          uStack_70 = uVar15;
          UE::Core::Private::Function::CheckCallable((void *)plVar21[-2]);
          pcVar9 = (code *)plVar21[-2];
          plVar17 = (longlong *)plVar21[3];
          if ((longlong *)plVar21[3] == (longlong *)0x0) {
            plVar17 = plVar21;
          }
          uVar15 = (**(code **)(*plVar17 + 8))();
          cVar12 = (*pcVar9)(uVar15,&local_a8,&local_78);
          if (cVar12 == '\0') {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            return false;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
        }
        else {
          if ((*(int *)((longlong)plVar21 + 0x2c) == -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ConversionInfo.ArrayIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                                  ,0x325,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          memset((param_2->ShaderValue).DataPtr + (int)plVar21[4],0,(longlong)(int)plVar21[5]);
          bVar1 = *(byte *)(lVar4 + 0x70);
          (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x168))();
          lVar20 = *(longlong *)(lVar4 + 0x78);
          iVar3 = *(int *)(lVar20 + 0x34);
          if ((iVar3 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1177,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          if ((lVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InnerProperty",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1178,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar14 = TArrayView<FArrayShaderValue,int>::operator[]
                              (&param_2->ArrayList,*(int *)((longlong)plVar21 + 0x2c));
          iVar18 = *(int *)((longlong)plVar21 + 0x24) * (int)puVar24[1];
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,iVar18,(ForAnyElementType *)pFVar14,
                              &(pFVar14->ArrayOfValues).ArrayNum,&(pFVar14->ArrayOfValues).ArrayMax)
          ;
          memset((pFVar14->ArrayOfValues).AllocatorInstance.Data + iVar13,0,(longlong)iVar18);
          for (iVar13 = 0; iVar13 < (int)puVar24[1]; iVar13 = iVar13 + 1) {
            if ((int)puVar24[1] == 0) {
              lVar20 = 0;
            }
            else {
              uVar23 = *puVar24;
              if (((bVar1 & 1) != 0) && ((uVar23 & 1) != 0)) {
                uVar23 = ((longlong)uVar23 >> 0x18) + (longlong)puVar24;
              }
              lVar20 = (longlong)iVar3 * (longlong)iVar13 + uVar23;
            }
            iVar18 = *(int *)((longlong)plVar21 + 0x24);
            local_d0 = 0;
            pFVar6 = (pFVar14->ArrayOfValues).AllocatorInstance.Data;
            if ((iVar18 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            uStack_e0 = CONCAT44(uStack_cc,local_d0);
            local_e8 = (FArrayShaderValue *)0x0;
            iVar16 = *(int *)(*(longlong *)(lVar4 + 0x78) + 0x34) *
                     *(int *)(*(longlong *)(lVar4 + 0x78) + 0x30);
            if ((iVar16 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            uStack_c0 = CONCAT44(uStack_12c,iVar16);
            local_88 = local_e8;
            uStack_80 = uStack_e0;
            local_c8 = lVar20;
            local_98 = pFVar6 + iVar18 * iVar13;
            uStack_90 = CONCAT44(uStack_144,iVar18);
            UE::Core::Private::Function::CheckCallable((void *)plVar21[-2]);
            pcVar9 = (code *)plVar21[-2];
            plVar17 = (longlong *)plVar21[3];
            if ((longlong *)plVar21[3] == (longlong *)0x0) {
              plVar17 = plVar21;
            }
            uVar15 = (**(code **)(*plVar17 + 8))();
            cVar12 = (*pcVar9)(uVar15,&local_c8,&local_98);
            if (cVar12 == '\0') {
              DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
              return false;
            }
            DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
          }
        }
        plVar19 = plVar19 + 0xc;
        plVar21 = plVar21 + 0xc;
        uVar23 = (ulonglong)uVar2;
      } while( true );
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8742395069035707619>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                        ,0x31d,"OutShaderValue.ShaderValue.Num() == ExpectedShaderValueSize");
    if (!bVar10) {
      return false;
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8742395069035707620>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                        ,0x31c,"InRawValue.Num() == ExpectedPropertySize");
    if (!bVar10) {
      return false;
    }
  }
  pcVar9 = (code *)swi(3);
  uVar11 = (*pcVar9)();
  return (bool)uVar11;
}

// operator() @ 14e16ad20

bool __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>::operator()
          (void *this,TArrayView<unsigned_char_const_,int> *param_1,
          FShaderValueContainerView *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uchar *puVar13;
  undefined8 *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  uchar *local_78;
  undefined8 uStack_70;
  uchar *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  uchar *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  
  if (*(int *)((longlong)this + 0x10) < param_1->ArrayNum) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035707246>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x492,"InRawValue.Num() <= ExpectedPropertySize");
    if (!bVar7) {
      return false;
    }
  }
  else {
    if ((param_2->ShaderValue).ArrayNum == *(int *)((longlong)this + 0x14)) {
      puVar12 = *(undefined8 **)this;
      puVar13 = (param_2->ShaderValue).DataPtr;
      iVar1 = *(int *)((longlong)this + 8);
      puVar14 = puVar12 + (longlong)iVar1 * 8;
      do {
        if (*(int *)((longlong)this + 8) != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<`FOptimusDataTypeRegistry::RegisterType'::__l36::FPropertyConversionInfo_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar12 == puVar14) {
          return true;
        }
        iVar2 = *(int *)(puVar12 + 6);
        iVar3 = *(int *)((longlong)puVar12 + 0x34);
        if (iVar3 + iVar2 <= param_1->ArrayNum) {
          puVar5 = param_1->DataPtr;
          if ((iVar3 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar4 = *(int *)(puVar12 + 7);
          if ((iVar4 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          uStack_60 = CONCAT44(uStack_8c,iVar4);
          uStack_70 = CONCAT44(uStack_7c,iVar3);
          local_58 = 0;
          uStack_50 = 0;
          lStack_30 = (ulonglong)uStack_4c << 0x20;
          local_38 = 0;
          local_78 = puVar5 + iVar2;
          local_68 = puVar13;
          local_48 = puVar13;
          uStack_40 = uStack_60;
          UE::Core::Private::Function::CheckCallable((void *)*puVar12);
          pcVar6 = (code *)*puVar12;
          plVar11 = puVar12 + 2;
          if ((longlong *)puVar12[5] != (longlong *)0x0) {
            plVar11 = (longlong *)puVar12[5];
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          cVar9 = (*pcVar6)(uVar10,&local_78,&local_48);
          if (cVar9 == '\0') {
            return false;
          }
          puVar13 = puVar13 + *(int *)(puVar12 + 7);
        }
        puVar12 = puVar12 + 8;
      } while( true );
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035707245>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x493,"OutShaderValue.ShaderValue.Num() == ExpectedShaderValueSize");
    if (!bVar7) {
      return false;
    }
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// operator() @ 14e16b9d0

void __thiscall
`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>::operator()
          (void *this,FOptimusDataType *param_1)

{
  EOptimusDataTypeFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_res10;
  FName local_res18;
  
  param_1->TypeName = **(FName **)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  pIVar3 = (param_1->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_1->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_1->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)this + 0x10);
  param_1->ShaderValueSize = **(int **)((longlong)this + 0x18);
  pFVar9 = ::FName::FName(&local_res18,L"struct");
  param_1->TypeCategory = *pFVar9;
  local_res10 = (UObject *)**(undefined8 **)((longlong)this + 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res10);
  if (*(char *)(*(longlong *)((longlong)this + 0x28) + 0x10) != '\0') {
    param_1->bHasCustomPinColor = true;
    puVar5 = *(undefined8 **)((longlong)this + 0x28);
    if (*(char *)(puVar5 + 2) == '\0') {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar7 = puVar5[1];
    *(undefined8 *)&(param_1->CustomPinColor).field0_0x0 = *puVar5;
    *(undefined8 *)((longlong)&(param_1->CustomPinColor).field0_0x0 + 8) = uVar7;
  }
  param_1->UsageFlags = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x30);
  EVar1 = param_1->TypeFlags;
  param_1->TypeFlags = EVar1 | IsStructType;
  if (**(char **)((longlong)this + 0x38) != '\0') {
    param_1->TypeFlags = EVar1 | (ShowElements|IsStructType);
  }
  return;
}

// operator() @ 14e16bb00

void __thiscall
`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>::operator()
          (void *this,FOptimusDataType *param_1)

{
  EOptimusDataTypeUsageFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FName *pFVar5;
  FName local_res8;
  
  param_1->TypeName = **(FName **)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  pIVar3 = (param_1->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_1->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar2 + 1);
  (param_1->ShaderValueType).ValueTypePtr =
       (FShaderValueType *)**(undefined8 **)((longlong)this + 0x10);
  param_1->ShaderValueSize = **(int **)((longlong)this + 0x18);
  pFVar5 = ::FName::FName(&local_res8,L"struct");
  param_1->TypeCategory = *pFVar5;
  local_res8 = **(FName **)((longlong)this + 0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res8);
  EVar1 = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x28);
  param_1->TypeFlags = param_1->TypeFlags | IsStructType;
  param_1->UsageFlags = EVar1;
  return;
}

// operator() @ 14e16bbe0

bool __thiscall
`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>::operator()
          (void *this,TArrayView<unsigned_char_const_,int> *param_1,
          FShaderValueContainerView *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  ulonglong *puVar4;
  FArrayShaderValue *pFVar5;
  FScriptContainerElement *pFVar6;
  int *piVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  undefined8 local_res20;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  uint uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  longlong lStack_80;
  FScriptContainerElement *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  
  local_res20 = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar3 = *(code **)this;
  plVar13 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar13 = *(longlong **)((longlong)this + 0x28);
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  plVar13 = (longlong *)(*pcVar3)(uVar12,&local_res20);
  if ((plVar13 == (longlong *)0x0) || ((*(uint *)(plVar13[1] + 0x18) >> 0x15 & 1) == 0)) {
    plVar13 = (longlong *)0x0;
  }
  bVar1 = *(byte *)(plVar13 + 0xe);
  (**(code **)(*(longlong *)plVar13[0xf] + 0x168))();
  lVar18 = plVar13[0xf];
  puVar4 = (ulonglong *)param_1->DataPtr;
  iVar2 = *(int *)(lVar18 + 0x34);
  if (iVar2 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  if (lVar18 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  if ((param_2->ArrayList).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
  }
  pFVar5 = (param_2->ArrayList).DataPtr;
  piVar7 = &(pFVar5->ArrayOfValues).ArrayMax;
  (pFVar5->ArrayOfValues).ArrayNum = 0;
  if ((pFVar5->ArrayOfValues).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)pFVar5,0,piVar7);
  }
  iVar17 = *(int *)((longlong)this + 0x30) * (int)puVar4[1];
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar17,(ForAnyElementType *)pFVar5,&(pFVar5->ArrayOfValues).ArrayNum,
                      piVar7);
  memset((pFVar5->ArrayOfValues).AllocatorInstance.Data + iVar11,0,(longlong)iVar17);
  iVar11 = 0;
  do {
    if ((int)puVar4[1] <= iVar11) {
      bVar8 = true;
LAB_14e16beee:
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
      return bVar8;
    }
    if ((int)puVar4[1] == 0) {
      lVar18 = 0;
    }
    else {
      uVar14 = *puVar4;
      if (((bVar1 & 1) != 0) && ((uVar14 & 1) != 0)) {
        uVar14 = ((longlong)uVar14 >> 0x18) + (longlong)puVar4;
      }
      lVar18 = (longlong)iVar2 * (longlong)iVar11 + uVar14;
    }
    iVar17 = *(int *)((longlong)this + 0x30);
    pFVar6 = (pFVar5->ArrayOfValues).AllocatorInstance.Data;
    if (iVar17 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    lStack_80 = (ulonglong)uStack_ac << 0x20;
    local_88 = 0;
    iVar15 = *(int *)(plVar13[0xf] + 0x34) * *(int *)(plVar13[0xf] + 0x30);
    if (iVar15 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
    }
    uStack_a0 = CONCAT44(uStack_bc,iVar15);
    local_68 = local_88;
    lStack_60 = lStack_80;
    local_a8 = lVar18;
    local_78 = pFVar6 + iVar17 * iVar11;
    uStack_70 = CONCAT44(uStack_cc,iVar17);
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x40));
    pcVar3 = *(code **)((longlong)this + 0x40);
    plVar16 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar16 = *(longlong **)((longlong)this + 0x68);
    }
    uVar12 = (**(code **)(*plVar16 + 8))();
    cVar10 = (*pcVar3)(uVar12,&local_a8,&local_78);
    if (cVar10 == '\0') {
      DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
      bVar8 = false;
      goto LAB_14e16beee;
    }
    DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)0x0,0);
    iVar11 = iVar11 + 1;
  } while( true );
}

// operator() @ 14e16c4f0

void __thiscall
`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>::operator()
          (void *this,FOptimusDataType *param_1)

{
  EOptimusDataTypeUsageFlags EVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FName *pFVar5;
  FName local_res8;
  
  param_1->TypeName = **(FName **)this;
  plVar2 = *(longlong **)((longlong)this + 8);
  pIVar3 = (param_1->DisplayName).TextData.Reference;
  pIVar4 = (ITextData *)*plVar2;
  if (pIVar3 != pIVar4) {
    (param_1->DisplayName).TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DisplayName).Flags = *(uint *)(plVar2 + 1);
  pFVar5 = ::FName::FName(&local_res8,L"struct");
  param_1->TypeCategory = *pFVar5;
  local_res8 = **(FName **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=(&(param_1->TypeObject).WeakPtr,(FObjectPtr)&local_res8);
  EVar1 = **(EOptimusDataTypeUsageFlags **)((longlong)this + 0x18);
  param_1->TypeFlags = param_1->TypeFlags | IsStructType;
  param_1->UsageFlags = EVar1;
  return;
}

// AddReferencedObjects @ 14e1787c0

void __thiscall
FOptimusDataTypeRegistry::AddReferencedObjects
          (FOptimusDataTypeRegistry *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->RegisteredTypes).field_0x28;
  puVar1 = &(this->RegisteredTypes).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = iVar14;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->RegisteredTypes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e17885e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14e17885e:
  uVar11 = *(uint *)&(this->RegisteredTypes).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredTypes).field_0x8 -
                       *(int *)&(this->RegisteredTypes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->RegisteredTypes).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->RegisteredTypes).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e178960;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14e178960:
  while( true ) {
    if (*(int *)&(this->RegisteredTypes).field_0x8 - *(int *)&(this->RegisteredTypes).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)
              ((longlong)TStack_60.CurrentBitIndex * 0xa0 + 0x18 +
              *(longlong *)&this->RegisteredTypes);
    lVar9 = *(longlong *)
             ((longlong)TStack_60.CurrentBitIndex * 0xa0 + 0x10 +
             *(longlong *)&this->RegisteredTypes);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) break;
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar9 + 0x2c));
    if (bVar6) {
      if ((lVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FReferenceCollector::AddReferencedObject
                (param_1,(FWeakObjectPtr *)(lVar9 + 0x2c),(UObject *)0x0,(FProperty *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// DoesTypeSupportAtomic @ 14e1a4b50

bool __thiscall
FOptimusDataTypeRegistry::DoesTypeSupportAtomic
          (FOptimusDataTypeRegistry *this,TSharedPtr<FOptimusDataType_const_,1> *param_1)

{
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = GetAllTypesWithAtomicSupport(this,&local_18);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)pTVar1->ArrayNum * 0x10;
  if (pFVar2 != pFVar4) {
    do {
      if (*(FOptimusDataType **)pFVar2 == param_1->Object) {
        bVar3 = true;
        goto LAB_14e1a4b90;
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar4);
  }
  bVar3 = false;
LAB_14e1a4b90:
  DestructItems<TSharedPtr<FOptimusDataType_const_,1>,int>
            ((TSharedPtr<FOptimusDataType_const_,1> *)local_18.AllocatorInstance.Data,
             local_18.ArrayNum);
  if ((TSharedPtr<FOptimusDataType_const_,1> *)local_18.AllocatorInstance.Data !=
      (TSharedPtr<FOptimusDataType_const_,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// FindArrayMetadata @ 14e1afa20

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> * __thiscall
FOptimusDataTypeRegistry::FindArrayMetadata
          (FOptimusDataTypeRegistry *this,
          TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  undefined1 *puVar4;
  
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  puVar4 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if (puVar4 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = *(void **)(puVar4 + 0x70);
  iVar2 = *(int *)(puVar4 + 0x78);
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// FindArrayType @ 14e1afb10

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindArrayType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FFieldClass *param_1)

{
  FName *pFVar1;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName local_res8;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1->Name);
  pTVar5 = (TReferenceControllerBase<1> *)&pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    pTVar5 = pTVar6;
  }
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar1 = (FName *)pTVar5->_padding_;
    pTVar6 = *(TReferenceControllerBase<1> **)&pTVar5->SharedReferenceCount;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar1 != (FName *)0x0) {
      local_res8 = *pFVar1;
      pFVar3 = ::FName::ToString(&local_res8,&local_28);
      ::FString::ConcatCF(&local_38,L"TArray<",pFVar3);
      ::FString::ConcatFC(&local_48,&local_38,L">");
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar4.Data = local_48.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res18,(wchar_t *)FVar4.Data);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FindType(this,__return_storage_ptr__,local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindArrayType @ 14e1afc50

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindArrayType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FName local_res20;
  FName local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  FindType(this,&local_50,param_1);
  if (local_50.Object == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if ((local_50.Object == (FOptimusDataType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FOptimusDataType_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
    local_res20 = (local_50.Object)->TypeName;
    pFVar4 = ::FName::ToString(&local_res20,&local_20);
    ::FString::ConcatCF(&local_30,L"TArray<",pFVar4);
    ::FString::ConcatFC(&local_40,&local_30,L">");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar5.Data = local_40.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,(wchar_t *)FVar5.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FindType(this,__return_storage_ptr__,local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindArrayType @ 14e1afd90

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindArrayType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FName local_res20;
  FName local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  FindType(this,&local_50,param_1);
  if (local_50.Object == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_50.Object == (FOptimusDataType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FOptimusDataType_const_,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    local_res20 = (local_50.Object)->TypeName;
    pFVar4 = ::FName::ToString(&local_res20,&local_20);
    ::FString::ConcatCF(&local_30,L"TArray<",pFVar4);
    ::FString::ConcatFC(&local_40,&local_30,L">");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar5.Data = local_40.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_58,(wchar_t *)FVar5.Data);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
    FindType(this,__return_storage_ptr__,local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindArrayType @ 14e1afee0

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindArrayType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,UScriptStruct *param_1)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  FString *pFVar6;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(param_1->_padding_ + 0x380))(param_1,&local_28);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e1aff7f;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&local_38,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14e1aff7f:
  local_res10.ComparisonIndex.Value = local_res8._0_4_;
  local_res10.Number = local_res8._4_4_;
  pFVar6 = ::FName::ToString(&local_res10,&local_28);
  ::FString::ConcatCF(&local_38,L"TArray<",pFVar6);
  ::FString::ConcatFC(&local_48,&local_38,L">");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar9.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,local_res18);
  if ((pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
     (&pTVar7->field_0x10 == (undefined1 *)0x0)) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar2 = *(FOptimusDataType **)&pTVar7->field_0x10;
    pTVar3 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindArrayType @ 14e1b0070

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindArrayType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FOptimusDataType *pFVar2;
  FString *pFVar3;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar4;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res8 = param_1;
  pFVar3 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar3);
  ::FString::ConcatFC(&local_38,&local_28,L">");
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar6.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pTVar4 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,local_res10);
  puVar5 = (undefined8 *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (puVar5 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (TReferenceControllerBase<1> *)puVar5[1];
    pFVar2 = (FOptimusDataType *)*puVar5;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindAttributeType @ 14e1b0170

/* WARNING: Enum "Type": Some values do not have unique names */

UScriptStruct * __thiscall
FOptimusDataTypeRegistry::FindAttributeType(FOptimusDataTypeRegistry *this,FName param_1)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
  *this_01;
  UScriptStruct **ppUVar4;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar5;
  UScriptStruct *pUVar6;
  FOptimusDataType *pFVar7;
  UClass *pUVar8;
  
  this_01 = GetBuiltInAttributeTypes();
  ppUVar4 = TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
            ::Find((TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
                    *)this_01,param_1);
  if (ppUVar4 != (UScriptStruct **)0x0) {
    return *ppUVar4;
  }
  pTVar5 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1);
  if ((pTVar5 != (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) &&
     (this_00 = &pTVar5->field_0x10, this_00 != (undefined1 *)0x0)) {
    if ((*(longlong *)this_00 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar2)();
      return pUVar6;
    }
    if ((*(byte *)(*(longlong *)this_00 + 0x48) & 4) == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8742395069035706693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                         ,0x6bb,
                         "EnumHasAnyFlags(InfoPtr->DataType->UsageFlags, EOptimusDataTypeUsageFlags::AnimAttributes)"
                        );
      if (!bVar3) {
        return (UScriptStruct *)0x0;
      }
      pcVar2 = (code *)swi(3);
      pUVar6 = (UScriptStruct *)(*pcVar2)();
      return pUVar6;
    }
    pFVar7 = TSharedPtr<FOptimusDataType,1>::operator->((TSharedPtr<FOptimusDataType,1> *)this_00);
    pUVar6 = (UScriptStruct *)FWeakObjectPtr::Get(&(pFVar7->TypeObject).WeakPtr);
    if (pUVar6 != (UScriptStruct *)0x0) {
      pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        return pUVar6;
      }
    }
    return (UScriptStruct *)0x0;
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
  return (UScriptStruct *)0x0;
}

// FindPropertyCreateFunc @ 14e1b1f20

/* WARNING: Enum "Type": Some values do not have unique names */

TFunction<FProperty_*___cdecl(FFieldVariant,FName)> * __thiscall
FOptimusDataTypeRegistry::FindPropertyCreateFunc
          (FOptimusDataTypeRegistry *this,
          TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  pTVar2 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1);
  puVar3 = &pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    return __return_storage_ptr__;
  }
  lVar1 = *(longlong *)(puVar3 + 0x10);
  *(longlong *)__return_storage_ptr__ = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x20);
    if (*(undefined8 **)(puVar3 + 0x38) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(puVar3 + 0x38);
    }
    (**(code **)*puVar4)(puVar4,&__return_storage_ptr__->field_0x10);
  }
  return __return_storage_ptr__;
}

// FindPropertyValueConvertFunc @ 14e1b1fc0

/* WARNING: Enum "Type": Some values do not have unique names */

TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> * __thiscall
FOptimusDataTypeRegistry::FindPropertyValueConvertFunc
          (FOptimusDataTypeRegistry *this,
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
          *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  pTVar2 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1);
  puVar3 = &pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    return __return_storage_ptr__;
  }
  lVar1 = *(longlong *)(puVar3 + 0x40);
  *(longlong *)__return_storage_ptr__ = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x50);
    if (*(undefined8 **)(puVar3 + 0x68) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(puVar3 + 0x68);
    }
    (**(code **)*puVar4)(puVar4,&__return_storage_ptr__->field_0x10);
  }
  return __return_storage_ptr__;
}

// FindType @ 14e1b2060

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FFieldClass *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FOptimusDataType *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1->Name);
  puVar4 = (undefined8 *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    pFVar2 = (FOptimusDataType *)*puVar4;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindType @ 14e1b20d0

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FProperty *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  undefined8 *puVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FOptimusDataType *pFVar8;
  undefined1 local_res18 [8];
  FName local_res20;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      plVar2 = (longlong *)param_1[1]._padding_;
      if (plVar2 != (longlong *)0x0) {
        pUVar3 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          (**(code **)(*plVar2 + 0x380))(plVar2,&local_28);
          Optimus::Private::GetTypeNameForGuid((FGuid *)local_res18);
          FindType(this,__return_storage_ptr__,(FName)local_res18);
          return __return_storage_ptr__;
        }
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x388))(plVar2,&local_38,0);
      if (*(int *)(puVar4 + 1) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)*puVar4;
      }
      ::FName::FName((FName *)local_res18,pwVar7);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FindType(this,__return_storage_ptr__,(FName)local_res18);
      return __return_storage_ptr__;
    }
    if (param_1 != (FProperty *)0x0) {
      if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) != 0) {
        local_res18 = *(undefined1 (*) [8])(param_1[1]._padding_ + 0x18);
        ::FName::ToString((FName *)local_res18,&local_48);
        ::FString::PrintfImpl((FString *)&local_58,L"U%s");
        pFVar8 = (FOptimusDataType *)L"";
        if ((int)local_58.SharedReferenceCount.ReferenceController != 0) {
          pFVar8 = local_58.Object;
        }
        ::FName::FName(&local_res20,(wchar_t *)pFVar8);
        if (local_58.Object != (FOptimusDataType *)0x0) {
          FMemory::Free(local_58.Object);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FindType(this,__return_storage_ptr__,local_res20);
        return __return_storage_ptr__;
      }
      if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
        FindType(this,&local_58,(FProperty *)param_1[1]._padding_);
        if (local_58.Object != (FOptimusDataType *)0x0) {
          local_res18 = *(undefined1 (*) [8])&(local_58.Object)->TypeName;
          pFVar5 = ::FName::ToString((FName *)local_res18,&local_28);
          ::FString::ConcatCF(&local_38,L"TArray<",pFVar5);
          ::FString::ConcatFC(&local_48,&local_38,L">");
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_48.Data.ArrayNum != 0) {
            FVar6.Data = local_48.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_res20,(wchar_t *)FVar6.Data);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          FindType(this,__return_storage_ptr__,local_res20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)
                     CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                              (int)local_58.SharedReferenceCount.ReferenceController));
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_58.SharedReferenceCount.ReferenceController._4_4_,
                            (int)local_58.SharedReferenceCount.ReferenceController));
        __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
    }
  }
  FindType(this,__return_storage_ptr__,(FFieldClass *)param_1->_padding_);
  return __return_storage_ptr__;
}

// FindType @ 14e1b2350

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,UClass *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FOptimusDataType *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::PrintfImpl(&local_38,L"U%s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar5.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,local_res10);
  puVar4 = (undefined8 *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    pFVar2 = (FOptimusDataType *)*puVar4;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindType @ 14e1b2440

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,UScriptStruct *param_1)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar6;
  wchar_t *pwVar7;
  FName local_res8;
  void *local_18 [2];
  
  if (param_1 != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(param_1->_padding_ + 0x380))(param_1,local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e1b24df;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)*puVar5;
  }
  ::FName::FName(&local_res8,pwVar7);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
LAB_14e1b24df:
  pTVar6 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,local_res8);
  if ((pTVar6 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
     (&pTVar6->field_0x10 == (undefined1 *)0x0)) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar2 = *(FOptimusDataType **)&pTVar6->field_0x10;
    pTVar3 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindType @ 14e1b2540

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,
          FShaderValueTypeHandle param_1)

{
  FName *pFVar1;
  int iVar2;
  FOptimusDataType *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar7;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (FName *)(this->RegistrationOrder).AllocatorInstance.Data;
  iVar2 = (this->RegistrationOrder).ArrayNum;
  pFVar1 = pFVar9 + iVar2;
  while( true ) {
    if ((this->RegistrationOrder).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) {
      __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    pTVar7 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&this->RegisteredTypes,*pFVar9);
    if ((pTVar7 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x27b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FOptimusDataType_const_,1> *)(*pcVar5)();
      return pTVar8;
    }
    pFVar3 = *(FOptimusDataType **)&pTVar7->field_0x10;
    pTVar4 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x18;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar3 == (FOptimusDataType *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) break;
    if ((pFVar3->ShaderValueType).ValueTypePtr == param_1.ValueTypePtr) {
      __return_storage_ptr__->Object = pFVar3;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar9 = pFVar9 + 1;
  }
  pcVar5 = (code *)swi(3);
  pTVar8 = (TSharedPtr<FOptimusDataType_const_,1> *)(*pcVar5)();
  return pTVar8;
}

// FindType @ 14e1b2670

TSharedPtr<FOptimusDataType_const_,1> * __thiscall
FOptimusDataTypeRegistry::FindType
          (FOptimusDataTypeRegistry *this,
          TSharedPtr<FOptimusDataType_const_,1> *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FOptimusDataType *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                   *)&this->RegisteredTypes,param_1);
  puVar4 = (undefined8 *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    __return_storage_ptr__->Object = (FOptimusDataType *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    pFVar2 = (FOptimusDataType *)*puVar4;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// Get @ 14e1b7610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOptimusDataTypeRegistry * __cdecl FOptimusDataTypeRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FGCObject::RegisterGCObject((FGCObject *)&::Singleton);
      ::Singleton._padding_ = (longlong)&___7FOptimusDataTypeRegistry__6B_;
      ::Singleton.RegisteredTypes._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Singleton.RegisteredTypes._48_8_ = _UNK_150631d98;
      ::Singleton.RegisteredTypes._0_8_ = 0;
      ::Singleton.TypeWithAtomicSupport.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Singleton.TypeWithAtomicSupport.Elements._48_8_ = _UNK_150631d98;
      ::Singleton.RegisteredTypes._8_8_ = 0;
      ::Singleton.RegisteredTypes._32_8_ = 0;
      ::Singleton.RegisteredTypes._64_8_ = 0;
      ::Singleton.RegisteredTypes._72_4_ = 0;
      ::Singleton.RegistrationOrder.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Singleton.RegistrationOrder.ArrayNum = 0;
      ::Singleton.RegistrationOrder.ArrayMax = 0;
      ::Singleton.TypeWithAtomicSupport.Elements._0_8_ = 0;
      ::Singleton.TypeWithAtomicSupport.Elements._8_8_ = 0;
      ::Singleton.TypeWithAtomicSupport.Elements._32_8_ = 0;
      ::Singleton.TypeWithAtomicSupport.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      ::Singleton.TypeWithAtomicSupport.HashSize = 0;
      ::Singleton.OnDataTypeChanged._0_8_ = 0;
      ::Singleton.OnDataTypeChanged._8_8_ = 0;
      ::Singleton.OnDataTypeChanged._16_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton.OnDataTypeChanged._24_8_ = _UNK_150631d48;
      atexit(`FOptimusDataTypeRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetAllTypes @ 14e1b96d0

TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
FOptimusDataTypeRegistry::GetAllTypes
          (FOptimusDataTypeRegistry *this,
          TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar6;
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (FName *)(this->RegistrationOrder).AllocatorInstance.Data;
  iVar2 = (this->RegistrationOrder).ArrayNum;
  pFVar1 = pFVar9 + iVar2;
  while( true ) {
    if ((this->RegistrationOrder).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pTVar6 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&this->RegisteredTypes,*pFVar9);
    if (pTVar6 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
    }
    local_38 = *(undefined8 *)&pTVar6->field_0x10;
    local_30 = *(longlong *)&pTVar6->field_0x18;
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar8 = local_38;
    *(longlong *)(pFVar8 + 8) = local_30;
    local_30 = 0;
    local_38 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar9 = pFVar9 + 1;
  }
  return __return_storage_ptr__;
}

// GetAllTypesWithAtomicSupport @ 14e1b9880

TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
FOptimusDataTypeRegistry::GetAllTypesWithAtomicSupport
          (FOptimusDataTypeRegistry *this,
          TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  longlong local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *local_50;
  
  bVar6 = false;
  bVar5 = false;
  puVar1 = &(this->TypeWithAtomicSupport).Elements.field_0x10;
  local_b0 = 0;
  local_res10[0] = 0;
  local_d0 = &this->TypeWithAtomicSupport;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->TypeWithAtomicSupport).Elements.field_0x28;
  iStack_c8 = 0;
  uStack_c4 = 1;
  iStack_b4 = iStack_c8;
  if (iVar10 != 0) {
    puVar19 = *(uint **)&(this->TypeWithAtomicSupport).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar20 = *puVar19;
    local_b0 = 0;
    iStack_c8 = 0;
    while (uVar20 == 0) {
      lVar13 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14e1b9944;
      uVar20 = puVar19[lVar13 + 1];
    }
    uStack_c4 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_b4 = local_res18 + -1 + local_b0;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_14e1b9944:
  iStack_a8 = *(int *)&(this->TypeWithAtomicSupport).Elements.field_0x8 -
              *(int *)&(this->TypeWithAtomicSupport).Elements.field_0x34;
  uVar20 = *(uint *)&(this->TypeWithAtomicSupport).Elements.field_0x28;
  TStack_90._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uStack_b8 = 0xffffffff;
  uVar21 = uVar20 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iStack_b4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_90._28_4_ = iStack_b4;
  TStack_90.BaseBitIndex = local_b0;
  uStack_70 = CONCAT44(uStack_a4,iStack_a8);
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_a0 = local_d0;
  local_98 = local_d0;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar10 < (int)uVar20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *)
              (*pcVar4)();
    return pTVar11;
  }
  pTVar7 = local_a0;
  uVar3 = *(uint *)&(this->TypeWithAtomicSupport).Elements.field_0x28;
  if (uVar20 != uVar3) {
    puVar18 = *(undefined1 **)&(this->TypeWithAtomicSupport).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e1b9a60;
      uVar20 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar20 = local_res20 + -1 + uVar21;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_14e1b9a60:
  while( true ) {
    pTVar8 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar20) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    pTVar12 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                      *)&this->RegisteredTypes,
                     *(FName *)(*(longlong *)&pTVar8->Elements +
                               (longlong)TStack_90.CurrentBitIndex * 0x10));
    plVar14 = (longlong *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 == (longlong *)0x0) {
      bVar5 = true;
      local_60 = (TReferenceControllerBase<1> *)0x0;
      puVar15 = &local_68;
      local_e0 = 0;
    }
    else {
      local_50 = (TReferenceControllerBase<1> *)plVar14[1];
      bVar6 = true;
      local_e0 = *plVar14;
      if (local_50 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
        UNLOCK();
      }
      puVar15 = &local_58;
    }
    local_d8 = (TReferenceControllerBase<1> *)puVar15[1];
    puVar15[1] = 0;
    *puVar15 = 0;
    if (bVar5) {
      bVar5 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    }
    if (local_e0 != 0) {
      pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 <
           pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TArray<TSharedPtr<FOptimusDataType_const_,1>,TSizedDefaultAllocator<32>_> *)
                  (*pcVar4)();
        return pTVar11;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(longlong *)pFVar16 = local_e0;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_d8;
      if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return __return_storage_ptr__;
}

// GetArrayTypeName @ 14e1b9fd0

FName __cdecl FOptimusDataTypeRegistry::GetArrayTypeName(FFieldClass *param_1)

{
  GetArrayTypeName((FName)param_1);
  return (FName)param_1;
}

// GetArrayTypeName @ 14e1b9ff0

FName __cdecl FOptimusDataTypeRegistry::GetArrayTypeName(UScriptStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  undefined8 *puVar3;
  longlong *in_RDX;
  wchar_t *pwVar4;
  FName local_res8;
  void *local_18;
  
  if (in_RDX != (longlong *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(in_RDX[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(in_RDX[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      (**(code **)(*in_RDX + 0x380))();
      Optimus::Private::GetTypeNameForGuid((FGuid *)&local_res8);
      goto LAB_14e1ba087;
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*in_RDX + 0x388))();
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*puVar3;
  }
  ::FName::FName(&local_res8,pwVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14e1ba087:
  GetArrayTypeName((FName)param_1);
  return (FName)param_1;
}

// GetArrayTypeName @ 14e1ba0b0

FName __cdecl FOptimusDataTypeRegistry::GetArrayTypeName(FName param_1)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FName local_res10 [3];
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatCF(&local_28,L"TArray<",pFVar1);
  ::FString::ConcatFC(&local_38,&local_28,L">");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar2.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetOnDataTypeChanged @ 14e1cba00

FOnDataTypeChanged * __thiscall
FOptimusDataTypeRegistry::GetOnDataTypeChanged(FOptimusDataTypeRegistry *this)

{
  return &this->OnDataTypeChanged;
}

// GetReferencerName @ 14e1db760

FString * __thiscall
FOptimusDataTypeRegistry::GetReferencerName
          (FOptimusDataTypeRegistry *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FOptimusDataTypeRegistry");
  return __return_storage_ptr__;
}

// GetStructTypeUsageFlag @ 14e1e3f50

EOptimusDataTypeUsageFlags __cdecl
FOptimusDataTypeRegistry::GetStructTypeUsageFlag(UScriptStruct *param_1)

{
  code *pcVar1;
  bool bVar2;
  EOptimusDataTypeUsageFlags EVar3;
  FOptimusDataTypeRegistry *this;
  undefined2 local_res10 [12];
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  this = Get();
  FindType(this,&local_18,param_1);
  if (local_18.Object == (FOptimusDataType *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    local_res10[0] = 0x1f00;
    EVar3 = `FOptimusDataTypeRegistry::GetStructTypeUsageFlag'::__l2::FTypeValidator::WalkStruct
                      (local_res10,param_1);
    return EVar3;
  }
  if (local_18.Object == (FOptimusDataType *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = (local_18.Object)->UsageFlags;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return EVar3;
}

// GetTypeName @ 14e1e78a0

FName __cdecl FOptimusDataTypeRegistry::GetTypeName(FAssetData *param_1)

{
  Optimus::GetTypeName(param_1);
  return (FName)param_1;
}

// GetTypeName @ 14e1e78c0

FName __cdecl FOptimusDataTypeRegistry::GetTypeName(FFieldClass *param_1)

{
  FName *in_RDX;
  
  param_1->Name = *in_RDX;
  return (FName)param_1;
}

// GetTypeName @ 14e1e78d0

FName __cdecl FOptimusDataTypeRegistry::GetTypeName(UScriptStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  undefined8 *puVar3;
  longlong *in_RDX;
  wchar_t *pwVar4;
  void *local_18;
  
  if (in_RDX != (longlong *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(in_RDX[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(in_RDX[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      (**(code **)(*in_RDX + 0x380))();
      Optimus::Private::GetTypeNameForGuid((FGuid *)param_1);
      return (FName)param_1;
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*in_RDX + 0x388))();
  if (*(int *)(puVar3 + 1) == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)*puVar3;
  }
  ::FName::FName((FName *)param_1,pwVar4);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return (FName)param_1;
}

// OnAnimationAttributeRegistryChanged @ 14e1f3cf0

void __thiscall
FOptimusDataTypeRegistry::OnAnimationAttributeRegistryChanged
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035706750>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x682,"InScriptStruct");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      FindType(this,&local_18,param_1);
      if ((param_2) && (local_18.Object == (FOptimusDataType *)0x0)) {
        RegisterStructType(this,param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035706750>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x682,"InScriptStruct->IsA<UUserDefinedStruct>()");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnAssetRemoved @ 14e1f3e00

void __thiscall
FOptimusDataTypeRegistry::OnAssetRemoved(FOptimusDataTypeRegistry *this,FAssetData *param_1)

{
  UClass *this_00;
  FName local_res10;
  FTopLevelAssetPath local_18;
  
  this_00 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
  UStruct::GetStructPathName((UStruct *)this_00,&local_18);
  if (((param_1->AssetClassPath).PackageName == local_18.PackageName) &&
     ((param_1->AssetClassPath).AssetName == local_18.AssetName)) {
    Optimus::GetTypeName((FAssetData *)&local_res10);
    UnregisterType(this,local_res10);
  }
  return;
}

// OnAssetRenamed @ 14e1f3e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FOptimusDataTypeRegistry::OnAssetRenamed
          (FOptimusDataTypeRegistry *this,FAssetData *param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar8;
  wchar_t *pwVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 local_e8 [8];
  FText local_e0;
  undefined1 local_d0 [24];
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ForElementType<FSetElementId> local_98;
  ulonglong local_88;
  FName local_80;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_78;
  
  local_d0._16_8_ = 0;
  uStack_b8 = 0;
  local_98.InlineData[0] = '\0';
  local_98.InlineData[1] = '\0';
  local_98.InlineData[2] = '\0';
  local_98.InlineData[3] = '\0';
  local_98._padding_ = 0;
  local_a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_88 = 0;
  local_d0._0_8_ = (FScriptContainerElement *)0x0;
  local_d0._8_8_ = 0;
  local_b0 = (void *)0x0;
  local_98.SecondaryData = (ForElementType<FSetElementId>)0x0;
  pTVar4 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                     (&local_78,
                      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d0);
  pUVar5 = FAssetData::FastGetAsset(param_1,true,pTVar4);
  local_88 = local_88 & 0xffffffff00000000;
  if (local_98.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  iVar2 = SUB84(local_d0._8_8_,4);
  local_d0._8_8_ = local_d0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
  }
  uVar3 = local_a8._4_4_;
  uStack_a0 = 0xffffffff;
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if ((FScriptContainerElement *)local_d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d0._0_8_);
  }
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        puVar7 = (undefined8 *)(**(code **)(*(longlong *)pUVar5 + 0x388))(pUVar5,&local_e0,0);
        if (*(int *)(puVar7 + 1) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)*puVar7;
        }
        ::FName::FName((FName *)local_e8,pwVar9);
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_e0.TextData.Reference);
        }
      }
      else {
        (**(code **)(*(longlong *)pUVar5 + 0x380))(pUVar5,&local_e0);
        Optimus::Private::GetTypeNameForGuid((FGuid *)local_e8);
      }
      pTVar8 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                       *)&this->RegisteredTypes,(FName)local_e8);
      if ((pTVar8 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
         (&pTVar8->field_0x10 == (undefined1 *)0x0)) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        lVar1 = *(longlong *)&pTVar8->field_0x10;
        pTVar10 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x18;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (lVar1 != 0) {
          local_80.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
          local_80.Number = *(uint *)&pUVar5->field_0x1c;
          FText::FromName(&local_e0,&local_80);
          FText::operator=((FText *)(lVar1 + 8),&local_e0);
          if (local_e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
          }
          TMulticastDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                     &this->OnDataTypeChanged,(FName)local_e8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  return;
}

// OnFilesLoaded @ 14e1f4c60

void __thiscall FOptimusDataTypeRegistry::OnFilesLoaded(FOptimusDataTypeRegistry *this)

{
  FWeakObjectPtr *pFVar1;
  UScriptStruct *pUVar2;
  TMap<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
  *this_00;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FWeakObjectPtr local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  FVar7.Data = UE::Anim::AttributeTypes::RegisteredTypes.AllocatorInstance.Data;
  lVar6 = (longlong)UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum;
  if (UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum == 0) {
    local_4c = 0;
    iVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum,0,&local_58,
               UE::Anim::AttributeTypes::RegisteredTypes.ArrayNum,&local_4c);
    memcpy(local_58.Data,FVar7.Data,lVar6 << 3);
    iVar4 = local_50;
  }
  pFVar1 = (FWeakObjectPtr *)(local_58.Data + (longlong)iVar4 * 8);
  FVar7.Data = local_58.Data;
  iVar5 = iVar4;
  do {
    if (iVar5 != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if ((FWeakObjectPtr *)FVar7.Data == pFVar1) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar7.Data;
    pUVar2 = (UScriptStruct *)FWeakObjectPtr::Get(&local_res10);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    this_00 = GetBuiltInAttributeTypes();
    TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,UScriptStruct_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>_>
                *)this_00,&local_48);
    if (pUVar2 != (UScriptStruct *)0x0) {
      for (FVar3.Data = local_48.AllocatorInstance.Data;
          FVar3.Data != local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
          FVar3.Data = FVar3.Data + 8) {
        if (*(UScriptStruct **)FVar3.Data == pUVar2) goto LAB_14e1f4d8b;
      }
      FindType(this,&local_38,pUVar2);
      if (local_38.Object == (FOptimusDataType *)0x0) {
        RegisterStructType(this,pUVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
LAB_14e1f4d8b:
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    FVar7.Data = FVar7.Data + 8;
    iVar5 = local_50;
  } while( true );
}

// RefreshStructType @ 14e2059a0

void __thiscall
FOptimusDataTypeRegistry::RefreshStructType
          (FOptimusDataTypeRegistry *this,UUserDefinedStruct *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  undefined1 local_res8 [12];
  uint uStackX_14;
  void *local_18 [2];
  
  if (param_1 != (UUserDefinedStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      (**(code **)(param_1->_padding_ + 0x380))(param_1,local_18);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_res8);
      goto LAB_14e205a3c;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_18,0);
  if (*(int *)(puVar5 + 1) == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)*puVar5;
  }
  ::FName::FName((FName *)local_res8,pwVar6);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
LAB_14e205a3c:
  uVar1 = local_res8._0_8_;
  local_res8._8_4_ = local_res8._0_4_;
  uStackX_14 = local_res8._4_4_;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)local_res8._0_8_);
  if (*(int *)&(this->RegisteredTypes).field_0x8 != *(int *)&(this->RegisteredTypes).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RegisteredTypes).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredTypes).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->RegisteredTypes).field_0x48 - 1U & uStackX_14 + uVar2
                              ) * 4);
    if (iVar3 != -1) {
      while (*(FName *)((longlong)iVar3 * 0xa0 + *(longlong *)&this->RegisteredTypes) !=
             (FName)uVar1) {
        iVar3 = *(int *)((longlong)iVar3 * 0xa0 + 0x90 + *(longlong *)&this->RegisteredTypes);
        if (iVar3 == -1) {
          return;
        }
      }
      UnregisterType(this,(FName)local_res8._0_8_);
      RegisterStructType(this,(UScriptStruct *)param_1);
      TMulticastDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(FName),FDefaultDelegateUserPolicy> *)
                 &this->OnDataTypeChanged,(FName)local_res8._0_8_);
    }
  }
  return;
}

// RegisterArrayTypeIfApplicable @ 14e205c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e205e1b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe18 : 0x00014e205e1f */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable
          (FOptimusDataTypeRegistry *this,TSharedPtr<FOptimusDataType_const_,1> *param_1)

{
  int *piVar1;
  FOptimusDataType *pFVar2;
  ForAnyElementType _Src;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  FOptimusDataTypeRegistry *this_00;
  FShaderValueTypeHandle FVar12;
  longlong *plVar13;
  code *pcVar14;
  FName FVar15;
  FString *pFVar16;
  FText *pFVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined1 auStackY_348 [32];
  ForAnyElementType local_2f8;
  undefined8 local_2f0;
  TSharedPtr<FOptimusDataType_const_,1> local_2e8;
  TSharedRef<FOptimusDataType,1> local_2d8;
  int local_2c8;
  undefined4 uStack_2c4;
  TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&> local_2c0;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_2b0;
  TSharedPtr<FOptimusDataType_const_,1> local_2a0;
  FString local_290;
  FOptimusDataType *local_280;
  FOptimusDataType **local_278;
  undefined1 local_270 [8];
  FText local_268;
  code *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  longlong *plStack_230;
  code *local_228;
  longlong local_218 [3];
  longlong *local_200;
  longlong local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong local_1d0;
  code *local_1c8;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  longlong local_188;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong *local_160;
  code *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  undefined1 local_128 [48];
  FOptimusDataType *local_f8;
  TReferenceControllerBase<1> *local_f0;
  code *local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if (param_1->Object == (FOptimusDataType *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElementDataType.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x387,L"");
    if (bVar8) {
      pcVar14 = (code *)swi(3);
      uVar9 = (*pcVar14)();
      return (bool)uVar9;
    }
    if ((param_1->Object == (FOptimusDataType *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar14 = (code *)swi(3);
      uVar9 = (*pcVar14)();
      return (bool)uVar9;
    }
  }
  if ((param_1->Object->UsageFlags & (Property|Variable)) == None) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar8 = false;
  }
  else {
    if ((param_1->Object == (FOptimusDataType *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar14 = (code *)swi(3);
      uVar9 = (*pcVar14)();
      return (bool)uVar9;
    }
    pFVar2 = param_1->Object;
    this_00 = Get();
    FindArrayMetadata(this_00,&local_2b0,pFVar2->TypeName);
    if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.AllocatorInstance.Data);
    }
    if (local_2b0.ArrayNum == 0) {
      if ((param_1->Object == (FOptimusDataType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      FindPropertyCreateFunc
                (this,(TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_128,
                 param_1->Object->TypeName);
      FVar12.ValueTypePtr = (FShaderValueType *)0x0;
      local_1f8 = local_128._0_8_;
      local_1d0 = 0;
      if (local_128._0_8_ != 0) {
        plVar18 = (longlong *)(local_128 + 0x10);
        if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_128._40_8_;
        }
        (**(code **)*plVar18)(plVar18,&local_1e8);
      }
      local_228 = (code *)0x0;
      local_200 = FMemory::Malloc(0x40,0x10);
      *local_200 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::`2'::<lambda_1>,0,1>
                    ::_vftable_;
      plVar18 = local_200 + 2;
      *plVar18 = local_1f8;
      local_200[7] = local_1d0;
      local_1d0 = 0;
      *(undefined4 *)(local_200 + 4) = local_1e8;
      *(undefined4 *)((longlong)local_200 + 0x24) = uStack_1e4;
      *(undefined4 *)(local_200 + 5) = uStack_1e0;
      *(undefined4 *)((longlong)local_200 + 0x2c) = uStack_1dc;
      local_200[6] = local_1d8;
      if (*plVar18 != 0) {
        local_1f8 = 0;
      }
      if (plVar18 != (longlong *)0x0) {
        local_228 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l2::<lambda_1>,FProperty_*,FFieldVariant,FName>
                    ::Call;
      }
      if (local_1f8 != 0) {
        (**(code **)(CONCAT44(uStack_1e4,local_1e8) + 0x10))();
      }
      local_258 = (code *)0x0;
      plStack_230 = (longlong *)0x0;
      local_2f8.Data = (FScriptContainerElement *)0x0;
      local_2f0 = 0;
      if ((param_1->Object == (FOptimusDataType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      pFVar2 = param_1->Object;
      if ((pFVar2->ShaderValueType).ValueTypePtr != (FShaderValueType *)0x0) {
        local_2a0.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_2a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_2a0.Object = pFVar2;
        GetArrayElementDataTypeForStructuredBuffer(&local_2e8,&local_2a0);
        if ((local_2e8.Object == (FOptimusDataType *)0x0) &&
           (local_2c0.Value = (FTypeInfo *)param_1,
           bVar8 = `FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l19::<lambda_2>::
                   operator()(&local_2c0.Value), !bVar8)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.SharedReferenceCount.ReferenceController);
          if (local_2f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data);
          }
          if (local_258 != (code *)0x0) {
            plVar18 = (longlong *)&local_248;
            if (plStack_230 != (longlong *)0x0) {
              plVar18 = plStack_230;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
          if (local_228 != (code *)0x0) {
            plVar18 = local_218;
            if (local_200 != (longlong *)0x0) {
              plVar18 = local_200;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
          if (local_128._0_8_ != 0) {
            plVar18 = (longlong *)(local_128 + 0x10);
            if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
              plVar18 = (longlong *)local_128._40_8_;
            }
            (**(code **)(*plVar18 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return false;
        }
        if ((local_2e8.Object == (FOptimusDataType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        if ((param_1->Object == (FOptimusDataType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        if (((local_2e8.Object)->ShaderValueSize < param_1->Object->ShaderValueSize) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerDataTypeForStructuredBuffer->ShaderValueSize >= InElementDataType->ShaderValueSize"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                               ,0x3a9,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        if ((local_2e8.Object == (FOptimusDataType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        FVar12 = FShaderValueType::MakeDynamicArrayType(&(local_2e8.Object)->ShaderValueType);
        if ((local_2e8.Object == (FOptimusDataType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        FindPropertyValueConvertFunc
                  (this,(TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                         *)local_78,(local_2e8.Object)->TypeName);
        if ((local_78._0_8_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementPropertyValueConvertFunc",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                               ,0x3ae,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        if ((local_2e8.Object == (FOptimusDataType *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        iVar11 = (local_2e8.Object)->ShaderValueSize;
        iVar10 = FOptimusDataType::GetNumArrays(local_2e8.Object);
        if ((iVar10 != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerDataTypeForStructuredBuffer->GetNumArrays() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                               ,0x3b2,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          uVar9 = (*pcVar14)();
          return (bool)uVar9;
        }
        local_1c8 = local_228;
        local_1a0 = (longlong *)0x0;
        if (local_228 != (code *)0x0) {
          plVar18 = local_218;
          if (local_200 != (longlong *)0x0) {
            plVar18 = local_200;
          }
          (**(code **)*plVar18)(plVar18,&local_1b8);
        }
        local_198 = iVar11;
        local_188 = local_78._0_8_;
        local_160 = (longlong *)0x0;
        if (local_78._0_8_ != 0) {
          plVar18 = (longlong *)(local_78 + 0x10);
          if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_78._40_8_;
          }
          (**(code **)*plVar18)(plVar18,&local_178);
        }
        local_158 = (code *)0x0;
        plVar13 = FMemory::Malloc(0x80,0x10);
        plStack_130 = plStack_230;
        uVar7 = uStack_23c;
        uVar6 = uStack_240;
        uVar5 = uStack_244;
        uVar4 = local_248;
        uVar3 = uStack_250;
        plVar18 = plVar13 + 2;
        *plVar13 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::`18'::<lambda_3>,0,1>
                    ::_vftable_;
        *plVar18 = (longlong)local_1c8;
        plVar13[7] = (longlong)local_1a0;
        local_1a0 = (longlong *)0x0;
        plVar13[4] = local_1b8;
        plVar13[5] = lStack_1b0;
        plVar13[6] = local_1a8;
        if (*plVar18 != 0) {
          local_1c8 = (code *)0x0;
        }
        *(int *)(plVar13 + 8) = local_198;
        plVar13[10] = local_188;
        plVar13[0xf] = (longlong)local_160;
        local_160 = (longlong *)0x0;
        plVar13[0xc] = local_178;
        plVar13[0xd] = lStack_170;
        plVar13[0xe] = local_168;
        if (plVar13[10] != 0) {
          local_188 = 0;
        }
        pcVar14 = local_158;
        if (plVar18 != (longlong *)0x0) {
          pcVar14 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l18::<lambda_3>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                    ::Call;
        }
        uStack_250 = uStack_150;
        local_238 = local_138;
        uStack_234 = uStack_134;
        plStack_230 = plVar13;
        local_248 = local_148;
        uStack_244 = uStack_144;
        uStack_240 = uStack_140;
        uStack_23c = uStack_13c;
        local_158 = local_258;
        uStack_150 = uVar3;
        local_148 = uVar4;
        uStack_144 = uVar5;
        uStack_140 = uVar6;
        uStack_13c = uVar7;
        bVar8 = local_258 != (code *)0x0;
        local_258 = pcVar14;
        if (bVar8) {
          plVar18 = (longlong *)&local_148;
          if (plStack_130 != (longlong *)0x0) {
            plVar18 = plStack_130;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (local_188 != 0) {
          plVar18 = &local_178;
          if (local_160 != (longlong *)0x0) {
            plVar18 = local_160;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        if (local_1c8 != (code *)0x0) {
          plVar18 = &local_1b8;
          if (local_1a0 != (longlong *)0x0) {
            plVar18 = local_1a0;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        uStack_2c4 = 0;
        local_2f0 = CONCAT44(local_2f0._4_4_,1);
        local_2c8 = iVar11;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,local_2f0._4_4_,&local_2f8,1,(int *)((longlong)&local_2f0 + 4));
        *(ulonglong *)local_2f8.Data = CONCAT44(uStack_2c4,local_2c8);
        if (local_78._0_8_ != 0) {
          plVar18 = (longlong *)(local_78 + 0x10);
          if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
            plVar18 = (longlong *)local_78._40_8_;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e8.SharedReferenceCount.ReferenceController);
      }
      MakeShared<FOptimusDataType,1>(&local_2d8);
      local_f8 = local_2d8.Object;
      local_f0 = local_2d8.SharedReferenceCount.ReferenceController;
      if (local_2d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = local_228;
      local_c0 = (longlong *)0x0;
      if (local_228 != (code *)0x0) {
        plVar18 = local_218;
        if (local_200 != (longlong *)0x0) {
          plVar18 = local_200;
        }
        (**(code **)*plVar18)(plVar18,local_d8);
      }
      local_b8 = local_258;
      local_90 = (longlong *)0x0;
      if (local_258 != (code *)0x0) {
        plVar18 = (longlong *)&local_248;
        if (plStack_230 != (longlong *)0x0) {
          plVar18 = plStack_230;
        }
        (**(code **)*plVar18)(plVar18,local_a8);
      }
      _Src.Data = local_2f8.Data;
      lVar19 = (longlong)(int)local_2f0;
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = (int)local_2f0;
      if ((int)local_2f0 == 0) {
        local_7c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_2f0,0,&local_88,(int)local_2f0,&local_7c);
        memcpy(local_88.Data,_Src.Data,lVar19 << 3);
      }
      if ((param_1->Object == (FOptimusDataType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      FOptimusDataType::operator=(local_2d8.Object,param_1->Object);
      if ((param_1->Object == (FOptimusDataType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      FVar15 = GetArrayTypeName((FName)local_270);
      (local_2d8.Object)->TypeName = *(FName *)FVar15;
      if ((param_1->Object == (FOptimusDataType *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      pFVar16 = FText::ToString(&param_1->Object->DisplayName);
      ::FString::ConcatFC(&local_290,pFVar16,L" Array");
      pFVar17 = FText::FromString(&local_268,&local_290);
      FText::operator=(&(local_2d8.Object)->DisplayName,pFVar17);
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      ((local_2d8.Object)->ShaderValueType).ValueTypePtr = FVar12.ValueTypePtr;
      local_278 = &local_f8;
      (local_2d8.Object)->UsageFlags =
           (local_2d8.Object)->UsageFlags & ~(PerBoneAnimAttribute|AnimAttributes|Resource);
      (local_2d8.Object)->ShaderValueSize = 0;
      local_280 = local_2d8.Object;
      TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&>_>
                ((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                  *)&this->RegisteredTypes,&local_2c0,(bool *)&local_280);
      pFVar2 = (FOptimusDataType *)(this->RegistrationOrder).AllocatorInstance.Data;
      if (((pFVar2 <= local_2d8.Object) &&
          (local_2d8.Object <
           (FOptimusDataType *)(&pFVar2->TypeName + (this->RegistrationOrder).ArrayMax))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar14 = (code *)swi(3);
        uVar9 = (*pcVar14)();
        return (bool)uVar9;
      }
      iVar11 = (this->RegistrationOrder).ArrayNum;
      piVar1 = &(this->RegistrationOrder).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->RegistrationOrder).AllocatorInstance,piVar1);
      }
      (this->RegistrationOrder).ArrayNum = iVar11 + 1;
      *(FName *)((this->RegistrationOrder).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           (local_2d8.Object)->TypeName;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      if (local_b8 != (code *)0x0) {
        plVar18 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar18 = local_90;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (local_e8 != (code *)0x0) {
        plVar18 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar18 = local_c0;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      if (local_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data);
      }
      if (local_258 != (code *)0x0) {
        plVar18 = (longlong *)&local_248;
        if (plStack_230 != (longlong *)0x0) {
          plVar18 = plStack_230;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (local_228 != (code *)0x0) {
        plVar18 = local_218;
        if (local_200 != (longlong *)0x0) {
          plVar18 = local_200;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (local_128._0_8_ != 0) {
        plVar18 = (longlong *)(local_128 + 0x10);
        if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_128._40_8_;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      bVar8 = true;
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      bVar8 = false;
    }
  }
  return bVar8;
}

// RegisterBuiltinTypes @ 14e206770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FOptimusDataTypeRegistry::RegisterBuiltinTypes(void)

{
  ulonglong uVar1;
  FName FVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  FOptimusDataTypeRegistry *this;
  FName *pFVar6;
  FShaderValueTypeHandle FVar7;
  FText *pFVar8;
  FFieldClass *pFVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  byte bVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auStackY_6e8 [32];
  undefined1 local_698 [8];
  longlong *local_690;
  uint uStack_688;
  uint uStack_684;
  TBitArray<FDefaultBitArrayAllocator> *local_680;
  undefined4 uStack_678;
  uint uStack_674;
  uint local_670;
  uint uStack_66c;
  int iStack_668;
  undefined4 uStack_664;
  FName local_660;
  FName local_658;
  FName local_650;
  longlong local_648;
  longlong *local_640;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_638;
  undefined8 uStack_618;
  code *local_608;
  undefined **local_5f8;
  code *local_5f0;
  undefined ***local_5e0;
  FText local_5d8;
  TSharedPtr<FOptimusDataType_const_,1> local_5c8;
  FLinearColor_u_0 local_5b8;
  undefined1 local_5a8;
  FLinearColor_u_0 local_5a0;
  undefined1 local_590;
  FName local_588;
  FName local_580;
  FName local_578;
  FName local_570;
  FName local_568;
  FName local_560;
  FName local_558;
  FName local_550;
  FText local_548;
  FText local_538;
  FText local_528;
  FText local_518;
  FText local_508;
  FText local_4f8;
  FText local_4e8;
  FText local_4d8;
  FLinearColor_u_0 local_4c8;
  FText local_4b8;
  FText local_4a8;
  FText local_498;
  FText local_488;
  FText local_478;
  code *local_468 [2];
  undefined **local_458;
  code *local_450;
  undefined8 local_440;
  code *local_438 [2];
  undefined **local_428;
  code *local_420;
  undefined8 local_410;
  code *local_408 [2];
  undefined **local_3f8;
  code *local_3f0;
  undefined8 local_3e0;
  code *local_3d8 [2];
  undefined **local_3c8;
  code *local_3c0;
  undefined8 local_3b0;
  code *local_3a8 [2];
  undefined **local_398;
  code *local_390;
  undefined8 local_380;
  code *local_378 [2];
  undefined **local_368;
  code *local_360;
  undefined8 local_350;
  code *local_348 [2];
  undefined **local_338;
  code *local_330;
  undefined8 local_320;
  code *local_318 [2];
  undefined **local_308;
  code *local_300;
  undefined8 local_2f0;
  code *local_2e8 [2];
  undefined **local_2d8;
  code *local_2d0;
  undefined8 local_2c0;
  code *local_2b8 [2];
  undefined **local_2a8;
  code *local_2a0;
  undefined8 local_290;
  code *local_288 [2];
  undefined **local_278;
  code *local_270;
  undefined8 local_260;
  TOptional<FLinearColor> local_258;
  TOptional<FLinearColor> local_240;
  TOptional<FLinearColor> local_228;
  TOptional<FLinearColor> local_210;
  TOptional<FLinearColor> local_1f8;
  TOptional<FLinearColor> local_1e0;
  TOptional<FLinearColor> local_1c8;
  TOptional<FLinearColor> local_1b0;
  TOptional<FLinearColor> local_198;
  TOptional<FLinearColor> local_180;
  TOptional<FLinearColor> local_168;
  TOptional<FLinearColor> local_150;
  TOptional<FLinearColor> local_138;
  TOptional<FLinearColor> local_120;
  TOptional<FLinearColor> local_108;
  code *local_e8 [2];
  code *local_d8 [3];
  undefined8 local_c0;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_b8;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  this = Get();
  local_180.bIsSet = false;
  pFVar6 = ::FName::FName(&local_588,L"bool");
  FVar2 = *pFVar6;
  local_420 = ConvertPropertyValuePOD<bool,int>;
  local_3f8 = &
              ___7__TFunction_OwnedObject_P6APEAVFBoolProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3f0 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_408[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FBoolProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_410 = 0;
  local_428 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_438[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
  local_3e0 = 0;
  FVar7 = FShaderValueType::Get(Bool);
  pFVar8 = FText::FromString(&local_488,L"Bool");
  pFVar9 = FBoolProperty::StaticClass();
  RegisterType(this,pFVar9,pFVar8,FVar7,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_408,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_438,FVar2,&local_180,PinType|DataInterfaceOutput|Variable|Resource);
  if (local_488.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
  }
  local_240.bIsSet = false;
  pFVar6 = ::FName::FName(&local_580,L"int");
  FVar2 = *pFVar6;
  local_3c0 = ConvertPropertyValuePOD<int,int>;
  local_398 = &
              ___7__TFunction_OwnedObject_P6APEAVFIntProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_390 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_3a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FIntProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_3b0 = 0;
  local_3c8 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_3d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
  local_380 = 0;
  FVar7 = FShaderValueType::Get(Int);
  pFVar8 = FText::FromString(&local_478,L"Int");
  pFVar9 = FIntProperty::StaticClass();
  RegisterType(this,pFVar9,pFVar8,FVar7,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_3a8,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_3d8,FVar2,&local_240,
               PerBoneAnimAttribute|PinType|DataInterfaceOutput|AnimAttributes|Variable|Resource);
  if (local_478.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
  }
  local_228.bIsSet = false;
  FVar7 = FShaderValueType::Get(Int,2);
  pFVar8 = FText::FromString(&local_548,L"Int Vector 2");
  pUVar10 = TBaseStructure<UE::Math::TIntPoint<int>_>::Get();
  RegisterType(this,pUVar10,pFVar8,FVar7,&local_228,false,
               PinType|DataInterfaceOutput|Variable|Resource);
  if (local_548.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
  }
  local_210.bIsSet = false;
  FVar7 = FShaderValueType::Get(Int,3);
  pFVar8 = FText::FromString(&local_538,L"Int Vector 3");
  pUVar10 = TBaseStructure<UE::Math::TIntVector3<int>_>::Get();
  RegisterType(this,pUVar10,pFVar8,FVar7,&local_210,false,
               PinType|DataInterfaceOutput|Variable|Resource);
  if (local_538.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_538.TextData.Reference + 0x10))();
  }
  local_1f8.bIsSet = false;
  FVar7 = FShaderValueType::Get(Int,4);
  pUVar10 = TBaseStructure<UE::Math::TIntVector4<int>_>::Get();
  RegisterType(this,pUVar10,FVar7,&local_1f8,false,PinType|DataInterfaceOutput|Variable|Resource);
  local_5a8 = 1;
  local_5b8._0_8_ = ___xmm_3f8000003f51eb853f3ba5e33ce147ae;
  local_5b8._8_8_ = _UNK_152e27228;
  pFVar6 = ::FName::FName(&local_578,L"uint");
  FVar2 = *pFVar6;
  local_360 = ConvertPropertyValuePOD<unsigned_int,unsigned_int>;
  local_458 = &
              ___7__TFunction_OwnedObject_P6APEAVFUInt32Property__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_450 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_3>::
              <lambda_invoker_cdecl>;
  local_468[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FUInt32Property_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_350 = 0;
  local_368 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_378[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
  local_440 = 0;
  FVar7 = FShaderValueType::Get(Uint);
  pFVar8 = FText::FromString(&local_528,L"UInt");
  pFVar9 = FUInt32Property::StaticClass();
  RegisterType(this,pFVar9,pFVar8,FVar7,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_468,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_378,FVar2,(TOptional<FLinearColor> *)&local_5b8._s_0,
               PinType|DataInterfaceOutput|Variable|Resource);
  if (local_528.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
  }
  local_1e0.bIsSet = false;
  pFVar6 = ::FName::FName(&local_570,L"real");
  FVar2 = *pFVar6;
  local_330 = ConvertPropertyValuePOD<float,float>;
  local_308 = &
              ___7__TFunction_OwnedObject_P6APEAVFFloatProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_300 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_4>::
              <lambda_invoker_cdecl>;
  local_318[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FFloatProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_320 = 0;
  local_338 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_348[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
  local_2f0 = 0;
  FVar7 = FShaderValueType::Get(Float);
  pFVar8 = FText::FromString(&local_518,L"Float");
  pFVar9 = FFloatProperty::StaticClass();
  RegisterType(this,pFVar9,pFVar8,FVar7,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_318,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_348,FVar2,&local_1e0,
               PerBoneAnimAttribute|PinType|DataInterfaceOutput|AnimAttributes|Resource);
  if (local_518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
  }
  local_1c8.bIsSet = false;
  pFVar6 = ::FName::FName(&local_568,L"real");
  FVar2 = *pFVar6;
  local_2d0 = ConvertPropertyValuePOD<double,float>;
  local_2a8 = &
              ___7__TFunction_OwnedObject_P6APEAVFDoubleProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_2a0 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_5>::
              <lambda_invoker_cdecl>;
  local_2b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FDoubleProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_2c0 = 0;
  local_2d8 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_2e8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
  local_290 = 0;
  FVar7 = FShaderValueType::Get(Float);
  pFVar8 = FText::FromString(&local_508,L"Float");
  pFVar9 = FDoubleProperty::StaticClass();
  RegisterType(this,pFVar9,pFVar8,FVar7,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_2b8,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_2e8,FVar2,&local_1c8,PinType|DataInterfaceOutput|Variable);
  if (local_508.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_508.TextData.Reference + 0x10))();
  }
  local_1b0.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,2);
  pFVar8 = FText::FromString(&local_4f8,L"Vector 2");
  pUVar10 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  RegisterType(this,pUVar10,pFVar8,FVar7,&local_1b0,false,
               PinType|DataInterfaceOutput|Variable|Resource);
  if (local_4f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4f8.TextData.Reference + 0x10))();
  }
  local_198.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,3);
  pFVar8 = FText::FromString(&local_4e8,L"Vector 3");
  pUVar10 = TBaseStructure<UE::Math::TVector<double>_>::Get();
  RegisterType(this,pUVar10,pFVar8,FVar7,&local_198,false,
               PerBoneAnimAttribute|PinType|DataInterfaceOutput|AnimAttributes|Variable|Resource);
  if (local_4e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
  }
  local_168.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,4);
  pFVar8 = FText::FromString(&local_4d8,L"Vector 4");
  pUVar10 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  RegisterType(this,pUVar10,pFVar8,FVar7,&local_168,false,
               PinType|DataInterfaceOutput|Variable|Resource);
  if (local_4d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
  }
  local_150.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,4);
  pUVar10 = TBaseStructure<FLinearColor>::Get();
  RegisterType(this,pUVar10,FVar7,&local_150,false,PinType|DataInterfaceOutput|Variable|Resource);
  local_138.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,4);
  pUVar10 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  RegisterType(this,pUVar10,FVar7,&local_138,false,
               PerBoneAnimAttribute|PinType|DataInterfaceOutput|AnimAttributes|Variable|Resource);
  local_120.bIsSet = false;
  FVar7 = FShaderValueType::Get(Float,3,3);
  pUVar10 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  RegisterType(this,pUVar10,FVar7,&local_120,false,PinType|DataInterfaceOutput|Variable|Resource);
  local_5e0 = (undefined ***)0x0;
  local_5f8 = &
              ___7__TFunction_OwnedObject_P6A_NV__TArrayView___CBEH__UFShaderValueContainerView___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_5f0 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_6>::
              <lambda_invoker_cdecl>;
  local_608 = UE::Core::Private::Function::
              TFunctionRefCaller<bool_(__cdecl*)(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView),bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
              ::Call;
  FVar7 = FShaderValueType::Get(Float,4,4);
  pUVar10 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  local_658 = (FName)pUVar10->_padding_;
  FText::FromName(&local_5d8,&local_658);
  local_108.bIsSet = false;
  local_e8[0] = local_608;
  local_c0 = 0;
  if (local_608 != (code *)0x0) {
    pppuVar13 = &local_5f8;
    if (local_5e0 != (undefined ***)0x0) {
      pppuVar13 = local_5e0;
    }
    (*(code *)**pppuVar13)(pppuVar13,local_e8 + 2);
  }
  RegisterType(this,pUVar10,&local_5d8,FVar7,
               (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                *)local_e8,&local_108,false,
               PerBoneAnimAttribute|PinType|DataInterfaceOutput|AnimAttributes|Variable|Resource);
  if (local_5d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
  }
  if (local_608 != (code *)0x0) {
    pppuVar13 = &local_5f8;
    if (local_5e0 != (undefined ***)0x0) {
      pppuVar13 = local_5e0;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  pFVar6 = ::FName::FName(&local_560,"float3x4");
  FVar2 = *pFVar6;
  FVar7 = FShaderValueType::Get(Float,3,4);
  pFVar8 = FText::FromString(&local_4b8,L"Matrix 3x4");
  pFVar6 = ::FName::FName(&local_558,Matrix34TypeName);
  local_4c8._0_8_ = ___xmm_3f8000003ecccccd3e99999a3f333333;
  local_4c8._8_8_ = _UNK_152e27208;
  RegisterType(this,*pFVar6,pFVar8,FVar7,FVar2,(UObject *)0x0,(FLinearColor *)&local_4c8._s_0,
               PinType|DataInterfaceOutput|Resource);
  if (local_4b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
  }
  local_590 = 1;
  local_5a0._0_8_ = ___xmm_3f8000003ecccccd3e99999a3e99999a;
  local_5a0._8_8_ = _UNK_152e271f8;
  pFVar8 = FText::FromString(&local_4a8,"Component");
  pUVar11 = UOptimusComponentSourceBinding::StaticClass();
  RegisterType(this,pUVar11,pFVar8,(TOptional<FLinearColor> *)&local_5a0._s_0,PinType);
  if (local_4a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
  }
  local_258.bIsSet = false;
  pFVar6 = ::FName::FName(&local_550,L"name");
  FVar2 = *pFVar6;
  local_278 = &
              ___7__TFunction_OwnedObject_P6APEAVFNameProperty__VFFieldVariant__VFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_270 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l2::<lambda_7>::
              <lambda_invoker_cdecl>;
  local_288[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<FNameProperty_*_(__cdecl*)(FFieldVariant,FName),FProperty_*,FFieldVariant,FName>
                 ::Call;
  local_b8._0_8_ = 0;
  local_b8._40_8_ = 0;
  local_260 = 0;
  pFVar8 = FText::FromString(&local_498,L"Name");
  pFVar9 = FNameProperty::StaticClass();
  RegisterType(this,pFVar9,pFVar8,(FShaderValueTypeHandle)0x0,
               (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_288,&local_b8,FVar2,
               &local_258,Property|PinType);
  if (local_498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
  }
  pFVar9 = FIntProperty::StaticClass();
  local_650 = pFVar9->Name;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->TypeWithAtomicSupport);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reserve
            (&this->TypeWithAtomicSupport,
             (*(int *)&(this->TypeWithAtomicSupport).Elements.field_0x8 -
             *(int *)&(this->TypeWithAtomicSupport).Elements.field_0x34) + 1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (&this->TypeWithAtomicSupport,&local_660,(bool *)&local_650);
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar17 = 0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
               *)&this->RegisteredTypes);
  uVar16 = local_60;
  uStack_684 = 1;
  uStack_674 = uVar17;
  local_670 = uVar17;
  if (local_60 != 0) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar19 = *puVar18;
    local_670 = 0;
    uVar17 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)(int)uVar17;
      local_670 = local_670 + 0x20;
      uVar17 = uVar17 + 1;
      uStack_674 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14e2072f0;
      uVar19 = puVar18[lVar14 + 1];
    }
    uStack_684 = -uVar19 & uVar19;
    uVar1 = (ulonglong)uStack_684 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_660.Number = (uint)lVar14;
    uStack_674 = (local_660.Number - 1) + local_670;
    if ((int)local_60 < (int)uStack_674) {
      uStack_674 = local_60;
    }
  }
LAB_14e2072f0:
  local_690 = (longlong *)local_88;
  local_680 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar19 = local_60 & 0xffffffe0;
  iStack_668 = local_88._8_4_ - local_54;
  uStack_678 = 0xffffffff;
  TStack_638.CurrentBitIndex = uStack_674;
  TStack_638.UnvisitedBitMask = 0xffffffff;
  TStack_638._padding_ = CONCAT44(uStack_684,uVar17);
  iVar15 = (int)local_60 >> 5;
  TStack_638._28_4_ = uStack_674;
  TStack_638.BaseBitIndex = local_670;
  uStack_618 = CONCAT44(uStack_664,iStack_668);
  bVar12 = (byte)local_60;
  uStack_688 = uVar17;
  uStack_66c = uStack_674;
  local_640 = local_690;
  TStack_638.Array = local_680;
  if (((int)local_60 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar16 != local_60) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & puVar18[iVar15];
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14e20740c;
      uVar17 = puVar18[lVar14 + 1];
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar19;
    if ((int)local_60 < (int)uVar16) {
      uVar16 = local_60;
    }
  }
LAB_14e20740c:
  while( true ) {
    plVar4 = local_640;
    if ((int)local_640[1] - *(int *)((longlong)local_640 + 0x34) != (int)uStack_618) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_698);
    }
    if (((TStack_638.CurrentBitIndex == uVar16) &&
        (TStack_638.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar4 == (longlong *)local_88)) break;
    lVar14 = *plVar4 + (longlong)TStack_638.CurrentBitIndex * 0xa0;
    if ((*(longlong *)(lVar14 + 0x10) != 0) ||
       (local_648 = lVar14,
       bVar5 = `FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l7::<lambda_8>::operator()
                         (&local_648), bVar5)) {
      local_5c8.Object = *(FOptimusDataType **)(lVar14 + 0x10);
      local_5c8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar14 + 0x18);
      if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      RegisterArrayTypeIfApplicable(this,&local_5c8);
    }
    TStack_638.UnvisitedBitMask = TStack_638.UnvisitedBitMask & ~TStack_638._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_638);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// RegisterEngineCallbacks @ 14e207520

void __cdecl FOptimusDataTypeRegistry::RegisterEngineCallbacks(void)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this;
  pmf_82d146d2 pVar4;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
  *this_00;
  pmf_6db62032 pVar5;
  TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *this_01;
  pmf_1fcf3c98 pVar6;
  pmf_301fe290 pVar7;
  FName local_res8 [2];
  
  pFVar1 = ::FName::FName(local_res8,L"AssetRegistry");
  pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
  if (pIVar2 != (IModuleInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    this = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
           (**(code **)(*plVar3 + 0x360))(plVar3);
    pVar4 = (pmf_82d146d2)Get();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddRaw<FOptimusDataTypeRegistry>(this,(FOptimusDataTypeRegistry *)(local_res8 + 1),pVar4);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    this_00 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*plVar3 + 0x308))(plVar3);
    pVar5 = (pmf_6db62032)Get();
    TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&),FDefaultTSDelegateUserPolicy>::
    AddRaw<FOptimusDataTypeRegistry>(this_00,(FOptimusDataTypeRegistry *)(local_res8 + 1),pVar5);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    this_01 = (TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
               *)(**(code **)(*plVar3 + 0x318))(plVar3);
    pVar6 = (pmf_1fcf3c98)Get();
    TMulticastDelegateRegistration<void___cdecl(FAssetData_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
    ::AddRaw<FOptimusDataTypeRegistry>(this_01,(FOptimusDataTypeRegistry *)local_res8,pVar6);
  }
  pVar7 = (pmf_301fe290)Get();
  TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
  ::AddRaw<FOptimusDataTypeRegistry>
            ((TMulticastDelegateRegistration<void___cdecl(UScriptStruct_const_*,bool),FDefaultDelegateUserPolicy>
              *)&UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,
             (FOptimusDataTypeRegistry *)local_res8,pVar7);
  return;
}

// RegisterStructType @ 14e207c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e207dd0) */
/* WARNING: Removing unreachable block (ram,0x00014e207de4) */
/* WARNING: Removing unreachable block (ram,0x00014e207de8) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataTypeRegistry::RegisterStructType(FOptimusDataTypeRegistry *this,UScriptStruct *param_1)

{
  TMap<FName,FOptimusDataTypeRegistry::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>_>
  *this_00;
  longlong lVar1;
  FName *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  FField *pFVar7;
  FShaderParametersMetadata *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  FOptimusDataTypeRegistry *pFVar21;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar22;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar23;
  ICppStructOps *pIVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined ***pppuVar29;
  uint uVar30;
  uint uVar31;
  FProperty *pFVar32;
  FSharedReferencer<1> FVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  uint uVar36;
  FOptimusDataType *pFVar37;
  longlong lVar38;
  uint uVar39;
  FProperty *pFVar40;
  undefined1 auStackY_6a8 [32];
  EOptimusDataTypeUsageFlags local_658 [8];
  ForAnyElementType local_650;
  undefined8 local_648;
  ForAnyElementType local_640;
  undefined8 local_638;
  undefined2 local_630 [4];
  UScriptStruct *local_628;
  ForAnyElementType local_620;
  int local_618;
  int local_614 [3];
  TSharedPtr<FOptimusDataType_const_,1> local_608;
  uint local_5f8 [2];
  TArray<FShaderValueType::FStructElement,TSizedDefaultAllocator<32>_> local_5f0;
  undefined8 local_5e0;
  longlong local_5d8;
  ForAnyElementType local_5d0;
  undefined8 local_5c8;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b0;
  undefined4 uStack_5ac;
  uint local_5a8;
  int iStack_5a4;
  undefined1 local_5a0 [8];
  TReferenceControllerBase<1> *local_598;
  FShaderValueType *pFStack_590;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_588;
  longlong local_578;
  FOptimusDataTypeRegistry *local_570;
  TFieldIterator<FProperty> local_568;
  TFieldIterator<FProperty> local_550;
  TReferenceControllerBase<1> *local_538;
  FShaderValueType *pFStack_530;
  TFieldIterator<FProperty> local_528;
  FName local_510;
  undefined1 local_508 [24];
  TReferenceControllerBase<1> *local_4f0;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_4e8;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_4d8;
  FOptimusDataType *local_4c8;
  TReferenceControllerBase<1> *pTStack_4c0;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_4b8;
  FText local_4a8;
  FTypeMetaData local_498;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_480;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_470;
  undefined4 local_45f;
  undefined2 local_45b;
  undefined1 local_459;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_450;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_440;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_430;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_420;
  undefined1 *local_410;
  FText *pFStack_408;
  UScriptStruct **local_400;
  EOptimusDataTypeUsageFlags *pEStack_3f8;
  undefined1 *local_3f0;
  FText *pFStack_3e8;
  undefined1 *local_3e0;
  uint *puStack_3d8;
  UScriptStruct **local_3d0;
  EOptimusDataTypeUsageFlags *pEStack_3c8;
  TSharedPtr<FOptimusDataType_const_,1> local_3c0;
  TSharedPtr<FOptimusDataType_const_,1> local_3a8;
  TSharedPtr<FOptimusDataType_const_,1> local_398;
  code *local_388 [2];
  code *local_378 [3];
  undefined8 local_360;
  code *local_358 [2];
  code *local_348 [3];
  undefined8 local_330;
  code *local_328 [5];
  undefined8 *local_300;
  code *local_2f8 [2];
  code *local_2e8 [3];
  undefined8 local_2d0;
  code *local_2c8 [5];
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_288;
  undefined1 local_258 [72];
  longlong *plStack_210;
  code *local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  UScriptStruct *local_1e8;
  undefined ***pppuStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined2 uStack_1bb;
  undefined1 uStack_1b9;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [72];
  longlong *local_160;
  int local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  code *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong *plStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  if (param_1 == (UScriptStruct *)0x0) {
    bVar16 = false;
  }
  else {
    local_628 = param_1;
    local_570 = this;
    pFVar21 = Get();
    FindType(pFVar21,(TSharedPtr<FOptimusDataType_const_,1> *)(local_508 + 0x10),param_1);
    if (local_508._16_8_ == 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4f0)
      ;
      local_630[0] = 0x1f00;
      local_658[0] = `FOptimusDataTypeRegistry::GetStructTypeUsageFlag'::__l2::FTypeValidator::
                     WalkStruct(local_630,param_1);
    }
    else {
      local_658[0] = *(EOptimusDataTypeUsageFlags *)(local_508._16_8_ + 0x48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4f0)
      ;
    }
    local_658[0] = local_658[0] & ~(Variable|Resource);
    local_510 = (FName)local_628->_padding_;
    FText::FromName(&local_4a8,&local_510);
    GetTypeName((UScriptStruct *)local_5a0);
    bVar16 = IsStructHashable(local_628);
    local_1b8 = local_1e8;
    uVar10 = uStack_1f0;
    uVar9 = uStack_200;
    uVar11 = (undefined4)uStack_1f0;
    pFVar40 = (FProperty *)0x0;
    uStack_1c0 = CONCAT31((int3)local_45f,bVar16);
    uStack_1bc = (undefined1)((uint)local_45f >> 0x18);
    uStack_1f0 = CONCAT17(local_459,CONCAT25(local_45b,CONCAT14(uStack_1bc,uStack_1c0)));
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,FProperty_*,FFieldVariant,FName>
                ::Call;
    uStack_200 = uStack_1d0;
    local_1e8 = local_628;
    pppuStack_1e0 = (undefined ***)0x0;
    local_1f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_1d8 = 0;
    uStack_1d0 = uVar9;
    uStack_1c0 = uVar11;
    uStack_1bc = (undefined1)((ulonglong)uVar10 >> 0x20);
    uStack_1bb = (undefined2)((ulonglong)uVar10 >> 0x28);
    uStack_1b9 = (undefined1)((ulonglong)uVar10 >> 0x38);
    uStack_1b0 = 0;
    uStack_1b0 = 0;
    local_1d8 = 0;
    pppuStack_1e0 = (undefined ***)0x0;
    local_1f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l2::<lambda_1>,FProperty_*,FFieldVariant,FName>
                ::Call;
    if (local_658[0] == None) {
      if ((local_628 == (UScriptStruct *)0x0) ||
         (bVar16 = UObjectBaseUtility::IsA<UUserDefinedStruct>((UObjectBaseUtility *)local_628),
         !bVar16)) {
        bVar16 = false;
      }
      else {
        local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.ArrayNum = 0;
        local_4b8.ArrayMax = 0;
        local_288._0_8_ = 0;
        local_288._40_8_ = 0;
        local_2f8[0] = local_208;
        local_2d0 = 0;
        if (local_208 != (code *)0x0) {
          pppuVar29 = &local_1f8;
          if (pppuStack_1e0 != (undefined ***)0x0) {
            pppuVar29 = pppuStack_1e0;
          }
          (*(code *)**pppuVar29)(pppuVar29,local_2f8 + 2);
        }
        local_410 = local_5a0;
        local_2c8[0] = (code *)0x0;
        pFStack_408 = &local_4a8;
        local_400 = &local_628;
        pEStack_3f8 = local_658;
        local_2a0 = FMemory::Malloc(0x28,8);
        *local_2a0 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`60'::<lambda_4>,0,1>
                      ::_vftable_;
        local_2a0[1] = local_410;
        local_2a0[2] = pFStack_408;
        local_2a0[3] = local_400;
        local_2a0[4] = pEStack_3f8;
        if (local_2a0 + 1 != (longlong *)0x0) {
          local_2c8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l60::<lambda_4>,void,FOptimusDataType_&>
                         ::Call;
        }
        bVar16 = RegisterType(this,(FName)local_5a0,
                              (TFunction<void___cdecl(FOptimusDataType_&)> *)local_2c8,
                              (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_2f8,
                              &local_288,&local_4b8);
      }
    }
    else {
      uVar36 = 0;
      local_650.Data = (FScriptContainerElement *)0x0;
      local_648 = 0;
      local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5f0.ArrayNum = 0;
      local_5f0.ArrayMax = 0;
      local_568.Struct = (UStruct *)local_628;
      local_568.Field = (FField *)pFVar40;
      if (local_628 != (UScriptStruct *)0x0) {
        local_568.Field = (FField *)local_628->_padding_;
      }
      local_568.InterfaceIndex = -1;
      local_568.bIncludeSuper = true;
      local_568.bIncludeDeprecated = true;
      local_568.bIncludeInterface = false;
      TFieldIterator<FProperty>::IterateToNext(&local_568);
      pFVar7 = local_568.Field;
      local_528._16_8_ =
           CONCAT17(local_568._23_1_,
                    CONCAT16(local_568.bIncludeInterface,
                             CONCAT24(local_568._20_2_,local_568.InterfaceIndex)));
      local_550.InterfaceIndex = -1;
      local_528.Struct = local_568.Struct;
      local_528.Field = local_568.Field;
      local_550.bIncludeSuper = true;
      local_550.bIncludeDeprecated = true;
      local_550.Struct = (UStruct *)0x0;
      local_550.Field = (FField *)0x0;
      local_550.bIncludeInterface = false;
      TFieldIterator<FProperty>::IterateToNext(&local_550);
      if (pFVar7 != local_550.Field) {
        this_00 = &this->RegisteredTypes;
        do {
          pFVar7 = local_528.Field;
          bVar16 = false;
          pFVar32 = (FProperty *)local_528.Field;
          if (((FProperty *)local_528.Field != (FProperty *)0x0) &&
             ((*(uint *)((longlong)(local_528.Field)->ClassPrivate + 0x18) >> 0x15 & 1) != 0)) {
            bVar16 = true;
            pFVar40 = (FProperty *)(ulonglong)((int)pFVar40 + 1);
            pFVar32 = (FProperty *)((FProperty *)((longlong)local_528.Field + 0x70))->_padding_;
          }
          FindType(this,&local_608,pFVar32);
          pFVar37 = local_608.Object;
          if (local_608.Object == (FOptimusDataType *)0x0) {
            if ((pFVar32 == (FProperty *)0x0) ||
               ((*(uint *)(pFVar32->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
              bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_8742395069035707764>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                                  ,0x28c,"StructProperty");
              if (bVar17) {
                pcVar5 = (code *)swi(3);
                uVar18 = (*pcVar5)();
                return (bool)uVar18;
              }
            }
            else {
              RegisterStructType(this,(UScriptStruct *)pFVar32[1]._padding_);
            }
          }
          pTVar22 = FindType(this,&local_3c0,pFVar32);
          if (&local_608 != pTVar22) {
            local_608.Object = pTVar22->Object;
            pTVar22->Object = (FOptimusDataType *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&local_608.SharedReferenceCount,&pTVar22->SharedReferenceCount);
            pFVar37 = local_608.Object;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3c0.SharedReferenceCount.ReferenceController);
          FVar33.ReferenceController = local_608.SharedReferenceCount.ReferenceController;
          if (bVar16) {
            local_3a8.Object = local_608.Object;
            local_3a8.SharedReferenceCount.ReferenceController =
                 local_608.SharedReferenceCount.ReferenceController;
            if (local_608.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pTVar22 = GetArrayElementDataTypeForStructuredBuffer(&local_398,&local_3a8);
            if (&local_608 != pTVar22) {
              local_608.Object = pTVar22->Object;
              pTVar22->Object = (FOptimusDataType *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_608.SharedReferenceCount,&pTVar22->SharedReferenceCount);
              FVar33.ReferenceController = local_608.SharedReferenceCount.ReferenceController;
              pFVar37 = local_608.Object;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_398.SharedReferenceCount.ReferenceController);
          }
          if ((pFVar37 == (FOptimusDataType *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          pFVar21 = Get();
          FindArrayMetadata(pFVar21,&local_450,pFVar37->TypeName);
          iVar19 = local_450.ArrayNum;
          if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.AllocatorInstance.Data);
          }
          if (0 < iVar19) {
            pFVar21 = Get();
            FindArrayMetadata(pFVar21,&local_440,pFVar37->TypeName);
            iVar19 = local_440.ArrayNum;
            if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_440.AllocatorInstance.Data);
            }
            pFVar40 = (FProperty *)(ulonglong)(uint)((int)pFVar40 + iVar19);
          }
          uVar36 = (uint)pFVar40;
          local_148 = 0;
          plStack_120 = (longlong *)0x0;
          pTVar23 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                            *)this_00,pFVar37->TypeName);
          if ((pTVar23 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
             (pTVar23 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0xfffffffffffffff0)) {
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
            local_e8 = 0;
            plStack_c0 = (longlong *)0x0;
          }
          else {
            local_e8 = *(longlong *)&pTVar23->field_0x50;
            plStack_c0 = (longlong *)0x0;
            if (local_e8 != 0) {
              puVar26 = *(undefined8 **)&pTVar23->field_0x78;
              if (*(undefined8 **)&pTVar23->field_0x78 == (undefined8 *)0x0) {
                puVar26 = (undefined8 *)&pTVar23->field_0x60;
              }
              (**(code **)*puVar26)(puVar26,&local_d8);
            }
          }
          plVar25 = plStack_120;
          uVar10 = local_128;
          uVar9 = uStack_140;
          lVar28 = local_148;
          uVar11 = (undefined4)local_138;
          uVar12 = local_138._4_4_;
          uVar13 = (undefined4)uStack_130;
          uVar14 = uStack_130._4_4_;
          local_148 = local_e8;
          uStack_140 = uStack_e0;
          local_128 = local_c8;
          plStack_120 = plStack_c0;
          local_138 = CONCAT44(uStack_d4,local_d8);
          uStack_130 = CONCAT44(uStack_cc,uStack_d0);
          local_e8 = lVar28;
          uStack_e0 = uVar9;
          local_d8 = uVar11;
          uStack_d4 = uVar12;
          uStack_d0 = uVar13;
          uStack_cc = uVar14;
          local_c8 = uVar10;
          plStack_c0 = plVar25;
          if (lVar28 != 0) {
            plVar27 = (longlong *)&local_d8;
            if (plVar25 != (longlong *)0x0) {
              plVar27 = plVar25;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
          Optimus::GetMemberPropertyShaderName((UScriptStruct *)local_508,(FProperty *)local_628);
          pFStack_590 = (pFVar37->ShaderValueType).ValueTypePtr;
          local_598 = (TReferenceControllerBase<1> *)local_508._0_8_;
          if (bVar16) {
            local_538 = (TReferenceControllerBase<1> *)local_508._0_8_;
            pFStack_590 = (FShaderValueType *)
                          FShaderValueType::MakeDynamicArrayType(&pFVar37->ShaderValueType);
            local_598 = local_538;
            pFStack_530 = pFStack_590;
          }
          if (((local_5f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_598) &&
              ((FScriptContainerElement *)&local_598 <
               local_5f0.AllocatorInstance.Data + (longlong)local_5f0.ArrayMax * 0x10)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          iVar19 = local_5f0.ArrayNum;
          if (local_5f0.ArrayNum == local_5f0.ArrayMax) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_5f0.AllocatorInstance,&local_5f0.ArrayMax);
          }
          local_5f0.ArrayNum = iVar19 + 1;
          *(TReferenceControllerBase<1> **)
           (local_5f0.AllocatorInstance.Data + (longlong)iVar19 * 0x10) = local_598;
          *(FShaderValueType **)(local_5f0.AllocatorInstance.Data + (longlong)iVar19 * 0x10 + 8) =
               pFStack_590;
          local_258._32_8_ = 0;
          plStack_210 = (longlong *)0x0;
          local_258._0_8_ = pFVar7;
          if (FVar33.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar33.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar33.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_258._8_8_ = local_608.Object;
          local_258._16_8_ = local_608.SharedReferenceCount.ReferenceController;
          local_298 = 0;
          uStack_290 = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_88 = local_148;
          plStack_60 = (longlong *)0x0;
          if (local_148 != 0) {
            plVar25 = &local_138;
            if (plStack_120 != (longlong *)0x0) {
              plVar25 = plStack_120;
            }
            (**(code **)*plVar25)(plVar25,local_78);
          }
          plVar25 = plStack_210;
          uVar15 = local_258._64_8_;
          uVar10 = local_258._40_8_;
          uVar9 = local_258._32_8_;
          uVar11 = local_258._48_4_;
          uVar12 = local_258._52_4_;
          uVar13 = local_258._56_4_;
          uVar14 = local_258._60_4_;
          local_258._52_4_ = local_78[0]._4_4_;
          local_258._48_4_ = (undefined4)local_78[0];
          local_258._60_4_ = local_78[1]._4_4_;
          local_258._56_4_ = (undefined4)local_78[1];
          local_258._32_8_ = local_88;
          local_258._40_8_ = uStack_80;
          local_258._64_8_ = local_78[2];
          plStack_210 = plStack_60;
          local_88 = uVar9;
          uStack_80 = uVar10;
          local_78[0]._0_4_ = uVar11;
          local_78[0]._4_4_ = uVar12;
          local_78[1]._0_4_ = uVar13;
          local_78[1]._4_4_ = uVar14;
          local_78[2] = uVar15;
          plStack_60 = plVar25;
          if (uVar9 != 0) {
            plVar27 = local_78;
            if (plVar25 != (longlong *)0x0) {
              plVar27 = plVar25;
            }
            (**(code **)(*plVar27 + 0x10))();
          }
          if (((local_650.Data <= (FPropertyInfo *)local_258) &&
              ((FScriptContainerElement *)local_258 <
               local_650.Data + (longlong)local_648._4_4_ * 0x50)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          iVar19 = (int)local_648;
          if ((int)local_648 == local_648._4_4_) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1050,&local_650,(int *)((longlong)&local_648 + 4));
          }
          local_648 = CONCAT44(local_648._4_4_,iVar19 + 1);
          lVar28 = (longlong)iVar19 * 0x50;
          *(undefined8 *)&local_650.Data[lVar28].field_0x0 = local_258._0_8_;
          *(undefined8 *)(local_650.Data + lVar28 + 8) = local_258._8_8_;
          *(undefined8 *)(local_650.Data + lVar28 + 0x10) = local_258._16_8_;
          if ((TReferenceControllerBase<1> *)local_258._16_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            *(atomic<int> *)(local_258._16_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_258._16_8_ + 8) + 1);
            UNLOCK();
          }
          *(undefined8 *)(local_650.Data + lVar28 + 0x20) = local_258._32_8_;
          *(undefined8 *)(local_650.Data + lVar28 + 0x48) = 0;
          if (local_258._32_8_ != 0) {
            plVar25 = (longlong *)(local_258 + 0x30);
            if (plStack_210 != (longlong *)0x0) {
              plVar25 = plStack_210;
            }
            (**(code **)*plVar25)(plVar25,local_650.Data + lVar28 + 0x30);
          }
          if (local_258._32_8_ != 0) {
            plVar25 = (longlong *)(local_258 + 0x30);
            if (plStack_210 != (longlong *)0x0) {
              plVar25 = plStack_210;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_258._16_8_);
          if (local_148 != 0) {
            plVar25 = &local_138;
            if (plStack_120 != (longlong *)0x0) {
              plVar25 = plStack_120;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar33.ReferenceController);
          local_528.Field = (local_528.Field)->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_528);
          this = local_570;
        } while (local_528.Field != local_550.Field);
      }
      uVar39 = 0;
      local_508._8_8_ = FShaderValueType::Get((FName)local_5a0,&local_5f0);
      local_118 = (code *)0x0;
      plStack_f0 = (longlong *)0x0;
      local_640.Data = (FScriptContainerElement *)0x0;
      local_638 = 0;
      ComputeFramework::FTypeMetaData::FTypeMetaData
                (&local_498,(FShaderValueTypeHandle)local_508._8_8_);
      local_5f8[0] = (local_498.Metadata)->Size;
      pIVar24 = UScriptStruct::GetCppStructOps(local_628);
      if (pIVar24 == (ICppStructOps *)0x0) {
        iVar19 = (int)*(short *)((longlong)&local_628->_padding_ + 4);
        local_5b8 = (int)local_628->_padding_ + -1 + iVar19 & ~(iVar19 - 1U);
      }
      else {
        pIVar24 = UScriptStruct::GetCppStructOps(local_628);
        local_5b8 = pIVar24->Size;
      }
      if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
      }
      if (local_638._4_4_ < (int)uVar36) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar36,&local_640,(int)local_638,(int *)((longlong)&local_638 + 4));
      }
      local_5e0 = (ulonglong)local_5e0._4_4_ << 0x20;
      if (0 < (int)local_648) {
        local_578 = 0;
        local_5d8 = 0;
        do {
          lVar38 = local_578;
          lVar28 = local_5d8;
          uVar30 = ~uVar39 >> 0x1f;
          uVar36 = 0;
          if ((int)uVar39 < (int)local_648) {
            uVar36 = uVar30;
          }
          iVar19 = (int)local_648;
          if (uVar36 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = (int)local_648;
          }
          lVar1 = *(longlong *)(local_650.Data + lVar28);
          uVar36 = 0;
          if ((int)uVar39 < iVar19) {
            uVar36 = uVar30;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          pFVar8 = local_498.Metadata;
          pFVar2 = *(FName **)(local_650.Data + lVar28 + 8);
          local_538 = *(TReferenceControllerBase<1> **)(local_650.Data + lVar28 + 0x10);
          if (local_538 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_538->SharedReferenceCount =
                 (atomic<int>)((int)local_538->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar36 = 0;
          if ((int)uVar39 < ((local_498.Metadata)->Members).ArrayNum) {
            uVar36 = uVar30;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          pFVar35 = (pFVar8->Members).AllocatorInstance.Data;
          if ((lVar1 == 0) || ((*(uint *)(*(longlong *)(lVar1 + 8) + 0x18) >> 0x15 & 1) == 0)) {
            if ((pFVar2 == (FName *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            pFVar21 = Get();
            FindArrayMetadata(pFVar21,&local_430,*pFVar2);
            iVar19 = local_430.ArrayNum;
            if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_430.AllocatorInstance.Data);
            }
            if (0 < iVar19) {
              iVar19 = 0;
              lVar28 = 0;
              while( true ) {
                pFVar21 = Get();
                FindArrayMetadata(pFVar21,&local_420,*pFVar2);
                iVar20 = local_420.ArrayNum;
                if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_420.AllocatorInstance.Data);
                }
                if (iVar20 <= iVar19) break;
                pFVar21 = Get();
                FindArrayMetadata(pFVar21,&local_4e8,*pFVar2);
                if ((iVar19 < 0) || (local_4e8.ArrayNum <= iVar19)) {
                  bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<8766186752609091718>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataType.cpp"
                                      ,0x86,"ArrayMetadata.IsValidIndex(InArrayIndex)");
                  if (bVar16) {
                    pcVar5 = (code *)swi(3);
                    uVar18 = (*pcVar5)();
                    return (bool)uVar18;
                  }
                  if ((ICppStructOps *)local_4e8.AllocatorInstance.Data != (ICppStructOps *)0x0) {
                    FMemory::Free(local_4e8.AllocatorInstance.Data);
                  }
                  iVar20 = -1;
                }
                else {
                  iVar20 = *(int *)(local_4e8.AllocatorInstance.Data + lVar28 + 4);
                  if ((ICppStructOps *)local_4e8.AllocatorInstance.Data != (ICppStructOps *)0x0) {
                    FMemory::Free(local_4e8.AllocatorInstance.Data);
                  }
                }
                pFVar21 = Get();
                FindArrayMetadata(pFVar21,&local_4d8,*pFVar2);
                if ((iVar19 < 0) || (local_4d8.ArrayNum <= iVar19)) {
                  bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<8766186752609091731>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataType.cpp"
                                      ,0x93,"ArrayMetadata.IsValidIndex(InArrayIndex)");
                  if (bVar16) {
                    pcVar5 = (code *)swi(3);
                    uVar18 = (*pcVar5)();
                    return (bool)uVar18;
                  }
                  if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4d8.AllocatorInstance.Data);
                  }
                  uVar36 = 0xffffffff;
                }
                else {
                  uVar36 = *(uint *)(local_4d8.AllocatorInstance.Data + lVar28);
                  if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4d8.AllocatorInstance.Data);
                  }
                }
                iStack_5a4 = *(int *)(pFVar35 + lVar38 + 0x14) + iVar20;
                local_5a8 = uVar36;
                if (((local_640.Data <= (FScriptContainerElement *)&local_5a8) &&
                    ((FScriptContainerElement *)&local_5a8 <
                     local_640.Data + (longlong)local_638._4_4_ * 8)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar5 = (code *)swi(3);
                  uVar18 = (*pcVar5)();
                  return (bool)uVar18;
                }
                iVar20 = (int)local_638;
                if ((int)local_638 == local_638._4_4_) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x408,&local_640,(int *)((longlong)&local_638 + 4));
                }
                iVar19 = iVar19 + 1;
                local_638 = CONCAT44(local_638._4_4_,iVar20 + 1);
                lVar28 = lVar28 + 8;
                *(ulonglong *)(local_640.Data + (longlong)iVar20 * 8) =
                     CONCAT44(iStack_5a4,local_5a8);
              }
              lVar38 = local_578;
              uVar39 = (uint)local_5e0;
            }
          }
          else {
            if ((pFVar2 == (FName *)0x0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            local_5b0 = pFVar2[4].ComparisonIndex.Value;
            uStack_5ac = *(undefined4 *)(pFVar35 + lVar38 + 0x14);
            if (((local_640.Data <= (FScriptContainerElement *)&local_5b0) &&
                ((FScriptContainerElement *)&local_5b0 <
                 local_640.Data + (longlong)local_638._4_4_ * 8)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = (int)local_638;
            if ((int)local_638 == local_638._4_4_) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_640,(int *)((longlong)&local_638 + 4));
            }
            local_638 = CONCAT44(local_638._4_4_,iVar19 + 1);
            *(ulonglong *)(local_640.Data + (longlong)iVar19 * 8) = CONCAT44(uStack_5ac,local_5b0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_538);
          uVar39 = uVar39 + 1;
          local_5d8 = local_5d8 + 0x50;
          local_578 = lVar38 + 0x30;
          local_5e0 = CONCAT44(local_5e0._4_4_,uVar39);
        } while ((int)uVar39 < (int)local_648);
      }
      uVar36 = 0;
      local_620.Data = (FScriptContainerElement *)0x0;
      local_618 = 0;
      local_614[0] = 0;
      if (0 < (int)local_648) {
        local_5d8 = 0;
        local_5e0 = 0;
        iVar19 = (int)local_648;
        uVar39 = uVar36;
        do {
          lVar28 = local_5d8;
          uVar31 = ~uVar36 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar36 < iVar19) {
            uVar30 = uVar31;
          }
          if (uVar30 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = (int)local_648;
          }
          lVar38 = *(longlong *)(local_650.Data + lVar28);
          uVar30 = 0;
          if ((int)uVar36 < iVar19) {
            uVar30 = uVar31;
          }
          if (uVar30 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = (int)local_648;
          }
          pFVar8 = local_498.Metadata;
          pTVar3 = *(TReferenceControllerBase<1> **)(local_650.Data + lVar28 + 0x10);
          pFVar2 = *(FName **)(local_650.Data + lVar28 + 8);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            iVar19 = (int)local_648;
          }
          uVar30 = 0;
          if ((int)uVar36 < ((local_498.Metadata)->Members).ArrayNum) {
            uVar30 = uVar31;
          }
          if (uVar30 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = (int)local_648;
          }
          lVar28 = local_5e0;
          pFVar35 = (pFVar8->Members).AllocatorInstance.Data;
          local_1a8._8_8_ = (FOptimusDataType *)0x0;
          local_1a8._16_8_ = (TReferenceControllerBase<1> *)0x0;
          local_1a8._32_8_ = 0;
          local_160 = (longlong *)0x0;
          uVar30 = 0;
          if ((int)uVar36 < iVar19) {
            uVar30 = uVar31;
          }
          if ((uVar30 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          uVar9 = local_1a8._16_8_;
          pFVar34 = local_650.Data + local_5d8;
          local_1a8._0_8_ = *(undefined8 *)pFVar34;
          pFVar37 = *(FOptimusDataType **)(pFVar34 + 8);
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar34 + 0x10);
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_4c8 = (FOptimusDataType *)local_1a8._8_8_;
          pTStack_4c0 = (TReferenceControllerBase<1> *)local_1a8._16_8_;
          local_1a8._8_8_ = pFVar37;
          local_1a8._16_8_ = pTVar4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar9);
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>::
          operator=((TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                     *)(local_1a8 + 0x20),
                    (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                     *)(pFVar34 + 0x20));
          local_158 = *(int *)(pFVar35 + lVar28 + 0x14);
          if ((pFVar2 == (FName *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          local_154 = pFVar2[4].ComparisonIndex.Value;
          local_14c = uVar39;
          if ((lVar38 == 0) || ((*(uint *)(*(longlong *)(lVar38 + 8) + 0x18) >> 0x15 & 1) == 0)) {
            pFVar21 = Get();
            FindArrayMetadata(pFVar21,&local_480,*pFVar2);
            iVar19 = local_480.ArrayNum;
            if (local_480.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_480.AllocatorInstance.Data);
            }
            if (0 < iVar19) {
              pFVar21 = Get();
              FindArrayMetadata(pFVar21,&local_470,*pFVar2);
              iVar19 = local_470.ArrayNum;
              if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_470.AllocatorInstance.Data);
              }
              uVar39 = uVar39 + iVar19;
            }
          }
          else {
            uVar39 = uVar39 + 1;
          }
          if (((local_620.Data <= (FPropertyConversionInfo *)local_1a8) &&
              ((FScriptContainerElement *)local_1a8 < local_620.Data + (longlong)local_614[0] * 0x60
              )) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          if (local_618 == local_614[0]) {
            local_618 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1060,&local_620,local_614);
          }
          iVar19 = local_618 + 1;
          pFVar35 = local_620.Data + (longlong)local_618 * 0x60;
          *(undefined8 *)&pFVar35->field_0x0 = local_1a8._0_8_;
          *(undefined8 *)(pFVar35 + 8) = local_1a8._8_8_;
          *(undefined8 *)(pFVar35 + 0x10) = local_1a8._16_8_;
          if ((TReferenceControllerBase<1> *)local_1a8._16_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            *(atomic<int> *)(local_1a8._16_8_ + 8) =
                 (atomic<int>)((int)*(atomic<int> *)(local_1a8._16_8_ + 8) + 1);
            UNLOCK();
          }
          *(undefined8 *)(pFVar35 + 0x20) = local_1a8._32_8_;
          *(undefined8 *)(pFVar35 + 0x48) = 0;
          local_618 = iVar19;
          if (local_1a8._32_8_ != 0) {
            plVar25 = (longlong *)(local_1a8 + 0x30);
            if (local_160 != (longlong *)0x0) {
              plVar25 = local_160;
            }
            (**(code **)*plVar25)(plVar25,pFVar35 + 0x30);
          }
          *(int *)(pFVar35 + 0x50) = local_158;
          *(uint *)(pFVar35 + 0x54) = local_154;
          *(int *)(pFVar35 + 0x58) = local_150;
          *(uint *)(pFVar35 + 0x5c) = local_14c;
          if (local_1a8._32_8_ != 0) {
            plVar25 = (longlong *)(local_1a8 + 0x30);
            if (local_160 != (longlong *)0x0) {
              plVar25 = local_160;
            }
            (**(code **)(*plVar25 + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1a8._16_8_);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          uVar36 = uVar36 + 1;
          local_5e0 = local_5e0 + 0x30;
          local_5d8 = local_5d8 + 0x50;
          iVar19 = (int)local_648;
        } while ((int)uVar36 < (int)local_648);
      }
      lVar38 = 0;
      lVar28 = lVar38;
      if (0 < local_618) {
        do {
          uVar39 = (uint)lVar38;
          uVar36 = 0;
          if ((int)uVar39 < local_618) {
            uVar36 = ~uVar39 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar18 = (*pcVar5)();
            return (bool)uVar18;
          }
          FVar6.Data = local_620.Data;
          uVar39 = uVar39 + 1;
          lVar38 = (longlong)(int)uVar39;
          if ((int)uVar39 < local_618) {
            uVar36 = 0;
            if ((int)uVar39 < local_618) {
              uVar36 = ~uVar39 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar18 = (*pcVar5)();
              return (bool)uVar18;
            }
            iVar19 = *(int *)(local_620.Data + lVar28 + 0xb0) - *(int *)(FVar6.Data + lVar28 + 0x50)
            ;
          }
          else {
            iVar19 = local_5f8[0] - *(int *)(local_620.Data + lVar28 + 0x50);
          }
          *(int *)(FVar6.Data + lVar28 + 0x58) = iVar19;
          lVar28 = lVar28 + 0x60;
        } while ((int)uVar39 < local_618);
      }
      iVar19 = local_618;
      FVar6.Data = local_620.Data;
      local_5d0.Data = (FScriptContainerElement *)0x0;
      local_5c8 = CONCAT44(local_5c8._4_4_,local_618);
      if (local_618 == 0) {
        local_5c8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,local_618,0,&local_5d0,local_618,(int *)((longlong)&local_5c8 + 4));
        ConstructItems<_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,int>
                  (local_5d0.Data,(FPropertyConversionInfo *)FVar6.Data,iVar19);
      }
      local_5c0 = local_5b8;
      local_5bc = local_5f8[0];
      local_b8 = (code *)0x0;
      plVar25 = FMemory::Malloc(0x20,8);
      plStack_90 = plStack_f0;
      uVar10 = local_f8;
      uVar9 = uStack_110;
      pcVar5 = local_118;
      plVar25[1] = 0;
      *plVar25 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`8'::<lambda_2>,0,1>
                  ::_vftable_;
      plVar25[1] = (longlong)local_5d0.Data;
      local_5d0.Data = (FScriptContainerElement *)0x0;
      *(int *)(plVar25 + 2) = (int)local_5c8;
      *(undefined4 *)((longlong)plVar25 + 0x14) = local_5c8._4_4_;
      local_5c8 = 0;
      *(uint *)(plVar25 + 3) = local_5c0;
      *(uint *)((longlong)plVar25 + 0x1c) = local_5bc;
      if (plVar25 + 1 != (longlong *)0x0) {
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_2>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                   ::Call;
      }
      local_118 = local_b8;
      uStack_110 = uStack_b0;
      local_f8 = local_98;
      plStack_f0 = plVar25;
      local_b8 = pcVar5;
      uStack_b0 = uVar9;
      local_a8 = local_108;
      uStack_a4 = uStack_104;
      uStack_a0 = uStack_100;
      uStack_9c = uStack_fc;
      local_98 = uVar10;
      if (pcVar5 != (code *)0x0) {
        plVar25 = (longlong *)&local_a8;
        if (plStack_90 != (longlong *)0x0) {
          plVar25 = plStack_90;
        }
        (**(code **)(*plVar25 + 0x10))();
      }
      DestructItems<_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,int>
                ((FPropertyConversionInfo *)local_5d0.Data,(int)local_5c8);
      if ((FPropertyConversionInfo *)local_5d0.Data != (FPropertyConversionInfo *)0x0) {
        FMemory::Free(local_5d0.Data);
      }
      FVar6.Data = local_640.Data;
      lVar28 = (longlong)(int)local_638;
      local_588.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_588.ArrayNum = (int)local_638;
      if ((int)local_638 == 0) {
        local_588.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(int)local_638,0,&local_588.AllocatorInstance,(int)local_638,
                   &local_588.ArrayMax);
        memcpy(local_588.AllocatorInstance.Data,FVar6.Data,lVar28 << 3);
      }
      local_388[0] = local_118;
      local_360 = 0;
      if (local_118 != (code *)0x0) {
        plVar25 = (longlong *)&local_108;
        if (plStack_f0 != (longlong *)0x0) {
          plVar25 = plStack_f0;
        }
        (**(code **)*plVar25)(plVar25,local_388 + 2);
      }
      local_358[0] = local_208;
      local_330 = 0;
      if (local_208 != (code *)0x0) {
        pppuVar29 = &local_1f8;
        if (pppuStack_1e0 != (undefined ***)0x0) {
          pppuVar29 = pppuStack_1e0;
        }
        (*(code *)**pppuVar29)(pppuVar29,local_358 + 2);
      }
      local_3f0 = local_5a0;
      local_328[0] = (code *)0x0;
      pFStack_3e8 = &local_4a8;
      local_3e0 = local_508 + 8;
      puStack_3d8 = local_5f8;
      local_3d0 = &local_628;
      pEStack_3c8 = local_658;
      local_300 = FMemory::Malloc(0x38,8);
      *local_300 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterStructType'::`8'::<lambda_3>,0,1>
                    ::_vftable_;
      local_300[1] = local_3f0;
      local_300[2] = pFStack_3e8;
      local_300[3] = local_3e0;
      local_300[4] = puStack_3d8;
      local_300[5] = local_3d0;
      local_300[6] = pEStack_3c8;
      if (local_300 + 1 != (longlong *)0x0) {
        local_328[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterStructType'::__l8::<lambda_3>,void,FOptimusDataType_&>
                       ::Call;
      }
      bVar16 = RegisterType(local_570,(FName)local_5a0,
                            (TFunction<void___cdecl(FOptimusDataType_&)> *)local_328,
                            (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_358,
                            (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                             *)local_388,&local_588);
      DestructItems<_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyConversionInfo,int>
                ((FPropertyConversionInfo *)local_620.Data,local_618);
      if ((FPropertyConversionInfo *)local_620.Data != (FPropertyConversionInfo *)0x0) {
        FMemory::Free(local_620.Data);
      }
      ComputeFramework::FTypeMetaData::~FTypeMetaData(&local_498);
      if (local_640.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.Data);
      }
      if (local_118 != (code *)0x0) {
        plVar25 = (longlong *)&local_108;
        if (plStack_f0 != (longlong *)0x0) {
          plVar25 = plStack_f0;
        }
        (**(code **)(*plVar25 + 0x10))();
      }
      if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f0.AllocatorInstance.Data);
      }
      DestructItems<_FOptimusDataTypeRegistry::RegisterStructType_::__l8::FPropertyInfo,int>
                ((FPropertyInfo *)local_650.Data,(int)local_648);
      if ((FPropertyInfo *)local_650.Data != (FPropertyInfo *)0x0) {
        FMemory::Free(local_650.Data);
      }
    }
    if (local_208 != (code *)0x0) {
      pppuVar29 = &local_1f8;
      if (pppuStack_1e0 != (undefined ***)0x0) {
        pppuVar29 = pppuStack_1e0;
      }
      (*(code *)(*pppuVar29)[2])();
    }
    if (local_4a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a8.TextData.Reference + 0x10))();
    }
  }
  return bVar16;
}

// RegisterType @ 14e209590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,FName param_1,
          TFunction<void___cdecl(FOptimusDataType_&)> *param_2,
          TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *param_3,
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
          *param_4,TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_>
                   *param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong lVar13;
  FName local_res10 [3];
  undefined1 auStackY_168 [32];
  TSharedRef<FOptimusDataType,1> local_118;
  undefined1 local_108 [24];
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> *local_f0;
  FName *local_e8;
  FOptimusDataType **local_e0;
  FOptimusDataType *local_d8;
  TReferenceControllerBase<1> *local_d0;
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f0 = param_5;
  local_res10[0] = param_1;
  local_108._8_8_ = this;
  if (param_1 == (FName)0x0) {
    if (1 < (byte)LogOptimusCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    }
LAB_14e20975a:
    if (*(longlong *)param_2 != 0) {
      plVar11 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (*(longlong *)param_3 != 0) {
      plVar11 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (*(longlong *)param_4 != 0) {
      plVar11 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    pFVar2 = (param_5->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar5 = false;
  }
  else {
    uVar7 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->RegisteredTypes).field_0x8 != *(int *)&(this->RegisteredTypes).field_0x34) {
      puVar12 = *(undefined1 **)&(this->RegisteredTypes).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->RegisteredTypes).field_0x38;
      }
      iVar8 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->RegisteredTypes).field_0x48 - 1U & param_1.Number + uVar7) *
                      4);
      if (iVar8 != -1) {
        lVar13 = *(longlong *)&(this->RegisteredTypes).field_0x0;
        do {
          if (*(FName *)((longlong)iVar8 * 0xa0 + lVar13) == param_1) {
            if (1 < (byte)LogOptimusCore._0_1_) {
              ::FName::ToString(local_res10,(FString *)(local_108 + 8));
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
              if ((FOptimusDataTypeRegistry *)local_108._8_8_ != (FOptimusDataTypeRegistry *)0x0) {
                FMemory::Free((void *)local_108._8_8_);
              }
            }
            goto LAB_14e20975a;
          }
          iVar8 = *(int *)((longlong)iVar8 * 0xa0 + 0x90 + lVar13);
        } while (iVar8 != -1);
      }
    }
    MakeShared<FOptimusDataType,1>(&local_118);
    local_d8 = local_118.Object;
    local_d0 = local_118.SharedReferenceCount.ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = *(longlong *)param_3;
    local_a0 = (longlong *)0x0;
    if (local_c8 != 0) {
      puVar10 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_b8);
    }
    local_98 = *(longlong *)param_4;
    local_70 = (longlong *)0x0;
    if (local_98 != 0) {
      puVar10 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_88);
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = param_5->ArrayNum;
    lVar13 = (longlong)local_60;
    pFVar2 = (param_5->AllocatorInstance).Data;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar2,lVar13 << 3);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar3 = *(code **)param_2;
    plVar11 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_2->field_0x28;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar3)(uVar9,local_118.Object);
    local_e8 = local_res10;
    local_e0 = &local_d8;
    TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&>_>
              ((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                *)&this->RegisteredTypes,
               (TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&> *)
               local_108,(bool *)&local_e8);
    uVar9 = local_108._8_8_;
    pFVar4 = (FName *)(((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_108._8_8_ + 0x60))->
                      AllocatorInstance).Data;
    if (((pFVar4 <= local_res10) &&
        (local_res10 <
         pFVar4 + ((TArray<FName,TSizedDefaultAllocator<32>_> *)(local_108._8_8_ + 0x60))->ArrayMax)
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar8 = ((TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar9 + 0x60))->ArrayNum;
    piVar1 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar9 + 0x60))->ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)(uVar9 + 0x60),piVar1);
    }
    ((TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar9 + 0x60))->ArrayNum = iVar8 + 1;
    *(FName *)((((TArray<FName,TSizedDefaultAllocator<32>_> *)(uVar9 + 0x60))->AllocatorInstance).
               Data + (longlong)iVar8 * 8) = local_res10[0];
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_98 != 0) {
      plVar11 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar11 = local_70;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_c8 != 0) {
      plVar11 = local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar11 = local_a0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    if (*(longlong *)param_2 != 0) {
      plVar11 = (longlong *)&param_2->field_0x10;
      if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_2->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (*(longlong *)param_3 != 0) {
      plVar11 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (*(longlong *)param_4 != 0) {
      plVar11 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar11 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    pFVar2 = (local_f0->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar5 = true;
  }
  return bVar5;
}

// RegisterType @ 14e2099e0

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,FFieldClass *param_1,FText *param_2,
          FShaderValueTypeHandle param_3,
          TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *param_4,
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
          *param_5,FName param_6,TOptional<FLinearColor> *param_7,EOptimusDataTypeUsageFlags param_8
          )

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FShaderValueType *local_res20;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_c8;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_b8;
  TFunction<FProperty_*___cdecl(FFieldVariant,FName)> local_88;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_b8._0_8_ = *(undefined8 *)param_5;
  local_b8._40_8_ = 0;
  local_res20 = param_3.ValueTypePtr;
  if (local_b8._0_8_ != 0) {
    puVar2 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_b8.field_0x10);
  }
  local_88._0_8_ = *(undefined8 *)param_4;
  local_88._40_8_ = 0;
  if (local_88._0_8_ != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_88.field_0x10);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x38,8);
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_30[1] = param_1;
  local_30[2] = param_2;
  local_30[3] = &local_res20;
  local_30[4] = &param_6;
  local_30[5] = param_7;
  local_30[6] = &param_8;
  if (local_30 + 1 != (undefined8 *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,void,FOptimusDataType_&>
                  ::Call;
  }
  bVar1 = RegisterType(this,param_1->Name,(TFunction<void___cdecl(FOptimusDataType_&)> *)local_58,
                       &local_88,&local_b8,&local_c8);
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_5 != 0) {
    plVar3 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RegisterType @ 14e209b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e209cd6) */
/* WARNING: Removing unreachable block (ram,0x00014e209ce7) */
/* WARNING: Removing unreachable block (ram,0x00014e209ceb) */
/* WARNING: Removing unreachable block (ram,0x00014e209d23) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x00014e209d27 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UClass *param_1,FText *param_2,
          TOptional<FLinearColor> *param_3,EOptimusDataTypeUsageFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_198 [32];
  UClass *local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FString local_140;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_130;
  code *local_118 [2];
  code *local_108 [3];
  undefined8 local_f0;
  code *local_e8 [5];
  undefined8 *local_c0;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_b8;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_168 = param_1;
  if (param_1 == (UClass *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035707049>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x557,"InClassType");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = false;
  }
  else {
    local_158 = (FName)param_1->_padding_;
    ::FName::ToString(&local_158,&local_140);
    ::FString::PrintfImpl(&local_150,L"U%s");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_150.Data.ArrayNum != 0) {
      FVar5.Data = local_150.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_160,(wchar_t *)FVar5.Data);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    local_88 = (code *)0x0;
    plStack_60 = (longlong *)0x0;
    if ((param_4 & Variable) != None) {
      uStack_40 = SUB84(local_168,0);
      uStack_3c = (undefined4)((ulonglong)local_168 >> 0x20);
      local_68 = local_38;
      uStack_64 = uStack_34;
      plStack_60 = (longlong *)0x0;
      local_78 = 0x52e26af8;
      uStack_74 = 1;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      local_58 = 0;
      uStack_50 = uStack_80;
      uStack_30 = 0;
      uStack_30 = 0;
      local_58 = 0;
      uStack_74 = 1;
      local_78 = 0x52e26af8;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,FProperty_*,FFieldVariant,FName>
                 ::Call;
    }
    plStack_60 = (longlong *)0x0;
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    local_b8._0_8_ = 0;
    local_b8._40_8_ = 0;
    local_f0 = 0;
    local_118[0] = local_88;
    if (local_88 != (code *)0x0) {
      (**(code **)CONCAT44(uStack_74,local_78))(&local_78,local_118 + 2);
    }
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x30,8);
    *local_c0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>
                 ::_vftable_;
    local_c0[1] = &local_160;
    local_c0[2] = param_2;
    local_c0[3] = &local_168;
    local_c0[4] = param_3;
    local_c0[5] = &param_4;
    if (local_c0 + 1 != (longlong *)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
                    ::Call;
    }
    bVar2 = RegisterType(this,local_160,(TFunction<void___cdecl(FOptimusDataType_&)> *)local_e8,
                         (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_118,&local_b8,
                         &local_130);
    if (local_88 != (code *)0x0) {
      plVar4 = (longlong *)&local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar4 = plStack_60;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return bVar2;
}

// RegisterType @ 14e209e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,FText *param_2,
          TOptional<FLinearColor> *param_3,EOptimusDataTypeUsageFlags param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_1c8 [32];
  UScriptStruct *local_198;
  undefined1 local_190 [8];
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_188;
  undefined1 *local_178;
  FText *pFStack_170;
  UScriptStruct **local_168;
  TOptional<FLinearColor> *pTStack_160;
  EOptimusDataTypeUsageFlags *local_158;
  undefined4 local_14f;
  undefined2 local_14b;
  undefined1 local_149;
  void *local_140 [3];
  code *local_128 [2];
  code *local_118 [3];
  undefined8 local_100;
  code *local_f8 [5];
  undefined8 *local_d0;
  undefined1 local_c8 [16];
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_b8;
  code *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_198 = param_1;
  if (param_1 == (UScriptStruct *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035707098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x526,"InStructType");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    bVar6 = false;
  }
  else {
    pUVar8 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) {
      puVar9 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_140,0);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)*puVar9;
      }
      ::FName::FName((FName *)local_190,pwVar11);
      if (local_140[0] != (void *)0x0) {
        FMemory::Free(local_140[0]);
      }
    }
    else {
      (**(code **)(param_1->_padding_ + 0x380))(param_1,local_c8);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_190);
    }
    local_58 = (code *)0x0;
    plStack_30 = (longlong *)0x0;
    if ((param_4 & Variable) != None) {
      bVar6 = IsStructHashable(local_198);
      plStack_60 = plStack_30;
      uVar5 = uStack_3c;
      uVar4 = uStack_40;
      uVar3 = uStack_50;
      local_88 = local_58;
      uStack_70 = CONCAT31((int3)local_14f,bVar6);
      uStack_6c = (undefined1)((uint)local_14f >> 0x18);
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l8::<lambda_1>,FProperty_*,FFieldVariant,FName>
                 ::Call;
      uStack_50 = uStack_80;
      local_68 = SUB84(local_198,0);
      uStack_64 = (undefined4)((ulonglong)local_198 >> 0x20);
      local_38 = local_68;
      uStack_34 = uStack_64;
      plStack_30 = (longlong *)0x0;
      local_48 = 0x52e26ab8;
      uStack_44 = 1;
      uStack_40 = uStack_70;
      uStack_3c = CONCAT13(local_149,CONCAT21(local_14b,uStack_6c));
      uStack_80 = uVar3;
      uStack_70 = uVar4;
      uStack_6c = (undefined1)uVar5;
      uStack_6b = (undefined2)((uint)uVar5 >> 8);
      uStack_69 = (undefined1)((uint)uVar5 >> 0x18);
      if (local_88 != (code *)0x0) {
        plVar10 = &local_78;
        if (plStack_60 != (longlong *)0x0) {
          plVar10 = plStack_60;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    local_b8._0_8_ = 0;
    local_b8._40_8_ = 0;
    local_100 = 0;
    local_128[0] = local_58;
    if (local_58 != (code *)0x0) {
      plVar10 = (longlong *)&local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar10 = plStack_30;
      }
      (**(code **)*plVar10)(plVar10,local_128 + 2);
    }
    local_178 = local_190;
    local_168 = &local_198;
    local_158 = &param_4;
    local_f8[0] = (code *)0x0;
    pFStack_170 = param_2;
    pTStack_160 = param_3;
    local_d0 = FMemory::Malloc(0x30,8);
    *local_d0 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>
                 ::_vftable_;
    local_d0[1] = local_178;
    local_d0[2] = pFStack_170;
    local_d0[3] = local_168;
    local_d0[4] = pTStack_160;
    local_d0[5] = local_158;
    if (local_d0 + 1 != (longlong *)0x0) {
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
                    ::Call;
    }
    bVar6 = RegisterType(this,(FName)local_190,
                         (TFunction<void___cdecl(FOptimusDataType_&)> *)local_f8,
                         (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_128,&local_b8,
                         &local_188);
    if (local_58 != (code *)0x0) {
      plVar10 = (longlong *)&local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar10 = plStack_30;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return bVar6;
}

// RegisterType @ 14e20a0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,FText *param_2,
          FShaderValueTypeHandle param_3,TOptional<FLinearColor> *param_4,bool param_5,
          EOptimusDataTypeUsageFlags param_6)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  UScriptStruct *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar16;
  UClass *pUVar17;
  undefined8 *puVar18;
  ICppStructOps *pIVar19;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar20;
  longlong *plVar21;
  FProperty *pFVar22;
  longlong *plVar23;
  undefined ***pppuVar24;
  wchar_t *pwVar25;
  FScriptContainerElement *pFVar26;
  FShaderValueType *local_res20;
  undefined1 auStackY_418 [32];
  UScriptStruct *local_3c8;
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  int local_3b0 [2];
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  int local_398;
  int local_394;
  undefined1 local_390 [8];
  TFieldIterator<FProperty> local_388;
  TFieldIterator<FProperty> local_370;
  TFieldIterator<FProperty> local_358;
  FName local_340;
  FName local_338;
  FName local_330;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  TSharedPtr<FOptimusDataType_const_,1> local_2c8;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_2b8;
  TFieldIterator<FProperty> local_2a8;
  undefined4 local_28f;
  undefined2 local_28b;
  undefined1 local_289;
  undefined1 *local_280;
  FText *pFStack_278;
  FShaderValueType **local_270;
  int *piStack_268;
  UScriptStruct **local_260;
  TOptional<FLinearColor> *pTStack_258;
  EOptimusDataTypeUsageFlags *local_250;
  bool *pbStack_248;
  TSharedPtr<FOptimusDataType_const_,1> local_240;
  void *local_230 [3];
  code *local_218 [2];
  code *local_208 [3];
  undefined8 local_1f0;
  code *local_1e8 [2];
  code *local_1d8 [3];
  undefined8 local_1c0;
  code *local_1b8 [5];
  undefined8 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [40];
  longlong *plStack_150;
  int local_148;
  int local_144;
  int local_140;
  code *local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined ***pppuStack_110;
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined ***pppuStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  undefined8 local_88;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_res20 = param_3.ValueTypePtr;
  local_3c8 = param_1;
  if (param_1 == (UScriptStruct *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8742395069035707331>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                        ,0x43d,"InStructType");
    if (!bVar13) {
      return false;
    }
    pcVar3 = (code *)swi(3);
    uVar14 = (*pcVar3)();
    return (bool)uVar14;
  }
  if (param_5) {
    local_388.Field = (FField *)param_1->_padding_;
    local_388.InterfaceIndex = -1;
    local_388.bIncludeSuper = true;
    local_388.bIncludeDeprecated = true;
    local_388.bIncludeInterface = false;
    local_388.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_388);
    local_2a8.bIncludeSuper = local_388.bIncludeSuper;
    local_2a8.bIncludeDeprecated = local_388.bIncludeDeprecated;
    local_2a8.InterfaceIndex = local_388.InterfaceIndex;
    local_2a8.bIncludeInterface = local_388.bIncludeInterface;
    local_2a8._23_1_ = local_388._23_1_;
    local_2a8.Struct = local_388.Struct;
    pFVar22 = (FProperty *)local_388.Field;
    while (local_2a8.Field = (FField *)pFVar22, pFVar22 != (FProperty *)0x0) {
      pTVar16 = FindType(this,&local_240,pFVar22);
      pFVar2 = pTVar16->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_240.SharedReferenceCount.ReferenceController);
      if (pFVar2 == (FOptimusDataType *)0x0) {
        if ((byte)LogOptimusCore._0_1_ < 2) {
          return false;
        }
        local_340 = (FName)local_3c8->_padding_;
        ::FName::ToString(&local_340,&local_318);
        ::FName::ToString((FName *)pFVar22->_padding_,&local_328);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_318.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
        return false;
      }
      local_2a8.Field = (FField *)pFVar22->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_2a8);
      pFVar22 = (FProperty *)local_2a8.Field;
    }
  }
  pUVar6 = local_3c8;
  if (local_3c8 != (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar17->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar17->_padding_)) {
      (**(code **)(pUVar6->_padding_ + 0x380))(pUVar6,local_188);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_390);
      goto LAB_14e20a33b;
    }
  }
  puVar18 = (undefined8 *)(**(code **)(pUVar6->_padding_ + 0x388))(pUVar6,local_230,0);
  if (*(int *)(puVar18 + 1) == 0) {
    pwVar25 = L"";
  }
  else {
    pwVar25 = (wchar_t *)*puVar18;
  }
  ::FName::FName((FName *)local_390,pwVar25);
  if (local_230[0] != (void *)0x0) {
    FMemory::Free(local_230[0]);
  }
LAB_14e20a33b:
  pFVar22 = (FProperty *)0x0;
  local_108 = (code *)0x0;
  local_d8 = (code *)0x0;
  pppuStack_b0 = (undefined ***)0x0;
  plStack_e0 = (longlong *)0x0;
  local_3b0[0] = 0;
  if ((param_6 & Variable) != None) {
    bVar13 = IsStructHashable(local_3c8);
    pppuStack_110 = pppuStack_b0;
    uVar7 = uStack_c0;
    uVar4 = uStack_d0;
    local_138 = local_d8;
    uVar9 = (undefined4)uStack_c0;
    uStack_120 = CONCAT31((int3)local_28f,bVar13);
    uStack_11c = (undefined1)((uint)local_28f >> 0x18);
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,FProperty_*,FFieldVariant,FName>
               ::Call;
    uStack_d0 = uStack_130;
    local_118 = SUB84(local_3c8,0);
    uStack_114 = (undefined4)((ulonglong)local_3c8 >> 0x20);
    local_b8 = local_118;
    uStack_b4 = uStack_114;
    pppuStack_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_1>,0,0>
                ::_vftable_;
    uStack_c0 = CONCAT17(local_289,CONCAT25(local_28b,CONCAT14(uStack_11c,uStack_120)));
    uStack_130 = uVar4;
    uStack_120 = uVar9;
    uStack_11c = (undefined1)((ulonglong)uVar7 >> 0x20);
    uStack_11b = (undefined2)((ulonglong)uVar7 >> 0x28);
    uStack_119 = (undefined1)((ulonglong)uVar7 >> 0x38);
    if (local_138 != (code *)0x0) {
      pppuVar24 = &local_128;
      if (pppuStack_110 != (undefined ***)0x0) {
        pppuVar24 = pppuStack_110;
      }
      (*(code *)(*pppuVar24)[2])();
    }
    local_3c0.Data = (FScriptContainerElement *)0x0;
    local_3b8 = 0;
    pIVar19 = UScriptStruct::GetCppStructOps(local_3c8);
    iVar1 = pIVar19->Size;
    local_370.Struct = (UStruct *)local_3c8;
    if (local_3c8 != (UScriptStruct *)0x0) {
      pFVar22 = (FProperty *)local_3c8->_padding_;
    }
    local_370.InterfaceIndex = -1;
    local_370.bIncludeSuper = true;
    local_370.bIncludeDeprecated = true;
    local_370.bIncludeInterface = false;
    local_370.Field = (FField *)pFVar22;
    TFieldIterator<FProperty>::IterateToNext(&local_370);
    local_358.bIncludeSuper = local_370.bIncludeSuper;
    local_358.bIncludeDeprecated = local_370.bIncludeDeprecated;
    local_358.InterfaceIndex = local_370.InterfaceIndex;
    local_358.bIncludeInterface = local_370.bIncludeInterface;
    local_358._23_1_ = local_370._23_1_;
    local_358.Struct = local_370.Struct;
    FVar5.Data = local_3c0.Data;
    pFVar22 = (FProperty *)local_370.Field;
    while (local_3c0.Data = FVar5.Data, local_358.Field = (FField *)pFVar22,
          pFVar22 != (FProperty *)0x0) {
      FindType(this,&local_2c8,pFVar22);
      pFVar2 = local_2c8.Object;
      if (local_2c8.Object == (FOptimusDataType *)0x0) {
        if (1 < (byte)LogOptimusCore._0_1_) {
          local_330 = (FName)local_3c8->_padding_;
          ::FName::ToString(&local_330,&local_2d8);
          ::FName::ToString((FName *)pFVar22->_padding_,&local_2e8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
        }
LAB_14e20a8ad:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        DestructItems<_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,int>
                  ((FPropertyConversionInfo *)local_3c0.Data,(int)local_3b8);
        if ((FPropertyConversionInfo *)local_3c0.Data != (FPropertyConversionInfo *)0x0) {
          FMemory::Free(local_3c0.Data);
        }
        bVar13 = false;
        goto LAB_14e20abc7;
      }
      local_178._0_8_ = 0;
      plStack_150 = (longlong *)0x0;
      pTVar20 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                        *)&this->RegisteredTypes,(local_2c8.Object)->TypeName);
      if ((pTVar20 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) ||
         (pTVar20 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0xfffffffffffffff0)) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_a8 = 0;
        plStack_80 = (longlong *)0x0;
      }
      else {
        local_a8 = *(longlong *)&pTVar20->field_0x50;
        plStack_80 = (longlong *)0x0;
        if (local_a8 != 0) {
          puVar18 = *(undefined8 **)&pTVar20->field_0x78;
          if (*(undefined8 **)&pTVar20->field_0x78 == (undefined8 *)0x0) {
            puVar18 = (undefined8 *)&pTVar20->field_0x60;
          }
          (**(code **)*puVar18)(puVar18,local_98);
        }
      }
      plVar21 = plStack_150;
      uVar8 = local_178._8_8_;
      uVar7 = local_178._0_8_;
      uVar9 = local_178._16_4_;
      uVar10 = local_178._20_4_;
      uVar11 = local_178._24_4_;
      uVar12 = local_178._28_4_;
      uVar4 = CONCAT44(local_178._36_4_,local_178._32_4_);
      local_178._20_4_ = local_98[0]._4_4_;
      local_178._16_4_ = (undefined4)local_98[0];
      local_178._28_4_ = local_98[1]._4_4_;
      local_178._24_4_ = (undefined4)local_98[1];
      local_178._0_8_ = local_a8;
      local_178._8_8_ = uStack_a0;
      local_178._32_4_ = (undefined4)local_88;
      local_178._36_4_ = local_88._4_4_;
      plStack_150 = plStack_80;
      local_a8 = uVar7;
      uStack_a0 = uVar8;
      local_98[0]._0_4_ = uVar9;
      local_98[0]._4_4_ = uVar10;
      local_98[1]._0_4_ = uVar11;
      local_98[1]._4_4_ = uVar12;
      local_88 = uVar4;
      plStack_80 = plVar21;
      if (uVar7 != 0) {
        plVar23 = local_98;
        if (plVar21 != (longlong *)0x0) {
          plVar23 = plVar21;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      if (local_178._0_8_ == 0) {
        if (1 < (byte)LogOptimusCore._0_1_) {
          local_338 = (FName)local_3c8->_padding_;
          ::FName::ToString(&local_338,&local_2f8);
          ::FName::ToString((FName *)pFVar22->_padding_,&local_308);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
        }
        if (local_178._0_8_ != 0) {
          plVar21 = (longlong *)(local_178 + 0x10);
          if (plStack_150 != (longlong *)0x0) {
            plVar21 = plStack_150;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        goto LAB_14e20a8ad;
      }
      local_148 = pFVar22->Offset_Internal;
      local_144 = pFVar22->ElementSize * pFVar22->ArrayDim;
      local_3b0[0] = local_3b0[0] + pFVar2->ShaderValueSize;
      local_140 = pFVar2->ShaderValueSize;
      if (((local_3c0.Data <= (FPropertyConversionInfo *)local_178) &&
          ((FScriptContainerElement *)local_178 < local_3c0.Data + (longlong)local_3b8._4_4_ * 0x40)
          ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
      iVar15 = (int)local_3b8;
      if ((int)local_3b8 == local_3b8._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1040,&local_3c0,(int *)((longlong)&local_3b8 + 4));
      }
      pFVar26 = local_3c0.Data + (longlong)iVar15 * 0x40;
      local_3b8 = CONCAT44(local_3b8._4_4_,iVar15 + 1);
      *(undefined8 *)&pFVar26->field_0x0 = local_178._0_8_;
      *(undefined8 *)(pFVar26 + 0x28) = 0;
      if (local_178._0_8_ != 0) {
        plVar21 = (longlong *)(local_178 + 0x10);
        if (plStack_150 != (longlong *)0x0) {
          plVar21 = plStack_150;
        }
        (**(code **)*plVar21)(plVar21,pFVar26 + 0x10);
      }
      *(int *)(pFVar26 + 0x30) = local_148;
      *(int *)(pFVar26 + 0x34) = local_144;
      *(int *)(pFVar26 + 0x38) = local_140;
      if (local_178._0_8_ != 0) {
        plVar21 = (longlong *)(local_178 + 0x10);
        if (plStack_150 != (longlong *)0x0) {
          plVar21 = plStack_150;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      local_358.Field = (FField *)pFVar22->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_358);
      FVar5.Data = local_3c0.Data;
      pFVar22 = (FProperty *)local_358.Field;
    }
    iVar15 = (int)local_3b8;
    local_3a8.Data = (FScriptContainerElement *)0x0;
    local_3a0._4_4_ = (undefined4)(local_3a0 >> 0x20);
    local_3a0 = CONCAT44(local_3a0._4_4_,(int)local_3b8);
    if ((int)local_3b8 == 0) {
      local_3a0 = local_3b8 & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,(int)local_3b8,0,&local_3a8,(int)local_3b8,
                 (int *)((longlong)&local_3a0 + 4));
      ConstructItems<_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,int>
                (local_3a8.Data,(FPropertyConversionInfo *)FVar5.Data,iVar15);
    }
    local_394 = local_3b0[0];
    local_78 = (code *)0x0;
    local_398 = iVar1;
    plVar21 = FMemory::Malloc(0x20,8);
    plStack_50 = plStack_e0;
    uVar4 = uStack_100;
    pcVar3 = local_108;
    plVar21[1] = 0;
    *plVar21 = (longlong)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_2>,0,1>
                ::_vftable_;
    plVar21[1] = (longlong)local_3a8.Data;
    local_3a8.Data = (FScriptContainerElement *)0x0;
    *(int *)(plVar21 + 2) = (int)local_3a0;
    *(undefined4 *)((longlong)plVar21 + 0x14) = local_3a0._4_4_;
    local_3a0 = 0;
    *(int *)(plVar21 + 3) = local_398;
    *(int *)((longlong)plVar21 + 0x1c) = local_394;
    if (plVar21 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_2>,bool,TArrayView<unsigned_char_const_,int>,FShaderValueContainerView>
                 ::Call;
    }
    local_108 = local_78;
    uStack_100 = uStack_70;
    local_e8 = (undefined4)local_58;
    uStack_e4 = local_58._4_4_;
    plStack_e0 = plVar21;
    local_78 = pcVar3;
    uStack_70 = uVar4;
    local_68 = (undefined4)local_f8;
    uStack_64 = local_f8._4_4_;
    uStack_60 = (undefined4)uStack_f0;
    uStack_5c = uStack_f0._4_4_;
    if (pcVar3 != (code *)0x0) {
      plVar21 = (longlong *)&local_68;
      if (plStack_50 != (longlong *)0x0) {
        plVar21 = plStack_50;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    DestructItems<_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,int>
              ((FPropertyConversionInfo *)local_3a8.Data,(int)local_3a0);
    if ((FPropertyConversionInfo *)local_3a8.Data != (FPropertyConversionInfo *)0x0) {
      FMemory::Free(local_3a8.Data);
    }
    DestructItems<_FOptimusDataTypeRegistry::RegisterType_::__l36::FPropertyConversionInfo,int>
              ((FPropertyConversionInfo *)local_3c0.Data,(int)local_3b8);
    if ((FPropertyConversionInfo *)local_3c0.Data != (FPropertyConversionInfo *)0x0) {
      FMemory::Free(local_3c0.Data);
    }
  }
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_1f0 = 0;
  local_218[0] = local_108;
  if (local_108 != (code *)0x0) {
    plVar21 = &local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar21 = plStack_e0;
    }
    (**(code **)*plVar21)(plVar21,local_218 + 2);
  }
  local_1e8[0] = local_d8;
  local_1c0 = 0;
  if (local_d8 != (code *)0x0) {
    pppuVar24 = &local_c8;
    if (pppuStack_b0 != (undefined ***)0x0) {
      pppuVar24 = pppuStack_b0;
    }
    (*(code *)**pppuVar24)(pppuVar24,local_1e8 + 2);
  }
  local_280 = local_390;
  local_270 = &local_res20;
  local_1b8[0] = (code *)0x0;
  piStack_268 = local_3b0;
  local_260 = &local_3c8;
  pTStack_258 = param_4;
  local_250 = &param_6;
  pbStack_248 = &param_5;
  pFStack_278 = param_2;
  local_190 = FMemory::Malloc(0x48,8);
  *local_190 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_3>,0,1>
                ::_vftable_;
  local_190[1] = local_280;
  local_190[2] = pFStack_278;
  local_190[3] = local_270;
  local_190[4] = piStack_268;
  local_190[5] = local_260;
  local_190[6] = pTStack_258;
  local_190[7] = local_250;
  local_190[8] = pbStack_248;
  if (local_190 + 1 != (longlong *)0x0) {
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_3>,void,FOptimusDataType_&>
                   ::Call;
  }
  bVar13 = RegisterType(this,(FName)local_390,
                        (TFunction<void___cdecl(FOptimusDataType_&)> *)local_1b8,
                        (TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_1e8,
                        (TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
                         *)local_218,&local_2b8);
LAB_14e20abc7:
  if (local_108 != (code *)0x0) {
    plVar21 = &local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar21 = plStack_e0;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if (local_d8 != (code *)0x0) {
    pppuVar24 = &local_c8;
    if (pppuStack_b0 != (undefined ***)0x0) {
      pppuVar24 = pppuStack_b0;
    }
    (*(code *)(*pppuVar24)[2])();
  }
  return bVar13;
}

// RegisterType @ 14e20ac50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,FText *param_2,
          FShaderValueTypeHandle param_3,
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
          *param_4,TOptional<FLinearColor> *param_5,bool param_6,EOptimusDataTypeUsageFlags param_7)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  FProperty *pFVar4;
  UScriptStruct *pUVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar11;
  UClass *pUVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  FShaderValueType *local_res20;
  undefined1 auStackY_268 [32];
  UScriptStruct *local_238;
  int local_230 [2];
  undefined1 local_228 [8];
  TFieldIterator<FProperty> local_220;
  FName local_208;
  FString local_200;
  FString local_1f0;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_1e0;
  TFieldIterator<FProperty> local_1d0;
  undefined4 local_1b7;
  undefined2 local_1b3;
  undefined1 local_1b1;
  undefined1 *local_1a8;
  FText *pFStack_1a0;
  FShaderValueType **local_198;
  int *piStack_190;
  UScriptStruct **local_188;
  TOptional<FLinearColor> *pTStack_180;
  EOptimusDataTypeUsageFlags *local_178;
  bool *pbStack_170;
  TSharedPtr<FOptimusDataType_const_,1> local_168;
  void *local_158 [2];
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_148;
  code *local_118 [2];
  code *local_108 [3];
  undefined8 local_f0;
  code *local_e8 [5];
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  code *local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined ***pppuStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined ***pppuStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_res20 = param_3.ValueTypePtr;
  local_238 = param_1;
  if (param_1 == (UScriptStruct *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8742395069035707170>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDataTypeRegistry.cpp"
                       ,0x4de,"InStructType");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
LAB_14e20ae56:
    if (*(longlong *)param_4 != 0) {
      plVar15 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar15 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    return false;
  }
  if (param_6) {
    local_220.Field = (FField *)param_1->_padding_;
    local_220.InterfaceIndex = -1;
    local_220.bIncludeSuper = true;
    local_220.bIncludeDeprecated = true;
    local_220.bIncludeInterface = false;
    local_220.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_220);
    local_1d0.bIncludeSuper = local_220.bIncludeSuper;
    local_1d0.bIncludeDeprecated = local_220.bIncludeDeprecated;
    local_1d0.InterfaceIndex = local_220.InterfaceIndex;
    local_1d0.bIncludeInterface = local_220.bIncludeInterface;
    local_1d0._23_1_ = local_220._23_1_;
    local_1d0.Struct = local_220.Struct;
    pFVar4 = (FProperty *)local_220.Field;
    while (local_1d0.Field = (FField *)pFVar4, pFVar4 != (FProperty *)0x0) {
      pTVar11 = FindType(this,&local_168,pFVar4);
      pFVar2 = pTVar11->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      if (pFVar2 == (FOptimusDataType *)0x0) {
        if (1 < (byte)LogOptimusCore._0_1_) {
          local_208 = (FName)local_238->_padding_;
          ::FName::ToString(&local_208,&local_1f0);
          ::FName::ToString((FName *)pFVar4->_padding_,&local_200);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14e20ae56;
      }
      local_1d0.Field = (FField *)pFVar4->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_1d0);
      pFVar4 = (FProperty *)local_1d0.Field;
    }
  }
  pUVar5 = local_238;
  if (local_238 != (UScriptStruct *)0x0) {
    pUVar12 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar12->_padding_)) {
      (**(code **)(pUVar5->_padding_ + 0x380))(pUVar5,local_b8);
      Optimus::Private::GetTypeNameForGuid((FGuid *)local_228);
      goto LAB_14e20aeb8;
    }
  }
  puVar13 = (undefined8 *)(**(code **)(pUVar5->_padding_ + 0x388))(pUVar5,local_158,0);
  if (*(int *)(puVar13 + 1) == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)*puVar13;
  }
  ::FName::FName((FName *)local_228,pwVar16);
  if (local_158[0] != (void *)0x0) {
    FMemory::Free(local_158[0]);
  }
LAB_14e20aeb8:
  local_78 = (code *)0x0;
  pppuStack_50 = (undefined ***)0x0;
  local_230[0] = FShaderValueType::GetResourceElementSize(local_res20);
  if ((param_7 & Variable) != None) {
    bVar9 = IsStructHashable(local_238);
    pppuStack_80 = pppuStack_50;
    uVar8 = uStack_60;
    uVar6 = uStack_70;
    local_a8 = local_78;
    uVar7 = (undefined4)uStack_60;
    uStack_90 = CONCAT31((int3)local_1b7,bVar9);
    uStack_8c = (undefined1)((uint)local_1b7 >> 0x18);
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l36::<lambda_1>,FProperty_*,FFieldVariant,FName>
               ::Call;
    uStack_70 = uStack_a0;
    local_88 = SUB84(local_238,0);
    uStack_84 = (undefined4)((ulonglong)local_238 >> 0x20);
    local_58 = local_88;
    uStack_54 = uStack_84;
    pppuStack_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`36'::<lambda_1>,0,0>
                ::_vftable_;
    uStack_60 = CONCAT17(local_1b1,CONCAT25(local_1b3,CONCAT14(uStack_8c,uStack_90)));
    uStack_a0 = uVar6;
    uStack_90 = uVar7;
    uStack_8c = (undefined1)((ulonglong)uVar8 >> 0x20);
    uStack_8b = (undefined2)((ulonglong)uVar8 >> 0x28);
    uStack_89 = (undefined1)((ulonglong)uVar8 >> 0x38);
    if (local_a8 != (code *)0x0) {
      pppuVar14 = &local_98;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar14 = pppuStack_80;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  local_148._0_8_ = *(undefined8 *)param_4;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_148._40_8_ = 0;
  if (local_148._0_8_ != 0) {
    puVar13 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar13)(puVar13,&local_148.field_0x10);
  }
  local_118[0] = local_78;
  local_f0 = 0;
  if (local_78 != (code *)0x0) {
    pppuVar14 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_50;
    }
    (*(code *)**pppuVar14)(pppuVar14,local_118 + 2);
  }
  local_1a8 = local_228;
  local_198 = &local_res20;
  local_e8[0] = (code *)0x0;
  piStack_190 = local_230;
  local_188 = &local_238;
  pTStack_180 = param_5;
  local_178 = &param_7;
  pbStack_170 = &param_6;
  pFStack_1a0 = param_2;
  local_c0 = FMemory::Malloc(0x48,8);
  *local_c0 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`5'::<lambda_2>,0,1>
               ::_vftable_;
  local_c0[1] = local_1a8;
  local_c0[2] = pFStack_1a0;
  local_c0[3] = local_198;
  local_c0[4] = piStack_190;
  local_c0[5] = local_188;
  local_c0[6] = pTStack_180;
  local_c0[7] = local_178;
  local_c0[8] = pbStack_170;
  if (local_c0 + 1 != (longlong *)0x0) {
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l5::<lambda_2>,void,FOptimusDataType_&>
                  ::Call;
  }
  bVar9 = RegisterType(this,(FName)local_228,(TFunction<void___cdecl(FOptimusDataType_&)> *)local_e8
                       ,(TFunction<FProperty_*___cdecl(FFieldVariant,FName)> *)local_118,&local_148,
                       &local_1e0);
  if (local_78 != (code *)0x0) {
    pppuVar14 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_50;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (*(longlong *)param_4 != 0) {
    plVar15 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return bVar9;
}

// RegisterType @ 14e20b160

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,FShaderValueTypeHandle param_2,
          TOptional<FLinearColor> *param_3,bool param_4,EOptimusDataTypeUsageFlags param_5)

{
  bool bVar1;
  FName local_res10;
  FText local_38;
  FLinearColor_u_0 local_28;
  char local_18;
  
  local_res10 = (FName)param_1->_padding_;
  FText::FromName(&local_38,&local_res10);
  local_18 = param_3->bIsSet;
  if ((bool)local_18 != false) {
    local_28._0_8_ = *(undefined8 *)&(param_3->TypedValue).field0_0x0;
    local_28._8_8_ = *(undefined8 *)((longlong)&(param_3->TypedValue).field0_0x0 + 8);
  }
  bVar1 = RegisterType(this,param_1,&local_38,param_2,(TOptional<FLinearColor> *)&local_28._s_0,
                       param_4,param_5);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return bVar1;
}

// RegisterType @ 14e20b210

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,UScriptStruct *param_1,FShaderValueTypeHandle param_2,
          TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)>
          *param_3,TOptional<FLinearColor> *param_4,bool param_5,EOptimusDataTypeUsageFlags param_6)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FName local_78;
  FText local_70;
  FLinearColor_u_0 local_60;
  char local_50;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_48;
  
  local_78 = (FName)param_1->_padding_;
  FText::FromName(&local_70,&local_78);
  local_50 = param_4->bIsSet;
  if ((bool)local_50 != false) {
    local_60._s_0.R = (param_4->TypedValue).field0_0x0._s_0.R;
    local_60._s_0.G = (param_4->TypedValue).field0_0x0._s_0.G;
    local_60._s_0.B = (param_4->TypedValue).field0_0x0._s_0.B;
    local_60._s_0.A = (param_4->TypedValue).field0_0x0._s_0.A;
  }
  local_48._0_8_ = *(undefined8 *)param_3;
  local_48._40_8_ = 0;
  if (local_48._0_8_ != 0) {
    puVar2 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_48.field_0x10);
  }
  bVar1 = RegisterType(this,param_1,&local_70,param_2,&local_48,
                       (TOptional<FLinearColor> *)&local_60._s_0,param_5,param_6);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RegisterType @ 14e20b320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOptimusDataTypeRegistry::RegisterType
          (FOptimusDataTypeRegistry *this,FName param_1,FText *param_2,
          FShaderValueTypeHandle param_3,FName param_4,UObject *param_5,FLinearColor *param_6,
          EOptimusDataTypeUsageFlags param_7)

{
  bool bVar1;
  FName local_res10;
  FShaderValueType *local_res20;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  TFunction<bool___cdecl(TArrayView<unsigned_char_const_,int>,FShaderValueContainerView)> local_68;
  TFunction<FProperty_*___cdecl(FFieldVariant,FName)> local_38;
  
  local_res10 = param_1;
  local_res20 = param_3.ValueTypePtr;
  if ((param_7 & Variable) == None) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_68._0_8_ = 0;
    local_68._40_8_ = 0;
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x40,8);
    *local_70 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FOptimusDataTypeRegistry::RegisterType'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_70[1] = &local_res10;
    local_70[2] = param_2;
    local_70[3] = &local_res20;
    local_70[4] = &param_4;
    local_70[5] = &param_5;
    local_70[6] = param_6;
    local_70[7] = &param_7;
    if (local_70 + 1 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusDataTypeRegistry::RegisterType'::__l2::<lambda_1>,void,FOptimusDataType_&>
                    ::Call;
    }
    bVar1 = RegisterType(this,local_res10,(TFunction<void___cdecl(FOptimusDataType_&)> *)local_98,
                         &local_38,&local_68,&local_a8);
  }
  else {
    if (1 < (byte)LogOptimusCore._0_1_) {
      ::FName::ToString(&local_res10,(FString *)&local_a8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// UnregisterAllTypes @ 14e22b060

void __cdecl FOptimusDataTypeRegistry::UnregisterAllTypes(void)

{
  FOptimusDataTypeRegistry *pFVar1;
  
  pFVar1 = Get();
  TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           *)&pFVar1->RegisteredTypes);
  return;
}

// UnregisterEngineCallbacks @ 14e22b080

void __cdecl FOptimusDataTypeRegistry::UnregisterEngineCallbacks(void)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar4;
  FOptimusDataTypeRegistry *pFVar5;
  FName local_res8;
  
  pFVar1 = ::FName::FName(&local_res8,L"AssetRegistry");
  pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
  if (pIVar2 != (IModuleInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x360))(plVar3);
    pFVar5 = Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x308))(plVar3);
    pFVar5 = Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x318))(plVar3);
    pFVar5 = Get();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,pFVar5);
  }
  pFVar5 = Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,pFVar5);
  return;
}

// UnregisterType @ 14e22b160

void __thiscall
FOptimusDataTypeRegistry::UnregisterType(FOptimusDataTypeRegistry *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  FName local_res10;
  FName local_res18;
  
  local_res10 = param_1;
  local_res18 = param_1;
  if (*(int *)&(this->RegisteredTypes).field_0x8 != *(int *)&(this->RegisteredTypes).field_0x34) {
    uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                         *)&this->RegisteredTypes,param_1.Number + uVar5,&local_res18);
  }
  pFVar2 = (FName *)(this->RegistrationOrder).AllocatorInstance.Data;
  if (((pFVar2 <= &local_res10) && (&local_res10 < pFVar2 + (this->RegistrationOrder).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RegistrationOrder).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (FName *)(this->RegistrationOrder).AllocatorInstance.Data;
    bVar4 = *pFVar2 != local_res10;
    lVar9 = 0;
    FVar6 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar4 == (pFVar2[lVar9] != FVar6));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + iVar10,pFVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
          FVar6 = local_res10;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar9 < iVar1);
    (this->RegistrationOrder).ArrayNum = iVar10;
  }
  return;
}

// operator() @ 150594cb0

bool __thiscall
`FOptimusDataTypeRegistry::RegisterArrayTypeIfApplicable'::__l19::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8742395069035707483>);
  if (bVar3) {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    ::FName::ToString((FName *)*plVar1,&local_18);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8742395069035707483>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150594d44;
    }
  }
  bVar3 = false;
LAB_150594d44:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// operator() @ 150594d80

bool __thiscall
`FOptimusDataTypeRegistry::RegisterBuiltinTypes'::__l7::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8742395069035707914>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8742395069035707914>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150594de7;
    }
  }
  bVar2 = false;
LAB_150594de7:
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

