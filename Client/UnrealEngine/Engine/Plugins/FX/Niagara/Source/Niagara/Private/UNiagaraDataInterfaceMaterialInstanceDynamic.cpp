// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// StaticClass @ 149198ab0

UClass * __cdecl UNiagaraDataInterfaceMaterialInstanceDynamic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialInstanceDynamic",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceMaterialInstanceDynamic,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton;
}

// UNiagaraDataInterfaceMaterialInstanceDynamic @ 1491abca0

UNiagaraDataInterfaceMaterialInstanceDynamic * __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::UNiagaraDataInterfaceMaterialInstanceDynamic
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
  (this->DefaultMaterialInst).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->InstancedMaterialParamBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->InstancedMaterialParamBinding).ResolvedParameter.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar1;
  return this;
}

// UNiagaraDataInterfaceMaterialInstanceDynamic @ 1491abcf0

UNiagaraDataInterfaceMaterialInstanceDynamic * __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::UNiagaraDataInterfaceMaterialInstanceDynamic
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,FObjectInitializer *param_1)

{
  int iVar1;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
  (this->DefaultMaterialInst).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  *(undefined8 *)&(this->InstancedMaterialParamBinding).ResolvedParameter.Name.Number = 0;
  (this->InstancedMaterialParamBinding).ResolvedParameter.Name.ComparisonIndex.Value = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceMaterialInstanceDynamic @ 1491ad510

void __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::~UNiagaraDataInterfaceMaterialInstanceDynamic
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialInstanceDynamic__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1491b1380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  float *pfVar5;
  FWeakObjectPtr local_res8;
  FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> local_58;
  code *local_48 [2];
  int local_38 [6];
  undefined8 *local_20;
  
  uVar2 = *(undefined8 *)this;
  VectorVM::FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>::
  FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>(&local_58,param_1);
  local_38[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_res8 = *(FWeakObjectPtr *)local_58.Ptr;
  fVar1 = pfVar5[local_38[0] * param_1->PerInstanceFnInstanceIdx];
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  FVar3 = local_res8;
  if (bVar4) {
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`NDIMIDPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::
                 _vftable_;
    *(FWeakObjectPtr *)(local_20 + 1) = FVar3;
    local_20[2] = uVar2;
    *(float *)(local_20 + 3) = fVar1;
    if ((FWeakObjectPtr *)(local_20 + 1) != (FWeakObjectPtr *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`NDIMIDPrivate::VMSetScalarParameter'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_48);
  }
  return;
}

// operator() @ 1491b3170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::__l9::<lambda_2>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  FWeakObjectPtr local_res8;
  FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT> local_b8;
  undefined1 local_a8 [48];
  float *local_78;
  float *local_60;
  
  uVar5 = *(undefined8 *)this;
  VectorVM::FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>::
  FUserPtrHandler<NDIMIDPrivate::FInstanceData_GT>(&local_b8,param_1);
  FNDIInputParam<UE::Math::TVector4<float>_>::FNDIInputParam<UE::Math::TVector4<float>_>
            ((FNDIInputParam<UE::Math::TVector4<float>_> *)local_a8,param_1);
  local_res8 = *(FWeakObjectPtr *)local_b8.Ptr;
  fVar1 = *(float *)local_a8._0_8_;
  fVar2 = *(float *)local_a8._24_8_;
  fVar3 = *local_78;
  fVar4 = *local_60;
  bVar7 = FWeakObjectPtr::IsValid(&local_res8);
  FVar6 = local_res8;
  if (bVar7) {
    local_a8._0_8_ = (float *)0x0;
    local_a8._40_8_ = FMemory::Malloc(0x30,0x10);
    *(undefined ***)local_a8._40_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`NDIMIDPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
          _vftable_;
    *(FWeakObjectPtr *)(local_a8._40_8_ + 0x10) = FVar6;
    *(undefined8 *)(local_a8._40_8_ + 0x18) = uVar5;
    *(float *)(local_a8._40_8_ + 0x20) = fVar1;
    *(float *)(local_a8._40_8_ + 0x24) = fVar2;
    *(float *)(local_a8._40_8_ + 0x28) = fVar3;
    *(float *)(local_a8._40_8_ + 0x2c) = fVar4;
    if ((FWeakObjectPtr *)(local_a8._40_8_ + 0x10) != (FWeakObjectPtr *)0x0) {
      local_a8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`NDIMIDPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,void>::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_a8);
  }
  return;
}

// CanExecuteOnTarget @ 1491b6cb0

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::CanExecuteOnTarget
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// CopyToInternal @ 1491b7870

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::CopyToInternal
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UMaterialInstanceDynamic *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->DefaultMaterialInst).field0_0x0.DebugPtr,
         pUVar2 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UMaterialInstanceDynamic>_u_0 *)(param_1 + 1) =
           (this->DefaultMaterialInst).field0_0x0;
      param_1[1]._padding_ = (longlong)(this->InstancedMaterialParamBinding).ResolvedParameter.Name;
      *(int *)&param_1[1]._padding_ =
           (this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex
      ;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 1491be330

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
UNiagaraDataInterfaceMaterialInstanceDynamic::DestroyPerInstanceData
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  return;
}

// Equals @ 1491c0e30

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::Equals
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceMaterialInstanceDynamic_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if ((((UMaterialInstanceDynamic *)param_1[1]._padding_ ==
          (this->DefaultMaterialInst).field0_0x0.DebugPtr) &&
        ((FName)param_1[1]._padding_ == (this->InstancedMaterialParamBinding).ResolvedParameter.Name
        )) && ((int)param_1[1]._padding_ ==
               (this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle.
               RegisteredTypeIndex)) {
      return true;
    }
  }
  return false;
}

// GetFunctions @ 1491c8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001491c85d6) */
/* WARNING: Removing unreachable block (ram,0x0001491c8481) */
/* WARNING: Removing unreachable block (ram,0x0001491c8829) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::GetFunctions
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,
          TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  FNiagaraTypeDefinitionHandle local_2c0 [2];
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [8];
  FNiagaraTypeDefinitionHandle local_2a0 [2];
  ForAnyElementType local_298;
  undefined8 local_290;
  undefined1 local_288 [8];
  FNiagaraTypeDefinitionHandle local_280 [2];
  ForAnyElementType local_278;
  undefined8 local_270;
  TObjectPtr<UObject>_u_0 local_268;
  undefined2 local_260;
  undefined1 local_25e;
  undefined8 local_25c;
  undefined4 local_254;
  TKeyInitializer<FName_&&> local_250;
  FName *local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228 [2];
  undefined1 local_218 [72];
  undefined1 local_1d0 [32];
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ForElementType<FSetElementId> local_190;
  int local_188;
  undefined1 local_178 [136];
  void *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [136];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_218._48_4_ = local_218._48_4_ & 0xfffff816 | 0x16;
  local_218._0_4_ = 0;
  local_218._4_4_ = 0;
  local_218._8_8_ = (FNiagaraVariable *)0x0;
  local_218._16_4_ = 0;
  local_218._20_4_ = 0;
  local_218._24_8_ = (FScriptContainerElement *)0x0;
  local_218._32_4_ = 0;
  local_218._36_4_ = 0;
  local_218._40_4_ = 0;
  local_218._44_4_ = 0;
  local_218._52_4_ = 0;
  local_218._56_2_ = 0;
  local_218._60_4_ = -1;
  local_218._64_2_ = -1;
  local_218._66_2_ = -1;
  local_1d0._0_8_ = (FScriptContainerElement *)0x0;
  local_1d0._8_8_ = 0;
  local_1b0 = (void *)0x0;
  local_1a8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_1a0 = _UNK_150631d98;
  local_190 = (ForElementType<FSetElementId>)0x0;
  local_188 = 0;
  local_248 = ::FName::FName(local_228,"Parameter Name");
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_1d0,&local_250,(bool *)&local_248);
  ::FName::FName(&local_240,L"MID");
  local_268 = (TObjectPtr<UObject>_u_0)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_268.DebugPtr != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable(local_268.DebugPtr);
  }
  local_25e = 0;
  local_260 = 1;
  local_25c = 0xffffffffffffffff;
  local_254 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_268.ObjectPtr);
  local_2c8._0_4_ = local_240.ComparisonIndex.Value;
  local_2c8._4_4_ = local_240.Number;
  local_2c0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_2c0,(FNiagaraTypeDefinition *)&local_268.ObjectPtr);
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0._0_4_ = 0;
  local_2b0._4_4_ = 0;
  if ((((ulonglong)local_218._8_8_ <= (FNiagaraVariable *)local_2c8) &&
      ((FScriptContainerElement *)local_2c8 <
       (FScriptContainerElement *)(local_218._8_8_ + (longlong)(int)local_218._20_4_ * 0x20))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = local_218._16_4_;
  if (local_218._16_4_ == local_218._20_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(local_218 + 8),(int *)(local_218 + 0x14));
  }
  local_218._16_4_ = iVar4 + 1;
  pFVar5 = (FScriptContainerElement *)(local_218._8_8_ + (longlong)iVar4 * 0x20);
  *(undefined1 (*) [8])&pFVar5->field_0x0 = local_2c8;
  *(int *)(pFVar5 + 8) = local_2c0[0].RegisteredTypeIndex;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_2b8.Data;
  *(int *)(pFVar5 + 0x18) = (int)local_2b0;
  *(int *)(pFVar5 + 0x1c) = local_2b0._4_4_;
  local_2b0._0_4_ = 0;
  local_2b0._4_4_ = 0;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  FNiagaraFunctionSignature::FNiagaraFunctionSignature
            ((FNiagaraFunctionSignature *)local_178,(FNiagaraFunctionSignature *)local_218);
  local_178._0_4_ = NDIMIDPrivate::SetScalarParameterFuncName.ComparisonIndex.Value;
  local_178._4_4_ = NDIMIDPrivate::SetScalarParameterFuncName.Number;
  ::FName::FName(&local_238,L"Value");
  local_2a8._0_4_ = local_238.ComparisonIndex.Value;
  local_2a8._4_4_ = local_238.Number;
  local_2a0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_2a0,&FNiagaraTypeDefinition::FloatDef);
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290._0_4_ = 0;
  local_290._4_4_ = 0;
  if ((((ulonglong)local_178._8_8_ <= (FNiagaraVariable *)local_2a8) &&
      ((FScriptContainerElement *)local_2a8 <
       (FScriptContainerElement *)(local_178._8_8_ + (longlong)(int)local_178._20_4_ * 0x20))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_178._16_4_ == local_178._20_4_) {
    local_178._16_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,(ForAnyElementType *)(local_178 + 8),(int *)(local_178 + 0x14));
  }
  iVar4 = local_178._16_4_ + 1;
  pFVar5 = (FScriptContainerElement *)(local_178._8_8_ + (longlong)(int)local_178._16_4_ * 0x20);
  *(undefined1 (*) [8])&pFVar5->field_0x0 = local_2a8;
  *(int *)(pFVar5 + 8) = local_2a0[0].RegisteredTypeIndex;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_298.Data;
  *(int *)(pFVar5 + 0x18) = (int)local_290;
  *(int *)(pFVar5 + 0x1c) = local_290._4_4_;
  local_290._0_4_ = 0;
  local_290._4_4_ = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_178._16_4_ = iVar4;
  if (((pFVar5 <= (FScriptContainerElement *)local_178) &&
      ((FScriptContainerElement *)local_178 < pFVar5 + (longlong)param_1->ArrayMax * 0x98)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  FNiagaraFunctionSignature::FNiagaraFunctionSignature
            ((FNiagaraFunctionSignature *)
             ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x98),
             (FNiagaraFunctionSignature *)local_178);
  local_e8 = 0;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_178 + 0x48));
  if ((FScriptContainerElement *)local_178._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._24_8_);
  }
  DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_178._8_8_,local_178._16_4_);
  if ((FNiagaraVariable *)local_178._8_8_ != (FNiagaraVariable *)0x0) {
    FMemory::Free((void *)local_178._8_8_);
  }
  FNiagaraFunctionSignature::FNiagaraFunctionSignature
            ((FNiagaraFunctionSignature *)local_d8,(FNiagaraFunctionSignature *)local_218);
  local_d8._0_4_ = NDIMIDPrivate::SetVector4ParameterFuncName.ComparisonIndex.Value;
  local_d8._4_4_ = NDIMIDPrivate::SetVector4ParameterFuncName.Number;
  ::FName::FName(&local_230,L"Value");
  local_288._0_4_ = local_230.ComparisonIndex.Value;
  local_288._4_4_ = local_230.Number;
  local_280[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_280,&FNiagaraTypeDefinition::Vec4Def);
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270._0_4_ = 0;
  local_270._4_4_ = 0;
  if ((((ulonglong)local_d8._8_8_ <= (FNiagaraVariable *)local_288) &&
      ((FScriptContainerElement *)local_288 <
       (FScriptContainerElement *)(local_d8._8_8_ + (longlong)(int)local_d8._20_4_ * 0x20))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_d8._16_4_ == local_d8._20_4_) {
    local_d8._16_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x820,(ForAnyElementType *)(local_d8 + 8),(int *)(local_d8 + 0x14));
  }
  iVar4 = local_d8._16_4_ + 1;
  pFVar5 = (FScriptContainerElement *)(local_d8._8_8_ + (longlong)(int)local_d8._16_4_ * 0x20);
  *(undefined1 (*) [8])&pFVar5->field_0x0 = local_288;
  *(int *)(pFVar5 + 8) = local_280[0].RegisteredTypeIndex;
  *(undefined8 *)(pFVar5 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar5 + 0x10) = local_278.Data;
  *(int *)(pFVar5 + 0x18) = (int)local_270;
  *(int *)(pFVar5 + 0x1c) = local_270._4_4_;
  local_270._0_4_ = 0;
  local_270._4_4_ = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_d8._16_4_ = iVar4;
  if (((pFVar5 <= (FScriptContainerElement *)local_d8) &&
      ((FScriptContainerElement *)local_d8 < pFVar5 + (longlong)param_1->ArrayMax * 0x98)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  FNiagaraFunctionSignature::FNiagaraFunctionSignature
            ((FNiagaraFunctionSignature *)
             ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x98),
             (FNiagaraFunctionSignature *)local_d8);
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_d8 + 0x48));
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
  }
  DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_d8._8_8_,local_d8._16_4_);
  if ((FNiagaraVariable *)local_d8._8_8_ != (FNiagaraVariable *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  local_188 = 0;
  if (local_190 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_190);
  }
  iVar4 = SUB84(local_1d0._8_8_,4);
  local_1d0._8_8_ = local_1d0._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_1d0,0,(int *)(local_1d0 + 0xc));
  }
  uVar2 = local_1a8._4_4_;
  uStack_1a0 = 0xffffffff;
  local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_1a8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d0 + 0x10),0);
  }
  if (local_1b0 != (void *)0x0) {
    FMemory::Free(local_1b0);
  }
  if ((FScriptContainerElement *)local_1d0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d0._0_8_);
  }
  if ((FScriptContainerElement *)local_218._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_218._24_8_);
  }
  DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_218._8_8_,local_218._16_4_);
  if ((FNiagaraVariable *)local_218._8_8_ != (FNiagaraVariable *)0x0) {
    FMemory::Free((void *)local_218._8_8_);
  }
  return;
}

// GetMaterialInstance @ 1491c9050

/* WARNING: Removing unreachable block (ram,0x0001491c9111) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::GetMaterialInstance
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,FNiagaraSystemInstance *param_1)

{
  int iVar1;
  UMaterialInstanceDynamic *pUVar2;
  FNiagaraTypeDefinition *pFVar3;
  TObjectPtr<UObject> TVar4;
  UClass *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  longlong local_res8;
  undefined1 local_48 [24];
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pUVar6 = (this->DefaultMaterialInst).field0_0x0.DebugPtr;
  local_res8 = 0;
  if (((this->InstancedMaterialParamBinding).ResolvedParameter.Name != (FName)0x0) &&
     (pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(this->InstancedMaterialParamBinding).ResolvedParameter.TypeDefHandle),
     (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    local_48._0_4_ = -1;
    local_48._8_8_ = (FNiagaraParameterStore *)0x0;
    local_48._16_8_ = 0;
    local_30[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_30,&FNiagaraTypeDefinition::Vec4Def);
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20._0_4_ = 0;
    local_20._4_4_ = 0;
    TVar4 = FNiagaraParameterDirectBinding<UObject_*>::Init
                      ((FNiagaraParameterDirectBinding<UObject_*> *)local_48,
                       (FNiagaraParameterStore *)&local_res8,
                       (FNiagaraVariable *)&param_1->InstanceParameters);
    pUVar2 = *(UMaterialInstanceDynamic **)TVar4.field0_0x0;
    if (pUVar2 != (UMaterialInstanceDynamic *)0x0) {
      pUVar5 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pUVar6 = pUVar2;
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 1491c9de0

UClass * __cdecl UNiagaraDataInterfaceMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialInstanceDynamic",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceMaterialInstanceDynamic,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialInstanceDynamic>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialInstanceDynamic.InnerSingleton;
}

// GetVMExternalFunction @ 1491cc170

void __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,
          FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_1->Name == NDIMIDPrivate::SetScalarParameterFuncName) {
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *(undefined8 *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8);
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_a0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = uVar1;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_78);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_a8;
  }
  else {
    if (param_1->Name != NDIMIDPrivate::SetVector4ParameterFuncName) {
      return;
    }
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = *(undefined8 *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8);
    local_90 = (undefined1  [8])0x0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_88;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_88);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialInstanceDynamic::GetVMExternalFunction'::`9'::<lambda_2>_>
                 ::_vftable_;
      puVar4[3] = uVar1;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)&local_60);
    if ((local_88.DelegateSize != 0) &&
       (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_88.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_88.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_88.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_90;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 1491d11e0

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::HasPreSimulateTick
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this)

{
  return true;
}

// InitBindingMembers @ 1491d21a0

void __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::InitBindingMembers
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this)

{
  return;
}

// InitPerInstanceData @ 1491d21b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::InitPerInstanceData
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  UMaterialInstanceDynamic *local_res10 [3];
  
  *(undefined8 *)param_1 = 0;
  local_res10[0] = GetMaterialInstance(this,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0] != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res10);
  return true;
}

// PerInstanceDataSize @ 1491d5380

int __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::PerInstanceDataSize
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this)

{
  return 8;
}

// PerInstanceTick @ 1491d5420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::PerInstanceTick
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  UMaterialInstanceDynamic *local_res10 [3];
  
  local_res10[0] = GetMaterialInstance(this,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0] != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)local_res10);
  return false;
}

// PostInitProperties @ 1491d75b0

void __thiscall
UNiagaraDataInterfaceMaterialInstanceDynamic::PostInitProperties
          (UNiagaraDataInterfaceMaterialInstanceDynamic *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,
               AllowParameter|AllowEmitterVariable|AllowSystemVariable|AllowUserVariable);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceMaterialInstanceDynamic @ 1491e3580

void __cdecl
UNiagaraDataInterfaceMaterialInstanceDynamic::
StaticRegisterNativesUNiagaraDataInterfaceMaterialInstanceDynamic(void)

{
  return;
}

