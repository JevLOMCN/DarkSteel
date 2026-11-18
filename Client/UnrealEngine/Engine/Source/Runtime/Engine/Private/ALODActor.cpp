// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// StaticClass @ 147e8d5f0

UClass * __cdecl ALODActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALODActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODActor",&Z_Registration_Info_UClass_ALODActor.InnerSingleton,
               StaticRegisterNativesALODActor,0x358,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ALODActor>,InternalVTableHelperCtorCaller<ALODActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALODActor.InnerSingleton;
}

// ALODActor @ 147ea3940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALODActor * __thiscall ALODActor::ALODActor(ALODActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALODActor__6B_;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  *(undefined8 *)&this->InstancedStaticMeshComponents = 0;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x8 = 0;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x20 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x28 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x34 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x40 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x48 = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UHLODProxy *)0x0;
  (this->Key).ComparisonIndex = 0;
  (this->Key).Number = 0;
  (this->SubActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubActors).ArrayNum = 0;
  (this->SubActors).ArrayMax = 0;
  return this;
}

// ALODActor @ 147ea39d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALODActor * __thiscall ALODActor::ALODActor(ALODActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UStaticMeshComponent *pUVar5;
  float fVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALODActor__6B_;
  (this->StaticMeshComponent).field0_0x0.DebugPtr = (UStaticMeshComponent *)0x0;
  *(undefined8 *)&this->InstancedStaticMeshComponents = 0;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x8 = 0;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x20 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x28 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x34 = 0;
  *(undefined8 *)&(this->InstancedStaticMeshComponents).field_0x40 = 0;
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x48 = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UHLODProxy *)0x0;
  (this->Key).ComparisonIndex = 0;
  (this->Key).Number = 0;
  (this->SubActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubActors).ArrayNum = 0;
  (this->SubActors).ArrayMax = 0;
  this->bHasActorTriedToRegisterComponents = '\0';
  this->LODDrawDistance = 5000.0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf3 | 3;
  pFVar3 = ::FName::FName(&local_res8,L"StaticMeshComponent0");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  pUVar5 = (UStaticMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->StaticMeshComponent).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)((longlong)&pUVar5->_padding_ + 3) = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)pUVar5,false);
  *(byte *)((longlong)&pUVar5->_padding_ + 6) = *(byte *)((longlong)&pUVar5->_padding_ + 6) & 0x9e;
  *(byte *)((longlong)&pUVar5->_padding_ + 4) = *(byte *)((longlong)&pUVar5->_padding_ + 4) & 0xfe;
  *(byte *)((longlong)&pUVar5->_padding_ + 2) = *(byte *)((longlong)&pUVar5->_padding_ + 2) | 8;
  fVar6 = GetLODDrawDistanceWithOverride(this);
  *(float *)&pUVar5->_padding_ = fVar6;
  this->bHasPatchedUpParent = '\0';
  this->bNeedsDrawDistanceReset = '\0';
  this->ResetDrawDistanceTime = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->StaticMeshComponent).field0_0x0.DebugPtr,
     pUVar5 != (UStaticMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->StaticMeshComponent).field0_0x0;
  this->bCachedIsBuilt = '\0';
  this->LastIsBuiltTime = 0.0;
  this->CachedNumHLODLevels = '\x01';
  return this;
}

// ~ALODActor @ 147ea8990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::~ALODActor(ALODActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ALODActor__6B_;
  pFVar1 = (this->SubActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->InstancedStaticMeshComponents).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InstancedStaticMeshComponents).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstancedStaticMeshComponents);
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 147eab020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall `ALODActor::IsBuilt'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  UObject *pUVar8;
  bool bVar9;
  UPrimitiveComponent *pUVar10;
  UClass *pUVar11;
  UHLODProxy *this_00;
  ALODActor *pAVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  UClass *local_res10;
  
  lVar5 = *(longlong *)this;
  plVar14 = *(longlong **)(lVar5 + 0x330);
  iVar3 = *(int *)(lVar5 + 0x338);
  plVar1 = plVar14 + iVar3;
LAB_147eab050:
  do {
    if (*(int *)(lVar5 + 0x338) != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar14 == plVar1) {
      pUVar8 = *(UObject **)(*(longlong *)(*(longlong *)this + 0x2c0) + 0x5a0);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UObject *)0x0) goto LAB_147eab16e;
LAB_147eab18b:
        pAVar12 = *(ALODActor **)this;
        this_00 = (pAVar12->Proxy).field0_0x0.DebugPtr;
        if (this_00 == (UHLODProxy *)0x0) goto LAB_147eab1a3;
      }
      else {
        if (pUVar8 == (UObject *)0x0) goto LAB_147eab18b;
        UE::GC::MarkAsReachable(pUVar8);
LAB_147eab16e:
        pAVar12 = *(ALODActor **)this;
        if ((pAVar12->Proxy).field0_0x0.DebugPtr == (UHLODProxy *)0x0) {
          return false;
        }
        this_00 = (pAVar12->Proxy).field0_0x0.DebugPtr;
      }
      bVar9 = UHLODProxy::ContainsDataForActor(this_00,pAVar12);
      if (!bVar9) {
        return false;
      }
LAB_147eab1a3:
      lVar5 = *(longlong *)this;
      puVar13 = *(undefined8 **)(lVar5 + 0x330);
      iVar3 = *(int *)(lVar5 + 0x338);
      puVar2 = puVar13 + iVar3;
      while( true ) {
        if (*(int *)(lVar5 + 0x338) != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar13 == puVar2) break;
        pAVar12 = (ALODActor *)*puVar13;
        if (pAVar12 != (ALODActor *)0x0) {
          pUVar11 = ALODActor::StaticClass();
          iVar4 = (int)pUVar11->_padding_;
          if (((iVar4 <= *(int *)(pAVar12->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
               &pUVar11->_padding_)) && (bVar9 = ALODActor::IsBuilt(pAVar12,true), !bVar9)) {
            return false;
          }
        }
        puVar13 = puVar13 + 1;
      }
      return true;
    }
    plVar6 = (longlong *)*plVar14;
    if (plVar6 != (longlong *)0x0) {
      pcVar7 = *(code **)(*plVar6 + 0x738);
      local_res10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      pUVar10 = (UPrimitiveComponent *)(*pcVar7)(plVar6,&local_res10);
      if (pUVar10 == (UPrimitiveComponent *)0x0) {
        return false;
      }
      pUVar10 = UPrimitiveComponent::GetLODParentPrimitive(pUVar10);
      if (pUVar10 == (UPrimitiveComponent *)0x0) {
        return false;
      }
      pUVar11 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar4 = (int)pUVar11->_padding_;
      if (*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar4) {
        return false;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar11->_padding_) {
        return false;
      }
      if (*(longlong *)&pUVar10->field_0xa8 != *(longlong *)this) {
        return false;
      }
      pUVar8 = *(UObject **)&pUVar10[1].field_0x50;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar8 == (UObject *)0x0) {
          return false;
        }
        UE::GC::MarkAsReachable(pUVar8);
        plVar14 = plVar14 + 1;
        goto LAB_147eab050;
      }
      if (pUVar8 == (UObject *)0x0) {
        return false;
      }
    }
    plVar14 = plVar14 + 1;
  } while( true );
}

// operator() @ 147eab240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`ALODActor::PostLoad'::__l2::<lambda_1>::operator()
          (void *this,UInstancedStaticMeshComponent *param_1)

{
  UObject *pUVar1;
  TPairInitializer<FHLODInstancingKey_&,UInstancedStaticMeshComponent_*_&> local_res8;
  UObject *local_28;
  UMaterialInterface *local_20;
  UObject **local_18;
  UInstancedStaticMeshComponent ***local_10;
  
  pUVar1 = (UObject *)param_1->_padding_;
  local_res8.Value = (UInstancedStaticMeshComponent **)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_28 = pUVar1;
  local_20 = UStaticMeshComponent::GetMaterial((UStaticMeshComponent *)local_res8.Value,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_20 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_18 = &local_28;
  local_10 = &local_res8.Value;
  TSet<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>,TDefaultMapHashableKeyFuncs<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FHLODInstancingKey_&,UInstancedStaticMeshComponent_*_&>_>
            ((TSet<TTuple<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>_>,TDefaultMapHashableKeyFuncs<FHLODInstancingKey,TObjectPtr<UInstancedStaticMeshComponent>,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x2c8),&local_res8,(bool *)&local_18);
  return;
}

// GetComponentsBoundingBox @ 147ebf0f0

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

TBox<double> * __thiscall
ALODActor::GetComponentsBoundingBox
          (ALODActor *this,TBox<double> *__return_storage_ptr__,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  double *pdVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  char local_88;
  undefined1 local_87 [7];
  UClass *local_80;
  undefined1 local_78 [48];
  undefined1 local_48;
  undefined4 uStack_47;
  undefined2 uStack_43;
  undefined1 uStack_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  AActor::GetComponentsBoundingBox((AActor *)this,__return_storage_ptr__,param_1,false);
  if (((__return_storage_ptr__->Max).field0_0x0._s_0.Y -
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y) *
      ((__return_storage_ptr__->Max).field0_0x0._s_0.X -
      (__return_storage_ptr__->Min).field0_0x0._s_0.X) *
      ((__return_storage_ptr__->Max).field0_0x0._s_0.Z -
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z) == 0.0) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    local_48 = 0;
    uStack_47 = 0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    uStack_43 = 0;
    uStack_41 = 0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  if (!param_1) {
    return __return_storage_ptr__;
  }
  local_88 = '\0';
  pUVar7 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 != (UClass *)0x0) goto LAB_147ebf1c1;
  }
  else if (pUVar7 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_147ebf1c1:
    pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar8 != (UClass *)0x0) {
      iVar4 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pUVar8 = pUVar7;
      if (bVar6) goto LAB_147ebf1f6;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_147ebf1f6:
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_80 = pUVar7;
  if (pUVar8 == pUVar9) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_80,(<lambda_1>)&local_88);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::GetComponentsBoundingBox_::__l8::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_80,(<lambda_1>)&local_88);
  }
  if (local_88 == '\0') {
    pFVar11 = (this->SubActors).AllocatorInstance.Data;
    iVar4 = (this->SubActors).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->SubActors).ArrayNum != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_87);
      }
      if (pFVar11 == pFVar1) break;
      plVar5 = *(longlong **)pFVar11;
      if (plVar5 == (longlong *)0x0) {
LAB_147ebf353:
        pFVar11 = pFVar11 + 8;
      }
      else {
        pdVar10 = (double *)(**(code **)(*plVar5 + 0x670))(plVar5,local_78,param_1,param_2);
        if (__return_storage_ptr__->IsValid == '\0') {
          if (*(char *)(pdVar10 + 6) != '\0') {
            dVar2 = pdVar10[1];
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar10;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
            dVar2 = pdVar10[3];
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = pdVar10[2];
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
            dVar2 = pdVar10[5];
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = pdVar10[4];
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
            *(double *)&__return_storage_ptr__->IsValid = pdVar10[6];
          }
          goto LAB_147ebf353;
        }
        if (*(char *)(pdVar10 + 6) == '\0') goto LAB_147ebf353;
        dVar2 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        pFVar11 = pFVar11 + 8;
        dVar3 = *pdVar10;
        if (dVar3 <= dVar2) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar13,uVar12);
        dVar2 = pdVar10[1];
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
        if (dVar3 <= dVar2) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
        dVar2 = pdVar10[2];
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
        if (dVar3 <= dVar2) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
        dVar2 = pdVar10[3];
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
        if (dVar2 <= dVar3) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar13,uVar12);
        dVar2 = pdVar10[4];
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
        if (dVar2 <= dVar3) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
        dVar2 = pdVar10[5];
        uVar12 = SUB84(dVar2,0);
        uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
        if (dVar2 <= dVar3) {
          uVar12 = SUB84(dVar3,0);
          uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDetailedInfoInternal @ 147ebf570

FString * __thiscall
ALODActor::GetDetailedInfoInternal(ALODActor *this,FString *__return_storage_ptr__)

{
  UStaticMeshComponent *pUVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  pUVar1 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  bVar3 = pUVar1 == (UStaticMeshComponent *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,L"No_StaticMeshComponent");
  }
  else {
    pFVar2 = (FString *)(**(code **)(pUVar1->_padding_ + 0x48))(pUVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetHLODDistanceOverride @ 147ec03d0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl ALODActor::GetHLODDistanceOverride(void)

{
  ParseOverrideDistancesCVar();
  return &HLODDistances;
}

// GetLODDrawDistanceWithOverride @ 147ec0730

float __thiscall ALODActor::GetLODDrawDistanceWithOverride(ALODActor *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = HLODDistances.ArrayNum;
  if ((((int)(uint)this->CachedNumHLODLevels <= iVar3) &&
      (iVar4 = this->LODLevel + ~(uint)this->CachedNumHLODLevels + iVar3, -1 < iVar4)) &&
     (iVar4 < iVar3)) {
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar5 = (float)(*pcVar1)();
        return fVar5;
      }
    }
    if (*(float *)(HLODDistances.AllocatorInstance.Data + (longlong)iVar4 * 4) != 0.0) {
      return *(float *)(HLODDistances.AllocatorInstance.Data + (longlong)iVar4 * 4);
    }
  }
  return this->LODDrawDistance;
}

// GetPrivateStaticClass @ 147ec3d20

UClass * __cdecl ALODActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALODActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LODActor",&Z_Registration_Info_UClass_ALODActor.InnerSingleton,
               StaticRegisterNativesALODActor,0x358,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ALODActor>,InternalVTableHelperCtorCaller<ALODActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALODActor.InnerSingleton;
}

// HasValidLODChildren @ 147ecb6b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ALODActor::HasValidLODChildren(ALODActor *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  AActor *this_00;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UPrimitiveComponent *pUVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  UClass *local_res8;
  undefined8 *local_38;
  undefined8 local_30;
  
  iVar3 = (this->SubActors).ArrayNum;
  if (0 < iVar3) {
    pFVar16 = (this->SubActors).AllocatorInstance.Data;
    pFVar1 = pFVar16 + (longlong)iVar3 * 8;
    while( true ) {
      pUVar14 = (UClass *)0x0;
      if ((this->SubActors).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar16 == pFVar1) break;
      this_00 = *(AActor **)pFVar16;
      if (this_00 != (AActor *)0x0) {
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        pUVar8 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UClass *)0x0) goto LAB_147ecb74b;
        }
        else if (pUVar8 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147ecb74b:
          pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar9 != (UClass *)0x0) {
            iVar4 = (int)pUVar9->_padding_;
            if (((int)pUVar8->_padding_ < iVar4) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar4 * 8) !=
                &pUVar9->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pUVar14 = pUVar8;
            }
          }
        }
        pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
        local_res8 = pUVar8;
        if (pUVar14 == pUVar9) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          AActor::
          ForEachComponent_Internal<UPrimitiveComponent_const_,1,0,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (this_00,(TSubclassOf<UActorComponent>)&local_res8,
                     (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)&local_38);
        }
        else {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          AActor::
          ForEachComponent_Internal<UPrimitiveComponent_const_,0,0,_AActor::GetComponents<UPrimitiveComponent_const_,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                    (this_00,(TSubclassOf<UActorComponent>)&local_res8,
                     (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)&local_38);
        }
        iVar4 = (int)local_30;
        puVar2 = local_38 + (int)local_30;
        puVar15 = local_38;
        while( true ) {
          if ((int)local_30 != iVar4) {
            `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if (puVar15 == puVar2) break;
          if (((UPrimitiveComponent *)*puVar15 != (UPrimitiveComponent *)0x0) &&
             (pUVar10 = UPrimitiveComponent::GetLODParentPrimitive((UPrimitiveComponent *)*puVar15),
             pUVar10 != (UPrimitiveComponent *)0x0)) {
            pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                  *)&this->_padding_);
            uVar12 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar10 >> 4))
                     * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            if (*(int *)&(pTVar11->Elements).field_0x8 != *(int *)&(pTVar11->Elements).field_0x34) {
              FVar5 = (pTVar11->Hash).SecondaryData;
              FVar13 = (ForElementType<FSetElementId>)&pTVar11->Hash;
              if (FVar5 != (ForElementType<FSetElementId>)0x0) {
                FVar13 = FVar5;
              }
              iVar7 = *(int *)((longlong)FVar13 +
                              (ulonglong)(pTVar11->HashSize - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
              if (iVar7 != -1) {
                do {
                  if (*(UPrimitiveComponent **)
                       (*(longlong *)&pTVar11->Elements + (longlong)iVar7 * 0x10) == pUVar10) {
                    if (local_38 != (undefined8 *)0x0) {
                      FMemory::Free(local_38);
                    }
                    return true;
                  }
                  iVar7 = *(int *)(*(longlong *)&pTVar11->Elements + 8 + (longlong)iVar7 * 0x10);
                } while (iVar7 != -1);
              }
            }
          }
          puVar15 = puVar15 + 1;
        }
        if (local_38 != (undefined8 *)0x0) {
          FMemory::Free(local_38);
        }
      }
      pFVar16 = pFVar16 + 8;
    }
  }
  return false;
}

// IsBuilt @ 147ecd420

bool __thiscall ALODActor::IsBuilt(ALODActor *this,bool param_1)

{
  double dVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  ALODActor *local_res18 [2];
  
  if (((this->_padding_ & 0x20000000000) == 0) && (((uint)this->_padding_ >> 0x1e & 1) == 0)) {
    local_res18[0] = this;
    QueryPerformanceCounter(&local_res8);
    dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if ((param_1) || (__real_3fe0000000000000 < dVar1 - this->LastIsBuiltTime)) {
      bVar2 = `ALODActor::IsBuilt'::__l2::<lambda_1>::operator()(local_res18);
      this->bCachedIsBuilt = '\0';
      this->field_0x341 = this->field_0x341 | bVar2 << 4;
      this->LastIsBuiltTime = dVar1;
    }
    return this->bCachedIsBuilt;
  }
  return true;
}

// IsLevelBoundsRelevant @ 147ecd840

bool __thiscall ALODActor::IsLevelBoundsRelevant(ALODActor *this)

{
  return false;
}

// OnCVarsChanged @ 147ecff40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ALODActor::OnCVarsChanged(void)

{
  float fVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  TObjectIterator<ALODActor> local_88;
  TObjectIterator<ALODActor> local_70;
  TObjectIterator<ALODActor> local_58;
  TObjectIterator<ALODActor> local_40;
  
  uVar11 = 0;
  if (GMaximumAllowedHLODLevel != CachedMaximumAllowedHLODLevel) {
    CachedMaximumAllowedHLODLevel = GMaximumAllowedHLODLevel;
    local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ObjectArray.ArrayNum = 0;
    local_58.ObjectArray.ArrayMax = 0;
    local_58.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = StaticClass();
    GetObjectsOfClass(pUVar9,&local_58.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted))
    ;
    TObjectIterator<ALODActor>::Advance(&local_58);
    FVar3.Data = local_58.ObjectArray.AllocatorInstance.Data;
    lVar13 = (longlong)local_58.ObjectArray.ArrayNum;
    local_88.ObjectArray.ArrayNum = local_58.ObjectArray.ArrayNum;
    local_88.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.ObjectArray.ArrayNum == 0) {
      local_88.ObjectArray.ArrayMax = 0;
      uVar8 = local_58.Index;
      uVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_58.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_88,
                 local_58.ObjectArray.ArrayNum,&local_88.ObjectArray.ArrayMax);
      memcpy(local_88.ObjectArray.AllocatorInstance.Data,FVar3.Data,lVar13 << 3);
      uVar8 = local_58.Index;
      uVar10 = local_58.ObjectArray.ArrayNum;
    }
    while (local_88.Index = uVar8, uVar8 != uVar10) {
      uVar7 = 0;
      if ((int)uVar8 < local_88.ObjectArray.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UpdateRegistrationToMatchMaximumLODLevel
                (*(ALODActor **)
                  (local_88.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar8 * 8));
      TObjectIterator<ALODActor>::Advance(&local_88);
      uVar8 = local_88.Index;
    }
    if (local_88.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.ObjectArray.AllocatorInstance.Data);
    }
    if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) &&
     (_Init_thread_header(&::_TSS1), FVar3 = HLODDistances.AllocatorInstance, ::_TSS1 == -1)) {
    lVar13 = (longlong)HLODDistances.ArrayNum;
    CachedDistances.ArrayNum = HLODDistances.ArrayNum;
    if (HLODDistances.ArrayNum == 0) {
      CachedDistances.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,HLODDistances.ArrayNum,0,&CachedDistances.AllocatorInstance,
                 HLODDistances.ArrayNum,&CachedDistances.ArrayMax);
      memcpy(CachedDistances.AllocatorInstance.Data,FVar3.Data,lVar13 << 2);
    }
    atexit(`ALODActor::OnCVarsChanged'::__l2::_dynamic_atexit_destructor_for__CachedDistances__);
    _Init_thread_footer(&::_TSS1);
  }
  ParseOverrideDistancesCVar();
  uVar12 = uVar11;
  if (0 < CachedDistances.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar8 = 0;
      if ((int)uVar10 < CachedDistances.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = *(float *)(CachedDistances.AllocatorInstance.Data + uVar12);
      if (((int)uVar10 < 0) || (HLODDistances.ArrayNum <= (int)uVar10)) goto LAB_147ed01fc;
      uVar8 = 0;
      if ((int)uVar10 < HLODDistances.ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (fVar1 != *(float *)(HLODDistances.AllocatorInstance.Data + uVar12)) goto LAB_147ed01fc;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 4;
    } while ((int)(uVar10 + 1) < CachedDistances.ArrayNum);
  }
  if (CachedDistances.ArrayNum != HLODDistances.ArrayNum) {
LAB_147ed01fc:
    iVar4 = HLODDistances.ArrayNum;
    FVar3.Data = HLODDistances.AllocatorInstance.Data;
    lVar13 = (longlong)HLODDistances.ArrayNum;
    CachedDistances.ArrayNum = HLODDistances.ArrayNum;
    if ((HLODDistances.ArrayNum == 0) && (CachedDistances.ArrayMax == 0)) {
      CachedDistances.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,HLODDistances.ArrayNum,CachedDistances.ArrayMax,
                 &CachedDistances.AllocatorInstance,HLODDistances.ArrayNum,&CachedDistances.ArrayMax
                );
      if (iVar4 != 0) {
        memcpy(CachedDistances.AllocatorInstance.Data,FVar3.Data,lVar13 << 2);
      }
    }
    local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.ObjectArray.ArrayNum = 0;
    local_40.ObjectArray.ArrayMax = 0;
    local_40.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = StaticClass();
    GetObjectsOfClass(pUVar9,&local_40.ObjectArray,true,RF_ArchetypeObject|RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted))
    ;
    TObjectIterator<ALODActor>::Advance(&local_40);
    FVar3.Data = local_40.ObjectArray.AllocatorInstance.Data;
    lVar13 = (longlong)local_40.ObjectArray.ArrayNum;
    local_70.ObjectArray.ArrayNum = local_40.ObjectArray.ArrayNum;
    local_70.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_40.ObjectArray.ArrayNum == 0) {
      local_70.ObjectArray.ArrayMax = 0;
      uVar8 = local_40.Index;
      uVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_40.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_70,
                 local_40.ObjectArray.ArrayNum,&local_70.ObjectArray.ArrayMax);
      memcpy(local_70.ObjectArray.AllocatorInstance.Data,FVar3.Data,lVar13 << 3);
      uVar8 = local_40.Index;
      uVar10 = local_40.ObjectArray.ArrayNum;
    }
    while (local_70.Index = uVar8, uVar8 != uVar10) {
      uVar7 = 0;
      if ((int)uVar8 < local_70.ObjectArray.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UpdateOverrideTransitionDistance
                (*(ALODActor **)
                  (local_70.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar8 * 8));
      TObjectIterator<ALODActor>::Advance(&local_70);
      uVar8 = local_70.Index;
    }
    if (local_70.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.ObjectArray.AllocatorInstance.Data);
    }
    if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSubActorEndPlay @ 147ed0b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall ALODActor::OnSubActorEndPlay(ALODActor *this,AActor *param_1,Type param_2)

{
  TObjectPtr<AActor>_u_0 local_res20;
  
  if (param_2 == Destroyed) {
    local_res20.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->SubActors,(TObjectPtr<AActor> *)&local_res20.ObjectPtr,Default);
  }
  return;
}

// ParseOverrideDistancesCVar @ 147ed0e60

void __cdecl ALODActor::ParseOverrideDistancesCVar(void)

{
  void *pvVar1;
  code *pcVar2;
  float fVar3;
  TConsoleVariableData<FString> *pTVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_98 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60;
  wchar_t *local_50;
  undefined *local_48;
  ulonglong uVar12;
  
  pTVar4 = CVarHLODDistanceOverride.Ref;
  bVar5 = IsInParallelGameThread();
  uVar10 = 0;
  if (!bVar5) {
    bVar5 = IsInGameThread();
    uVar7 = 0x10;
    if (!bVar5) goto LAB_147ed0ea0;
  }
  uVar7 = uVar10;
LAB_147ed0ea0:
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = *(int *)((longlong)&pTVar4->ShadowedValue[0].Data.ArrayNum + uVar7);
  lVar9 = (longlong)local_60.Data.ArrayNum;
  pvVar1 = *(void **)((longlong)&pTVar4->ShadowedValue[0].Data.AllocatorInstance.Data + uVar7);
  if (local_60.Data.ArrayNum == 0) {
    local_60.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_60.Data.ArrayNum,0,(ForAnyElementType *)&local_60,local_60.Data.ArrayNum,
               &local_60.Data.ArrayMax);
    memcpy(local_60.Data.AllocatorInstance.Data,pvVar1,lVar9 * 2);
  }
  pTVar4 = CVarHLODDistanceOverrideScale.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), uVar7 = 0x10, bVar5)) {
    uVar7 = uVar10;
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = *(int *)((longlong)&pTVar4->ShadowedValue[0].Data.ArrayNum + uVar7);
  lVar9 = (longlong)local_70.Data.ArrayNum;
  pvVar1 = *(void **)((longlong)&pTVar4->ShadowedValue[0].Data.AllocatorInstance.Data + uVar7);
  if (local_70.Data.ArrayNum == 0) {
    local_70.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70.Data.ArrayNum,0,(ForAnyElementType *)&local_70,local_70.Data.ArrayNum,
               &local_70.Data.ArrayMax);
    memcpy(local_70.Data.AllocatorInstance.Data,pvVar1,lVar9 * 2);
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = L",";
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_48 = &::u__;
  ::FString::ParseIntoArray(&local_60,&local_90,&local_50,2,true);
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  if (1 < local_70.Data.ArrayNum) {
    ::FString::ParseIntoArray(&local_70,&local_80,&local_50,2,true);
  }
  uVar7 = local_90._8_8_ & 0xffffffff;
  if (local_90.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  HLODDistances.ArrayNum = 0;
  if (HLODDistances.ArrayMax != local_90.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_90.ArrayNum,&HLODDistances.AllocatorInstance,0,&HLODDistances.ArrayMax);
    uVar7 = local_90._8_8_ & 0xffffffff;
  }
  fVar3 = __real_3f800000;
  uVar12 = uVar10;
  if (0 < (int)uVar7) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < (int)uVar7) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(local_90.AllocatorInstance.Data + uVar10 + 8) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(local_90.AllocatorInstance.Data + uVar10);
      }
      dVar13 = _wtof(pwVar8);
      fVar15 = fVar3;
      if ((-1 < (int)uVar11) && ((int)uVar11 < local_80.ArrayNum)) {
        uVar6 = 0;
        if ((int)uVar11 < local_80.ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10 + 8) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(local_80.AllocatorInstance.Data + uVar10);
        }
        dVar14 = _wtof(pwVar8);
        fVar15 = (float)dVar14;
      }
      local_98[0] = fVar15 * (float)dVar13;
      if (((HLODDistances.AllocatorInstance.Data <= (FScriptContainerElement *)local_98) &&
          ((FScriptContainerElement *)local_98 <
           HLODDistances.AllocatorInstance.Data + (longlong)HLODDistances.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (HLODDistances.ArrayNum == HLODDistances.ArrayMax) {
        HLODDistances.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&HLODDistances.AllocatorInstance,&HLODDistances.ArrayMax);
      }
      lVar9 = (longlong)HLODDistances.ArrayNum;
      uVar10 = uVar10 + 0x10;
      HLODDistances.ArrayNum = HLODDistances.ArrayNum + 1;
      *(float *)(HLODDistances.AllocatorInstance.Data + lVar9 * 4) = local_98[0];
      uVar7 = local_90._8_8_ & 0xffffffff;
      uVar12 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < local_90.ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// PauseDitherTransition @ 147ed12a0

void __thiscall ALODActor::PauseDitherTransition(ALODActor *this)

{
  SetComponentsMinDrawDistance(this,0.0,true);
  this->bNeedsDrawDistanceReset = '\x01';
  this->ResetDrawDistanceTime = 0.0;
  return;
}

// PostLoad @ 147ed14b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::PostLoad(ALODActor *this)

{
  int *piVar1;
  TObjectPtr<UStaticMeshComponent> *pTVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  ForAnyElementType *pFVar5;
  TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  UStaticMesh *pUVar9;
  longlong *plVar10;
  code *pcVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  longlong lVar18;
  UPrimitiveComponent *pUVar19;
  ALODActor *pAVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  int iVar23;
  undefined1 local_res8 [8];
  longlong local_res10;
  UClass *local_res18;
  UClass *local_res20;
  ALODActor *local_58;
  ulonglong *local_50;
  
  AActor::PostLoad((AActor *)this);
  pUVar15 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar15 != (UClass *)0x0) goto LAB_147ed14e8;
LAB_147ed151b:
    pUVar16 = (UClass *)0x0;
  }
  else {
    if (pUVar15 == (UClass *)0x0) goto LAB_147ed151b;
    UE::GC::MarkAsReachable((UObject *)pUVar15);
LAB_147ed14e8:
    pUVar16 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar16 == (UClass *)0x0) goto LAB_147ed151b;
    iVar8 = (int)pUVar16->_padding_;
    if (((int)pUVar15->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar8 * 8) !=
        &pUVar16->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pUVar16 = pUVar15;
    if (!bVar13) goto LAB_147ed151b;
  }
  pUVar17 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar16 == pUVar17) {
    local_res18 = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    AActor::
    ForEachComponent_Internal<UInstancedStaticMeshComponent,1,0,_ALODActor::PostLoad_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res18,(<lambda_1>)this);
  }
  else {
    local_res20 = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    AActor::
    ForEachComponent_Internal<UInstancedStaticMeshComponent,0,0,_ALODActor::PostLoad_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res20,(<lambda_1>)this);
  }
  SetComponentsMinDrawDistance(this,this->LODDrawDistance,false);
  UpdateRegistrationToMatchMaximumLODLevel(this);
  pTVar12 = CVarHLODForceDisableCastDynamicShadow.Ref;
  bVar13 = IsInParallelGameThread();
  if ((bVar13) || (bVar13 = IsInGameThread(), bVar13)) {
    lVar18 = 0;
  }
  else {
    lVar18 = 4;
  }
  pTVar2 = &this->StaticMeshComponent;
  if (*(int *)((longlong)pTVar12->ShadowedValue + lVar18) != 0) {
    pbVar3 = (byte *)((longlong)&((pTVar2->field0_0x0).DebugPtr)->_padding_ + 6);
    *pbVar3 = *pbVar3 & 0xdf;
  }
  if ((pTVar2->field0_0x0).DebugPtr != (UStaticMeshComponent *)0x0) {
    pUVar9 = (((pTVar2->field0_0x0).DebugPtr)->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar9 != (UStaticMesh *)0x0) goto LAB_147ed18e1;
    }
    else if (pUVar9 != (UStaticMesh *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
      goto LAB_147ed18e1;
    }
    pUVar19 = UPrimitiveComponent::GetLODParentPrimitive
                        ((UPrimitiveComponent *)(pTVar2->field0_0x0).DebugPtr);
    if (pUVar19 != (UPrimitiveComponent *)0x0) {
      pUVar19 = UPrimitiveComponent::GetLODParentPrimitive
                          ((UPrimitiveComponent *)(pTVar2->field0_0x0).DebugPtr);
      lVar18 = *(longlong *)&pUVar19->field_0xa8;
      local_res10 = lVar18;
      if (lVar18 != 0) {
        pUVar15 = StaticClass();
        iVar8 = (int)pUVar15->_padding_;
        if ((iVar8 <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
            &pUVar15->_padding_)) {
          puVar4 = (ulonglong *)(lVar18 + 0x330);
          local_58 = this;
          local_50 = puVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          if ((((ALODActor **)*puVar4 <= &local_58) &&
              (&local_58 < (ALODActor **)*puVar4 + *(int *)(lVar18 + 0x33c))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar8 = *(int *)(lVar18 + 0x338);
          if (iVar8 != 0) {
            plVar10 = (longlong *)*puVar4;
            iVar23 = 0;
            bVar13 = (ALODActor *)*plVar10 != local_58;
            lVar18 = 0;
            pAVar20 = local_58;
            iVar14 = 0;
            do {
              iVar22 = iVar14;
              do {
                lVar18 = lVar18 + 1;
                iVar22 = iVar22 + 1;
                if (iVar8 <= lVar18) break;
              } while (bVar13 == ((ALODActor *)plVar10[lVar18] != pAVar20));
              if (bVar13 != false) {
                if (iVar23 != iVar14) {
                  memmove(plVar10 + iVar23,plVar10 + iVar14,(longlong)(iVar22 - iVar14) << 3);
                  pAVar20 = local_58;
                }
                iVar23 = iVar23 + (iVar22 - iVar14);
              }
              bVar13 = (bool)(bVar13 ^ 1);
              iVar14 = iVar22;
            } while (lVar18 < iVar8);
            *(int *)(local_50 + 1) = iVar23;
            lVar18 = local_res10;
          }
          pFVar5 = (ForAnyElementType *)(lVar18 + 0x330);
          pTVar6 = &this->SubActors;
          if (((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)pFVar5 == pTVar6) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar13)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar8 = (this->SubActors).ArrayNum;
          if (iVar8 != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar8,pFVar5,(int *)(lVar18 + 0x338),(int *)(lVar18 + 0x33c));
            ConstructItems<TObjectPtr<AActor>,TObjectPtr<AActor>,int>
                      (pFVar5->Data + (longlong)iVar14 * 8,
                       (TObjectPtr<AActor> *)(pTVar6->AllocatorInstance).Data,iVar8);
          }
          pFVar21 = (pTVar6->AllocatorInstance).Data;
          iVar8 = (this->SubActors).ArrayNum;
          pFVar7 = pFVar21 + (longlong)iVar8 * 8;
          while( true ) {
            if ((this->SubActors).ArrayNum != iVar8) {
              `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (pFVar21 == pFVar7) break;
            if (*(AActor **)pFVar21 != (AActor *)0x0) {
              AActor::SetLODParent
                        (*(AActor **)pFVar21,*(UPrimitiveComponent **)(lVar18 + 0x2c0),
                         *(float *)(lVar18 + 0x328));
            }
            pFVar21 = pFVar21 + 8;
          }
          piVar1 = &(this->SubActors).ArrayMax;
          (this->SubActors).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(this->SubActors).AllocatorInstance,0,piVar1);
          }
          this->bHasPatchedUpParent = '\x01';
        }
      }
    }
  }
LAB_147ed18e1:
  ParseOverrideDistancesCVar();
  UpdateOverrideTransitionDistance(this);
  return;
}

// PostRegisterAllComponents @ 147ed1e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::PostRegisterAllComponents(ALODActor *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *this_00;
  char *pcVar6;
  char *pcVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FName local_res10;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  this->bHasActorTriedToRegisterComponents = '\x01';
  if (this->bHasPatchedUpParent != '\0') {
    UnregisterMeshComponents(this);
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 != (UWorld *)0x0) && (bVar5 = UWorld::IsGameWorld(this_00), bVar5)) {
    pFVar8 = (this->SubActors).AllocatorInstance.Data;
    iVar2 = (this->SubActors).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->SubActors).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      lVar3 = *(longlong *)pFVar8;
      if (lVar3 != 0) {
        pcVar6 = strstr("&ALODActor::OnSubActorEndPlay","::");
        if (pcVar6 == (char *)0x0) {
LAB_147ed1f3b:
          pcVar7 = &DAT_00000002;
LAB_147ed1f40:
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          do {
            pcVar7 = pcVar6;
            pcVar6 = strstr(pcVar7 + 1,"::");
          } while (pcVar6 != (char *)0x0);
          if (pcVar7 == (char *)0x0) goto LAB_147ed1f3b;
          pcVar7 = pcVar7 + 2;
          if (*pcVar7 == '0') goto LAB_147ed1f40;
        }
        ::FName::FName(&local_res10,pcVar7);
        TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
        ::__Internal_AddUniqueDynamic<ALODActor>
                  ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                    *)(lVar3 + 0x217),this,(pmf_b8875af7)0x147ed0b30,local_res10);
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// RegisterMeshComponents @ 147ed5640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::RegisterMeshComponents(ALODActor *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *local_res10;
  
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_147ed5677;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_147ed5677:
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pUVar4 = pUVar3;
      if (bVar2) goto LAB_147ed56ac;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_147ed56ac:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar4 != pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res10,local_res10._0_1_);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  AActor::
  ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
            ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res10,local_res10._0_1_);
  return;
}

// Serialize @ 147eda8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::Serialize(ALODActor *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x29 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (3 < iVar1) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_10[0] = false;
      }
      else {
        abStackX_10[0] = true;
      }
      ::operator<<(param_1,abStackX_10);
      if (abStackX_10[0] != false) {
        ::operator<<(param_1,(FString *)&this->_padding_);
      }
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
     ((param_1->field_0x28 & 2) != 0)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (0x95 < iVar1) {
      FActorInstanceGuid::Serialize(param_1,(AActor *)this);
    }
  }
  return;
}

// Serialize @ 147eda8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::Serialize(ALODActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// SetComponentsMinDrawDistance @ 147edc090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::SetComponentsMinDrawDistance(ALODActor *this,float param_1,bool param_2)

{
  int iVar1;
  <lambda_1> <Var2;
  <lambda_1> <Var3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  undefined4 uStackX_24;
  UClass *local_18 [2];
  
  uStackX_24 = CONCAT31(uStackX_24._1_3_,param_2);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  pUVar5 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_147edc0d9;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_147edc0d9:
    pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar6 = pUVar5;
      if (bVar4) goto LAB_147edc10e;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_147edc10e:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_18[0] = pUVar5;
  if (pUVar6 != pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    <Var3._4_4_ = uStackX_24;
    <Var3.MinDrawDistance = param_1;
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)local_18,<Var3);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  <Var2._4_4_ = uStackX_24;
  <Var2.MinDrawDistance = param_1;
  AActor::
  ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::SetComponentsMinDrawDistance_::__l2::<lambda_1>_>
            ((AActor *)this,(TSubclassOf<UActorComponent>)local_18,<Var2);
  return;
}

// SetDrawDistance @ 147edc560

void __thiscall ALODActor::SetDrawDistance(ALODActor *this,float param_1)

{
  float fVar1;
  
  this->LODDrawDistance = param_1;
  fVar1 = GetLODDrawDistanceWithOverride(this);
  SetComponentsMinDrawDistance(this,fVar1,false);
  return;
}

// SetLODParent @ 147edc710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ALODActor::SetLODParent(ALODActor *this,UPrimitiveComponent *param_1,float param_2,bool param_3)

{
  if (param_3) {
    AActor::SetLODParent((AActor *)this,param_1,param_2);
    return;
  }
  if (param_1 != (UPrimitiveComponent *)0x0) {
    param_1->MinDrawDistance = param_2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  UPrimitiveComponent::SetLODParentPrimitive
            ((UPrimitiveComponent *)(this->StaticMeshComponent).field0_0x0.DebugPtr,param_1);
  return;
}

// SetupComponent @ 147edd850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ALODActor::SetupComponent(ALODActor *this,UStaticMeshComponent *param_1)

{
  byte *pbVar1;
  float fVar2;
  
  (**(code **)(param_1->_padding_ + 0x788))(param_1,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)((longlong)&param_1->_padding_ + 3) = 0;
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)param_1,false);
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0x9e;
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&param_1->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  fVar2 = GetLODDrawDistanceWithOverride(this);
  *(float *)&param_1->_padding_ = fVar2;
  return;
}

// StartDitherTransition @ 147edeb80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALODActor::StartDitherTransition(ALODActor *this)

{
  FTickFunction::SetTickFunctionEnable
            ((FTickFunction *)&this->_padding_,this->bNeedsDrawDistanceReset);
  return;
}

// StaticRegisterNativesALODActor @ 147edef90

void __cdecl ALODActor::StaticRegisterNativesALODActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ALODActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 147edf210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::Tick(ALODActor *this,float param_1)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  AActor::Tick((AActor *)this,param_1);
  pTVar1 = CVarHLODDitherPauseTime.Ref;
  if (this->bNeedsDrawDistanceReset == '\0') {
    return;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (this->ResetDrawDistanceTime <= *(float *)((longlong)pTVar1->ShadowedValue + lVar3)) {
    fVar4 = AActor::GetActorTimeDilation((AActor *)this);
    if (fVar4 <= __real_322bcc77) {
      fVar4 = __real_322bcc77;
    }
    this->ResetDrawDistanceTime = param_1 / fVar4 + this->ResetDrawDistanceTime;
    return;
  }
  fVar4 = GetLODDrawDistanceWithOverride(this);
  SetComponentsMinDrawDistance(this,fVar4,true);
  this->bNeedsDrawDistanceReset = '\0';
  this->ResetDrawDistanceTime = 0.0;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  return;
}

// UnregisterMeshComponents @ 147ee4ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::UnregisterMeshComponents(ALODActor *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *local_res10;
  
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_147ee4f27;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_147ee4f27:
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pUVar4 = pUVar3;
      if (bVar2) goto LAB_147ee4f5c;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_147ee4f5c:
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar3;
  if (pUVar4 != pUVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res10,local_res10._0_1_);
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  AActor::
  ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::UnregisterMeshComponents_::__l2::<lambda_1>_>
            ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res10,local_res10._0_1_);
  return;
}

// UpdateOverrideTransitionDistance @ 147ee54d0

void __thiscall ALODActor::UpdateOverrideTransitionDistance(ALODActor *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  bVar1 = this->CachedNumHLODLevels;
  uVar5 = HLODDistances.ArrayNum;
  if (bVar1 == uVar5) {
    uVar6 = this->LODLevel - 1;
  }
  else {
    if ((int)uVar5 <= (int)(uint)bVar1) {
      return;
    }
    uVar6 = this->LODLevel + ~(uint)bVar1 + uVar5;
  }
  if (uVar6 == 0xffffffff) {
    return;
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < (int)uVar5)) {
    uVar4 = 0;
    if ((int)uVar6 < (int)uVar5) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = HLODDistances.ArrayNum;
    }
    if (__real_322bcc77 <
        (float)(*(uint *)(HLODDistances.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar4 = 0;
      if ((int)uVar6 < (int)uVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar7 = *(float *)(HLODDistances.AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
      goto LAB_147ee55f7;
    }
  }
  fVar7 = this->LODDrawDistance;
LAB_147ee55f7:
  SetComponentsMinDrawDistance(this,fVar7,true);
  return;
}

// UpdateRegistrationToMatchMaximumLODLevel @ 147ee5660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALODActor::UpdateRegistrationToMatchMaximumLODLevel(ALODActor *this)

{
  byte bVar1;
  int iVar2;
  UStaticMeshComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  byte bVar9;
  UClass *local_res8;
  UClass *local_res10;
  
  if ((GMaximumAllowedHLODLevel < 0) || (this->LODLevel <= GMaximumAllowedHLODLevel)) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  if (((this->StaticMeshComponent).field0_0x0.DebugPtr == (UStaticMeshComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LODActor.cpp"
                         ,500,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  bVar1 = *(byte *)((longlong)&pUVar3->_padding_ + 1);
  if ((bVar1 >> 5 & 1) == bVar9) {
    return;
  }
  *(byte *)((longlong)&pUVar3->_padding_ + 1) = bVar1 & 0xdf | bVar9 << 5;
  pUVar3 = (this->StaticMeshComponent).field0_0x0.DebugPtr;
  if (bVar9 == 0) {
    if ((pUVar3->_padding_ & 1) == 0) {
      return;
    }
    if ((this->bHasActorTriedToRegisterComponents == 0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5179017607289766395>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LODActor.cpp"
                           ,0x1fb,"bHasActorTriedToRegisterComponents"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnregisterMeshComponents(this);
    return;
  }
  if ((pUVar3->_padding_ & 1) != 0) {
    return;
  }
  if (this->bHasActorTriedToRegisterComponents == 0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_147ee5788;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_147ee5788:
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar2 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pUVar7 = pUVar6;
      if (bVar5) goto LAB_147ee57bd;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_147ee57bd:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar7 != pUVar8) {
    local_res10 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UStaticMeshComponent,0,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res10,local_res8._0_1_);
    return;
  }
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  AActor::
  ForEachComponent_Internal<UStaticMeshComponent,1,0,_ALODActor::RegisterMeshComponents_::__l2::<lambda_1>_>
            ((AActor *)this,(TSubclassOf<UActorComponent>)&local_res8,local_res8._0_1_);
  return;
}

// execOnSubActorEndPlay @ 147ee83c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl ALODActor::execOnSubActorEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res10 [8];
  AActor *local_res20;
  TObjectPtr<AActor>_u_0 local_18 [2];
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    local_18[0].DebugPtr = local_res20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<AActor>,TSizedDefaultAllocator<32>_> *)&param_1[0x14].field_0x10,
               (TObjectPtr<AActor> *)&local_18[0].ObjectPtr,Default);
  }
  return;
}

