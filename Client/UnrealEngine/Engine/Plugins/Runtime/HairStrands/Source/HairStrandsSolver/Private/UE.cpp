// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 13

// Construct<FDataflowGroomSolverProxy> @ 14e24e320

void __cdecl UE::CoreUObject::Private::Construct<FDataflowGroomSolverProxy>(void *param_1)

{
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy(param_1);
  *(undefined8 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &FDataflowGroomSolverProxy::_vftable__for__FDataflowPhysicsSolverProxy__
  ;
  *(undefined ***)((longlong)param_1 + 0x78) =
       &FDataflowGroomSolverProxy::_vftable__for__Chaos__FPhysicsSolverEvents__;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  return;
}

// ConstructForTests<FDataflowGroomSolverProxy> @ 14e24e420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDataflowGroomSolverProxy>(void *param_1)

{
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy(param_1);
  *(undefined8 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &FDataflowGroomSolverProxy::_vftable__for__FDataflowPhysicsSolverProxy__
  ;
  *(undefined ***)((longlong)param_1 + 0x78) =
       &FDataflowGroomSolverProxy::_vftable__for__Chaos__FPhysicsSolverEvents__;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  return;
}

// Destruct<FDataflowGroomSolverProxy> @ 14e24e520

void __cdecl UE::CoreUObject::Private::Destruct<FDataflowGroomSolverProxy>(void *param_1)

{
  *(undefined ***)param_1 = &FDataflowGroomSolverProxy::_vftable__for__FDataflowPhysicsSolverProxy__
  ;
  *(undefined ***)((longlong)param_1 + 0x78) =
       &FDataflowGroomSolverProxy::_vftable__for__Chaos__FPhysicsSolverEvents__;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)param_1 + 0xe0));
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  ::Chaos::FPhysicsSolverEvents::~FPhysicsSolverEvents
            ((FPhysicsSolverEvents *)((longlong)param_1 + 0x78));
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  return;
}

// Construct<FGroomSolverSettings> @ 14e24e530

void __cdecl UE::CoreUObject::Private::Construct<FGroomSolverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x47c35000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)param_1 = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  return;
}

// ConstructForTests<FGroomSolverSettings> @ 14e24e580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomSolverSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x447a0000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x47c35000;
  return;
}

// Destruct<FGroomSolverSettings> @ 14e24e5d0

void __cdecl UE::CoreUObject::Private::Destruct<FGroomSolverSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FGroomSolverSettings> @ 14e24e630

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomSolverSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50));
      param_2 = (void *)((longlong)param_2 + 0x60);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAddSolverDeformerDataflowNode> @ 14e24eca0

void __cdecl UE::CoreUObject::Private::Construct<FAddSolverDeformerDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FAddSolverDeformerDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  return;
}

// ConstructForTests<FAddSolverDeformerDataflowNode> @ 14e24ecb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAddSolverDeformerDataflowNode>(void *param_1)

{
  FDataflowNode::FDataflowNode(param_1);
  *(undefined ***)param_1 = &___7FAddSolverDeformerDataflowNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  return;
}

// Destruct<FAddSolverDeformerDataflowNode> @ 14e24ecc0

void __cdecl UE::CoreUObject::Private::Destruct<FAddSolverDeformerDataflowNode>(void *param_1)

{
  DestructItems<FDataflowTransformArrayTypes,int>
            (*(FDataflowTransformArrayTypes **)((longlong)param_1 + 0x300),
             *(int *)((longlong)param_1 + 0x308));
  if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x300));
  }
  DestructItems<FDataflowBoolArrayTypes,int>
            (*(FDataflowBoolArrayTypes **)((longlong)param_1 + 0x2f0),
             *(int *)((longlong)param_1 + 0x2f8));
  if (*(void **)((longlong)param_1 + 0x2f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2f0));
  }
  DestructItems<FDataflowStringArrayTypes,int>
            (*(FDataflowStringArrayTypes **)((longlong)param_1 + 0x2e0),
             *(int *)((longlong)param_1 + 0x2e8));
  if (*(void **)((longlong)param_1 + 0x2e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2e0));
  }
  DestructItems<FDataflowVectorArrayTypes,int>
            (*(FDataflowVectorArrayTypes **)((longlong)param_1 + 0x2d0),
             *(int *)((longlong)param_1 + 0x2d8));
  if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d0));
  }
  DestructItems<FDataflowNumericArrayTypes,int>
            (*(FDataflowNumericArrayTypes **)((longlong)param_1 + 0x2c0),
             *(int *)((longlong)param_1 + 0x2c8));
  if (*(void **)((longlong)param_1 + 0x2c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2c0));
  }
  if (*(void **)((longlong)param_1 + 0x2b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2b0));
  }
  if (*(void **)((longlong)param_1 + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a0));
  }
  DestructItems<FDataflowStringTypes,int>
            (*(FDataflowStringTypes **)((longlong)param_1 + 0x290),
             *(int *)((longlong)param_1 + 0x298));
  if (*(void **)((longlong)param_1 + 0x290) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x290));
  }
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x248) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x248));
  }
  *(undefined ***)param_1 = &___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode(param_1);
  return;
}

// Copy<FAddSolverDeformerDataflowNode> @ 14e24ecd0

bool __cdecl
UE::CoreUObject::Private::Copy<FAddSolverDeformerDataflowNode>
          (void *param_1,void *param_2,int param_3)

{
  FAddSolverDeformerDataflowNode *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAddSolverDeformerDataflowNode::operator=
                (this,(FAddSolverDeformerDataflowNode *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// operator() @ 14e252850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UE::Groom::Private::CreateDeformerInstance'::__l5::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UActorComponent *this_00;
  UOptimusDeformerDynamicInstanceManager *this_01;
  bool bVar2;
  UClass *pUVar3;
  FSceneInterface *pFVar4;
  UOptimusDeformerInstance *pUVar5;
  IMeshDeformerProducer *pIVar6;
  FGuid local_18;
  
  this_00 = *(UActorComponent **)(*(longlong *)((longlong)this + 8) + 0x20);
  if (this_00 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && (this_00->bIsBeingDestroyed == '\0')) {
      pFVar4 = UActorComponent::GetScene(this_00);
      if (pFVar4 != (FSceneInterface *)0x0) {
        bVar2 = UE::IsSavingPackage((UObject *)0x0);
        if (!bVar2) {
          bVar2 = IsGarbageCollectingAndLockingUObjectHashTables();
          if ((!bVar2) &&
             (this_01 = *(UOptimusDeformerDynamicInstanceManager **)((longlong)this + 8),
             this_01 != (UOptimusDeformerDynamicInstanceManager *)0x0)) {
            pUVar3 = Z_Construct_UClass_UOptimusDeformerDynamicInstanceManager_NoRegister();
            iVar1 = (int)pUVar3->_padding_;
            if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar3->_padding_)) {
              local_18._0_8_ = *(undefined8 *)((longlong)this + 0x10);
              local_18._8_8_ = *(undefined8 *)((longlong)this + 0x18);
              pUVar5 = UOptimusDeformerDynamicInstanceManager::GetDeformerInstance
                                 (this_01,&local_18);
              if (pUVar5 == (UOptimusDeformerInstance *)0x0) {
                local_18._0_8_ = *(undefined8 *)((longlong)this + 0x10);
                local_18._8_8_ = *(undefined8 *)((longlong)this + 0x18);
                pIVar6 = (IMeshDeformerProducer *)(*(longlong *)((longlong)this + 0x20) + 0x68);
                if (*(longlong *)((longlong)this + 0x20) == 0) {
                  pIVar6 = (IMeshDeformerProducer *)0x0;
                }
                UOptimusDeformerDynamicInstanceManager::AddProducerDeformer
                          (this_01,pIVar6,&local_18,*(UOptimusDeformer **)this);
              }
            }
          }
        }
      }
    }
  }
  return;
}

// GatherViewLocations @ 14e2537a0

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
UE::Groom::Private::GatherViewLocations
          (UWorld *param_1,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  *pTVar10;
  UObject *pUVar11;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_58;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_1 != (UWorld *)0x0) {
    pTVar10 = UWorld::GetPlayerControllerIterator(param_1,&local_48);
    if ((pTVar10->Index < 0) || (pTVar10->Container->ArrayNum <= pTVar10->Index)) {
      if (param_2 != &param_1->ViewLocationsRenderedLastFrame) {
        iVar9 = (param_1->ViewLocationsRenderedLastFrame).ArrayNum;
        piVar1 = &param_2->ArrayMax;
        pFVar2 = (param_1->ViewLocationsRenderedLastFrame).AllocatorInstance.Data;
        param_2->ArrayNum = iVar9;
        if ((iVar9 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar9,*piVar1,&param_2->AllocatorInstance,iVar9,piVar1);
          if (iVar9 != 0) {
            memcpy((param_2->AllocatorInstance).Data,pFVar2,(longlong)iVar9 * 0x18);
          }
        }
      }
    }
    else {
      UWorld::GetPlayerControllerIterator(param_1,&local_58);
      for (; (iVar9 = local_58.Index, pTVar5 = local_58.Container, -1 < local_58.Index &&
             (local_58.Index < (local_58.Container)->ArrayNum)); local_58.Index = local_58.Index + 1
          ) {
        uVar8 = 0;
        if (local_58.Index < (local_58.Container)->ArrayNum) {
          uVar8 = (uint)~local_58.Index >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 8));
        if (((pUVar11 != (UObject *)0x0) && ((pUVar11[0x15].field_0x20 & 2) != 0)) &&
           (cVar7 = (**(code **)(*(longlong *)pUVar11 + 0x7f0))(pUVar11), cVar7 != '\0')) {
          (**(code **)(*(longlong *)pUVar11 + 0x840))(pUVar11,&local_38,local_20);
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)param_2->ArrayMax * 0x18))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = param_2->ArrayNum;
          if (iVar9 == param_2->ArrayMax) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar9 + 1;
          pFVar3 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar3 + (longlong)iVar9 * 0x18;
          *(undefined8 *)pFVar2 = local_38;
          *(undefined8 *)(pFVar2 + 8) = uStack_30;
          *(undefined8 *)(pFVar3 + (longlong)iVar9 * 0x18 + 0x10) = local_28;
        }
      }
    }
  }
  return;
}

