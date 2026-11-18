// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 34

// StaticClass @ 149199350

UClass * __cdecl UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRigidMeshCollisionQuery",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton;
}

// UNiagaraDataInterfaceRigidMeshCollisionQuery @ 1491ac910

UNiagaraDataInterfaceRigidMeshCollisionQuery * __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::UNiagaraDataInterfaceRigidMeshCollisionQuery
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->OnlyUseMoveable = true;
  this->UseComplexCollisions = false;
  this->bFilterByObjectType = false;
  this->GlobalSearchAllowed = false;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
  (this->ActorTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTags).ArrayNum = 0;
  (this->ActorTags).ArrayMax = 0;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->SourceActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceActors).ArrayNum = 0;
  (this->SourceActors).ArrayMax = 0;
  this->GlobalSearchForced = false;
  this->GlobalSearchFallback_Unscripted = false;
  this->MaxNumPrimitives = 100;
  return this;
}

// UNiagaraDataInterfaceRigidMeshCollisionQuery @ 1491ac970

UNiagaraDataInterfaceRigidMeshCollisionQuery * __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::UNiagaraDataInterfaceRigidMeshCollisionQuery
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->OnlyUseMoveable = true;
  this->UseComplexCollisions = false;
  this->bFilterByObjectType = false;
  this->GlobalSearchAllowed = false;
  this->GlobalSearchForced = false;
  this->GlobalSearchFallback_Unscripted = false;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
  (this->ActorTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorTags).ArrayNum = 0;
  (this->ActorTags).ArrayMax = 0;
  (this->ComponentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTags).ArrayNum = 0;
  (this->ComponentTags).ArrayMax = 0;
  (this->SourceActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceActors).ArrayNum = 0;
  (this->SourceActors).ArrayMax = 0;
  this->MaxNumPrimitives = 100;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNDIRigidMeshCollisionProxy__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceRigidMeshCollisionQuery @ 1491ad7b0

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::~UNiagaraDataInterfaceRigidMeshCollisionQuery
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceRigidMeshCollisionQuery__6B_;
  DestructItems<TSoftObjectPtr<AActor>,int>
            ((TSoftObjectPtr<AActor> *)(this->SourceActors).AllocatorInstance.Data,
             (this->SourceActors).ArrayNum);
  pFVar1 = (this->SourceActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 1491b0c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
`UNiagaraDataInterfaceRigidMeshCollisionQuery::DrawDebugHud'::__l2::<lambda_1>::operator()
          (void *this,TMatrix<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double *pdVar4;
  FScriptContainerElement *pFVar5;
  double local_88 [11];
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_88[1] = _UNK_150689518;
  local_88[2] = 0.0;
  local_88[3] = 0.0;
  local_88[4] = ___xmm_3ff00000000000000000000000000000;
  local_88[5] = _UNK_15061cbc8;
  local_88[6] = 0.0;
  local_88[7] = 0.0;
  local_88[8] = 0.0;
  local_88[9] = 0.0;
  local_88[10] = ___xmm_00000000000000003ff0000000000000;
  dStack_30 = _UNK_150689518;
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = ___xmm_3ff00000000000000000000000000000;
  dStack_10 = _UNK_15061cbc8;
  lVar3 = 3;
  pdVar4 = local_88 + 1;
  pFVar5 = (param_1->AllocatorInstance).Data + (ulonglong)(uint)(param_2 * 3) * 0x10 + 8;
  do {
    fVar1 = *(float *)(pFVar5 + -4);
    pdVar4[-1] = (double)*(float *)(pFVar5 + -8);
    fVar2 = *(float *)pFVar5;
    *pdVar4 = (double)fVar1;
    fVar1 = *(float *)(pFVar5 + 4);
    pdVar4[1] = (double)fVar2;
    pdVar4[2] = (double)fVar1;
    lVar3 = lVar3 + -1;
    pdVar4 = pdVar4 + 4;
    pFVar5 = pFVar5 + 0x10;
  } while (lVar3 != 0);
  __return_storage_ptr__->M[0][0] = ___xmm_00000000000000003ff0000000000000;
  __return_storage_ptr__->M[0][1] = local_88[4];
  __return_storage_ptr__->M[0][2] = local_88[8];
  __return_storage_ptr__->M[0][3] = local_28;
  __return_storage_ptr__->M[1][0] = local_88[1];
  __return_storage_ptr__->M[1][1] = local_88[5];
  __return_storage_ptr__->M[1][2] = local_88[9];
  __return_storage_ptr__->M[1][3] = dStack_20;
  __return_storage_ptr__->M[2][0] = local_88[2];
  __return_storage_ptr__->M[2][1] = local_88[6];
  __return_storage_ptr__->M[2][2] = local_88[10];
  __return_storage_ptr__->M[2][3] = local_18;
  __return_storage_ptr__->M[3][0] = local_88[3];
  __return_storage_ptr__->M[3][1] = local_88[7];
  __return_storage_ptr__->M[3][2] = dStack_30;
  __return_storage_ptr__->M[3][3] = dStack_10;
  return __return_storage_ptr__;
}

// operator() @ 1491b1c80

void __thiscall
`UNiagaraDataInterfaceRigidMeshCollisionQuery::ProvidePerInstanceDataForRenderThread'::__l8::
<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  
  if (param_1->ArrayNum < **(int **)this) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Current.Num() >= TransformVectorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x84f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2->ArrayNum < **(int **)this) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Previous.Num() >= TransformVectorCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x850,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar6 = **(int **)this * 2;
  if (-1 < (int)uVar6) {
    piVar1 = &param_3->ArrayMax;
    piVar2 = &param_3->ArrayNum;
    *piVar2 = 0;
    if (param_3->ArrayMax < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar6,&param_3->AllocatorInstance,0,piVar1);
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar3 = **(int **)this;
    if ((pFVar4 == (FScriptContainerElement *)0x0) && (iVar3 != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,iVar3,&param_3->AllocatorInstance,piVar2,piVar1);
    if (iVar3 != 0) {
      memcpy((param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x10,pFVar4,(longlong)iVar3 << 4)
      ;
    }
    pFVar4 = (param_2->AllocatorInstance).Data;
    iVar3 = **(int **)this;
    if ((pFVar4 == (FScriptContainerElement *)0x0) && (iVar3 != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,0x10,iVar3,&param_3->AllocatorInstance,piVar2,piVar1);
    if (iVar3 != 0) {
      memcpy((param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x10,pFVar4,(longlong)iVar3 << 4)
      ;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// BuildShaderParameters @ 1491b61d0

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::BuildShaderParameters
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIRigidMeshCollisionLocal::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)pFVar6 = pwVar7;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x70;
  pFVar5 = UE::FXRenderingUtils::DistanceFields::GetObjectBufferParametersMetadata();
  FNiagaraShaderParametersBuilder::AddIncludedStruct(param_1,pFVar5);
  pFVar5 = UE::FXRenderingUtils::DistanceFields::GetAtlasParametersMetadata();
  FNiagaraShaderParametersBuilder::AddIncludedStruct(param_1,pFVar5);
  return;
}

// CalculateTickGroup @ 1491b62c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ETickingGroup __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::CalculateTickGroup
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,void *param_1)

{
  longlong *plVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ETickingGroup EVar6;
  ETickingGroup EVar7;
  TArrayView<FName_const_,int> *pTVar8;
  ETickingGroup EVar9;
  byte bVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_338 [32];
  undefined1 local_308;
  undefined1 local_307 [15];
  ForElementType<AActor_*> local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  ForElementType<AActor_*> local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  TArrayView<FName_const_,int> local_2d8;
  TArrayView<AActor_*_const,int> local_2c8;
  TArrayView<FName_const_,int> local_2b8;
  TArrayView<AActor_*_const,int> local_2a8;
  TArrayView<FName_const_,int> local_298;
  TArrayView<FName_const_,int> local_288;
  ForElementType<AActor_*> local_278;
  int local_1f0;
  int local_1ec;
  undefined1 local_1e8 [192];
  longlong *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined1 local_118 [192];
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if (param_1 == (void *)0x0) {
    EVar6 = TG_PrePhysics;
  }
  else {
    uVar12 = *(int *)((longlong)param_1 + 0x38) + *(int *)((longlong)param_1 + 0x18);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_4c = 0x18;
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_11c = 0x18;
    local_278.SecondaryData = (ForElementType<AActor_*>)0x0;
    local_1f0 = 0;
    local_1ec = 0x10;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (0x10 < (int)uVar12) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                (8,8,uVar12,&local_278,0,&local_1ec);
    }
    Algo::
    ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
              ((TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               &local_278);
    Algo::
    ForEach<TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_&,_FNDIRigidMeshCollisionData::MergeActors_::__l2::<lambda_1>_>
              ((TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30),
               (TArray<AActor_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
               &local_278);
    pTVar8 = TArrayView<FName_const_,int>::
             TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_298,&this->ComponentTags);
    iStack_2f0 = local_1f0;
    local_2d8.DataPtr = pTVar8->DataPtr;
    local_2d8.ArrayNum = pTVar8->ArrayNum;
    local_2d8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    local_2f8 = (ForElementType<AActor_*>)&local_278;
    if (local_278.SecondaryData != (ForElementType<AActor_*>)0x0) {
      local_2f8 = local_278.SecondaryData;
    }
    if ((local_1f0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    local_2c8._12_4_ = uStack_2ec;
    local_2c8.ArrayNum = iStack_2f0;
    local_2c8.DataPtr = (AActor **)local_2f8;
    NDIRigidMeshCollisionLocal::
    GenerateComponentList<UStaticMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<UStaticMeshComponent>_::__l2::<lambda_1>_>
              (&local_2c8,&local_2d8,(<lambda_1>)0x0,
               (TInlineComponentArray<UStaticMeshComponent_*,24> *)local_118);
    pTVar8 = TArrayView<FName_const_,int>::
             TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_288,&this->ComponentTags);
    iStack_2e0 = local_1f0;
    local_2b8.DataPtr = pTVar8->DataPtr;
    local_2b8.ArrayNum = pTVar8->ArrayNum;
    local_2b8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    local_2e8 = (ForElementType<AActor_*>)&local_278;
    if (local_278.SecondaryData != (ForElementType<AActor_*>)0x0) {
      local_2e8 = local_278.SecondaryData;
    }
    if ((local_1f0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    local_2a8._12_4_ = uStack_2dc;
    local_2a8.ArrayNum = iStack_2e0;
    local_2a8.DataPtr = (AActor **)local_2e8;
    NDIRigidMeshCollisionLocal::
    GenerateComponentList<USkeletalMeshComponent,_NDIRigidMeshCollisionLocal::CollectComponents<USkeletalMeshComponent>_::__l2::<lambda_1>_>
              (&local_2a8,&local_2b8,(<lambda_1>)0x0,
               (TInlineComponentArray<USkeletalMeshComponent_*,24> *)local_1e8);
    uVar12 = local_50;
    uVar13 = (ulonglong)(int)local_50;
    plVar11 = (longlong *)local_118;
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
    }
    plVar1 = plVar11 + uVar13;
    EVar6 = TG_PrePhysics;
    while( true ) {
      if ((uint)uVar13 != uVar12) {
        `TCheckedPointerIterator<UStaticMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_308);
        uVar13 = (ulonglong)local_50;
      }
      uVar4 = local_120;
      if (plVar11 == plVar1) break;
      bVar2 = *(byte *)(*plVar11 + 0x40);
      bVar10 = *(byte *)(*plVar11 + 0x41);
      if (bVar10 < bVar2) {
        bVar10 = bVar2;
      }
      EVar9 = TG_LastDemotable;
      if (bVar10 + TG_StartPhysics < TG_LastDemotable) {
        EVar9 = bVar10 + TG_StartPhysics;
      }
      EVar7 = TG_PrePhysics;
      if (EVar9 != TG_PrePhysics) {
        EVar7 = EVar9;
      }
      if (EVar7 < EVar6) {
        EVar7 = EVar6;
      }
      plVar11 = plVar11 + 1;
      EVar6 = EVar7;
    }
    uVar13 = (ulonglong)(int)local_120;
    plVar11 = (longlong *)local_1e8;
    if (local_128 != (longlong *)0x0) {
      plVar11 = local_128;
    }
    plVar1 = plVar11 + uVar13;
    while( true ) {
      if ((uint)uVar13 != uVar4) {
        `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_307);
        uVar13 = (ulonglong)local_120;
      }
      if (plVar11 == plVar1) break;
      bVar2 = *(byte *)(*plVar11 + 0x40);
      bVar10 = *(byte *)(*plVar11 + 0x41);
      if (bVar10 < bVar2) {
        bVar10 = bVar2;
      }
      EVar9 = TG_LastDemotable;
      if (bVar10 + TG_StartPhysics < TG_LastDemotable) {
        EVar9 = bVar10 + TG_StartPhysics;
      }
      EVar7 = TG_PrePhysics;
      if (EVar9 != TG_PrePhysics) {
        EVar7 = EVar9;
      }
      if (EVar7 < EVar6) {
        EVar7 = EVar6;
      }
      plVar11 = plVar11 + 1;
      EVar6 = EVar7;
    }
    if (local_278.SecondaryData != (ForElementType<AActor_*>)0x0) {
      FMemory::Free((void *)local_278.SecondaryData);
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return EVar6;
}

// CanExecuteOnTarget @ 1491b6d50

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::CanExecuteOnTarget
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 1491b8510

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::CopyToInternal
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,UNiagaraDataInterface *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_28;
  FString local_18;
  
  bVar6 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar6) {
    return false;
  }
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar8 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery>(&local_28);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar7 = StaticClass();
  iVar3 = (int)pUVar7->_padding_;
  if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar7->_padding_)) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(param_1 + 1),&this->ActorTags);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
               &this->ComponentTags);
    plVar1 = &param_1[1]._padding_;
    if ((TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)plVar1 != &this->SourceActors)
    {
      DestructItems<TSoftObjectPtr<AActor>,int>
                ((TSoftObjectPtr<AActor> *)*plVar1,*(int *)&param_1[1].Proxy.Ptr);
      iVar3 = (this->SourceActors).ArrayNum;
      piVar2 = (int *)((longlong)&param_1[1].Proxy.Ptr + 4);
      pFVar5 = (this->SourceActors).AllocatorInstance.Data;
      iVar4 = *piVar2;
      *(int *)&param_1[1].Proxy.Ptr = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
        ConstructItems<TSoftObjectPtr<AActor>,TSoftObjectPtr<AActor>,int>
                  ((void *)*plVar1,(TSoftObjectPtr<AActor> *)pFVar5,iVar3);
      }
    }
    param_1[1].field_0x30 = this->OnlyUseMoveable;
    param_1[1].field_0x31 = this->UseComplexCollisions;
    param_1[1].field_0x32 = this->bFilterByObjectType;
    param_1[1].field_0x33 = this->GlobalSearchAllowed;
    param_1[1].field_0x34 = this->GlobalSearchForced;
    param_1[1].field_0x35 = this->GlobalSearchFallback_Unscripted;
    *(int *)&param_1[2]._padding_ = this->MaxNumPrimitives;
    return true;
  }
  pFVar8 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery>(&local_28);
  pwVar10 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar9);
}

// DestroyPerInstanceData @ 1491bf100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FNDIRigidMeshCollisionData::ReleaseBuffers(param_1);
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  TDefaultDelete<FNDIRigidMeshCollisionArrays>::operator()
            ((TDefaultDelete<FNDIRigidMeshCollisionArrays> *)((longlong)param_1 + 8),
             *(FNDIRigidMeshCollisionArrays **)((longlong)param_1 + 8));
  lStack_70 = this->_padding_;
  if (lStack_70 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData1349>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceRigidMeshCollisionQuery::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData1349>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// DrawDebugHud @ 1491bf2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::DrawDebugHud
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,FNDIDrawDebugHudContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  FNiagaraSystemInstance *pFVar8;
  int *piVar9;
  UCanvas *this_00;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar14;
  FNDIDrawDebugHudContext *pFVar15;
  FName FVar16;
  ForAnyElementType FVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  UNiagaraDataInterfaceRigidMeshCollisionQuery *pUVar21;
  TRotator<double> *pTVar22;
  TQuat<double> *pTVar23;
  float *pfVar24;
  UFont *pUVar25;
  UObject *pUVar26;
  TVector<double> *pTVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  FWeakObjectPtr *this_01;
  uint uVar31;
  longlong lVar32;
  UWorld *pUVar33;
  double *pdVar34;
  FWeakObjectPtr *pFVar35;
  FName this_02;
  float fVar36;
  FScriptContainerElement *pFVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  float fVar43;
  float fVar44;
  undefined1 auStackY_998 [32];
  undefined1 local_948 [4];
  float local_944;
  UWorld *local_940;
  undefined1 local_938;
  undefined1 local_937 [3];
  uint local_934;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_930;
  FScriptContainerElement *local_928;
  FNDIDrawDebugHudContext *local_920;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_918;
  FName local_910;
  FString local_908;
  FString local_8f8;
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  FName local_8c8;
  FString local_8c0;
  FString local_8b0;
  double local_8a0;
  double dStack_898;
  double local_890;
  double local_888;
  double dStack_880;
  double local_878;
  FScriptContainerElement *local_868;
  int iStack_860;
  undefined4 uStack_85c;
  FScriptContainerElement *local_858;
  int iStack_850;
  undefined4 uStack_84c;
  TVector<double>_u_0 local_848;
  TVector<double>_u_0 local_828;
  TVector<double>_u_0 local_808;
  TVector<double>_u_0 local_7e8;
  TVector<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7b0;
  TVector<double>_u_0 local_798;
  TVector<double>_u_0 local_780;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_750;
  TVector<double>_u_0 local_738;
  TVector<double>_u_0 local_720;
  TVector<double>_u_0 local_708;
  TVector<double>_u_0 local_6f0;
  double local_6d8 [11];
  double dStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  double local_668;
  double dStack_660;
  double local_658 [11];
  double dStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8 [11];
  double dStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  double local_568;
  double dStack_560;
  double local_558 [11];
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_438;
  FFontRenderInfo local_420;
  FFontRenderInfo local_3e0;
  TVector<double> local_3a0;
  TVector<double> local_388;
  TRotator<double> local_370;
  TRotator<double> local_358;
  TRotator<double> local_340;
  TVector<double> local_328;
  TVector<double> local_310;
  TRotator<double> local_2f8;
  TQuat<double> local_2d8;
  TQuat<double> local_2b8;
  TQuat<double> local_298;
  TQuat<double> local_278;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_998;
  pFVar8 = param_1->SystemInstance;
  this_01 = (FWeakObjectPtr *)(pFVar8->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar35 = (FWeakObjectPtr *)
            ((longlong)this_01 + (longlong)(pFVar8->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc
            );
  local_920 = param_1;
  while( true ) {
    if (this_01 == pFVar35) {
      return;
    }
    pUVar21 = (UNiagaraDataInterfaceRigidMeshCollisionQuery *)FWeakObjectPtr::Get(this_01);
    if (pUVar21 == this) break;
    this_01 = (FWeakObjectPtr *)&this_01[1].ObjectSerialNumber;
  }
  if (this_01 == (FWeakObjectPtr *)0x0) {
    return;
  }
  uVar31 = this_01[1].ObjectIndex;
  uVar30 = 0;
  if ((int)uVar31 < (pFVar8->DataInterfaceInstanceData).ArrayNum) {
    uVar30 = ~uVar31 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar15 = local_920;
  pFVar37 = (pFVar8->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar31;
  if (pFVar37 == (FScriptContainerElement *)0x0) {
    return;
  }
  piVar9 = *(int **)(pFVar37 + 8);
  pFVar1 = pFVar37 + 8;
  if (piVar9 == (int *)0x0) {
    return;
  }
  local_944 = (float)(piVar9[2] - piVar9[1]);
  local_934 = piVar9[3] - piVar9[2];
  iVar6 = piVar9[1];
  iVar7 = *piVar9;
  local_928 = pFVar37;
  if (pFVar37[0x4e] == (FScriptContainerElement)0x0) {
    ::FString::AppendfImpl(&local_920->OutputString,L"Boxes(%d) Spheres(%d) Capsules(%d)");
  }
  else {
    ::FString::AppendfImpl(&local_920->OutputString,L"EXCEEDED COMPONENT LIMIT - %d");
  }
  fVar44 = __real_bf800000;
  fVar43 = __real_3f000000;
  local_948[0] = 0;
  if (pFVar15->bVerbose == false) {
    return;
  }
  lVar32 = *(longlong *)pFVar1;
  local_940 = pFVar15->World;
  local_930 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(lVar32 + 0x10);
  local_918 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(lVar32 + 0x30);
  local_7c8._s_0.X =
       (double)((*(float *)(lVar32 + 0xac) - *(float *)(lVar32 + 0xa0)) * __real_3f000000);
  local_7c8._s_0.Y =
       (double)((*(float *)(lVar32 + 0xb0) - *(float *)(lVar32 + 0xa4)) * __real_3f000000);
  local_7c8._s_0.Z =
       (double)((*(float *)(lVar32 + 0xb4) - *(float *)(lVar32 + 0xa8)) * __real_3f000000);
  local_7b0._s_0.X =
       (double)((*(float *)(lVar32 + 0xa0) + *(float *)(lVar32 + 0xac)) * __real_3f000000);
  local_7b0._s_0.Y =
       (double)((*(float *)(lVar32 + 0xa4) + *(float *)(lVar32 + 0xb0)) * __real_3f000000);
  local_7b0._s_0.Z =
       (double)((*(float *)(lVar32 + 0xa8) + *(float *)(lVar32 + 0xb4)) * __real_3f000000);
  DrawDebugBox(local_940,(TVector<double> *)&local_7b0._s_0,(TVector<double> *)&local_7c8._s_0,
               &UE::Math::TQuat<double>::Identity,&FColor::Purple,false,__real_bf800000,'\0',0.0);
  pTVar14 = local_930;
  dVar13 = __real_3ff0000000000000;
  uVar38 = SUB84(__real_3ff0000000000000,0);
  uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar31 = 0;
  if (iVar6 != iVar7) {
    do {
      local_928 = pFVar37;
      lVar32 = *(longlong *)pFVar1;
      uVar29 = *piVar9 + uVar31;
      uVar30 = 0;
      if ((int)uVar29 < *(int *)(lVar32 + 0x58)) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar32 = *(longlong *)(lVar32 + 0x50);
      lVar28 = (longlong)(int)uVar29;
      fVar2 = *(float *)(lVar32 + lVar28 * 0x10);
      fVar36 = *(float *)(lVar32 + 4 + lVar28 * 0x10);
      fVar3 = *(float *)(lVar32 + 8 + lVar28 * 0x10);
      `UNiagaraDataInterfaceRigidMeshCollisionQuery::DrawDebugHud'::__l2::<lambda_1>::operator()
                (local_948,&local_1d8,pTVar14,*piVar9 + uVar31);
      pTVar22 = UE::Math::TMatrix<double>::Rotator(&local_1d8,&local_370);
      pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar22,&local_2d8);
      dVar42 = (double)(fVar2 * fVar43);
      dVar40 = (double)(fVar36 * fVar43);
      dVar11 = (double)(fVar3 * fVar43);
      local_780._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_1d8.M[1][0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_1d8.M[0][0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_1d8.M[2][0] +
           dVar13 * local_1d8.M[3][0];
      local_780._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_1d8.M[1][1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_1d8.M[0][1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_1d8.M[2][1] +
           dVar13 * local_1d8.M[3][1];
      local_780._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_1d8.M[1][2] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_1d8.M[0][2] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_1d8.M[2][2] +
           dVar13 * local_1d8.M[3][2];
      local_798._s_0.X = dVar42;
      local_798._s_0.Y = dVar40;
      local_798._s_0.Z = dVar11;
      DrawDebugBox(local_940,(TVector<double> *)&local_780._s_0,(TVector<double> *)&local_798._s_0,
                   pTVar23,&FColor::Blue,false,fVar44,'\0',0.0);
      `UNiagaraDataInterfaceRigidMeshCollisionQuery::DrawDebugHud'::__l2::<lambda_1>::operator()
                (local_948,&local_158,local_918,*piVar9 + uVar31);
      pTVar22 = UE::Math::TMatrix<double>::Rotator(&local_158,&local_358);
      pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar22,&local_2b8);
      local_750._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_158.M[1][0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_158.M[0][0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_158.M[2][0] +
           dVar13 * local_158.M[3][0];
      local_750._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_158.M[1][1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_158.M[0][1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_158.M[2][1] +
           dVar13 * local_158.M[3][1];
      local_750._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_158.M[1][2] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_158.M[0][2] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_158.M[2][2] +
           dVar13 * local_158.M[3][2];
      local_768._s_0.X = dVar42;
      local_768._s_0.Y = dVar40;
      local_768._s_0.Z = dVar11;
      DrawDebugBox(local_940,(TVector<double> *)&local_750._s_0,(TVector<double> *)&local_768._s_0,
                   pTVar23,&FColor::Red,false,fVar44,'\0',0.0);
      uVar31 = uVar31 + 1;
      pFVar37 = local_928;
    } while (uVar31 < (uint)(iVar6 - iVar7));
  }
  fVar2 = local_944;
  fVar36 = 0.0;
  pUVar33 = local_940;
  if (local_944 != 0.0) {
    do {
      dVar42 = _UNK_150689518;
      dVar40 = ___xmm_00000000000000003ff0000000000000;
      dVar11 = _UNK_15061cbc8;
      dVar13 = ___xmm_3ff00000000000000000000000000000;
      lVar32 = *(longlong *)pFVar1;
      uVar30 = piVar9[1] + (int)fVar36;
      uVar31 = 0;
      if ((int)uVar30 < *(int *)(lVar32 + 0x58)) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_6d8[0] = dVar40;
      local_6d8[1] = dVar42;
      local_6d8[4] = dVar13;
      local_6d8[5] = dVar11;
      lVar28 = 3;
      local_6d8[8] = 0.0;
      local_6d8[9] = 0.0;
      local_6d8[10] = dVar40;
      dStack_680 = dVar42;
      local_944 = *(float *)(*(longlong *)(lVar32 + 0x50) + (longlong)(int)uVar30 * 0x10);
      local_6d8[2] = 0.0;
      local_6d8[3] = 0.0;
      local_6d8[6] = 0.0;
      local_6d8[7] = 0.0;
      local_678 = 0;
      uStack_670 = 0;
      pFVar37 = (local_930->AllocatorInstance).Data +
                (ulonglong)(uint)((piVar9[1] + (int)fVar36) * 3) * 0x10;
      local_668 = dVar13;
      dStack_660 = dVar11;
      pdVar34 = local_6d8 + 1;
      do {
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,0);
        pdVar34[-1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,1);
        *pdVar34 = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,2);
        pdVar34[1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,3);
        pFVar37 = pFVar37 + 0x10;
        pdVar34[2] = (double)*pfVar24;
        lVar28 = lVar28 + -1;
        pdVar34 = pdVar34 + 4;
      } while (lVar28 != 0);
      local_8e8._8_4_ = SUB84(local_6d8[9],0);
      local_8e8._0_8_ = local_6d8[9];
      local_8e8._12_4_ = (int)((ulonglong)local_6d8[9] >> 0x20);
      local_8d8._8_4_ = SUB84(dStack_680,0);
      local_8d8._0_8_ = dStack_680;
      local_8d8._12_4_ = (int)((ulonglong)dStack_680 >> 0x20);
      local_738._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_6d8[1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_6d8[0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_6d8[2] +
           __real_3ff0000000000000 * local_6d8[3];
      local_738._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_6d8[5] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_6d8[4] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_6d8[6] +
           __real_3ff0000000000000 * local_6d8[7];
      local_738._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_6d8[9] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_6d8[8] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_6d8[10] +
           __real_3ff0000000000000 * dStack_680;
      DrawDebugSphere(local_940,(TVector<double> *)&local_738._s_0,local_944,0x14,&FColor::Blue,
                      false,__real_bf800000,'\0',0.0);
      local_658[0] = ___xmm_00000000000000003ff0000000000000;
      local_658[1] = _UNK_150689518;
      local_658[2] = 0.0;
      local_658[3] = 0.0;
      local_658[4] = ___xmm_3ff00000000000000000000000000000;
      local_658[5] = _UNK_15061cbc8;
      lVar32 = 3;
      local_658[6] = 0.0;
      local_658[7] = 0.0;
      local_658[8] = 0.0;
      local_658[9] = 0.0;
      pFVar37 = (local_918->AllocatorInstance).Data +
                (ulonglong)(uint)((piVar9[1] + (int)fVar36) * 3) * 0x10;
      local_658[10] = ___xmm_00000000000000003ff0000000000000;
      dStack_600 = _UNK_150689518;
      local_5f8 = 0;
      uStack_5f0 = 0;
      local_5e8 = ___xmm_3ff00000000000000000000000000000;
      dStack_5e0 = _UNK_15061cbc8;
      pdVar34 = local_658 + 1;
      do {
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,0);
        pdVar34[-1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,1);
        *pdVar34 = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,2);
        pdVar34[1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,3);
        pUVar33 = local_940;
        fVar44 = __real_bf800000;
        pFVar37 = pFVar37 + 0x10;
        pdVar34[2] = (double)*pfVar24;
        lVar32 = lVar32 + -1;
        pdVar34 = pdVar34 + 4;
      } while (lVar32 != 0);
      local_8d8._8_4_ = SUB84(local_658[9],0);
      local_8d8._0_8_ = local_658[9];
      local_8d8._12_4_ = (int)((ulonglong)local_658[9] >> 0x20);
      local_8e8._8_4_ = SUB84(dStack_600,0);
      local_8e8._0_8_ = dStack_600;
      local_8e8._12_4_ = (int)((ulonglong)dStack_600 >> 0x20);
      local_720._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_658[1] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_658[0] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_658[2] +
           __real_3ff0000000000000 * local_658[3];
      local_720._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_658[5] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_658[4] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_658[6] +
           __real_3ff0000000000000 * local_658[7];
      local_720._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * local_658[9] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * local_658[8] +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_658[10] +
           __real_3ff0000000000000 * dStack_600;
      DrawDebugSphere(local_940,(TVector<double> *)&local_720._s_0,local_944,0x14,&FColor::Red,false
                      ,__real_bf800000,'\0',0.0);
      fVar36 = (float)((int)fVar36 + 1);
    } while ((uint)fVar36 < (uint)fVar2);
    uVar38 = SUB84(__real_3ff0000000000000,0);
    uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar37 = local_928;
    fVar43 = __real_3f000000;
  }
  pTVar14 = local_930;
  uVar31 = 0;
  if (local_934 != 0) {
    while( true ) {
      dVar42 = _UNK_150689518;
      dVar40 = ___xmm_00000000000000003ff0000000000000;
      dVar11 = _UNK_15061cbc8;
      dVar13 = ___xmm_3ff00000000000000000000000000000;
      lVar32 = *(longlong *)pFVar1;
      uVar29 = piVar9[2] + uVar31;
      uVar30 = 0;
      if ((int)uVar29 < *(int *)(lVar32 + 0x58)) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar32 = *(longlong *)(lVar32 + 0x50);
      local_558[2] = 0.0;
      local_558[3] = 0.0;
      lVar28 = 3;
      local_558[6] = 0.0;
      local_558[7] = 0.0;
      fVar2 = *(float *)(lVar32 + (longlong)(int)uVar29 * 0x10);
      fVar36 = *(float *)(lVar32 + 4 + (longlong)(int)uVar29 * 0x10);
      local_558[8] = 0.0;
      local_558[9] = 0.0;
      local_4f8 = 0.0;
      dStack_4f0 = 0.0;
      pFVar37 = (pTVar14->AllocatorInstance).Data + (ulonglong)((piVar9[2] + uVar31) * 3) * 0x10;
      pdVar34 = local_558 + 1;
      local_944 = fVar2;
      local_558[0] = dVar40;
      local_558[1] = dVar42;
      local_558[4] = dVar13;
      local_558[5] = dVar11;
      local_558[10] = dVar40;
      dStack_500 = dVar42;
      local_4e8 = dVar13;
      dStack_4e0 = dVar11;
      do {
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,0);
        pdVar34[-1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,1);
        *pdVar34 = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,2);
        pdVar34[1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,3);
        pFVar37 = pFVar37 + 0x10;
        pdVar34[2] = (double)*pfVar24;
        lVar28 = lVar28 + -1;
        pdVar34 = pdVar34 + 4;
      } while (lVar28 != 0);
      local_258.M[0][0] = local_558[0];
      local_258.M[0][1] = local_558[4];
      local_258.M[0][2] = local_558[8];
      local_258.M[0][3] = local_4f8;
      local_258.M[1][0] = local_558[1];
      local_258.M[1][1] = local_558[5];
      local_258.M[1][2] = local_558[9];
      local_258.M[1][3] = dStack_4f0;
      local_258.M[2][0] = local_558[2];
      local_258.M[2][1] = local_558[6];
      local_258.M[2][2] = local_558[10];
      local_258.M[2][3] = local_4e8;
      local_258.M[3][0] = local_558[3];
      local_258.M[3][1] = local_558[7];
      local_258.M[3][2] = dStack_500;
      local_258.M[3][3] = dStack_4e0;
      pTVar22 = UE::Math::TMatrix<double>::Rotator(&local_258,&local_2f8);
      pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar22,&local_298);
      dVar4 = (double)CONCAT44(uVar39,uVar38);
      local_708._s_0.X =
           local_258.M[1][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
           local_258.M[0][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
           local_258.M[2][0] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
           local_258.M[3][0] * dVar4;
      local_708._s_0.Y =
           local_258.M[1][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
           local_258.M[0][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
           local_258.M[2][1] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
           local_258.M[3][1] * dVar4;
      fVar36 = fVar36 * fVar43;
      local_708._s_0.Z =
           local_258.M[1][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
           local_258.M[0][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
           local_258.M[2][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z +
           local_258.M[3][2] * dVar4;
      local_930 = (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_930._4_4_,fVar36);
      DrawDebugCapsule(local_940,(TVector<double> *)&local_708._s_0,fVar36,fVar2,pTVar23,
                       &FColor::Blue,false,fVar44,'\0',0.0);
      local_5d8[2] = 0.0;
      local_5d8[3] = 0.0;
      lVar32 = 3;
      local_5d8[6] = 0.0;
      local_5d8[7] = 0.0;
      local_5d8[8] = 0.0;
      local_5d8[9] = 0.0;
      pFVar37 = (local_918->AllocatorInstance).Data + (ulonglong)((piVar9[2] + uVar31) * 3) * 0x10;
      local_578 = 0;
      uStack_570 = 0;
      pdVar34 = local_5d8 + 1;
      local_5d8[0] = dVar40;
      local_5d8[1] = dVar42;
      local_5d8[4] = dVar13;
      local_5d8[5] = dVar11;
      local_5d8[10] = dVar40;
      dStack_580 = dVar42;
      local_568 = dVar13;
      dStack_560 = dVar11;
      do {
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,0);
        pdVar34[-1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,1);
        *pdVar34 = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,2);
        pdVar34[1] = (double)*pfVar24;
        pfVar24 = UE::Math::TVector4<float>::Component((TVector4<float> *)pFVar37,3);
        dVar40 = local_5d8[2];
        dVar11 = local_5d8[1];
        dVar13 = local_5d8[0];
        pFVar37 = pFVar37 + 0x10;
        pdVar34[2] = (double)*pfVar24;
        dVar19 = local_5d8[6];
        dVar18 = local_5d8[5];
        dVar5 = local_5d8[4];
        dVar4 = local_5d8[3];
        lVar32 = lVar32 + -1;
        pdVar34 = pdVar34 + 4;
      } while (lVar32 != 0);
      auVar12._4_8_ = dVar42;
      auVar12._0_4_ = (int)((ulonglong)local_5d8[6] >> 0x20);
      auVar41._0_8_ = auVar12._0_8_ << 0x20;
      auVar41._8_4_ = SUB84(local_5d8[7],0);
      auVar41._12_4_ = (int)((ulonglong)local_5d8[7] >> 0x20);
      local_8d8._8_4_ = SUB84(local_5d8[9],0);
      local_8d8._0_8_ = local_5d8[9];
      local_8d8._12_4_ = (int)((ulonglong)local_5d8[9] >> 0x20);
      local_8e8._8_4_ = (int)uStack_570;
      local_8e8._0_8_ = uStack_570;
      local_8e8._12_4_ = (int)((ulonglong)uStack_570 >> 0x20);
      local_4d8._8_4_ = SUB84(dStack_580,0);
      local_4d8._0_8_ = dStack_580;
      local_4d8._12_4_ = (int)((ulonglong)dStack_580 >> 0x20);
      local_4c8._8_4_ = SUB84(dStack_560,0);
      local_4c8._0_8_ = dStack_560;
      local_4c8._12_4_ = (int)((ulonglong)dStack_560 >> 0x20);
      pTVar22 = UE::Math::TMatrix<double>::Rotator(&local_258,&local_340);
      pTVar23 = UE::Math::TRotator<double>::Quaternion(pTVar22,&local_278);
      pUVar33 = local_940;
      fVar44 = __real_bf800000;
      local_6f0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar11 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar13 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar40 +
           __real_3ff0000000000000 * dVar4;
      local_6f0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar18 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar5 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar19 +
           __real_3ff0000000000000 * auVar41._8_8_;
      local_6f0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * (double)local_8d8._0_8_ +
           local_5d8[8] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * local_5d8[10] +
           __real_3ff0000000000000 * (double)local_4d8._0_8_;
      DrawDebugCapsule(local_940,(TVector<double> *)&local_6f0._s_0,local_930._0_4_,local_944,
                       pTVar23,&FColor::Red,false,__real_bf800000,'\0',0.0);
      uVar31 = uVar31 + 1;
      pFVar37 = local_928;
      if (local_934 <= uVar31) break;
      uVar38 = SUB84(__real_3ff0000000000000,0);
      uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      fVar43 = __real_3f000000;
    }
  }
  if ((*(int *)(pFVar37 + 0x18) == 0) && (*(int *)(pFVar37 + 0x38) == 0)) {
    return;
  }
  this_00 = local_920->Canvas;
  pUVar25 = UEngine::GetMediumFont();
  UCanvas::SetDrawColor(this_00,&FColor::White);
  dVar42 = _UNK_150689518;
  dVar40 = ___xmm_00000000000000003ff0000000000000;
  dVar11 = _UNK_15061cbc8;
  dVar13 = ___xmm_3ff00000000000000000000000000000;
  fVar43 = __real_3f800000;
  pFVar35 = *(FWeakObjectPtr **)(pFVar37 + 0x10);
  iVar6 = *(int *)(pFVar37 + 0x18);
  local_920 = (FNDIDrawDebugHudContext *)(pFVar35 + iVar6);
  while( true ) {
    pFVar15 = local_920;
    if (*(int *)(pFVar37 + 0x18) != iVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<AActor,FWeakObjectPtr>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_938);
    }
    if ((FNDIDrawDebugHudContext *)pFVar35 == pFVar15) break;
    pUVar26 = FWeakObjectPtr::Get(pFVar35);
    if (pUVar26 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar26 + 0x358))(pUVar26,1,&local_8a0,&local_3a0);
      dVar18 = local_890;
      dVar5 = dStack_898;
      dVar4 = local_8a0;
      local_848._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar13 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar40 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * local_8a0;
      local_848._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar11 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar42 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dStack_898;
      local_848._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar40 +
           __real_3ff0000000000000 * local_890;
      DrawDebugBox(pUVar33,(TVector<double> *)&local_848._s_0,&local_3a0,
                   &UE::Math::TQuat<double>::Identity,&FColor::Yellow,false,__real_bf800000,'\0',0.0
                  );
      local_828._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar13 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar40 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dVar4;
      local_828._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar11 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar42 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dVar5;
      local_828._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar40 +
           __real_3ff0000000000000 * dVar18;
      pTVar27 = UCanvas::Project(this_00,&local_328,(TVector<double> *)&local_828._s_0,true);
      dVar4 = *(double *)((longlong)&pTVar27->field0_0x0 + 8);
      uVar38 = SUB84(dVar4,0);
      uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)&pTVar27->field0_0x0;
      if (dVar5 <= dVar4) {
        uVar38 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar4 = *(double *)((longlong)&pTVar27->field0_0x0 + 0x10);
      if (dVar4 <= (double)CONCAT44(uVar39,uVar38)) {
        uVar38 = SUB84(dVar4,0);
        uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar39,uVar38)) {
        local_910.ComparisonIndex.Value = *(uint *)&pUVar26->field_0x18;
        local_910.Number = *(uint *)&pUVar26->field_0x1c;
        ::FName::ToString(&local_910,&local_908);
        FVar17.Data = local_908.Data.AllocatorInstance.Data;
        local_498._s_0.X = local_8a0;
        local_498._s_0.Y = dStack_898;
        local_908.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_908.Data.ArrayNum = 0;
        local_908.Data.ArrayMax = 0;
        local_498._s_0.Z = local_890;
        UCanvas::Project(this_00,(TVector<double> *)&local_478._s_0,
                         (TVector<double> *)&local_498._s_0,true);
        local_420.bEnableShadow = 0;
        local_420.bClipText = 0;
        local_420.GlowInfo.bEnableGlow = 0;
        local_420.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_420.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_420.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_420.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_420.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_420.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        ::FString::PrintfImpl(&local_8c0,L"RigidMeshDI[%s Actor] - %s");
        local_868 = local_8c0.Data.AllocatorInstance.Data;
        iStack_860 = local_8c0.Data.ArrayNum + -1;
        if (local_8c0.Data.ArrayNum == 0) {
          iStack_860 = 0;
        }
        local_4b8._12_4_ = uStack_85c;
        local_4b8.Size = iStack_860;
        local_4b8.DataPtr = (wchar_t *)local_8c0.Data.AllocatorInstance.Data;
        UCanvas::DrawText(this_00,pUVar25,&local_4b8,(float)local_478._s_0.X,(float)local_478._s_0.Y
                          ,fVar43,fVar43,&local_420);
        if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
        }
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
      }
    }
    pFVar35 = pFVar35 + 1;
    pUVar33 = local_940;
  }
  this_02 = *(FName *)(pFVar37 + 0x30);
  iVar6 = *(int *)(pFVar37 + 0x38);
  local_910 = (FName)((longlong)this_02 + (longlong)iVar6 * 8);
  while( true ) {
    FVar16 = local_910;
    if (*(int *)(pFVar37 + 0x38) != iVar6) {
      `TCheckedPointerIterator<TWeakObjectPtr<AActor,FWeakObjectPtr>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_937);
    }
    if (this_02 == FVar16) break;
    pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02);
    if (pUVar26 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar26 + 0x358))(pUVar26,1,&local_888,&local_388);
      dVar18 = local_878;
      dVar5 = dStack_880;
      dVar4 = local_888;
      local_808._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar13 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar40 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * local_888;
      local_808._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar11 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar42 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dStack_880;
      local_808._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar40 +
           __real_3ff0000000000000 * local_878;
      DrawDebugBox(pUVar33,(TVector<double> *)&local_808._s_0,&local_388,
                   &UE::Math::TQuat<double>::Identity,&FColor::Yellow,false,__real_bf800000,'\0',0.0
                  );
      local_7e8._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar13 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar40 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dVar4;
      local_7e8._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * dVar11 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * dVar42 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 +
           __real_3ff0000000000000 * dVar5;
      local_7e8._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * dVar40 +
           __real_3ff0000000000000 * dVar18;
      pTVar27 = UCanvas::Project(this_00,&local_310,(TVector<double> *)&local_7e8._s_0,true);
      dVar4 = *(double *)((longlong)&pTVar27->field0_0x0 + 8);
      uVar38 = SUB84(dVar4,0);
      uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)&pTVar27->field0_0x0;
      if (dVar5 <= dVar4) {
        uVar38 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      dVar4 = *(double *)((longlong)&pTVar27->field0_0x0 + 0x10);
      if (dVar4 <= (double)CONCAT44(uVar39,uVar38)) {
        uVar38 = SUB84(dVar4,0);
        uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
      }
      if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar39,uVar38)) {
        local_8c8.ComparisonIndex.Value = *(uint *)&pUVar26->field_0x18;
        local_8c8.Number = *(uint *)&pUVar26->field_0x1c;
        ::FName::ToString(&local_8c8,&local_8f8);
        FVar17.Data = local_8f8.Data.AllocatorInstance.Data;
        local_458._s_0.X = local_888;
        local_458._s_0.Y = dStack_880;
        local_8f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8f8.Data.ArrayNum = 0;
        local_8f8.Data.ArrayMax = 0;
        local_458._s_0.Z = local_878;
        UCanvas::Project(this_00,(TVector<double> *)&local_438._s_0,
                         (TVector<double> *)&local_458._s_0,true);
        local_3e0.bEnableShadow = 0;
        local_3e0.bClipText = 0;
        local_3e0.GlowInfo.bEnableGlow = 0;
        local_3e0.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
        local_3e0.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
        local_3e0.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
        local_3e0.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
        local_3e0.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
        local_3e0.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
        ::FString::PrintfImpl(&local_8b0,L"RigidMeshDI[%s Actor] - %s");
        local_858 = local_8b0.Data.AllocatorInstance.Data;
        iStack_850 = local_8b0.Data.ArrayNum + -1;
        if (local_8b0.Data.ArrayNum == 0) {
          iStack_850 = 0;
        }
        local_4a8._12_4_ = uStack_84c;
        local_4a8.Size = iStack_850;
        local_4a8.DataPtr = (wchar_t *)local_8b0.Data.AllocatorInstance.Data;
        UCanvas::DrawText(this_00,pUVar25,&local_4a8,(float)local_438._s_0.X,(float)local_438._s_0.Y
                          ,fVar43,fVar43,&local_3e0);
        if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
        }
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
      }
    }
    this_02 = (FName)((longlong)this_02 + 8);
    pUVar33 = local_940;
  }
  return;
}

// Equals @ 1491c19b0

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::Equals
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceRigidMeshCollisionQuery_const_>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
    iVar1 = (int)param_1[1]._padding_;
    if (iVar1 == (this->ActorTags).ArrayNum) {
      bVar2 = CompareItems<FName,int>
                        ((FName *)param_1[1]._padding_,
                         (FName *)(this->ActorTags).AllocatorInstance.Data,iVar1);
      if ((bVar2) && (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->ComponentTags).ArrayNum)) {
        bVar2 = CompareItems<FName,int>
                          ((FName *)param_1[1]._padding_,
                           (FName *)(this->ComponentTags).AllocatorInstance.Data,iVar1);
        if ((bVar2) &&
           (iVar1 = *(int *)&param_1[1].Proxy.Ptr, iVar1 == (this->SourceActors).ArrayNum)) {
          bVar2 = CompareItems<TSoftObjectPtr<AActor>,int>
                            ((TSoftObjectPtr<AActor> *)param_1[1]._padding_,
                             (TSoftObjectPtr<AActor> *)(this->SourceActors).AllocatorInstance.Data,
                             iVar1);
          if ((((((bVar2) && ((bool)param_1[1].field_0x30 == this->OnlyUseMoveable)) &&
                ((bool)param_1[1].field_0x31 == this->UseComplexCollisions)) &&
               (((bool)param_1[1].field_0x32 == this->bFilterByObjectType &&
                ((bool)param_1[1].field_0x33 == this->GlobalSearchAllowed)))) &&
              ((bool)param_1[1].field_0x34 == this->GlobalSearchForced)) &&
             (((bool)param_1[1].field_0x35 == this->GlobalSearchFallback_Unscripted &&
              ((int)param_1[2]._padding_ == this->MaxNumPrimitives)))) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// FilterActor @ 1491c32c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::FilterActor
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,AActor *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  if ((this->OnlyUseMoveable == false) || (bVar4 = AActor::IsRootComponentMovable(param_1), bVar4))
  {
    iVar3 = (this->ActorTags).ArrayNum;
    if (iVar3 == 0) {
      return false;
    }
    pFVar6 = (this->ActorTags).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      if (*(longlong *)pFVar6 == 0) {
        return false;
      }
      pFVar5 = (param_1->Tags).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(param_1->Tags).ArrayNum * 8;
      for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 8) {
        if (*(longlong *)pFVar5 == *(longlong *)pFVar6) {
          return false;
        }
      }
    }
  }
  return true;
}

// FilterComponent @ 1491c3350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::FilterComponent
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// FindActors @ 1491c38c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::FindActors
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,UWorld *param_1,
          FNDIRigidMeshCollisionData *param_2,ECollisionChannel param_3,TVector<double> *param_4,
          TVector<double> *param_5,TQuat<double> *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  AActor *pAVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  FWeakObjectPtr this_00;
  int iVar8;
  FNDIRigidMeshCollisionData *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  FName *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_1d8 [32];
  FIdentityFunctor local_178 [8];
  FWeakObjectPtr local_170;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_168;
  FCollisionObjectQueryParams local_158;
  FCollisionShape local_150;
  FCollisionShape local_140;
  TStatId local_130;
  AActor *local_128;
  FNDIRigidMeshCollisionData *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FName local_108;
  FName local_100;
  FCollisionQueryParams local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar6 = (param_2->FoundActors).AllocatorInstance.Data;
  uVar7 = (param_2->FoundActors).ArrayNum;
  local_170 = (FWeakObjectPtr)&param_2->FoundActors;
  local_118 = 0;
  uStack_110 = 0;
  (((TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)local_170)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (param_2->FoundActors).ArrayNum = 0;
  (param_2->FoundActors).ArrayMax = 0;
  local_120 = param_2;
  if (param_1 == (UWorld *)0x0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8896171279237773155>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                        ,0x89d,"World");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  else {
    local_178[0] = (FIdentityFunctor)this->UseComplexCollisions;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_NiagaraRigidMeshCollisionQuery =
           (FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_UNiagaraDataInterfaceRigidMeshCollisionQuery::FindActors(UWorld_*,FNDIRigidMeshCollisionData_&,ECollisionChannel,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_NiagaraRigidMeshCollisionQuery>
            )0x0;
      pFVar12 = ::FName::FName(&local_108,"NiagaraRigidMeshCollisionQuery");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_NiagaraRigidMeshCollisionQuery,*pFVar12,
                 L"NiagaraRigidMeshCollisionQuery","STATGROUP_CollisionTags","STATCAT_Advanced",
                 L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_130.StatIdPtr = (TStatIdData *)StatPtr_NiagaraRigidMeshCollisionQuery;
    if (StatPtr_NiagaraRigidMeshCollisionQuery ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_UNiagaraDataInterfaceRigidMeshCollisionQuery::FindActors(UWorld_*,FNDIRigidMeshCollisionData_&,ECollisionChannel,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&)const_::_5_::<lambda_2>::operator()(void)const_::_2_::FStat_NiagaraRigidMeshCollisionQuery>
         )0x0) {
      pFVar12 = ::FName::FName(&local_100,"NiagaraRigidMeshCollisionQuery");
      local_130.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_NiagaraRigidMeshCollisionQuery,*pFVar12,
                      L"NiagaraRigidMeshCollisionQuery","STATGROUP_CollisionTags","STATCAT_Advanced"
                      ,L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"NiagaraRigidMeshCollisionQuery");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_f8,::StaticName,&local_130,(bool)local_178[0],(AActor *)0x0);
    fVar18 = (float)((param_5->field0_0x0)._s_0.Z * __real_3fe0000000000000);
    fVar19 = (float)((param_5->field0_0x0)._s_0.Y * __real_3fe0000000000000);
    fVar17 = (float)((param_5->field0_0x0)._s_0.X * __real_3fe0000000000000);
    if (this->bFilterByObjectType == false) {
      local_140.ShapeType = Box;
      local_140.field1_0x4.Box.HalfExtentX = fVar17;
      local_140.field1_0x4.Box.HalfExtentY = fVar19;
      local_140.field1_0x4.Box.HalfExtentZ = fVar18;
      UWorld::OverlapMultiByChannel
                (param_1,&local_168,param_4,param_6,param_3,&local_140,&local_f8,
                 &FCollisionResponseParams::DefaultResponseParam);
    }
    else {
      local_158.ObjectTypesToQuery = 1 << (param_3 & ECC_GameTraceChannel18);
      local_158.IgnoreMask = '\0';
      local_150.ShapeType = Box;
      local_150.field1_0x4.Box.HalfExtentX = fVar17;
      local_150.field1_0x4.Box.HalfExtentY = fVar19;
      local_150.field1_0x4.Box.HalfExtentZ = fVar18;
      UWorld::OverlapMultiByObjectType
                (param_1,&local_168,param_4,param_6,&local_158,&local_150,&local_f8);
    }
    this_00 = local_170;
    iVar8 = local_168.ArrayNum;
    uVar15 = (ulonglong)local_168.ArrayNum;
    pFVar1 = local_168.AllocatorInstance.Data + uVar15 * 0x48;
    FVar16.Data = local_168.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != iVar8) {
        `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_178);
      }
      if (FVar16.Data == pFVar1) break;
      pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar16.Data + 0x20));
      if (pUVar13 != (UObject *)0x0) {
        pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar2 = (int)pUVar14->_padding_;
        if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar14->_padding_)) {
          pUVar14 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar2 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar14->_padding_)) goto LAB_1491c3c0f;
        }
        pAVar4 = *(AActor **)&pUVar13[4].field_0x8;
        if ((pAVar4 != (AActor *)0x0) && (bVar10 = FilterActor(this,pAVar4), !bVar10)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar4);
          }
          local_170.ObjectIndex = 0;
          local_170.ObjectSerialNumber = 0;
          local_128 = pAVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pAVar4);
          }
          FWeakObjectPtr::operator=(&local_170,(FObjectPtr)&local_128);
          TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
                    ((TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
                     this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_170);
        }
      }
LAB_1491c3c0f:
      uVar15 = local_168._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 0x48;
    }
    if (local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_f8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_f8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  pFVar9 = local_120;
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)>
            ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)
             (local_120->FoundActors).AllocatorInstance.Data,(local_120->FoundActors).ArrayNum,
             local_178[0],NDIRigidMeshCollisionLocal::WeakActorPtrLess);
  if ((uVar7 == (pFVar9->FoundActors).ArrayNum) &&
     (bVar10 = CompareItems<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>
                         ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar6,
                          (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
                          (pFVar9->FoundActors).AllocatorInstance.Data,uVar7), bVar10)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return bVar10;
}

// FindActorsCPU @ 1491c3dc0

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::FindActorsCPU
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  FNDIRigidMeshCollisionData *pFVar11;
  bool bVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  int local_320 [2];
  float *local_318;
  float *local_310;
  float *local_308;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  float *local_2d0;
  float *local_2c8;
  int local_2c0 [2];
  float *local_2b8;
  float *local_2b0;
  int local_2a8 [2];
  float *local_2a0;
  float *local_298;
  int local_290 [2];
  float *local_288;
  float *local_280;
  int local_278 [2];
  float *local_270;
  float *local_268;
  int local_260 [2];
  float *local_258;
  float *local_250;
  int local_248 [4];
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  UWorld *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  longlong local_1b8;
  float *local_1b0;
  float *local_1a8;
  int local_1a0 [2];
  float *local_198;
  float *local_190;
  int local_188 [2];
  FUserPtrHandler<FNDIRigidMeshCollisionData> local_180;
  TVector<double>_u_0 local_170;
  TQuat<double> local_158;
  FNDIInputParam<FNiagaraPosition> local_138;
  FNiagaraLWCConverter local_e8;
  TVector<double> local_d0 [6];
  
  VectorVM::FUserPtrHandler<FNDIRigidMeshCollisionData>::FUserPtrHandler<FNDIRigidMeshCollisionData>
            (&local_180,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_138,param_1);
  local_2d8[0] = 0;
  local_2e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_2c0[0] = 0;
  local_2e8 = local_2e8 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e0 = local_2e8;
  local_2d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2c0);
  local_2a8[0] = 0;
  local_2d0 = local_2d0 + local_2c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2c8 = local_2d0;
  local_2b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2a8);
  local_290[0] = 0;
  local_2b8 = local_2b8 + local_2a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2b0 = local_2b8;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_290);
  lVar24 = (longlong)local_290[0];
  local_278[0] = 0;
  local_res10 = local_res10 + local_290[0] * param_1->PerInstanceFnInstanceIdx;
  local_2a0 = local_res10;
  local_298 = local_res10;
  local_288 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_278);
  local_260[0] = 0;
  local_288 = local_288 + local_278[0] * param_1->PerInstanceFnInstanceIdx;
  local_280 = local_288;
  local_270 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_260);
  local_248[0] = 0;
  local_270 = local_270 + local_260[0] * param_1->PerInstanceFnInstanceIdx;
  local_268 = local_270;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_248);
  lVar20 = (longlong)local_248[0];
  local_res18 = local_res18 + local_248[0] * param_1->PerInstanceFnInstanceIdx;
  local_188[0] = 0;
  local_258 = local_res18;
  local_250 = local_res18;
  local_310 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_188);
  lVar21 = (longlong)local_188[0];
  local_1a0[0] = 0;
  local_310 = local_310 + local_188[0] * param_1->PerInstanceFnInstanceIdx;
  local_198 = local_310;
  local_190 = local_310;
  local_308 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1a0);
  local_320[0] = 0;
  local_308 = local_308 + local_1a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_1b0 = local_308;
  local_1a8 = local_308;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_320);
  pFVar11 = local_180.Ptr;
  iVar18 = local_320[0];
  lVar23 = (longlong)local_320[0];
  iVar14 = local_320[0] * param_1->PerInstanceFnInstanceIdx;
  if ((local_180.Ptr)->SystemInstance == (FNiagaraSystemInstance *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8896171279237773083>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                        ,0x8e5,"InstanceData->SystemInstance");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    FNiagaraSystemInstance::GetLWCConverter((local_180.Ptr)->SystemInstance,&local_e8,false);
    local_1e8 = pFVar11->SystemInstance->World;
    if (local_1e8 != (UWorld *)0x0) {
      iVar18 = 0;
      if (param_1->NumInstances < 1) {
        return;
      }
      local_238 = (longlong)local_138.X.AdvanceOffset << 2;
      local_230 = lVar24 << 2;
      local_228 = (longlong)local_2a8[0] << 2;
      local_220 = (longlong)local_2c0[0] << 2;
      local_218 = (longlong)local_2d8[0] << 2;
      local_210 = lVar20 << 2;
      local_208 = (longlong)local_260[0] << 2;
      local_200 = (longlong)local_278[0] << 2;
      local_1f8 = lVar21 << 2;
      local_1f0 = (longlong)local_1a0[0] << 2;
      local_1b8 = (longlong)local_138.Z.AdvanceOffset << 2;
      local_res20 = local_270;
      local_318 = local_288;
      local_1d0 = local_2b8;
      pfVar13 = pfVar13 + iVar14;
      local_1c0 = local_2e8;
      local_1c8 = local_2d0;
      do {
        fVar1 = *local_1d0;
        pfVar22 = (float *)((longlong)local_138.Z.InputPtr + local_1b8);
        fVar2 = *local_1c0;
        local_1e0 = local_138.Y.InputPtr + local_138.Y.AdvanceOffset;
        fVar3 = *local_res10;
        local_1d8 = (float *)(local_238 + (longlong)local_138.X.InputPtr);
        local_res10 = (float *)(local_230 + (longlong)local_res10);
        fVar4 = *local_1c8;
        local_1d0 = (float *)(local_228 + (longlong)local_1d0);
        fVar5 = *local_res20;
        fVar6 = *local_res18;
        local_1c8 = (float *)(local_220 + (longlong)local_1c8);
        local_1c0 = (float *)(local_218 + (longlong)local_1c0);
        local_res18 = (float *)(local_210 + (longlong)local_res18);
        local_res20 = (float *)(local_208 + (longlong)local_res20);
        pfVar19 = (float *)(local_200 + (longlong)local_318);
        fVar7 = *local_318;
        pfVar16 = (float *)(local_1f8 + (longlong)local_310);
        fVar8 = *local_310;
        pfVar17 = (float *)(local_1f0 + (longlong)local_308);
        fVar9 = *local_308;
        iVar14 = 1;
        local_318 = pfVar19;
        local_310 = pfVar16;
        local_308 = pfVar17;
        if (fVar9 == 0.0) {
          local_2f8 = *local_138.X.InputPtr;
          local_2f4 = *local_138.Y.InputPtr;
          local_2f0 = *local_138.Z.InputPtr;
          FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                    (&local_e8,local_d0,(FNiagaraPosition *)&local_2f8);
          local_158.X = (double)fVar2;
          local_158.Y = (double)fVar4;
          local_158.Z = (double)fVar1;
          local_170._s_0.X = (double)fVar7;
          local_158.W = (double)fVar3;
          local_170._s_0.Z = (double)fVar6;
          local_170._s_0.Y = (double)fVar5;
          bVar12 = FindActors(this,local_1e8,local_180.Ptr,(ECollisionChannel)fVar8,local_d0,
                              (TVector<double> *)&local_170._s_0,&local_158);
          iVar14 = 1;
          if (bVar12) {
            iVar14 = 0;
          }
        }
        iVar18 = iVar18 + 1;
        *pfVar13 = (float)(iVar14 + -1);
        local_138.Y.InputPtr = local_1e0;
        local_138.X.InputPtr = local_1d8;
        pfVar13 = pfVar13 + lVar23;
        local_138.Z.InputPtr = pfVar22;
      } while (iVar18 < param_1->NumInstances);
      return;
    }
  }
  iVar15 = 0;
  if (0 < param_1->NumInstances) {
    pfVar13 = pfVar13 + iVar14;
    do {
      iVar15 = iVar15 + 1;
      *pfVar13 = 0.0;
      pfVar13 = pfVar13 + iVar18;
    } while (iVar15 < param_1->NumInstances);
  }
  return;
}

// GetExplicitActors @ 1491c7c40

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::GetExplicitActors
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,FNDIRigidMeshCollisionData *param_1)

{
  TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  bool bVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  FWeakObjectPtr *this_01;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  pFVar4 = (param_1->ExplicitActors).AllocatorInstance.Data;
  uVar5 = (param_1->ExplicitActors).ArrayNum;
  this_00 = &param_1->ExplicitActors;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (param_1->ExplicitActors).ArrayNum = 0;
  (param_1->ExplicitActors).ArrayMax = 0;
  this_01 = (FWeakObjectPtr *)(this->SourceActors).AllocatorInstance.Data;
  iVar2 = (this->SourceActors).ArrayNum;
  pFVar1 = this_01 + (longlong)iVar2 * 5;
  while( true ) {
    if ((this->SourceActors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSoftObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_01 == pFVar1) break;
    pUVar7 = FWeakObjectPtr::Get(this_01);
    if ((pUVar7 == (UObject *)0x0) && (this_01[1] != (FWeakObjectPtr)0x0)) {
      pUVar8 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(this_01 + 1));
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      bVar6 = (*IsInAsyncLoadingThread)();
      if ((bVar6) && (pUVar8 != (UObject *)0x0)) {
        pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar8->field_0xc);
        if (((pFVar9->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_1491c7d1f;
LAB_1491c7d52:
        if ((*(uint *)&pUVar8->field_0x8 >> 0x1e & 1) != 0) goto LAB_1491c7d60;
        bVar6 = true;
      }
      else {
LAB_1491c7d1f:
        local_res8 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(this_01,(FObjectPtr)&local_res8);
        if (pUVar8 != (UObject *)0x0) goto LAB_1491c7d52;
LAB_1491c7d60:
        bVar6 = false;
      }
      pUVar7 = (UObject *)0x0;
      if (bVar6) {
        pUVar7 = pUVar8;
      }
    }
    if (pUVar7 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_AActor_NoRegister();
      iVar3 = (int)pUVar10->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar10->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res8 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
        TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
                  (this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10);
      }
    }
    this_01 = this_01 + 5;
  }
  iVar2 = (param_1->ExplicitActors).ArrayNum;
  if (iVar2 == uVar5) {
    bVar6 = CompareItems<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)(this_00->AllocatorInstance).Data,
                       (TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar4,iVar2);
    if (bVar6) {
      bVar6 = false;
      goto LAB_1491c7e41;
    }
  }
  bVar6 = true;
LAB_1491c7e41:
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return bVar6;
}

// GetNumElementsCPU @ 1491c9300

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::GetNumElementsCPU
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FVectorVMExternalFunctionContext *param_1)

{
  FNDIRigidMeshCollisionArrays *pFVar1;
  float *pfVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIRigidMeshCollisionData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIRigidMeshCollisionData>::FUserPtrHandler<FNDIRigidMeshCollisionData>
            (&local_18,param_1);
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (((local_18.Ptr)->SystemInstance != (FNiagaraSystemInstance *)0x0) &&
     (pFVar1 = ((local_18.Ptr)->AssetArrays).Ptr, pFVar1 != (FNDIRigidMeshCollisionArrays *)0x0)) {
    pfVar2[local_20[0] * param_1->PerInstanceFnInstanceIdx] =
         (float)(pFVar1->ElementOffsets).NumElements;
    return;
  }
  pfVar2[local_20[0] * param_1->PerInstanceFnInstanceIdx] = 0.0;
  return;
}

// GetPrivateStaticClass @ 1491ca6e0

UClass * __cdecl UNiagaraDataInterfaceRigidMeshCollisionQuery::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRigidMeshCollisionQuery",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.
                InnerSingleton,StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery,
               0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRigidMeshCollisionQuery>,
               local_res8,UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.InnerSingleton;
}

// GetVMExternalFunction @ 1491d0980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::GetVMExternalFunction
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  FDelegateAllocation local_20;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIRigidMeshCollisionLocal::FindActorsName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceRigidMeshCollisionQuery_FindActorsCPUBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == NDIRigidMeshCollisionLocal::GetNumElementsName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceRigidMeshCollisionQuery_GetNumElementsCPUBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (FVar1 == NDIRigidMeshCollisionLocal::IsWorldPositionInsideCombinedBoundsName) {
    local_28 = (undefined1  [8])0x0;
    local_20.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_20.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_20;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceRigidMeshCollisionQuery_IsWorldPositionInsideCombinedBoundsCPUBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar2[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_48);
    if ((local_20.DelegateSize != 0) &&
       (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_20.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_20,0,0,0x10);
      local_20.DelegateSize = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_48.Accessor._4_4_,local_48.Accessor._0_4_),&local_48);
    }
    if (local_20.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_20.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
  }
  else if (3 < (byte)LogNiagara._0_1_) {
    ::FName::ToString(&param_1->Name,(FString *)local_28);
    if (this == (UNiagaraDataInterfaceRigidMeshCollisionQuery *)0x0) {
      ::FString::FString((FString *)&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this,(FString *)&local_48,(UObject *)0x0);
    }
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((void *)local_48._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((atomic<unsigned___int64>)local_28 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_28);
    }
  }
  return;
}

// GlobalFindActors @ 1491d0df0

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalFindActors
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,UWorld *param_1,
          FNDIRigidMeshCollisionData *param_2)

{
  TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  AActor *pAVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FWeakObjectPtr local_res10;
  UClass *local_res18;
  AActor *local_res20;
  FString local_98;
  TActorIteratorBase<TActorIterator<AActor>_> local_88;
  
  pFVar2 = (param_2->FoundActors).AllocatorInstance.Data;
  uVar3 = (param_2->FoundActors).ArrayNum;
  this_00 = &param_2->FoundActors;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (param_2->FoundActors).ArrayNum = 0;
  (param_2->FoundActors).ArrayMax = 0;
  if (param_1 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8896171279237773181>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x883,"World");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  else {
    pUVar6 = Z_Construct_UClass_AActor_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar6 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
    }
    local_88.Flags = OnlyActiveLevels|SkipPendingKill;
    local_88.State.bIsSet = false;
    local_res18 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FActorIteratorState::FActorIteratorState
              (&local_88.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_res18);
    local_88.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_88);
      if (local_88.State.bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      if (local_88.State.TypedValue.ReachedEnd != false) break;
      if (local_88.State.bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      pAVar7 = FActorIteratorState::GetActorChecked(&local_88.State.TypedValue);
      if (pAVar7 == (AActor *)0x0) {
        pFVar8 = GetTypeName<AActor>(&local_98);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar9);
      }
      bVar4 = FilterActor(this,pAVar7);
      if (!bVar4) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar7);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res20 = pAVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar7);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
        TArray<TWeakObjectPtr<AActor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
                  (this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10);
      }
    }
    if (local_88.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_88.State.TypedValue.CurrentWorld,
                 local_88.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_88.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<AActor,FWeakObjectPtr>,int,FIdentityFunctor,bool_(__cdecl*)(TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&,TWeakObjectPtr<AActor,FWeakObjectPtr>_const_&)>
            ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)(this_00->AllocatorInstance).Data,
             (param_2->FoundActors).ArrayNum,local_res10.ObjectIndex._0_1_,
             NDIRigidMeshCollisionLocal::WeakActorPtrLess);
  if (uVar3 == (param_2->FoundActors).ArrayNum) {
    bVar4 = CompareItems<TWeakObjectPtr<AActor,FWeakObjectPtr>,int>
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)pFVar2,
                       (TWeakObjectPtr<AActor,FWeakObjectPtr> *)(this_00->AllocatorInstance).Data,
                       uVar3);
    if (bVar4) {
      bVar4 = false;
      goto LAB_1491d1026;
    }
  }
  bVar4 = true;
LAB_1491d1026:
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return bVar4;
}

// HasPostSimulateTick @ 1491d11d0

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::HasPostSimulateTick
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  return true;
}

// HasTickGroupPrereqs @ 1491d15e0

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::HasTickGroupPrereqs
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  return true;
}

// InitPerInstanceData @ 1491d3aa0

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::InitPerInstanceData
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  bool bVar1;
  
  bVar1 = NDIRigidMeshCollisionLocal::SystemHasFindActorsFunction(param_2->System);
  *(FNiagaraSystemInstance **)((longlong)param_1 + 0x40) = param_2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(bool *)((longlong)param_1 + 0x4c) = bVar1;
  GetExplicitActors(this,param_1);
  if ((this->GlobalSearchAllowed != false) &&
     ((this->GlobalSearchForced != false ||
      ((this->GlobalSearchFallback_Unscripted != false &&
       (*(char *)((longlong)param_1 + 0x4c) == '\0')))))) {
    GlobalFindActors(this,param_2->World,param_1);
  }
  FNDIRigidMeshCollisionData::Init(param_1,this->MaxNumPrimitives);
  return true;
}

// IsWorldPositionInsideCombinedBoundsCPU @ 1491d4270

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::IsWorldPositionInsideCombinedBoundsCPU
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float local_c8;
  float local_c4;
  float local_c0 [2];
  TVector<double>_u_0 local_b8;
  FNiagaraLWCConverter local_a0;
  FNDIInputParam<FNiagaraPosition> local_88;
  float fVar9;
  
  VectorVM::FUserPtrHandler<FNDIRigidMeshCollisionData>::FUserPtrHandler<FNDIRigidMeshCollisionData>
            ((FUserPtrHandler<FNDIRigidMeshCollisionData> *)&local_b8._s_0,param_1);
  FNDIInputParam<FNiagaraPosition>::FNDIInputParam<FNiagaraPosition>(&local_88,param_1);
  fVar8 = 0.0;
  fVar9 = 0.0;
  local_c0[0] = 0.0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_c0);
  uVar5 = local_b8._s_0.Y;
  iVar7 = (int)local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  if ((*(FNiagaraSystemInstance **)((longlong)local_b8._s_0.Y + 0x40) ==
       (FNiagaraSystemInstance *)0x0) || (*(longlong *)((longlong)local_b8._s_0.Y + 8) == 0)) {
    pfVar6[iVar7] = 0.0;
  }
  else {
    fVar1 = *local_88.X.InputPtr;
    fVar2 = *local_88.Y.InputPtr;
    fVar3 = *local_88.Z.InputPtr;
    FNiagaraSystemInstance::GetLWCConverter
              (*(FNiagaraSystemInstance **)((longlong)local_b8._s_0.Y + 0x40),&local_a0,false);
    local_c8 = fVar1;
    local_c4 = fVar2;
    local_c0[0] = fVar3;
    FNiagaraLWCConverter::ConvertSimulationPositionToWorld
              (&local_a0,(TVector<double> *)&local_b8._s_0,(FNiagaraPosition *)&local_c8);
    lVar4 = *(longlong *)(uVar5 + 8);
    if (((((double)*(float *)(lVar4 + 0xa0) <= local_b8._s_0.X) &&
         ((double)*(float *)(lVar4 + 0xa4) <= local_b8._s_0.Y)) &&
        ((double)*(float *)(lVar4 + 0xa8) <= local_b8._s_0.Z)) &&
       (((fVar8 = fVar9, local_b8._s_0.X <= (double)*(float *)(lVar4 + 0xac) &&
         (local_b8._s_0.Y <= (double)*(float *)(lVar4 + 0xb0))) &&
        (local_b8._s_0.Z <= (double)*(float *)(lVar4 + 0xb4))))) {
      fVar8 = -NAN;
    }
    pfVar6[iVar7] = fVar8;
  }
  return;
}

// PerInstanceDataSize @ 1491d5410

int __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::PerInstanceDataSize
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  return 0x50;
}

// PerInstanceTickPostSimulate @ 1491d74d0

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
UNiagaraDataInterfaceRigidMeshCollisionQuery::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  FNiagaraSystemSimulation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((param_1 != (void *)0x0) && (param_2 != (FNiagaraSystemInstance *)0x0)) {
    pFVar1 = (param_2->SystemSimulation).Object;
    pTVar2 = (param_2->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 == (FNiagaraSystemSimulation *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        bVar4 = (bool)(*pcVar3)();
        return bVar4;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pFVar1->TickInfo).TickNumber == 0) {
      if (*(FNiagaraSystemInstance **)((longlong)param_1 + 0x40) != param_2) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->SystemInstance == SystemInstance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                           ,0x557,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          bVar4 = (bool)(*pcVar3)();
          return bVar4;
        }
      }
      FNDIRigidMeshCollisionData::Update(param_1,this);
    }
  }
  return false;
}

// PostInitProperties @ 1491d7df0

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::PostInitProperties
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

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
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// PostLoad @ 1491d7f30

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::PostLoad
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceRigidMeshCollisionQuery **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ProvidePerInstanceDataForRenderThread @ 1491d9350

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,void *param_1,void *param_2,
          ulong64 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int local_res10 [2];
  int *local_res18;
  
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(int *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(int *)((longlong)param_1 + 0x38) = 0;
  *(int *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  if (param_2 == (void *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8896171279237773246>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x842,"GameThreadData != nullptr && RenderThreadData != nullptr");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar2 = *(undefined8 **)((longlong)param_2 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      uVar5 = puVar2[1];
      iVar1 = *(int *)((longlong)puVar2 + 0xc);
      lVar8 = (longlong)iVar1;
      *(undefined8 *)param_1 = *puVar2;
      *(undefined8 *)((longlong)param_1 + 8) = uVar5;
      local_res10[0] = iVar1 * 3;
      local_res18 = local_res10;
      `UNiagaraDataInterfaceRigidMeshCollisionQuery::ProvidePerInstanceDataForRenderThread'::__l8::
      <lambda_1>::operator()
                (&local_res18,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)((longlong)param_2 + 8) + 0x10),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)((longlong)param_2 + 8) + 0x30),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x10));
      `UNiagaraDataInterfaceRigidMeshCollisionQuery::ProvidePerInstanceDataForRenderThread'::__l8::
      <lambda_1>::operator()
                (&local_res18,
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)((longlong)param_2 + 8) + 0x20),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)((longlong)param_2 + 8) + 0x40),
                 (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x20));
      pvVar3 = *(void **)(*(longlong *)((longlong)param_2 + 8) + 0x50);
      if ((pvVar3 == (void *)0x0) && (iVar1 != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,0x10,iVar1,(ForAnyElementType *)((longlong)param_1 + 0x30),
                         (int *)((longlong)param_1 + 0x38),(int *)((longlong)param_1 + 0x3c));
      if (iVar1 != 0) {
        memcpy((void *)((longlong)iVar7 * 0x10 + *(longlong *)((longlong)param_1 + 0x30)),pvVar3,
               lVar8 << 4);
      }
      pvVar3 = *(void **)(*(longlong *)((longlong)param_2 + 8) + 0x60);
      if ((pvVar3 == (void *)0x0) && (iVar1 != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,0x10,iVar1,(ForAnyElementType *)((longlong)param_1 + 0x40),
                         (int *)((longlong)param_1 + 0x48),(int *)((longlong)param_1 + 0x4c));
      if (iVar1 != 0) {
        memcpy((void *)((longlong)iVar7 * 0x10 + *(longlong *)((longlong)param_1 + 0x40)),pvVar3,
               lVar8 << 4);
      }
      pvVar3 = *(void **)(*(longlong *)((longlong)param_2 + 8) + 0x70);
      if ((pvVar3 == (void *)0x0) && (iVar1 != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar1,(ForAnyElementType *)((longlong)param_1 + 0x50),
                         (int *)((longlong)param_1 + 0x58),(int *)((longlong)param_1 + 0x5c));
      if (iVar1 != 0) {
        memcpy((void *)(*(longlong *)((longlong)param_1 + 0x50) + (longlong)iVar7 * 4),pvVar3,
               lVar8 << 2);
      }
      pvVar3 = *(void **)(*(longlong *)((longlong)param_2 + 8) + 0x80);
      if ((pvVar3 == (void *)0x0) && (iVar1 != 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar1,(ForAnyElementType *)((longlong)param_1 + 0x60),
                         (int *)((longlong)param_1 + 0x68),(int *)((longlong)param_1 + 0x6c));
      if (iVar1 != 0) {
        memcpy((void *)(*(longlong *)((longlong)param_1 + 0x60) + (longlong)iVar7 * 4),pvVar3,
               lVar8 << 2);
      }
      TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x78),
                 (TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)((longlong)param_2 + 8) + 0x90));
      *(int *)((longlong)param_1 + 0x70) = iVar1;
      *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)param_2;
      lVar8 = *(longlong *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)(lVar8 + 0xa0);
      *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)(lVar8 + 0xa8);
      lVar8 = *(longlong *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)(lVar8 + 0xac);
      *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(lVar8 + 0xb4);
    }
  }
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRigidMeshCollisionQuery.cpp"
                       ,0x867,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// RequiresEarlyViewData @ 1491decb0

bool __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::RequiresEarlyViewData
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this)

{
  return true;
}

// SetShaderParameters @ 1491e18b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRigidMeshCollisionQuery::SetShaderParameters
          (UNiagaraDataInterfaceRigidMeshCollisionQuery *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  TStridedView<FSceneView_const_,int> TVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  FNDIRigidMeshCollisionBuffer *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  ushort uVar12;
  ulong64 uVar13;
  FRenderThreadData *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FShaderParametersMetadata *pFVar16;
  FRHIShaderResourceView *pFVar17;
  FSceneView *pFVar18;
  uint uVar19;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("DataInterfaceProxy",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                        ,0x1c1,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar13 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar14 = TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIRigidMeshCollisionProxy::FRenderThreadData,0>_>
                    *)(pFVar3 + 1),uVar13);
  uVar19 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar15 = TShaderParameterStructTypeInfo<NDIRigidMeshCollisionLocal::FShaderParameters>::
            GetStructMetadata();
  puVar4 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar15->Size + uVar19;
  pFVar15 = UE::FXRenderingUtils::DistanceFields::GetObjectBufferParametersMetadata();
  pFVar16 = UE::FXRenderingUtils::DistanceFields::GetAtlasParametersMetadata();
  uVar11 = FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
                     (param_1,pFVar15);
  puVar5 = param_1->BaseParameters;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetParameterIncludedStructInternal
                     (param_1,pFVar16);
  puVar6 = param_1->BaseParameters;
  bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
                     (param_1,puVar5 + uVar11,pFVar15->Size);
  if (!bVar10) {
    bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsStructBoundInternal
                       (param_1,puVar6 + uVar12,pFVar16->Size);
    if (!bVar10) {
      bVar10 = false;
      goto LAB_1491e199c;
    }
  }
  bVar10 = true;
LAB_1491e199c:
  bVar9 = false;
  if (((pFVar14 == (FRenderThreadData *)0x0) ||
      (pFVar7 = pFVar14->AssetBuffer, pFVar7 == (FNDIRigidMeshCollisionBuffer *)0x0)) ||
     ((int)pFVar7->_padding_ == -1)) {
    pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x20) = pFVar17;
    pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x28) = pFVar17;
    pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x30) = pFVar17;
    pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x38) = pFVar17;
    pFVar17 = FNiagaraRenderer::GetDummyUIntBuffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x40) = pFVar17;
    pFVar17 = FNiagaraRenderer::GetDummyUIntBuffer();
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x48) = pFVar17;
    puVar1 = puVar4 + uVar19;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = puVar4 + (ulonglong)uVar19 + 8;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar4 + (ulonglong)uVar19 + 0x10;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1[8] = '\0';
    puVar1[9] = '\0';
    puVar1[10] = '\0';
    puVar1[0xb] = '\0';
    puVar1[0xc] = '\0';
    puVar1[0xd] = '\0';
    puVar1[0xe] = '\0';
    puVar1[0xf] = '\0';
    puVar1 = puVar4 + (ulonglong)uVar19 + 0x50;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar1 = puVar4 + (ulonglong)uVar19 + 0x58;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1 = puVar4 + (ulonglong)uVar19 + 0x60;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    puVar1[4] = '\0';
    puVar1[5] = '\0';
    puVar1[6] = '\0';
    puVar1[7] = '\0';
    puVar4 = puVar4 + (ulonglong)uVar19 + 0x68;
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
  }
  else {
    pFVar17 = (pFVar7->WorldTransformBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x20) = pFVar17;
    pFVar17 = (pFVar7->InverseTransformBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x28) = pFVar17;
    pFVar17 = (pFVar7->ElementExtentBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x30) = pFVar17;
    pFVar17 = (pFVar7->MeshScaleBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x38) = pFVar17;
    pFVar17 = (pFVar7->PhysicsTypeBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyUIntBuffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x40) = pFVar17;
    pFVar17 = (pFVar7->DFIndexBuffer).SRV.Reference;
    if (pFVar17 == (FRHIShaderResourceView *)0x0) {
      pFVar17 = FNiagaraRenderer::GetDummyUIntBuffer();
    }
    *(FRHIShaderResourceView **)(puVar4 + (ulonglong)uVar19 + 0x48) = pFVar17;
    bVar9 = true;
    *(uint *)(puVar4 + uVar19) = pFVar14->MaxPrimitiveCount * 2;
    puVar1 = puVar4 + (ulonglong)uVar19 + 4;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    *(uint *)(puVar4 + (ulonglong)uVar19 + 8) = pFVar14->MaxPrimitiveCount * 3;
    *(uint *)(puVar4 + (ulonglong)uVar19 + 0x10) = (pFVar14->ElementOffsets).BoxOffset;
    *(uint *)(puVar4 + (ulonglong)uVar19 + 0x14) = (pFVar14->ElementOffsets).SphereOffset;
    *(uint *)(puVar4 + (ulonglong)uVar19 + 0x18) = (pFVar14->ElementOffsets).CapsuleOffset;
    *(uint *)(puVar4 + (ulonglong)uVar19 + 0x1c) = (pFVar14->ElementOffsets).NumElements;
    *(undefined8 *)(puVar4 + (ulonglong)uVar19 + 0x50) =
         *(undefined8 *)&(pFVar14->CombinedBBoxWorldMin).field0_0x0;
    *(float *)(puVar4 + (ulonglong)uVar19 + 0x58) =
         (pFVar14->CombinedBBoxWorldMin).field0_0x0._s_0.Z;
    *(undefined8 *)(puVar4 + (ulonglong)uVar19 + 0x60) =
         *(undefined8 *)&(pFVar14->CombinedBBoxWorldMax).field0_0x0;
    *(float *)(puVar4 + (ulonglong)uVar19 + 0x68) =
         (pFVar14->CombinedBBoxWorldMax).field0_0x0._s_0.Z;
  }
  pFVar18 = (FSceneView *)0x0;
  if (bVar10) {
    TVar2 = param_1->ComputeDispatchInterface->SimulationSceneViews;
    if ((bVar9) && (TVar2.NumElements != 0 && -1 < TVar2._8_8_)) {
      pFVar18 = TVar2.FirstElementPtr;
    }
    UE::FXRenderingUtils::DistanceFields::SetupObjectBufferParameters
              (param_1->GraphBuilder,puVar5 + uVar11,pFVar18);
    UE::FXRenderingUtils::DistanceFields::SetupAtlasParameters
              (param_1->GraphBuilder,puVar6 + uVar12,pFVar18);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery @ 1491e3640

void __cdecl
UNiagaraDataInterfaceRigidMeshCollisionQuery::
StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery(void)

{
  return;
}

