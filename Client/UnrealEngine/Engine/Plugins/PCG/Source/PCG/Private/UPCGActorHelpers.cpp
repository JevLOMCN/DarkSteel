// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 32

// StaticClass @ 149ce53f0

UClass * __cdecl UPCGActorHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGActorHelpers",
               &Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton,
               StaticRegisterNativesUPCGActorHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGActorHelpers>,
               InternalVTableHelperCtorCaller<UPCGActorHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton;
}

// UPCGActorHelpers @ 149d34120

UPCGActorHelpers * __thiscall
UPCGActorHelpers::UPCGActorHelpers(UPCGActorHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGActorHelpers__6B_;
  return this;
}

// UPCGActorHelpers @ 149d34150

UPCGActorHelpers * __thiscall
UPCGActorHelpers::UPCGActorHelpers(UPCGActorHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGActorHelpers__6B_;
  return this;
}

// ~UPCGActorHelpers @ 149d34ee0

void __thiscall UPCGActorHelpers::~UPCGActorHelpers(UPCGActorHelpers *this)

{
  *(undefined ***)this = &___7UPCGActorHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 149d378f0

void __thiscall
`UPCGActorHelpers::GetOrCreateManagedABMC'::__l2::<lambda_1>::operator()
          (void *this,UInstancedSkinnedMeshComponent *param_1)

{
  undefined1 *this_00;
  FName *pFVar1;
  int iVar2;
  longlong lVar3;
  FName *pFVar4;
  FName local_res8;
  
  this_00 = &param_1->field_0x68;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&PCGHelpers::DefaultPCGTag);
  local_res8 = *(FName *)(*(longlong *)this + 0x18);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&local_res8);
  lVar3 = *(longlong *)((longlong)this + 8);
  pFVar4 = *(FName **)(lVar3 + 200);
  iVar2 = *(int *)(lVar3 + 0xd0);
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0xd0) != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// operator() @ 149d37990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UPCGActorHelpers::GetOrCreateManagedISMC'::__l2::<lambda_1>::operator()
          (void *this,UInstancedStaticMeshComponent *param_1)

{
  longlong *this_00;
  int iVar1;
  longlong lVar2;
  FName *pFVar3;
  int iVar4;
  FName *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = &param_1->_padding_;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&PCGHelpers::DefaultPCGTag);
  local_res8 = *(FName *)(*(longlong *)this + 0x18);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&local_res8);
  lVar2 = *(longlong *)((longlong)this + 8);
  pFVar5 = *(FName **)(lVar2 + 0x260);
  iVar1 = *(int *)(lVar2 + 0x268);
  pFVar3 = pFVar5 + iVar1;
  while( true ) {
    if (*(int *)(lVar2 + 0x268) != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar3) break;
    local_res8 = *pFVar5;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&local_res8);
    pFVar5 = pFVar5 + 1;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  ::FString::ParseIntoArray
            ((FString *)(*(longlong *)((longlong)this + 8) + 0x270),&local_38,L",",true);
  iVar1 = local_38.ArrayNum;
  pFVar7 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar6.Data == pFVar7) break;
    ::FString::TrimStartAndEndInline((FString *)FVar6.Data);
    FVar6.Data = FVar6.Data + 0x10;
  }
  iVar1 = local_38.ArrayNum;
  pFVar7 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar6.Data == pFVar7) break;
    iVar4 = *(int *)(FVar6.Data + 8) + -1;
    if (*(int *)(FVar6.Data + 8) == 0) {
      iVar4 = 0;
    }
    pFVar3 = ::FName::FName(&local_res18,iVar4,*(wchar_t **)FVar6.Data,FNAME_Add);
    local_res10 = *pFVar3;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,&local_res10);
    FVar6.Data = FVar6.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 149d38ba0

void __thiscall
`UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent'::__l16::<lambda_2>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UClass *pUVar4;
  USplineMeshComponent *pUVar5;
  
  if ((**(longlong **)this == 0) && (param_1 != (UPCGManagedResource *)0x0)) {
    pUVar4 = Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_ && ((char)((ulonglong)param_1[0xf]._padding_ >> 0x20) != '\0')) &&
         (*(char *)(*(longlong *)((longlong)this + 8) + 0x2f4) != '\0')))) &&
       ((int)param_1[0xf]._padding_ == *(int *)(*(longlong *)((longlong)this + 8) + 0x2f0))) {
      cVar2 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
      if (cVar2 != '\0') {
        pUVar5 = UPCGManagedSplineMeshComponent::GetComponent
                           ((UPCGManagedSplineMeshComponent *)param_1);
        if (((pUVar5 != (USplineMeshComponent *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)
            ) && (pUVar5->_padding_ == **(longlong **)((longlong)this + 0x10))) {
          bVar3 = FSplineMeshComponentDescriptor::operator==
                            ((FSplineMeshComponentDescriptor *)&param_1[1].Crc,
                             *(FSplineMeshComponentDescriptor **)((longlong)this + 8));
          if (bVar3) {
            bVar3 = FPCGSplineMeshParams::operator==
                              ((FPCGSplineMeshParams *)(param_1 + 0xb),
                               (FPCGSplineMeshParams *)(*(longlong *)((longlong)this + 8) + 0x208));
            if (bVar3) {
              **(undefined8 **)this = param_1;
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 149d38f20

void __thiscall
`UPCGActorHelpers::GetOrCreateManagedABMC'::__l19::<lambda_2>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  UClass *pUVar4;
  UInstancedSkinnedMeshComponent *pUVar5;
  
  if ((**(longlong **)this == 0) && (param_1 != (UPCGManagedResource *)0x0)) {
    pUVar4 = Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        (((((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_ &&
           ((char)((ulonglong)*(undefined8 *)&param_1[4].bIsMarkedUnused >> 0x20) != '\0')) &&
          (*(char *)(*(longlong *)((longlong)this + 8) + 0xe0) != '\0')) &&
         (((int)*(undefined8 *)&param_1[4].bIsMarkedUnused ==
           *(int *)(*(longlong *)((longlong)this + 8) + 0xdc) &&
          (cVar2 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1), cVar2 != '\0')))))) &&
       ((pUVar5 = UPCGManagedISKMComponent::GetComponent((UPCGManagedISKMComponent *)param_1),
        pUVar5 != (UInstancedSkinnedMeshComponent *)0x0 &&
        ((((*(uint *)&pUVar5->field_0x8 >> 0x1e & 1) == 0 &&
          (*(longlong *)&pUVar5->field_0xa8 == **(longlong **)((longlong)this + 0x10))) &&
         ((pUVar5->NumCustomDataFloats == *(int *)(*(longlong *)((longlong)this + 8) + 0xd8) &&
          ((bVar3 = FSkinnedMeshComponentDescriptor::operator==
                              ((FSkinnedMeshComponentDescriptor *)&param_1[1].bIsMarkedUnused,
                               *(FSkinnedMeshComponentDescriptor **)((longlong)this + 0x18)), bVar3
           && (((byte)(*(uint *)&pUVar5->field_0x8 >> 6) & 1) ==
               *(byte *)(*(longlong *)((longlong)this + 8) + 0xe4))))))))))) {
      **(undefined8 **)this = param_1;
    }
  }
  return;
}

// operator() @ 149d393b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`UPCGActorHelpers::GetOrCreateManagedISMC'::__l28::<lambda_2>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  UInstancedStaticMeshComponent *pUVar6;
  
  if ((**(longlong **)this == 0) && (param_1 != (UPCGManagedResource *)0x0)) {
    pUVar5 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((((longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_ && ((char)((ulonglong)param_1[0xe]._padding_ >> 0x20) != '\0')) &&
         (lVar2 = *(longlong *)((longlong)this + 8), *(char *)(lVar2 + 0x288) != '\0')))) &&
       (((int)param_1[0xe]._padding_ == *(int *)(lVar2 + 0x284) &&
        (((*(char *)(lVar2 + 0x290) == '\0' ||
          ((((char)((ulonglong)param_1[0xe]._padding_ >> 0x20) != '\0' &&
            (*(char *)(lVar2 + 0x290) != '\0')) &&
           ((int)param_1[0xe]._padding_ == *(int *)(lVar2 + 0x28c))))) &&
         (((cVar3 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1), cVar3 != '\0' &&
           (pUVar6 = UPCGManagedISMComponent::GetComponent((UPCGManagedISMComponent *)param_1),
           pUVar6 != (UInstancedStaticMeshComponent *)0x0)) &&
          (((((uint)pUVar6->_padding_ >> 0x1e & 1) == 0 &&
            (((pUVar6->_padding_ == **(longlong **)((longlong)this + 0x10) &&
              (pUVar6->NumCustomDataFloats == *(int *)(*(longlong *)((longlong)this + 8) + 0x280)))
             && (bVar4 = FISMComponentDescriptor::operator==
                                   ((FISMComponentDescriptor *)(param_1 + 2),
                                    *(FISMComponentDescriptor **)((longlong)this + 0x18)), bVar4))))
           && (((byte)((uint)pUVar6->_padding_ >> 6) & 1) ==
               *(byte *)(*(longlong *)((longlong)this + 8) + 0x295))))))))))) {
      **(undefined8 **)this = param_1;
    }
  }
  return;
}

// ComputeHashFromActorTagsAndReference @ 149d416e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __cdecl
UPCGActorHelpers::ComputeHashFromActorTagsAndReference(AActor *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FString local_38;
  
  if (param_1 == (AActor *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (param_2) {
    pFVar9 = (param_1->Tags).AllocatorInstance.Data;
    iVar6 = (param_1->Tags).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar6 * 8;
    while( true ) {
      if ((param_1->Tags).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar1) break;
      uVar3 = *(undefined8 *)pFVar9;
      uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      uVar8 = uVar8 ^ (uVar8 >> 2) + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar8 * 0x40 +
                      uVar4;
      pFVar9 = pFVar9 + 8;
    }
  }
  if (param_3) {
    pFVar5 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0)
    ;
    iVar2 = (pFVar5->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar7 = L"";
      iVar6 = 0;
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
    uVar8 = uVar8 ^ (uVar8 >> 2) + uVar8 * 0x40 + uVar4 + 0x9e3779b9;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return uVar8;
}

// DeleteActors @ 149d470a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UPCGActorHelpers::DeleteActors
          (UWorld *param_1,TArray<TSoftObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *param_2)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  AActor *pAVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  ForAnyElementType FVar12;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  AActor *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  FString local_50;
  
  if (param_1 != (UWorld *)0x0) {
    uVar3 = param_2->ArrayNum;
    if (uVar3 != 0) {
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if (0 < (int)uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar3,&local_60,0,(int *)((longlong)&local_58 + 4));
      }
      iVar4 = param_2->ArrayNum;
      this = (TPersistentObjectPtr<FSoftObjectPath> *)(param_2->AllocatorInstance).Data;
      pTVar1 = this + iVar4;
      do {
        while( true ) {
          if (param_2->ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TSoftObjectPtr<AActor>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (this == pTVar1) {
            iVar4 = (int)local_58;
            pFVar2 = local_60.Data + (longlong)(int)local_58 * 8;
            FVar12.Data = local_60.Data;
            while( true ) {
              if ((int)local_58 != iVar4) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res18);
              }
              if (FVar12.Data == pFVar2) break;
              pAVar9 = *(AActor **)FVar12.Data;
              bVar6 = UWorld::DestroyActor(param_1,pAVar9,false,true);
              if (!bVar6) {
                bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1642780288700382652>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                                   ,0x244,"World->DestroyActor(ActorToDestroy)");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if (2 < (byte)LogPCG._0_1_) {
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)pAVar9,&local_50,(UObject *)0x0);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_50.Data.AllocatorInstance.Data);
                  }
                }
              }
              FVar12.Data = FVar12.Data + 8;
            }
            if (local_60.Data == (FScriptContainerElement *)0x0) {
              return true;
            }
            FMemory::Free(local_60.Data);
            return true;
          }
          pAVar9 = (AActor *)TPersistentObjectPtr<FSoftObjectPath>::Get(this);
          if (pAVar9 != (AActor *)0x0) break;
LAB_149d4723b:
          local_68 = (AActor *)0x0;
LAB_149d4723f:
          this = this + 1;
        }
        pUVar10 = Z_Construct_UClass_AActor_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(pAVar9->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) goto LAB_149d4723b;
        local_68 = pAVar9;
        pUVar11 = AActor::GetWorld(pAVar9);
        if (pUVar11 == (UWorld *)0x0) goto LAB_149d4723f;
        if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar8 = (int)local_58;
        if ((int)local_58 == local_58._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_60,(int *)((longlong)&local_58 + 4));
        }
        this = this + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8 + 1);
        *(AActor **)(local_60.Data + (longlong)iVar8 * 8) = local_68;
      } while( true );
    }
  }
  return true;
}

// ForEachActorInLevel @ 149d4d390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPCGActorHelpers::ForEachActorInLevel
          (ULevel *param_1,TSubclassOf<AActor> param_2,TFunctionRef<bool___cdecl(AActor_*)> *param_3
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong local_res8;
  
  if (param_1 != (ULevel *)0x0) {
    pFVar9 = (param_1->Actors).AllocatorInstance.Data;
    iVar2 = (param_1->Actors).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Actors).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar9 == pFVar1) break;
      lVar4 = *(longlong *)pFVar9;
      if (lVar4 != 0) {
        pUVar8 = *(UObject **)param_2.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UObject *)0x0) goto LAB_149d4d41f;
LAB_149d4d44d:
          pUVar8 = (UObject *)0x0;
        }
        else {
          if (pUVar8 == (UObject *)0x0) goto LAB_149d4d44d;
          UE::GC::MarkAsReachable(pUVar8);
LAB_149d4d41f:
          pUVar7 = Z_Construct_UClass_AActor_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_149d4d44d;
          iVar3 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8)
              != &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_149d4d44d;
        }
        if (((*(int *)&pUVar8[1].field_0x10 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)&pUVar8[1].field_0x10 * 8) == &pUVar8[1].field_0x8)) &&
           (local_res8 = lVar4,
           cVar6 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res8),
           cVar6 == '\0')) {
          return;
        }
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// ForEachActorInWorld @ 149d4d4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGActorHelpers::ForEachActorInWorld
          (UWorld *param_1,TSubclassOf<AActor> param_2,TFunctionRef<bool___cdecl(AActor_*)> *param_3
          )

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  AActor *pAVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  UObject *local_res8;
  AActor *local_res20;
  FString local_78;
  TActorIteratorBase<TActorIterator<AActor>_> local_68;
  
  if (param_1 != (UWorld *)0x0) {
    pUVar1 = *(UObject **)param_2.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
    }
    local_68.Flags = OnlyActiveLevels|SkipPendingKill;
    local_68.State.bIsSet = false;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FActorIteratorState::FActorIteratorState
              (&local_68.State.TypedValue,param_1,(TSubclassOf<AActor>)&local_res8);
    local_68.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_68);
    while( true ) {
      if ((local_68.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if ((local_68.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pAVar5 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      if (pAVar5 == (AActor *)0x0) {
        pFVar6 = GetTypeName<AActor>(&local_78);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      local_res20 = pAVar5;
      cVar4 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res20);
      if (cVar4 == '\0') break;
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_68);
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetCellCenter @ 149d4eb30

TVector<double> * __cdecl
UPCGActorHelpers::GetCellCenter
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,uint param_2,
          bool param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  if (param_2 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InGridSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                       ,0x333,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  dVar2 = __real_3fe0000000000000;
  dVar10 = (double)param_2;
  dVar6 = __real_3ff0000000000000 / dVar10;
  dVar7 = dVar6 * dVar7;
  dVar8 = dVar6 * dVar8;
  dVar6 = dVar6 * dVar9;
  if (param_3) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)((longlong)ROUND((dVar7 + dVar7) - __real_3fe0000000000000) >> 1);
  }
  dVar9 = (dVar6 + dVar6) - __real_3fe0000000000000;
  dVar7 = (double)(int)((longlong)ROUND((dVar8 + dVar8) - __real_3fe0000000000000) >> 1) +
          __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = ((double)iVar5 + __real_3fe0000000000000) * dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar7 * dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((double)(int)((longlong)ROUND(dVar9) >> 1) + dVar2) * dVar10;
  return __return_storage_ptr__;
}

// GetCellCoord @ 149d4ec50

TIntVector3<int> * __cdecl
UPCGActorHelpers::GetCellCoord
          (TIntVector3<int> *__return_storage_ptr__,TVector<double> *param_1,uint param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TIntVector3<int> *pTVar6;
  int iVar7;
  double dVar8;
  
  if (param_2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InGridSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                       ,0x333,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  dVar4 = __real_3fe0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = __real_4000000000000000 / (double)param_2;
  if (param_3) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)((longlong)ROUND((param_1->field0_0x0)._s_0.Z * dVar8 - __real_3fe0000000000000) >>
                 1);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)((longlong)ROUND(dVar1 * dVar8 - dVar4) >> 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)((longlong)ROUND(dVar2 * dVar8 - dVar4) >> 1);
  return __return_storage_ptr__;
}

// GetOrCreateISMC @ 149d519f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UInstancedStaticMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateISMC
          (AActor *param_1,UPCGComponent *param_2,FPCGISMComponentBuilderParams *param_3,
          FPCGContext *param_4)

{
  UPCGManagedISMComponent *this;
  UInstancedStaticMeshComponent *pUVar1;
  
  this = GetOrCreateManagedISMC(param_1,param_2,param_3,param_4);
  if (this != (UPCGManagedISMComponent *)0x0) {
    pUVar1 = UPCGManagedISMComponent::GetComponent(this);
    return pUVar1;
  }
  return (UInstancedStaticMeshComponent *)0x0;
}

// GetOrCreateISMC @ 149d51a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UInstancedStaticMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateISMC
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,FPCGISMCBuilderParameters *param_4
          )

{
  UPCGManagedISMComponent *this;
  UInstancedStaticMeshComponent *pUVar1;
  FPCGISMComponentBuilderParams local_2a8;
  
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
            (&local_2a8.Descriptor,&param_4->Descriptor);
  local_2a8.NumCustomDataFloats = param_4->NumCustomDataFloats;
  pUVar1 = (UInstancedStaticMeshComponent *)0x0;
  local_2a8.bAllowDescriptorChanges = param_4->bAllowDescriptorChanges;
  local_2a8.SettingsCrc.Value = 0;
  local_2a8.SettingsCrc.bValid = false;
  local_2a8.DataCrc.Value = 0;
  local_2a8.DataCrc.bValid = false;
  local_2a8.bTransient = false;
  this = GetOrCreateManagedISMC(param_1,param_2,&local_2a8,(FPCGContext *)0x0);
  if (this != (UPCGManagedISMComponent *)0x0) {
    pUVar1 = UPCGManagedISMComponent::GetComponent(this);
  }
  if (local_2a8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Descriptor.ComponentTags.AllocatorInstance.Data);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&local_2a8);
  return pUVar1;
}

// GetOrCreateISMC @ 149d51b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UInstancedStaticMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateISMC
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,
          FPCGISMComponentBuilderParams *param_4)

{
  UPCGManagedISMComponent *this;
  UInstancedStaticMeshComponent *pUVar1;
  
  this = GetOrCreateManagedISMC(param_1,param_2,param_4,(FPCGContext *)0x0);
  if (this != (UPCGManagedISMComponent *)0x0) {
    pUVar1 = UPCGManagedISMComponent::GetComponent(this);
    return pUVar1;
  }
  return (UInstancedStaticMeshComponent *)0x0;
}

// GetOrCreateManagedABMC @ 149d51b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedISKMComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedABMC
          (AActor *param_1,UPCGComponent *param_2,FPCGSkinnedMeshComponentBuilderParams *param_3,
          FPCGContext *param_4)

{
  int iVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  AActor *pAVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UPCGManagedISKMComponent *pUVar10;
  UClass *pUVar11;
  UInstancedSkinnedMeshComponent *pUVar12;
  FName *pFVar13;
  FName FVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  FName FVar18;
  FName FVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStackY_2e8 [32];
  undefined4 local_2b8 [2];
  UPCGManagedISKMComponent *local_2b0;
  AActor *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  FName local_280;
  FPCGContext *local_278;
  UPCGComponent *local_270;
  FPCGSkinnedMeshComponentBuilderParams *local_268;
  FString local_260;
  code *local_250;
  UPCGManagedISKMComponent ***local_248;
  FString local_240;
  UPCGManagedISKMComponent **local_230;
  FPCGSkinnedMeshComponentBuilderParams *local_228;
  AActor **local_220;
  FSkinnedMeshComponentDescriptor *local_218;
  FName local_210;
  undefined1 local_208 [8];
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [128];
  undefined1 local_168 [128];
  FSkinnedMeshComponentDescriptor local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_2a8 = param_1;
  local_278 = param_4;
  if (((param_1 == (AActor *)0x0) || (param_2 == (UPCGComponent *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetActor && InSourceComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pUVar10 = (UPCGManagedISKMComponent *)(*pcVar3)();
    return pUVar10;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId256,"UPCGActorHelpers::GetOrCreateManagedABMC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId256);
  }
  FSkinnedMeshComponentDescriptor::FSkinnedMeshComponentDescriptor
            (&local_e8,(FSoftSkinnedMeshComponentDescriptor *)param_3);
  lVar5 = local_e8._padding_;
  if (local_e8.SkinnedAsset.field0_0x0.DebugPtr == (TObjectPtr<USkinnedAsset>_u_0)0x0) {
    pUVar10 = (UPCGManagedISKMComponent *)0x0;
    goto LAB_149d5219c;
  }
  local_270 = param_2;
  local_268 = param_3;
  if (((FName)local_e8._padding_ == (FName)0x0) ||
     (pUVar11 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(),
     pUVar11 == (UClass *)0x0)) {
LAB_149d51c74:
    local_e8._padding_ = (longlong)Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_e8._padding_ != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8._padding_);
    }
  }
  else {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((!bVar20) || ((FName)local_e8._padding_ == (FName)0x0)) goto LAB_149d51c74;
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId283,
               "UPCGActorHelpers::GetOrCreateManagedABMC::FindMatchingMABMC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x11b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId283);
  }
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
  local_2b0 = (UPCGManagedISKMComponent *)0x0;
  if ((param_3->SettingsCrc).bValid != false) {
    local_230 = &local_2b0;
    local_220 = &local_2a8;
    local_218 = &local_e8;
    local_248 = &local_230;
    local_250 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPCGActorHelpers::GetOrCreateManagedABMC'::__l19::<lambda_2>,void,UPCGManagedResource_*>
                ::Call;
    local_228 = param_3;
    UPCGComponent::ForEachManagedResource
              (param_2,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_250);
    if (local_2b0 != (UPCGManagedISKMComponent *)0x0) {
      bVar21 = -1 < CpuChannel->Enabled;
      if (bVar21) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId319,
                   "UPCGActorHelpers::GetOrCreateManagedABMC::MarkAsUsed",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                   ,0x13f);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId319);
      }
      (**(code **)(local_2b0->_padding_ + 0x2d8))();
      pUVar12 = (UInstancedSkinnedMeshComponent *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&local_2b0->_padding_);
      if (pUVar12 == (UInstancedSkinnedMeshComponent *)0x0) {
LAB_149d51df2:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1642780288700382909>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                           ,0x143,"ISKMC");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pUVar10 = (UPCGManagedISKMComponent *)(*pcVar3)();
          return pUVar10;
        }
      }
      else {
        pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar11->_padding_)) goto LAB_149d51df2;
        pUVar11 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar11->_padding_)) goto LAB_149d51df2;
        `UPCGActorHelpers::GetOrCreateManagedABMC'::__l2::<lambda_1>::operator()(&local_270,pUVar12)
        ;
      }
      pUVar10 = local_2b0;
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_149d5219c;
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_280 = *(FName *)((longlong)local_e8.SkinnedAsset.field0_0x0 + 0x18);
  ::FName::ToString(&local_280,&local_240);
  ::FString::ConcatCF(&local_260,L"ABM_",&local_240);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  uVar17 = 0;
  uVar9 = 0x2000040;
  if (param_2->CurrentEditingMode != Preview) {
    uVar9 = uVar17;
  }
  uVar15 = uVar9 | 0x40;
  if (param_3->bTransient == false) {
    uVar15 = uVar9;
  }
  local_2b0 = (UPCGManagedISKMComponent *)CONCAT44(local_2b0._4_4_,uVar15);
  if (local_260.Data.ArrayNum != 0) {
    uVar17 = local_260.Data.ArrayNum - 1;
  }
  pFVar13 = ::FName::FName(&local_210,uVar17,(wchar_t *)local_260.Data.AllocatorInstance.Data,
                           FNAME_Add);
  lVar5 = local_e8._padding_;
  FVar14 = *pFVar13;
  if (((FName)local_e8._padding_ == (FName)0x0) ||
     (pUVar11 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(),
     pUVar11 == (UClass *)0x0)) {
LAB_149d51f14:
    FVar18 = FVar19;
  }
  else {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    FVar18 = (FName)local_e8._padding_;
    if (!bVar20) goto LAB_149d51f14;
  }
  FVar14 = MakeUniqueObjectName
                     ((UObject *)local_208,(UClass *)local_2a8,FVar18,
                      FVar14.ComparisonIndex.Value.Value);
  lVar5 = local_e8._padding_;
  FVar14 = *(FName *)FVar14;
  if (((FName)local_e8._padding_ == (FName)0x0) ||
     (pUVar11 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister(),
     pUVar11 == (UClass *)0x0)) {
LAB_149d51f72:
    FVar18 = FVar19;
  }
  else {
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar11->_padding_)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    FVar18 = (FName)local_e8._padding_;
    if (!bVar20) goto LAB_149d51f72;
  }
  pAVar4 = local_2a8;
  local_2a0 = 0;
  if (FVar14 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_2a8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar11 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar11,(UClass *)FVar18);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1e8,(UClass *)FVar18);
  local_1e8._8_8_ = pAVar4;
  local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_1e8._56_8_ = (UPackage *)0x0;
  local_1e8._24_4_ = (EObjectFlags)local_2b0;
  local_1e8._40_8_ = (UObject *)0x0;
  local_1e8[0x20] = false;
  local_1e8._16_8_ = FVar14;
  pUVar12 = (UInstancedSkinnedMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
  if (local_1e8._64_8_ != 0) {
    plVar16 = (longlong *)(local_1e8 + 0x50);
    if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_1e8._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  FSkinnedMeshComponentDescriptor::InitComponent(&local_e8,pUVar12);
  UInstancedSkinnedMeshComponent::SetNumCustomDataFloats(pUVar12,param_3->NumCustomDataFloats);
  UActorComponent::RegisterComponent((UActorComponent *)pUVar12);
  AActor::AddInstanceComponent(local_2a8,(UActorComponent *)pUVar12);
  local_2b8[0] = 0x10100;
  local_298 = 0;
  cVar8 = (**(code **)(*(longlong *)pUVar12 + 0x508))
                    (pUVar12,(local_2a8->RootComponent).field0_0x0.DebugPtr,local_2b8,0);
  if (cVar8 == '\0') {
    PCGLog::Component::LogComponentAttachmentFailedWarning(local_278);
  }
  `UPCGActorHelpers::GetOrCreateManagedABMC'::__l2::<lambda_1>::operator()(&local_270,pUVar12);
  bVar20 = param_3->bTransient;
  local_290 = 0;
  local_288 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_168,pUVar11);
  local_168._48_8_ = (FObjectInstancingGraph *)0x0;
  local_168._56_8_ = (UPackage *)0x0;
  local_168._16_4_ = 0;
  local_168._20_4_ = 0;
  local_168._40_8_ = (UObject *)0x0;
  local_168[0x20] = false;
  local_168._8_8_ = param_2;
  local_168._24_4_ = -(uint)(bVar20 != false) & RF_Transient;
  pUVar10 = (UPCGManagedISKMComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
  if (local_168._64_8_ != 0) {
    plVar16 = (longlong *)(local_168 + 0x50);
    if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_168._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  UPCGManagedISKMComponent::SetComponent(pUVar10,pUVar12);
  UPCGManagedISKMComponent::SetDescriptor(pUVar10,&local_e8);
  pUVar2 = (local_2a8->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (USceneComponent *)0x0) {
    local_200._0_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_200._8_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_1f0 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    UPCGManagedISKMComponent::SetRootLocation(pUVar10,(TVector<double> *)(local_208 + 8));
  }
  pUVar10->SettingsCrc = param_3->SettingsCrc;
  UPCGComponent::AddToManagedResources(param_2,(UPCGManagedResource *)pUVar10);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
LAB_149d5219c:
  FSkinnedMeshComponentDescriptor::~FSkinnedMeshComponentDescriptor(&local_e8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar10;
}

// GetOrCreateManagedISMC @ 149d52200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedISMComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedISMC
          (AActor *param_1,UPCGComponent *param_2,FPCGISMComponentBuilderParams *param_3,
          FPCGContext *param_4)

{
  int iVar1;
  USceneComponent *pUVar2;
  code *pcVar3;
  EObjectFlags EVar4;
  AActor *pAVar5;
  UPCGComponent *this;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  UPCGManagedISMComponent *pUVar11;
  UClass *pUVar12;
  FName FVar13;
  FStaticMeshRenderData *pFVar14;
  FName FVar15;
  UInstancedStaticMeshComponent *pUVar16;
  FName FVar17;
  FName *pFVar18;
  longlong *plVar19;
  EObjectFlags EVar20;
  wchar_t *pwVar21;
  EObjectFlags EVar22;
  FName FVar23;
  bool bVar24;
  undefined1 auStackY_4f8 [32];
  undefined4 local_4c8 [2];
  AActor *local_4c0;
  UPCGManagedISMComponent *local_4b8;
  FString local_4b0;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  UPCGComponent *local_480;
  FName local_478;
  FPCGContext *local_470;
  FString local_468;
  UPCGComponent *local_458;
  FPCGISMComponentBuilderParams *local_450;
  code *local_448;
  UPCGManagedISMComponent ***local_440;
  UPCGManagedISMComponent **local_438;
  FPCGISMComponentBuilderParams *local_430;
  AActor **local_428;
  undefined1 *local_420;
  FName local_418;
  undefined1 local_410 [8];
  undefined1 local_408 [16];
  double local_3f8;
  undefined1 local_3e8 [128];
  undefined1 local_368 [128];
  undefined1 local_2e8 [496];
  TObjectPtr<UStaticMesh>_u_0 local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_4c0 = param_1;
  local_480 = param_2;
  local_470 = param_4;
  if (((param_1 == (AActor *)0x0) || (param_2 == (UPCGComponent *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetActor && InSourceComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                         ,0x59,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pUVar11 = (UPCGManagedISMComponent *)(*pcVar3)();
    return pUVar11;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId91,"UPCGActorHelpers::GetOrCreateManagedISMC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x5b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId91);
  }
  FISMComponentDescriptor::FISMComponentDescriptor
            ((FISMComponentDescriptor *)local_2e8,(FSoftISMComponentDescriptor *)param_3);
  uVar6 = local_2e8._16_8_;
  if (local_f8.DebugPtr == (UStaticMesh *)0x0) {
    pUVar11 = (UPCGManagedISMComponent *)0x0;
    goto LAB_149d529c5;
  }
  local_458 = param_2;
  local_450 = param_3;
  if (((FName)local_2e8._16_8_ == (FName)0x0) ||
     (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar12 == (UClass *)0x0)) {
LAB_149d52339:
    local_2e8._16_8_ = Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FName)local_2e8._16_8_ != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2e8._16_8_);
    }
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(uVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((!bVar8) || ((FName)local_2e8._16_8_ == (FName)0x0)) goto LAB_149d52339;
  }
  uVar6 = local_2e8._16_8_;
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  FVar15 = (FName)local_2e8._16_8_;
  if (param_3->bAllowDescriptorChanges != false) {
    if (((FName)local_2e8._16_8_ == (FName)0x0) ||
       (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
       pUVar12 == (UClass *)0x0)) {
LAB_149d523a8:
      FVar17 = FVar23;
    }
    else {
      iVar1 = (int)pUVar12->_padding_;
      if ((*(int *)(uVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      FVar17 = (FName)local_2e8._16_8_;
      if (!bVar8) goto LAB_149d523a8;
    }
    FVar13 = (FName)Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
    FVar15 = (FName)local_2e8._16_8_;
    if ((FVar17 == FVar13) &&
       (pFVar14 = UStaticMesh::GetRenderData(local_f8.DebugPtr), FVar15 = (FName)local_2e8._16_8_,
       pFVar14 != (FStaticMeshRenderData *)0x0)) {
      pFVar14 = UStaticMesh::GetRenderData(local_f8.DebugPtr);
      bVar8 = FStaticMeshRenderData::HasValidNaniteData(pFVar14);
      FVar15 = (FName)local_2e8._16_8_;
      if ((bVar8) &&
         ((FVar15 = (FName)Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
          UE::GC::GIsIncrementalReachabilityPending != false && (FVar15 != (FName)0x0)))) {
        UE::GC::MarkAsReachable((UObject *)FVar15);
      }
    }
  }
  local_2e8._16_8_ = FVar15;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId146,
               "UPCGActorHelpers::GetOrCreateManagedISMC::FindMatchingMISMC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x92);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId146);
  }
  local_4b8 = (UPCGManagedISMComponent *)0x0;
  if ((param_3->SettingsCrc).bValid != false) {
    local_438 = &local_4b8;
    local_428 = &local_4c0;
    local_420 = local_2e8;
    local_440 = &local_438;
    local_448 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPCGActorHelpers::GetOrCreateManagedISMC'::__l28::<lambda_2>,void,UPCGManagedResource_*>
                ::Call;
    local_430 = param_3;
    UPCGComponent::ForEachManagedResource
              (param_2,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_448);
    if (local_4b8 != (UPCGManagedISMComponent *)0x0) {
      bVar24 = -1 < CpuChannel->Enabled;
      if (bVar24) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId184,
                   "UPCGActorHelpers::GetOrCreateManagedISMC::MarkAsUsed",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                   ,0xb8);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId184);
      }
      (**(code **)(local_4b8->_padding_ + 0x2d8))();
      pUVar16 = (UInstancedStaticMeshComponent *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)&local_4b8->_padding_);
      if (pUVar16 == (UInstancedStaticMeshComponent *)0x0) {
LAB_149d52550:
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1642780288700383044>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                           ,0xbc,"ISMC");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          pUVar11 = (UPCGManagedISMComponent *)(*pcVar3)();
          return pUVar11;
        }
      }
      else {
        pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
        iVar1 = (int)pUVar12->_padding_;
        if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar12->_padding_)) goto LAB_149d52550;
        pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
        iVar1 = (int)pUVar12->_padding_;
        if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar12->_padding_)) goto LAB_149d52550;
        `UPCGActorHelpers::GetOrCreateManagedISMC'::__l2::<lambda_1>::operator()(&local_458,pUVar16)
        ;
      }
      pUVar11 = local_4b8;
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_149d529c5;
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  uVar6 = local_2e8._16_8_;
  local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b0.Data.ArrayNum = 0;
  local_4b0.Data.ArrayMax = 0;
  if (((FName)local_2e8._16_8_ == (FName)0x0) ||
     (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar12 == (UClass *)0x0)) {
LAB_149d525fa:
    FVar15 = FVar23;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(uVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    FVar15 = (FName)local_2e8._16_8_;
    if (!bVar8) goto LAB_149d525fa;
  }
  FVar17 = (FName)Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
  uVar6 = local_2e8._16_8_;
  if (FVar15 == FVar17) {
    pwVar21 = L"HISM_";
LAB_149d52665:
    ::FString::operator=(&local_4b0,pwVar21);
  }
  else {
    if (((FName)local_2e8._16_8_ == (FName)0x0) ||
       (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
       pUVar12 == (UClass *)0x0)) {
LAB_149d52651:
      FVar15 = FVar23;
    }
    else {
      iVar1 = (int)pUVar12->_padding_;
      if ((*(int *)(uVar6 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      FVar15 = (FName)local_2e8._16_8_;
      if (!bVar8) goto LAB_149d52651;
    }
    FVar17 = (FName)Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
    if (FVar15 == FVar17) {
      pwVar21 = L"ISM_";
      goto LAB_149d52665;
    }
  }
  local_478 = (FName)(local_f8.DebugPtr)->_padding_;
  ::FName::ToString(&local_478,&local_468);
  EVar20 = RF_NoFlags;
  EVar22 = EVar20;
  if (local_468.Data.ArrayNum != 0) {
    EVar22 = local_468.Data.ArrayNum - RF_Public;
  }
  ::FString::AppendChars(&local_4b0,(wchar_t *)local_468.Data.AllocatorInstance.Data,EVar22);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  EVar22 = RF_NonPIEDuplicateTransient|RF_Transient;
  if (param_2->CurrentEditingMode != Preview) {
    EVar22 = EVar20;
  }
  EVar4 = EVar22 | RF_Transient;
  if (param_3->bTransient == false) {
    EVar4 = EVar22;
  }
  if (local_4b0.Data.ArrayNum != 0) {
    EVar20 = local_4b0.Data.ArrayNum - RF_Public;
  }
  pFVar18 = ::FName::FName(&local_418,EVar20,(wchar_t *)local_4b0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  uVar6 = local_2e8._16_8_;
  FVar15 = *pFVar18;
  if (((FName)local_2e8._16_8_ == (FName)0x0) ||
     (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar12 == (UClass *)0x0)) {
LAB_149d5273b:
    FVar17 = FVar23;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(uVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    FVar17 = (FName)local_2e8._16_8_;
    if (!bVar8) goto LAB_149d5273b;
  }
  FVar15 = MakeUniqueObjectName
                     ((UObject *)local_410,(UClass *)local_4c0,FVar17,
                      FVar15.ComparisonIndex.Value.Value);
  uVar6 = local_2e8._16_8_;
  FVar15 = *(FName *)FVar15;
  if (((FName)local_2e8._16_8_ == (FName)0x0) ||
     (pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister(),
     pUVar12 == (UClass *)0x0)) {
LAB_149d52798:
    FVar17 = FVar23;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(uVar6 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(uVar6 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    FVar17 = (FName)local_2e8._16_8_;
    if (!bVar8) goto LAB_149d52798;
  }
  pAVar5 = local_4c0;
  local_4a0 = 0;
  if (FVar15 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_4c0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar12 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  CheckIsClassChildOf_Internal(pUVar12,(UClass *)FVar17);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3e8,(UClass *)FVar17);
  local_3e8._8_8_ = pAVar5;
  local_3e8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_3e8._56_8_ = (UPackage *)0x0;
  local_3e8._40_8_ = (UObject *)0x0;
  local_3e8[0x20] = false;
  local_3e8._16_8_ = FVar15;
  local_3e8._24_4_ = EVar4;
  pUVar16 = (UInstancedStaticMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3e8);
  if (local_3e8._64_8_ != 0) {
    plVar19 = (longlong *)(local_3e8 + 0x50);
    if ((longlong *)local_3e8._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_3e8._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  FISMComponentDescriptor::InitComponent((FISMComponentDescriptor *)local_2e8,pUVar16);
  (**(code **)(pUVar16->_padding_ + 0xbd0))(pUVar16,param_3->NumCustomDataFloats);
  UActorComponent::RegisterComponent((UActorComponent *)pUVar16);
  AActor::AddInstanceComponent(local_4c0,(UActorComponent *)pUVar16);
  local_4c8[0] = 0x10100;
  local_498 = 0;
  cVar10 = (**(code **)(pUVar16->_padding_ + 0x508))
                     (pUVar16,(local_4c0->RootComponent).field0_0x0.DebugPtr,local_4c8,0);
  if (cVar10 == '\0') {
    PCGLog::Component::LogComponentAttachmentFailedWarning(local_470);
  }
  `UPCGActorHelpers::GetOrCreateManagedISMC'::__l2::<lambda_1>::operator()(&local_458,pUVar16);
  this = local_480;
  bVar8 = param_3->bTransient;
  local_490 = 0;
  local_488 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_480,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_368,pUVar12);
  local_368._8_8_ = this;
  local_368._48_8_ = (FObjectInstancingGraph *)0x0;
  local_368._56_8_ = (UPackage *)0x0;
  local_368._16_4_ = 0;
  local_368._20_4_ = 0;
  local_368._40_8_ = (UObject *)0x0;
  local_368[0x20] = false;
  local_368._24_4_ = -(uint)(bVar8 != false) & RF_Transient;
  pUVar11 = (UPCGManagedISMComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_368);
  if (local_368._64_8_ != 0) {
    plVar19 = (longlong *)(local_368 + 0x50);
    if ((longlong *)local_368._104_8_ != (longlong *)0x0) {
      plVar19 = (longlong *)local_368._104_8_;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  UPCGManagedISMComponent::SetComponent(pUVar11,pUVar16);
  UPCGManagedISMComponent::SetDescriptor(pUVar11,(FISMComponentDescriptor *)local_2e8);
  pUVar2 = (local_4c0->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (USceneComponent *)0x0) {
    local_408._0_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_408._8_8_ = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_3f8 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
    UPCGManagedISMComponent::SetRootLocation(pUVar11,(TVector<double> *)(local_410 + 8));
  }
  pUVar11->SettingsCrc = param_3->SettingsCrc;
  UPCGComponent::AddToManagedResources(this,(UPCGManagedResource *)pUVar11);
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
LAB_149d529c5:
  FISMComponentDescriptor::~FISMComponentDescriptor((FISMComponentDescriptor *)local_2e8);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar11;
}

// GetOrCreateManagedISMC @ 149d52a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGManagedISMComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedISMC
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,FPCGISMCBuilderParameters *param_4
          )

{
  UPCGManagedISMComponent *pUVar1;
  FPCGISMComponentBuilderParams local_2a8;
  
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor
            (&local_2a8.Descriptor,&param_4->Descriptor);
  local_2a8.NumCustomDataFloats = param_4->NumCustomDataFloats;
  local_2a8.bTransient = false;
  local_2a8.SettingsCrc.Value = 0;
  local_2a8.SettingsCrc.bValid = false;
  local_2a8.DataCrc.Value = 0;
  local_2a8.DataCrc.bValid = false;
  local_2a8.bAllowDescriptorChanges = param_4->bAllowDescriptorChanges;
  pUVar1 = GetOrCreateManagedISMC(param_1,param_2,&local_2a8,(FPCGContext *)0x0);
  if (local_2a8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Descriptor.AdditionalCommaSeparatedTags.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Descriptor.ComponentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Descriptor.ComponentTags.AllocatorInstance.Data);
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor
            ((FSoftISMComponentDescriptor *)&local_2a8);
  return pUVar1;
}

// GetOrCreateManagedISMC @ 149d52b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGManagedISMComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedISMC
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,
          FPCGISMComponentBuilderParams *param_4)

{
  UPCGManagedISMComponent *pUVar1;
  
  pUVar1 = GetOrCreateManagedISMC(param_1,param_2,param_4,(FPCGContext *)0x0);
  return pUVar1;
}

// GetOrCreateManagedSplineMeshComponent @ 149d52b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGManagedSplineMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent
          (AActor *param_1,UPCGComponent *param_2,FPCGSplineMeshComponentBuilderParameters *param_3,
          FPCGContext *param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TObjectPtr<URuntimeVirtualTexture>,TSizedDefaultAllocator<32>_> *pTVar5;
  TOptional<unsigned_int> *pTVar6;
  TOptional<unsigned_int> *pTVar7;
  int iVar8;
  UStaticMesh *pUVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  UMaterialInterface *pUVar14;
  code *pcVar15;
  EObjectFlags EVar16;
  double dVar17;
  FName FVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  UPCGManagedSplineMeshComponent *pUVar23;
  UClass *pUVar24;
  USplineMeshComponent *pUVar25;
  FName *pFVar26;
  FName FVar27;
  longlong *plVar28;
  EObjectFlags EVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStackY_278 [32];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  FName local_218;
  UPCGManagedSplineMeshComponent *local_210;
  longlong local_208;
  FName local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  FName local_1e8;
  FString local_1e0;
  code *local_1d0;
  UPCGManagedSplineMeshComponent ***local_1c8;
  FString local_1c0;
  UPCGManagedSplineMeshComponent **local_1b0;
  FPCGSplineMeshComponentBuilderParameters *local_1a8;
  FName *local_1a0;
  FName local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [16];
  TVector2<double>_u_0 local_178;
  TVector2<double>_u_0 local_168;
  TVector2<double>_u_0 local_158;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_218 = (FName)param_1;
  if (((param_1 == (AActor *)0x0) || (param_2 == (UPCGComponent *)0x0)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTargetActor && InSourceComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                          ,0x194,L""), bVar19)) {
    pcVar15 = (code *)swi(3);
    pUVar23 = (UPCGManagedSplineMeshComponent *)(*pcVar15)();
    return pUVar23;
  }
  pUVar9 = (param_3->Descriptor).StaticMesh.field0_0x0.DebugPtr;
  if (((pUVar9 == (UStaticMesh *)0x0) || (lVar10 = (param_3->Descriptor)._padding_, lVar10 == 0)) ||
     (pUVar24 = Z_Construct_UClass_USplineMeshComponent_NoRegister(), FVar18 = local_218,
     pUVar24 == (UClass *)0x0)) {
    return (UPCGManagedSplineMeshComponent *)0x0;
  }
  iVar22 = (int)pUVar24->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar22) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar24->_padding_)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  if (!bVar19) {
    return (UPCGManagedSplineMeshComponent *)0x0;
  }
  if ((param_3->Descriptor)._padding_ == 0) {
    return (UPCGManagedSplineMeshComponent *)0x0;
  }
  local_200 = local_218;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,
               "UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId438,
               "UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent::FindMatchingManagedSplineMeshComponent"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
               ,0x1b6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId438);
  }
  local_210 = (UPCGManagedSplineMeshComponent *)0x0;
  if ((param_3->SettingsCrc).bValid != false) {
    local_1b0 = &local_210;
    local_1a0 = &local_218;
    local_1c8 = &local_1b0;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent'::__l16::<lambda_2>,void,UPCGManagedResource_*>
                ::Call;
    local_1a8 = param_3;
    UPCGComponent::ForEachManagedResource
              (param_2,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_1d0);
    if (local_210 != (UPCGManagedSplineMeshComponent *)0x0) {
      bVar31 = -1 < CpuChannel->Enabled;
      if (bVar31) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId474,
                   "UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent::MarkAsUsed",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                   ,0x1da);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId474);
      }
      (**(code **)(local_210->_padding_ + 0x2d8))();
      pUVar25 = UPCGManagedSplineMeshComponent::GetComponent(local_210);
      if (pUVar25 == (USplineMeshComponent *)0x0) {
        bVar20 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1642780288700382754>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGActorHelpers.cpp"
                            ,0x1de,"SplineMeshComponent");
        if (bVar20) {
          pcVar15 = (code *)swi(3);
          pUVar23 = (UPCGManagedSplineMeshComponent *)(*pcVar15)();
          return pUVar23;
        }
      }
      else {
        lVar10 = pUVar25->_padding_;
        lVar11 = *(longlong *)((longlong)local_218 + 0x1b8);
        if ((lVar10 != lVar11) ||
           (((lVar11 != 0 &&
             (*(char *)((longlong)&pUVar25->_padding_ + 3) != *(char *)(lVar11 + 0x1ab))) ||
            (*(char *)((longlong)&pUVar25->_padding_ + 3) != (char)(param_3->Descriptor)._padding_))
           )) {
          *(char *)((longlong)&pUVar25->_padding_ + 3) = (char)(param_3->Descriptor)._padding_;
          local_224 = 0x10101;
          uVar12 = *(undefined8 *)((longlong)local_200 + 0x1b8);
          if (lVar10 != 0) {
            local_228 = 0x10101;
            (**(code **)(pUVar25->_padding_ + 0x518))(pUVar25,&local_228);
          }
          local_1f8 = 0;
          cVar21 = (**(code **)(pUVar25->_padding_ + 0x508))(pUVar25,uVar12,&local_224,0);
          if (cVar21 == '\0') {
            PCGLog::Component::LogComponentAttachmentFailedWarning(param_4);
          }
        }
      }
      pUVar23 = local_210;
      if (bVar31) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar30) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_149d535a6;
    }
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_1e8 = (FName)pUVar9->_padding_;
  ::FName::ToString(&local_1e8,&local_1c0);
  ::FString::ConcatCF(&local_1e0,L"PCGSplineMeshComponent_",&local_1c0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  EVar29 = RF_NonPIEDuplicateTransient|RF_Transient;
  if (param_2->CurrentEditingMode != Preview) {
    EVar29 = RF_NoFlags;
  }
  EVar16 = local_1e0.Data.ArrayNum - RF_Public;
  if (local_1e0.Data.ArrayNum == 0) {
    EVar16 = RF_NoFlags;
  }
  pFVar26 = ::FName::FName(&local_198,EVar16,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,
                           FNAME_Add);
  lVar10 = (param_3->Descriptor)._padding_;
  local_200 = *pFVar26;
  if ((lVar10 == 0) ||
     (pUVar24 = Z_Construct_UClass_USplineMeshComponent_NoRegister(), pUVar24 == (UClass *)0x0)) {
LAB_149d52ef9:
    FVar27.ComparisonIndex.Value = 0;
    FVar27.Number = 0;
  }
  else {
    iVar22 = (int)pUVar24->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar22) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar24->_padding_)) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (!bVar30) goto LAB_149d52ef9;
    FVar27 = (FName)(param_3->Descriptor)._padding_;
  }
  FVar27 = MakeUniqueObjectName
                     ((UObject *)local_190,(UClass *)local_218,FVar27,
                      local_200.ComparisonIndex.Value.Value);
  pUVar25 = FSplineMeshComponentDescriptorBase::CreateComponent
                      ((FSplineMeshComponentDescriptorBase *)param_3,(UObject *)local_218,
                       *(FName *)FVar27,EVar29);
  local_148._s_0.X = (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.X;
  local_148._s_0.Y = (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.Y;
  local_148._s_0.Z = (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.Z;
  local_128._s_0.X = (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.X;
  local_128._s_0.Y = (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.Y;
  local_128._s_0.Z = (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.Z;
  local_108._s_0.X = (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.X;
  local_108._s_0.Y = (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.Y;
  local_108._s_0.Z = (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.Z;
  local_e8._s_0.X = (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.X;
  local_e8._s_0.Y = (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.Y;
  local_e8._s_0.Z = (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.Z;
  USplineMeshComponent::SetStartAndEnd
            (pUVar25,(TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0,
             (TVector<double> *)&local_128._s_0,(TVector<double> *)&local_148._s_0,true);
  USplineMeshComponent::SetStartRollDegrees
            (pUVar25,(param_3->SplineMeshParams).StartRollDegrees,true);
  USplineMeshComponent::SetEndRollDegrees(pUVar25,(param_3->SplineMeshParams).EndRollDegrees,true);
  local_188._0_8_ = (param_3->SplineMeshParams).StartScale.field0_0x0._s_0.X;
  local_188._8_8_ = (param_3->SplineMeshParams).StartScale.field0_0x0._s_0.Y;
  USplineMeshComponent::SetStartScale(pUVar25,(TVector2<double> *)(local_190 + 8),true);
  local_178._s_0.X = (param_3->SplineMeshParams).EndScale.field0_0x0._s_0.X;
  local_178._s_0.Y = (param_3->SplineMeshParams).EndScale.field0_0x0._s_0.Y;
  USplineMeshComponent::SetEndScale(pUVar25,(TVector2<double> *)&local_178._s_0,true);
  USplineMeshComponent::SetForwardAxis(pUVar25,(param_3->SplineMeshParams).ForwardAxis,true);
  USplineMeshComponent::SetSplineUpDir(pUVar25,&(param_3->SplineMeshParams).SplineUpDir,true);
  local_168._s_0.X = (param_3->SplineMeshParams).StartOffset.field0_0x0._s_0.X;
  local_168._s_0.Y = (param_3->SplineMeshParams).StartOffset.field0_0x0._s_0.Y;
  USplineMeshComponent::SetStartOffset(pUVar25,(TVector2<double> *)&local_168._s_0,true);
  local_158._s_0.X = (param_3->SplineMeshParams).EndOffset.field0_0x0._s_0.X;
  local_158._s_0.Y = (param_3->SplineMeshParams).EndOffset.field0_0x0._s_0.Y;
  USplineMeshComponent::SetEndOffset(pUVar25,(TVector2<double> *)&local_158._s_0,true);
  (pUVar25->SplineParams).NaniteClusterBoundsScale =
       (param_3->SplineMeshParams).NaniteClusterBoundsScale;
  pUVar25->SplineBoundaryMin = (param_3->SplineMeshParams).SplineBoundaryMin;
  pUVar25->SplineBoundaryMax = (param_3->SplineMeshParams).SplineBoundaryMax;
  pUVar25->field_0x77d =
       ((param_3->SplineMeshParams).bSmoothInterpRollScale * '\x02' ^ pUVar25->field_0x77d) & 2U ^
       pUVar25->field_0x77d;
  UActorComponent::RegisterComponent((UActorComponent *)pUVar25);
  AActor::AddInstanceComponent((AActor *)local_218,(UActorComponent *)pUVar25);
  uVar12 = *(undefined8 *)((longlong)FVar18 + 0x1b8);
  local_21c = 0x10101;
  if (pUVar25->_padding_ != 0) {
    local_220 = 0x10101;
    (**(code **)(pUVar25->_padding_ + 0x518))(pUVar25,&local_220);
  }
  local_1f0 = 0;
  cVar21 = (**(code **)(pUVar25->_padding_ + 0x508))(pUVar25,uVar12,&local_21c,0);
  if (cVar21 == '\0') {
    PCGLog::Component::LogComponentAttachmentFailedWarning(param_4);
  }
  local_208 = param_2->_padding_;
  if ((((longlong *)pUVar25->_padding_ <= &local_208) &&
      (&local_208 < (longlong *)pUVar25->_padding_ + *(int *)((longlong)&pUVar25->_padding_ + 4)))
     && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar30)) {
    pcVar15 = (code *)swi(3);
    pUVar23 = (UPCGManagedSplineMeshComponent *)(*pcVar15)();
    return pUVar23;
  }
  iVar22 = (int)pUVar25->_padding_;
  if (iVar22 == *(int *)((longlong)&pUVar25->_padding_ + 4)) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&pUVar25->_padding_,
                        (int *)((longlong)&pUVar25->_padding_ + 4));
  }
  *(int *)&pUVar25->_padding_ = iVar22 + 1;
  *(longlong *)(pUVar25->_padding_ + (longlong)iVar22 * 8) = local_208;
  if ((((ulonglong)pUVar25->_padding_ < 0x15528f869) &&
      (&PCGHelpers::DefaultPCGTag <
       (FName *)(pUVar25->_padding_ + (longlong)*(int *)((longlong)&pUVar25->_padding_ + 4) * 8)))
     && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar30)) {
    pcVar15 = (code *)swi(3);
    pUVar23 = (UPCGManagedSplineMeshComponent *)(*pcVar15)();
    return pUVar23;
  }
  iVar22 = (int)pUVar25->_padding_;
  if (iVar22 == *(int *)((longlong)&pUVar25->_padding_ + 4)) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)&pUVar25->_padding_,
                        (int *)((longlong)&pUVar25->_padding_ + 4));
  }
  *(int *)&pUVar25->_padding_ = iVar22 + 1;
  *(FName *)(pUVar25->_padding_ + (longlong)iVar22 * 8) = PCGHelpers::DefaultPCGTag;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar24 = Z_Construct_UClass_UPCGManagedSplineMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar24);
  local_c8._8_8_ = param_2;
  pUVar23 = (UPCGManagedSplineMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar28 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar28 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  UPCGManagedSplineMeshComponent::SetComponent(pUVar23,pUVar25);
  FSplineMeshComponentDescriptorBase::operator=
            ((FSplineMeshComponentDescriptorBase *)&pUVar23->Descriptor,
             (FSplineMeshComponentDescriptorBase *)param_3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_3->Descriptor).StaticMesh.field0_0x0.DebugPtr, pUVar9 != (UStaticMesh *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pTVar2 = &(pUVar23->Descriptor).OverrideMaterials;
  (pUVar23->Descriptor).StaticMesh.field0_0x0 = (param_3->Descriptor).StaticMesh.field0_0x0;
  pTVar3 = &(param_3->Descriptor).OverrideMaterials;
  if (pTVar2 != pTVar3) {
    iVar22 = (param_3->Descriptor).OverrideMaterials.ArrayNum;
    piVar1 = &(pUVar23->Descriptor).OverrideMaterials.ArrayMax;
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    iVar8 = *piVar1;
    (pUVar23->Descriptor).OverrideMaterials.ArrayNum = iVar22;
    if ((iVar22 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar22,iVar8,&pTVar2->AllocatorInstance,iVar22,piVar1);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar13,iVar22);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 = (param_3->Descriptor).OverlayMaterial.field0_0x0.DebugPtr,
     pUVar14 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  pTVar4 = &(param_3->Descriptor).RuntimeVirtualTextures;
  pTVar5 = &(pUVar23->Descriptor).RuntimeVirtualTextures;
  (pUVar23->Descriptor).OverlayMaterial.field0_0x0 =
       (param_3->Descriptor).OverlayMaterial.field0_0x0;
  if (pTVar5 != pTVar4) {
    iVar22 = (param_3->Descriptor).RuntimeVirtualTextures.ArrayNum;
    piVar1 = &(pUVar23->Descriptor).RuntimeVirtualTextures.ArrayMax;
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    iVar8 = *piVar1;
    (pUVar23->Descriptor).RuntimeVirtualTextures.ArrayNum = iVar22;
    if ((iVar22 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar22,iVar8,&pTVar5->AllocatorInstance,iVar22,piVar1);
      ConstructItems<TObjectPtr<URuntimeVirtualTexture>,TObjectPtr<URuntimeVirtualTexture>,int>
                ((pTVar5->AllocatorInstance).Data,(TObjectPtr<URuntimeVirtualTexture> *)pFVar13,
                 iVar22);
    }
  }
  pTVar6 = &(pUVar23->SplineMeshParams).Hash;
  (pUVar23->SplineMeshParams).ForwardAxis = (param_3->SplineMeshParams).ForwardAxis;
  (pUVar23->SplineMeshParams).bScaleMeshToBounds = (param_3->SplineMeshParams).bScaleMeshToBounds;
  (pUVar23->SplineMeshParams).bScaleMeshToLandscapeSplineFullWidth =
       (param_3->SplineMeshParams).bScaleMeshToLandscapeSplineFullWidth;
  dVar17 = (param_3->SplineMeshParams).SplineUpDir.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).SplineUpDir.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).SplineUpDir.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).SplineUpDir.field0_0x0._s_0.Y = dVar17;
  (pUVar23->SplineMeshParams).SplineUpDir.field0_0x0._s_0.Z =
       (param_3->SplineMeshParams).SplineUpDir.field0_0x0._s_0.Z;
  (pUVar23->SplineMeshParams).NaniteClusterBoundsScale =
       (param_3->SplineMeshParams).NaniteClusterBoundsScale;
  (pUVar23->SplineMeshParams).SplineBoundaryMin = (param_3->SplineMeshParams).SplineBoundaryMin;
  (pUVar23->SplineMeshParams).SplineBoundaryMax = (param_3->SplineMeshParams).SplineBoundaryMax;
  (pUVar23->SplineMeshParams).bSmoothInterpRollScale =
       (param_3->SplineMeshParams).bSmoothInterpRollScale;
  dVar17 = (param_3->SplineMeshParams).StartOffset.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).StartOffset.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).StartOffset.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).StartOffset.field0_0x0._s_0.Y = dVar17;
  dVar17 = (param_3->SplineMeshParams).EndOffset.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).EndOffset.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).EndOffset.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).EndOffset.field0_0x0._s_0.Y = dVar17;
  dVar17 = (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).StartPosition.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).StartPosition.field0_0x0._s_0.Y = dVar17;
  (pUVar23->SplineMeshParams).StartPosition.field0_0x0._s_0.Z =
       (param_3->SplineMeshParams).StartPosition.field0_0x0._s_0.Z;
  dVar17 = (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).StartTangent.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).StartTangent.field0_0x0._s_0.Y = dVar17;
  (pUVar23->SplineMeshParams).StartTangent.field0_0x0._s_0.Z =
       (param_3->SplineMeshParams).StartTangent.field0_0x0._s_0.Z;
  (pUVar23->SplineMeshParams).StartRollDegrees = (param_3->SplineMeshParams).StartRollDegrees;
  dVar17 = (param_3->SplineMeshParams).StartScale.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).StartScale.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).StartScale.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).StartScale.field0_0x0._s_0.Y = dVar17;
  dVar17 = (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).EndPosition.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).EndPosition.field0_0x0._s_0.Y = dVar17;
  (pUVar23->SplineMeshParams).EndPosition.field0_0x0._s_0.Z =
       (param_3->SplineMeshParams).EndPosition.field0_0x0._s_0.Z;
  dVar17 = (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).EndTangent.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).EndTangent.field0_0x0._s_0.Y = dVar17;
  (pUVar23->SplineMeshParams).EndTangent.field0_0x0._s_0.Z =
       (param_3->SplineMeshParams).EndTangent.field0_0x0._s_0.Z;
  (pUVar23->SplineMeshParams).EndRollDegrees = (param_3->SplineMeshParams).EndRollDegrees;
  pTVar7 = &(param_3->SplineMeshParams).Hash;
  dVar17 = (param_3->SplineMeshParams).EndScale.field0_0x0._s_0.Y;
  (pUVar23->SplineMeshParams).EndScale.field0_0x0._s_0.X =
       (param_3->SplineMeshParams).EndScale.field0_0x0._s_0.X;
  (pUVar23->SplineMeshParams).EndScale.field0_0x0._s_0.Y = dVar17;
  if (pTVar7 != pTVar6) {
    if ((param_3->SplineMeshParams).Hash.bIsSet == false) {
      if ((pUVar23->SplineMeshParams).Hash.bIsSet != false) {
        (pUVar23->SplineMeshParams).Hash.bIsSet = false;
      }
    }
    else {
      pTVar6->TypedValue = pTVar7->TypedValue;
      (pUVar23->SplineMeshParams).Hash.bIsSet = true;
    }
  }
  pUVar23->SettingsCrc = param_3->SettingsCrc;
  UPCGComponent::AddToManagedResources(param_2,(UPCGManagedResource *)pUVar23);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
LAB_149d535a6:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
    return pUVar23;
  }
  return pUVar23;
}

// GetOrCreateManagedSplineMeshComponent @ 149d53600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGManagedSplineMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateManagedSplineMeshComponent
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,
          FPCGSplineMeshComponentBuilderParameters *param_4)

{
  UPCGManagedSplineMeshComponent *pUVar1;
  
  pUVar1 = GetOrCreateManagedSplineMeshComponent(param_1,param_2,param_4,(FPCGContext *)0x0);
  return pUVar1;
}

// GetOrCreateSplineMeshComponent @ 149d53620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USplineMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateSplineMeshComponent
          (AActor *param_1,UPCGComponent *param_2,FPCGSplineMeshComponentBuilderParameters *param_3,
          FPCGContext *param_4)

{
  UPCGManagedSplineMeshComponent *this;
  USplineMeshComponent *pUVar1;
  
  this = GetOrCreateManagedSplineMeshComponent(param_1,param_2,param_3,param_4);
  if (this != (UPCGManagedSplineMeshComponent *)0x0) {
    pUVar1 = UPCGManagedSplineMeshComponent::GetComponent(this);
    return pUVar1;
  }
  return (USplineMeshComponent *)0x0;
}

// GetOrCreateSplineMeshComponent @ 149d53650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USplineMeshComponent * __cdecl
UPCGActorHelpers::GetOrCreateSplineMeshComponent
          (AActor *param_1,UPCGComponent *param_2,ulong64 param_3,
          FPCGSplineMeshComponentBuilderParameters *param_4)

{
  UPCGManagedSplineMeshComponent *this;
  USplineMeshComponent *pUVar1;
  
  this = GetOrCreateManagedSplineMeshComponent(param_1,param_2,param_4,(FPCGContext *)0x0);
  if (this != (UPCGManagedSplineMeshComponent *)0x0) {
    pUVar1 = UPCGManagedSplineMeshComponent::GetComponent(this);
    return pUVar1;
  }
  return (USplineMeshComponent *)0x0;
}

// GetPrivateStaticClass @ 149d54120

UClass * __cdecl UPCGActorHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGActorHelpers",
               &Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton,
               StaticRegisterNativesUPCGActorHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UPCGActorHelpers>,
               InternalVTableHelperCtorCaller<UPCGActorHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGActorHelpers.InnerSingleton;
}

// SpawnDefaultActor @ 149d65710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

AActor * __cdecl UPCGActorHelpers::SpawnDefaultActor(FSpawnDefaultActorParams *param_1)

{
  int iVar1;
  UWorld *this;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  AActor *this_00;
  FName FVar5;
  USceneComponent *this_01;
  longlong *plVar6;
  undefined1 auStack_178 [32];
  TVector<double>_u_0 local_138;
  undefined1 local_118 [128];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (((param_1->World != (UWorld *)0x0) &&
      (pUVar4 = (param_1->ActorClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0)) &&
     (pUVar3 = Z_Construct_UClass_AActor_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((param_1->ActorClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      FActorSpawnParameters::FActorSpawnParameters
                ((FActorSpawnParameters *)local_98,&param_1->SpawnParams);
      if ((ULevel *)local_98._32_8_ == (ULevel *)0x0) {
        local_98._32_8_ = (param_1->World->PersistentLevel).field0_0x0;
      }
      local_98._52_4_ = local_98._52_4_ | (RF_NonPIEDuplicateTransient|RF_Transient);
      this = param_1->World;
      pUVar4 = TSubclassOf<AActor>::operator*(&param_1->ActorClass);
      this_00 = UWorld::SpawnActor(this,pUVar4,&param_1->Transform,(FActorSpawnParameters *)local_98
                                  );
      if (this_00 == (AActor *)0x0) {
        this_00 = (AActor *)0x0;
      }
      else {
        local_138._s_0.X = (param_1->Transform).Scale3D.XY.m128d_f64[0];
        local_138._s_0.Y = (param_1->Transform).Scale3D.XY.m128d_f64[1];
        local_138._s_0.Z = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
        AActor::SetActorRelativeScale3D(this_00,(TVector<double> *)&local_138._s_0);
        this_01 = (this_00->RootComponent).field0_0x0.DebugPtr;
        if (this_01 == (USceneComponent *)0x0) {
          FVar5 = USceneComponent::GetDefaultSceneRootVariableName();
          FVar5 = *(FName *)FVar5;
          if (FVar5 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this_00,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_118,pUVar4);
          local_118._48_8_ = (FObjectInstancingGraph *)0x0;
          local_118._56_8_ = (UPackage *)0x0;
          local_118._24_4_ = RF_Transactional;
          local_118._40_8_ = (UObject *)0x0;
          local_118[0x20] = false;
          local_118._8_8_ = this_00;
          local_118._16_8_ = FVar5;
          this_01 = (USceneComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
          if (local_118._64_8_ != 0) {
            plVar6 = (longlong *)(local_118 + 0x50);
            if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
              plVar6 = (longlong *)local_118._104_8_;
            }
            (**(code **)(*plVar6 + 0x10))();
          }
          USceneComponent::SetWorldTransform
                    (this_01,&param_1->Transform,false,(FHitResult *)0x0,None);
          AActor::SetRootComponent(this_00,this_01);
          AActor::AddInstanceComponent(this_00,(UActorComponent *)this_01);
          UActorComponent::RegisterComponent((UActorComponent *)this_01);
        }
        if (param_1->bForceStaticMobility != false) {
          (this_01->Mobility).Value = '\0';
        }
        if (param_1->Parent != (AActor *)0x0) {
          AActor::AttachToActor
                    (this_00,param_1->Parent,&FAttachmentTransformRules::KeepWorldTransform,
                     (FName)0x0);
        }
      }
      if (local_98._64_8_ == 0) {
        return this_00;
      }
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
      return this_00;
    }
  }
  return (AActor *)0x0;
}

// SpawnDefaultActor @ 149d65960

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

AActor * __cdecl
UPCGActorHelpers::SpawnDefaultActor
          (UWorld *param_1,ULevel *param_2,TSubclassOf<AActor> param_3,TTransform<double> *param_4,
          FActorSpawnParameters *param_5,AActor *param_6)

{
  TObjectPtr<UClass>_u_0 TVar1;
  AActor *pAVar2;
  longlong *plVar3;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [224];
  AActor *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98,param_5);
  if (param_2 != (ULevel *)0x0) {
    local_98._32_8_ = param_2;
  }
  TVar1 = *(TObjectPtr<UClass>_u_0 *)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_188._0_8_ = param_1;
  local_188._8_8_ = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
  }
  local_188._16_8_ = (param_4->Rotation).XY.m128d_f64[0];
  local_188._24_8_ = (param_4->Rotation).XY.m128d_f64[1];
  local_188._32_8_ = (param_4->Rotation).ZW.m128d_f64[0];
  local_188._40_8_ = (param_4->Rotation).ZW.m128d_f64[1];
  local_188._48_8_ = (param_4->Translation).XY.m128d_f64[0];
  local_188._56_8_ = (param_4->Translation).XY.m128d_f64[1];
  local_188._64_8_ = (param_4->Translation).ZW.m128d_f64[0];
  local_188._72_8_ = (param_4->Translation).ZW.m128d_f64[1];
  local_188._80_8_ = (param_4->Scale3D).XY.m128d_f64[0];
  local_188._88_8_ = (param_4->Scale3D).XY.m128d_f64[1];
  local_188._96_8_ = (param_4->Scale3D).ZW.m128d_f64[0];
  local_188._104_8_ = (param_4->Scale3D).ZW.m128d_f64[1];
  FActorSpawnParameters::FActorSpawnParameters
            ((FActorSpawnParameters *)(local_188 + 0x70),(FActorSpawnParameters *)local_98);
  local_a0._0_1_ = true;
  local_a0._1_1_ = false;
  local_a8 = param_6;
  pAVar2 = SpawnDefaultActor((FSpawnDefaultActorParams *)local_188);
  if (local_188._176_8_ != 0) {
    plVar3 = (longlong *)(local_188 + 0xc0);
    if ((longlong *)local_188._216_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_188._216_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pAVar2;
}

// SpawnDefaultActor @ 149d65b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl
UPCGActorHelpers::SpawnDefaultActor
          (UWorld *param_1,ULevel *param_2,TSubclassOf<AActor> param_3,FName param_4,
          TTransform<double> *param_5,AActor *param_6)

{
  int iVar1;
  longlong lVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  bool bVar4;
  UClass *pUVar5;
  ULevel *pUVar6;
  FName FVar7;
  AActor *pAVar8;
  longlong *plVar9;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  undefined1 local_218 [104];
  longlong *local_1b0;
  undefined1 local_1a8 [224];
  AActor *local_c8;
  undefined2 local_c0;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  if (((param_1 == (UWorld *)0x0) || (lVar2 = *(longlong *)param_3.Class.field0_0x0, lVar2 == 0)) ||
     (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 == (UClass *)0x0)) {
    return (AActor *)0x0;
  }
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return (AActor *)0x0;
  }
  if (*(longlong *)param_3.Class.field0_0x0 == 0) {
    return (AActor *)0x0;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
  lVar2 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FVar7 = *(FName *)param_3.Class.field0_0x0;
      goto LAB_149d65bdc;
    }
  }
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
LAB_149d65bdc:
  pUVar6 = param_2;
  if (param_2 == (ULevel *)0x0) {
    pUVar6 = UWorld::GetCurrentLevel(param_1);
  }
  local_238 = 0;
  FVar7 = MakeUniqueObjectName
                    ((UObject *)local_228,(UClass *)pUVar6,FVar7,param_4.ComparisonIndex.Value.Value
                    );
  TVar3 = *(TObjectPtr<UClass>_u_0 *)param_3.Class.field0_0x0;
  local_b8._0_8_ = *(FName *)FVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_218._8_8_ = local_b8._8_8_;
  local_218._16_8_ = local_b8._16_8_;
  local_218._24_8_ = local_b8._24_8_;
  local_218._40_8_ = local_b8._40_8_;
  local_218[0x30] = local_b8[0x30];
  local_218[0x31] = local_b8[0x31];
  local_218._32_8_ = local_b8._32_8_;
  local_218[0x32] = local_218[0x32] & 0xe0 | local_b8[0x32] & 0x1f;
  local_1b0 = (longlong *)0x0;
  local_218[0x33] = local_b8[0x33];
  local_218._52_4_ = local_b8._52_4_;
  local_218._64_8_ = local_b8._64_8_;
  local_218._0_8_ = local_b8._0_8_;
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)*plVar9)(plVar9,local_218 + 0x50);
    local_b8._32_8_ = local_218._32_8_;
  }
  local_218._32_8_ = local_b8._32_8_;
  if (param_2 != (ULevel *)0x0) {
    local_218._32_8_ = param_2;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_1a8._0_8_ = param_1;
  local_1a8._8_8_ = TVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_1a8._16_8_ = (param_5->Rotation).XY.m128d_f64[0];
  local_1a8._24_8_ = (param_5->Rotation).XY.m128d_f64[1];
  local_1a8._32_8_ = (param_5->Rotation).ZW.m128d_f64[0];
  local_1a8._40_8_ = (param_5->Rotation).ZW.m128d_f64[1];
  local_1a8._48_8_ = (param_5->Translation).XY.m128d_f64[0];
  local_1a8._56_8_ = (param_5->Translation).XY.m128d_f64[1];
  local_1a8._64_8_ = (param_5->Translation).ZW.m128d_f64[0];
  local_1a8._72_8_ = (param_5->Translation).ZW.m128d_f64[1];
  local_1a8._80_8_ = (param_5->Scale3D).XY.m128d_f64[0];
  local_1a8._88_8_ = (param_5->Scale3D).XY.m128d_f64[1];
  local_1a8._96_8_ = (param_5->Scale3D).ZW.m128d_f64[0];
  local_1a8._104_8_ = (param_5->Scale3D).ZW.m128d_f64[1];
  FActorSpawnParameters::FActorSpawnParameters
            ((FActorSpawnParameters *)(local_1a8 + 0x70),(FActorSpawnParameters *)local_218);
  local_c0._0_1_ = true;
  local_c0._1_1_ = false;
  local_c8 = param_6;
  pAVar8 = SpawnDefaultActor((FSpawnDefaultActorParams *)local_1a8);
  if (local_1a8._176_8_ != 0) {
    plVar9 = (longlong *)(local_1a8 + 0xc0);
    if ((longlong *)local_1a8._216_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_1a8._216_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_218._64_8_ != 0) {
    plVar9 = (longlong *)(local_218 + 0x50);
    if (local_1b0 != (longlong *)0x0) {
      plVar9 = local_1b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
    return pAVar8;
  }
  return pAVar8;
}

// StaticRegisterNativesUPCGActorHelpers @ 149d66180

void __cdecl UPCGActorHelpers::StaticRegisterNativesUPCGActorHelpers(void)

{
  return;
}

// ForEachActorInLevel<APCGWorldActor,void> @ 149f27750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPCGActorHelpers::ForEachActorInLevel<APCGWorldActor,void>
          (ULevel *param_1,TFunctionRef<bool___cdecl(AActor_*)> *param_2)

{
  UClass *local_res10 [3];
  TFunctionRef<bool___cdecl(AActor_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res10[0] = APCGWorldActor::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10[0]);
  }
  ForEachActorInLevel(param_1,(TSubclassOf<AActor>)local_res10,&local_18);
  return;
}

