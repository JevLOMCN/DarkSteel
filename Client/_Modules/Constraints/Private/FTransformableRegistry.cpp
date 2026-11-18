// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 10

// <lambda_invoker_cdecl> @ 14648f7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UTransformableHandle * __cdecl
`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1,FName *param_2)

{
  int iVar1;
  UClass *pUVar2;
  UTransformableComponentHandle *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pUVar3 = UE::TransformConstraintUtil::CreateHandleForSceneComponent
                         ((USceneComponent *)param_1,param_2);
      return (UTransformableHandle *)pUVar3;
    }
  }
  return (UTransformableHandle *)0x0;
}

// <lambda_invoker_cdecl> @ 14648f840

uint __cdecl
`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UObject *param_1,FName *param_2)

{
  int iVar1;
  UClass *pUVar2;
  uint uVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      return uVar3 >> 0x10 ^ uVar3;
    }
  }
  return 0;
}

// ~FTransformableRegistry @ 14649f9c0

void __thiscall FTransformableRegistry::~FTransformableRegistry(FTransformableRegistry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Transformables).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Transformables).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// FindInfo @ 1464afbc0

FTransformableInfo * __thiscall
FTransformableRegistry::FindInfo(FTransformableRegistry *this,UClass *param_1)

{
  FTransformableInfo *pFVar1;
  
  while( true ) {
    if (param_1 == (UClass *)0x0) {
      return (FTransformableInfo *)0x0;
    }
    pFVar1 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
             ::Find((TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                     *)this,param_1);
    if (pFVar1 != (FTransformableInfo *)0x0) break;
    param_1 = (UClass *)param_1->_padding_;
  }
  return pFVar1;
}

// Get @ 1464b0dc0

FTransformableRegistry * __cdecl FTransformableRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FTransformableRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

// GetCreateFunction @ 1464b2be0

TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> * __thiscall
FTransformableRegistry::GetCreateFunction
          (FTransformableRegistry *this,
          TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *__return_storage_ptr__
          ,UClass *param_1)

{
  undefined8 *puVar1;
  FTransformableInfo *pFVar2;
  undefined8 *puVar3;
  
  if (param_1 == (UClass *)0x0) {
LAB_1464b2c5d:
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  }
  else {
    pFVar2 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
             ::Find((TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                     *)this,param_1);
    if (pFVar2 == (FTransformableInfo *)0x0) {
      pFVar2 = FindInfo(this,(UClass *)param_1->_padding_);
      if (pFVar2 == (FTransformableInfo *)0x0) goto LAB_1464b2c5d;
    }
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&pFVar2->CreateHandleFunc;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    if (*(longlong *)__return_storage_ptr__ != 0) {
      puVar1 = *(undefined8 **)&(pFVar2->CreateHandleFunc).field_0x28;
      puVar3 = (undefined8 *)&(pFVar2->CreateHandleFunc).field_0x10;
      if (puVar1 != (undefined8 *)0x0) {
        puVar3 = puVar1;
      }
      (**(code **)*puVar3)();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetHashFunction @ 1464b4330

TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> * __thiscall
FTransformableRegistry::GetHashFunction
          (FTransformableRegistry *this,
          TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *__return_storage_ptr__,
          UClass *param_1)

{
  undefined8 *puVar1;
  FTransformableInfo *pFVar2;
  undefined8 *puVar3;
  
  if (param_1 == (UClass *)0x0) {
LAB_1464b43ae:
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  }
  else {
    pFVar2 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
             ::Find((TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                     *)this,param_1);
    if (pFVar2 == (FTransformableInfo *)0x0) {
      pFVar2 = FindInfo(this,(UClass *)param_1->_padding_);
      if (pFVar2 == (FTransformableInfo *)0x0) goto LAB_1464b43ae;
    }
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&pFVar2->GetHashFunc;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    if (*(longlong *)__return_storage_ptr__ != 0) {
      puVar1 = *(undefined8 **)&(pFVar2->GetHashFunc).field_0x28;
      puVar3 = (undefined8 *)&(pFVar2->GetHashFunc).field_0x10;
      if (puVar1 != (undefined8 *)0x0) {
        puVar3 = puVar1;
      }
      (**(code **)*puVar3)();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Register @ 1464bcaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformableRegistry::Register
          (FTransformableRegistry *this,UClass *param_1,
          TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *param_2,
          TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  UClass *local_res10;
  undefined1 auStack_c8 [32];
  TPairInitializer<UClass_*_&,FTransformableRegistry::FTransformableInfo_const_&> local_a8;
  longlong *local_98;
  longlong local_88 [2];
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88[0] = *(longlong *)param_2;
  local_60 = (longlong *)0x0;
  local_res10 = param_1;
  if (local_88[0] != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_78);
  }
  local_58 = *(longlong *)param_3;
  local_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar1 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_48);
  }
  local_a8.Value = (FTransformableInfo *)&local_res10;
  local_98 = local_88;
  TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&,FTransformableRegistry::FTransformableInfo_const_&>_>
            ((TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
              *)this,&local_a8,(bool *)&local_a8.Value);
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar2 = local_30;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88[0] != 0) {
    plVar2 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar2 = local_60;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar2 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// RegisterBaseObjects @ 1464bcc00

void __cdecl FTransformableRegistry::RegisterBaseObjects(void)

{
  FTransformableRegistry *this;
  UClass *pUVar1;
  undefined1 local_res8;
  code *local_68 [2];
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  this = Get();
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_2>::<lambda_invoker_cdecl>
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_28 = &
             ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_1>::<lambda_invoker_cdecl>
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_10 = 0;
  pUVar1 = Z_Construct_UClass_USceneComponent_NoRegister();
  Register(this,pUVar1,
           (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_38,
           (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_68);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = (code *)CONCAT71(local_20._1_7_,local_res8);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,unsigned_int,UObject_const_*,FName_const_&>
                ::Call;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_50 = (code *)CONCAT71(local_50._1_7_,local_res8);
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,UTransformableHandle_*,UObject_*,FName_const_&>
                ::Call;
  local_40 = 0;
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  Register(this,pUVar1,
           (TFunction<UTransformableHandle_*___cdecl(UObject_*,FName_const_&)> *)local_68,
           (TFunction<unsigned_int___cdecl(UObject_const_*,FName_const_&)> *)local_38);
  return;
}

// UnregisterAllObjects @ 1464c3af0

void __cdecl FTransformableRegistry::UnregisterAllObjects(void)

{
  TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
  *this;
  
  this = (TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
          *)Get();
  TSet<TTuple<UClass_*,FTransformableRegistry::FTransformableInfo>,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>,FDefaultSetAllocator>
  ::Reset(this);
  return;
}

