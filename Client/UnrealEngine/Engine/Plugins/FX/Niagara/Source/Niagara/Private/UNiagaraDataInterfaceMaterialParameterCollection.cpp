// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticClass @ 149199610

UClass * __cdecl UNiagaraDataInterfaceMaterialParameterCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceMaterialParameterCollection
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialParameterCollection>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton;
}

// UNiagaraDataInterfaceMaterialParameterCollection @ 1491abd40

UNiagaraDataInterfaceMaterialParameterCollection * __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::UNiagaraDataInterfaceMaterialParameterCollection
          (UNiagaraDataInterfaceMaterialParameterCollection *this,FVTableHelper *param_1)

{
  int iVar1;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
  (this->DefaultCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->CollectionBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->CollectionBinding).ResolvedParameter.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->CollectionBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->CollectionBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar1;
  return this;
}

// UNiagaraDataInterfaceMaterialParameterCollection @ 1491abd90

UNiagaraDataInterfaceMaterialParameterCollection * __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::UNiagaraDataInterfaceMaterialParameterCollection
          (UNiagaraDataInterfaceMaterialParameterCollection *this,FObjectInitializer *param_1)

{
  int iVar1;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
  (this->DefaultCollection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->CollectionBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->CollectionBinding).ResolvedParameter.Name.Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->CollectionBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->CollectionBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceMaterialParameterCollection @ 1491ad530

void __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::~UNiagaraDataInterfaceMaterialParameterCollection
          (UNiagaraDataInterfaceMaterialParameterCollection *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceMaterialParameterCollection__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1491b1460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::__l5::<lambda_1>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> local_58;
  code *local_48 [2];
  int local_38 [6];
  undefined8 *local_20;
  
  uVar2 = *(undefined8 *)this;
  VectorVM::FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>::
  FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>(&local_58,param_1);
  local_38[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar6 = local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_res8 = ((local_58.Ptr)->MPC).WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  FVar3 = local_res8;
  if (bVar4) {
    fVar1 = pfVar5[iVar6];
    local_48[0] = (code *)0x0;
    local_20 = FMemory::Malloc(0x20,8);
    *local_20 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`NDIMPCPrivate::VMSetScalarParameter'::`5'::<lambda_1>,1,1>::
                 _vftable_;
    *(FWeakObjectPtr *)(local_20 + 1) = FVar3;
    local_20[2] = uVar2;
    *(float *)(local_20 + 3) = fVar1;
    if ((FWeakObjectPtr *)(local_20 + 1) != (FWeakObjectPtr *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`NDIMPCPrivate::VMSetScalarParameter'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_48);
  }
  return;
}

// operator() @ 1491b3290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::__l9::<lambda_2>::
operator()(void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  FWeakObjectPtr local_res8;
  FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT> local_b8;
  undefined1 local_a8 [48];
  float *local_78;
  float *local_60;
  
  uVar5 = *(undefined8 *)this;
  VectorVM::FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>::
  FUserPtrHandler<NDIMPCPrivate::FInstanceData_GT>(&local_b8,param_1);
  FNDIInputParam<UE::Math::TVector4<float>_>::FNDIInputParam<UE::Math::TVector4<float>_>
            ((FNDIInputParam<UE::Math::TVector4<float>_> *)local_a8,param_1);
  local_res8 = ((local_b8.Ptr)->MPC).WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(&local_res8);
  FVar6 = local_res8;
  if (bVar7) {
    fVar1 = *(float *)local_a8._0_8_;
    fVar2 = *(float *)local_a8._24_8_;
    fVar3 = *local_78;
    fVar4 = *local_60;
    local_a8._0_8_ = (float *)0x0;
    local_a8._40_8_ = FMemory::Malloc(0x30,0x10);
    *(undefined ***)local_a8._40_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`NDIMPCPrivate::VMSetVector4Parameter'::`5'::<lambda_1>,1,1>::
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
           TFunctionRefCaller<`NDIMPCPrivate::VMSetVector4Parameter'::__l5::<lambda_1>,void>::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_a8);
  }
  return;
}

// CanExecuteOnTarget @ 1491b6cc0

bool __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::CanExecuteOnTarget
          (UNiagaraDataInterfaceMaterialParameterCollection *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// CopyToInternal @ 1491b7980

bool __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::CopyToInternal
          (UNiagaraDataInterfaceMaterialParameterCollection *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UMaterialParameterCollection *pUVar2;
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
         (pUVar2 = (this->DefaultCollection).field0_0x0.DebugPtr,
         pUVar2 != (UMaterialParameterCollection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<UMaterialParameterCollection>_u_0 *)(param_1 + 1) =
           (this->DefaultCollection).field0_0x0;
      param_1[1]._padding_ = (longlong)(this->CollectionBinding).ResolvedParameter.Name;
      *(int *)&param_1[1]._padding_ =
           (this->CollectionBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 1491be340

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
UNiagaraDataInterfaceMaterialParameterCollection::DestroyPerInstanceData
          (UNiagaraDataInterfaceMaterialParameterCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Equals @ 1491c0f30

bool __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::Equals
          (UNiagaraDataInterfaceMaterialParameterCollection *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceMaterialParameterCollection_const_>(&local_28);
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
    if ((((UMaterialParameterCollection *)param_1[1]._padding_ ==
          (this->DefaultCollection).field0_0x0.DebugPtr) &&
        ((FName)param_1[1]._padding_ == (this->CollectionBinding).ResolvedParameter.Name)) &&
       ((int)param_1[1]._padding_ ==
        (this->CollectionBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex)) {
      return true;
    }
  }
  return false;
}

// GetFunctions @ 1491c8a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001491c8de0) */
/* WARNING: Removing unreachable block (ram,0x0001491c8c60) */
/* WARNING: Removing unreachable block (ram,0x0001491c8f58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::GetFunctions
          (UNiagaraDataInterfaceMaterialParameterCollection *this,
          TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FNiagaraFunctionSignature *pFVar6;
  FScriptContainerElement *pFVar7;
  FName *pFVar8;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1a8 [8];
  FNiagaraTypeDefinitionHandle local_1a0 [2];
  ForAnyElementType local_198;
  undefined8 local_190;
  FName local_188;
  FNiagaraTypeDefinitionHandle local_180 [2];
  FName local_178;
  undefined8 local_170;
  FName local_168;
  FNiagaraTypeDefinitionHandle local_160 [2];
  FName local_158;
  undefined8 local_150;
  TObjectPtr<UObject>_u_0 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  undefined8 local_13c;
  undefined4 local_134;
  TKeyInitializer<FName_&&> local_130;
  FName *local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FText local_100;
  FText local_f0;
  undefined1 local_d8 [72];
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_d8._48_4_ = local_d8._48_4_ & 0xfffff816 | 0x16;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d8._8_8_ = (FNiagaraVariable *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_8_ = (FScriptContainerElement *)0x0;
  local_d8._32_4_ = 0;
  local_d8._36_4_ = 0;
  local_d8._40_4_ = 0;
  local_d8._44_4_ = 0;
  local_d8._52_4_ = 0;
  local_d8._56_2_ = 0;
  local_d8._60_4_ = -1;
  local_d8._64_2_ = -1;
  local_d8._66_2_ = -1;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_128 = ::FName::FName(&local_108,"Parameter Name");
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_90,&local_130,(bool *)&local_128);
  ::FName::FName(&local_120,L"MPC DI");
  local_148 = (TObjectPtr<UObject>_u_0)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148.DebugPtr != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable(local_148.DebugPtr);
  }
  local_13e = 0;
  local_140 = 1;
  local_13c = 0xffffffffffffffff;
  local_134 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_148.ObjectPtr);
  local_1a8._0_4_ = local_120.ComparisonIndex.Value;
  local_1a8._4_4_ = local_120.Number;
  local_1a0[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (local_1a0,(FNiagaraTypeDefinition *)&local_148.ObjectPtr);
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190._0_4_ = 0;
  local_190._4_4_ = 0;
  if ((((ulonglong)local_d8._8_8_ <= (FNiagaraVariable *)local_1a8) &&
      ((FScriptContainerElement *)local_1a8 <
       (FScriptContainerElement *)(local_d8._8_8_ + (longlong)(int)local_d8._20_4_ * 0x20))) &&
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
  iVar5 = local_d8._16_4_;
  if (local_d8._16_4_ == local_d8._20_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(local_d8 + 8),(int *)(local_d8 + 0x14));
  }
  local_d8._16_4_ = iVar5 + 1;
  pFVar7 = (FScriptContainerElement *)(local_d8._8_8_ + (longlong)iVar5 * 0x20);
  *(undefined1 (*) [8])&pFVar7->field_0x0 = local_1a8;
  *(int *)(pFVar7 + 8) = local_1a0[0].RegisteredTypeIndex;
  *(undefined8 *)(pFVar7 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x10) = local_198.Data;
  *(int *)(pFVar7 + 0x18) = (int)local_190;
  *(int *)(pFVar7 + 0x1c) = local_190._4_4_;
  local_190._0_4_ = 0;
  local_190._4_4_ = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar6 = FNiagaraFunctionSignature::FNiagaraFunctionSignature
                     ((FNiagaraFunctionSignature *)
                      ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x98),
                      (FNiagaraFunctionSignature *)local_d8);
  pFVar6->Name = NDIMPCPrivate::SetScalarParameterFuncName;
  FText::AsLocalizable_Advanced_LocText
            (&local_100,L"NiagaraDataInterfaceMaterialParameterCollection",
             L"SetScalarParameterFuncDesc",
             L"Set a scalar parameter value on the bound parameter collection");
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_118,L"Value");
  local_188 = local_118;
  local_180[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_180,&FNiagaraTypeDefinition::FloatDef);
  pFVar8 = (FName *)(pFVar6->Inputs).AllocatorInstance.Data;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  local_170 = 0;
  if (((pFVar8 <= &local_188) && (&local_188 < pFVar8 + (longlong)(pFVar6->Inputs).ArrayMax * 4)) &&
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
  iVar5 = (pFVar6->Inputs).ArrayNum;
  piVar1 = &(pFVar6->Inputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(pFVar6->Inputs).AllocatorInstance,piVar1);
  }
  (pFVar6->Inputs).ArrayNum = iVar5 + 1;
  pFVar8 = (FName *)((pFVar6->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
  *pFVar8 = local_188;
  pFVar8[1].ComparisonIndex.Value = local_180[0].RegisteredTypeIndex;
  pFVar8[2].ComparisonIndex = 0;
  pFVar8[2].Number = 0;
  pFVar8[2] = local_178;
  pFVar8[3].ComparisonIndex.Value = (uint)local_170;
  pFVar8[3].Number = local_170._4_4_;
  local_170 = 0;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar6 = FNiagaraFunctionSignature::FNiagaraFunctionSignature
                     ((FNiagaraFunctionSignature *)
                      ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x98),
                      (FNiagaraFunctionSignature *)local_d8);
  pFVar6->Name = NDIMPCPrivate::SetVector4ParameterFuncName;
  FText::AsLocalizable_Advanced_LocText
            (&local_f0,L"NiagaraDataInterfaceMaterialParameterCollection",
             L"SetVector4ParameterFuncDesc",
             L"Set a vector 4 parameter value on the bound parameter collection");
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_110,L"Value");
  local_168 = local_110;
  local_160[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_160,&FNiagaraTypeDefinition::Vec4Def);
  pFVar8 = (FName *)(pFVar6->Inputs).AllocatorInstance.Data;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_150 = 0;
  if (((pFVar8 <= &local_168) && (&local_168 < pFVar8 + (longlong)(pFVar6->Inputs).ArrayMax * 4)) &&
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
  iVar5 = (pFVar6->Inputs).ArrayNum;
  piVar1 = &(pFVar6->Inputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(pFVar6->Inputs).AllocatorInstance,piVar1);
  }
  (pFVar6->Inputs).ArrayNum = iVar5 + 1;
  pFVar8 = (FName *)((pFVar6->Inputs).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
  *pFVar8 = local_168;
  pFVar8[1].ComparisonIndex.Value = local_160[0].RegisteredTypeIndex;
  pFVar8[2].ComparisonIndex = 0;
  pFVar8[2].Number = 0;
  pFVar8[2] = local_158;
  pFVar8[3].ComparisonIndex.Value = (uint)local_150;
  pFVar8[3].Number = local_150._4_4_;
  local_150 = 0;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  iVar5 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar3 = local_68._4_4_;
  uStack_60 = 0xffffffff;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
  }
  DestructItems<FNiagaraVariable,int>((FNiagaraVariable *)local_d8._8_8_,local_d8._16_4_);
  if ((FNiagaraVariable *)local_d8._8_8_ != (FNiagaraVariable *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  return;
}

// GetPrivateStaticClass @ 1491c9ea0

UClass * __cdecl UNiagaraDataInterfaceMaterialParameterCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceMaterialParameterCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceMaterialParameterCollection
               ,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceMaterialParameterCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceMaterialParameterCollection>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceMaterialParameterCollection.InnerSingleton;
}

// GetVMExternalFunction @ 1491cc420

void __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction
          (UNiagaraDataInterfaceMaterialParameterCollection *this,
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
  
  if (param_1->Name == NDIMPCPrivate::SetScalarParameterFuncName) {
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
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::`5'::<lambda_1>_>
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
    if (param_1->Name != NDIMPCPrivate::SetVector4ParameterFuncName) {
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
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceMaterialParameterCollection::GetVMExternalFunction'::`9'::<lambda_2>_>
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

// HasPreSimulateTick @ 1491d11f0

bool __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::HasPreSimulateTick
          (UNiagaraDataInterfaceMaterialParameterCollection *this)

{
  return true;
}

// InitPerInstanceData @ 1491d2200

/* WARNING: Removing unreachable block (ram,0x0001491d22a1) */
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
UNiagaraDataInterfaceMaterialParameterCollection::InitPerInstanceData
          (UNiagaraDataInterfaceMaterialParameterCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  UMaterialParameterCollection *pUVar1;
  int iVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 FVar4;
  UMaterialParameterCollection *pUVar5;
  UMaterialParameterCollection *local_res8;
  UMaterialParameterCollectionInstance *local_res10 [2];
  
  pUVar5 = (UMaterialParameterCollection *)0x0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x18),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x18) = iVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (param_1,(FNiagaraParameterStore *)(local_res10 + 1),
             (FNiagaraVariable *)&param_2->InstanceParameters);
  iVar2 = *(int *)param_1;
  pUVar1 = (this->DefaultCollection).field0_0x0.DebugPtr;
  if (iVar2 == -1) {
LAB_1491d234e:
    pUVar5 = pUVar1;
    if (pUVar1 == (UMaterialParameterCollection *)0x0) {
      return true;
    }
  }
  else {
    if (((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x48))) &&
       (pUVar5 = *(UMaterialParameterCollection **)
                  (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x40) + (longlong)iVar2 * 8)
       , UE::GC::GIsIncrementalReachabilityPending != false)) {
      if (pUVar5 == (UMaterialParameterCollection *)0x0) goto LAB_1491d234e;
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if (pUVar5 == (UMaterialParameterCollection *)0x0) goto LAB_1491d234e;
    pUVar3 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      local_res8 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FVar4.Handle = (UObject *)&local_res8;
      goto LAB_1491d237f;
    }
    pUVar3 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) goto LAB_1491d234e;
  }
  local_res10[0] = UWorld::GetParameterCollectionInstance(param_2->World,pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10[0] != (UMaterialParameterCollectionInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  FVar4.Handle = (UObject *)local_res10;
LAB_1491d237f:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x38),(FObjectPtr)FVar4);
  return true;
}

// PerInstanceDataSize @ 1491d5390

int __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::PerInstanceDataSize
          (UNiagaraDataInterfaceMaterialParameterCollection *this)

{
  return 0x40;
}

// PerInstanceTick @ 1491d5470

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
UNiagaraDataInterfaceMaterialParameterCollection::PerInstanceTick
          (UNiagaraDataInterfaceMaterialParameterCollection *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  NDIMPCPrivate::FInstanceData_GT::ResolveParameterCollection
            (param_1,param_2,(this->DefaultCollection).field0_0x0.DebugPtr);
  return false;
}

// PostInitProperties @ 1491d7630

void __thiscall
UNiagaraDataInterfaceMaterialParameterCollection::PostInitProperties
          (UNiagaraDataInterfaceMaterialParameterCollection *this)

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

// StaticRegisterNativesUNiagaraDataInterfaceMaterialParameterCollection @ 1491e3590

void __cdecl
UNiagaraDataInterfaceMaterialParameterCollection::
StaticRegisterNativesUNiagaraDataInterfaceMaterialParameterCollection(void)

{
  return;
}

