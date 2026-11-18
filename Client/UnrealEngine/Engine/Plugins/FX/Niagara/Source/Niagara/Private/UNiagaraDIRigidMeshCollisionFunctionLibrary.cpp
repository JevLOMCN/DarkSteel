// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 1491994d0

UClass * __cdecl UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDIRigidMeshCollisionFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton;
}

// UNiagaraDIRigidMeshCollisionFunctionLibrary @ 1491abc40

UNiagaraDIRigidMeshCollisionFunctionLibrary * __thiscall
UNiagaraDIRigidMeshCollisionFunctionLibrary::UNiagaraDIRigidMeshCollisionFunctionLibrary
          (UNiagaraDIRigidMeshCollisionFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
  return this;
}

// UNiagaraDIRigidMeshCollisionFunctionLibrary @ 1491abc70

UNiagaraDIRigidMeshCollisionFunctionLibrary * __thiscall
UNiagaraDIRigidMeshCollisionFunctionLibrary::UNiagaraDIRigidMeshCollisionFunctionLibrary
          (UNiagaraDIRigidMeshCollisionFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
  return this;
}

// ~UNiagaraDIRigidMeshCollisionFunctionLibrary @ 1491ad4f0

void __thiscall
UNiagaraDIRigidMeshCollisionFunctionLibrary::~UNiagaraDIRigidMeshCollisionFunctionLibrary
          (UNiagaraDIRigidMeshCollisionFunctionLibrary *this)

{
  *(undefined ***)this = &___7UNiagaraDIRigidMeshCollisionFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1491c9d20

UClass * __cdecl UNiagaraDIRigidMeshCollisionFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDIRigidMeshCollisionFunctionLibrary",
               &Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDIRigidMeshCollisionFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.InnerSingleton;
}

// SetSourceActors @ 1491e1b90

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors
          (UNiagaraComponent *param_1,FName param_2,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  UNiagaraDataInterface *pUVar6;
  
  pUVar5 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  pUVar6 = UNiagaraFunctionLibrary::GetDataInterface(pUVar5,param_1,param_2);
  if (pUVar6 != (UNiagaraDataInterface *)0x0) {
    uVar3 = param_3->ArrayNum;
    plVar1 = &pUVar6[1]._padding_;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    iVar4 = *(int *)&pUVar6[1].Proxy.Ptr;
    puVar2 = (uint *)((longlong)&pUVar6[1].Proxy.Ptr + 4);
    if (*(int *)((longlong)&pUVar6[1].Proxy.Ptr + 4) < (int)uVar3) {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)*plVar1,iVar4);
      *(undefined4 *)&pUVar6[1].Proxy.Ptr = 0;
      if (*puVar2 != uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar3,(ForAnyElementType *)plVar1,0,(int *)puVar2);
      }
    }
    else {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)*plVar1,iVar4);
      *(undefined4 *)&pUVar6[1].Proxy.Ptr = 0;
    }
    Algo::
    Transform<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_&,_UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors_::__l5::<lambda_1>_>
              (param_3,(TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)plVar1,
               (<lambda_1>)0x0);
  }
  return;
}

// StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary @ 1491e3540

void __cdecl
UNiagaraDIRigidMeshCollisionFunctionLibrary::
StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSourceActors @ 1491e8640

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDIRigidMeshCollisionFunctionLibrary::execSetSourceActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  FProperty *pFVar5;
  FName FVar6;
  UNiagaraComponent *pUVar7;
  UClass *pUVar8;
  UNiagaraDataInterface *pUVar9;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FName local_res10;
  UNiagaraComponent *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20 = (UNiagaraComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar7 = local_res20;
  FVar6 = local_res10;
  pTVar10 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
  pUVar9 = UNiagaraFunctionLibrary::GetDataInterface(pUVar8,pUVar7,FVar6);
  if (pUVar9 != (UNiagaraDataInterface *)0x0) {
    uVar3 = pTVar10->ArrayNum;
    plVar1 = &pUVar9[1]._padding_;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    iVar4 = *(int *)&pUVar9[1].Proxy.Ptr;
    puVar2 = (uint *)((longlong)&pUVar9[1].Proxy.Ptr + 4);
    if (*(int *)((longlong)&pUVar9[1].Proxy.Ptr + 4) < (int)uVar3) {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)*plVar1,iVar4);
      *(undefined4 *)&pUVar9[1].Proxy.Ptr = 0;
      if (*puVar2 != uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar3,(ForAnyElementType *)plVar1,0,(int *)puVar2);
      }
    }
    else {
      DestructItems<TSoftObjectPtr<AActor>,int>((TSoftObjectPtr<AActor> *)*plVar1,iVar4);
      *(undefined4 *)&pUVar9[1].Proxy.Ptr = 0;
    }
    Algo::
    Transform<TArray<AActor_*,TSizedDefaultAllocator<32>_>,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_>_&,_UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors_::__l5::<lambda_1>_>
              (pTVar10,(TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)plVar1,
               (<lambda_1>)0x0);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

