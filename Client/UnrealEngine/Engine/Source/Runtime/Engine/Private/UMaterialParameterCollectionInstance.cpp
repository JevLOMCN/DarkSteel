// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 1472eb370

UClass * __cdecl UMaterialParameterCollectionInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollectionInstance",
               &Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollectionInstance,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialParameterCollectionInstance>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollectionInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton;
}

// UMaterialParameterCollectionInstance @ 1472f1b50

UMaterialParameterCollectionInstance * __thiscall
UMaterialParameterCollectionInstance::UMaterialParameterCollectionInstance
          (UMaterialParameterCollectionInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionInstance__6B_;
  (this->Collection).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->ScalarParameterValues = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x34 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterValues = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterValues).field_0x34 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VectorParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->ScalarParameterUpdatedDelegate = 0;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VectorParameterUpdatedDelegate = 0;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x18 = 2;
  return this;
}

// ~UMaterialParameterCollectionInstance @ 1472f21c0

void __thiscall
UMaterialParameterCollectionInstance::~UMaterialParameterCollectionInstance
          (UMaterialParameterCollectionInstance *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionInstance__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->VectorParameterUpdatedDelegate).field_0x8,
             *(int *)&(this->VectorParameterUpdatedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->VectorParameterUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VectorParameterUpdatedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ScalarParameterUpdatedDelegate).field_0x8,
             *(int *)&(this->ScalarParameterUpdatedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ScalarParameterUpdatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ScalarParameterUpdatedDelegate);
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VectorParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterValues);
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalarParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterValues);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3800

UClass * __cdecl UMaterialParameterCollectionInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialParameterCollectionInstance",
               &Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton,
               StaticRegisterNativesUMaterialParameterCollectionInstance,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMaterialParameterCollectionInstance>,
               InternalVTableHelperCtorCaller<UMaterialParameterCollectionInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.InnerSingleton;
}

// StaticRegisterNativesUMaterialParameterCollectionInstance @ 1472f4410

void __cdecl
UMaterialParameterCollectionInstance::StaticRegisterNativesUMaterialParameterCollectionInstance
          (void)

{
  return;
}

// UMaterialParameterCollectionInstance @ 147fa5d00

UMaterialParameterCollectionInstance * __thiscall
UMaterialParameterCollectionInstance::UMaterialParameterCollectionInstance
          (UMaterialParameterCollectionInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialParameterCollectionInstance__6B_;
  (this->Collection).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->ScalarParameterValues = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x34 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterValues = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterValues).field_0x34 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VectorParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->ScalarParameterUpdatedDelegate = 0;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VectorParameterUpdatedDelegate = 0;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x10 = 0;
  this->Resource = (FMaterialParameterCollectionInstanceResource *)0x0;
  this->bNeedsRenderStateUpdate = false;
  *(undefined8 *)&(this->ScalarParameterUpdatedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->VectorParameterUpdatedDelegate).field_0x18 = 2;
  return this;
}

// DeferredUpdateRenderState @ 147fc13c0

void __thiscall
UMaterialParameterCollectionInstance::DeferredUpdateRenderState
          (UMaterialParameterCollectionInstance *this,bool param_1)

{
  FMaterialParameterCollectionInstanceResource *this_00;
  code *pcVar1;
  bool bVar2;
  UMaterialParameterCollection *this_01;
  UObject *pUVar3;
  FGuid *pFVar4;
  FName local_res8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_48;
  FGuid local_38;
  FGuid local_28;
  
  if ((this->bNeedsRenderStateUpdate == false) && (param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bNeedsRenderStateUpdate || !bRecreateUniformBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                       ,0x44c,
                       L"DeferredUpdateRenderState was told to recreate the uniform buffer, but there\'s nothing to update"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bNeedsRenderStateUpdate != false) {
    bVar2 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
    if (bVar2) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      this_01 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
      if (this_01 != (UMaterialParameterCollection *)0x0) {
        UMaterialParameterCollection::GetParameterData
                  (this_01,&local_48,&this->ScalarParameterValues,&this->VectorParameterValues);
      }
      local_res8 = (FName)this->_padding_;
      this_00 = this->Resource;
      bVar2 = FWeakObjectPtr::IsValid(&(this->Collection).WeakPtr);
      if (bVar2) {
        pUVar3 = FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
        pFVar4 = &local_28;
        local_28.A = *(uint *)&pUVar3[1].field_0x0;
        local_28.B = *(uint *)&pUVar3[1].field_0x4;
        local_28.C = *(uint *)&pUVar3[1].field_0x8;
        local_28.D = *(uint *)&pUVar3[1].field_0xc;
      }
      else {
        local_38.A = 0;
        local_38.B = 0;
        pFVar4 = &local_38;
        local_38.C = 0;
        local_38.D = 0;
      }
      FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents
                (this_00,pFVar4,&local_48,&local_res8,param_1);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  this->bNeedsRenderStateUpdate = false;
  return;
}

// FinishDestroy @ 147fcd910

void __thiscall
UMaterialParameterCollectionInstance::FinishDestroy(UMaterialParameterCollectionInstance *this)

{
  if (this->Resource != (FMaterialParameterCollectionInstanceResource *)0x0) {
    FMaterialParameterCollectionInstanceResource::GameThread_Destroy(this->Resource);
    this->Resource = (FMaterialParameterCollectionInstanceResource *)0x0;
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// ForceReturnToDefaultValues @ 147fcf6a0

void __thiscall
UMaterialParameterCollectionInstance::ForceReturnToDefaultValues
          (UMaterialParameterCollectionInstance *this)

{
  undefined1 *puVar1;
  TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
  *this_00;
  int iVar2;
  uint uVar3;
  FRHIUniformBuffer *pFVar4;
  bool bVar5;
  
  bVar5 = 1 < *(int *)&(this->ScalarParameterValues).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                    *)&this->ScalarParameterValues);
  }
  puVar1 = &(this->ScalarParameterValues).field_0xc;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)&this->ScalarParameterValues,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ScalarParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x34 = 0;
  iVar2 = *(int *)&(this->ScalarParameterValues).field_0x2c;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ScalarParameterValues).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScalarParameterValues).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            *)&this->ScalarParameterValues);
  }
  this_00 = &this->VectorParameterValues;
  bVar5 = 1 < *(int *)&(this->VectorParameterValues).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->VectorParameterValues).field_0xc;
  *(undefined4 *)&(this->VectorParameterValues).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->VectorParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorParameterValues).field_0x34 = 0;
  iVar2 = *(int *)&(this->VectorParameterValues).field_0x2c;
  *(undefined4 *)&(this->VectorParameterValues).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->VectorParameterValues).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VectorParameterValues).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 1;
    TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if ((((this->Resource == (FMaterialParameterCollectionInstanceResource *)0x0) ||
       (pFVar4 = (this->Resource->UniformBuffer).Reference, pFVar4 == (FRHIUniformBuffer *)0x0)) ||
      (uVar3 = (uint)pFVar4->_padding_, (uVar3 >> 0x1e & 1) != 0)) || ((uVar3 & 0x3fffffff) == 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  UpdateRenderState(this,bVar5);
  return;
}

// GetParameterData @ 147fd55a0

void __thiscall
UMaterialParameterCollectionInstance::GetParameterData
          (UMaterialParameterCollectionInstance *this,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  UMaterialParameterCollection *this_00;
  
  this_00 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
  if (this_00 != (UMaterialParameterCollection *)0x0) {
    UMaterialParameterCollection::GetParameterData
              (this_00,param_1,&this->ScalarParameterValues,&this->VectorParameterValues);
  }
  return;
}

// GetScalarParameterValue @ 147fd6db0

bool __thiscall
UMaterialParameterCollectionInstance::GetScalarParameterValue
          (UMaterialParameterCollectionInstance *this,FCollectionScalarParameter *param_1,
          float *param_2)

{
  FName FVar1;
  float *pfVar2;
  
  FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  FVar1.Number = *(uint *)&param_1->field_0x4;
  pfVar2 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)&this->ScalarParameterValues,FVar1);
  if (pfVar2 == (float *)0x0) {
    pfVar2 = &param_1->DefaultValue;
  }
  *param_2 = *pfVar2;
  return true;
}

// GetScalarParameterValue @ 147fd6df0

bool __thiscall
UMaterialParameterCollectionInstance::GetScalarParameterValue
          (UMaterialParameterCollectionInstance *this,FName param_1,float *param_2)

{
  FName FVar1;
  UMaterialParameterCollection *this_00;
  FCollectionScalarParameter *pFVar2;
  float *pfVar3;
  
  this_00 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
  pFVar2 = UMaterialParameterCollection::GetScalarParameterByName(this_00,param_1);
  if (pFVar2 != (FCollectionScalarParameter *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&pFVar2->field_0x0;
    FVar1.Number = *(uint *)&pFVar2->field_0x4;
    pfVar3 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
             ::Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                     *)&this->ScalarParameterValues,FVar1);
    if (pfVar3 == (float *)0x0) {
      pfVar3 = &pFVar2->DefaultValue;
    }
    *param_2 = *pfVar3;
    return true;
  }
  return false;
}

// GetVectorParameterValue @ 147fdac50

bool __thiscall
UMaterialParameterCollectionInstance::GetVectorParameterValue
          (UMaterialParameterCollectionInstance *this,FCollectionVectorParameter *param_1,
          FLinearColor *param_2)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  
  pFVar2 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
           ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                   *)&this->VectorParameterValues,(FName)param_1->_padding_);
  if (pFVar2 == (FLinearColor *)0x0) {
    pFVar2 = &param_1->DefaultValue;
  }
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar1;
  return true;
}

// GetVectorParameterValue @ 147fdaca0

bool __thiscall
UMaterialParameterCollectionInstance::GetVectorParameterValue
          (UMaterialParameterCollectionInstance *this,FName param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  UMaterialParameterCollection *this_00;
  FCollectionVectorParameter *pFVar2;
  FLinearColor *pFVar3;
  
  this_00 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
  pFVar2 = UMaterialParameterCollection::GetVectorParameterByName(this_00,param_1);
  if (pFVar2 != (FCollectionVectorParameter *)0x0) {
    pFVar3 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
             ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                     *)&this->VectorParameterValues,(FName)pFVar2->_padding_);
    if (pFVar3 == (FLinearColor *)0x0) {
      pFVar3 = &pFVar2->DefaultValue;
    }
    uVar1 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
    *(undefined8 *)&param_2->field0_0x0 = *(undefined8 *)&pFVar3->field0_0x0;
    *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uVar1;
    return true;
  }
  return false;
}

// PostInitProperties @ 147fe5e00

void __thiscall
UMaterialParameterCollectionInstance::PostInitProperties(UMaterialParameterCollectionInstance *this)

{
  FMaterialParameterCollectionInstanceResource *pFVar1;
  wchar_t *pwVar2;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar2 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar2,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pFVar1 = ::operator_new(0x28);
      if (pFVar1 != (FMaterialParameterCollectionInstanceResource *)0x0) {
        (pFVar1->Id).A = 0;
        (pFVar1->Id).B = 0;
        (pFVar1->Id).C = 0;
        (pFVar1->Id).D = 0;
        (pFVar1->OwnerName).ComparisonIndex = 0;
        (pFVar1->OwnerName).Number = 0;
        (pFVar1->UniformBuffer).Reference = (FRHIUniformBuffer *)0x0;
        (pFVar1->UniformBufferLayout).Reference = (FRHIUniformBufferLayout *)0x0;
        this->Resource = pFVar1;
        return;
      }
      this->Resource = (FMaterialParameterCollectionInstanceResource *)0x0;
    }
  }
  return;
}

// SetCollection @ 147ff4e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionInstance::SetCollection
          (UMaterialParameterCollectionInstance *this,UMaterialParameterCollection *param_1,
          UWorld *param_2)

{
  UWorld *local_res8;
  
  local_res8 = (UWorld *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMaterialParameterCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->Collection).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// SetScalarParameterValue @ 147ff6a60

bool __thiscall
UMaterialParameterCollectionInstance::SetScalarParameterValue
          (UMaterialParameterCollectionInstance *this,FName param_1,float param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UMaterialParameterCollection *this_00;
  FCollectionScalarParameter *pFVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  TPairInitializer<FName_const_&,float_const_&> local_res8;
  float local_res18 [4];
  float **local_78;
  float *local_70;
  FDestructionSentinel local_68 [2];
  
  local_res8.Value = (float *)param_1;
  local_res18[0] = param_2;
  bVar5 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (!bVar5) {
    return false;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->Collection).WeakPtr);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                         ,0x3d0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this_00 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
  pFVar10 = UMaterialParameterCollection::GetScalarParameterByName(this_00,(FName)local_res8.Value);
  if (pFVar10 == (FCollectionScalarParameter *)0x0) {
    return false;
  }
  pfVar11 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
            Find((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)&this->ScalarParameterValues,(FName)local_res8.Value);
  if (pfVar11 == (float *)0x0) {
    local_78 = &local_res8.Value;
    local_70 = local_res18;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)&this->ScalarParameterValues,&local_res8,(bool *)&local_78);
  }
  else {
    if (local_res18[0] == *pfVar11) {
      return true;
    }
    *pfVar11 = local_res18[0];
  }
  UpdateRenderState(this,false);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ScalarParameterUpdatedDelegate,(FWriteAccessScope *)local_68);
  puVar1 = &(this->ScalarParameterUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar12 = *(int *)&(this->ScalarParameterUpdatedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar12 < *(int *)&(this->ScalarParameterUpdatedDelegate).field_0x10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar2 = *(longlong *)&(this->ScalarParameterUpdatedDelegate).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar3 + 0x68))(), cVar8 == '\0')) {
        bVar5 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  puVar1 = &(this->ScalarParameterUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ScalarParameterUpdatedDelegate,false);
  }
  if (local_68[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68[0].Accessor,local_68);
  }
  return true;
}

// SetVectorParameterValue @ 147ff7400

bool __thiscall
UMaterialParameterCollectionInstance::SetVectorParameterValue
          (UMaterialParameterCollectionInstance *this,FName param_1,FLinearColor *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UMaterialParameterCollection *this_00;
  FCollectionVectorParameter *pFVar12;
  FLinearColor *pFVar13;
  uint uVar14;
  longlong lVar15;
  TPairInitializer<FName_const_&,FLinearColor_const_&> local_res8;
  FLinearColor **local_a8;
  FLinearColor *local_a0;
  FDestructionSentinel local_98;
  FName local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_res8.Value = (FLinearColor *)param_1;
  bVar7 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (!bVar7) {
    return false;
  }
  bVar7 = FWeakObjectPtr::IsValid(&(this->Collection).WeakPtr);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                         ,0x3f7,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  this_00 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
  pFVar12 = UMaterialParameterCollection::GetVectorParameterByName(this_00,(FName)local_res8.Value);
  if (pFVar12 == (FCollectionVectorParameter *)0x0) {
    return false;
  }
  pFVar13 = TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
            ::Find((TMapBase<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                    *)&this->VectorParameterValues,(FName)local_res8.Value);
  if (pFVar13 == (FLinearColor *)0x0) {
    local_a8 = &local_res8.Value;
    local_a0 = param_2;
    TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FLinearColor_const_&>_>
              ((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                *)&this->VectorParameterValues,&local_res8,(bool *)&local_a8);
  }
  else {
    if (((((param_2->field0_0x0)._s_0.R == (pFVar13->field0_0x0)._s_0.R) &&
         ((param_2->field0_0x0)._s_0.G == (pFVar13->field0_0x0)._s_0.G)) &&
        ((param_2->field0_0x0)._s_0.B == (pFVar13->field0_0x0)._s_0.B)) &&
       ((param_2->field0_0x0)._s_0.A == (pFVar13->field0_0x0)._s_0.A)) {
      return true;
    }
    uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    *(undefined8 *)&pFVar13->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    *(undefined8 *)((longlong)&pFVar13->field0_0x0 + 8) = uVar5;
  }
  UpdateRenderState(this,false);
  pFVar13 = local_res8.Value;
  uVar5 = *(undefined8 *)&param_2->field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_50 = uVar5;
  uStack_48 = uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->VectorParameterUpdatedDelegate,(FWriteAccessScope *)&local_98);
  puVar1 = &(this->VectorParameterUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar14 = *(int *)&(this->VectorParameterUpdatedDelegate).field_0x10 - 1;
  if (-1 < (int)uVar14) {
    lVar15 = (longlong)(int)uVar14 << 4;
    bVar7 = false;
    do {
      uVar11 = 0;
      if ((int)uVar14 < *(int *)&(this->VectorParameterUpdatedDelegate).field_0x10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      lVar2 = *(longlong *)&(this->VectorParameterUpdatedDelegate).field_0x8;
      if ((*(int *)(lVar15 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar15 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_147ff760d:
        bVar7 = true;
      }
      else {
        local_78 = (FName)pFVar13;
        uStack_70 = uVar5;
        local_68 = uVar6;
        cVar10 = (**(code **)(*plVar3 + 0x68))();
        if (cVar10 == '\0') goto LAB_147ff760d;
      }
      lVar15 = lVar15 + -0x10;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  puVar1 = &(this->VectorParameterUpdatedDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->VectorParameterUpdatedDelegate,false);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  return true;
}

// UpdateRenderState @ 148000350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMaterialParameterCollectionInstance::UpdateRenderState
          (UMaterialParameterCollectionInstance *this,bool param_1)

{
  FMaterialParameterCollectionInstanceResource *this_00;
  code *pcVar1;
  bool bVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  UMaterialParameterCollection *this_01;
  UObject *pUVar5;
  FGuid *pFVar6;
  FName local_res8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_48;
  FGuid local_38;
  FGuid local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar4 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  EVar3 = UWorld::InternalGetNetMode(pUVar4);
  if (EVar3 == NM_DedicatedServer) {
    return;
  }
  this->bNeedsRenderStateUpdate = true;
  pUVar4 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
  UWorld::SetMaterialParameterCollectionInstanceNeedsUpdate(pUVar4);
  if ((GDeferUpdateRenderStates != 0) && (!param_1)) {
    return;
  }
  if (this->bNeedsRenderStateUpdate == false) {
    if ((param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bNeedsRenderStateUpdate || !bRecreateUniformBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\ParameterCollection.cpp"
                           ,0x44c,
                           L"DeferredUpdateRenderState was told to recreate the uniform buffer, but there\'s nothing to update"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (this->bNeedsRenderStateUpdate == false) goto LAB_1480004c9;
  }
  bVar2 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  if (bVar2) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    this_01 = (UMaterialParameterCollection *)FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
    if (this_01 != (UMaterialParameterCollection *)0x0) {
      UMaterialParameterCollection::GetParameterData
                (this_01,&local_48,&this->ScalarParameterValues,&this->VectorParameterValues);
    }
    local_res8 = (FName)this->_padding_;
    this_00 = this->Resource;
    bVar2 = FWeakObjectPtr::IsValid(&(this->Collection).WeakPtr);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&(this->Collection).WeakPtr);
      pFVar6 = &local_28;
      local_28.A = *(uint *)&pUVar5[1].field_0x0;
      local_28.B = *(uint *)&pUVar5[1].field_0x4;
      local_28.C = *(uint *)&pUVar5[1].field_0x8;
      local_28.D = *(uint *)&pUVar5[1].field_0xc;
    }
    else {
      local_38.A = 0;
      local_38.B = 0;
      pFVar6 = &local_38;
      local_38.C = 0;
      local_38.D = 0;
    }
    FMaterialParameterCollectionInstanceResource::GameThread_UpdateContents
              (this_00,pFVar6,&local_48,&local_res8,param_1);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
LAB_1480004c9:
  this->bNeedsRenderStateUpdate = false;
  return;
}

