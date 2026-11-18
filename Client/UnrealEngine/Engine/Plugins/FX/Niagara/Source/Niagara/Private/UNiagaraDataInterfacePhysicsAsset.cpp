// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 34

// StaticClass @ 148e89c50

UClass * __cdecl UNiagaraDataInterfacePhysicsAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfacePhysicsAsset",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePhysicsAsset>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePhysicsAsset>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton;
}

// UNiagaraDataInterfacePhysicsAsset @ 148ea5090

UNiagaraDataInterfacePhysicsAsset * __thiscall
UNiagaraDataInterfacePhysicsAsset::UNiagaraDataInterfacePhysicsAsset
          (UNiagaraDataInterfacePhysicsAsset *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePhysicsAsset__6B_;
  (this->DefaultSource).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MeshUserParameter);
  (this->SourceComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceComponents).ArrayNum = 0;
  (this->SourceComponents).ArrayMax = 0;
  (this->PhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).ArrayNum = 0;
  (this->PhysicsAssets).ArrayMax = 0;
  return this;
}

// UNiagaraDataInterfacePhysicsAsset @ 148ea5110

UNiagaraDataInterfacePhysicsAsset * __thiscall
UNiagaraDataInterfacePhysicsAsset::UNiagaraDataInterfacePhysicsAsset
          (UNiagaraDataInterfacePhysicsAsset *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this_00 = &(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePhysicsAsset__6B_;
  (this->DefaultSource).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->SoftSourceActor).SoftObjectPtr,(FObjectPtr)&local_res8);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MeshUserParameter);
  (this->SourceComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceComponents).ArrayNum = 0;
  (this->SourceComponents).ArrayMax = 0;
  (this->PhysicsAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsAssets).ArrayNum = 0;
  (this->PhysicsAssets).ArrayMax = 0;
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_1e = 0;
  local_20 = 1;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&local_res8,
                     (FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->MeshUserParameter).Parameter._padding_ = iVar1;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIPhysicsAssetProxy__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~UNiagaraDataInterfacePhysicsAsset @ 148ea6d20

void __thiscall
UNiagaraDataInterfacePhysicsAsset::~UNiagaraDataInterfacePhysicsAsset
          (UNiagaraDataInterfacePhysicsAsset *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfacePhysicsAsset__6B_;
  pFVar1 = (this->PhysicsAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftSourceActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148ea7800

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

USkeletalMeshComponent * __thiscall
`UNiagaraDataInterfacePhysicsAsset::ExtractSourceComponent'::__l2::<lambda_1>::operator()
          (void *this,AActor *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  USkeletalMeshComponent *pUVar13;
  USkeletalMesh *pUVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  char local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_res18 = param_2;
  if (param_1 != (AActor *)0x0) {
    pUVar11 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
    iVar3 = (int)pUVar11->_padding_;
    if ((((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar11->_padding_)) &&
        (pUVar13 = (USkeletalMeshComponent *)param_1[1]._padding_,
        pUVar13 != (USkeletalMeshComponent *)0x0)) && (((uint)pUVar13->_padding_ >> 0x1e & 1) == 0))
    {
      return pUVar13;
    }
  }
  do {
    if (param_1 == (AActor *)0x0) {
      return (USkeletalMeshComponent *)0x0;
    }
    pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_1->OwnedComponents);
    iVar3 = *(int *)&(pTVar12->Elements).field_0x28;
    iVar17 = 0;
    iVar19 = 0;
    uVar9 = 1;
    puVar1 = &(pTVar12->Elements).field_0x10;
    iVar10 = 0;
    if (iVar3 != 0) {
      puVar4 = *(uint **)&(pTVar12->Elements).field_0x20;
      puVar20 = (uint *)puVar1;
      if (puVar4 != (uint *)0x0) {
        puVar20 = puVar4;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        iVar17 = iVar17 + 1;
        iVar19 = iVar19 + 0x20;
        iVar10 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148ea792c;
        uVar16 = puVar20[iVar17];
      }
      uVar9 = ~(uVar16 - 1) & uVar16;
      uVar2 = (ulonglong)uVar9 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_res20 = (int)lVar6;
      iVar10 = local_res20 + -1 + iVar19;
      if (iVar3 < iVar10) {
        iVar10 = iVar3;
      }
    }
LAB_148ea792c:
    uVar16 = *(uint *)&(pTVar12->Elements).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uVar9,iVar17);
    TStack_88.CurrentBitIndex = iVar10;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_88._28_4_ = local_44;
    TStack_88.BaseBitIndex = iVar19;
    uStack_68 = CONCAT44(uStack_94,
                         *(int *)&(pTVar12->Elements).field_0x8 -
                         *(int *)&(pTVar12->Elements).field_0x34);
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pUVar13 = (USkeletalMeshComponent *)(*pcVar7)();
      return pUVar13;
    }
    uVar9 = *(uint *)&(pTVar12->Elements).field_0x28;
    if (uVar16 != uVar9) {
      puVar5 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
      puVar18 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar18 = puVar5;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        iVar17 = iVar17 + 1;
        uVar15 = uVar15 + 0x20;
        uVar16 = uVar9;
        if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar17)
        goto LAB_148ea7a30;
        uVar16 = *(uint *)(puVar18 + (longlong)iVar17 * 4);
      }
      uVar2 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar16 = (int)lVar6 + -1 + uVar15;
      if ((int)uVar9 < (int)uVar16) {
        uVar16 = uVar9;
      }
    }
LAB_148ea7a30:
    while( true ) {
      if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
          (int)uStack_68) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_88.CurrentBitIndex == uVar16) &&
         (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar13 = *(USkeletalMeshComponent **)
                 (*(longlong *)&pTVar12->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      if (pUVar13 != (USkeletalMeshComponent *)0x0) {
        pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar3 = (int)pUVar11->_padding_;
        if ((((iVar3 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar11->_padding_)) && (((uint)pUVar13->_padding_ >> 0x1e & 1) == 0)) &&
           (pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar13),
           pUVar14 != (USkeletalMesh *)0x0)) {
          return pUVar13;
        }
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    if (local_res18 == '\0') {
      return (USkeletalMeshComponent *)0x0;
    }
    param_1 = AActor::GetParentActor(param_1);
  } while( true );
}

// BuildShaderParameters @ 148eacdb0

void __thiscall
UNiagaraDataInterfacePhysicsAsset::BuildShaderParameters
          (UNiagaraDataInterfacePhysicsAsset *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIPhysicsAssetLocal::FShaderParameters>::
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
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x50;
  return;
}

// CalculateTickGroup @ 148ead110

ETickingGroup __thiscall
UNiagaraDataInterfacePhysicsAsset::CalculateTickGroup
          (UNiagaraDataInterfacePhysicsAsset *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    return *(ETickingGroup *)((longlong)param_1 + 0xe920);
  }
  return TG_PrePhysics;
}

// CanExecuteOnTarget @ 148eadd30

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::CanExecuteOnTarget
          (UNiagaraDataInterfacePhysicsAsset *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// CopyToInternal @ 148eaf670

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::CopyToInternal
          (UNiagaraDataInterfacePhysicsAsset *this,UNiagaraDataInterface *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TUniquePtr<FNiagaraDataInterfaceProxy,TDefaultDelete<FNiagaraDataInterfaceProxy>_> *pTVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UPhysicsAsset *pUVar8;
  bool bVar9;
  UClass *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FString local_28;
  FString local_18;
  
  bVar9 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar9) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar10 = StaticClass();
    iVar5 = (int)pUVar10->_padding_;
    if ((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar10->_padding_)) {
      pTVar3 = &param_1[2].Proxy;
      if ((TArray<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)pTVar3
          != &this->PhysicsAssets) {
        iVar5 = (this->PhysicsAssets).ArrayNum;
        puVar1 = &param_1[2].field_0x34;
        pFVar7 = (this->PhysicsAssets).AllocatorInstance.Data;
        *(int *)&param_1[2].field_0x30 = iVar5;
        if ((iVar5 == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar5,*(int *)puVar1,(ForAnyElementType *)pTVar3,iVar5,(int *)puVar1);
          if (iVar5 != 0) {
            memcpy(pTVar3->Ptr,pFVar7,(longlong)iVar5 << 3);
          }
        }
      }
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1]._padding_,
                 (TPersistentObjectPtr<FSoftObjectPath> *)&this->SoftSourceActor);
      plVar4 = &param_1[2]._padding_;
      if ((TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *)plVar4 != &this->SourceComponents) {
        iVar5 = (this->SourceComponents).ArrayNum;
        piVar2 = (int *)((longlong)&param_1[2]._padding_ + 4);
        pFVar7 = (this->SourceComponents).AllocatorInstance.Data;
        iVar6 = *piVar2;
        *(int *)&param_1[2]._padding_ = iVar5;
        if ((iVar5 == 0) && (iVar6 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar5,iVar6,(ForAnyElementType *)plVar4,iVar5,piVar2);
          if (iVar5 != 0) {
            memcpy((void *)*plVar4,pFVar7,(longlong)iVar5 << 3);
          }
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 = (this->DefaultSource).field0_0x0.DebugPtr, pUVar8 != (UPhysicsAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      *(TObjectPtr<UPhysicsAsset>_u_0 *)(param_1 + 1) = (this->DefaultSource).field0_0x0;
      *(longlong *)&param_1[1].field_0x30 = (this->MeshUserParameter).Parameter._padding_;
      *(int *)&param_1[2]._padding_ = (int)(this->MeshUserParameter).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[2]._padding_,
                 &(this->MeshUserParameter).Parameter.VarData);
      return true;
    }
    pFVar11 = GetTypeName<UNiagaraDataInterfacePhysicsAsset>(&local_28);
    pwVar12 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar12,pwVar13);
  }
  pFVar11 = GetTypeName<UNiagaraDataInterfacePhysicsAsset>(&local_28);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar12);
}

// DestroyPerInstanceData @ 148eb4a30

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
UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData
          (UNiagaraDataInterfacePhysicsAsset *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *pFVar4;
  FCommandList *pFVar5;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [32];
  code *local_118 [2];
  undefined **local_108;
  longlong lStack_100;
  ulong64 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (*(longlong *)param_1 != 0) {
    local_c0 = (undefined ***)0x0;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIPhysicsAssetData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIPhysicsAssetData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    lStack_d0 = *(longlong *)param_1;
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIPhysicsAssetData::Release_::__l5::TSTR_DeleteResource441>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_b8._0_8_ = local_e8[0];
      local_90 = local_c0;
      local_a8 = local_d8;
      lStack_a0 = lStack_d0;
      local_98 = local_c8;
      local_e8[0] = (code *)0x0;
      local_88 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIPhysicsAssetData::Release'::__l5::TSTR_DeleteResource441>::Get
                         ();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_b8,pFVar6);
      uVar8 = (ulonglong)local_88;
      if (2 < uVar8) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar7 = local_90;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_b8);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar7 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar7 = local_c0;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    *(undefined8 *)param_1 = 0;
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  local_f8 = param_2->ID;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  lStack_100 = lVar1;
  pFVar4 = FRenderCommandList::GetInstanceTLS();
  if (pFVar4 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData760>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
    local_78._0_8_ = local_118[0];
    local_50 = local_f0;
    local_68 = local_108;
    lStack_60 = lStack_100;
    local_58 = local_f8;
    local_118[0] = (code *)0x0;
    local_48 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfacePhysicsAsset::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData760>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar6);
    uVar8 = (ulonglong)local_48;
    if (2 < uVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_78);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar7 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar7 = local_f0;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// Equals @ 148eb6470

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::Equals
          (UNiagaraDataInterfacePhysicsAsset *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfacePhysicsAsset_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfacePhysicsAsset_const_>(&local_28);
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
    if (*(int *)&param_1[2].field_0x30 == (this->PhysicsAssets).ArrayNum) {
      bVar2 = CompareItems<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,int>
                        ((TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr> *)param_1[2].Proxy.Ptr,
                         (TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr> *)
                         (this->PhysicsAssets).AllocatorInstance.Data,*(int *)&param_1[2].field_0x30
                        );
      if (bVar2) {
        bVar2 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&param_1[1]._padding_,
                           (FSoftObjectPath *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8);
        if ((bVar2) &&
           (iVar1 = (int)param_1[2]._padding_, iVar1 == (this->SourceComponents).ArrayNum)) {
          bVar2 = CompareItems<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,int>
                            ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                             param_1[2]._padding_,
                             (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)
                             (this->SourceComponents).AllocatorInstance.Data,iVar1);
          if ((bVar2) &&
             ((((UPhysicsAsset *)param_1[1]._padding_ == (this->DefaultSource).field0_0x0.DebugPtr
               && ((this->MeshUserParameter).Parameter._padding_ ==
                   *(longlong *)&param_1[1].field_0x30)) &&
              ((int)(this->MeshUserParameter).Parameter._padding_ == (int)param_1[2]._padding_)))) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// ExtractSourceComponent @ 148eb7b70

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
UNiagaraDataInterfacePhysicsAsset::ExtractSourceComponent
          (UNiagaraDataInterfacePhysicsAsset *this,FNiagaraSystemInstance *param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TWeakObjectPtr<UPhysicsAsset,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  AActor *this_00;
  UNiagaraSystem *this_01;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FNiagaraTypeDefinition *pFVar8;
  TObjectPtr<UObject> TVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  FUObjectItem *pFVar13;
  USkeletalMeshComponent *this_02;
  USkeletalMesh *pUVar14;
  UObjectBaseUtility *this_03;
  longlong *plVar15;
  UPhysicsAsset *pUVar16;
  USkinnedMeshComponent *pUVar17;
  UPhysicsAsset *pUVar18;
  int iVar19;
  FObjectPtr_u_0 FVar20;
  longlong lVar21;
  USkeletalMeshComponent *this_04;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  AActor *local_res18;
  USkeletalMeshComponent *local_res20;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  FString local_100;
  UObject *local_f0;
  UObject *local_e8;
  UClass *local_e0;
  UObject *local_d8;
  USkeletalMeshComponent *local_d0;
  UObject *local_c8;
  UPhysicsAsset *local_c0;
  UPhysicsAsset *local_b8;
  undefined8 local_b0;
  UPhysicsAsset *local_a8;
  undefined1 local_a0 [24];
  FNiagaraTypeDefinitionHandle local_88 [2];
  ForAnyElementType local_80;
  undefined8 local_78;
  undefined1 local_68 [40];
  
  *&(param_2->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->Rotation).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->Scale3D).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->Scale3D).ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  local_res10 = 0;
  if ((((this->MeshUserParameter).Parameter._padding_ != 0) &&
      (pFVar8 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           &(this->MeshUserParameter).Parameter._padding_),
      (pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) &&
     (param_1 != (FNiagaraSystemInstance *)0x0)) {
    local_a0._0_4_ = -1;
    local_a0._8_8_ = (FNiagaraParameterStore *)0x0;
    local_a0._16_8_ = 0;
    local_88[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_88,&FNiagaraTypeDefinition::Vec4Def);
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0;
    TVar9 = FNiagaraParameterDirectBinding<UObject_*>::Init
                      ((FNiagaraParameterDirectBinding<UObject_*> *)local_a0,
                       (FNiagaraParameterStore *)local_68,
                       (FNiagaraVariable *)&param_1->InstanceParameters);
    this_00 = *(AActor **)TVar9.field0_0x0;
    if (this_00 != (AActor *)0x0) {
      pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar10->_padding_)) {
        pUVar10 = Z_Construct_UClass_AActor_NoRegister();
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          if ((2 < (byte)LogPhysicsAsset._0_1_) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsAsset),
             2 < (byte)LogPhysicsAsset._0_1_)) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,(FString *)(local_68 + 8),(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsAsset);
            if ((FWeakObjectPtr)local_68._8_8_ != (FWeakObjectPtr)0x0) {
              FMemory::Free((void *)local_68._8_8_);
            }
            if (2 < (byte)LogPhysicsAsset._0_1_) {
              this_01 = param_1->System;
              if ((this_01 == (UNiagaraSystem *)0x0) || (this_01->_padding_ == 0)) {
                ::FString::FString(&local_100,L"None");
              }
              else {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this_01,&local_100,(UObject *)0x0,None);
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsAsset);
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        else {
          local_res20 = `UNiagaraDataInterfacePhysicsAsset::ExtractSourceComponent'::__l2::
                        <lambda_1>::operator()(local_res8,this_00,false);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20 != (USkeletalMeshComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res20);
          }
          FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_res20);
        }
      }
      else if (((uint)this_00->_padding_ >> 0x1e & 1) == 0) {
        local_res18 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_res18);
      }
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    goto LAB_148eb8079;
  }
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SoftSourceActor);
  if ((pUVar11 == (UObject *)0x0) &&
     (*(longlong *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8 != 0)) {
    pUVar12 = FSoftObjectPath::ResolveObject
                        ((FSoftObjectPath *)&(this->SoftSourceActor).SoftObjectPtr.field_0x8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    bVar6 = (*IsInAsyncLoadingThread)();
    if (((bVar6) && (pUVar12 != (UObject *)0x0)) &&
       (pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar12->field_0xc),
       ((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_148eb7ec1:
      if ((*(uint *)&pUVar12->field_0x8 >> 0x1e & 1) != 0) goto LAB_148eb7ecf;
      bVar6 = true;
    }
    else {
      local_f0 = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->SoftSourceActor,(FObjectPtr)&local_f0);
      if (pUVar12 != (UObject *)0x0) goto LAB_148eb7ec1;
LAB_148eb7ecf:
      bVar6 = false;
    }
    pUVar11 = (UObject *)0x0;
    if (bVar6) {
      pUVar11 = pUVar12;
    }
  }
  if (pUVar11 == (UObject *)0x0) {
LAB_148eb7fb5:
    this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr);
    this_04 = this_02;
    if (this_02 == (USkeletalMeshComponent *)0x0) goto LAB_148eb8079;
    do {
      pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar7 = (int)pUVar10->_padding_;
      if ((((iVar7 <= *(int *)(this_04->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar10->_padding_)) && (this_04 != (USkeletalMeshComponent *)0x0)) &&
         (pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_04),
         pUVar14 != (USkeletalMesh *)0x0)) {
        local_d0 = this_04;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_04);
        }
        FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_d0);
        break;
      }
      plVar15 = &this_04->_padding_;
      this_04 = (USkeletalMeshComponent *)*plVar15;
    } while ((USkeletalMeshComponent *)*plVar15 != (USkeletalMeshComponent *)0x0);
    bVar6 = FWeakObjectPtr::IsValid(&local_128);
    if (bVar6) goto LAB_148eb8079;
    pUVar10 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_02,pUVar10);
    if (pUVar11 == (UObject *)0x0) goto LAB_148eb8079;
    local_c8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FVar20.Handle = (UObject *)&local_c8;
  }
  else {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar10->_padding_)) goto LAB_148eb7fb5;
    pUVar10 = Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar10->_padding_)) {
      pcVar5 = *(code **)(*(longlong *)pUVar11 + 0x738);
      local_e0 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_e0);
      }
      local_d8 = (UObject *)(*pcVar5)(pUVar11,&local_e0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d8);
      }
      FVar20.Handle = (UObject *)&local_d8;
    }
    else {
      local_e8 = *(UObject **)&pUVar11[0x11].field_0x20;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_e8);
      }
      FVar20.Handle = (UObject *)&local_e8;
    }
  }
  FWeakObjectPtr::operator=(&local_128,(FObjectPtr)FVar20);
LAB_148eb8079:
  piVar1 = &(this->SourceComponents).ArrayMax;
  (this->SourceComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->SourceComponents).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PhysicsAssets).ArrayMax;
  (this->PhysicsAssets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PhysicsAssets).AllocatorInstance,0,piVar1);
  }
  pUVar16 = (this->DefaultSource).field0_0x0.DebugPtr;
  this_03 = (UObjectBaseUtility *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr);
  do {
    if (this_03 == (UObjectBaseUtility *)0x0) {
LAB_148eb8136:
      bVar6 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_128,
                         (void *)0x0);
      if (bVar6) {
        if (pUVar16 == (UPhysicsAsset *)0x0) {
          return;
        }
        local_110.ObjectIndex = 0;
        local_110.ObjectSerialNumber = 0;
        local_b0 = 0;
        pTVar2 = &this->SourceComponents;
        FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_b0);
        pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= &local_110) && (&local_110 < pFVar4 + (this->SourceComponents).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->SourceComponents).ArrayNum;
        if (iVar7 == (this->SourceComponents).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar2->AllocatorInstance,&(this->SourceComponents).ArrayMax);
        }
        (this->SourceComponents).ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_110;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        local_108.ObjectIndex = 0;
        local_108.ObjectSerialNumber = 0;
        local_a8 = pUVar16;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar16);
        }
        FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_a8);
        pFVar4 = (FWeakObjectPtr *)(this->PhysicsAssets).AllocatorInstance.Data;
        if (((pFVar4 <= &local_108) && (&local_108 < pFVar4 + (this->PhysicsAssets).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->PhysicsAssets).ArrayNum;
        if (iVar7 == (this->PhysicsAssets).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(this->PhysicsAssets).AllocatorInstance,
                             &(this->PhysicsAssets).ArrayMax);
        }
        iVar19 = iVar7 + 1;
        lVar21 = (longlong)iVar7;
        local_120 = local_108;
      }
      else {
        if (pUVar16 == (UPhysicsAsset *)0x0) {
          pUVar17 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&local_128);
          pUVar18 = USkinnedMeshComponent::GetPhysicsAsset(pUVar17);
          if (pUVar18 == (UPhysicsAsset *)0x0) {
            return;
          }
        }
        pTVar2 = &this->SourceComponents;
        pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= &local_128) && (&local_128 < pFVar4 + (this->SourceComponents).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->SourceComponents).ArrayNum;
        if (iVar7 == (this->SourceComponents).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar2->AllocatorInstance,&(this->SourceComponents).ArrayMax);
        }
        (this->SourceComponents).ArrayNum = iVar7 + 1;
        pTVar3 = &this->PhysicsAssets;
        *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_128;
        if (pUVar16 == (UPhysicsAsset *)0x0) {
          pUVar17 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&local_128);
          local_b8 = USkinnedMeshComponent::GetPhysicsAsset(pUVar17);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_b8 != (UPhysicsAsset *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_b8);
          }
          local_118.ObjectIndex = 0;
          local_118.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_b8 != (UPhysicsAsset *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_b8);
          }
          FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_b8);
          pFVar4 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= &local_118) && (&local_118 < pFVar4 + (this->PhysicsAssets).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = (this->PhysicsAssets).ArrayNum;
          if (iVar7 == (this->PhysicsAssets).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar3->AllocatorInstance,&(this->PhysicsAssets).ArrayMax);
          }
          iVar19 = iVar7 + 1;
          lVar21 = (longlong)iVar7;
          local_120 = local_118;
        }
        else {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          local_120.ObjectIndex = 0;
          local_120.ObjectSerialNumber = 0;
          local_c0 = pUVar16;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar16);
          }
          FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_c0);
          pFVar4 = (FWeakObjectPtr *)(pTVar3->AllocatorInstance).Data;
          if (((pFVar4 <= &local_120) && (&local_120 < pFVar4 + (this->PhysicsAssets).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = (this->PhysicsAssets).ArrayNum;
          if (iVar7 == (this->PhysicsAssets).ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar3->AllocatorInstance,&(this->PhysicsAssets).ArrayMax);
          }
          iVar19 = iVar7 + 1;
          lVar21 = (longlong)iVar7;
        }
      }
      (this->PhysicsAssets).ArrayNum = iVar19;
      *(FWeakObjectPtr *)((this->PhysicsAssets).AllocatorInstance.Data + lVar21 * 8) = local_120;
      return;
    }
    pUVar10 = UNiagaraPhysicsAssetDICollectorInterface::StaticClass();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress(this_03,pUVar10);
    if (plVar15 != (longlong *)0x0) {
      pUVar16 = (UPhysicsAsset *)
                (**(code **)(*plVar15 + 0x10))
                          (plVar15,param_2,&this->SourceComponents,&this->PhysicsAssets);
      goto LAB_148eb8136;
    }
    this_03 = *(UObjectBaseUtility **)&this_03[5].field_0x8;
  } while( true );
}

// GetClosestDistance @ 148ebcf40

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetClosestDistance
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetClosestElement @ 148ebcf50

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetClosestElement
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetClosestPoint @ 148ebcf60

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetClosestPoint
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetElementDistance @ 148ebcfc0

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetElementDistance
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetElementPoint @ 148ebcfd0

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetElementPoint
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetNumBoxes @ 148ebec10

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetNumBoxes
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetNumCapsules @ 148ebec20

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetNumCapsules
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetNumSpheres @ 148ebf020

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetNumSpheres
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetPrivateStaticClass @ 148ebfce0

UClass * __cdecl UNiagaraDataInterfacePhysicsAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfacePhysicsAsset",
               &Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfacePhysicsAsset>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfacePhysicsAsset>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfacePhysicsAsset.InnerSingleton;
}

// GetProjectionPoint @ 148ec00a0

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetProjectionPoint
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetTexturePoint @ 148ec0fb0

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetTexturePoint
          (UNiagaraDataInterfacePhysicsAsset *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetVMExternalFunction @ 148ec4000

void __thiscall
UNiagaraDataInterfacePhysicsAsset::GetVMExternalFunction
          (UNiagaraDataInterfacePhysicsAsset *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_328 [8];
  FDelegateAllocation local_320;
  undefined1 local_310 [8];
  FDelegateAllocation local_308;
  undefined1 local_2f8 [8];
  FDelegateAllocation local_2f0;
  undefined1 local_2e0 [8];
  FDelegateAllocation local_2d8;
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  undefined1 local_2b0 [8];
  FDelegateAllocation local_2a8;
  undefined1 local_298 [8];
  FDelegateAllocation local_290;
  undefined1 local_280 [8];
  FDelegateAllocation local_278;
  undefined1 local_268 [8];
  FDelegateAllocation local_260;
  undefined1 local_250 [8];
  FDelegateAllocation local_248;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDestructionSentinel local_208;
  FDestructionSentinel local_1f0;
  FDestructionSentinel local_1d8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIPhysicsAssetLocal::GetNumBoxesName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x3fa,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_328 = (undefined1  [8])0x0;
    local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_320.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
               (FWriteAccessScope *)&local_148);
    local_130 = &local_320;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_320);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetNumBoxesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
               (FWriteAccessScope *)&local_238);
    if ((local_320.DelegateSize != 0) &&
       (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_320.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_320,0,0,0x10);
      local_320.DelegateSize = 0;
    }
    if (local_238.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
    }
    if (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_320.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_328;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetNumSpheresName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x3ff,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_310 = (undefined1  [8])0x0;
    local_308.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_308.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
               (FWriteAccessScope *)&local_128);
    local_110 = &local_308;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_308);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetNumSpheresBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
               (FWriteAccessScope *)&local_220);
    if ((local_308.DelegateSize != 0) &&
       (local_308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_308.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_308,0,0,0x10);
      local_308.DelegateSize = 0;
    }
    if (local_220.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
    }
    if (local_308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_308.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_310;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetNumCapsulesName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x404,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2f8 = (undefined1  [8])0x0;
    local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2f0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f8,
               (FWriteAccessScope *)&local_108);
    local_f0 = &local_2f0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2f0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetNumCapsulesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f8,
               (FWriteAccessScope *)&local_208);
    if ((local_2f0.DelegateSize != 0) &&
       (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2f0,0,0,0x10);
      local_2f0.DelegateSize = 0;
    }
    if (local_208.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
    }
    if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2f0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2f8;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetClosestPointName) {
    if ((((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 9)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 9",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x409,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2e0 = (undefined1  [8])0x0;
    local_2d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
               (FWriteAccessScope *)&local_e8);
    local_d0 = &local_2d8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2d8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetClosestPointBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e0,
               (FWriteAccessScope *)&local_1f0);
    if ((local_2d8.DelegateSize != 0) &&
       (local_2d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2d8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2d8,0,0,0x10);
      local_2d8.DelegateSize = 0;
    }
    if (local_1f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
    }
    if (local_2d8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2d8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2e0;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetClosestElementName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x40e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2c8 = (undefined1  [8])0x0;
    local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
               (FWriteAccessScope *)&local_c8);
    local_b0 = &local_2c0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2c0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetClosestElementBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
               (FWriteAccessScope *)&local_1d8);
    if ((local_2c0.DelegateSize != 0) &&
       (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2c0,0,0,0x10);
      local_2c0.DelegateSize = 0;
    }
    if (local_1d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
    }
    if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2c0.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2c8;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetElementPointName) {
    if ((((param_1->InputParamLocations).ArrayNum != 7) || (param_1->NumOutputs != 9)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 7 && BindingInfo.GetNumOutputs() == 9",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x413,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_2b0 = (undefined1  [8])0x0;
    local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_2a8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_2a8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2a8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetElementPointBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
               (FWriteAccessScope *)&local_1c0);
    if ((local_2a8.DelegateSize != 0) &&
       (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_2a8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_2a8,0,0,0x10);
      local_2a8.DelegateSize = 0;
    }
    if (local_1c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
    }
    if (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_2a8.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_2b0;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetElementDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x418,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_298 = (undefined1  [8])0x0;
    local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_290.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_290;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_290);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetElementDistanceBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_1a8);
    if ((local_290.DelegateSize != 0) &&
       (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_290,0,0,0x10);
      local_290.DelegateSize = 0;
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_290.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_298;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetClosestDistanceName) {
    if ((((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x41d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_280 = (undefined1  [8])0x0;
    local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_278.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_278;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_278);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetClosestDistanceBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_190);
    if ((local_278.DelegateSize != 0) &&
       (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_278.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_278,0,0,0x10);
      local_278.DelegateSize = 0;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    if (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_278.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_280;
  }
  else if (FVar1 == NDIPhysicsAssetLocal::GetTexturePointName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x422,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_268 = (undefined1  [8])0x0;
    local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_260.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_260;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_260);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetTexturePointBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
               (FWriteAccessScope *)&local_178);
    if ((local_260.DelegateSize != 0) &&
       (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_260.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_260,0,0,0x10);
      local_260.DelegateSize = 0;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_260.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_268;
  }
  else {
    if (FVar1 != NDIPhysicsAssetLocal::GetProjectionPointName) {
      return;
    }
    if ((((param_1->InputParamLocations).ArrayNum != 10) || (param_1->NumOutputs != 10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 10 && BindingInfo.GetNumOutputs() == 10",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                           ,0x427,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_250 = (undefined1  [8])0x0;
    local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_248.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_248;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_248);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfacePhysicsAsset_GetProjectionPointBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
               (FWriteAccessScope *)&local_160);
    if ((local_248.DelegateSize != 0) &&
       (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_248.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_248,0,0,0x10);
      local_248.DelegateSize = 0;
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    if (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_248.DelegateAllocator);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_250;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  return;
}

// HasPreSimulateTick @ 148ec6a10

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::HasPreSimulateTick(UNiagaraDataInterfacePhysicsAsset *this)

{
  return true;
}

// HasTickGroupPrereqs @ 148ec6c10

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::HasTickGroupPrereqs(UNiagaraDataInterfacePhysicsAsset *this)

{
  return true;
}

// InitPerInstanceData @ 148ec7f80

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
UNiagaraDataInterfacePhysicsAsset::InitPerInstanceData
          (UNiagaraDataInterfacePhysicsAsset *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  memset(param_1,0,0xe930);
  FNDIPhysicsAssetArrays::FNDIPhysicsAssetArrays
            ((FNDIPhysicsAssetArrays *)((longlong)param_1 + 0x40));
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                       ,0x2df,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FNDIPhysicsAssetData::Init(param_1,this,param_2);
  return true;
}

// PerInstanceDataSize @ 148ec8fa0

int __thiscall
UNiagaraDataInterfacePhysicsAsset::PerInstanceDataSize(UNiagaraDataInterfacePhysicsAsset *this)

{
  return 0xe930;
}

// PerInstanceTick @ 148ec90c0

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

bool __thiscall
UNiagaraDataInterfacePhysicsAsset::PerInstanceTick
          (UNiagaraDataInterfacePhysicsAsset *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ETickingGroup EVar4;
  UObject *pUVar5;
  longlong lVar6;
  undefined1 auStackY_e8 [32];
  TArray<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a8
  ;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((((param_1 != (void *)0x0) && (*(longlong *)param_1 != 0)) &&
      (param_2 != (FNiagaraSystemInstance *)0x0)) &&
     (this != (UNiagaraDataInterfacePhysicsAsset *)0x0)) {
    local_98.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_98.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_98.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_98.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_98.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_98.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    ExtractSourceComponent(this,param_2,&local_98);
    local_a8.ArrayNum = (this->SourceComponents).ArrayNum;
    lVar6 = (longlong)local_a8.ArrayNum;
    _Src = (this->SourceComponents).AllocatorInstance.Data;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,_Src,lVar6 << 3);
    }
    EVar4 = ComputeTickingGroup(&local_a8);
    *(ETickingGroup *)((longlong)param_1 + 0xe920) = EVar4;
    if ((0 < (this->PhysicsAssets).ArrayNum) &&
       (bVar2 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)(this->PhysicsAssets).AllocatorInstance.Data), bVar2))
    {
      if (((this->PhysicsAssets).ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->PhysicsAssets).AllocatorInstance.Data);
      if ((pUVar5 != (UObject *)0x0) &&
         ((this->PhysicsAssets).ArrayNum == (this->SourceComponents).ArrayNum)) {
        NDIPhysicsAssetLocal::UpdateInternalArrays
                  (&this->PhysicsAssets,&this->SourceComponents,
                   (FNDIPhysicsAssetArrays *)((longlong)param_1 + 0x40),&param_2->WorldTransform,
                   &local_98);
      }
    }
  }
  return false;
}

// PostInitProperties @ 148ecb390

void __thiscall
UNiagaraDataInterfacePhysicsAsset::PostInitProperties(UNiagaraDataInterfacePhysicsAsset *this)

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

// PostLoad @ 148ecb620

void __thiscall UNiagaraDataInterfacePhysicsAsset::PostLoad(UNiagaraDataInterfacePhysicsAsset *this)

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
    if (*(UNiagaraDataInterfacePhysicsAsset **)FVar5 == this) {
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

// ProvidePerInstanceDataForRenderThread @ 148ecc390

void __thiscall
UNiagaraDataInterfacePhysicsAsset::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfacePhysicsAsset *this,void *param_1,void *param_2,ulong64 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (void *)0x0)) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    memcpy((void *)((longlong)param_1 + 0x40),(void *)((longlong)param_2 + 0x40),0xe8e0);
    *(undefined4 *)((longlong)param_1 + 0xe920) = *(undefined4 *)((longlong)param_2 + 0xe920);
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfacePhysicsAsset.cpp"
                       ,0x4be,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetShaderParameters @ 148ed0ba0

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
UNiagaraDataInterfacePhysicsAsset::SetShaderParameters
          (UNiagaraDataInterfacePhysicsAsset *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  double dVar2;
  double dVar3;
  FNiagaraDataInterfaceProxy *pFVar4;
  uchar *puVar5;
  FNDIPhysicsAssetBuffer *pFVar6;
  code *pcVar7;
  bool bVar8;
  ulong64 uVar9;
  FNDIPhysicsAssetData *pFVar10;
  FShaderParametersMetadata *pFVar11;
  FRHIShaderResourceView *pFVar12;
  uint uVar13;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = param_1->DataInterfaceProxy;
  uVar9 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar10 = TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIPhysicsAssetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIPhysicsAssetData,0>_>
                    *)(pFVar4 + 1),uVar9);
  uVar13 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar11 = TShaderParameterStructTypeInfo<NDIPhysicsAssetLocal::FShaderParameters>::
            GetStructMetadata();
  param_1->ParametersOffset = pFVar11->Size + uVar13;
  puVar5 = param_1->BaseParameters;
  if (((pFVar10 == (FNDIPhysicsAssetData *)0x0) ||
      (pFVar6 = pFVar10->AssetBuffer, pFVar6 == (FNDIPhysicsAssetBuffer *)0x0)) ||
     ((int)pFVar6->_padding_ == -1)) {
    pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x10) = pFVar12;
    pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x18) = pFVar12;
    pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x20) = pFVar12;
    pFVar12 = FNiagaraRenderer::GetDummyUIntBuffer();
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x28) = pFVar12;
    puVar1 = puVar5 + uVar13;
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
    *(undefined8 *)(puVar5 + (ulonglong)uVar13 + 0x30) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x38) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(puVar5 + (ulonglong)uVar13 + 0x40) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x48) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pFVar12 = (pFVar6->WorldTransformBuffer).SRV.Reference;
    if (pFVar12 == (FRHIShaderResourceView *)0x0) {
      pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x10) = pFVar12;
    pFVar12 = (pFVar6->InverseTransformBuffer).SRV.Reference;
    if (pFVar12 == (FRHIShaderResourceView *)0x0) {
      pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x18) = pFVar12;
    pFVar12 = (pFVar6->ElementExtentBuffer).SRV.Reference;
    if (pFVar12 == (FRHIShaderResourceView *)0x0) {
      pFVar12 = FNiagaraRenderer::GetDummyFloat4Buffer();
    }
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x20) = pFVar12;
    pFVar12 = (pFVar6->PhysicsTypeBuffer).SRV.Reference;
    if (pFVar12 == (FRHIShaderResourceView *)0x0) {
      pFVar12 = FNiagaraRenderer::GetDummyUIntBuffer();
    }
    *(FRHIShaderResourceView **)(puVar5 + (ulonglong)uVar13 + 0x28) = pFVar12;
    *(uint *)(puVar5 + uVar13) = (pFVar10->AssetArrays).ElementOffsets.BoxOffset;
    *(uint *)(puVar5 + (ulonglong)uVar13 + 4) = (pFVar10->AssetArrays).ElementOffsets.SphereOffset;
    *(uint *)(puVar5 + (ulonglong)uVar13 + 8) = (pFVar10->AssetArrays).ElementOffsets.CapsuleOffset;
    *(uint *)(puVar5 + (ulonglong)uVar13 + 0xc) = (pFVar10->AssetArrays).ElementOffsets.NumElements;
    dVar2 = (pFVar10->BoxOrigin).field0_0x0._s_0.Y;
    dVar3 = (pFVar10->BoxOrigin).field0_0x0._s_0.Z;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x30) = (float)(pFVar10->BoxOrigin).field0_0x0._s_0.X;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x34) = (float)dVar2;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x38) = (float)dVar3;
    dVar2 = (pFVar10->BoxExtent).field0_0x0._s_0.Y;
    dVar3 = (pFVar10->BoxExtent).field0_0x0._s_0.Z;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x40) = (float)(pFVar10->BoxExtent).field0_0x0._s_0.X;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x44) = (float)dVar2;
    *(float *)(puVar5 + (ulonglong)uVar13 + 0x48) = (float)dVar3;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset @ 148ed4c40

void __cdecl
UNiagaraDataInterfacePhysicsAsset::StaticRegisterNativesUNiagaraDataInterfacePhysicsAsset(void)

{
  return;
}

