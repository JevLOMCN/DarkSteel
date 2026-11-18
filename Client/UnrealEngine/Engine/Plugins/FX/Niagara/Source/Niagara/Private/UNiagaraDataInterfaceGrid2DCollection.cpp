// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 50

// StaticClass @ 14915bee0

UClass * __cdecl UNiagaraDataInterfaceGrid2DCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid2DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollection>,local_res8,
               UNiagaraDataInterfaceGrid2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton;
}

// UNiagaraDataInterfaceGrid2DCollection @ 149169a00

UNiagaraDataInterfaceGrid2DCollection * __thiscall
UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
          (UNiagaraDataInterfaceGrid2DCollection *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid2D::UNiagaraDataInterfaceGrid2D
            ((UNiagaraDataInterfaceGrid2D *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollection__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  *(undefined8 *)&this->ManagedRenderTargets = 0;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x34 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x48 = 0;
  return this;
}

// UNiagaraDataInterfaceGrid2DCollection @ 149169ac0

UNiagaraDataInterfaceGrid2DCollection * __thiscall
UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection
          (UNiagaraDataInterfaceGrid2DCollection *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterfaceGrid2D::UNiagaraDataInterfaceGrid2D
            ((UNiagaraDataInterfaceGrid2D *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollection__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  this->bOverrideFormat = '\0';
  puVar3 = (undefined8 *)0x0;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  this->OverrideBufferFormat = Float;
  this->bUseIndirection = false;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  *(undefined8 *)&this->ManagedRenderTargets = 0;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x8 = 0;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x20 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x28 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x34 = 0;
  *(undefined8 *)&(this->ManagedRenderTargets).field_0x40 = 0;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x48 = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyGrid2DCollectionProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceGrid2DCollection @ 14916b350

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::~UNiagaraDataInterfaceGrid2DCollection
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid2DCollection__6B_;
  *(undefined4 *)&(this->ManagedRenderTargets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedRenderTargets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedRenderTargets);
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraDataInterfaceGrid2D::~UNiagaraDataInterfaceGrid2D((UNiagaraDataInterfaceGrid2D *)this);
  return;
}

// operator() @ 14916c4a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FNiagaraPooledRWTexture *pFVar2;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar3;
  FNiagaraGrid2DLegacyTiled2DInfo local_28;
  
  pFVar3 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if ((((*(longlong *)((longlong)this + 0x10) != 0) &&
       (pFVar1 = *(FRHITexture **)(*(longlong *)((longlong)this + 0x10) + 0x20),
       pFVar1 != (FRHITexture *)0x0)) &&
      (pFVar3 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0)) &&
     (pFVar2 = pFVar3->CurrentData, pFVar2 != (FNiagaraPooledRWTexture *)0x0)) {
    FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
              (&local_28,&pFVar3->NumCells,pFVar3->NumAttributes);
    FNiagaraGrid2DLegacyTiled2DInfo::CopyTo2D
              (&local_28,(FRHICommandList *)param_1,
               (((pFVar2->Texture).Reference)->RenderTargetItem).TargetableTexture.Reference,pFVar1)
    ;
  }
  return;
}

// operator() @ 14916c530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar2;
  undefined1 local_48 [24];
  TIntVector3<int>_u_0 local_30;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  uint local_10;
  
  pFVar2 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if ((((*(longlong *)((longlong)this + 0x10) != 0) &&
       (pFVar1 = *(FRHITexture **)(*(longlong *)((longlong)this + 0x10) + 0x20),
       pFVar1 != (FRHITexture *)0x0)) &&
      (pFVar2 != (FGrid2DCollectionRWInstanceData_RenderThread *)0x0)) &&
     (pFVar2->CurrentData != (FNiagaraPooledRWTexture *)0x0)) {
    local_30._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_48._0_4_ = (pFVar2->NumCells).field0_0x0._s_0.X;
    local_48._4_4_ = (pFVar2->NumCells).field0_0x0._s_0.Y;
    local_48._20_4_ = *(int *)((longlong)this + 0x18);
    local_24._0_4_ = 0;
    local_24._4_4_ = 0;
    local_14 = 0;
    local_48._16_4_ = 0;
    local_30._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_1c._0_4_ = 1;
    local_1c._4_4_ = 0;
    local_10 = 1;
    local_48._8_8_ = 1;
    TransitionAndCopyTexture
              ((FRHICommandList *)param_1,
               (((pFVar2->CurrentData->Texture).Reference)->RenderTargetItem).TargetableTexture.
               Reference,pFVar1,(FRHICopyTextureInfo *)local_48);
  }
  return;
}

// operator() @ 14916cab0

void __thiscall
`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  ulonglong uVar4;
  FRHIResource *this_00;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FNiagaraTypeDefinition *this_01;
  UClass *pUVar9;
  UStruct *pUVar10;
  UScriptStruct *pUVar11;
  FRHIResource *this_02;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  longlong local_res18;
  undefined4 local_58 [2];
  ulonglong *local_50 [3];
  
  lVar12 = *(longlong *)((longlong)this + 8);
  uVar4 = *(ulonglong *)((longlong)this + 0x10);
  if (*(int *)(lVar12 + 0x18) != *(int *)(lVar12 + 0x44)) {
    lVar14 = *(longlong *)(lVar12 + 0x50);
    if (*(longlong *)(lVar12 + 0x50) == 0) {
      lVar14 = lVar12 + 0x48;
    }
    iVar8 = *(int *)(lVar14 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)(lVar12 + 0x58) - 1)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar8 * 0xd0 + *(longlong *)(lVar12 + 0x10)) == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x804,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0xd0 + 200 + *(longlong *)(lVar12 + 0x10));
      } while (iVar8 != -1);
    }
  }
  lVar12 = *(longlong *)((longlong)this + 8);
  local_50[0] = (ulonglong *)((longlong)this + 0x10);
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar12 + 0x10),&local_res8,(bool *)local_50);
  lVar12 = (longlong)(int)local_res8.Key * 0xd0 + *(longlong *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 8);
  *(undefined1 *)(lVar12 + 0x10) = *(undefined1 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar12 + 0x14) = *(undefined8 *)((longlong)this + 0x1c);
  *(undefined4 *)(lVar12 + 0x1c) = *(undefined4 *)((longlong)this + 0x24);
  uVar6 = *(undefined8 *)((longlong)this + 0x30);
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)(lVar12 + 0x38) = uVar6;
  if ((undefined1 *)((longlong)this + 0x48) != (undefined1 *)(lVar12 + 0x40)) {
    if (*(char *)((longlong)this + 0x49) == '\0') {
      if (*(char *)(lVar12 + 0x41) != '\0') {
        *(undefined1 *)(lVar12 + 0x41) = 0;
      }
    }
    else {
      *(undefined1 *)(lVar12 + 0x40) = *(undefined1 *)((longlong)this + 0x48);
      *(undefined1 *)(lVar12 + 0x41) = 1;
    }
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar12 + 0xb0),
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0xa0));
  uVar15 = *(uint *)((longlong)this + 0x98);
  pFVar2 = (ForAnyElementType *)(lVar12 + 0x90);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*(int *)(lVar12 + 0x9c) < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,pFVar2,*(int *)(lVar12 + 0x98),(int *)(lVar12 + 0x9c));
  }
  iVar8 = *(int *)((longlong)this + 0x98);
  uVar15 = 0;
  if (0 < iVar8) {
    pFVar3 = (ForAnyElementType *)(lVar12 + 0xa0);
    local_res18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar8) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0x98);
      lVar14 = *(longlong *)((longlong)this + 0x90);
      if (iVar8 == *(int *)(lVar12 + 0x9c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar2,(int *)(lVar12 + 0x9c));
        *(int *)(lVar12 + 0x98) = iVar8;
      }
      *(int *)(lVar12 + 0x98) = iVar8 + 1;
      *(undefined8 *)(pFVar2->Data + (longlong)iVar8 * 8) = *(undefined8 *)(lVar14 + local_res18);
      uVar13 = 0;
      if ((int)uVar15 < *(int *)((longlong)this + 0x98)) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = FNiagaraTypeDefinitionHandle::Resolve
                          ((FNiagaraTypeDefinitionHandle *)
                           (local_res18 + 8 + *(longlong *)((longlong)this + 0x90)));
      uVar13 = (uint)(ushort)this_01->Size;
      if (this_01->Size == 0xffff) {
        if (((this_01->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) ||
           (pUVar9 = FNiagaraTypeDefinition::GetClass(this_01), pUVar9 != (UClass *)0x0)) {
          this_01->Size = 0;
          uVar13 = 0;
        }
        else {
          pUVar10 = FNiagaraTypeDefinition::GetStruct(this_01);
          pUVar11 = CastChecked<UScriptStruct,UStruct>(pUVar10);
          iVar8 = (int)*(short *)((longlong)&pUVar11->_padding_ + 4);
          uVar13 = iVar8 + -1 + (int)pUVar11->_padding_ & -iVar8;
          if ((0x7fff < (int)uVar13) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2309485622517038180>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                                 ,0x39c,"StructSize <= TNumericLimits<int16>::Max()"), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_01->Size = (short)uVar13;
        }
      }
      piVar1 = (int *)(lVar12 + 0xac);
      local_58[0] = (undefined4)((ulonglong)(longlong)(short)uVar13 >> 2);
      if (((pFVar3->Data <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar3->Data + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar12 + 0xa8);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      local_res18 = local_res18 + 0xc;
      uVar15 = uVar15 + 1;
      *(int *)(lVar12 + 0xa8) = iVar8 + 1;
      *(undefined4 *)(pFVar3->Data + (longlong)iVar8 * 4) = local_58[0];
      iVar8 = *(int *)((longlong)this + 0x98);
    } while ((int)uVar15 < iVar8);
  }
  if ((*(longlong *)this == 0) ||
     (this_00 = *(FRHIResource **)(*(longlong *)this + 0x20), this_00 == (FRHIResource *)0x0)) {
    this_02 = *(FRHIResource **)(lVar12 + 0x78);
    if (this_02 == (FRHIResource *)0x0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0x78) = 0;
  }
  else {
    this_02 = *(FRHIResource **)(lVar12 + 0x78);
    if (this_02 == this_00) {
      return;
    }
    *(FRHIResource **)(lVar12 + 0x78) = this_00;
    FRHIResource::AddRef(this_00);
    if (this_02 == (FRHIResource *)0x0) {
      return;
    }
  }
  FRHIResource::Release(this_02);
  return;
}

// operator() @ 14916d270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  FRHITexture *this_00;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar8;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar9;
  FRHITexture *this_01;
  longlong lVar10;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar3 = *(ulonglong *)((longlong)this + 0x10);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar10 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar10 = lVar2 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((uVar3 >> 0x20) * 0x17 + uVar3 &
                              (ulonglong)(*(int *)(lVar2 + 0x58) - 1)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0xd0 + *(longlong *)(lVar2 + 0x10)) == uVar3)
        goto LAB_14916d311;
        iVar7 = *(int *)((longlong)iVar7 * 0xd0 + 200 + *(longlong *)(lVar2 + 0x10));
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                     ,0x9f3,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14916d311:
  pFVar8 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)((longlong)this + 8) + 0x10),*(ulong64 *)((longlong)this + 0x10))
  ;
  (pFVar8->NumCells).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x1c);
  pFVar8->NumAttributes = *(int *)((longlong)this + 0x24);
  dVar5 = *(double *)((longlong)this + 0x30);
  (pFVar8->CellSize).field0_0x0._s_0.X = *(double *)((longlong)this + 0x28);
  (pFVar8->CellSize).field0_0x0._s_0.Y = dVar5;
  FVar9 = (pFVar8->Buffers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
                )0x0) {
    FVar9 = (ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
             )&pFVar8->Buffers;
  }
  DestructItems<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>,int>
            ((TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_> *)FVar9,
             (pFVar8->Buffers).ArrayNum);
  piVar1 = &(pFVar8->Buffers).ArrayMax;
  (pFVar8->Buffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>_>
              (8,8,0,&(pFVar8->Buffers).AllocatorInstance,0,piVar1);
  }
  pFVar8->CurrentData = (FNiagaraPooledRWTexture *)0x0;
  pFVar8->DestinationData = (FNiagaraPooledRWTexture *)0x0;
  if ((*(longlong *)this == 0) ||
     (this_00 = *(FRHITexture **)(*(longlong *)this + 0x20), this_00 == (FRHITexture *)0x0)) {
    this_01 = (pFVar8->RenderTargetToCopyTo).Reference;
    if (this_01 == (FRHITexture *)0x0) {
      return;
    }
    (pFVar8->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
  }
  else {
    this_01 = (pFVar8->RenderTargetToCopyTo).Reference;
    if (this_01 == this_00) {
      return;
    }
    (pFVar8->RenderTargetToCopyTo).Reference = this_00;
    FRHIResource::AddRef((FRHIResource *)this_00);
    if (this_01 == (FRHITexture *)0x0) {
      return;
    }
  }
  FRHIResource::Release((FRHIResource *)this_01);
  return;
}

// BuildShaderParameters @ 149170c70

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::BuildShaderParameters
          (UNiagaraDataInterfaceGrid2DCollection *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  
  pwVar11 = L"";
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)
              (param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<FNDIGrid2DShaderParameters>::GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar6 = (pFVar3->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar6 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar9 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar9 = pwVar10;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined8 *)(pFVar9 + 0x20) = 1;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x7b;
  *(uint *)(pFVar9 + 0x14) = uVar2;
  *(undefined2 *)(pFVar9 + 0x18) = 0x14;
  *(FShaderParametersMetadata **)(pFVar9 + 0x28) = pFVar8;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x40;
  iVar6 = (param_1->GPUParamInfo->GeneratedFunctions).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = iVar6 + 3;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  if (AttributeIndicesBaseName.Data.ArrayNum != 0) {
    pwVar11 = (wchar_t *)AttributeIndicesBaseName.Data.AllocatorInstance.Data;
  }
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<int>_>
            (param_1,pwVar11,iVar6);
  return;
}

// CanCreateVarFromFuncName @ 1491715a0

bool __cdecl UNiagaraDataInterfaceGrid2DCollection::CanCreateVarFromFuncName(FName *param_1)

{
  FName FVar1;
  
  FVar1 = *param_1;
  if (((((((((FVar1 != SetVector4ValueFunctionName) && (FVar1 != GetVector4ValueFunctionName)) &&
           (FVar1 != SampleGridVector4FunctionName)) &&
          ((FVar1 != GetPreviousVector4ValueFunctionName &&
           (FVar1 != SamplePreviousGridVector4FunctionName)))) &&
         (FVar1 != CubicSamplePreviousGridVector4FunctionName)) &&
        (((FVar1 != SetVector3ValueFunctionName && (FVar1 != SetVectorValueFunctionName)) &&
         ((FVar1 != GetVector3ValueFunctionName &&
          (((FVar1 != SampleGridVector3FunctionName && (FVar1 != GetPreviousVectorValueFunctionName)
            ) && (FVar1 != SamplePreviousGridVectorFunctionName)))))))) &&
       ((FVar1 != CubicSamplePreviousGridVectorFunctionName &&
        (FVar1 != SetVector2ValueFunctionName)))) &&
      (((FVar1 != SetVector2DValueFunctionName &&
        (((FVar1 != GetVector2ValueFunctionName && (FVar1 != SampleGridVector2FunctionName)) &&
         ((FVar1 != GetPreviousVector2DValueFunctionName &&
          (((FVar1 != SamplePreviousGridVector2DFunctionName &&
            (FVar1 != CubicSamplePreviousGridVector2DFunctionName)) &&
           (FVar1 != SetFloatValueFunctionName)))))))) &&
       (((FVar1 != GetFloatValueFunctionName && (FVar1 != SampleGridFloatFunctionName)) &&
        (FVar1 != GetPreviousFloatValueFunctionName)))))) &&
     ((FVar1 != SamplePreviousGridFloatFunctionName &&
      (FVar1 != CubicSamplePreviousGridFloatFunctionName)))) {
    return false;
  }
  return true;
}

// CanExposeVariables @ 1491718b0

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::CanExposeVariables
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  return true;
}

// CanRenderVariablesToCanvas @ 1491718e0

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::CanRenderVariablesToCanvas
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  return true;
}

// CollectAttributesForScript @ 149172280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::CollectAttributesForScript
          (UNiagaraScript *param_1,UNiagaraDataInterface *param_2,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4,int *param_5,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_6)

{
  FName *pFVar1;
  longlong *plVar2;
  FName *pFVar3;
  code *pcVar4;
  FName *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FNiagaraScriptExecutionParameterStore *pFVar10;
  FNiagaraTypeDefinition *pFVar11;
  FName FVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FName *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  FName FVar23;
  FName *pFVar24;
  FScriptContainerElement *pFVar25;
  FName FVar26;
  FName *pFVar27;
  undefined1 local_e8;
  undefined1 local_e7 [7];
  TObjectPtr<UObject>_u_0 local_e0;
  ushort local_d8;
  uchar local_d6;
  undefined8 local_d4;
  uint local_cc;
  int local_c8 [2];
  FName local_c0;
  FNiagaraTypeDefinitionHandle local_b8 [2];
  uint local_b0;
  FText local_a8;
  undefined1 local_98 [8];
  FName *local_90;
  FScriptContainerElement *local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  pFVar10 = UNiagaraScript::GetExecutionReadyParameterStore(param_1,GPUComputeSim);
  if (pFVar10 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    plVar2 = (longlong *)pFVar10->_padding_;
    for (plVar22 = plVar2; plVar22 != plVar2 + (int)pFVar10->_padding_; plVar22 = plVar22 + 1) {
      if ((UNiagaraDataInterface *)*plVar22 == param_2) {
        uVar21 = (uint)((longlong)plVar22 - (longlong)plVar2 >> 3);
        if (uVar21 == 0xffffffff) {
          return;
        }
        iVar8 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
                ArrayNum;
        pFVar25 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
                  AllocatorInstance.Data;
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = 0;
        if ((int)uVar21 < iVar8) {
          uVar7 = ~uVar21 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_88 = pFVar25 + (longlong)(int)uVar21 * 0x38 + 0x28;
        local_b0 = *(uint *)(local_88 + 8);
        uVar19 = (ulonglong)(int)local_b0;
        pFVar27 = *(FName **)local_88;
        local_90 = pFVar27 + uVar19 * 10;
        FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
        do {
          pFVar24 = local_90;
          if (*(int *)(local_88 + 8) != (int)uVar19) {
            local_e8 = 0;
            `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_e8);
            FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
          }
          if (pFVar27 == pFVar24) {
            return;
          }
          uVar21 = pFVar27[4].ComparisonIndex.Value;
          FVar23 = pFVar27[3];
          FVar26 = (FName)((longlong)(int)uVar21 * 0x10 + (longlong)FVar23);
          while( true ) {
            if (pFVar27[4].ComparisonIndex.Value != uVar21) {
              local_e7[0] = 0;
              `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_e7);
              FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            }
            if (FVar23 == FVar26) {
              pFVar24 = (FName *)0x0;
              goto LAB_14917242e;
            }
            if (*(FName *)FVar23 == FVar12) break;
            FVar23 = (FName)((longlong)FVar23 + 0x10);
          }
          pFVar24 = (FName *)((longlong)FVar23 + 8);
LAB_14917242e:
          if (pFVar24 != (FName *)0x0) {
            FVar12 = *pFVar27;
            if (((((FVar12 == SetVector4ValueFunctionName) ||
                  (FVar12 == GetVector4ValueFunctionName)) ||
                 (FVar12 == SampleGridVector4FunctionName)) ||
                ((FVar12 == GetPreviousVector4ValueFunctionName ||
                 (FVar12 == SamplePreviousGridVector4FunctionName)))) ||
               (FVar12 == CubicSamplePreviousGridVector4FunctionName)) {
              local_e0 = FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable
                          ((UObject *)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0);
              }
              local_d8 = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
              local_d6 = FNiagaraTypeDefinition::Vec4Def.Flags;
              local_d4._0_4_ =
                   CONCAT22(FNiagaraTypeDefinition::Vec4Def.Alignment,
                            FNiagaraTypeDefinition::Vec4Def.Size);
              local_d4 = CONCAT44(FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex,
                                  (undefined4)local_d4);
              local_cc = FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
            }
            else if ((((FVar12 == SetVector3ValueFunctionName) ||
                      (FVar12 == SetVectorValueFunctionName)) ||
                     (FVar12 == GetVector3ValueFunctionName)) ||
                    (((FVar12 == SampleGridVector3FunctionName ||
                      (FVar12 == GetPreviousVectorValueFunctionName)) ||
                     ((FVar12 == SamplePreviousGridVectorFunctionName ||
                      (FVar12 == CubicSamplePreviousGridVectorFunctionName)))))) {
              local_e0 = FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable
                          ((UObject *)FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0);
              }
              local_d8 = FNiagaraTypeDefinition::Vec3Def.UnderlyingType;
              local_d6 = FNiagaraTypeDefinition::Vec3Def.Flags;
              local_d4._0_4_ =
                   CONCAT22(FNiagaraTypeDefinition::Vec3Def.Alignment,
                            FNiagaraTypeDefinition::Vec3Def.Size);
              local_d4 = CONCAT44(FNiagaraTypeDefinition::Vec3Def.RegisteredTypeDefIndex,
                                  (undefined4)local_d4);
              local_cc = FNiagaraTypeDefinition::Vec3Def.UnderlyingTypePathNameHash;
            }
            else if ((((FVar12 == SetVector2ValueFunctionName) ||
                      (FVar12 == SetVector2DValueFunctionName)) ||
                     (FVar12 == GetVector2ValueFunctionName)) ||
                    (((FVar12 == SampleGridVector2FunctionName ||
                      (FVar12 == GetPreviousVector2DValueFunctionName)) ||
                     ((FVar12 == SamplePreviousGridVector2DFunctionName ||
                      (FVar12 == CubicSamplePreviousGridVector2DFunctionName)))))) {
              local_e0 = FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable
                          ((UObject *)FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0);
              }
              local_d8 = FNiagaraTypeDefinition::Vec2Def.UnderlyingType;
              local_d6 = FNiagaraTypeDefinition::Vec2Def.Flags;
              local_d4._0_4_ =
                   CONCAT22(FNiagaraTypeDefinition::Vec2Def.Alignment,
                            FNiagaraTypeDefinition::Vec2Def.Size);
              local_d4 = CONCAT44(FNiagaraTypeDefinition::Vec2Def.RegisteredTypeDefIndex,
                                  (undefined4)local_d4);
              local_cc = FNiagaraTypeDefinition::Vec2Def.UnderlyingTypePathNameHash;
            }
            else if (((((FVar12 == SetFloatValueFunctionName) ||
                       (FVar12 == GetFloatValueFunctionName)) ||
                      (FVar12 == SampleGridFloatFunctionName)) ||
                     ((FVar12 == GetPreviousFloatValueFunctionName ||
                      (FVar12 == SamplePreviousGridFloatFunctionName)))) ||
                    (FVar12 == CubicSamplePreviousGridFloatFunctionName)) {
              local_e0 = FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0))
              {
                UE::GC::MarkAsReachable
                          ((UObject *)FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0)
                ;
              }
              local_d8 = FNiagaraTypeDefinition::FloatDef.UnderlyingType;
              local_d6 = FNiagaraTypeDefinition::FloatDef.Flags;
              local_d4._0_4_ =
                   CONCAT22(FNiagaraTypeDefinition::FloatDef.Alignment,
                            FNiagaraTypeDefinition::FloatDef.Size);
              local_d4 = CONCAT44(FNiagaraTypeDefinition::FloatDef.RegisteredTypeDefIndex,
                                  (undefined4)local_d4);
              local_cc = FNiagaraTypeDefinition::FloatDef.UnderlyingTypePathNameHash;
            }
            else {
              local_e0.DebugPtr = (UObject *)0x0;
              local_d8 = 0;
              local_d6 = '\0';
              local_d4 = 0xffffffffffffffff;
              local_cc = 0xffffffff;
            }
            local_c0 = *pFVar24;
            local_b8[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register
                           (local_b8,(FNiagaraTypeDefinition *)&local_e0.ObjectPtr);
            FVar23 = *pFVar27;
            FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            if ((((FVar23 == SetVector4ValueFunctionName) || (FVar23 == GetVector4ValueFunctionName)
                 ) || (FVar23 == SampleGridVector4FunctionName)) ||
               ((((FVar23 == GetPreviousVector4ValueFunctionName ||
                  (FVar23 == SamplePreviousGridVector4FunctionName)) ||
                 ((FVar23 == CubicSamplePreviousGridVector4FunctionName ||
                  ((FVar23 == SetVector3ValueFunctionName || (FVar23 == SetVectorValueFunctionName))
                  )))) || ((FVar23 == GetVector3ValueFunctionName ||
                           ((((((FVar23 == SampleGridVector3FunctionName ||
                                (FVar23 == GetPreviousVectorValueFunctionName)) ||
                               (FVar23 == SamplePreviousGridVectorFunctionName)) ||
                              ((FVar23 == CubicSamplePreviousGridVectorFunctionName ||
                               (FVar23 == SetVector2ValueFunctionName)))) ||
                             (((FVar23 == SetVector2DValueFunctionName ||
                               ((FVar23 == GetVector2ValueFunctionName ||
                                (FVar23 == SampleGridVector2FunctionName)))) ||
                              (FVar23 == GetPreviousVector2DValueFunctionName)))) ||
                            (((((FVar23 == SamplePreviousGridVector2DFunctionName ||
                                (FVar23 == CubicSamplePreviousGridVector2DFunctionName)) ||
                               (FVar23 == SetFloatValueFunctionName)) ||
                              ((FVar23 == GetFloatValueFunctionName ||
                               (FVar23 == SampleGridFloatFunctionName)))) ||
                             ((FVar23 == GetPreviousFloatValueFunctionName ||
                              ((FVar23 == SamplePreviousGridFloatFunctionName ||
                               (FVar23 == CubicSamplePreviousGridFloatFunctionName)))))))))))))) {
              pFVar3 = (FName *)(param_3->AllocatorInstance).Data;
              pFVar1 = (FName *)((longlong)pFVar3 + (longlong)param_3->ArrayNum * 0xc);
              pFVar18 = pFVar3;
              if (pFVar3 != pFVar1) {
                do {
                  if ((*pFVar18 == local_c0) &&
                     (pFVar18[1].ComparisonIndex.Value == local_b8[0].RegisteredTypeIndex))
                  goto LAB_149172a24;
                  pFVar5 = pFVar18 + 1;
                  pFVar18 = (FName *)&pFVar5->Number;
                } while ((FName *)&pFVar5->Number != pFVar1);
                pFVar18 = pFVar3;
                do {
                  if (*pFVar18 == *pFVar24) {
                    lVar20 = ((longlong)pFVar18 - (longlong)pFVar3) / 6 +
                             ((longlong)pFVar18 - (longlong)pFVar3 >> 0x3f);
                    uVar21 = (int)(lVar20 >> 1) - (int)(lVar20 >> 0x3f);
                    if (uVar21 != 0xffffffff) {
                      if (param_6 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) {
                        pFVar13 = FText::FromName(&local_70,&local_c0);
                        uVar7 = 0;
                        if ((int)uVar21 < param_3->ArrayNum) {
                          uVar7 = ~uVar21 >> 0x1f;
                        }
                        if ((uVar7 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pFVar11 = FNiagaraTypeDefinitionHandle::Resolve
                                            ((FNiagaraTypeDefinitionHandle *)
                                             ((param_3->AllocatorInstance).Data +
                                             ((longlong)(int)uVar21 * 3 + 2) * 4));
                        pFVar14 = FNiagaraTypeDefinition::GetNameText(pFVar11,&local_60);
                        pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_b8);
                        pFVar15 = FNiagaraTypeDefinition::GetNameText(pFVar11,&local_50);
                        pFVar16 = FText::AsLocalizable_Advanced_LocText
                                            (&local_80,L"NiagaraDataInterfaceGrid2DCollection",
                                             L"BadType",
                                             L"Same name, different types! {0} vs {1}, Attribute {2}"
                                            );
                        pFVar17 = FTextFormat::FTextFormat(&local_40,pFVar16,Default);
                        FText::Format<FText,FText,FText>(&local_a8,pFVar17,pFVar15,pFVar14,pFVar13);
                        if (local_80.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
                        }
                        pFVar13 = (FText *)(param_6->AllocatorInstance).Data;
                        if (((pFVar13 <= &local_a8) && (&local_a8 < pFVar13 + param_6->ArrayMax)) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar6)) {
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        iVar8 = param_6->ArrayNum;
                        if (iVar8 == param_6->ArrayMax) {
                          iVar8 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
                        }
                        param_6->ArrayNum = iVar8 + 1;
                        pFVar25 = (param_6->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
                        *(undefined8 *)pFVar25 = 0;
                        *(ITextData **)pFVar25 = local_a8.TextData.Reference;
                        if (local_a8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                                    (local_a8.TextData.Reference,local_98);
                        }
                        *(uint *)(pFVar25 + 8) = local_a8.Flags;
                        FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
                        if (local_a8.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
                          FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
                        }
                      }
                      goto LAB_149172a24;
                    }
                    break;
                  }
                  pFVar18 = (FName *)&pFVar18[1].Number;
                } while (pFVar18 != pFVar1);
              }
              if (((pFVar3 <= &local_c0) &&
                  (&local_c0 < (FName *)((longlong)pFVar3 + (longlong)param_3->ArrayMax * 0xc))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = param_3->ArrayNum;
              if (iVar8 == param_3->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar8 + 1;
              pFVar25 = (param_3->AllocatorInstance).Data;
              *(FName *)(pFVar25 + (longlong)iVar8 * 0xc) = local_c0;
              *(int *)(pFVar25 + (longlong)iVar8 * 0xc + 8) = local_b8[0].RegisteredTypeIndex;
              pFVar11 = FNiagaraTypeDefinitionHandle::Resolve(local_b8);
              iVar8 = FNiagaraTypeDefinition::GetSize(pFVar11);
              pFVar25 = (param_4->AllocatorInstance).Data;
              local_c8[0] = *param_5;
              if (((pFVar25 <= (FScriptContainerElement *)local_c8) &&
                  ((FScriptContainerElement *)local_c8 < pFVar25 + (longlong)param_4->ArrayMax * 4))
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
              iVar9 = param_4->ArrayNum;
              if (iVar9 == param_4->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar9 + 1;
              *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
              *param_5 = *param_5 + (int)((ulonglong)(longlong)iVar8 >> 2);
              FVar12 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            }
          }
LAB_149172a24:
          pFVar27 = pFVar27 + 10;
          uVar19 = (ulonglong)local_b0;
        } while( true );
      }
    }
  }
  return;
}

// CopyToInternal @ 149173970

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::CopyToInternal
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraDataInterface *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterfaceGrid2D::CopyToInternal((UNiagaraDataInterfaceGrid2D *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1].Proxy,&(this->RenderTargetUserParameter).Parameter)
      ;
      *(ENiagaraGpuBufferFormat *)&param_1[2]._padding_ = this->OverrideBufferFormat;
      bVar1 = *(byte *)((longlong)&param_1[2]._padding_ + 1);
      *(byte *)((longlong)&param_1[2]._padding_ + 1) = (bVar1 ^ this->bOverrideFormat) & 1 ^ bVar1;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// CreateShaderStorage @ 1491758f0

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceGrid2DCollection::CreateShaderStorage
          (UNiagaraDataInterfaceGrid2DCollection *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          FShaderParameterMap *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FNiagaraDataInterfaceParametersCS *pFVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  undefined4 uVar13;
  FName FVar14;
  FName FVar15;
  ForAnyElementType *pFVar16;
  FName *pFVar17;
  int *piVar18;
  ForAnyElementType *pFVar19;
  undefined1 local_res20 [8];
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  longlong local_58;
  longlong local_50;
  int *local_48;
  
  pFVar7 = ::operator_new(0x20);
  pFVar16 = (ForAnyElementType *)0x0;
  pFVar19 = pFVar16;
  if (pFVar7 != (ForAnyElementType *)0x0) {
    *pFVar7 = (ForAnyElementType)0x0;
    pFVar7[1] = (ForAnyElementType)0x0;
    pFVar7[2] = (ForAnyElementType)0x0;
    pFVar7[3] = (ForAnyElementType)0x0;
    pFVar19 = pFVar7;
  }
  uVar5 = (param_1->GeneratedFunctions).ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (*(int *)&pFVar19[1].field_0x4 < (int)uVar5) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,uVar5,pFVar19,*(int *)(pFVar19 + 1),(int *)&pFVar19[1].field_0x4);
  }
  pFVar7 = pFVar19 + 2;
  piVar18 = (int *)&pFVar19[3].field_0x4;
  local_48 = piVar18;
  if (*piVar18 < (int)uVar5) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,uVar5,pFVar7,*(int *)(pFVar19 + 3),piVar18);
  }
  local_70 = 0;
  local_50 = (longlong)(int)uVar5;
  if (0 < (int)uVar5) {
    local_58 = 0;
    do {
      lVar3 = local_58;
      uVar5 = 0;
      if ((int)(uint)pFVar16 < (param_1->GeneratedFunctions).ArrayNum) {
        uVar5 = ~(uint)pFVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
        return pFVar8;
      }
      pFVar17 = (FName *)((param_1->GeneratedFunctions).AllocatorInstance.Data + lVar3 * 0x50);
      uVar5 = pFVar17[4].ComparisonIndex.Value;
      FVar14 = pFVar17[3];
      FVar15 = (FName)((longlong)(int)uVar5 * 0x10 + (longlong)FVar14);
      FVar9 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
      while( true ) {
        if (pFVar17[4].ComparisonIndex.Value != uVar5) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
          FVar9 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
        }
        if (FVar14 == FVar15) goto LAB_149175d85;
        if (*(FName *)FVar14 == FVar9) break;
        FVar14 = (FName)((longlong)FVar14 + 0x10);
      }
      if ((longlong *)((longlong)FVar14 + 8) == (longlong *)0x0) {
LAB_149175d85:
        FVar10 = *pFVar19;
        puVar1 = &pFVar19[1].field_0x4;
        local_64 = 0;
        FVar12 = (ForAnyElementType)((longlong)&pFVar19->field_0x0 + ((longlong)FVar10 >> 0x18));
        FVar11 = FVar10;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar11 = FVar12;
        }
        if ((ulonglong)FVar11 <= &local_64) {
          if (((ulonglong)FVar10 & 1) != 0) {
            FVar10 = FVar12;
          }
          if ((&local_64 < (undefined8 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
            return pFVar8;
          }
        }
        iVar6 = *(int *)(pFVar19 + 1);
        if (iVar6 == *(int *)puVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (0x408,pFVar19,(int *)puVar1);
          *(int *)(pFVar19 + 1) = iVar6;
        }
        *(int *)(pFVar19 + 1) = iVar6 + 1;
        FVar10 = *pFVar19;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)((longlong)&pFVar19->field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        local_74 = 0xffffffff;
        *(undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 8) = local_64;
        FVar10 = *pFVar7;
        FVar11 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
        if (((ulonglong)FVar10 & 1) == 0) {
          FVar11 = FVar10;
        }
        if ((ulonglong)FVar11 <= &local_74) {
          if (((ulonglong)FVar10 & 1) != 0) {
            FVar10 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
          }
          if ((&local_74 <
               (undefined4 *)((longlong)FVar10 + (longlong)*(int *)&pFVar19[3].field_0x4 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
            return pFVar8;
          }
        }
        iVar6 = *(int *)(pFVar19 + 3);
        if (iVar6 == *(int *)&pFVar19[3].field_0x4) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (0x404,pFVar7,(int *)&pFVar19[3].field_0x4);
        }
        *(int *)(pFVar19 + 3) = iVar6 + 1;
        FVar10 = *pFVar7;
        uVar13 = local_74;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
        }
      }
      else {
        FVar9 = *pFVar17;
        if (((((FVar9 == SetVector4ValueFunctionName) || (FVar9 == GetVector4ValueFunctionName)) ||
             (FVar9 == SampleGridVector4FunctionName)) ||
            ((FVar9 == GetVector4AttributeIndexFunctionName ||
             (FVar9 == GetPreviousVector4ValueFunctionName)))) ||
           (FVar9 == SamplePreviousGridVector4FunctionName)) {
          uVar13 = 4;
        }
        else if ((((FVar9 == SetVector3ValueFunctionName) || (FVar9 == SetVectorValueFunctionName))
                 || ((FVar9 == GetVector3ValueFunctionName ||
                     (((FVar9 == SampleGridVector3FunctionName ||
                       (FVar9 == GetVectorAttributeIndexFunctionName)) ||
                      (FVar9 == GetPreviousVectorValueFunctionName)))))) ||
                (FVar9 == SamplePreviousGridVectorFunctionName)) {
          uVar13 = 3;
        }
        else if (((FVar9 == SetVector2ValueFunctionName) || (FVar9 == SetVector2DValueFunctionName))
                || ((((FVar9 == GetVector2ValueFunctionName ||
                      ((FVar9 == SampleGridVector2FunctionName ||
                       (FVar9 == GetVector2DAttributeIndexFunctionName)))) ||
                     (FVar9 == GetPreviousVector2DValueFunctionName)) ||
                    (FVar9 == SamplePreviousGridVector2DFunctionName)))) {
          uVar13 = 2;
        }
        else if ((((FVar9 == SetFloatValueFunctionName) || (FVar9 == GetFloatValueFunctionName)) ||
                 (FVar9 == SampleGridFloatFunctionName)) ||
                (((FVar9 == GetPreviousFloatValueFunctionName ||
                  (FVar9 == SamplePreviousGridFloatFunctionName)) ||
                 (FVar9 == GetFloatAttributeIndexFunctionName)))) {
          uVar13 = 1;
        }
        else {
          uVar13 = 0xffffffff;
        }
        local_6c = *(undefined4 *)((longlong)FVar14 + 8);
        uStack_68 = *(undefined4 *)((longlong)FVar14 + 0xc);
        FVar10 = *pFVar19;
        FVar11 = (ForAnyElementType)((longlong)&pFVar19->field_0x0 + ((longlong)FVar10 >> 0x18));
        if (((ulonglong)FVar10 & 1) == 0) {
          FVar11 = FVar10;
        }
        puVar1 = &pFVar19[1].field_0x4;
        if ((ulonglong)FVar11 <= &local_6c) {
          if (((ulonglong)FVar10 & 1) != 0) {
            FVar10 = (ForAnyElementType)((longlong)&pFVar19->field_0x0 + ((longlong)FVar10 >> 0x18))
            ;
          }
          if ((&local_6c < (undefined4 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
            return pFVar8;
          }
        }
        iVar6 = *(int *)(pFVar19 + 1);
        if (iVar6 == *(int *)puVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (0x408,pFVar19,(int *)puVar1);
          *(int *)(pFVar19 + 1) = iVar6;
        }
        *(int *)(pFVar19 + 1) = iVar6 + 1;
        FVar10 = *pFVar19;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)((longlong)&pFVar19->field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        *(ulonglong *)((longlong)FVar10 + (longlong)iVar6 * 8) = CONCAT44(uStack_68,local_6c);
        FVar10 = *pFVar7;
        FVar11 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
        if (((ulonglong)FVar10 & 1) == 0) {
          FVar11 = FVar10;
        }
        local_78 = uVar13;
        if ((ulonglong)FVar11 <= &local_78) {
          if (((ulonglong)FVar10 & 1) != 0) {
            FVar10 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
          }
          if ((&local_78 <
               (undefined4 *)((longlong)FVar10 + (longlong)*(int *)&pFVar19[3].field_0x4 * 4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
            return pFVar8;
          }
        }
        iVar6 = *(int *)(pFVar19 + 3);
        if (iVar6 == *(int *)&pFVar19[3].field_0x4) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (0x404,pFVar7,(int *)&pFVar19[3].field_0x4);
        }
        *(int *)(pFVar19 + 3) = iVar6 + 1;
        FVar10 = *pFVar7;
        uVar13 = local_78;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)((longlong)&pFVar7->field_0x0 + ((longlong)FVar10 >> 0x18));
        }
      }
      local_70 = local_70 + 1;
      pFVar16 = (ForAnyElementType *)(ulonglong)local_70;
      local_58 = local_58 + 1;
      *(undefined4 *)((longlong)FVar10 + (longlong)iVar6 * 4) = uVar13;
      piVar18 = local_48;
    } while (local_58 < local_50);
  }
  iVar6 = *(int *)(pFVar19 + 1);
  if (*(int *)&pFVar19[1].field_0x4 != iVar6) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,iVar6,pFVar19,iVar6,(int *)&pFVar19[1].field_0x4);
  }
  iVar6 = *(int *)(pFVar19 + 3);
  if (*(int *)&pFVar19[3].field_0x4 != iVar6) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (4,4,iVar6,pFVar19 + 2,iVar6,piVar18);
  }
  return (FNiagaraDataInterfaceParametersCS *)pFVar19;
}

// DestroyPerInstanceData @ 149177130

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
UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData
          (UNiagaraDataInterfaceGrid2DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  ulong64 local_a8;
  ulong64 local_a0;
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData_GT,
               (int)(local_a8 >> 0x20) * 0x17 + (int)local_a8,&local_a8);
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
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
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData2099>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData2099>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
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
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  local_a0 = param_2->ID;
  if (*(int *)&(this->ManagedRenderTargets).field_0x8 !=
      *(int *)&(this->ManagedRenderTargets).field_0x34) {
    TSet<TTuple<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UTextureRenderTarget2DArray>,0>,FDefaultSetAllocator>
                *)&this->ManagedRenderTargets,(int)(local_a0 >> 0x20) * 0x17 + (int)local_a0,
               &local_a0);
  }
  return;
}

// Equals @ 149178b90

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::Equals
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceGrid2D::Equals((UNiagaraDataInterfaceGrid2D *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid2DCollection_const_>(&local_28);
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
    if (((((FNiagaraDataInterfaceProxy *)(this->RenderTargetUserParameter).Parameter._padding_ ==
           param_1[1].Proxy.Ptr) &&
         ((int)(this->RenderTargetUserParameter).Parameter._padding_ ==
          *(int *)&param_1[1].field_0x30)) &&
        ((ENiagaraGpuBufferFormat)param_1[2]._padding_ == this->OverrideBufferFormat)) &&
       (((*(byte *)((longlong)&param_1[2]._padding_ + 1) ^ this->bOverrideFormat) & 1) == 0)) {
      return true;
    }
  }
  return false;
}

// FillRawTexture2D @ 149179d00

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraComponent *param_1,
          UTextureRenderTarget2D *param_2,int *param_3,int *param_4)

{
  FNiagaraSystemInstanceController *this_00;
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  FGrid2DCollectionRWInstanceData_GameThread *pFVar6;
  FNiagaraDataInterfaceProxyGrid2DCollectionProxy *pFVar7;
  FTextureResource *pFVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  FNiagaraGrid2DLegacyTiled2DInfo local_d8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (param_1 == (UNiagaraComponent *)0x0) {
    *param_3 = -1;
    *param_4 = -1;
    return false;
  }
  this_00 = (param_1->SystemInstanceController).Object;
  pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FNiagaraSystemInstanceController *)0x0) {
LAB_149179f3c:
    *param_3 = -1;
    *param_4 = -1;
  }
  else {
    pcVar5 = (code *)FNiagaraSystemInstanceController::GetSystemInstanceID(this_00);
    pFVar6 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
             ::FindRef((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
                        *)&this->SystemInstancesToProxyData_GT,(ulong64)pcVar5);
    if (pFVar6 == (FGrid2DCollectionRWInstanceData_GameThread *)0x0) goto LAB_149179f3c;
    FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
              (&local_d8,&pFVar6->NumCells,pFVar6->NumAttributes);
    *param_3 = local_d8.NumTiles.field0_0x0._s_0.X;
    *param_4 = local_d8.NumTiles.field0_0x0._s_0.Y;
    if ((((param_2 != (UTextureRenderTarget2D *)0x0) &&
         (param_2->SizeX == local_d8.Size.field0_0x0._s_0.X)) &&
        (param_2->SizeY == local_d8.Size.field0_0x0._s_0.Y)) &&
       (cVar2 = (**(code **)(param_2->_padding_ + 0x3d0))(param_2), cVar2 == '\r')) {
      pFVar7 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid2DCollectionProxy>
                         ((UNiagaraDataInterface *)this);
      pFVar8 = UTexture::GetResource((UTexture *)param_2);
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x20,8);
      *local_90 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      local_90[1] = (code *)pFVar7;
      local_90[2] = pcVar5;
      local_90[3] = (code *)pFVar8;
      if (local_90 + 1 != (code **)0x0) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D_::__l2::TSTR_FUpdateDIColorCurve2365>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_88._0_8_ = local_b8[0];
        local_60 = local_90;
        local_90 = (code **)0x0;
        local_88._16_8_ = local_a8[0];
        local_88._24_8_ = local_a8[1];
        local_88._32_8_ = local_a8[2];
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar9 = (FRenderCommandTag *)
                 TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D'::__l2::TSTR_FUpdateDIColorCurve2365>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar9);
        uVar11 = (ulonglong)local_58;
        if ((2 < uVar11) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar5 = (code *)swi(3);
          uVar4 = (*pcVar5)();
          return (bool)uVar4;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            ppcVar10 = (code **)(local_88 + 0x10);
            if (local_60 != (code **)0x0) {
              ppcVar10 = local_60;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(local_88);
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar10 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar10 = local_90;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
      bVar3 = true;
      goto LAB_149179f4a;
    }
  }
  bVar3 = false;
LAB_149179f4a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// FillTexture2D @ 149179fa0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::FillTexture2D
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraComponent *param_1,
          UTextureRenderTarget2D *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraSystemInstanceController *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  FNiagaraDataInterfaceProxyGrid2DCollectionProxy *local_b8;
  code *pcStack_b0;
  FTextureResource *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_1 == (UNiagaraComponent *)0x0) || (param_2 == (UTextureRenderTarget2D *)0x0)) {
    return false;
  }
  pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  this_00 = (param_1->SystemInstanceController).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((((this_00 == (FNiagaraSystemInstanceController *)0x0) || (param_3 < 0)) ||
       ((int)this->_padding_ <= param_3)) ||
      ((param_2->SizeX != *(int *)((longlong)&this->_padding_ + 4) ||
       (param_2->SizeY != (int)this->_padding_)))) ||
     (cVar3 = (**(code **)(param_2->_padding_ + 0x3d0))(param_2), cVar3 != '\r')) {
    bVar4 = false;
  }
  else {
    local_b8 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid2DCollectionProxy>
                         ((UNiagaraDataInterface *)this);
    pcStack_b0 = (code *)FNiagaraSystemInstanceController::GetSystemInstanceID(this_00);
    local_a8 = UTexture::GetResource((UTexture *)param_2);
    local_98[0] = (code *)0x0;
    iStack_a0 = param_3;
    local_70 = FMemory::Malloc(0x28,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = (code *)local_b8;
    local_70[2] = pcStack_b0;
    local_70[3] = (code *)local_a8;
    local_70[4] = (code *)CONCAT44(uStack_9c,iStack_a0);
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::FillTexture2D_::__l2::TSTR_FUpdateDIColorCurve2309>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::FillTexture2D'::__l2::TSTR_FUpdateDIColorCurve2309>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if ((2 < uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar7 = local_40;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar7 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar7 = local_70;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    bVar4 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// FindAttributes @ 14917a990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::FindAttributes
          (UNiagaraDataInterfaceGrid2DCollection *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,int *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UNiagaraSystem *this_00;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  FVersionedNiagaraEmitterData *this_01;
  FNiagaraEmitterHandle *this_02;
  undefined1 local_38 [4];
  int local_34 [3];
  
  *param_3 = 0;
  pUVar4 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  this_00 = (UNiagaraSystem *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  if (this_00 != (UNiagaraSystem *)0x0) {
    local_34[0] = (int)this->_padding_;
    pTVar5 = UNiagaraSystem::GetEmitterHandles(this_00);
    iVar2 = pTVar5->ArrayNum;
    this_02 = (FNiagaraEmitterHandle *)(pTVar5->AllocatorInstance).Data;
    pFVar1 = this_02 + iVar2;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_38);
      }
      if (this_02 == pFVar1) break;
      this_01 = FNiagaraEmitterHandle::GetEmitterData(this_02);
      if (this_01 != (FVersionedNiagaraEmitterData *)0x0) {
        bVar3 = FNiagaraEmitterHandle::GetIsEnabled(this_02);
        if (bVar3) {
          bVar3 = FVersionedNiagaraEmitterData::IsValid(this_01);
          if ((bVar3) && (this_01->SimTarget == GPUComputeSim)) {
            CollectAttributesForScript
                      ((this_01->GPUComputeScript).field0_0x0.DebugPtr,(UNiagaraDataInterface *)this
                       ,param_1,param_2,local_34,param_4);
          }
        }
      }
      this_02 = this_02 + 1;
    }
    *param_3 = local_34[0] - (int)this->_padding_;
  }
  return;
}

// GetCanvasVariables @ 14917db20

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetCanvasVariables
          (UNiagaraDataInterfaceGrid2DCollection *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int local_res18 [4];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FindAttributes(this,param_1,&local_18,local_res18,(TArray<FText,TSizedDefaultAllocator<32>_> *)0x0
                );
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetComponentCountFromFuncName @ 14917db60

int __cdecl UNiagaraDataInterfaceGrid2DCollection::GetComponentCountFromFuncName(FName *param_1)

{
  FName FVar1;
  int iVar2;
  
  FVar1 = *param_1;
  if ((((FVar1 == SetVector4ValueFunctionName) || (FVar1 == GetVector4ValueFunctionName)) ||
      (FVar1 == SampleGridVector4FunctionName)) ||
     (((FVar1 == GetVector4AttributeIndexFunctionName ||
       (FVar1 == GetPreviousVector4ValueFunctionName)) ||
      (FVar1 == SamplePreviousGridVector4FunctionName)))) {
    return 4;
  }
  if (((FVar1 != SetVector3ValueFunctionName) && (FVar1 != SetVectorValueFunctionName)) &&
     ((FVar1 != GetVector3ValueFunctionName &&
      ((((FVar1 != SampleGridVector3FunctionName && (FVar1 != GetVectorAttributeIndexFunctionName))
        && (FVar1 != GetPreviousVectorValueFunctionName)) &&
       (FVar1 != SamplePreviousGridVectorFunctionName)))))) {
    if ((((FVar1 != SetVector2ValueFunctionName) && (FVar1 != SetVector2DValueFunctionName)) &&
        (((FVar1 != GetVector2ValueFunctionName &&
          ((FVar1 != SampleGridVector2FunctionName &&
           (FVar1 != GetVector2DAttributeIndexFunctionName)))) &&
         (FVar1 != GetPreviousVector2DValueFunctionName)))) &&
       (FVar1 != SamplePreviousGridVector2DFunctionName)) {
      if ((((FVar1 != SetFloatValueFunctionName) && (FVar1 != GetFloatValueFunctionName)) &&
          (FVar1 != SampleGridFloatFunctionName)) &&
         ((FVar1 != GetPreviousFloatValueFunctionName &&
          (FVar1 != SamplePreviousGridFloatFunctionName)))) {
        iVar2 = 1;
        if (FVar1 != GetFloatAttributeIndexFunctionName) {
          iVar2 = -1;
        }
        return iVar2;
      }
      return 1;
    }
    return 2;
  }
  return 3;
}

// GetExposedVariableValue @ 14917e330

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
UNiagaraDataInterfaceGrid2DCollection::GetExposedVariableValue
          (UNiagaraDataInterfaceGrid2DCollection *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (param_1->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if (((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (param_1->Name == ExposedRTVar.Name)) &&
        ((param_1->TypeDefHandle).RegisteredTypeIndex ==
         ExposedRTVar.TypeDefHandle.RegisteredTypeIndex)) &&
       ((param_2 != (void *)0x0 && (*(longlong *)((longlong)param_2 + 0x70) != 0)))) {
      *(longlong *)param_4 = *(longlong *)((longlong)param_2 + 0x70);
      return true;
    }
  }
  return false;
}

// GetExposedVariables @ 14917e4e0

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetExposedVariables
          (UNiagaraDataInterfaceGrid2DCollection *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar1 + (longlong)iVar2 * 0xc) = ExposedRTVar.Name;
  *(int *)(pFVar1 + (longlong)iVar2 * 0xc + 8) = ExposedRTVar.TypeDefHandle.RegisteredTypeIndex;
  return;
}

// GetPrivateStaticClass @ 14917f950

UClass * __cdecl UNiagaraDataInterfaceGrid2DCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid2DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid2DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid2DCollection>,local_res8,
               UNiagaraDataInterfaceGrid2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid2DCollection.InnerSingleton;
}

// GetRawTextureSize @ 14917fe90

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

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraComponent *param_1,int *param_2,
          int *param_3)

{
  FNiagaraSystemInstanceController *this_00;
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  FGrid2DCollectionRWInstanceData_GameThread *pFVar3;
  FNiagaraGrid2DLegacyTiled2DInfo local_28;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
    return;
  }
  this_00 = (param_1->SystemInstanceController).Object;
  pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    uVar2 = FNiagaraSystemInstanceController::GetSystemInstanceID(this_00);
    pFVar3 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
             ::FindRef((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
                        *)&this->SystemInstancesToProxyData_GT,uVar2);
    if (pFVar3 != (FGrid2DCollectionRWInstanceData_GameThread *)0x0) {
      FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
                (&local_28,&pFVar3->NumCells,(int)this->_padding_);
      *param_2 = local_28.Size.field0_0x0._s_0.X;
      *param_3 = local_28.Size.field0_0x0._s_0.Y;
      goto LAB_14917ff31;
    }
  }
  *param_2 = -1;
  *param_3 = -1;
LAB_14917ff31:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetShaderStorageType @ 149180030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetShaderStorageType
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = FNiagaraDataInterfaceParametersCS_Grid2DCollection::InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid2DCollection,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid2DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeChannelCount";
    DAT_1552741fa = Freeze::FindFieldNameLength(L"AttributeChannelCount");
    _DAT_1552741d8 = StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>();
    DAT_1552741e0 = ::TypeBuffer[0x10];
    DAT_1552741e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552741e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552741e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552741e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552741e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552741e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552741e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid2DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552741e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552741f0 = 0x10;
    _DAT_1552741f4 = 1;
    _DAT_1552741f8 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid2DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_1552741ca = Freeze::FindFieldNameLength(L"AttributeNames");
    _DAT_1552741a8 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_1552741b0 = ::TypeBuffer[0x10];
    DAT_1552741b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552741b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552741b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552741b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552741b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552741b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552741b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid2DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_1552741b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552741c0 = 0;
    _DAT_1552741c4 = 1;
    _DAT_1552741c8 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTextureSize @ 149180770

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

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetTextureSize
          (UNiagaraDataInterfaceGrid2DCollection *this,UNiagaraComponent *param_1,int *param_2,
          int *param_3)

{
  FNiagaraSystemInstanceController *this_00;
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  ulong64 uVar3;
  FGrid2DCollectionRWInstanceData_GameThread *pFVar4;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
    return;
  }
  this_00 = (param_1->SystemInstanceController).Object;
  pTVar1 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FNiagaraSystemInstanceController *)0x0) {
    uVar3 = FNiagaraSystemInstanceController::GetSystemInstanceID(this_00);
    pFVar4 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
             ::FindRef((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
                        *)&this->SystemInstancesToProxyData_GT,uVar3);
    if (pFVar4 != (FGrid2DCollectionRWInstanceData_GameThread *)0x0) {
      *param_2 = (pFVar4->NumCells).field0_0x0._s_0.X;
      iVar2 = (pFVar4->NumCells).field0_0x0._s_0.Y;
      goto LAB_1491807f3;
    }
  }
  iVar2 = -1;
  *param_2 = -1;
LAB_1491807f3:
  *param_3 = iVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetVMExternalFunction @ 149180df0

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::GetVMExternalFunction
          (UNiagaraDataInterfaceGrid2DCollection *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  int iVar8;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  undefined1 local_130 [8];
  FDelegateAllocation local_128;
  undefined1 local_118 [8];
  FDelegateAllocation local_110;
  undefined1 local_100 [8];
  FDelegateAllocation local_f8;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  UNiagaraDataInterfaceGrid2D::GetVMExternalFunction
            ((UNiagaraDataInterfaceGrid2D *)this,param_1,param_2,param_3);
  FVar7 = param_1->Name;
  if (FVar7 == UNiagaraDataInterfaceRWBase::WorldBBoxSizeFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0x41a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_140;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_140);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid2DCollection_VMGetWorldBBoxSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_e8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_148);
  }
  else if (FVar7 == UNiagaraDataInterfaceRWBase::CellSizeFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0x421,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_130 = (undefined1  [8])0x0;
    local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_128.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_128;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid2DCollection_VMGetCellSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_130,
               (FWriteAccessScope *)&local_d0);
    if ((local_128.DelegateSize != 0) &&
       (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_128,0,0,0x10);
      local_128.DelegateSize = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_130);
  }
  else if (FVar7 == UNiagaraDataInterfaceRWBase::NumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0x428,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_118 = (undefined1  [8])0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_110;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid2DCollection_VMGetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
               (FWriteAccessScope *)&local_b8);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_118);
  }
  else if (FVar7 == SetNumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                           ,0x42d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_100 = (undefined1  [8])0x0;
    local_f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_f8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_f8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid2DCollection_VMSetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_100,
               (FWriteAccessScope *)&local_a0);
    if ((local_f8.DelegateSize != 0) &&
       (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_f8,0,0,0x10);
      local_f8.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_f8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_100);
  }
  else {
    if (FVar7 == GetVector4AttributeIndexFunctionName) {
      pFVar6 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
      for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 2) {
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181316;
      }
      pFVar6 = (FName *)0x0;
LAB_149181316:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x434,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = 4;
    }
    else if (FVar7 == GetVectorAttributeIndexFunctionName) {
      pFVar6 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
      for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 2) {
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181390;
      }
      pFVar6 = (FName *)0x0;
LAB_149181390:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x43a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = 3;
    }
    else if (FVar7 == GetVector2DAttributeIndexFunctionName) {
      pFVar6 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
      for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 2) {
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181405;
      }
      pFVar6 = (FName *)0x0;
LAB_149181405:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x440,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = 2;
    }
    else {
      if (FVar7 != GetFloatAttributeIndexFunctionName) {
        return;
      }
      pFVar6 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
      for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 2) {
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181477;
      }
      pFVar6 = (FName *)0x0;
LAB_149181477:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                             ,0x446,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = 1;
    }
    TUNiagaraDataInterfaceGrid2DCollection_VMGetAttributeIndexBinder::Bind<FName,int>
              ((UNiagaraDataInterface *)this,param_3,FVar7,iVar8);
  }
  return;
}

// GetValueTypeFromFuncName @ 149182040

FNiagaraTypeDefinition * __cdecl
UNiagaraDataInterfaceGrid2DCollection::GetValueTypeFromFuncName
          (FNiagaraTypeDefinition *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  
  FVar1 = *param_1;
  if (((((FVar1 == SetVector4ValueFunctionName) || (FVar1 == GetVector4ValueFunctionName)) ||
       (FVar1 == SampleGridVector4FunctionName)) ||
      ((FVar1 == GetPreviousVector4ValueFunctionName ||
       (FVar1 == SamplePreviousGridVector4FunctionName)))) ||
     (FVar1 == CubicSamplePreviousGridVector4FunctionName)) {
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0);
    }
    __return_storage_ptr__->UnderlyingType = FNiagaraTypeDefinition::Vec4Def.UnderlyingType;
    __return_storage_ptr__->Flags = FNiagaraTypeDefinition::Vec4Def.Flags;
    __return_storage_ptr__->Size = FNiagaraTypeDefinition::Vec4Def.Size;
    __return_storage_ptr__->Alignment = FNiagaraTypeDefinition::Vec4Def.Alignment;
    __return_storage_ptr__->RegisteredTypeDefIndex =
         FNiagaraTypeDefinition::Vec4Def.RegisteredTypeDefIndex;
    __return_storage_ptr__->UnderlyingTypePathNameHash =
         FNiagaraTypeDefinition::Vec4Def.UnderlyingTypePathNameHash;
    return __return_storage_ptr__;
  }
  if ((((FVar1 == SetVector3ValueFunctionName) || (FVar1 == SetVectorValueFunctionName)) ||
      (FVar1 == GetVector3ValueFunctionName)) ||
     (((FVar1 == SampleGridVector3FunctionName || (FVar1 == GetPreviousVectorValueFunctionName)) ||
      ((FVar1 == SamplePreviousGridVectorFunctionName ||
       (FVar1 == CubicSamplePreviousGridVectorFunctionName)))))) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition
              (__return_storage_ptr__,&FNiagaraTypeDefinition::Vec3Def);
    return __return_storage_ptr__;
  }
  if (((FVar1 == SetVector2ValueFunctionName) || (FVar1 == SetVector2DValueFunctionName)) ||
     (((FVar1 == GetVector2ValueFunctionName ||
       (((FVar1 == SampleGridVector2FunctionName || (FVar1 == GetPreviousVector2DValueFunctionName))
        || (FVar1 == SamplePreviousGridVector2DFunctionName)))) ||
      (FVar1 == CubicSamplePreviousGridVector2DFunctionName)))) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition
              (__return_storage_ptr__,&FNiagaraTypeDefinition::Vec2Def);
    return __return_storage_ptr__;
  }
  if ((((FVar1 != SetFloatValueFunctionName) && (FVar1 != GetFloatValueFunctionName)) &&
      ((FVar1 != SampleGridFloatFunctionName &&
       ((FVar1 != GetPreviousFloatValueFunctionName &&
        (FVar1 != SamplePreviousGridFloatFunctionName)))))) &&
     (FVar1 != CubicSamplePreviousGridFloatFunctionName)) {
    __return_storage_ptr__->Size = -1;
    __return_storage_ptr__->Alignment = -1;
    __return_storage_ptr__->RegisteredTypeDefIndex = -1;
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)0x0;
    __return_storage_ptr__->UnderlyingType = 0;
    __return_storage_ptr__->Flags = '\0';
    __return_storage_ptr__->UnderlyingTypePathNameHash = 0xffffffff;
    return __return_storage_ptr__;
  }
  FNiagaraTypeDefinition::FNiagaraTypeDefinition
            (__return_storage_ptr__,&FNiagaraTypeDefinition::FloatDef);
  return __return_storage_ptr__;
}

// HasPostSimulateTick @ 149182500

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::HasPostSimulateTick
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  return true;
}

// HasPreSimulateTick @ 149182540

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::HasPreSimulateTick
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  return true;
}

// InitPerInstanceData @ 149182900

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
UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData
          (UNiagaraDataInterfaceGrid2DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ENiagaraGpuBufferFormat EVar5;
  TOptional<EPixelFormat> TVar6;
  int iVar7;
  UClass *this_00;
  undefined6 extraout_var;
  FTextureResource *pFVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  int iVar12;
  ulonglong uVar13;
  EPixelFormatCapabilities EVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStackY_1e8 [32];
  FGrid2DCollectionRWInstanceData_GameThread *local_1b8;
  int local_1b0;
  undefined1 local_1ac [4];
  TPairInitializer<unsigned___int64_&&,FGrid2DCollectionRWInstanceData_GameThread_*_&> local_1a8;
  FGrid2DCollectionRWInstanceData_GameThread ***local_198;
  FGrid2DCollectionRWInstanceData_GameThread **local_190;
  undefined1 local_188 [24];
  FTextureResource *local_170;
  ForAnyElementType local_168;
  code *local_160;
  FGrid2DCollectionRWInstanceData_GameThread local_158;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  EPixelFormat *pEVar8;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                         ,0x794,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  memset(param_1,0,0xb0);
  local_1b8 = FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
                        (param_1);
  local_1a8.Value = (FGrid2DCollectionRWInstanceData_GameThread **)param_2->ID;
  local_198 = &local_1a8.Value;
  local_190 = &local_1b8;
  TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FGrid2DCollectionRWInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData_GT,&local_1a8,(bool *)&local_198);
  pFVar9 = (FTextureResource *)0x0;
  local_1b0 = 0;
  (local_1b8->NumCells).field0_0x0._s_0.X = *(int *)((longlong)&this->_padding_ + 4);
  (local_1b8->NumCells).field0_0x0._s_0.Y = (int)this->_padding_;
  FindAttributes(this,&local_1b8->Vars,&local_1b8->Offsets,&local_1b0,
                 (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0);
  iVar12 = (int)this->_padding_ + local_1b0;
  iVar7 = 1;
  if (1 < iVar12) {
    iVar7 = iVar12;
  }
  local_1b8->NumAttributes = iVar7;
  if (((0 < (int)this->_padding_) && (0 < local_1b0)) && (2 < (byte)LogNiagara._0_1_)) {
    ::FName::ToString((FName *)(this->_padding_ + 8),(FString *)(local_188 + 8));
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((FWeakObjectPtr)local_188._8_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_188._8_8_);
    }
  }
  dVar17 = (double)this->_padding_;
  (local_1b8->WorldBBoxSize).field0_0x0._s_0.X = (double)this->_padding_;
  (local_1b8->WorldBBoxSize).field0_0x0._s_0.Y = dVar17;
  if (this->bOverrideFormat == 0) {
    this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    EVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x19;
  }
  else {
    EVar5 = this->OverrideBufferFormat;
  }
  EVar14 = (uint)EVar5;
  if ((uint)GNiagaraGrid2DOverrideFormat < 3) {
    EVar14 = GNiagaraGrid2DOverrideFormat & 0xff;
  }
  TVar6 = FNiagaraUtilities::BufferFormatToPixelFormat
                    ((ENiagaraGpuBufferFormat)local_1ac,EVar14,0x600004);
  pEVar8 = (EPixelFormat *)CONCAT62(extraout_var,TVar6);
  if ((TOptional<EPixelFormat> *)pEVar8 != &local_1b8->PixelFormat) {
    if (pEVar8[1] == PF_Unknown) {
      if ((local_1b8->PixelFormat).bIsSet != false) {
        (local_1b8->PixelFormat).bIsSet = false;
      }
    }
    else {
      (local_1b8->PixelFormat).TypedValue = *pEVar8;
      (local_1b8->PixelFormat).bIsSet = true;
    }
  }
  if (__real_322bcc77 <
      (float)((uint)(GNiagaraGrid2DResolutionMultiplier - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    iVar7 = (int)((float)(local_1b8->NumCells).field0_0x0._s_0.X *
                 GNiagaraGrid2DResolutionMultiplier);
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    (local_1b8->NumCells).field0_0x0._s_0.X = iVar7;
    iVar7 = (int)((float)(local_1b8->NumCells).field0_0x0._s_0.Y *
                 GNiagaraGrid2DResolutionMultiplier);
    if (iVar7 < 1) {
      iVar7 = 1;
    }
    (local_1b8->NumCells).field0_0x0._s_0.Y = iVar7;
  }
  if (*(char *)((longlong)&this->_padding_ + 4) != '\0') {
    dVar17 = (double)this->_padding_;
    if ((double)this->_padding_ <= (double)this->_padding_) {
      dVar17 = (double)this->_padding_;
    }
    dVar17 = dVar17 / (double)*(int *)((longlong)&this->_padding_ + 4);
    (local_1b8->NumCells).field0_0x0._s_0.X =
         (int)((longlong)
               ROUND((__real_4000000000000000 / dVar17) * (double)this->_padding_ -
                     __real_3fe0000000000000) >> 1);
    (local_1b8->NumCells).field0_0x0._s_0.Y =
         (int)((longlong)
               ROUND(((double)this->_padding_ + (double)this->_padding_) / dVar17 -
                     __real_3fe0000000000000) >> 1);
    dVar15 = (double)this->_padding_;
    dVar16 = (double)this->_padding_;
    if (dVar16 <= dVar15) {
      if ((dVar16 < dVar15) &&
         (iVar7 = (local_1b8->NumCells).field0_0x0._s_0.X, dVar16 = (double)iVar7 * dVar17 - dVar16,
         __real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        (local_1b8->NumCells).field0_0x0._s_0.X = iVar7 + 1;
      }
    }
    else {
      iVar7 = (local_1b8->NumCells).field0_0x0._s_0.Y;
      dVar15 = (double)iVar7 * dVar17 - dVar15;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        (local_1b8->NumCells).field0_0x0._s_0.Y = iVar7 + 1;
      }
    }
    iVar7 = (local_1b8->NumCells).field0_0x0._s_0.Y;
    (local_1b8->WorldBBoxSize).field0_0x0._s_0.X =
         (double)(local_1b8->NumCells).field0_0x0._s_0.X * dVar17;
    (local_1b8->WorldBBoxSize).field0_0x0._s_0.Y = (double)iVar7 * dVar17;
    *(int *)((longlong)&this->_padding_ + 4) = (local_1b8->NumCells).field0_0x0._s_0.X;
    *(int *)&this->_padding_ = (local_1b8->NumCells).field0_0x0._s_0.Y;
  }
  iVar7 = (local_1b8->NumCells).field0_0x0._s_0.Y;
  dVar17 = (local_1b8->WorldBBoxSize).field0_0x0._s_0.Y;
  (local_1b8->CellSize).field0_0x0._s_0.X =
       (local_1b8->WorldBBoxSize).field0_0x0._s_0.X /
       (double)(local_1b8->NumCells).field0_0x0._s_0.X;
  (local_1b8->CellSize).field0_0x0._s_0.Y = dVar17 / (double)iVar7;
  local_1b8->TargetTexture = (UTextureRenderTarget *)0x0;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (&local_1b8->RTUserParamBinding,(FNiagaraParameterStore *)local_188,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  FGrid2DCollectionRWInstanceData_GameThread::UpdateTargetTexture
            (local_1b8,(ENiagaraGpuBufferFormat)EVar14);
  local_1b8->ClearBeforeNonIterationStage = SUB81(this->_padding_,0);
  pFVar1 = (FScriptContainerElement *)this->_padding_;
  if ((pFVar1 == (FScriptContainerElement *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (local_1b8->TargetTexture != (UTextureRenderTarget *)0x0) {
    pFVar9 = UTexture::GetResource((UTexture *)local_1b8->TargetTexture);
  }
  local_160 = (code *)param_2->ID;
  local_170 = pFVar9;
  local_168.Data = pFVar1;
  FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
            (&local_158,local_1b8);
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0xd0,8);
  ppcVar11 = local_80 + 1;
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar11 = (code *)local_170;
  local_80[2] = (code *)local_168.Data;
  local_80[3] = local_160;
  FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
            ((FGrid2DCollectionRWInstanceData_GameThread *)(local_80 + 4),&local_158);
  if (ppcVar11 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData_::__l2::TSTR_FUpdateData2049>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData2049>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar13 = (ulonglong)local_48;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  if (local_158.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Offsets.AllocatorInstance.Data);
  }
  if (local_158.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Vars.AllocatorInstance.Data);
  }
  if (local_158.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data);
  }
  return true;
}

// PerInstanceDataSize @ 149186730

int __thiscall
UNiagaraDataInterfaceGrid2DCollection::PerInstanceDataSize
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  return 0xb0;
}

// PerInstanceTick @ 149186a40

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
UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick
          (UNiagaraDataInterfaceGrid2DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  ENiagaraGpuBufferFormat EVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *this_00;
  FTextureResource *pFVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  FGrid2DCollectionRWInstanceData_GameThread *this_03;
  undefined1 *puVar13;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar12 = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SystemInstancesToProxyData_GT).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SystemInstancesToProxyData_GT).field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    ((uVar12 >> 0x20) * 0x17 + uVar12 &
                    (ulonglong)(*(int *)&(this->SystemInstancesToProxyData_GT).field_0x48 - 1)) * 4)
    ;
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar8 * 0x18;
        if (*(ulonglong *)
             (*(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar8 * 0x18) == uVar12)
        {
          if (lVar1 != 0) {
            this_03 = *(FGrid2DCollectionRWInstanceData_GameThread **)(lVar1 + 8);
            goto LAB_149186aea;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  this_03 = (FGrid2DCollectionRWInstanceData_GameThread *)0x0;
LAB_149186aea:
  if (this->bOverrideFormat == 0) {
    this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    EVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x19;
  }
  else {
    EVar4 = this->OverrideBufferFormat;
  }
  if ((uint)GNiagaraGrid2DOverrideFormat < 3) {
    EVar4 = (ENiagaraGpuBufferFormat)GNiagaraGrid2DOverrideFormat;
  }
  bVar5 = FGrid2DCollectionRWInstanceData_GameThread::UpdateTargetTexture(this_03,EVar4);
  pcVar2 = (code *)this->_padding_;
  if (pcVar2 == (code *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if (this_03->TargetTexture == (UTextureRenderTarget *)0x0) {
    pFVar9 = (FTextureResource *)0x0;
  }
  else {
    pFVar9 = UTexture::GetResource((UTexture *)this_03->TargetTexture);
  }
  pcVar3 = (code *)param_2->ID;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[1] = (code *)pFVar9;
  local_80[2] = pcVar2;
  local_80[3] = pcVar3;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick_::__l2::TSTR_FUpdateData2125>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData2125>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar12 = (ulonglong)local_48;
    if (2 < uVar12) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar11 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  return bVar5;
}

// PerInstanceTickPostSimulate @ 149187790

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
UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceGrid2DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  code *pcVar1;
  ENiagaraGpuBufferFormat EVar2;
  bool bVar3;
  undefined1 uVar4;
  UNiagaraSettings *pUVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [32];
  FTextureResource *local_168;
  FNiagaraDataInterfaceProxyGrid2DCollectionProxy *local_160;
  code *local_158;
  FGrid2DCollectionRWInstanceData_GameThread local_150;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (((*(char *)((longlong)param_1 + 0x98) != '\0') && (0 < *(int *)((longlong)param_1 + 4))) &&
     (0 < *(int *)((longlong)param_1 + 8))) {
    *(undefined1 *)((longlong)param_1 + 0x98) = 0;
    *(double *)((longlong)param_1 + 0x10) =
         *(double *)((longlong)param_1 + 0x20) / (double)*(int *)((longlong)param_1 + 4);
    *(double *)((longlong)param_1 + 0x18) =
         *(double *)((longlong)param_1 + 0x28) / (double)*(int *)((longlong)param_1 + 8);
    if (*(longlong *)((longlong)param_1 + 0x70) != 0) {
      if (this->bOverrideFormat == 0) {
        pUVar5 = GetDefault<UNiagaraSettings>();
        EVar2 = pUVar5->DefaultGridFormat;
      }
      else {
        EVar2 = this->OverrideBufferFormat;
      }
      if ((uint)GNiagaraGrid2DOverrideFormat < 3) {
        EVar2 = (ENiagaraGpuBufferFormat)GNiagaraGrid2DOverrideFormat;
      }
      FGrid2DCollectionRWInstanceData_GameThread::UpdateTargetTexture(param_1,EVar2);
    }
    local_160 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid2DCollectionProxy>
                          ((UNiagaraDataInterface *)this);
    if (*(UTexture **)((longlong)param_1 + 0x70) == (UTexture *)0x0) {
      local_168 = (FTextureResource *)0x0;
    }
    else {
      local_168 = UTexture::GetResource(*(UTexture **)((longlong)param_1 + 0x70));
    }
    local_158 = (code *)param_2->ID;
    FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
              (&local_150,param_1);
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0xd0,8);
    ppcVar7 = local_70 + 1;
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    *ppcVar7 = (code *)local_168;
    local_70[2] = (code *)local_160;
    local_70[3] = local_158;
    FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
              ((FGrid2DCollectionRWInstanceData_GameThread *)(local_70 + 4),&local_150);
    if (ppcVar7 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData2544>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceGrid2DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData2544>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar8 = (ulonglong)local_38;
      if (2 < uVar8) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar7 = local_40;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar7 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar7 = local_70;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    if (local_150.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Offsets.AllocatorInstance.Data);
    }
    if (local_150.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Vars.AllocatorInstance.Data);
    }
    if (local_150.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 149188760

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::PostInitProperties
          (UNiagaraDataInterfaceGrid2DCollection *this)

{
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 local_38;
  FNiagaraTypeDefinitionHandle local_30;
  undefined8 local_2c;
  undefined4 local_24;
  TObjectPtr<UObject>_u_0 local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined8 local_14;
  undefined4 local_c;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_38 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38.DebugPtr);
    }
    local_30.RegisteredTypeIndex._2_1_ = 0;
    local_30.RegisteredTypeIndex._0_2_ = 1;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_38.ObjectPtr,AllowParameter|AllowAnyVariable);
    ::FName::FName((FName *)&local_res8.ObjectPtr,L"RenderTarget");
    local_20.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_20.DebugPtr);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffffffffffff;
    local_c = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    local_38 = local_res8;
    ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_30,(FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    ExposedRTVar.Name = (FName)local_38.ObjectPtr.field0_0x0;
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 149189480

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceGrid2DCollection *this,void *param_1,void *param_2,ulong64 *param_3)

{
  return;
}

// RenderVariableToCanvas @ 14918afd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas
          (UNiagaraDataInterfaceGrid2DCollection *this,ulong64 param_1,FName param_2,
          FCanvas *param_3,TIntRect<int> *param_4)

{
  int iVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FGrid2DCollectionRWInstanceData_GameThread *pFVar8;
  FNiagaraTypeDefinition *this_00;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  uint uVar12;
  FName *pFVar13;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined **local_138;
  longlong local_130;
  ulong64 local_128;
  undefined ***local_120;
  TVector2<double>_u_0 local_118;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  TVector2<double>_u_0 local_e8;
  FCanvasTileItem local_d8;
  
  if ((param_3 != (FCanvas *)0x0) &&
     (pFVar8 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
               ::FindRef((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_GameThread_*,0>_>
                          *)&this->SystemInstancesToProxyData_GT,param_1),
     pFVar8 != (FGrid2DCollectionRWInstanceData_GameThread *)0x0)) {
    pFVar2 = (FName *)(pFVar8->Vars).AllocatorInstance.Data;
    for (pFVar13 = pFVar2;
        pFVar13 != (FName *)((longlong)pFVar2 + (longlong)(pFVar8->Vars).ArrayNum * 0xc);
        pFVar13 = (FName *)&pFVar13[1].Number) {
      if (*pFVar13 == param_2) {
        lVar11 = ((longlong)pFVar13 - (longlong)pFVar2) / 6 +
                 ((longlong)pFVar13 - (longlong)pFVar2 >> 0x3f);
        uVar12 = (int)(lVar11 >> 1) - (int)(lVar11 >> 0x3f);
        if (uVar12 == 0xffffffff) {
          return false;
        }
        uVar6 = 0;
        if ((int)uVar12 < (pFVar8->Offsets).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar1 = *(int *)((pFVar8->Offsets).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
        uVar6 = 0;
        if ((int)uVar12 < (pFVar8->Vars).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        this_00 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)
                             ((pFVar8->Vars).AllocatorInstance.Data +
                             (longlong)(int)uVar12 * 0xc + 8));
        iVar7 = FNiagaraTypeDefinition::GetSize(this_00);
        iVar7 = (int)((ulonglong)(longlong)iVar7 >> 2);
        if (iVar7 < 2) {
          iStack_154 = -1;
LAB_14918b18c:
          iStack_150 = -1;
        }
        else {
          iStack_154 = iVar1 + 1;
          if (iVar7 < 3) goto LAB_14918b18c;
          iStack_150 = iVar1 + 2;
          if (3 < iVar7) {
            iStack_14c = iVar1 + 3;
            goto LAB_14918b19c;
          }
        }
        iStack_14c = -1;
LAB_14918b19c:
        local_f8._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_f8._s_0.Y = _UNK_150689518;
        iVar7 = *(int *)((longlong)&param_4->field0_0x0 + 4);
        local_e8._s_0.X = ___xmm_3ff00000000000000000000000000000;
        local_e8._s_0.Y = _UNK_15061cbc8;
        local_118._s_0.X =
             (double)(*(int *)((longlong)&param_4->field0_0x0 + 8) - *(int *)&param_4->field0_0x0);
        local_108._s_0.X = (double)*(int *)&param_4->field0_0x0;
        local_118._s_0.Y = (double)(*(int *)((longlong)&param_4->field0_0x0 + 0xc) - iVar7);
        local_108._s_0.Y = (double)iVar7;
        FCanvasTileItem::FCanvasTileItem
                  (&local_d8,(TVector2<double> *)&local_108._s_0,GWhiteTexture,
                   (TVector2<double> *)&local_118._s_0,(TVector2<double> *)&local_e8._s_0,
                   (TVector2<double> *)&local_f8._s_0,&FLinearColor::White);
        local_d8._padding_._4_4_ = 0;
        puVar9 = ::operator_new(0x50);
        if (puVar9 == (undefined8 *)0x0) {
          local_d8._padding_ = 0;
        }
        else {
          lVar11 = this->_padding_;
          if ((lVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedProxy != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                                 ,0x3a8,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_120 = (undefined ***)0x0;
          local_138 = &UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::`2'::<lambda_2>,0,0>
                       ::_vftable_;
          *puVar9 = &___7FBatchedElementNiagara2DArrayAttribute__6B_;
          *(undefined4 *)(puVar9 + 1) = 0;
          puVar9[2] = CONCAT44(iStack_154,iVar1);
          puVar9[3] = CONCAT44(iStack_14c,iStack_150);
          puVar9[4] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::__l2::<lambda_2>,void,FRHITexture_*_&,FRHISamplerState_*_&>
                      ::Call;
          puVar9[9] = 0;
          local_130 = lVar11;
          local_128 = param_1;
          (*(code *)UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraDataInterfaceGrid2DCollection::RenderVariableToCanvas'::`2'::<lambda_2>,0,0>
                    ::_vftable_)(&local_138);
          pppuVar10 = &local_138;
          if (local_120 != (undefined ***)0x0) {
            pppuVar10 = local_120;
          }
          (*(code *)(*pppuVar10)[2])();
          local_d8._padding_ = (longlong)puVar9;
        }
        FCanvas::DrawItem(param_3,(FCanvasItem *)&local_d8);
        return true;
      }
    }
  }
  return false;
}

// SetShaderParameters @ 14918ca20

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::SetShaderParameters
          (UNiagaraDataInterfaceGrid2DCollection *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  undefined4 uVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceParametersCS *pFVar3;
  FScriptContainerElement *pFVar4;
  FRDGBuilder *pFVar5;
  uchar *puVar6;
  TIntPoint<int>_u_0_s_0 TVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong64 uVar15;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar16;
  FGrid2DCollectionRWInstanceData_RenderThread *pFVar17;
  FNiagaraDataInterfaceParametersCS *pFVar18;
  FShaderParametersMetadata *pFVar19;
  FRDGTextureSRV *pFVar20;
  FRDGTextureUAV *pFVar21;
  FScriptContainerElement *pFVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar23;
  uint uVar24;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  uVar15 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar16 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                    *)(pFVar2 + 1),uVar15);
  if ((pFVar16 == (FGrid2DCollectionRWInstanceData_RenderThread *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ProxyData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                          ,0x66a,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = pFVar16->OtherProxy;
  pFVar17 = pFVar16;
  if (pFVar2 != (FNiagaraDataInterfaceProxy *)0x0) {
    uVar15 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
    pFVar17 = TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
              ::Find((TMapBase<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid2DCollectionRWInstanceData_RenderThread,0>_>
                      *)(pFVar2 + 1),uVar15);
    if ((pFVar17 == (FGrid2DCollectionRWInstanceData_RenderThread *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ProxyData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                            ,0x670,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((param_1->ShaderStorage == (FNiagaraDataInterfaceParametersCS *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderStorage != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1f1,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = param_1->ShaderStorage;
  this_00 = &pFVar16->AttributeIndices;
  if (((pFVar16->AttributeIndices).ArrayNum == 0) && (0 < *(int *)(pFVar3 + 8))) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_00,*(int *)(pFVar3 + 8) + 3U & 0xfffffffc,Default);
    iVar13 = *(int *)(pFVar3 + 8);
    uVar24 = 0;
    if (0 < iVar13) {
      local_res20 = 0;
      local_res18 = 0;
      do {
        uVar23 = ~uVar24 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar24 < iVar13) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = *(FNiagaraDataInterfaceParametersCS **)pFVar3;
        if (((ulonglong)pFVar18 & 1) != 0) {
          pFVar18 = pFVar3 + ((longlong)pFVar18 >> 0x18);
        }
        pFVar4 = (pFVar17->Vars).AllocatorInstance.Data;
        for (pFVar22 = pFVar4; pFVar22 != pFVar4 + (longlong)(pFVar17->Vars).ArrayNum * 8;
            pFVar22 = pFVar22 + 8) {
          if (*(longlong *)pFVar22 == *(longlong *)(pFVar18 + local_res18)) {
            uVar11 = (uint)((longlong)pFVar22 - (longlong)pFVar4 >> 3);
            goto LAB_14918cc3a;
          }
        }
        uVar11 = 0xffffffff;
LAB_14918cc3a:
        if ((*(int *)(pFVar3 + 8) != *(int *)(pFVar3 + 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderStorage.AttributeNames.Num() == ShaderStorage.AttributeChannelCount.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                                ,0x67c,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((pFVar17->Offsets).ArrayNum != (pFVar17->VarComponents).ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProxyData->Offsets.Num() == ProxyData->VarComponents.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                                ,0x67d,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((pFVar17->Offsets).ArrayNum != (pFVar17->Vars).ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProxyData->Offsets.Num() == ProxyData->Vars.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                                ,0x67e,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((int)uVar11 < 0) || ((pFVar17->Offsets).ArrayNum <= (int)uVar11)) {
LAB_14918ce72:
          uVar11 = 0;
          if ((int)uVar24 < (pFVar16->AttributeIndices).ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined4 *)((this_00->AllocatorInstance).Data + local_res20) = 0xffffffff;
        }
        else {
          uVar12 = 0;
          if ((int)uVar24 < *(int *)(pFVar3 + 0x18)) {
            uVar12 = uVar23;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar18 = *(FNiagaraDataInterfaceParametersCS **)(pFVar3 + 0x10);
          if (((ulonglong)pFVar18 & 1) != 0) {
            pFVar18 = pFVar3 + ((longlong)pFVar18 >> 0x18) + 0x10;
          }
          uVar12 = 0;
          if ((int)uVar11 < (pFVar17->VarComponents).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)(pFVar18 + local_res20) !=
              *(int *)((pFVar17->VarComponents).AllocatorInstance.Data + (longlong)(int)uVar11 * 4))
          goto LAB_14918ce72;
          uVar12 = 0;
          if ((int)uVar11 < (pFVar17->Offsets).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar1 = *(undefined4 *)
                   ((pFVar17->Offsets).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
          uVar11 = 0;
          if ((int)uVar24 < (pFVar16->AttributeIndices).ArrayNum) {
            uVar11 = uVar23;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(undefined4 *)((this_00->AllocatorInstance).Data + local_res20) = uVar1;
        }
        local_res20 = local_res20 + 4;
        iVar13 = *(int *)(pFVar3 + 8);
        local_res18 = local_res18 + 8;
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < iVar13);
    }
  }
  pFVar5 = param_1->GraphBuilder;
  uVar24 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar19 = TShaderParameterStructTypeInfo<FNDIGrid2DShaderParameters>::GetStructMetadata();
  fVar9 = __real_3f800000;
  puVar6 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar19->Size + uVar24;
  *(int *)(puVar6 + uVar24) = pFVar17->NumAttributes;
  TVar7 = (pFVar17->NumCells).field0_0x0._s_0;
  local_res10 = CONCAT44(fVar9 / (float)TVar7.Y,fVar9 / (float)TVar7.X);
  *(undefined8 *)(puVar6 + (ulonglong)uVar24 + 8) = local_res10;
  *(TIntPoint<int>_u_0 *)(puVar6 + (ulonglong)uVar24 + 0x10) = (pFVar17->NumCells).field0_0x0;
  *(ulonglong *)(puVar6 + (ulonglong)uVar24 + 0x18) =
       CONCAT44((float)(pFVar17->CellSize).field0_0x0._s_0.Y,
                (float)(pFVar17->CellSize).field0_0x0._s_0.X);
  *(ulonglong *)(puVar6 + (ulonglong)uVar24 + 0x20) =
       CONCAT44((float)(pFVar17->WorldBBoxSize).field0_0x0._s_0.Y,
                (float)(pFVar17->WorldBBoxSize).field0_0x0._s_0.X);
  bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar6 + (ulonglong)uVar24 + 0x28);
  if (bVar10) {
    if (pFVar17->CurrentData == (FNiagaraPooledRWTexture *)0x0) {
      pFVar20 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                          (param_1->ComputeDispatchInterface,pFVar5,Texture2DArray);
    }
    else {
      pFVar20 = FNiagaraPooledRWTexture::GetOrCreateSRV(pFVar17->CurrentData,pFVar5);
    }
    *(FRDGTextureSRV **)(puVar6 + (ulonglong)uVar24 + 0x28) = pFVar20;
  }
  *(FRHISamplerState **)(puVar6 + (ulonglong)uVar24 + 0x30) =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar6 + (ulonglong)uVar24 + 0x38);
  if (bVar10) {
    bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsOutputStage(param_1);
    if ((bVar10) && (pFVar17->DestinationData != (FNiagaraPooledRWTexture *)0x0)) {
      pFVar21 = FNiagaraPooledRWTexture::GetOrCreateUAV(pFVar17->DestinationData,pFVar5);
    }
    else {
      pFVar21 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,pFVar5,PF_R32_FLOAT,Texture2DArray);
    }
    *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar24 + 0x38) = pFVar21;
  }
  if (0 < *(int *)(pFVar3 + 8)) {
    iVar13 = *(int *)(pFVar3 + 8) + 3;
    iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2;
    iVar13 = 1;
    if (1 < iVar14) {
      iVar13 = iVar14;
    }
    uVar24 = param_1->ParametersOffset + 0xf & 0xfffffff0;
    puVar6 = param_1->BaseParameters;
    param_1->ParametersOffset = iVar13 * 0x10 + uVar24;
    if ((iVar13 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((ulonglong)(uint)((pFVar16->AttributeIndices).ArrayNum << 2) != (longlong)iVar13 * 0x10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OriginalProxyData->AttributeIndices.Num() * OriginalProxyData->AttributeIndices.GetTypeSize() == AttributeIndices.Num() * AttributeIndices.GetTypeSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid2DCollection.cpp"
                            ,0x6b0,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    memcpy(puVar6 + uVar24,(this_00->AllocatorInstance).Data,(longlong)iVar13 * 0x10);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection @ 14918ee80

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::StaticRegisterNativesUNiagaraDataInterfaceGrid2DCollection
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceGrid2DCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VMGetAttributeIndex @ 149191190

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::VMGetAttributeIndex
          (UNiagaraDataInterfaceGrid2DCollection *this,FVectorVMExternalFunctionContext *param_1,
          FName *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = -NAN;
  iVar3 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_18.Ptr != (FGrid2DCollectionRWInstanceData_GameThread *)0x0) {
    fVar1 = (float)FGrid2DCollectionRWInstanceData_GameThread::FindAttributeIndexByName
                             (local_18.Ptr,param_2,param_3);
  }
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar3;
    do {
      iVar4 = iVar4 + 1;
      *pfVar2 = fVar1;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMGetCellSize @ 1491912f0

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::VMGetCellSize
          (UNiagaraDataInterfaceGrid2DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  int iVar4;
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_38;
  float *local_28;
  int local_20 [4];
  int local_10 [2];
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_38,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  local_28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  local_28 = local_28 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  dVar1 = ((local_38.Ptr)->CellSize).field0_0x0._s_0.X;
  dVar2 = ((local_38.Ptr)->CellSize).field0_0x0._s_0.Y;
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *local_28 = (float)dVar1;
      *pfVar3 = (float)dVar2;
      local_28 = local_28 + local_20[0];
      pfVar3 = pfVar3 + local_10[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMGetNumCells @ 1491914c0

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::VMGetNumCells
          (UNiagaraDataInterfaceGrid2DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  FGrid2DCollectionRWInstanceData_GameThread *pFVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar5 = 0;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar4 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pFVar1 = (local_18.Ptr)->OtherInstanceData;
  fVar6 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar7 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  if (pFVar1 != (FGrid2DCollectionRWInstanceData_GameThread *)0x0) {
    fVar6 = (float)(pFVar1->NumCells).field0_0x0._s_0.X;
    fVar7 = (float)(pFVar1->NumCells).field0_0x0._s_0.Y;
  }
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar4;
    do {
      iVar5 = iVar5 + 1;
      *pfVar2 = fVar6;
      *pfVar3 = fVar7;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// VMGetWorldBBoxSize @ 149191770

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::VMGetWorldBBoxSize
          (UNiagaraDataInterfaceGrid2DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  int iVar4;
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_38;
  float *local_28;
  int local_20 [4];
  int local_10 [2];
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_38,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  local_28 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  local_10[0] = 0;
  local_28 = local_28 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  dVar1 = ((local_38.Ptr)->WorldBBoxSize).field0_0x0._s_0.X;
  dVar2 = ((local_38.Ptr)->WorldBBoxSize).field0_0x0._s_0.Y;
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *local_28 = (float)dVar1;
      *pfVar3 = (float)dVar2;
      local_28 = local_28 + local_20[0];
      pfVar3 = pfVar3 + local_10[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMSetNumCells @ 149191940

void __thiscall
UNiagaraDataInterfaceGrid2DCollection::VMSetNumCells
          (UNiagaraDataInterfaceGrid2DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int local_60 [2];
  int local_58 [2];
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread> local_50;
  
  VectorVM::FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid2DCollectionRWInstanceData_GameThread>(&local_50,param_1);
  local_58[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  lVar12 = (longlong)local_58[0];
  local_58[0] = 0;
  pfVar7 = pfVar7 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  lVar14 = (longlong)local_58[0];
  local_58[0] = 0;
  pfVar8 = pfVar8 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  lVar13 = (longlong)local_58[0];
  local_60[0] = 0;
  pfVar9 = pfVar9 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  iVar15 = 0;
  iVar6 = param_1->NumInstances;
  pfVar10 = pfVar10 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar6) {
    do {
      fVar1 = *pfVar7;
      pfVar7 = pfVar7 + lVar12;
      fVar11 = *pfVar8;
      if ((((local_50.Ptr == (FGrid2DCollectionRWInstanceData_GameThread *)0x0) || (iVar6 != 1)) ||
          (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (((int)this->_padding_ < 0 || (*pfVar9 == 0.0)))) {
        *pfVar10 = 0.0;
      }
      else {
        *pfVar10 = -NAN;
        TVar2 = ((local_50.Ptr)->NumCells).field0_0x0._s_0;
        ((local_50.Ptr)->NumCells).field0_0x0._s_0.X = (int)fVar1;
        ((local_50.Ptr)->NumCells).field0_0x0._s_0.Y = (int)fVar11;
        if (fVar3 < (float)((uint)(GNiagaraGrid2DResolutionMultiplier - fVar4) & uVar5)) {
          iVar6 = (int)((float)((local_50.Ptr)->NumCells).field0_0x0._s_0.X *
                       GNiagaraGrid2DResolutionMultiplier);
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          ((local_50.Ptr)->NumCells).field0_0x0._s_0.X = iVar6;
          fVar11 = (float)(int)((float)((local_50.Ptr)->NumCells).field0_0x0._s_0.Y *
                               GNiagaraGrid2DResolutionMultiplier);
          if ((int)fVar11 < 1) {
            fVar11 = 1.4013e-45;
          }
          ((local_50.Ptr)->NumCells).field0_0x0._s_0.Y = (int)fVar11;
        }
        if ((TVar2.X == ((local_50.Ptr)->NumCells).field0_0x0._s_0.X) && ((float)TVar2.Y == fVar11))
        {
          (local_50.Ptr)->NeedsRealloc = false;
        }
        else {
          (local_50.Ptr)->NeedsRealloc = true;
        }
      }
      pfVar10 = pfVar10 + local_60[0];
      iVar6 = param_1->NumInstances;
      iVar15 = iVar15 + 1;
      pfVar8 = pfVar8 + lVar14;
      pfVar9 = pfVar9 + lVar13;
    } while (iVar15 < iVar6);
  }
  return;
}

// execFillRawTexture2D @ 149192900

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::execFillRawTexture2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res8;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x468))(param_1,local_res20,local_res18,puVar4,puVar3)
  ;
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execFillTexture2D @ 149192c90

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::execFillTexture2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x460))(param_1,local_res18,local_res10,local_res8[0])
  ;
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetRawTextureSize @ 149192ed0

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::execGetRawTextureSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar2 = local_res8;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x470))(param_1,local_res20,puVar2,puVar3);
  return;
}

// execGetTextureSize @ 149193190

void __cdecl
UNiagaraDataInterfaceGrid2DCollection::execGetTextureSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  uchar local_res10 [8];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar2 = local_res8;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x478))(param_1,local_res20,puVar2,puVar3);
  return;
}

