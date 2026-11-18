// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 48

// StaticClass @ 14915c690

UClass * __cdecl UNiagaraDataInterfaceGrid3DCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid3DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollection>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton;
}

// UNiagaraDataInterfaceGrid3DCollection @ 149169dd0

UNiagaraDataInterfaceGrid3DCollection * __thiscall
UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
          (UNiagaraDataInterfaceGrid3DCollection *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollection__6B_;
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
  return this;
}

// UNiagaraDataInterfaceGrid3DCollection @ 149169e50

UNiagaraDataInterfaceGrid3DCollection * __thiscall
UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection
          (UNiagaraDataInterfaceGrid3DCollection *this,FObjectInitializer *param_1)

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
  
  UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D
            ((UNiagaraDataInterfaceGrid3D *)this,param_1);
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollection__6B_;
  this->NumAttributes = 0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  this->bOverrideFormat = '\0';
  this->OverrideBufferFormat = Float;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyGrid3DCollectionProxy__6B_;
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

// ~UNiagaraDataInterfaceGrid3DCollection @ 14916b430

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::~UNiagaraDataInterfaceGrid3DCollection
          (UNiagaraDataInterfaceGrid3DCollection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceGrid3DCollection__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UNiagaraDataInterfaceGrid3D::~UNiagaraDataInterfaceGrid3D((UNiagaraDataInterfaceGrid3D *)this);
  return;
}

// operator() @ 14916d120

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FRHITexture *this_00;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar2;
  
  pFVar2 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)((longlong)this + 8) + 0x10),*(ulong64 *)((longlong)this + 0x10))
  ;
  if ((*(longlong *)this == 0) ||
     (pFVar1 = *(FRHITexture **)(*(longlong *)this + 0x20), pFVar1 == (FRHITexture *)0x0)) {
    pFVar1 = (pFVar2->RenderTargetToCopyTo).Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (pFVar2->RenderTargetToCopyTo).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
      return;
    }
  }
  else {
    this_00 = (pFVar2->RenderTargetToCopyTo).Reference;
    if (this_00 != pFVar1) {
      (pFVar2->RenderTargetToCopyTo).Reference = pFVar1;
      FRHIResource::AddRef((FRHIResource *)pFVar1);
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// operator() @ 14916d3e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar8;
  ForElementType<TUniquePtr<FNiagaraPooledRWTexture,TDefaultDelete<FNiagaraPooledRWTexture>_>_>
  FVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)this;
  uVar3 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar10 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar10 = lVar2 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar2 + 0x58) - 1) &
                              (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0x120 + *(longlong *)(lVar2 + 0x10)) == uVar3)
        goto LAB_14916d483;
        iVar7 = *(int *)((longlong)iVar7 * 0x120 + 0x118 + *(longlong *)(lVar2 + 0x10));
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                     ,0xee7,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14916d483:
  pFVar8 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  *(undefined8 *)&(pFVar8->NumCells).field0_0x0 = *(undefined8 *)((longlong)this + 0x14);
  (pFVar8->NumCells).field0_0x0._s_0.Z = *(int *)((longlong)this + 0x1c);
  *(undefined8 *)&(pFVar8->NumTiles).field0_0x0 = *(undefined8 *)((longlong)this + 0x20);
  (pFVar8->NumTiles).field0_0x0._s_0.Z = *(int *)((longlong)this + 0x28);
  pFVar8->TotalNumAttributes = *(int *)((longlong)this + 0x2c);
  pFVar8->TotalNumNamedAttributes = *(int *)((longlong)this + 0x30);
  dVar5 = *(double *)((longlong)this + 0x40);
  (pFVar8->CellSize).field0_0x0._s_0.X = *(double *)((longlong)this + 0x38);
  (pFVar8->CellSize).field0_0x0._s_0.Y = dVar5;
  (pFVar8->CellSize).field0_0x0._s_0.Z = *(double *)((longlong)this + 0x48);
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
  (pFVar8->PerAttributeData).NumBytes = 0;
  this_00 = (pFVar8->PerAttributeData).Buffer.Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    (pFVar8->PerAttributeData).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (pFVar8->PerAttributeData).SRV.Reference;
  if (this_01 != (FRHIShaderResourceView *)0x0) {
    (pFVar8->PerAttributeData).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
  }
  return;
}

// operator() @ 14916deb0

void __thiscall
`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18 [2];
  
  lVar1 = *(longlong *)this;
  uVar2 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar6 = *(longlong *)(lVar1 + 0x50);
    if (*(longlong *)(lVar1 + 0x50) == 0) {
      lVar6 = lVar1 + 0x48;
    }
    iVar5 = *(int *)(lVar6 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                             (ulonglong)(*(int *)(lVar1 + 0x58) - 1)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar5 * 0x120 + *(longlong *)(lVar1 + 0x10)) == uVar2) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0xcad,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x120 + 0x118 + *(longlong *)(lVar1 + 0x10));
      } while (iVar5 != -1);
    }
  }
  local_res18[0] = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x10),&local_res8,(bool *)local_res18);
  return;
}

// operator() @ 14916e0d0

void __thiscall
`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>::operator()
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
  
  lVar12 = *(longlong *)this;
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
        if (*(ulonglong *)((longlong)iVar8 * 0x120 + *(longlong *)(lVar12 + 0x10)) == uVar4) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!RT_Proxy->SystemInstancesToProxyData_RT.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0xd26,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x120 + 0x118 + *(longlong *)(lVar12 + 0x10));
      } while (iVar8 != -1);
    }
  }
  lVar12 = *(longlong *)this;
  local_50[0] = (ulonglong *)((longlong)this + 0x10);
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
              *)(lVar12 + 0x10),&local_res8,(bool *)local_50);
  lVar12 = (longlong)(int)local_res8.Key * 0x120 + *(longlong *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(*(longlong *)this + 8);
  *(undefined1 *)(lVar12 + 0x10) = *(undefined1 *)((longlong)this + 0x18);
  *(undefined8 *)(lVar12 + 0x14) = *(undefined8 *)((longlong)this + 0x1c);
  *(undefined4 *)(lVar12 + 0x1c) = *(undefined4 *)((longlong)this + 0x24);
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)((longlong)this + 0x28);
  *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)((longlong)this + 0x30);
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)((longlong)this + 0x34);
  *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)((longlong)this + 0x38);
  uVar6 = *(undefined8 *)((longlong)this + 0x48);
  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)((longlong)this + 0x40);
  *(undefined8 *)(lVar12 + 0x40) = uVar6;
  *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)((longlong)this + 0x50);
  uVar6 = *(undefined8 *)((longlong)this + 0x60);
  *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)((longlong)this + 0x58);
  *(undefined8 *)(lVar12 + 0x58) = uVar6;
  *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)((longlong)this + 0x68);
  if ((undefined1 *)((longlong)this + 0x70) != (undefined1 *)(lVar12 + 0x68)) {
    if (*(char *)((longlong)this + 0x71) == '\0') {
      if (*(char *)(lVar12 + 0x69) != '\0') {
        *(undefined1 *)(lVar12 + 0x69) = 0;
      }
    }
    else {
      *(undefined1 *)(lVar12 + 0x68) = *(undefined1 *)((longlong)this + 0x70);
      *(undefined1 *)(lVar12 + 0x69) = 1;
    }
  }
  *(undefined1 *)(lVar12 + 0x6a) = *(undefined1 *)((longlong)this + 0x72);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(lVar12 + 0xa0),
             (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)this + 200));
  uVar15 = *(uint *)((longlong)this + 0xc0);
  pFVar2 = (ForAnyElementType *)(lVar12 + 0x80);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (*(int *)(lVar12 + 0x8c) < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,pFVar2,*(int *)(lVar12 + 0x88),(int *)(lVar12 + 0x8c));
  }
  iVar8 = *(int *)((longlong)this + 0xc0);
  uVar15 = 0;
  if (0 < iVar8) {
    pFVar3 = (ForAnyElementType *)(lVar12 + 0x90);
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
      iVar8 = *(int *)(lVar12 + 0x88);
      lVar14 = *(longlong *)((longlong)this + 0xb8);
      if (iVar8 == *(int *)(lVar12 + 0x8c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,pFVar2,(int *)(lVar12 + 0x8c));
        *(int *)(lVar12 + 0x88) = iVar8;
      }
      *(int *)(lVar12 + 0x88) = iVar8 + 1;
      *(undefined8 *)(pFVar2->Data + (longlong)iVar8 * 8) = *(undefined8 *)(local_res18 + lVar14);
      uVar13 = 0;
      if ((int)uVar15 < *(int *)((longlong)this + 0xc0)) {
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
                           (local_res18 + 8 + *(longlong *)((longlong)this + 0xb8)));
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
      piVar1 = (int *)(lVar12 + 0x9c);
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
      iVar8 = *(int *)(lVar12 + 0x98);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      local_res18 = local_res18 + 0xc;
      uVar15 = uVar15 + 1;
      *(int *)(lVar12 + 0x98) = iVar8 + 1;
      *(undefined4 *)(pFVar3->Data + (longlong)iVar8 * 4) = local_58[0];
      iVar8 = *(int *)((longlong)this + 0xc0);
    } while ((int)uVar15 < iVar8);
  }
  if ((*(longlong *)((longlong)this + 8) == 0) ||
     (this_00 = *(FRHIResource **)(*(longlong *)((longlong)this + 8) + 0x20),
     this_00 == (FRHIResource *)0x0)) {
    this_02 = *(FRHIResource **)(lVar12 + 0xf8);
    if (this_02 == (FRHIResource *)0x0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0xf8) = 0;
  }
  else {
    this_02 = *(FRHIResource **)(lVar12 + 0xf8);
    if (this_02 == this_00) {
      return;
    }
    *(FRHIResource **)(lVar12 + 0xf8) = this_00;
    FRHIResource::AddRef(this_00);
    if (this_02 == (FRHIResource *)0x0) {
      return;
    }
  }
  FRHIResource::Release(this_02);
  return;
}

// BuildShaderParameters @ 149170da0

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::BuildShaderParameters
          (UNiagaraDataInterfaceGrid3DCollection *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar8 = TShaderParameterStructTypeInfo<FNDIGrid3DShaderParameters>::GetStructMetadata();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xb0;
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

// CanCreateVarFromFuncName @ 1491716d0

bool __cdecl UNiagaraDataInterfaceGrid3DCollection::CanCreateVarFromFuncName(FName *param_1)

{
  FName FVar1;
  
  FVar1 = *param_1;
  if ((((((FVar1 != SetVector4ValueFunctionName) && (FVar1 != GetPreviousVector4ValueFunctionName))
        && (FVar1 != SamplePreviousGridVector4FunctionName)) &&
       (((FVar1 != CubicSamplePreviousGridVector4FunctionName &&
         (FVar1 != SetVector4ValueAtIndexFunctionName)) &&
        ((FVar1 != GetPreviousVector4ValueAtIndexFunctionName &&
         ((FVar1 != SamplePreviousGridVector4AtIndexFunctionName &&
          (FVar1 != CubicSamplePreviousGridVector4AtIndexFunctionName)))))))) &&
      (FVar1 != SetVector3ValueFunctionName)) &&
     (((((((FVar1 != SetVectorValueFunctionName && (FVar1 != GetPreviousVectorValueFunctionName)) &&
          (FVar1 != SamplePreviousGridVectorFunctionName)) &&
         ((FVar1 != CubicSamplePreviousGridVectorFunctionName &&
          (FVar1 != SetVector3ValueAtIndexFunctionName)))) &&
        (FVar1 != GetPreviousVector3ValueAtIndexFunctionName)) &&
       ((((FVar1 != SamplePreviousGridVector3AtIndexFunctionName &&
          (FVar1 != CubicSamplePreviousGridVector3AtIndexFunctionName)) &&
         (((FVar1 != SetVector2ValueFunctionName &&
           (((FVar1 != SetVector2DValueFunctionName &&
             (FVar1 != GetPreviousVector2DValueFunctionName)) &&
            (FVar1 != SamplePreviousGridVector2DFunctionName)))) &&
          (((FVar1 != CubicSamplePreviousGridVector2DFunctionName &&
            (FVar1 != SetVector2ValueAtIndexFunctionName)) &&
           (FVar1 != GetPreviousVector2ValueAtIndexFunctionName)))))) &&
        ((FVar1 != SamplePreviousGridVector2AtIndexFunctionName &&
         (FVar1 != CubicSamplePreviousGridVector2AtIndexFunctionName)))))) &&
      (((FVar1 != SetFloatValueFunctionName &&
        (((FVar1 != GetPreviousFloatValueFunctionName &&
          (FVar1 != SamplePreviousGridFloatFunctionName)) &&
         (FVar1 != CubicSamplePreviousGridFloatFunctionName)))) &&
       (((FVar1 != SetFloatValueAtIndexFunctionName &&
         (FVar1 != GetPreviousFloatValueAtIndexFunctionName)) &&
        ((FVar1 != SamplePreviousGridFloatAtIndexFunctionName &&
         (FVar1 != CubicSamplePreviousGridFloatAtIndexFunctionName)))))))))) {
    return false;
  }
  return true;
}

// CanExposeVariables @ 1491718c0

bool __thiscall
UNiagaraDataInterfaceGrid3DCollection::CanExposeVariables
          (UNiagaraDataInterfaceGrid3DCollection *this)

{
  return true;
}

// CollectAttributesForScript @ 149172c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::CollectAttributesForScript
          (UNiagaraScript *param_1,UNiagaraDataInterface *param_2,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_3,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_4,int *param_5,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_6)

{
  longlong *plVar1;
  FName *pFVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  FNiagaraScriptExecutionParameterStore *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  FName FVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FName *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  FName *pFVar22;
  FName FVar23;
  FName *pFVar24;
  FScriptContainerElement *pFVar25;
  FName FVar26;
  FName *pFVar27;
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  FName local_e0;
  FNiagaraTypeDefinitionHandle local_d8 [2];
  uint local_d0;
  FName *local_c8;
  FText local_c0;
  undefined1 local_b0 [8];
  FName *local_a8;
  FScriptContainerElement *local_a0;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FNiagaraTypeDefinition local_48;
  
  pFVar9 = UNiagaraScript::GetExecutionReadyParameterStore(param_1,GPUComputeSim);
  if (pFVar9 != (FNiagaraScriptExecutionParameterStore *)0x0) {
    plVar1 = (longlong *)pFVar9->_padding_;
    for (plVar21 = plVar1; plVar21 != plVar1 + (int)pFVar9->_padding_; plVar21 = plVar21 + 1) {
      if ((UNiagaraDataInterface *)*plVar21 == param_2) {
        uVar20 = (uint)((longlong)plVar21 - (longlong)plVar1 >> 3);
        if (uVar20 == 0xffffffff) {
          return;
        }
        iVar7 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
                ArrayNum;
        pFVar25 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
                  AllocatorInstance.Data;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar20 < iVar7) {
          uVar6 = ~uVar20 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a0 = pFVar25 + (longlong)(int)uVar20 * 0x38 + 0x28;
        local_d0 = *(uint *)(local_a0 + 8);
        uVar18 = (ulonglong)(int)local_d0;
        pFVar22 = *(FName **)local_a0;
        pFVar27 = pFVar22 + 4;
        local_a8 = pFVar22 + uVar18 * 10;
        FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
        do {
          pFVar24 = local_a8;
          local_c8 = pFVar22;
          if (*(int *)(local_a0 + 8) != (int)uVar18) {
            local_e8 = 0;
            `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_e8);
            FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
          }
          if (pFVar22 == pFVar24) {
            return;
          }
          uVar20 = (pFVar27->ComparisonIndex).Value;
          FVar23 = pFVar27[-1];
          FVar26 = (FName)((longlong)(int)uVar20 * 0x10 + (longlong)FVar23);
          while( true ) {
            if ((pFVar27->ComparisonIndex).Value != uVar20) {
              local_e7[0] = 0;
              `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_e7);
              FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            }
            pFVar22 = local_c8;
            if (FVar23 == FVar26) {
              pFVar24 = (FName *)0x0;
              goto LAB_149172e08;
            }
            if (*(FName *)FVar23 == FVar11) break;
            FVar23 = (FName)((longlong)FVar23 + 0x10);
          }
          pFVar24 = (FName *)((longlong)FVar23 + 8);
LAB_149172e08:
          if (pFVar24 != (FName *)0x0) {
            pFVar10 = GetValueTypeFromFuncName(&local_48,local_c8);
            local_e0 = *pFVar24;
            local_d8[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(local_d8,pFVar10);
            FVar23 = *pFVar22;
            FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            if ((((((FVar23 == SetVector4ValueFunctionName) ||
                   (FVar23 == GetPreviousVector4ValueFunctionName)) ||
                  (FVar23 == SamplePreviousGridVector4FunctionName)) ||
                 ((FVar23 == CubicSamplePreviousGridVector4FunctionName ||
                  (FVar23 == SetVector4ValueAtIndexFunctionName)))) ||
                (((FVar23 == GetPreviousVector4ValueAtIndexFunctionName ||
                  ((FVar23 == SamplePreviousGridVector4AtIndexFunctionName ||
                   (FVar23 == CubicSamplePreviousGridVector4AtIndexFunctionName)))) ||
                 ((FVar23 == SetVector3ValueFunctionName ||
                  (((FVar23 == SetVectorValueFunctionName ||
                    (FVar23 == GetPreviousVectorValueFunctionName)) ||
                   (FVar23 == SamplePreviousGridVectorFunctionName)))))))) ||
               ((((((((FVar23 == CubicSamplePreviousGridVectorFunctionName ||
                      (FVar23 == SetVector3ValueAtIndexFunctionName)) ||
                     ((FVar23 == GetPreviousVector3ValueAtIndexFunctionName ||
                      ((FVar23 == SamplePreviousGridVector3AtIndexFunctionName ||
                       (FVar23 == CubicSamplePreviousGridVector3AtIndexFunctionName)))))) ||
                    (FVar23 == SetVector2ValueFunctionName)) ||
                   ((((FVar23 == SetVector2DValueFunctionName ||
                      (FVar23 == GetPreviousVector2DValueFunctionName)) ||
                     (FVar23 == SamplePreviousGridVector2DFunctionName)) ||
                    ((FVar23 == CubicSamplePreviousGridVector2DFunctionName ||
                     (FVar23 == SetVector2ValueAtIndexFunctionName)))))) ||
                  ((FVar23 == GetPreviousVector2ValueAtIndexFunctionName ||
                   ((FVar23 == SamplePreviousGridVector2AtIndexFunctionName ||
                    (FVar23 == CubicSamplePreviousGridVector2AtIndexFunctionName)))))) ||
                 (FVar23 == SetFloatValueFunctionName)) ||
                ((((((FVar23 == GetPreviousFloatValueFunctionName ||
                     (FVar23 == SamplePreviousGridFloatFunctionName)) ||
                    (FVar23 == CubicSamplePreviousGridFloatFunctionName)) ||
                   ((FVar23 == SetFloatValueAtIndexFunctionName ||
                    (FVar23 == GetPreviousFloatValueAtIndexFunctionName)))) ||
                  (FVar23 == SamplePreviousGridFloatAtIndexFunctionName)) ||
                 (FVar23 == CubicSamplePreviousGridFloatAtIndexFunctionName)))))) {
              pFVar2 = (FName *)(param_3->AllocatorInstance).Data;
              pFVar22 = (FName *)((longlong)pFVar2 + (longlong)param_3->ArrayNum * 0xc);
              pFVar17 = pFVar2;
              if (pFVar2 != pFVar22) {
                do {
                  if ((*pFVar17 == local_e0) &&
                     (pFVar17[1].ComparisonIndex.Value == local_d8[0].RegisteredTypeIndex))
                  goto LAB_149173189;
                  pFVar4 = pFVar17 + 1;
                  pFVar17 = (FName *)&pFVar4->Number;
                } while ((FName *)&pFVar4->Number != pFVar22);
                pFVar17 = pFVar2;
                do {
                  if (*pFVar17 == *pFVar24) {
                    lVar19 = ((longlong)pFVar17 - (longlong)pFVar2) / 6 +
                             ((longlong)pFVar17 - (longlong)pFVar2 >> 0x3f);
                    uVar20 = (int)(lVar19 >> 1) - (int)(lVar19 >> 0x3f);
                    if (uVar20 != 0xffffffff) {
                      if (param_6 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) {
                        pFVar12 = FText::FromName(&local_88,&local_e0);
                        uVar6 = 0;
                        if ((int)uVar20 < param_3->ArrayNum) {
                          uVar6 = ~uVar20 >> 0x1f;
                        }
                        if ((uVar6 == 0) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar5)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                            ((FNiagaraTypeDefinitionHandle *)
                                             ((param_3->AllocatorInstance).Data +
                                             ((longlong)(int)uVar20 * 3 + 2) * 4));
                        pFVar13 = FNiagaraTypeDefinition::GetNameText(pFVar10,&local_78);
                        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(local_d8);
                        pFVar14 = FNiagaraTypeDefinition::GetNameText(pFVar10,&local_68);
                        pFVar15 = FText::AsLocalizable_Advanced_LocText
                                            (&local_98,L"NiagaraDataInterfaceGrid3DCollection",
                                             L"BadType",
                                             L"Same name, different types! {0} vs {1}, Attribute {2}"
                                            );
                        pFVar16 = FTextFormat::FTextFormat(&local_58,pFVar15,Default);
                        FText::Format<FText,FText,FText>(&local_c0,pFVar16,pFVar14,pFVar13,pFVar12);
                        if (local_98.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
                        }
                        pFVar12 = (FText *)(param_6->AllocatorInstance).Data;
                        if (((pFVar12 <= &local_c0) && (&local_c0 < pFVar12 + param_6->ArrayMax)) &&
                           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar5)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar7 = param_6->ArrayNum;
                        if (iVar7 == param_6->ArrayMax) {
                          iVar7 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x810,&param_6->AllocatorInstance,&param_6->ArrayMax);
                        }
                        param_6->ArrayNum = iVar7 + 1;
                        pFVar25 = (param_6->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
                        *(undefined8 *)pFVar25 = 0;
                        *(ITextData **)pFVar25 = local_c0.TextData.Reference;
                        if (local_c0.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_c0.TextData.Reference + 8))
                                    (local_c0.TextData.Reference,local_b0);
                        }
                        *(uint *)(pFVar25 + 8) = local_c0.Flags;
                        FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
                        if (local_c0.TextData.Reference != (ITextData *)0x0) {
                          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
                          FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
                        }
                      }
                      goto LAB_149173189;
                    }
                    break;
                  }
                  pFVar17 = (FName *)&pFVar17[1].Number;
                } while (pFVar17 != pFVar22);
              }
              if (((pFVar2 <= &local_e0) &&
                  (&local_e0 < (FName *)((longlong)pFVar2 + (longlong)param_3->ArrayMax * 0xc))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = param_3->ArrayNum;
              if (iVar7 == param_3->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar7 + 1;
              pFVar25 = (param_3->AllocatorInstance).Data;
              *(FName *)(pFVar25 + (longlong)iVar7 * 0xc) = local_e0;
              *(int *)(pFVar25 + (longlong)iVar7 * 0xc + 8) = local_d8[0].RegisteredTypeIndex;
              pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(local_d8);
              iVar7 = FNiagaraTypeDefinition::GetSize(pFVar10);
              pFVar25 = (param_4->AllocatorInstance).Data;
              local_e4 = *param_5;
              if (((pFVar25 <= (FScriptContainerElement *)&local_e4) &&
                  ((FScriptContainerElement *)&local_e4 < pFVar25 + (longlong)param_4->ArrayMax * 4)
                  ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar8 = param_4->ArrayNum;
              if (iVar8 == param_4->ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
              }
              param_4->ArrayNum = iVar8 + 1;
              *(int *)((param_4->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e4;
              *param_5 = *param_5 + (int)((ulonglong)(longlong)iVar7 >> 2);
              FVar11 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
            }
          }
LAB_149173189:
          pFVar22 = local_c8 + 10;
          pFVar27 = pFVar27 + 10;
          uVar18 = (ulonglong)local_d0;
        } while( true );
      }
    }
  }
  return;
}

// CopyToInternal @ 149173c30

bool __thiscall
UNiagaraDataInterfaceGrid3DCollection::CopyToInternal
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraDataInterface *param_1)

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
  
  bVar3 = UNiagaraDataInterfaceGrid3D::CopyToInternal((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      *(int *)&param_1[2]._padding_ = this->NumAttributes;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[2]._padding_,
                 &(this->RenderTargetUserParameter).Parameter);
      *(ENiagaraGpuBufferFormat *)&param_1[2].Proxy.Ptr = this->OverrideBufferFormat;
      bVar1 = *(byte *)((longlong)&param_1[2].Proxy.Ptr + 1);
      *(byte *)((longlong)&param_1[2].Proxy.Ptr + 1) = (bVar1 ^ this->bOverrideFormat) & 1 ^ bVar1;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// CreateShaderStorage @ 149175ff0

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceGrid3DCollection::CreateShaderStorage
          (UNiagaraDataInterfaceGrid3DCollection *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
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
        if (FVar14 == FVar15) goto LAB_149176521;
        if (*(FName *)FVar14 == FVar9) break;
        FVar14 = (FName)((longlong)FVar14 + 0x10);
      }
      if ((longlong *)((longlong)FVar14 + 8) == (longlong *)0x0) {
LAB_149176521:
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
        if ((((((FVar9 == SetVector4ValueFunctionName) ||
               (FVar9 == GetPreviousVector4ValueFunctionName)) ||
              (FVar9 == SamplePreviousGridVector4FunctionName)) ||
             ((FVar9 == CubicSamplePreviousGridVector4FunctionName ||
              (FVar9 == SetVector4ValueAtIndexFunctionName)))) ||
            ((FVar9 == GetPreviousVector4ValueAtIndexFunctionName ||
             ((FVar9 == SamplePreviousGridVector4AtIndexFunctionName ||
              (FVar9 == CubicSamplePreviousGridVector4AtIndexFunctionName)))))) ||
           (FVar9 == GetVector4AttributeIndexFunctionName)) {
          uVar13 = 4;
        }
        else if (((((FVar9 == SetVector3ValueFunctionName) || (FVar9 == SetVectorValueFunctionName))
                  || (FVar9 == GetPreviousVectorValueFunctionName)) ||
                 (((FVar9 == SamplePreviousGridVectorFunctionName ||
                   (FVar9 == CubicSamplePreviousGridVectorFunctionName)) ||
                  ((FVar9 == SetVector3ValueAtIndexFunctionName ||
                   ((FVar9 == GetPreviousVector3ValueAtIndexFunctionName ||
                    (FVar9 == SamplePreviousGridVector3AtIndexFunctionName)))))))) ||
                ((FVar9 == CubicSamplePreviousGridVector3AtIndexFunctionName ||
                 (FVar9 == GetVectorAttributeIndexFunctionName)))) {
          uVar13 = 3;
        }
        else if (((((FVar9 == SetVector2ValueFunctionName) ||
                   (FVar9 == SetVector2DValueFunctionName)) ||
                  (FVar9 == GetPreviousVector2DValueFunctionName)) ||
                 (((FVar9 == SamplePreviousGridVector2DFunctionName ||
                   (FVar9 == CubicSamplePreviousGridVector2DFunctionName)) ||
                  (((FVar9 == SetVector2ValueAtIndexFunctionName ||
                    ((FVar9 == GetPreviousVector2ValueAtIndexFunctionName ||
                     (FVar9 == SamplePreviousGridVector2AtIndexFunctionName)))) ||
                   (FVar9 == CubicSamplePreviousGridVector2AtIndexFunctionName)))))) ||
                (FVar9 == GetVector2DAttributeIndexFunctionName)) {
          uVar13 = 2;
        }
        else if (((((FVar9 == SetFloatValueFunctionName) ||
                   (FVar9 == GetPreviousFloatValueFunctionName)) ||
                  (FVar9 == SamplePreviousGridFloatFunctionName)) ||
                 ((FVar9 == CubicSamplePreviousGridFloatFunctionName ||
                  (FVar9 == SetFloatValueAtIndexFunctionName)))) ||
                (((FVar9 == GetPreviousFloatValueAtIndexFunctionName ||
                  ((FVar9 == SamplePreviousGridFloatAtIndexFunctionName ||
                   (FVar9 == CubicSamplePreviousGridFloatAtIndexFunctionName)))) ||
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

// DestroyPerInstanceData @ 149177550

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
UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData
          (UNiagaraDataInterfaceGrid3DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
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
  ulong64 local_a8 [2];
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
  local_a8[0] = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData_GT,
               (int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
  }
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
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
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData3416>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData3416>
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
  return;
}

// Equals @ 149178eb0

bool __thiscall
UNiagaraDataInterfaceGrid3DCollection::Equals
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterfaceGrid3D::Equals((UNiagaraDataInterfaceGrid3D *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceGrid3DCollection_const_>(&local_28);
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
    if (((((int)param_1[2]._padding_ == this->NumAttributes) &&
         ((this->RenderTargetUserParameter).Parameter._padding_ == param_1[2]._padding_)) &&
        ((int)(this->RenderTargetUserParameter).Parameter._padding_ == (int)param_1[2]._padding_))
       && ((*(ENiagaraGpuBufferFormat *)&param_1[2].Proxy.Ptr == this->OverrideBufferFormat &&
           (((*(byte *)((longlong)&param_1[2].Proxy.Ptr + 1) ^ this->bOverrideFormat) & 1) == 0))))
    {
      return true;
    }
  }
  return false;
}

// FillRawVolumeTexture @ 149179f90

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
UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraComponent *param_1,
          UVolumeTexture *param_2,int *param_3,int *param_4,int *param_5)

{
  return false;
}

// FillVolumeTexture @ 14917a200

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
UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraComponent *param_1,
          UVolumeTexture *param_2,int param_3)

{
  return false;
}

// FindAttributes @ 14917aac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::FindAttributes
          (UNiagaraDataInterfaceGrid3DCollection *this,
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
    local_34[0] = this->NumAttributes;
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
    *param_3 = local_34[0] - this->NumAttributes;
  }
  return;
}

// GetComponentCountFromFuncName @ 14917dcb0

int __cdecl UNiagaraDataInterfaceGrid3DCollection::GetComponentCountFromFuncName(FName *param_1)

{
  FName FVar1;
  int iVar2;
  
  FVar1 = *param_1;
  if ((((((FVar1 == SetVector4ValueFunctionName) || (FVar1 == GetPreviousVector4ValueFunctionName))
        || (FVar1 == SamplePreviousGridVector4FunctionName)) ||
       ((FVar1 == CubicSamplePreviousGridVector4FunctionName ||
        (FVar1 == SetVector4ValueAtIndexFunctionName)))) ||
      ((FVar1 == GetPreviousVector4ValueAtIndexFunctionName ||
       ((FVar1 == SamplePreviousGridVector4AtIndexFunctionName ||
        (FVar1 == CubicSamplePreviousGridVector4AtIndexFunctionName)))))) ||
     (FVar1 == GetVector4AttributeIndexFunctionName)) {
    return 4;
  }
  if (((((FVar1 != SetVector3ValueFunctionName) && (FVar1 != SetVectorValueFunctionName)) &&
       (FVar1 != GetPreviousVectorValueFunctionName)) &&
      (((FVar1 != SamplePreviousGridVectorFunctionName &&
        (FVar1 != CubicSamplePreviousGridVectorFunctionName)) &&
       ((FVar1 != SetVector3ValueAtIndexFunctionName &&
        ((FVar1 != GetPreviousVector3ValueAtIndexFunctionName &&
         (FVar1 != SamplePreviousGridVector3AtIndexFunctionName)))))))) &&
     ((FVar1 != CubicSamplePreviousGridVector3AtIndexFunctionName &&
      (FVar1 != GetVectorAttributeIndexFunctionName)))) {
    if ((((FVar1 != SetVector2ValueFunctionName) && (FVar1 != SetVector2DValueFunctionName)) &&
        (FVar1 != GetPreviousVector2DValueFunctionName)) &&
       ((((FVar1 != SamplePreviousGridVector2DFunctionName &&
          (FVar1 != CubicSamplePreviousGridVector2DFunctionName)) &&
         (((FVar1 != SetVector2ValueAtIndexFunctionName &&
           ((FVar1 != GetPreviousVector2ValueAtIndexFunctionName &&
            (FVar1 != SamplePreviousGridVector2AtIndexFunctionName)))) &&
          (FVar1 != CubicSamplePreviousGridVector2AtIndexFunctionName)))) &&
        (FVar1 != GetVector2DAttributeIndexFunctionName)))) {
      if (((((FVar1 != SetFloatValueFunctionName) && (FVar1 != GetPreviousFloatValueFunctionName))
           && (FVar1 != SamplePreviousGridFloatFunctionName)) &&
          ((FVar1 != CubicSamplePreviousGridFloatFunctionName &&
           (FVar1 != SetFloatValueAtIndexFunctionName)))) &&
         ((FVar1 != GetPreviousFloatValueAtIndexFunctionName &&
          ((FVar1 != SamplePreviousGridFloatAtIndexFunctionName &&
           (FVar1 != CubicSamplePreviousGridFloatAtIndexFunctionName)))))) {
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

// GetExposedVariableValue @ 14917e3c0

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
UNiagaraDataInterfaceGrid3DCollection::GetExposedVariableValue
          (UNiagaraDataInterfaceGrid3DCollection *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (param_1->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if (((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (param_1->Name == ExposedRTVar.Name)) &&
        ((param_1->TypeDefHandle).RegisteredTypeIndex ==
         ExposedRTVar.TypeDefHandle.RegisteredTypeIndex)) &&
       ((param_2 != (void *)0x0 && (*(longlong *)((longlong)param_2 + 0x98) != 0)))) {
      *(longlong *)param_4 = *(longlong *)((longlong)param_2 + 0x98);
      return true;
    }
  }
  return false;
}

// GetExposedVariables @ 14917e540

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::GetExposedVariables
          (UNiagaraDataInterfaceGrid3DCollection *this,
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

// GetPrivateStaticClass @ 14917fad0

UClass * __cdecl UNiagaraDataInterfaceGrid3DCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceGrid3DCollection",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceGrid3DCollection>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceGrid3DCollection>,local_res8,
               UNiagaraDataInterfaceGrid3D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.InnerSingleton;
}

// GetRawTextureSize @ 14917ff60

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
UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraComponent *param_1,int *param_2,
          int *param_3,int *param_4)

{
  FNiagaraSystemInstanceController *this_00;
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  FGrid3DCollectionRWInstanceData_GameThread *pFVar3;
  int iVar4;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
    *param_4 = -1;
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
    pFVar3 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
             ::FindRef((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
                        *)&this->SystemInstancesToProxyData_GT,uVar2);
    if (pFVar3 != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
      *param_2 = (pFVar3->NumTiles).field0_0x0._s_0.X * (pFVar3->NumCells).field0_0x0._s_0.X;
      *param_3 = (pFVar3->NumTiles).field0_0x0._s_0.Y * (pFVar3->NumCells).field0_0x0._s_0.Y;
      iVar4 = (pFVar3->NumTiles).field0_0x0._s_0.Z * (pFVar3->NumCells).field0_0x0._s_0.Z;
      goto LAB_14917fffd;
    }
  }
  iVar4 = -1;
  *param_2 = -1;
  *param_3 = -1;
LAB_14917fffd:
  *param_4 = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetShaderStorageType @ 149180040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceGrid3DCollection::GetShaderStorageType
          (UNiagaraDataInterfaceGrid3DCollection *this)

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
    ::TypeBuffer._24_8_ = FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid3DCollection,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeChannelCount";
    DAT_155274372 = Freeze::FindFieldNameLength(L"AttributeChannelCount");
    _DAT_155274350 = StaticGetTypeLayoutDesc<TArray<unsigned_int,TMemoryImageAllocator<0>_>_>();
    DAT_155274358 = ::TypeBuffer[0x10];
    DAT_155274358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155274360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274368 = 0x10;
    _DAT_15527436c = 1;
    _DAT_155274370 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_155274342 = Freeze::FindFieldNameLength(L"AttributeNames");
    _DAT_155274320 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_155274328 = ::TypeBuffer[0x10];
    DAT_155274328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155274328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155274328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155274328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155274328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155274328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155274328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_Grid3DCollection::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155274330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155274338 = 0;
    _DAT_15527433c = 1;
    _DAT_155274340 = 0;
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

// GetTextureSize @ 149180820

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
UNiagaraDataInterfaceGrid3DCollection::GetTextureSize
          (UNiagaraDataInterfaceGrid3DCollection *this,UNiagaraComponent *param_1,int *param_2,
          int *param_3,int *param_4)

{
  FNiagaraSystemInstanceController *this_00;
  TReferenceControllerBase<1> *pTVar1;
  ulong64 uVar2;
  FGrid3DCollectionRWInstanceData_GameThread *pFVar3;
  int iVar4;
  
  if (param_1 == (UNiagaraComponent *)0x0) {
    *param_2 = -1;
    *param_3 = -1;
    *param_4 = -1;
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
    pFVar3 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
             ::FindRef((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>_>
                        *)&this->SystemInstancesToProxyData_GT,uVar2);
    if (pFVar3 != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
      *param_2 = (pFVar3->NumCells).field0_0x0._s_0.X;
      *param_3 = (pFVar3->NumCells).field0_0x0._s_0.Y;
      iVar4 = (pFVar3->NumCells).field0_0x0._s_0.Z;
      goto LAB_1491808b1;
    }
  }
  iVar4 = -1;
  *param_2 = -1;
  *param_3 = -1;
LAB_1491808b1:
  *param_4 = iVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// GetVMExternalFunction @ 1491814f0

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::GetVMExternalFunction
          (UNiagaraDataInterfaceGrid3DCollection *this,FVMExternalFunctionBindingInfo *param_1,
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
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  FDelegateAllocation local_178;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  undefined1 local_150 [8];
  FDelegateAllocation local_148;
  undefined1 local_138 [8];
  FDelegateAllocation local_130;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
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
  
  UNiagaraDataInterfaceGrid3D::GetVMExternalFunction
            ((UNiagaraDataInterfaceGrid3D *)this,param_1,param_2,param_3);
  FVar7 = param_1->Name;
  if (FVar7 == UNiagaraDataInterfaceRWBase::WorldBBoxSizeFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0x57d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_198 = (undefined1  [8])0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_190;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid3DCollection_VMGetWorldBBoxSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_120);
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
  }
  else if (FVar7 == UNiagaraDataInterfaceRWBase::CellSizeFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0x584,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_180 = (undefined1  [8])0x0;
    local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_178.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_178;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_178);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid3DCollection_VMGetCellSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_108);
    if ((local_178.DelegateSize != 0) &&
       (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_178.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_178,0,0,0x10);
      local_178.DelegateSize = 0;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_178.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_180);
  }
  else if (FVar7 == SetNumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0x589,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_168 = (undefined1  [8])0x0;
    local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_160.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_160;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid3DCollection_VMSetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_f0);
    if ((local_160.DelegateSize != 0) &&
       (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_160,0,0,0x10);
      local_160.DelegateSize = 0;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_168);
  }
  else if (FVar7 == UNiagaraDataInterfaceRWBase::NumCellsFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0x58e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_150 = (undefined1  [8])0x0;
    local_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_148.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_148;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_148);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid3DCollection_VMGetNumCellsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
               (FWriteAccessScope *)&local_d8);
    if ((local_148.DelegateSize != 0) &&
       (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_148.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_148,0,0,0x10);
      local_148.DelegateSize = 0;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    if (local_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_148.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_150);
  }
  else if (FVar7 == UNiagaraDataInterfaceRWBase::UnitToFloatIndexFunctionName) {
    if ((((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 3)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0x593,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_138 = (undefined1  [8])0x0;
    local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_130.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_130;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_130);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceGrid3DCollection_VMUnitToFloatIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar3[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_138,
               (FWriteAccessScope *)&local_c0);
    if ((local_130.DelegateSize != 0) &&
       (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_130,0,0,0x10);
      local_130.DelegateSize = 0;
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_130.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_138);
  }
  else {
    if (FVar7 == GetVector4AttributeIndexFunctionName) {
      pFVar6 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
      pFVar5 = pFVar6 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
      for (; pFVar6 != pFVar5; pFVar6 = pFVar6 + 2) {
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181b50;
      }
      pFVar6 = (FName *)0x0;
LAB_149181b50:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0x599,L""), bVar2)) {
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
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181bc5;
      }
      pFVar6 = (FName *)0x0;
LAB_149181bc5:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0x59f,L""), bVar2)) {
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
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181c40;
      }
      pFVar6 = (FName *)0x0;
LAB_149181c40:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0x5a5,L""), bVar2)) {
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
        if (*pFVar6 == UNiagaraDataInterfaceRWBase::NAME_Attribute) goto LAB_149181cb2;
      }
      pFVar6 = (FName *)0x0;
LAB_149181cb2:
      FVar7 = pFVar6[1];
      if ((((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                             ,0x5ab,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = 1;
    }
    TUNiagaraDataInterfaceGrid3DCollection_VMGetAttributeIndexBinder::Bind<FName,int>
              ((UNiagaraDataInterface *)this,param_3,FVar7,iVar8);
  }
  return;
}

// GetValueTypeFromFuncName @ 149182260

FNiagaraTypeDefinition * __cdecl
UNiagaraDataInterfaceGrid3DCollection::GetValueTypeFromFuncName
          (FNiagaraTypeDefinition *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  
  FVar1 = *param_1;
  if (((((FVar1 == SetVector4ValueFunctionName) || (FVar1 == GetPreviousVector4ValueFunctionName))
       || (FVar1 == SamplePreviousGridVector4FunctionName)) ||
      ((FVar1 == CubicSamplePreviousGridVector4FunctionName ||
       (FVar1 == SetVector4ValueAtIndexFunctionName)))) ||
     ((FVar1 == GetPreviousVector4ValueAtIndexFunctionName ||
      ((FVar1 == SamplePreviousGridVector4AtIndexFunctionName ||
       (FVar1 == CubicSamplePreviousGridVector4AtIndexFunctionName)))))) {
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
  if (((((FVar1 != SetVector3ValueFunctionName) && (FVar1 != SetVectorValueFunctionName)) &&
       (FVar1 != GetPreviousVectorValueFunctionName)) &&
      (((FVar1 != SamplePreviousGridVectorFunctionName &&
        (FVar1 != CubicSamplePreviousGridVectorFunctionName)) &&
       ((FVar1 != SetVector3ValueAtIndexFunctionName &&
        ((FVar1 != GetPreviousVector3ValueAtIndexFunctionName &&
         (FVar1 != SamplePreviousGridVector3AtIndexFunctionName)))))))) &&
     (FVar1 != CubicSamplePreviousGridVector3AtIndexFunctionName)) {
    if ((((FVar1 != SetVector2ValueFunctionName) && (FVar1 != SetVector2DValueFunctionName)) &&
        (FVar1 != GetPreviousVector2DValueFunctionName)) &&
       (((FVar1 != SamplePreviousGridVector2DFunctionName &&
         (FVar1 != CubicSamplePreviousGridVector2DFunctionName)) &&
        (((FVar1 != SetVector2ValueAtIndexFunctionName &&
          ((FVar1 != GetPreviousVector2ValueAtIndexFunctionName &&
           (FVar1 != SamplePreviousGridVector2AtIndexFunctionName)))) &&
         (FVar1 != CubicSamplePreviousGridVector2AtIndexFunctionName)))))) {
      if (((((FVar1 != SetFloatValueFunctionName) && (FVar1 != GetPreviousFloatValueFunctionName))
           && (FVar1 != SamplePreviousGridFloatFunctionName)) &&
          ((FVar1 != CubicSamplePreviousGridFloatFunctionName &&
           (FVar1 != SetFloatValueAtIndexFunctionName)))) &&
         ((FVar1 != GetPreviousFloatValueAtIndexFunctionName &&
          ((FVar1 != SamplePreviousGridFloatAtIndexFunctionName &&
           (FVar1 != CubicSamplePreviousGridFloatAtIndexFunctionName)))))) {
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
    FNiagaraTypeDefinition::FNiagaraTypeDefinition
              (__return_storage_ptr__,&FNiagaraTypeDefinition::Vec2Def);
    return __return_storage_ptr__;
  }
  FNiagaraTypeDefinition::FNiagaraTypeDefinition
            (__return_storage_ptr__,&FNiagaraTypeDefinition::Vec3Def);
  return __return_storage_ptr__;
}

// HasPostSimulateTick @ 149182510

bool __thiscall
UNiagaraDataInterfaceGrid3DCollection::HasPostSimulateTick
          (UNiagaraDataInterfaceGrid3DCollection *this)

{
  return true;
}

// HasPreSimulateTick @ 149182550

bool __thiscall
UNiagaraDataInterfaceGrid3DCollection::HasPreSimulateTick
          (UNiagaraDataInterfaceGrid3DCollection *this)

{
  return true;
}

// InitPerInstanceData @ 1491835b0

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
UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData
          (UNiagaraDataInterfaceGrid3DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  code *pcVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 uVar8;
  ENiagaraGpuBufferFormat EVar9;
  TOptional<EPixelFormat> TVar10;
  int iVar11;
  FRenderCommandList *pFVar12;
  FCommandList *pFVar13;
  FRenderCommandTag *pFVar14;
  UNiagaraSettings *pUVar15;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  FTextureResource *pFVar17;
  FName *this_00;
  undefined ***pppuVar18;
  code **ppcVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  EPixelFormatCapabilities EVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_2f8 [32];
  FGrid3DCollectionRWInstanceData_GameThread *local_2c8;
  int local_2c0;
  undefined1 local_2bc [2];
  undefined1 local_2ba [2];
  int local_2b8;
  undefined1 local_2b4 [20];
  undefined8 *local_2a0;
  FGrid3DCollectionRWInstanceData_GameThread **local_298;
  undefined8 local_288;
  undefined1 local_278 [24];
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *local_210;
  ForAnyElementType local_208;
  code *local_200;
  FGrid3DCollectionRWInstanceData_GameThread local_1f8;
  code *local_128 [2];
  undefined **local_118;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *pFStack_110;
  ulong64 local_108;
  undefined ***local_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *pFStack_b0;
  ulong64 local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  EPixelFormat *pEVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2b4._12_8_ = param_2;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                         ,0xc3c,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return (bool)uVar8;
  }
  memset(param_1,0,0xd0);
  local_2c8 = FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
                        (param_1);
  local_2b4._4_8_ = param_2->ID;
  local_2a0 = (undefined8 *)(local_2b4 + 4);
  local_298 = &local_2c8;
  TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FGrid3DCollectionRWInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData_GT,
             (TPairInitializer<unsigned___int64_&&,FGrid3DCollectionRWInstanceData_GameThread_*_&> *
             )local_2b4,(bool *)&local_2a0);
  local_2c0 = 0;
  FindAttributes(this,&local_2c8->Vars,&local_2c8->Offsets,&local_2c0,
                 (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0);
  iVar21 = this->NumAttributes + local_2c0;
  local_2c8->TotalNumAttributes = iVar21;
  local_2c8->TotalNumNamedAttributes = local_2c0;
  if (((0 < this->NumAttributes) && (0 < local_2c0)) && (2 < (byte)LogNiagara._0_1_)) {
    ::FName::ToString((FName *)(this->_padding_ + 8),(FString *)(local_278 + 8));
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((FWeakObjectPtr)local_278._8_8_ != (FWeakObjectPtr)0x0) {
      FMemory::Free((void *)local_278._8_8_);
    }
  }
  iVar11 = (int)this->_padding_;
  if (iVar11 == 0) {
    (local_2c8->NumCells).field0_0x0._s_0.X = *(int *)((longlong)&this->_padding_ + 4);
    (local_2c8->NumCells).field0_0x0._s_0.Y = (int)this->_padding_;
    (local_2c8->NumCells).field0_0x0._s_0.Z = *(int *)((longlong)&this->_padding_ + 4);
    dVar26 = (double)this->_padding_;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.X = (double)this->_padding_;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.Y = dVar26;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.Z = (double)this->_padding_;
    local_288 = *(undefined8 *)&(local_2c8->NumCells).field0_0x0;
    dVar26 = (local_2c8->WorldBBoxSize).field0_0x0._s_0.Y;
    iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Z;
    dVar27 = (local_2c8->WorldBBoxSize).field0_0x0._s_0.Z;
    (local_2c8->CellSize).field0_0x0._s_0.X =
         (local_2c8->WorldBBoxSize).field0_0x0._s_0.X / (double)(int)local_288;
    (local_2c8->CellSize).field0_0x0._s_0.Y = dVar26 / (double)(int)((ulonglong)local_288 >> 0x20);
    (local_2c8->CellSize).field0_0x0._s_0.Z = dVar27 / (double)iVar11;
  }
  else if (iVar11 == 1) {
    dVar26 = (double)this->_padding_;
    if ((double)this->_padding_ <= (double)this->_padding_) {
      dVar26 = (double)this->_padding_;
    }
    if (dVar26 <= (double)this->_padding_) {
      dVar26 = (double)this->_padding_;
    }
    dVar26 = dVar26 / (double)*(int *)((longlong)&this->_padding_ + 4);
    (local_2c8->CellSize).field0_0x0._s_0.X = dVar26;
    (local_2c8->CellSize).field0_0x0._s_0.Y = dVar26;
    (local_2c8->CellSize).field0_0x0._s_0.Z = dVar26;
  }
  else if (iVar11 == 2) {
    dVar26 = (double)*(float *)&this->_padding_;
    (local_2c8->CellSize).field0_0x0._s_0.X = dVar26;
    (local_2c8->CellSize).field0_0x0._s_0.Y = dVar26;
    (local_2c8->CellSize).field0_0x0._s_0.Z = dVar26;
  }
  dVar26 = __real_3fe0000000000000;
  iVar11 = (int)this->_padding_;
  if ((iVar11 == 1) || (iVar11 == 2)) {
    (local_2c8->NumCells).field0_0x0._s_0.X =
         (int)((longlong)
               ROUND(((double)this->_padding_ + (double)this->_padding_) /
                     (local_2c8->CellSize).field0_0x0._s_0.X - __real_3fe0000000000000) >> 1);
    (local_2c8->NumCells).field0_0x0._s_0.Y =
         (int)((longlong)
               ROUND(((double)this->_padding_ + (double)this->_padding_) /
                     (local_2c8->CellSize).field0_0x0._s_0.X - dVar26) >> 1);
    (local_2c8->NumCells).field0_0x0._s_0.Z =
         (int)((longlong)
               ROUND(((double)this->_padding_ + (double)this->_padding_) /
                     (local_2c8->CellSize).field0_0x0._s_0.X - dVar26) >> 1);
    uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar2 = __real_3e45798ee2308c3a;
    dVar26 = (double)this->_padding_;
    dVar27 = (double)this->_padding_;
    if ((dVar27 <= dVar26) ||
       (dVar27 < (double)this->_padding_ || dVar27 == (double)this->_padding_)) {
      if ((dVar26 <= dVar27) ||
         (dVar26 < (double)this->_padding_ || dVar26 == (double)this->_padding_)) {
        if ((dVar27 < (double)this->_padding_) && (dVar26 < (double)this->_padding_)) {
          iVar11 = (local_2c8->NumCells).field0_0x0._s_0.X;
          dVar27 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X - dVar27;
          if (__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            (local_2c8->NumCells).field0_0x0._s_0.X = iVar11 + 1;
          }
          iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Y;
          dVar26 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X -
                   (double)this->_padding_;
          if (dVar2 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar5,
                                       SUB84(dVar26,0) & uVar4)) {
            (local_2c8->NumCells).field0_0x0._s_0.Y = iVar11 + 1;
          }
        }
      }
      else {
        iVar11 = (local_2c8->NumCells).field0_0x0._s_0.X;
        dVar27 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X - dVar27;
        if (__real_3e45798ee2308c3a <
            (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
          (local_2c8->NumCells).field0_0x0._s_0.X = iVar11 + 1;
        }
        iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Z;
        dVar26 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X - (double)this->_padding_;
        if (dVar2 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar5,
                                     SUB84(dVar26,0) & uVar4)) {
          (local_2c8->NumCells).field0_0x0._s_0.Z = iVar11 + 1;
        }
      }
    }
    else {
      iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Y;
      dVar26 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X - dVar26;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        (local_2c8->NumCells).field0_0x0._s_0.Y = iVar11 + 1;
      }
      iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Z;
      dVar26 = (double)iVar11 * (local_2c8->CellSize).field0_0x0._s_0.X - (double)this->_padding_;
      if (dVar2 < (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar5,SUB84(dVar26,0) & uVar4
                                  )) {
        (local_2c8->NumCells).field0_0x0._s_0.Z = iVar11 + 1;
      }
    }
    dVar26 = (local_2c8->CellSize).field0_0x0._s_0.X;
    iVar11 = (local_2c8->NumCells).field0_0x0._s_0.Y;
    iVar22 = (local_2c8->NumCells).field0_0x0._s_0.Z;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.X =
         (double)(local_2c8->NumCells).field0_0x0._s_0.X * dVar26;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.Y = (double)iVar11 * dVar26;
    (local_2c8->WorldBBoxSize).field0_0x0._s_0.Z = (double)iVar22 * dVar26;
  }
  iVar11 = (local_2c8->NumCells).field0_0x0._s_0.X;
  if (((iVar11 < 1) || ((local_2c8->NumCells).field0_0x0._s_0.Y < 1)) ||
     ((local_2c8->NumCells).field0_0x0._s_0.Z < 1)) {
    if ((byte)LogNiagara._0_1_ < 2) {
      return false;
    }
    ::FName::ToString((FName *)(this->_padding_ + 8),&local_220);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_250.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
  }
  else {
    if (__real_322bcc77 <
        (float)((uint)(GNiagaraGrid3DResolutionMultiplier - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      iVar11 = (int)((float)iVar11 * GNiagaraGrid3DResolutionMultiplier);
      if (iVar11 < 1) {
        iVar11 = 1;
      }
      (local_2c8->NumCells).field0_0x0._s_0.X = iVar11;
      iVar11 = (int)((float)(local_2c8->NumCells).field0_0x0._s_0.Y *
                    GNiagaraGrid3DResolutionMultiplier);
      if (iVar11 < 1) {
        iVar11 = 1;
      }
      (local_2c8->NumCells).field0_0x0._s_0.Y = iVar11;
      iVar11 = (int)((float)(local_2c8->NumCells).field0_0x0._s_0.Z *
                    GNiagaraGrid3DResolutionMultiplier);
      if (iVar11 < 1) {
        iVar11 = 1;
      }
      (local_2c8->NumCells).field0_0x0._s_0.Z = iVar11;
    }
    if (iVar21 == 0) {
      this_00 = (FName *)(this->_padding_ + 8);
      if ((*this_00 != (FName)0x0) && (4 < (byte)LogNiagara._0_1_)) {
        ::FName::ToString(this_00,&local_260);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
      }
      pFStack_110 = UNiagaraDataInterface::
                    GetProxyAs<FNiagaraDataInterfaceProxyGrid3DCollectionProxy>
                              ((UNiagaraDataInterface *)this);
      local_108 = param_2->ID;
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      local_100 = (undefined ***)0x0;
      local_118 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`100'::<lambda_1>,1,0>
                   ::_vftable_;
      pFVar12 = FRenderCommandList::GetInstanceTLS();
      if (pFVar12 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l100::TSTR_FUpdateData3242>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
      }
      else {
        pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
        local_c8._0_8_ = local_128[0];
        local_a0 = local_100;
        local_b8 = local_118;
        pFStack_b0 = pFStack_110;
        local_a8 = local_108;
        local_128[0] = (code *)0x0;
        local_98 = 2;
        pFVar14 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l100::TSTR_FUpdateData3242>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_c8,pFVar14);
        uVar20 = (ulonglong)local_98;
        if ((2 < uVar20) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar1 = (code *)swi(3);
          uVar8 = (*pcVar1)();
          return (bool)uVar8;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_c8._0_8_ != (code *)0x0) {
            pppuVar18 = (undefined ***)(local_c8 + 0x10);
            if (local_a0 != (undefined ***)0x0) {
              pppuVar18 = local_a0;
            }
            (*(code *)(*pppuVar18)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar20])(local_c8);
        }
      }
      if (local_128[0] == (code *)0x0) {
        return true;
      }
      pppuVar18 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar18 = local_100;
      }
      (*(code *)(*pppuVar18)[2])();
      return true;
    }
    if (this->bOverrideFormat == 0) {
      pUVar15 = GetDefault<UNiagaraSettings>();
      EVar9 = pUVar15->DefaultGridFormat;
    }
    else {
      EVar9 = this->OverrideBufferFormat;
    }
    fVar3 = __real_bf000000;
    EVar24 = (uint)EVar9;
    if ((uint)GNiagaraGrid3DOverrideFormat < 3) {
      EVar24 = GNiagaraGrid3DOverrideFormat & 0xff;
    }
    if ((((local_2c8->Vars).ArrayNum == 1) && (iVar21 < 5)) && (GNiagaraGrid3DUseRGBAGrid != 0)) {
      if (iVar21 - local_2c0 < 1) {
        (local_2c8->NumTiles).field0_0x0._s_0.X = 1;
        (local_2c8->NumTiles).field0_0x0._s_0.Y = 1;
        (local_2c8->NumTiles).field0_0x0._s_0.Z = 1;
        TVar10 = FNiagaraUtilities::BufferFormatToPixelFormat
                           ((ENiagaraGpuBufferFormat)local_2bc,EVar24,0x600008);
        pEVar16 = (EPixelFormat *)CONCAT62(extraout_var,TVar10);
        if ((TOptional<EPixelFormat> *)pEVar16 != &local_2c8->PixelFormat) {
          if (pEVar16[1] != PF_Unknown) {
            (local_2c8->PixelFormat).TypedValue = *pEVar16;
            (local_2c8->PixelFormat).bIsSet = true;
            local_2c8->UseRGBATexture = true;
            goto LAB_149183ff2;
          }
          if ((local_2c8->PixelFormat).bIsSet != false) {
            (local_2c8->PixelFormat).bIsSet = false;
          }
        }
        local_2c8->UseRGBATexture = true;
LAB_149183ff2:
        uVar6 = local_2b4._12_8_;
        pFVar17 = (FTextureResource *)0x0;
        local_2c8->TargetTexture = (UTextureRenderTargetVolume *)0x0;
        FNiagaraParameterDirectBinding<UObject_*>::Init
                  (&local_2c8->RTUserParamBinding,(FNiagaraParameterStore *)local_278,
                   (FNiagaraVariable *)(local_2b4._12_8_ + 0x290));
        FGrid3DCollectionRWInstanceData_GameThread::UpdateTargetTexture
                  (local_2c8,(ENiagaraGpuBufferFormat)EVar24);
        local_2c8->ClearBeforeNonIterationStage = SUB81(this->_padding_,0);
        local_210 = UNiagaraDataInterface::
                    GetProxyAs<FNiagaraDataInterfaceProxyGrid3DCollectionProxy>
                              ((UNiagaraDataInterface *)this);
        if (local_2c8->TargetTexture != (UTextureRenderTargetVolume *)0x0) {
          pFVar17 = UTexture::GetResource((UTexture *)local_2c8->TargetTexture);
        }
        local_200 = *(code **)(uVar6 + 0x120);
        local_208.Data = (FScriptContainerElement *)pFVar17;
        FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
                  (&local_1f8,local_2c8);
        local_f8[0] = (code *)0x0;
        local_d0 = FMemory::Malloc(0xf0,8);
        ppcVar19 = local_d0 + 1;
        *local_d0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::`2'::<lambda_2>,1,1>
                             ::_vftable_;
        *ppcVar19 = (code *)local_210;
        local_d0[2] = (code *)local_208.Data;
        local_d0[3] = local_200;
        FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
                  ((FGrid3DCollectionRWInstanceData_GameThread *)(local_d0 + 4),&local_1f8);
        if (ppcVar19 != (code **)0x0) {
          local_f8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                        ::Call;
        }
        pFVar12 = FRenderCommandList::GetInstanceTLS();
        if (pFVar12 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData_::__l2::TSTR_FUpdateData3363>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
        }
        else {
          pFVar13 = FRenderCommandList::GetRenderThread(pFVar12);
          local_88._0_8_ = local_f8[0];
          local_60 = local_d0;
          local_d0 = (code **)0x0;
          local_88._16_8_ = local_e8[0];
          local_88._24_8_ = local_e8[1];
          local_88._32_8_ = local_e8[2];
          local_f8[0] = (code *)0x0;
          local_58 = 2;
          pFVar14 = (FRenderCommandTag *)
                    TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::InitPerInstanceData'::__l2::TSTR_FUpdateData3363>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar13,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar14);
          uVar20 = (ulonglong)local_58;
          if ((2 < uVar20) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar20] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              ppcVar19 = (code **)(local_88 + 0x10);
              if (local_60 != (code **)0x0) {
                ppcVar19 = local_60;
              }
              (**(code **)(*ppcVar19 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar20])(local_88);
          }
        }
        if (local_f8[0] != (code *)0x0) {
          ppcVar19 = local_f8 + 2;
          if (local_d0 != (code **)0x0) {
            ppcVar19 = local_d0;
          }
          (**(code **)(*ppcVar19 + 0x10))();
        }
        if (local_1f8.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Offsets.AllocatorInstance.Data);
        }
        if (local_1f8.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Vars.AllocatorInstance.Data);
        }
        if (local_1f8.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data ==
            (FScriptContainerElement *)0x0) {
          return true;
        }
        FMemory::Free(local_1f8.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data);
        return true;
      }
      if ((byte)LogNiagara._0_1_ < 2) {
        return false;
      }
      ::FName::ToString((FName *)(this->_padding_ + 8),&local_250);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u__s__Unnamed_att_151d97ff8,
                 (FLogCategoryBase *)&LogNiagara);
    }
    else {
      local_2b8 = (local_2c8->NumCells).field0_0x0._s_0.Z;
      fVar28 = (float)(local_2c8->NumCells).field0_0x0._s_0.X;
      fVar29 = (float)(local_2c8->NumCells).field0_0x0._s_0.Y;
      iVar11 = (int)ROUND(__real_45800000 / fVar28 - __real_3f000000) >> 1;
      iVar22 = (int)ROUND(__real_45800000 / fVar29 - __real_3f000000) >> 1;
      iVar23 = (int)ROUND(__real_45800000 / (float)local_2b8 - __real_3f000000) >> 1;
      iVar25 = iVar23 * iVar22 * iVar11;
      if (((__real_45000000 < fVar28) || (__real_45000000 < fVar29)) ||
         (__real_45000000 < (float)local_2b8)) {
        if ((byte)LogNiagara._0_1_ < 2) {
          return false;
        }
        ::FName::ToString((FName *)(this->_padding_ + 8),&local_230);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        local_250.Data.AllocatorInstance.Data = local_230.Data.AllocatorInstance.Data;
      }
      else {
        if ((iVar21 <= iVar25) || (iVar25 < 1)) {
          fVar28 = (float)iVar21;
          if (iVar11 < iVar21) {
            iVar21 = iVar11;
          }
          (local_2c8->NumTiles).field0_0x0._s_0.X = iVar21;
          iVar11 = -((int)ROUND(fVar3 - (fVar28 + fVar28) / (float)iVar21) >> 1);
          if (iVar22 < iVar11) {
            iVar11 = iVar22;
          }
          (local_2c8->NumTiles).field0_0x0._s_0.Y = iVar11;
          iVar21 = -((int)ROUND(fVar3 - (fVar28 + fVar28) / (float)(iVar11 * iVar21)) >> 1);
          if (iVar23 < iVar21) {
            iVar21 = iVar23;
          }
          (local_2c8->NumTiles).field0_0x0._s_0.Z = iVar21;
          if (((local_2c8->NumTiles).field0_0x0._s_0.X < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InstanceData->NumTiles.X > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                 ,0xcf0,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          if (((local_2c8->NumTiles).field0_0x0._s_0.Y < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InstanceData->NumTiles.Y > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                 ,0xcf1,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          if (((local_2c8->NumTiles).field0_0x0._s_0.Z < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InstanceData->NumTiles.Z > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                 ,0xcf2,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          local_2c8->UseRGBATexture = false;
          TVar10 = FNiagaraUtilities::BufferFormatToPixelFormat
                             ((ENiagaraGpuBufferFormat)local_2ba,EVar24,0x600008);
          pEVar16 = (EPixelFormat *)CONCAT62(extraout_var_00,TVar10);
          if ((TOptional<EPixelFormat> *)pEVar16 != &local_2c8->PixelFormat) {
            if (pEVar16[1] == PF_Unknown) {
              if ((local_2c8->PixelFormat).bIsSet != false) {
                (local_2c8->PixelFormat).bIsSet = false;
              }
            }
            else {
              (local_2c8->PixelFormat).TypedValue = *pEVar16;
              (local_2c8->PixelFormat).bIsSet = true;
            }
          }
          goto LAB_149183ff2;
        }
        if ((byte)LogNiagara._0_1_ < 2) {
          return false;
        }
        ::FName::ToString((FName *)(this->_padding_ + 8),&local_240);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        local_250.Data.AllocatorInstance.Data = local_240.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  return false;
}

// PerInstanceDataSize @ 149186740

int __thiscall
UNiagaraDataInterfaceGrid3DCollection::PerInstanceDataSize
          (UNiagaraDataInterfaceGrid3DCollection *this)

{
  return 0xd0;
}

// PerInstanceTick @ 149186d10

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
UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick
          (UNiagaraDataInterfaceGrid3DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  ENiagaraGpuBufferFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *this_00;
  FTextureResource *pFVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  code **ppcVar10;
  ulonglong uVar11;
  FGrid3DCollectionRWInstanceData_GameThread *this_03;
  undefined1 *puVar12;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar11 = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SystemInstancesToProxyData_GT).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SystemInstancesToProxyData_GT).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    ((uVar11 >> 0x20) * 0x17 + uVar11 &
                    (ulonglong)(*(int *)&(this->SystemInstancesToProxyData_GT).field_0x48 - 1)) * 4)
    ;
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar7 * 0x18;
        if (*(ulonglong *)
             (*(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar7 * 0x18) == uVar11)
        {
          if (lVar1 != 0) {
            this_03 = *(FGrid3DCollectionRWInstanceData_GameThread **)(lVar1 + 8);
            goto LAB_149186daa;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  this_03 = (FGrid3DCollectionRWInstanceData_GameThread *)0x0;
LAB_149186daa:
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
  if ((uint)GNiagaraGrid3DOverrideFormat < 3) {
    EVar4 = (ENiagaraGpuBufferFormat)GNiagaraGrid3DOverrideFormat;
  }
  FGrid3DCollectionRWInstanceData_GameThread::UpdateTargetTexture(this_03,EVar4);
  pcVar2 = (code *)this->_padding_;
  if (pcVar2 == (code *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  if (this_03->TargetTexture == (UTextureRenderTargetVolume *)0x0) {
    pFVar8 = (FTextureResource *)0x0;
  }
  else {
    pFVar8 = UTexture::GetResource((UTexture *)this_03->TargetTexture);
  }
  pcVar3 = (code *)param_2->ID;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x20,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[1] = (code *)pFVar8;
  local_80[2] = pcVar2;
  local_80[3] = pcVar3;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick_::__l2::TSTR_FUpdateData3438>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTick'::__l2::TSTR_FUpdateData3438>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar9);
    uVar11 = (ulonglong)local_48;
    if (2 < uVar11) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar10 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar10 = local_50;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar10 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar10 = local_80;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  return false;
}

// PerInstanceTickPostSimulate @ 149187bc0

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
UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceGrid3DCollection *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  int iVar7;
  code **ppcVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_208 [32];
  int local_1e8;
  int local_1e0;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *local_1d8;
  FNiagaraSystemInstance *local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *local_198;
  code *local_190;
  FGrid3DCollectionRWInstanceData_GameThread local_188;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  if (param_1 == (void *)0x0) {
    return false;
  }
  if (*(char *)((longlong)param_1 + 0x5b) == '\0') {
    return false;
  }
  if (*(int *)((longlong)param_1 + 4) < 1) {
    return false;
  }
  if (*(int *)((longlong)param_1 + 8) < 1) {
    return false;
  }
  if (*(int *)((longlong)param_1 + 0xc) < 1) {
    return false;
  }
  *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
  *(double *)((longlong)param_1 + 0x28) =
       *(double *)((longlong)param_1 + 0x40) / (double)*(int *)((longlong)param_1 + 4);
  *(double *)((longlong)param_1 + 0x30) =
       *(double *)((longlong)param_1 + 0x48) / (double)*(int *)((longlong)param_1 + 8);
  *(double *)((longlong)param_1 + 0x38) =
       *(double *)((longlong)param_1 + 0x50) / (double)*(int *)((longlong)param_1 + 0xc);
  local_1d0 = param_2;
  local_1d8 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid3DCollectionProxy>
                        ((UNiagaraDataInterface *)this);
  fVar2 = __real_bf000000;
  if (*(char *)((longlong)param_1 + 0x5a) == '\0') {
    iVar9 = *(int *)((longlong)param_1 + 8);
    iVar7 = *(int *)((longlong)param_1 + 0xc);
    fVar15 = (float)iVar9;
    iVar5 = (int)ROUND(__real_45800000 / (float)*(int *)((longlong)param_1 + 4) - __real_3f000000)
            >> 1;
    fVar14 = (float)iVar7;
    iVar11 = (int)ROUND(__real_45800000 / fVar15 - __real_3f000000) >> 1;
    iVar12 = (int)ROUND(__real_45800000 / fVar14 - __real_3f000000) >> 1;
    iVar13 = iVar12 * iVar11 * iVar5;
    if (((__real_45000000 < (float)*(int *)((longlong)param_1 + 4)) || (__real_45000000 < fVar15))
       || (__real_45000000 < fVar14)) {
      if ((byte)LogNiagara._0_1_ < 2) {
        return false;
      }
      ::FName::ToString((FName *)(this->_padding_ + 8),&local_1a8);
      local_1e8 = iVar9;
      local_1e0 = iVar7;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      local_1c8.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
      goto LAB_1491880d2;
    }
    iVar9 = *(int *)((longlong)param_1 + 0x1c);
    if ((iVar13 < iVar9) && (0 < iVar13)) {
      if ((byte)LogNiagara._0_1_ < 2) {
        return false;
      }
      ::FName::ToString((FName *)(this->_padding_ + 8),&local_1c8);
      local_1e8 = iVar9;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      goto LAB_1491880d2;
    }
    if (iVar9 < 1) {
      if ((byte)LogNiagara._0_1_ < 3) {
        return false;
      }
      ::FName::ToString((FName *)(this->_padding_ + 8),&local_1b8);
      local_1e8 = iVar9;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      local_1c8.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
      goto LAB_1491880d2;
    }
    fVar14 = (float)iVar9;
    if (iVar5 < iVar9) {
      iVar9 = iVar5;
    }
    *(int *)((longlong)param_1 + 0x10) = iVar9;
    iVar7 = -((int)ROUND(fVar2 - (fVar14 + fVar14) / (float)iVar9) >> 1);
    if (iVar11 < iVar7) {
      iVar7 = iVar11;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar7;
    iVar7 = -((int)ROUND(fVar2 - (fVar14 + fVar14) / (float)(iVar7 * iVar9)) >> 1);
    if (iVar12 < iVar7) {
      iVar7 = iVar12;
    }
    *(int *)((longlong)param_1 + 0x18) = iVar7;
    if ((iVar9 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->NumTiles.X > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0xedd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((*(int *)((longlong)param_1 + 0x14) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->NumTiles.Y > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0xede,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((*(int *)((longlong)param_1 + 0x18) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceData->NumTiles.Z > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                           ,0xedf,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x10) = 1;
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    *(undefined4 *)((longlong)param_1 + 0x18) = 1;
  }
  local_198 = local_1d8;
  local_190 = (code *)local_1d0->ID;
  FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
            (&local_188,param_1);
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0xe8,8);
  ppcVar8 = local_90 + 1;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::`5'::<lambda_1>,1,1>
                       ::_vftable_;
  *ppcVar8 = (code *)local_198;
  local_90[2] = local_190;
  FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
            ((FGrid3DCollectionRWInstanceData_GameThread *)(local_90 + 3),&local_188);
  if (ppcVar8 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate_::__l5::TSTR_FUpdateData3812>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceGrid3DCollection::PerInstanceTickPostSimulate'::__l5::TSTR_FUpdateData3812>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar6);
    uVar10 = (ulonglong)local_58;
    if ((2 < uVar10) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar8 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar8 = local_60;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar8 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar8 = local_90;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  if (local_188.Offsets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Offsets.AllocatorInstance.Data);
  }
  local_1c8.Data.AllocatorInstance.Data =
       local_188.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data;
  if (local_188.Vars.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Vars.AllocatorInstance.Data);
    local_1c8.Data.AllocatorInstance.Data =
         local_188.RTUserParamBinding.BoundVariable.VarData.AllocatorInstance.Data;
  }
LAB_1491880d2:
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return false;
}

// PostInitProperties @ 149188870

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::PostInitProperties
          (UNiagaraDataInterfaceGrid3DCollection *this)

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

// ProvidePerInstanceDataForRenderThread @ 149189490

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceGrid3DCollection *this,void *param_1,void *param_2,ulong64 *param_3)

{
  return;
}

// SetShaderParameters @ 14918d130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfaceGrid3DCollection::SetShaderParameters
          (UNiagaraDataInterfaceGrid3DCollection *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  FNiagaraDataInterfaceProxy *pFVar7;
  FRDGBuilder *pFVar8;
  FScriptContainerElement *pFVar9;
  uchar *puVar10;
  code *pcVar11;
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong64 uVar19;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar20;
  FGrid3DCollectionRWInstanceData_RenderThread *pFVar21;
  FNiagaraDataInterfaceParametersCS *pFVar22;
  longlong lVar23;
  FShaderParametersMetadata *pFVar24;
  FRDGTextureSRV *pFVar25;
  FRDGTextureUAV *pFVar26;
  int iVar27;
  longlong lVar28;
  TMemoryImagePtr<FScriptContainerElement>_u_0 TVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  FNiagaraDataInterfaceParametersCS *pFVar35;
  uint uVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  longlong local_res18;
  FResourceArrayUploadInterface local_c8;
  TMemoryImagePtr<FScriptContainerElement>_u_0 local_c0;
  uint local_b8 [2];
  undefined1 local_b0;
  FNiagaraDataInterfaceParametersCS *local_a8;
  longlong local_98;
  FGrid3DCollectionRWInstanceData_RenderThread *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong local_80;
  FGrid3DCollectionRWInstanceData_RenderThread *local_78;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar7 = param_1->DataInterfaceProxy;
  uVar19 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar20 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                    *)(pFVar7 + 1),uVar19);
  local_90 = pFVar20;
  local_78 = pFVar20;
  if ((pFVar20 == (FGrid3DCollectionRWInstanceData_RenderThread *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ProxyData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                          ,0xad6,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar7 = pFVar20->OtherProxy;
  pFVar8 = param_1->GraphBuilder;
  pFVar21 = pFVar20;
  if (pFVar7 != (FNiagaraDataInterfaceProxy *)0x0) {
    uVar19 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
    pFVar21 = TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
              ::Find((TMapBase<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FGrid3DCollectionRWInstanceData_RenderThread,0>_>
                      *)(pFVar7 + 1),uVar19);
    if ((pFVar21 == (FGrid3DCollectionRWInstanceData_RenderThread *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ProxyData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                            ,0xade,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if ((param_1->ShaderStorage == (FNiagaraDataInterfaceParametersCS *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderStorage != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1f1,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar35 = param_1->ShaderStorage;
  uVar33 = 0;
  uVar31 = 0;
  local_a8 = pFVar35;
  if (((pFVar20->AttributeIndices).ArrayNum == 0) && (0 < *(int *)(pFVar35 + 8))) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&pFVar20->AttributeIndices,*(int *)(pFVar35 + 8) + 3U & 0xfffffffc,Default);
    iVar27 = *(int *)(pFVar35 + 8);
    if (0 < iVar27) {
      local_98 = 0;
      local_res18 = 0;
      uVar34 = uVar33;
      do {
        lVar23 = local_98;
        uVar30 = (uint)uVar34;
        uVar36 = ~uVar30 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar30 < iVar27) {
          uVar15 = uVar36;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar22 = *(FNiagaraDataInterfaceParametersCS **)pFVar35;
        if (((ulonglong)pFVar22 & 1) != 0) {
          pFVar22 = pFVar35 + ((longlong)pFVar22 >> 0x18);
        }
        lVar28 = *(longlong *)(pFVar22 + local_res18);
        pFVar9 = (pFVar21->Vars).AllocatorInstance.Data;
        local_88 = (undefined4)lVar28;
        uStack_84 = (undefined4)((ulonglong)lVar28 >> 0x20);
        for (pFVar32 = pFVar9; pFVar32 != pFVar9 + (longlong)(pFVar21->Vars).ArrayNum * 8;
            pFVar32 = pFVar32 + 8) {
          if (*(longlong *)pFVar32 == lVar28) {
            uVar15 = (uint)((longlong)pFVar32 - (longlong)pFVar9 >> 3);
            goto LAB_14918d367;
          }
        }
        uVar15 = 0xffffffff;
LAB_14918d367:
        if ((*(int *)(pFVar35 + 8) != *(int *)(pFVar35 + 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderStorage.AttributeNames.Num() == ShaderStorage.AttributeChannelCount.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                ,0xaea,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (((pFVar21->Offsets).ArrayNum != (pFVar21->VarComponents).ArrayNum) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProxyData->Offsets.Num() == ProxyData->VarComponents.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                ,0xaeb,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (((pFVar21->Offsets).ArrayNum != (pFVar21->Vars).ArrayNum) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProxyData->Offsets.Num() == ProxyData->Vars.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                                ,0xaec,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (((int)uVar15 < 0) || ((pFVar21->Offsets).ArrayNum <= (int)uVar15)) {
LAB_14918d5a8:
          pFVar20 = local_90;
          uVar15 = uVar31;
          if ((int)uVar30 < (local_90->AttributeIndices).ArrayNum) {
            uVar15 = uVar36;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)((pFVar20->AttributeIndices).AllocatorInstance.Data + lVar23) = 0xffffffff;
        }
        else {
          uVar16 = 0;
          if ((int)uVar30 < *(int *)(pFVar35 + 0x18)) {
            uVar16 = uVar36;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar22 = *(FNiagaraDataInterfaceParametersCS **)(pFVar35 + 0x10);
          if (((ulonglong)pFVar22 & 1) != 0) {
            pFVar22 = pFVar35 + ((longlong)pFVar22 >> 0x18) + 0x10;
          }
          uVar16 = uVar31;
          if ((int)uVar15 < (pFVar21->VarComponents).ArrayNum) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar28 = (longlong)(int)uVar15;
          pFVar35 = local_a8;
          lVar23 = local_98;
          local_80 = lVar28;
          if (*(int *)(pFVar22 + local_98) !=
              *(int *)((pFVar21->VarComponents).AllocatorInstance.Data + lVar28 * 4))
          goto LAB_14918d5a8;
          uVar16 = uVar31;
          if ((int)uVar15 < (pFVar21->Offsets).ArrayNum) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar20 = local_90;
          uVar4 = *(undefined4 *)((pFVar21->Offsets).AllocatorInstance.Data + lVar28 * 4);
          uVar15 = uVar31;
          if ((int)uVar30 < (local_90->AttributeIndices).ArrayNum) {
            uVar15 = uVar36;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)((pFVar20->AttributeIndices).AllocatorInstance.Data + local_98) = uVar4;
          pFVar35 = local_a8;
          lVar23 = local_98;
        }
        local_98 = lVar23 + 4;
        iVar27 = *(int *)(pFVar35 + 8);
        local_res18 = local_res18 + 8;
        uVar34 = (ulonglong)(uVar30 + 1);
      } while ((int)(uVar30 + 1) < iVar27);
    }
  }
  if ((pFVar21->PerAttributeData).NumBytes == 0) {
    local_c8 = (FResourceArrayUploadInterface)&___7__TResourceArray_U__TVector4_M_Math_UE___0A___6B_
    ;
    local_c0.Packed = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b0 = 0;
    UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,0x10,pFVar21->TotalNumAttributes * 2 + 1,(ForAnyElementType *)&local_c0.Frozen,
               (int *)local_b8,(int *)(local_b8 + 1));
    iVar27 = pFVar21->TotalNumAttributes;
    uVar34 = uVar33;
    if (0 < iVar27) {
      do {
        iVar27 = (pFVar21->NumTiles).field0_0x0._s_0.X;
        uVar30 = (uint)uVar33;
        iVar18 = (pFVar21->NumCells).field0_0x0._s_0.X;
        iVar17 = (int)uVar30 / (iVar27 * (pFVar21->NumTiles).field0_0x0._s_0.Y);
        iVar37 = (int)((longlong)
                       ((ulonglong)(uint)((int)((longlong)(int)uVar30 / (longlong)iVar27) >> 0x1f)
                        << 0x20 | (longlong)(int)uVar30 / (longlong)iVar27 & 0xffffffffU) %
                      (longlong)(pFVar21->NumTiles).field0_0x0._s_0.Y);
        iVar5 = (pFVar21->NumCells).field0_0x0._s_0.Y;
        iVar6 = (pFVar21->NumCells).field0_0x0._s_0.Z;
        uVar15 = uVar31;
        if ((int)uVar30 < (int)local_b8[0]) {
          uVar15 = ~uVar30 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TVar29 = local_c0;
        if ((local_c0.Packed & 1) != 0) {
          TVar29.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_c0 + ((longlong)local_c0.Packed >> 0x18));
        }
        *(float *)(TVar29.UnfrozenPtr + uVar34) = (float)(((int)uVar30 % iVar27) * iVar18);
        *(float *)(TVar29.UnfrozenPtr + uVar34 + 4) = (float)(iVar37 * iVar5);
        *(float *)(TVar29.UnfrozenPtr + uVar34 + 8) = (float)(iVar17 * iVar6);
        *(undefined4 *)(TVar29.UnfrozenPtr + uVar34 + 0xc) = 0;
        iVar18 = (pFVar21->NumTiles).field0_0x0._s_0.X;
        uVar36 = pFVar21->TotalNumAttributes + uVar30;
        uVar15 = uVar31;
        if ((int)uVar36 < (int)local_b8[0]) {
          uVar15 = ~uVar36 >> 0x1f;
        }
        iVar5 = (pFVar21->NumTiles).field0_0x0._s_0.Y;
        iVar6 = (pFVar21->NumTiles).field0_0x0._s_0.Z;
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        TVar29 = local_c0;
        if ((local_c0.Packed & 1) != 0) {
          TVar29.UnfrozenPtr =
               (FScriptContainerElement *)
               ((longlong)&local_c0 + ((longlong)local_c0.Packed >> 0x18));
        }
        lVar23 = (longlong)(int)uVar36;
        uVar33 = (ulonglong)(uVar30 + 1);
        *(float *)(TVar29.UnfrozenPtr + lVar23 * 0x10) =
             (float)((int)uVar30 % iVar27) / (float)iVar18;
        *(float *)(TVar29.Packed + 4 + lVar23 * 0x10) = (float)iVar37 / (float)iVar5;
        *(float *)(TVar29.Packed + 8 + lVar23 * 0x10) = (float)iVar17 / (float)iVar6;
        *(undefined4 *)(TVar29.Packed + 0xc + lVar23 * 0x10) = 0;
        iVar27 = pFVar21->TotalNumAttributes;
        uVar34 = uVar34 + 0x10;
      } while ((int)(uVar30 + 1) < iVar27);
    }
    uVar13 = _UNK_151d9b518;
    uVar1 = ___xmm_477fff00477fff00477fff00477fff00;
    uVar15 = iVar27 * 2;
    if ((int)uVar15 < (int)local_b8[0]) {
      uVar31 = ~uVar15 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    TVar29 = local_c0;
    if ((local_c0.Packed & 1) != 0) {
      TVar29.UnfrozenPtr =
           (FScriptContainerElement *)((longlong)&local_c0 + ((longlong)local_c0.Packed >> 0x18));
    }
    *(undefined8 *)(TVar29.UnfrozenPtr + (longlong)(int)uVar15 * 0x10) = uVar1;
    *(undefined8 *)(TVar29.UnfrozenPtr + (longlong)(int)uVar15 * 0x10 + 8) = uVar13;
    FReadBuffer::Initialize
              (&pFVar21->PerAttributeData,(FRHICommandListBase *)pFVar8->_padding_,
               L"Grid3D::PerAttributeData",0x10,local_b8[0],PF_A32B32G32R32F,Static,&local_c8);
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_c0.Frozen);
    local_c8 = (FResourceArrayUploadInterface)&___7FResourceArrayUploadInterface__6B_;
  }
  uVar31 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  fVar40 = __real_3f000000 / (float)(pFVar21->NumCells).field0_0x0._s_0.X;
  fVar39 = __real_3f000000 / (float)(pFVar21->NumCells).field0_0x0._s_0.Z;
  fVar38 = __real_3f000000 / (float)(pFVar21->NumCells).field0_0x0._s_0.Y;
  pFVar24 = TShaderParameterStructTypeInfo<FNDIGrid3DShaderParameters>::GetStructMetadata();
  puVar10 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar24->Size + uVar31;
  *(int *)(puVar10 + uVar31) = pFVar21->TotalNumAttributes;
  *(int *)(puVar10 + (ulonglong)uVar31 + 4) = pFVar21->TotalNumNamedAttributes;
  fVar12 = __real_3f800000;
  iVar27 = (pFVar21->NumCells).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(pFVar21->NumCells).field0_0x0;
  local_a8._0_4_ = (int)uVar1;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x10) = __real_3f800000 / (float)(int)local_a8;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x14) = fVar12 / (float)(int)((ulonglong)uVar1 >> 0x20);
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x18) = fVar12 / (float)iVar27;
  *(undefined8 *)(puVar10 + (ulonglong)uVar31 + 0x20) =
       *(undefined8 *)&(pFVar21->NumCells).field0_0x0;
  *(int *)(puVar10 + (ulonglong)uVar31 + 0x28) = (pFVar21->NumCells).field0_0x0._s_0.Z;
  dVar2 = (pFVar21->CellSize).field0_0x0._s_0.Y;
  dVar3 = (pFVar21->CellSize).field0_0x0._s_0.Z;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x30) = (float)(pFVar21->CellSize).field0_0x0._s_0.X;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x34) = (float)dVar2;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x38) = (float)dVar3;
  *(undefined8 *)(puVar10 + (ulonglong)uVar31 + 0x40) =
       *(undefined8 *)&(pFVar21->NumTiles).field0_0x0;
  *(int *)(puVar10 + (ulonglong)uVar31 + 0x48) = (pFVar21->NumTiles).field0_0x0._s_0.Z;
  local_a8 = *(FNiagaraDataInterfaceParametersCS **)&(pFVar21->NumTiles).field0_0x0;
  iVar27 = (pFVar21->NumTiles).field0_0x0._s_0.Z;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x50) = fVar12 / (float)(int)local_a8;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x54) =
       fVar12 / (float)(int)((ulonglong)local_a8 >> 0x20);
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x58) = fVar12 / (float)iVar27;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x60) = fVar40;
  *(float *)(puVar10 + (ulonglong)uVar31 + 100) = fVar38;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x68) = fVar39;
  fVar38 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y - fVar38;
  fVar39 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z - fVar39;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x70) =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X - fVar40;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x74) = fVar38;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x78) = fVar39;
  dVar2 = (pFVar21->WorldBBoxSize).field0_0x0._s_0.Y;
  dVar3 = (pFVar21->WorldBBoxSize).field0_0x0._s_0.Z;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x80) = (float)(pFVar21->WorldBBoxSize).field0_0x0._s_0.X
  ;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x84) = (float)dVar2;
  *(float *)(puVar10 + (ulonglong)uVar31 + 0x88) = (float)dVar3;
  bVar14 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar10 + (ulonglong)uVar31 + 0x90);
  if (bVar14) {
    if (pFVar21->CurrentData == (FNiagaraPooledRWTexture *)0x0) {
      pFVar25 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                          (param_1->ComputeDispatchInterface,pFVar8,Texture3D);
    }
    else {
      pFVar25 = FNiagaraPooledRWTexture::GetOrCreateSRV(pFVar21->CurrentData,pFVar8);
    }
    *(FRDGTextureSRV **)(puVar10 + (ulonglong)uVar31 + 0x90) = pFVar25;
  }
  *(FRHISamplerState **)(puVar10 + (ulonglong)uVar31 + 0x98) =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  bVar14 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar10 + (ulonglong)uVar31 + 0xa0);
  if (bVar14) {
    bVar14 = FNiagaraDataInterfaceSetShaderParametersContext::IsOutputStage(param_1);
    if ((bVar14) && (pFVar21->DestinationData != (FNiagaraPooledRWTexture *)0x0)) {
      pFVar26 = FNiagaraPooledRWTexture::GetOrCreateUAV(pFVar21->DestinationData,pFVar8);
    }
    else {
      pFVar26 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,pFVar8,PF_R32_FLOAT,Texture3D);
    }
    *(FRDGTextureUAV **)(puVar10 + (ulonglong)uVar31 + 0xa0) = pFVar26;
  }
  pFVar20 = local_78;
  *(FRHIShaderResourceView **)(puVar10 + (ulonglong)uVar31 + 0xa8) =
       (pFVar21->PerAttributeData).SRV.Reference;
  if (0 < (local_78->AttributeIndices).ArrayNum) {
    iVar18 = (int)(*(int *)(pFVar35 + 8) + 3 + (*(int *)(pFVar35 + 8) + 3 >> 0x1f & 3U)) >> 2;
    iVar27 = 1;
    if (1 < iVar18) {
      iVar27 = iVar18;
    }
    uVar31 = param_1->ParametersOffset + 0xf & 0xfffffff0;
    puVar10 = param_1->BaseParameters;
    param_1->ParametersOffset = iVar27 * 0x10 + uVar31;
    if ((iVar27 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((ulonglong)(uint)((pFVar20->AttributeIndices).ArrayNum << 2) != (longlong)iVar27 * 0x10) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OriginalProxyData->AttributeIndices.Num() * OriginalProxyData->AttributeIndices.GetTypeSize() == AttributeIndices.Num() * AttributeIndices.GetTypeSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceGrid3DCollection.cpp"
                            ,0xb3f,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    memcpy(puVar10 + uVar31,(pFVar20->AttributeIndices).AllocatorInstance.Data,
           (longlong)iVar27 * 0x10);
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection @ 14918eed0

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VMGetAttributeIndex @ 149191240

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMGetAttributeIndex
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1,
          FName *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  fVar1 = -NAN;
  iVar3 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (local_18.Ptr != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
    fVar1 = (float)FGrid3DCollectionRWInstanceData_GameThread::FindAttributeIndexByName
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

// VMGetCellSize @ 1491913b0

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMGetCellSize
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->CellSize).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->CellSize).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->CellSize).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMGetNumCells @ 149191590

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMGetNumCells
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  FGrid3DCollectionRWInstanceData_GameThread *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar7 = 0;
  local_40[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar5 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar6 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pFVar1 = (local_18.Ptr)->OtherInstanceData;
  fVar8 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.X;
  fVar9 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Y;
  fVar10 = (float)((local_18.Ptr)->NumCells).field0_0x0._s_0.Z;
  if (pFVar1 != (FGrid3DCollectionRWInstanceData_GameThread *)0x0) {
    fVar8 = (float)(pFVar1->NumCells).field0_0x0._s_0.X;
    fVar9 = (float)(pFVar1->NumCells).field0_0x0._s_0.Y;
    fVar10 = (float)(pFVar1->NumCells).field0_0x0._s_0.Z;
  }
  if (0 < param_1->NumInstances) {
    pfVar4 = pfVar4 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar6;
    pfVar2 = pfVar2 + iVar5;
    do {
      iVar7 = iVar7 + 1;
      *pfVar2 = fVar8;
      *pfVar3 = fVar9;
      *pfVar4 = fVar10;
      pfVar4 = pfVar4 + local_20[0];
      pfVar3 = pfVar3 + local_30[0];
      pfVar2 = pfVar2 + local_40[0];
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// VMGetWorldBBoxSize @ 149191830

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMGetWorldBBoxSize
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->WorldBBoxSize).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMSetNumCells @ 149191b80

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMSetNumCells
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  longlong lVar11;
  float fVar12;
  longlong lVar13;
  float fVar14;
  longlong lVar15;
  int iVar16;
  float *local_res10;
  int local_68;
  int local_60 [2];
  int local_58 [2];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_50;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_50,param_1);
  local_58[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  lVar15 = (longlong)local_58[0];
  local_58[0] = 0;
  pfVar7 = pfVar7 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  lVar13 = (longlong)local_58[0];
  local_58[0] = 0;
  pfVar8 = pfVar8 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  lVar11 = (longlong)local_58[0];
  local_60[0] = 0;
  local_res10 = local_res10 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  iVar16 = 0;
  iVar6 = param_1->NumInstances;
  pfVar9 = pfVar9 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar6) {
    do {
      fVar14 = *pfVar7;
      fVar12 = *pfVar8;
      fVar10 = *local_res10;
      if ((((local_50.Ptr == (FGrid3DCollectionRWInstanceData_GameThread *)0x0) || (iVar6 != 1)) ||
          (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (((int)this->_padding_ < 0 || (*(int *)((longlong)&this->_padding_ + 4) < 0)))) {
        *pfVar9 = 0.0;
      }
      else {
        *pfVar9 = -NAN;
        uVar1 = *(undefined8 *)&((local_50.Ptr)->NumCells).field0_0x0;
        fVar2 = (float)((local_50.Ptr)->NumCells).field0_0x0._s_0.Z;
        if ((int)fVar14 < 1) {
          fVar14 = 1.4013e-45;
        }
        ((local_50.Ptr)->NumCells).field0_0x0._s_0.X = (int)fVar14;
        if ((int)fVar12 < 1) {
          fVar12 = 1.4013e-45;
        }
        ((local_50.Ptr)->NumCells).field0_0x0._s_0.Y = (int)fVar12;
        if ((int)fVar10 < 1) {
          fVar10 = 1.4013e-45;
        }
        ((local_50.Ptr)->NumCells).field0_0x0._s_0.Z = (int)fVar10;
        if (fVar3 < (float)((uint)(GNiagaraGrid3DResolutionMultiplier - fVar4) & uVar5)) {
          iVar6 = (int)((float)((local_50.Ptr)->NumCells).field0_0x0._s_0.X *
                       GNiagaraGrid3DResolutionMultiplier);
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          ((local_50.Ptr)->NumCells).field0_0x0._s_0.X = iVar6;
          iVar6 = (int)((float)((local_50.Ptr)->NumCells).field0_0x0._s_0.Y *
                       GNiagaraGrid3DResolutionMultiplier);
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          ((local_50.Ptr)->NumCells).field0_0x0._s_0.Y = iVar6;
          fVar10 = (float)(int)((float)((local_50.Ptr)->NumCells).field0_0x0._s_0.Z *
                               GNiagaraGrid3DResolutionMultiplier);
          if ((int)fVar10 < 1) {
            fVar10 = 1.4013e-45;
          }
          ((local_50.Ptr)->NumCells).field0_0x0._s_0.Z = (int)fVar10;
        }
        local_68 = (int)uVar1;
        if (((local_68 == ((local_50.Ptr)->NumCells).field0_0x0._s_0.X) &&
            ((int)((ulonglong)uVar1 >> 0x20) == ((local_50.Ptr)->NumCells).field0_0x0._s_0.Y)) &&
           (fVar2 == fVar10)) {
          (local_50.Ptr)->NeedsRealloc = false;
        }
        else {
          (local_50.Ptr)->NeedsRealloc = true;
        }
      }
      pfVar9 = pfVar9 + local_60[0];
      iVar6 = param_1->NumInstances;
      iVar16 = iVar16 + 1;
      pfVar7 = pfVar7 + lVar15;
      pfVar8 = pfVar8 + lVar13;
      local_res10 = local_res10 + lVar11;
    } while (iVar16 < iVar6);
  }
  return;
}

// VMUnitToFloatIndex @ 149191fa0

void __thiscall
UNiagaraDataInterfaceGrid3DCollection::VMUnitToFloatIndex
          (UNiagaraDataInterfaceGrid3DCollection *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  float *local_78;
  float *local_70;
  int local_60 [2];
  int local_58 [4];
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread> local_48;
  
  VectorVM::FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>::
  FUserPtrHandler<FGrid3DCollectionRWInstanceData_GameThread>(&local_48,param_1);
  iVar7 = 0;
  local_58[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar4 = local_58[0];
  lVar10 = (longlong)local_58[0];
  local_58[0] = 0;
  pfVar6 = pfVar6 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar4 = local_58[0];
  lVar9 = (longlong)local_58[0];
  local_58[0] = 0;
  local_res10 = local_res10 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_res18 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  lVar8 = (longlong)local_58[0];
  local_60[0] = 0;
  local_res18 = local_res18 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_res20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar4 = local_60[0];
  lVar11 = (longlong)local_60[0];
  local_60[0] = 0;
  local_res20 = local_res20 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar4 = local_60[0];
  lVar12 = (longlong)local_60[0];
  local_60[0] = 0;
  local_78 = local_78 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  local_70 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  fVar5 = __real_3f000000;
  local_70 = local_70 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      uVar3 = *(undefined8 *)&((local_48.Ptr)->NumCells).field0_0x0;
      iVar4 = ((local_48.Ptr)->NumCells).field0_0x0._s_0.Z;
      iVar7 = iVar7 + 1;
      fVar1 = *local_res18;
      fVar2 = *local_res10;
      *local_res20 = (float)(int)uVar3 * *pfVar6 - fVar5;
      *local_78 = (float)(int)((ulonglong)uVar3 >> 0x20) * fVar2 - fVar5;
      local_78 = local_78 + lVar12;
      *local_70 = (float)iVar4 * fVar1 - fVar5;
      local_70 = local_70 + local_60[0];
      pfVar6 = pfVar6 + lVar10;
      local_res10 = local_res10 + lVar9;
      local_res18 = local_res18 + lVar8;
      local_res20 = local_res20 + lVar11;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// execFillRawVolumeTexture @ 149192a80

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined8 local_res20;
  undefined8 local_48 [3];
  
  local_48[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
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
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  local_res18[1] = '\0';
  local_res18[2] = '\0';
  local_res18[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_res10;
  if (puVar3 != (uchar *)0x0) {
    puVar5 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  puVar3 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x468))
                    (param_1,local_48[0],local_res20,puVar4,puVar5,puVar3);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execFillVolumeTexture @ 149192db0

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture
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

// execGetRawTextureSize @ 149193000

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  uchar local_res10 [16];
  uchar local_res20 [8];
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res8;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
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
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x470))(param_1,local_38[0],puVar3,puVar4,puVar2);
  return;
}

// execGetTextureSize @ 1491932c0

void __cdecl
UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res8 [8];
  uchar local_res10 [16];
  uchar local_res20 [8];
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
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
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res8;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
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
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x478))(param_1,local_38[0],puVar3,puVar4,puVar2);
  return;
}

