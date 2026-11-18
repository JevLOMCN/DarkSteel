// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 54

// StaticClass @ 148e8aa30

UClass * __cdecl UNiagaraDataInterfaceDynamicMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDynamicMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDynamicMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMesh>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton;
}

// UNiagaraDataInterfaceDynamicMesh @ 148ea4b70

UNiagaraDataInterfaceDynamicMesh * __thiscall
UNiagaraDataInterfaceDynamicMesh::UNiagaraDataInterfaceDynamicMesh
          (UNiagaraDataInterfaceDynamicMesh *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this->NumVertices = 0;
  this->NumTexCoords = 0;
  this->bHasColors = false;
  this->bHasTangentBasis = false;
  this->bClearTrianglesPerFrame = false;
  (this->DefaultBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->DefaultBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->DefaultBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->DefaultBounds).IsValid = '\x01';
  return this;
}

// UNiagaraDataInterfaceDynamicMesh @ 148ea4c10

UNiagaraDataInterfaceDynamicMesh * __thiscall
UNiagaraDataInterfaceDynamicMesh::UNiagaraDataInterfaceDynamicMesh
          (UNiagaraDataInterfaceDynamicMesh *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  this->NumVertices = 0;
  this->NumTexCoords = 0;
  this->bHasColors = false;
  this->bHasTangentBasis = false;
  this->bClearTrianglesPerFrame = false;
  (this->DefaultBounds).Min.field0_0x0._s_0.X = -100.0;
  (this->DefaultBounds).Min.field0_0x0._s_0.Y = -100.0;
  (this->DefaultBounds).Min.field0_0x0._s_0.Z = -100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.X = 100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.Y = 100.0;
  (this->DefaultBounds).Max.field0_0x0._s_0.Z = 100.0;
  (this->DefaultBounds).IsValid = '\x01';
  puVar1 = ::operator_new(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x13] = 0;
    puVar1[0x15] = 0;
    *puVar1 = &___7FNDIProxy_NDIDynamicMeshLocal__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x80;
    *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
    puVar1[0x14] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~<lambda_2> @ 148ea58b0

void __thiscall
`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>::~<lambda_2>(void *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((longlong)pvVar1 + 0xa0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar1 + 0xa0));
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)pvVar1 + 0x88));
    *(undefined ***)((longlong)pvVar1 + 0x80) = &___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)pvVar1 + 0x68));
    *(undefined ***)((longlong)pvVar1 + 0x60) = &___7FResourceArrayUploadInterface__6B_;
    ::operator_delete(pvVar1,0xb0);
  }
  return;
}

// ~UNiagaraDataInterfaceDynamicMesh @ 148ea6c40

void __thiscall
UNiagaraDataInterfaceDynamicMesh::~UNiagaraDataInterfaceDynamicMesh
          (UNiagaraDataInterfaceDynamicMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  DestructItems<FNiagaraDynamicMeshMaterial,int>
            ((FNiagaraDynamicMeshMaterial *)(this->Materials).AllocatorInstance.Data,
             (this->Materials).ArrayNum);
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  this->_padding_ = (longlong)&___7INiagaraRenderableMeshInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148ea84a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined4 *puVar1;
  FNiagaraGpuReadbackManager *this_00;
  longlong lVar2;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNDIInstanceData_RenderThread *pFVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStackY_938 [32];
  uchar *local_908;
  undefined8 local_900;
  uchar *local_8f8;
  undefined8 local_8f0;
  void *local_8e8;
  undefined8 local_8e0;
  FRDGEventName local_8d8;
  FRDGBuffer **local_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  uchar *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  uchar *local_898;
  int iStack_890;
  undefined4 uStack_88c;
  TArrayView<FRDGBuffer_*_const,int> local_888;
  TArrayView<unsigned_char_const_,int> local_878;
  TArrayView<unsigned_char_const_,int> local_868;
  code *local_858 [5];
  undefined8 *local_830;
  FRDGBuilder local_828;
  FRDGBuffer *local_58;
  FRDGBuffer *local_50;
  FRDGBuffer *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_938;
  pFVar7 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x60),*(ulong64 *)((longlong)this + 8));
  if ((((((pFVar7 != (FNDIInstanceData_RenderThread *)0x0) &&
         (*(uint *)((longlong)this + 0x18) == pFVar7->NumTriangles)) &&
        (*(uint *)((longlong)this + 0x1c) == pFVar7->NumVertices)) &&
       ((*(uint *)((longlong)this + 0x20) == pFVar7->NumTexCoords &&
        (*(uint *)((longlong)this + 0x60) == pFVar7->VertexBufferSize)))) &&
      ((*(uint *)((longlong)this + 100) == pFVar7->PositionOffset &&
       ((*(uint *)((longlong)this + 0x68) == pFVar7->TangentBasisOffset &&
        (*(uint *)((longlong)this + 0x6c) == pFVar7->TexCoordOffset)))))) &&
     ((*(uint *)((longlong)this + 0x70) == pFVar7->ColorOffset &&
      ((((*(uint *)((longlong)this + 0xa0) == pFVar7->NumSections &&
         ((pFVar7->SectionPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)) &&
        ((pFVar7->IndexPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)) &&
       ((pFVar7->VertexPooledBuffer).Reference != (FRDGPooledBuffer *)0x0)))))) {
    local_8d8.EventFormat = L"";
    uVar10 = 0;
    local_8d8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8d8.FormattedEventName.Data.ArrayNum = 0;
    local_8d8.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder(&local_828,param_1,&local_8d8,None,GMaxRHIShaderPlatform);
    local_58 = FRDGBuilder::RegisterExternalBuffer(&local_828,&pFVar7->SectionPooledBuffer,None);
    local_50 = FRDGBuilder::RegisterExternalBuffer(&local_828,&pFVar7->IndexPooledBuffer,None);
    local_48 = FRDGBuilder::RegisterExternalBuffer(&local_828,&pFVar7->VertexPooledBuffer,None);
    local_8e8 = (void *)0x0;
    local_8e0 = 0;
    local_8f8 = (uchar *)0x0;
    local_8f0 = 0;
    local_908 = (uchar *)0x0;
    local_900 = 0;
    this_00 = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)this + 0xb0) + 0x38);
    local_858[0] = (code *)0x0;
    local_830 = FMemory::Malloc(0x20,8);
    *local_830 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::`16'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
                  ::_vftable_;
    local_830[1] = &local_8e8;
    local_830[2] = &local_8f8;
    local_830[3] = &local_908;
    if (local_830 + 1 != (longlong *)0x0) {
      local_858[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<``UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>::operator()'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                     ::Call;
    }
    local_8b8 = &local_58;
    uStack_8b0 = 3;
    local_888._12_4_ = uStack_8ac;
    local_888.ArrayNum = 3;
    local_888.DataPtr = local_8b8;
    FNiagaraGpuReadbackManager::EnqueueReadbacks
              (this_00,&local_828,&local_888,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_858);
    FRDGBuilder::Execute(&local_828);
    FNiagaraGpuReadbackManager::WaitCompletion(this_00,param_1);
    iVar6 = *(int *)((longlong)this + 0xa0);
    if (0 < iVar6) {
      uVar8 = 1;
      lVar12 = 4;
      uVar11 = uVar10;
      do {
        uVar9 = (uint)uVar10;
        uVar5 = 0;
        if ((int)uVar9 < iVar6) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((longlong)this + 0x98);
        uVar5 = 0;
        if ((int)uVar8 < (int)local_8e0) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 2;
        puVar1 = (undefined4 *)(lVar12 + (longlong)local_8e8);
        lVar12 = lVar12 + 8;
        *(undefined4 *)(lVar2 + 8 + uVar11) = *puVar1;
        uVar11 = uVar11 + 0x18;
        iVar6 = *(int *)((longlong)this + 0xa0);
      } while ((int)(uVar9 + 1) < iVar6);
    }
    iVar6 = (int)local_900;
    this_01 = *(UNiagaraDataInterfaceDynamicMeshSimCacheData **)((longlong)this + 0x10);
    local_8a8 = local_908;
    if (((int)local_900 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iStack_8a0 = iVar6;
    iVar6 = (int)local_8f0;
    local_898 = local_8f8;
    if (((int)local_8f0 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_878._12_4_ = uStack_89c;
    local_878.ArrayNum = iStack_8a0;
    iStack_890 = iVar6;
    local_868._12_4_ = uStack_88c;
    local_868.ArrayNum = iVar6;
    local_868.DataPtr = local_898;
    local_878.DataPtr = local_8a8;
    iVar6 = UNiagaraDataInterfaceDynamicMeshSimCacheData::FindOrCreateMesh
                      (this_01,(FNDIDynamicMeshSimCacheFrame *)((longlong)this + 0x18),&local_868,
                       &local_878);
    lVar12 = *(longlong *)((longlong)this + 0x10);
    uVar8 = *(uint *)((longlong)this + 0xa8);
    uVar5 = 0;
    if ((int)uVar8 < *(int *)(lVar12 + 0x50)) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)(*(longlong *)(lVar12 + 0x48) + (longlong)(int)uVar8 * 4) = iVar6;
    if (local_908 != (uchar *)0x0) {
      FMemory::Free(local_908);
    }
    if (local_8f8 != (uchar *)0x0) {
      FMemory::Free(local_8f8);
    }
    if (local_8e8 != (void *)0x0) {
      FMemory::Free(local_8e8);
    }
    FRDGBuilder::~FRDGBuilder(&local_828);
  }
  return;
}

// BuildShaderParameters @ 148eacab0

void __thiscall
UNiagaraDataInterfaceDynamicMesh::BuildShaderParameters
          (UNiagaraDataInterfaceDynamicMesh *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIDynamicMeshLocal::FShaderParameters>::GetStructMetadata
                     ();
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
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x40;
  return;
}

// CanExecuteOnTarget @ 148eadcf0

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::CanExecuteOnTarget
          (UNiagaraDataInterfaceDynamicMesh *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eaf270

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::CopyToInternal
          (UNiagaraDataInterfaceDynamicMesh *this,UNiagaraDataInterface *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FNiagaraDynamicMeshMaterial *pFVar5;
  double dVar6;
  bool bVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_28;
  FString local_18;
  
  bVar7 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar7) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar8 = StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar8->_padding_)) {
      plVar1 = &param_1[1]._padding_;
      if ((TArray<FNiagaraDynamicMeshSection,TSizedDefaultAllocator<32>_> *)plVar1 !=
          &this->Sections) {
        iVar3 = (this->Sections).ArrayNum;
        piVar2 = (int *)((longlong)&param_1[1]._padding_ + 4);
        _Src = (this->Sections).AllocatorInstance.Data;
        iVar4 = *piVar2;
        *(int *)&param_1[1]._padding_ = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy((void *)*plVar1,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      plVar1 = &param_1[1]._padding_;
      if ((TArray<FNiagaraDynamicMeshMaterial,TSizedDefaultAllocator<32>_> *)plVar1 !=
          &this->Materials) {
        DestructItems<FNiagaraDynamicMeshMaterial,int>
                  ((FNiagaraDynamicMeshMaterial *)*plVar1,*(int *)&param_1[1].Proxy.Ptr);
        iVar3 = (this->Materials).ArrayNum;
        piVar2 = (int *)((longlong)&param_1[1].Proxy.Ptr + 4);
        pFVar5 = (FNiagaraDynamicMeshMaterial *)(this->Materials).AllocatorInstance.Data;
        iVar4 = *piVar2;
        *(int *)&param_1[1].Proxy.Ptr = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
          ConstructItems<FNiagaraDynamicMeshMaterial,FNiagaraDynamicMeshMaterial,int>
                    ((void *)*plVar1,pFVar5,iVar3);
        }
      }
      *(int *)&param_1[1].field_0x30 = this->NumVertices;
      *(int *)&param_1[1].field_0x34 = this->NumTexCoords;
      *(bool *)&param_1[2]._padding_ = this->bHasColors;
      *(bool *)((longlong)&param_1[2]._padding_ + 1) = this->bHasTangentBasis;
      *(bool *)((longlong)&param_1[2]._padding_ + 2) = this->bClearTrianglesPerFrame;
      dVar6 = (this->DefaultBounds).Min.field0_0x0._s_0.Y;
      param_1[2]._padding_ = (longlong)(this->DefaultBounds).Min.field0_0x0._s_0.X;
      param_1[2]._padding_ = (longlong)dVar6;
      dVar6 = (this->DefaultBounds).Max.field0_0x0._s_0.X;
      param_1[2]._padding_ = (longlong)(this->DefaultBounds).Min.field0_0x0._s_0.Z;
      param_1[2]._padding_ = (longlong)dVar6;
      dVar6 = (this->DefaultBounds).Max.field0_0x0._s_0.Z;
      param_1[2].Proxy.Ptr =
           (FNiagaraDataInterfaceProxy *)(this->DefaultBounds).Max.field0_0x0._s_0.Y;
      *(double *)&param_1[2].field_0x30 = dVar6;
      param_1[3]._padding_ = *(longlong *)&(this->DefaultBounds).IsValid;
      return true;
    }
    pFVar9 = GetTypeName<UNiagaraDataInterfaceDynamicMesh>(&local_28);
    pwVar11 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar10);
  }
  pFVar9 = GetTypeName<UNiagaraDataInterfaceDynamicMesh>(&local_28);
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar11);
}

// DestroyPerInstanceData @ 148eb4410

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
UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData
          (UNiagaraDataInterfaceDynamicMesh *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  ulong64 local_b8 [2];
  code *local_a8 [2];
  undefined **local_98;
  longlong lStack_90;
  ulong64 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
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
  local_b8[0] = param_2->ID;
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_b8[0] >> 0x20) * 0x17 + (int)local_b8[0],local_b8);
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
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88 = param_2->ID;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  lStack_90 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData_::__l2::TSTR_FNDIDynamicMesh_RemoveProxy1139>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    lStack_60 = lStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceDynamicMesh::DestroyPerInstanceData'::__l2::TSTR_FNDIDynamicMesh_RemoveProxy1139>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar4);
    uVar6 = (ulonglong)local_48;
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
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar5 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar5 = local_80;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0xb0));
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  DestructItems<NDIDynamicMeshLocal::FNDIInstanceMaterial,int>
            (*(FNDIInstanceMaterial **)((longlong)param_1 + 0x80),*(int *)((longlong)param_1 + 0x88)
            );
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  return;
}

// Equals @ 148eb60c0

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::Equals
          (UNiagaraDataInterfaceDynamicMesh *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataInterfaceDynamicMesh_const_>(&local_28);
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
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
    if (((((bVar2) && (iVar1 = (int)param_1[1]._padding_, iVar1 == (this->Sections).ArrayNum)) &&
         (bVar2 = CompareItems<FNiagaraDynamicMeshSection,int>
                            ((FNiagaraDynamicMeshSection *)param_1[1]._padding_,
                             (FNiagaraDynamicMeshSection *)(this->Sections).AllocatorInstance.Data,
                             iVar1), bVar2)) &&
        (((iVar1 = *(int *)&param_1[1].Proxy.Ptr, iVar1 == (this->Materials).ArrayNum &&
          (bVar2 = CompareItems<FNiagaraDynamicMeshMaterial,int>
                             ((FNiagaraDynamicMeshMaterial *)param_1[1]._padding_,
                              (FNiagaraDynamicMeshMaterial *)
                              (this->Materials).AllocatorInstance.Data,iVar1), bVar2)) &&
         ((*(int *)&param_1[1].field_0x30 == this->NumVertices &&
          ((*(int *)&param_1[1].field_0x34 == this->NumTexCoords &&
           ((bool)(char)param_1[2]._padding_ == this->bHasColors)))))))) &&
       (((bool)*(char *)((longlong)&param_1[2]._padding_ + 1) == this->bHasTangentBasis &&
        ((bool)*(char *)((longlong)&param_1[2]._padding_ + 2) == this->bClearTrianglesPerFrame)))) {
      if ((char)param_1[3]._padding_ == '\0') {
        if ((this->DefaultBounds).IsValid == '\0') {
          return true;
        }
      }
      else if ((((((this->DefaultBounds).IsValid != '\0') &&
                 ((this->DefaultBounds).Min.field0_0x0._s_0.X == (double)param_1[2]._padding_)) &&
                ((this->DefaultBounds).Min.field0_0x0._s_0.Y == (double)param_1[2]._padding_)) &&
               (((this->DefaultBounds).Min.field0_0x0._s_0.Z == (double)param_1[2]._padding_ &&
                ((this->DefaultBounds).Max.field0_0x0._s_0.X == (double)param_1[2]._padding_)))) &&
              (((this->DefaultBounds).Max.field0_0x0._s_0.Y == (double)param_1[2].Proxy.Ptr &&
               ((this->DefaultBounds).Max.field0_0x0._s_0.Z == *(double *)&param_1[2].field_0x30))))
      {
        return true;
      }
    }
    return false;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceDynamicMesh_const_>(&local_28);
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

// GetPrivateStaticClass @ 148ebf9e0

UClass * __cdecl UNiagaraDataInterfaceDynamicMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDynamicMesh",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDynamicMesh>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDynamicMesh>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.InnerSingleton;
}

// GetRenderableMesh @ 148ec00c0

TSharedPtr<INiagaraRenderableMesh,1> * __thiscall
UNiagaraDataInterfaceDynamicMesh::GetRenderableMesh
          (UNiagaraDataInterfaceDynamicMesh *this,
          TSharedPtr<INiagaraRenderableMesh,1> *__return_storage_ptr__,ulong64 param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedPtr<INiagaraRenderableMesh,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  INiagaraRenderableMesh *pIVar10;
  
  dVar3 = this[-1].DefaultBounds.Max.field0_0x0._s_0.Z;
  if (dVar3 == 0.0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedPtr<INiagaraRenderableMesh,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  pTVar8 = ::operator_new(0x38);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar10 = (INiagaraRenderableMesh *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNDIRenderableMesh_NDIDynamicMeshLocal___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = (longlong)&___7FNDIRenderableMesh_NDIDynamicMeshLocal__6B_;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    *(double *)&pTVar8[2].SharedReferenceCount = dVar3;
    pTVar8[3]._padding_ = param_1;
    if (dVar3 == 0.0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                         ,0x287,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedPtr<INiagaraRenderableMesh,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    pIVar10 = (INiagaraRenderableMesh *)(pTVar8 + 1);
    pTVar9 = pTVar8;
    if (pIVar10 == (INiagaraRenderableMesh *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedPtr<INiagaraRenderableMesh,1> *)(*pcVar5)();
        return pTVar7;
      }
      goto LAB_148ec0227;
    }
  }
  if (((*(longlong *)&pIVar10->field_0x8 == 0) || (*(longlong *)&pIVar10->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar10->field_0x10 + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(INiagaraRenderableMesh **)&pIVar10->field_0x8 = pIVar10;
    if (pTVar9 != *(TReferenceControllerBase<1> **)&pIVar10->field_0x10) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pIVar10->field_0x10;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar10->field_0x10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_148ec0227:
  __return_storage_ptr__->Object = pIVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 148ec13d0

void __thiscall
UNiagaraDataInterfaceDynamicMesh::GetUsedMaterials
          (UNiagaraDataInterfaceDynamicMesh *this,ulong64 param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  lVar2 = *(longlong *)((longlong)&this[-1].DefaultBounds.Max.field0_0x0 + 0x10);
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(lVar2 + 0x50);
    if (*(longlong *)(lVar2 + 0x50) == 0) {
      lVar8 = lVar2 + 0x48;
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar6 != -1) {
      while (lVar8 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x18,
            *(ulong64 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 0x18) != param_1) {
        iVar6 = *(int *)(lVar8 + 0x10);
        if (iVar6 == -1) {
          return;
        }
      }
      if ((lVar8 != 0) && (lVar2 = *(longlong *)(lVar8 + 8), lVar2 != 0)) {
        uVar10 = *(int *)(lVar2 + 0x88) + param_2->ArrayNum;
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        piVar1 = &param_2->ArrayMax;
        if (*piVar1 < (int)uVar10) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar10,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        }
        iVar6 = *(int *)(lVar2 + 0x88);
        puVar9 = *(undefined8 **)(lVar2 + 0x80);
        puVar11 = puVar9 + (longlong)iVar6 * 8;
        while( true ) {
          if (*(int *)(lVar2 + 0x88) != iVar6) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceMaterial_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (puVar9 == puVar11) break;
          local_28[0] = *puVar9;
          pFVar3 = (param_2->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,piVar1);
          }
          puVar9 = puVar9 + 8;
          param_2->ArrayNum = iVar7 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
        }
      }
    }
  }
  return;
}

// GetVMExternalFunction @ 148ec2a20

void __thiscall
UNiagaraDataInterfaceDynamicMesh::GetVMExternalFunction
          (UNiagaraDataInterfaceDynamicMesh *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
  *pTVar5;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)local_58,VMGetMeshProperties);
      StaticBindings[0]._0_4_ = NDIDynamicMeshLocal::GetMeshPropertiesName.ComparisonIndex.Value;
      StaticBindings[0]._4_4_ = NDIDynamicMeshLocal::GetMeshPropertiesName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMGetSectionCount;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[1]._0_4_ = NDIDynamicMeshLocal::GetSectionCountName.ComparisonIndex.Value;
      StaticBindings[1]._4_4_ = NDIDynamicMeshLocal::GetSectionCountName.Number;
      StaticBindings[1]._24_4_ = 0;
      StaticBindings[1]._8_8_ = 0;
      StaticBindings[1]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[1]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[1]._16_8_);
      }
      StaticBindings[1]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[1]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMGetSectionData;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[2]._0_4_ = NDIDynamicMeshLocal::GetSectionDataName.ComparisonIndex.Value;
      StaticBindings[2]._4_4_ = NDIDynamicMeshLocal::GetSectionDataName.Number;
      StaticBindings[2]._24_4_ = 0;
      StaticBindings[2]._8_8_ = 0;
      StaticBindings[2]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[2]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[2]._16_8_);
      }
      StaticBindings[2]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[2]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMGetLocalBounds;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[3]._0_4_ = NDIDynamicMeshLocal::GetLocalBoundsName.ComparisonIndex.Value;
      StaticBindings[3]._4_4_ = NDIDynamicMeshLocal::GetLocalBoundsName.Number;
      StaticBindings[3]._24_4_ = 0;
      StaticBindings[3]._8_8_ = 0;
      StaticBindings[3]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[3]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[3]._16_8_);
      }
      StaticBindings[3]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[3]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMSetMeshProperties;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[4]._0_4_ = NDIDynamicMeshLocal::SetMeshPropertiesName.ComparisonIndex.Value;
      StaticBindings[4]._4_4_ = NDIDynamicMeshLocal::SetMeshPropertiesName.Number;
      StaticBindings[4]._24_4_ = 0;
      StaticBindings[4]._8_8_ = 0;
      StaticBindings[4]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[4]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[4]._16_8_);
      }
      StaticBindings[4]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[4]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMSetSectionCount;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[5]._0_4_ = NDIDynamicMeshLocal::SetSectionCountName.ComparisonIndex.Value;
      StaticBindings[5]._4_4_ = NDIDynamicMeshLocal::SetSectionCountName.Number;
      StaticBindings[5]._24_4_ = 0;
      StaticBindings[5]._8_8_ = 0;
      StaticBindings[5]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[5]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[5]._16_8_);
      }
      StaticBindings[5]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[5]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMSetSectionData;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[6]._0_4_ = NDIDynamicMeshLocal::SetSectionDataName.ComparisonIndex.Value;
      StaticBindings[6]._4_4_ = NDIDynamicMeshLocal::SetSectionDataName.Number;
      StaticBindings[6]._24_4_ = 0;
      StaticBindings[6]._8_8_ = 0;
      StaticBindings[6]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[6]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[6]._16_8_);
      }
      StaticBindings[6]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[6]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMSetLocalBounds;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[7]._0_4_ = NDIDynamicMeshLocal::SetLocalBoundsName.ComparisonIndex.Value;
      StaticBindings[7]._4_4_ = NDIDynamicMeshLocal::SetLocalBoundsName.Number;
      StaticBindings[7]._24_4_ = 0;
      StaticBindings[7]._8_8_ = 0;
      StaticBindings[7]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[7]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[7]._16_8_);
      }
      StaticBindings[7]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[7]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      local_58 = (undefined1  [8])0x0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_50.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      local_28 = &local_50;
      puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        puVar3[3] = VMClearAllSectionTriangles;
        *puVar3 = &
                  ___7__TBaseStaticDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      StaticBindings[8]._0_4_ =
           NDIDynamicMeshLocal::ClearAllSectionTrianglesName.ComparisonIndex.Value;
      StaticBindings[8]._4_4_ = NDIDynamicMeshLocal::ClearAllSectionTrianglesName.Number;
      StaticBindings[8]._24_4_ = 0;
      StaticBindings[8]._8_8_ = 0;
      StaticBindings[8]._16_8_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if (StaticBindings[8]._16_8_ != 0) {
        FMemory::Free((void *)StaticBindings[8]._16_8_);
      }
      StaticBindings[8]._16_8_ = local_50.DelegateAllocator;
      StaticBindings[8]._24_4_ = local_50.DelegateSize;
      local_50.DelegateSize = 0;
      local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                 (FWriteAccessScope *)&local_40);
      if ((local_50.DelegateSize != 0) &&
         (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_50,0,0,0x10);
        local_50.DelegateSize = 0;
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_50.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_58);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMClearSectionTriangles);
      StaticBindings[9]._0_4_ = NDIDynamicMeshLocal::ClearSectionTrianglesName.ComparisonIndex.Value
      ;
      StaticBindings[9]._4_4_ = NDIDynamicMeshLocal::ClearSectionTrianglesName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[9].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMAllocateSectionTriangles);
      StaticBindings[10]._0_4_ =
           NDIDynamicMeshLocal::AllocateSectionTrianglesName.ComparisonIndex.Value;
      StaticBindings[10]._4_4_ = NDIDynamicMeshLocal::AllocateSectionTrianglesName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[10].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetTriangleVertices);
      StaticBindings[0xb]._0_4_ = NDIDynamicMeshLocal::GetTriangleVerticesName.ComparisonIndex.Value
      ;
      StaticBindings[0xb]._4_4_ = NDIDynamicMeshLocal::GetTriangleVerticesName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0xb].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetVertexPosition);
      StaticBindings[0xc]._0_4_ = NDIDynamicMeshLocal::GetVertexPositionName.ComparisonIndex.Value;
      StaticBindings[0xc]._4_4_ = NDIDynamicMeshLocal::GetVertexPositionName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0xc].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetVertexTangentBasis);
      StaticBindings[0xd]._0_4_ =
           NDIDynamicMeshLocal::GetVertexTangentBasisName.ComparisonIndex.Value;
      StaticBindings[0xd]._4_4_ = NDIDynamicMeshLocal::GetVertexTangentBasisName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0xd].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetVertexTexCoord);
      StaticBindings[0xe]._0_4_ = NDIDynamicMeshLocal::GetVertexTexCoordName.ComparisonIndex.Value;
      StaticBindings[0xe]._4_4_ = NDIDynamicMeshLocal::GetVertexTexCoordName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0xe].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetVertexColor);
      StaticBindings[0xf]._0_4_ = NDIDynamicMeshLocal::GetVertexColorName.ComparisonIndex.Value;
      StaticBindings[0xf]._4_4_ = NDIDynamicMeshLocal::GetVertexColorName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0xf].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMGetVertexData);
      StaticBindings[0x10]._0_4_ = NDIDynamicMeshLocal::GetVertexDataName.ComparisonIndex.Value;
      StaticBindings[0x10]._4_4_ = NDIDynamicMeshLocal::GetVertexDataName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x10].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetTriangleVertices);
      StaticBindings[0x11]._0_4_ =
           NDIDynamicMeshLocal::SetTriangleVerticesName.ComparisonIndex.Value;
      StaticBindings[0x11]._4_4_ = NDIDynamicMeshLocal::SetTriangleVerticesName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x11].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetVertexPosition);
      StaticBindings[0x12]._0_4_ = NDIDynamicMeshLocal::SetVertexPositionName.ComparisonIndex.Value;
      StaticBindings[0x12]._4_4_ = NDIDynamicMeshLocal::SetVertexPositionName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x12].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetVertexTangentBasis);
      StaticBindings[0x13]._0_4_ =
           NDIDynamicMeshLocal::SetVertexTangentBasisName.ComparisonIndex.Value;
      StaticBindings[0x13]._4_4_ = NDIDynamicMeshLocal::SetVertexTangentBasisName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x13].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetVertexTexCoord);
      StaticBindings[0x14]._0_4_ = NDIDynamicMeshLocal::SetVertexTexCoordName.ComparisonIndex.Value;
      StaticBindings[0x14]._4_4_ = NDIDynamicMeshLocal::SetVertexTexCoordName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x14].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetVertexColor);
      StaticBindings[0x15]._0_4_ = NDIDynamicMeshLocal::SetVertexColorName.ComparisonIndex.Value;
      StaticBindings[0x15]._4_4_ = NDIDynamicMeshLocal::SetVertexColorName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x15].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMSetVertexData);
      StaticBindings[0x16]._0_4_ = NDIDynamicMeshLocal::SetVertexDataName.ComparisonIndex.Value;
      StaticBindings[0x16]._4_4_ = NDIDynamicMeshLocal::SetVertexDataName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x16].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      pTVar2 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                                 *)&local_40,VMAppendTriangle);
      StaticBindings[0x17]._0_4_ = NDIDynamicMeshLocal::AppendTriangleName.ComparisonIndex.Value;
      StaticBindings[0x17]._4_4_ = NDIDynamicMeshLocal::AppendTriangleName.Number;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&StaticBindings[0x17].field_0x8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar2);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_40);
      atexit(`UNiagaraDataInterfaceDynamicMesh::GetVMExternalFunction'::__l2::
             _dynamic_atexit_destructor_for__StaticBindings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = StaticBindings;
  do {
    FVar1.ComparisonIndex.Value = *(uint *)&pTVar5->field_0x0;
    FVar1.Number = *(uint *)&pTVar5->field_0x4;
    if (FVar1 == param_1->Name) {
      TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (param_3,(TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                          *)&pTVar5->field_0x8);
      return;
    }
    pTVar5 = pTVar5 + 1;
  } while (pTVar5 != (TTuple<FName,TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>_>
                      *)&::_TSS0);
  return;
}

// HasPostSimulateTick @ 148ec69a0

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::HasPostSimulateTick(UNiagaraDataInterfaceDynamicMesh *this)

{
  return true;
}

// HasPreSimulateTick @ 148ec69e0

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::HasPreSimulateTick(UNiagaraDataInterfaceDynamicMesh *this)

{
  return true;
}

// InitPerInstanceData @ 148ec74b0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::InitPerInstanceData
          (UNiagaraDataInterfaceDynamicMesh *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  code *pcVar6;
  double dVar7;
  FNDIInstanceData_GameThread **ppFVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FNiagaraTypeDefinition *pFVar14;
  UClass *pUVar15;
  undefined4 *puVar16;
  uint uVar17;
  UScriptStruct *pUVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  longlong lVar22;
  TPairInitializer<unsigned___int64_&,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*_&>
  local_res8;
  FNiagaraParameterStore *local_res18;
  UObject *local_res20;
  ulong64 *local_58;
  FNDIInstanceData_GameThread ***local_50;
  
  memset(param_1,0,0xd8);
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xc059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xc059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0xc059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4059000000000000;
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffffffffffff;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0xb0),4000);
  *(ulong64 *)((longlong)param_1 + 8) = param_2->ID;
  *(bool *)((longlong)param_1 + 1) = this->bClearTrianglesPerFrame;
  *(byte *)((longlong)param_1 + 2) = (byte)((uint)this->_padding_ >> 2) & 1;
  dVar7 = (this->DefaultBounds).Min.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = (this->DefaultBounds).Min.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x28) = dVar7;
  dVar7 = (this->DefaultBounds).Max.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x30) = (this->DefaultBounds).Min.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar7;
  dVar7 = (this->DefaultBounds).Max.field0_0x0._s_0.Z;
  *(double *)((longlong)param_1 + 0x40) = (this->DefaultBounds).Max.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = dVar7;
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)&(this->DefaultBounds).IsValid;
  local_res8.Value = param_1;
  TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x70),(this->Sections).ArrayNum,Default);
  uVar20 = 0;
  if (0 < (this->Sections).ArrayNum) {
    lVar19 = 0;
    lVar22 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar20 < (this->Sections).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      ppFVar8 = local_res8.Value;
      pFVar2 = (this->Sections).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar20 <
          ((TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *)
          ((longlong)local_res8.Value + 0x70))->ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar20 = uVar20 + 1;
      pFVar3 = (((TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *)
                ((longlong)ppFVar8 + 0x70))->AllocatorInstance).Data;
      *(undefined4 *)(pFVar3 + lVar22 + 4) = *(undefined4 *)(pFVar2 + lVar19 * 8);
      lVar1 = lVar19 * 8;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(pFVar3 + lVar22 + 0xc) = *(undefined4 *)(pFVar2 + lVar1 + 4);
      lVar22 = lVar22 + 0x10;
    } while ((int)uVar20 < (this->Sections).ArrayNum);
  }
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh
            ((FNDIInstanceData_GameThread *)local_res8.Value,this->NumVertices,this->NumTexCoords,
             this->bHasTangentBasis,this->bHasColors);
  ppFVar8 = local_res8.Value;
  iVar13 = (this->Materials).ArrayNum;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40,8,iVar13,(ForAnyElementType *)((longlong)local_res8.Value + 0x80),
                      &((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_>
                         *)((longlong)local_res8.Value + 0x80))->ArrayNum,
                      &((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_>
                         *)((longlong)local_res8.Value + 0x80))->ArrayMax);
  DefaultConstructItems<NDIDynamicMeshLocal::FNDIInstanceMaterial,int>
            ((((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *)
              ((longlong)ppFVar8 + 0x80))->AllocatorInstance).Data + (longlong)iVar12 * 0x40,iVar13)
  ;
  uVar20 = 0;
  if (0 < (this->Materials).ArrayNum) {
    local_res18 = &param_2->InstanceParameters;
    lVar22 = 0;
    lVar19 = 0;
    do {
      uVar17 = ~uVar20 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar20 < (this->Materials).ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      ppFVar8 = local_res8.Value;
      pFVar2 = (this->Materials).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar20 <
          ((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *)
          ((longlong)local_res8.Value + 0x80))->ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar3 = (((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *)
                ((longlong)ppFVar8 + 0x80))->AllocatorInstance).Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = *(UObject **)(pFVar2 + lVar22), pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      ppFVar8 = local_res8.Value;
      *(undefined8 *)(pFVar3 + lVar19) = *(undefined8 *)(pFVar2 + lVar22);
      uVar11 = 0;
      if ((int)uVar20 <
          ((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *)
          ((longlong)local_res8.Value + 0x80))->ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar2 = (((TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *)
                ((longlong)ppFVar8 + 0x80))->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)uVar20 < (this->Materials).ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar3 = (this->Materials).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar3 + lVar22 + 8) != 0) &&
         (pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                              ((FNiagaraTypeDefinitionHandle *)(pFVar3 + lVar22 + 0x10)),
         (pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
        *(FNiagaraParameterStore **)(pFVar2 + lVar19 + 0x10) = local_res18;
        *(undefined8 *)(pFVar2 + lVar19 + 0x18) = *(undefined8 *)(pFVar3 + lVar22 + 8);
        *(undefined4 *)(pFVar2 + lVar19 + 0x20) = *(undefined4 *)(pFVar3 + lVar22 + 0x10);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar2 + lVar19 + 0x28),
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar3 + lVar22 + 0x18));
        *(undefined4 *)(pFVar2 + lVar19 + 0x38) =
             *(undefined4 *)(*(longlong *)(pFVar2 + lVar19 + 0x10) + 0x84);
        pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar2 + lVar19 + 0x20));
        pUVar18 = FNiagaraTypeDefinition::IntStruct;
        if (pFVar14->UnderlyingType != 3) {
          if ((pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
            pUVar15 = Z_Construct_UClass_UStruct_NoRegister();
            bVar9 = FObjectPtr::IsA((FObjectPtr *)pFVar14,pUVar15);
            if (bVar9) {
              pUVar18 = (UScriptStruct *)(pFVar14->ClassStructOrEnum).field0_0x0.DebugPtr;
              goto LAB_148ec791a;
            }
          }
          pUVar18 = (UScriptStruct *)0x0;
        }
LAB_148ec791a:
        if (pUVar18 == (UScriptStruct *)0x0) {
LAB_148ec794d:
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoundVariable.GetType().IsUObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                             ,0x461,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
        }
        else {
          pUVar15 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar15 == (UClass *)0x0) {
LAB_148ec7947:
            bVar9 = false;
          }
          else {
            iVar13 = (int)pUVar15->_padding_;
            if (((int)pUVar18->_padding_ < iVar13) ||
               ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar13 * 8) !=
                &pUVar15->_padding_)) goto LAB_148ec7947;
            bVar9 = true;
          }
          if (!bVar9) goto LAB_148ec794d;
        }
        puVar16 = (undefined4 *)
                  (**(code **)(**(longlong **)(pFVar2 + lVar19 + 0x10) + 0x58))
                            (*(longlong **)(pFVar2 + lVar19 + 0x10),pFVar3 + lVar22 + 8,0);
        if (puVar16 == (undefined4 *)0x0) {
          uVar21 = 0xffffffff;
        }
        else {
          uVar21 = *puVar16;
        }
        *(undefined4 *)(pFVar2 + lVar19 + 8) = uVar21;
        FNiagaraParameterStore::GetUObject
                  (*(FNiagaraParameterStore **)(pFVar2 + lVar19 + 0x10),(int)&local_res20);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res20);
        }
      }
      uVar20 = uVar20 + 1;
      lVar19 = lVar19 + 0x40;
      lVar22 = lVar22 + 0x28;
    } while ((int)uVar20 < (this->Materials).ArrayNum);
  }
  lVar19 = this->_padding_;
  if ((lVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  uVar5 = *(ulong64 *)((longlong)local_res8.Value + 8);
  if (*(int *)(lVar19 + 0x18) != *(int *)(lVar19 + 0x44)) {
    lVar22 = *(longlong *)(lVar19 + 0x50);
    if (*(longlong *)(lVar19 + 0x50) == 0) {
      lVar22 = lVar19 + 0x48;
    }
    iVar13 = *(int *)(lVar22 + ((uVar5 >> 0x20) * 0x17 + uVar5 &
                               (ulonglong)(*(int *)(lVar19 + 0x58) - 1)) * 4);
    if (iVar13 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar13 * 0x18) == uVar5) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!TypedProxy->InstanceData_GT.Contains(InstanceData->SystemInstanceID)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                             ,0x466,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          break;
        }
        iVar13 = *(int *)(*(longlong *)(lVar19 + 0x10) + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  local_58 = (ulong64 *)((longlong)local_res8.Value + 8);
  local_50 = &local_res8.Value;
  TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_&,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)(lVar19 + 0x10),&local_res8,(bool *)&local_58);
  return true;
}

// PerInstanceDataSize @ 148ec8f70

int __thiscall
UNiagaraDataInterfaceDynamicMesh::PerInstanceDataSize(UNiagaraDataInterfaceDynamicMesh *this)

{
  return 0xd8;
}

// PerInstanceTick @ 148ec8ff0

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
UNiagaraDataInterfaceDynamicMesh::PerInstanceTick
          (UNiagaraDataInterfaceDynamicMesh *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  
  if (*(char *)((longlong)param_1 + 1) != '\0') {
    *(undefined1 *)param_1 = 1;
    iVar1 = *(int *)((longlong)param_1 + 0x78);
    lVar2 = *(longlong *)((longlong)param_1 + 0x70);
    lVar3 = (longlong)iVar1 * 0x10 + lVar2;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x78) != iVar1) {
        `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceSection,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (lVar2 == lVar3) break;
      *(undefined4 *)(lVar2 + 8) = 0;
      lVar2 = lVar2 + 0x10;
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 148eca2e0

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
UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceDynamicMesh *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  TObjectPtr<UObject> this_00;
  UClass *pUVar9;
  FGameToRenderData *pFVar10;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar11;
  code **ppcVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  UObject *pUVar16;
  UMaterial **ppUVar17;
  longlong lVar18;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  UMaterial *local_248;
  UMaterial *local_240;
  undefined1 local_238 [16];
  code *local_228 [2];
  code *local_218 [3];
  code **local_200;
  undefined1 local_1f8 [40];
  code **local_1d0;
  byte local_1c8;
  code *local_1b8;
  code *local_1b0;
  FGameToRenderData local_1a8;
  FGameToRenderData local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((*(int *)((longlong)param_1 + 0x88) != (this->Materials).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData->Materials.Num() == Materials.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                         ,0x496,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = 0;
  if (0 < (this->Materials).ArrayNum) {
    local_258 = 0;
    lVar18 = 0;
    local_250 = 0;
    do {
      lVar2 = local_258;
      uVar15 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < *(int *)((longlong)param_1 + 0x88)) {
        uVar8 = uVar15;
      }
      if (uVar8 == 0) {
        local_268 = (longlong)(int)uVar13;
        local_260 = (longlong)*(int *)((longlong)param_1 + 0x88);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if ((*(int *)(lVar18 + 8 + *(longlong *)((longlong)param_1 + 0x80)) == -1) ||
         (this_00 = FNiagaraParameterStore::GetUObject
                              (*(FNiagaraParameterStore **)
                                (lVar18 + 0x10 + *(longlong *)((longlong)param_1 + 0x80)),
                               (int)local_238), *(longlong *)this_00.field0_0x0 == 0)) {
LAB_148eca412:
        pUVar16 = (UObject *)0x0;
      }
      else {
        pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar9);
        if (!bVar6) goto LAB_148eca412;
        pUVar16 = *(UObject **)this_00.field0_0x0;
      }
      uVar8 = 0;
      if ((int)uVar13 < *(int *)((longlong)param_1 + 0x88)) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (local_268 = lVar2, local_260 = (longlong)*(int *)((longlong)param_1 + 0x88),
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar2 = *(longlong *)((longlong)param_1 + 0x80);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar16);
      }
      *(UObject **)(lVar2 + lVar18) = pUVar16;
      uVar8 = 0;
      if ((int)uVar13 < *(int *)((longlong)param_1 + 0x88)) {
        uVar8 = uVar15;
      }
      if (uVar8 == 0) {
        local_268 = local_258;
        local_260 = (longlong)*(int *)((longlong)param_1 + 0x88);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(longlong *)(lVar18 + *(longlong *)((longlong)param_1 + 0x80)) == 0) {
        iVar1 = (this->Materials).ArrayNum;
        uVar8 = 0;
        if ((int)uVar13 < iVar1) {
          uVar8 = uVar15;
        }
        if (uVar8 == 0) {
          local_268 = (longlong)(int)uVar13;
          local_260 = (longlong)iVar1;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        lVar2 = local_250;
        if (*(longlong *)((this->Materials).AllocatorInstance.Data + local_250) == 0) {
          local_240 = UMaterial::GetDefaultMaterial(MD_Surface);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_240 != (UMaterial *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_240);
          }
          ppUVar17 = &local_240;
        }
        else {
          iVar1 = (this->Materials).ArrayNum;
          uVar8 = 0;
          if ((int)uVar13 < iVar1) {
            uVar8 = uVar15;
          }
          if (uVar8 == 0) {
            local_268 = (longlong)(int)uVar13;
            local_260 = (longlong)iVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          local_248 = *(UMaterial **)((this->Materials).AllocatorInstance.Data + lVar2);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_248 != (UMaterial *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_248);
          }
          ppUVar17 = &local_248;
        }
        uVar8 = 0;
        if ((int)uVar13 < *(int *)((longlong)param_1 + 0x88)) {
          uVar8 = uVar15;
        }
        if (uVar8 == 0) {
          local_268 = (longlong)(int)uVar13;
          local_260 = (longlong)*(int *)((longlong)param_1 + 0x88);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        lVar3 = *(longlong *)((longlong)param_1 + 0x80);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar17 != (UMaterial *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)*ppUVar17);
        }
        *(UMaterial **)(lVar3 + lVar18) = *ppUVar17;
        local_250 = lVar2;
      }
      local_258 = local_258 + 1;
      local_250 = local_250 + 0x28;
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 0x40;
    } while ((int)uVar13 < (this->Materials).ArrayNum);
  }
  if (*(char *)param_1 != '\0') {
    *(undefined1 *)param_1 = 0;
    pcVar5 = (code *)this->_padding_;
    if ((pcVar5 == (code *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pcVar4 = *(code **)((longlong)param_1 + 8);
    pFVar10 = NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData(&local_f8,param_1);
    local_1b8 = pcVar5;
    local_1b0 = pcVar4;
    NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData(&local_1a8,pFVar10);
    local_228[0] = (code *)0x0;
    local_200 = FMemory::Malloc(200,8);
    ppcVar12 = local_200 + 1;
    *local_200 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::`17'::<lambda_1>,1,1>
                          ::_vftable_;
    *ppcVar12 = local_1b8;
    local_200[2] = local_1b0;
    NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData
              ((FGameToRenderData *)(local_200 + 3),&local_1a8);
    if (ppcVar12 != (code **)0x0) {
      local_228[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate_::__l17::TSTR_FNDIDynamicMesh_UpdateData1189>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_228);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_1f8._0_8_ = local_228[0];
      local_1d0 = local_200;
      local_200 = (code **)0x0;
      local_1f8._16_8_ = local_218[0];
      local_1f8._24_8_ = local_218[1];
      local_1f8._32_8_ = local_218[2];
      local_228[0] = (code *)0x0;
      local_1c8 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceDynamicMesh::PerInstanceTickPostSimulate'::__l17::TSTR_FNDIDynamicMesh_UpdateData1189>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_1f8,pFVar11);
      uVar14 = (ulonglong)local_1c8;
      if ((2 < uVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_1f8._0_8_ != (code *)0x0) {
          ppcVar12 = (code **)(local_1f8 + 0x10);
          if (local_1d0 != (code **)0x0) {
            ppcVar12 = local_1d0;
          }
          (**(code **)(*ppcVar12 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar14])(local_1f8);
      }
    }
    if (local_228[0] != (code *)0x0) {
      ppcVar12 = local_228 + 2;
      if (local_200 != (code **)0x0) {
        ppcVar12 = local_200;
      }
      (**(code **)(*ppcVar12 + 0x10))();
    }
    if (local_1a8.MeshSections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.MeshSections.AllocatorInstance.Data);
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_1a8.VertexData._padding_);
    local_1a8.VertexData._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_1a8.IndexData._padding_);
    local_1a8.IndexData._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    if (local_f8.MeshSections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.MeshSections.AllocatorInstance.Data);
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_f8.VertexData._padding_);
    local_f8.VertexData._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_f8.IndexData._padding_);
  }
  return false;
}

// PostInitProperties @ 148ecb190

void __thiscall
UNiagaraDataInterfaceDynamicMesh::PostInitProperties(UNiagaraDataInterfaceDynamicMesh *this)

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

// SetShaderParameters @ 148ed0720

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
UNiagaraDataInterfaceDynamicMesh::SetShaderParameters
          (UNiagaraDataInterfaceDynamicMesh *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  FNDIInstanceData_RenderThread *pFVar6;
  FShaderParametersMetadata *pFVar7;
  uint uVar8;
  
  if (param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x1c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar5 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar6 = TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
           ::FindChecked((TMapBase<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,NDIDynamicMeshLocal::FNDIInstanceData_RenderThread,0>_>
                          *)(pFVar1 + 6),uVar5);
  uVar8 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<NDIDynamicMeshLocal::FShaderParameters>::GetStructMetadata
                     ();
  puVar2 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar7->Size + uVar8;
  *(uint *)(puVar2 + uVar8) = pFVar6->NumSections;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 4) = pFVar6->NumTriangles;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 8) = pFVar6->NumVertices;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 0xc) = pFVar6->NumTexCoords;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 0x10) = pFVar6->PositionOffset >> 2;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 0x14) = pFVar6->TangentBasisOffset >> 2;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 0x18) = pFVar6->TexCoordOffset >> 2;
  *(uint *)(puVar2 + (ulonglong)uVar8 + 0x1c) = pFVar6->ColorOffset >> 2;
  *(FRDGBufferUAV **)(puVar2 + (ulonglong)uVar8 + 0x20) = pFVar6->RDGTransientSectionBufferUAV;
  *(FRDGBufferUAV **)(puVar2 + (ulonglong)uVar8 + 0x28) = pFVar6->RDGTransientIndexBufferUAV;
  *(FRDGBufferUAV **)(puVar2 + (ulonglong)uVar8 + 0x30) = pFVar6->RDGTransientVertexBufferUAV;
  return;
}

// SimCacheBeginWrite @ 148ed1e50

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceDynamicMesh::SimCacheBeginWrite
          (UNiagaraDataInterfaceDynamicMesh *this,UObject *param_1,FNiagaraSystemInstance *param_2,
          void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_3 == (void *)0x0) {
    pUVar2 = (UObject *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = param_1;
    pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return pUVar2;
}

// SimCacheCompareFrame @ 148ed2030

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::SimCacheCompareFrame
          (UNiagaraDataInterfaceDynamicMesh *this,UObject *param_1,UObject *param_2,int param_3,
          TOptional<float> param_4,FString *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *pUVar7;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *pUVar8;
  FScriptContainerElement *pFVar9;
  byte bVar10;
  byte bVar11;
  FNDIDynamicMeshSimCacheFrame *pFVar12;
  uint uVar13;
  FNDIDynamicMeshSimCacheFrame *pFVar14;
  char cVar15;
  FNDIDynamicMeshSimCacheFrame *pFVar16;
  char local_138 [8];
  FString local_130;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_100;
  char *local_f0;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_char_const_,int> local_c8;
  TArrayView<unsigned_char_const_,int> local_b8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  pUVar7 = CastChecked<UNiagaraDataInterfaceDynamicMeshSimCacheData,UObject_const_>(param_1);
  pUVar8 = CastChecked<UNiagaraDataInterfaceDynamicMeshSimCacheData,UObject_const_>(param_2);
  if (((param_3 < 0) || ((pUVar7->CpuFrameIndices).ArrayNum <= param_3)) ||
     ((pUVar7->GpuFrameIndices).ArrayNum <= param_3)) {
    bVar10 = 0;
    if (-1 < param_3) goto LAB_148ed2072;
  }
  else {
    bVar10 = 1;
LAB_148ed2072:
    if ((param_3 < (pUVar8->CpuFrameIndices).ArrayNum) &&
       (param_3 < (pUVar8->GpuFrameIndices).ArrayNum)) {
      bVar11 = 1;
      goto LAB_148ed2082;
    }
  }
  bVar11 = 0;
LAB_148ed2082:
  if (bVar10 == bVar11) {
    if (bVar10 != 0) {
      local_f0 = local_138;
      local_138[0] = '\0';
      local_138[1] = '\x01';
      cVar15 = '\0';
      pFVar14 = (FNDIDynamicMeshSimCacheFrame *)0x0;
      do {
        uVar13 = 0;
        pFVar16 = pFVar14;
        if (cVar15 == '\0') {
          if ((param_3 < 0) || ((pUVar7->CpuFrameIndices).ArrayNum <= param_3)) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = uVar13;
            if (param_3 < (pUVar7->CpuFrameIndices).ArrayNum) {
              uVar6 = (uint)~param_3 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar9 = (pUVar7->CpuFrameIndices).AllocatorInstance.Data;
LAB_148ed229c:
            uVar6 = *(uint *)(pFVar9 + (longlong)param_3 * 4);
          }
          if ((-1 < (int)uVar6) && ((int)uVar6 < (pUVar7->UniqueFrames).ArrayNum)) {
            if ((int)uVar6 < (pUVar7->UniqueFrames).ArrayNum) {
              uVar13 = ~uVar6 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar16 = (FNDIDynamicMeshSimCacheFrame *)
                      ((pUVar7->UniqueFrames).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x90);
          }
        }
        else if (((cVar15 == '\x01') && (-1 < param_3)) &&
                (param_3 < (pUVar7->GpuFrameIndices).ArrayNum)) {
          uVar6 = uVar13;
          if (param_3 < (pUVar7->GpuFrameIndices).ArrayNum) {
            uVar6 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar9 = (pUVar7->GpuFrameIndices).AllocatorInstance.Data;
          goto LAB_148ed229c;
        }
        uVar13 = 0xffffffff;
        uVar6 = 0;
        pFVar12 = pFVar14;
        if (cVar15 == '\0') {
          if ((-1 < param_3) && (param_3 < (pUVar7->CpuFrameIndices).ArrayNum)) {
            uVar13 = uVar6;
            if (param_3 < (pUVar7->CpuFrameIndices).ArrayNum) {
              uVar13 = (uint)~param_3 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar9 = (pUVar7->CpuFrameIndices).AllocatorInstance.Data;
LAB_148ed23dc:
            uVar13 = *(uint *)(pFVar9 + (longlong)param_3 * 4);
          }
LAB_148ed23df:
          if ((-1 < (int)uVar13) && ((int)uVar13 < (pUVar7->UniqueFrames).ArrayNum)) {
            if ((int)uVar13 < (pUVar7->UniqueFrames).ArrayNum) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar12 = (FNDIDynamicMeshSimCacheFrame *)
                      ((pUVar7->UniqueFrames).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x90)
            ;
          }
        }
        else {
          if (cVar15 != '\x01') goto LAB_148ed23df;
          if ((-1 < param_3) && (param_3 < (pUVar7->GpuFrameIndices).ArrayNum)) {
            uVar13 = uVar6;
            if (param_3 < (pUVar7->GpuFrameIndices).ArrayNum) {
              uVar13 = (uint)~param_3 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar9 = (pUVar7->GpuFrameIndices).AllocatorInstance.Data;
            goto LAB_148ed23dc;
          }
        }
        if ((pFVar16 != (FNDIDynamicMeshSimCacheFrame *)0x0) !=
            (pFVar12 != (FNDIDynamicMeshSimCacheFrame *)0x0)) {
          FStringFormatArg::FStringFormatArg
                    (&local_68,(uint)(pFVar16 != (FNDIDynamicMeshSimCacheFrame *)0x0));
          FStringFormatArg::FStringFormatArg
                    (&local_48,(uint)(pFVar12 != (FNDIDynamicMeshSimCacheFrame *)0x0));
          local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_100.AllocatorInstance,2,&local_100.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_100.AllocatorInstance.Data,&local_68,2);
          ::FString::FormatImpl
                    (&local_110,L"Mesh Data Validity different LhsMeshData = {0} RhsMeshData = {1}",
                     &local_100);
          if (param_5 != &local_110) {
            pFVar9 = (param_5->Data).AllocatorInstance.Data;
            if (pFVar9 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9);
            }
            (param_5->Data).AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
            (param_5->Data).ArrayNum = local_110.Data.ArrayNum;
            (param_5->Data).ArrayMax = local_110.Data.ArrayMax;
            local_110.Data.ArrayNum = 0;
            local_110.Data.ArrayMax = 0;
            local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
          if ((FStringFormatArg *)local_100.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_100.AllocatorInstance.Data);
          }
          if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
          }
          goto LAB_148ed2642;
        }
        if (pFVar16 != (FNDIDynamicMeshSimCacheFrame *)0x0) {
          local_e8 = (pFVar16->VertexData).AllocatorInstance.Data;
          iVar1 = (pFVar16->VertexData).ArrayNum;
          if ((iVar1 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_d8 = (pFVar16->IndexData).AllocatorInstance.Data;
          iVar2 = (pFVar16->IndexData).ArrayNum;
          iStack_e0 = iVar1;
          if ((iVar2 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_c8._12_4_ = uStack_dc;
          local_c8.ArrayNum = iStack_e0;
          local_b8._12_4_ = uStack_cc;
          local_b8.ArrayNum = iVar2;
          local_b8.DataPtr = (uchar *)local_d8;
          local_c8.DataPtr = (uchar *)local_e8;
          iStack_d0 = iVar2;
          bVar4 = FNDIDynamicMeshSimCacheFrame::Equals(pFVar16,pFVar12,&local_b8,&local_c8);
          if (!bVar4) {
            ::FString::operator=(param_5,L"Mesh Data Different");
            return false;
          }
        }
        local_f0 = local_f0 + 1;
        if (local_f0 == local_138 + 2) break;
        cVar15 = *local_f0;
      } while( true );
    }
    bVar4 = true;
  }
  else {
    FStringFormatArg::FStringFormatArg(&local_a8,(uint)bVar10);
    FStringFormatArg::FStringFormatArg(&local_88,(uint)bVar11);
    local_120.ArrayNum = 2;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_120.AllocatorInstance,2,&local_120.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_120.AllocatorInstance.Data,&local_a8,2);
    ::FString::FormatImpl
              (&local_130,L"Frame Validity different LhsValid = {0} RhsValid = {1}",&local_120);
    if (param_5 != &local_130) {
      pFVar9 = (param_5->Data).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (param_5->Data).AllocatorInstance.Data = local_130.Data.AllocatorInstance.Data;
      (param_5->Data).ArrayNum = local_130.Data.ArrayNum;
      (param_5->Data).ArrayMax = local_130.Data.ArrayMax;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if ((FStringFormatArg *)local_120.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    local_68.StringValue.Data.AllocatorInstance.Data =
         local_a8.StringValue.Data.AllocatorInstance.Data;
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
      local_68.StringValue.Data.AllocatorInstance.Data =
           local_a8.StringValue.Data.AllocatorInstance.Data;
    }
LAB_148ed2642:
    if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
    }
    bVar4 = false;
  }
  return bVar4;
}

// SimCacheReadFrame @ 148ed2a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148ed308f) */
/* WARNING: Removing unreachable block (ram,0x000148ed309b) */
/* WARNING: Removing unreachable block (ram,0x000148ed30a0) */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame
          (UNiagaraDataInterfaceDynamicMesh *this,FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  TUniquePtr<NDIDynamicMeshLocal::FGameToRenderData,TDefaultDelete<NDIDynamicMeshLocal::FGameToRenderData>_>
  TVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  UClass *pUVar11;
  FNDIDynamicMeshSimCacheFrame *pFVar12;
  UMaterial *pUVar13;
  FGameToRenderData *pFVar14;
  FGameToRenderData *pFVar15;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  code **ppcVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FNDIInstanceData_GameThread *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *pTVar26;
  undefined1 auStackY_128 [32];
  bool local_f8;
  TUniquePtr<NDIDynamicMeshLocal::FGameToRenderData,TDefaultDelete<NDIDynamicMeshLocal::FGameToRenderData>_>
  local_f0;
  TArray<NDIDynamicMeshLocal::FNDIInstanceMaterial,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *local_e0;
  FNDIDynamicMeshSimCacheFrame *local_d8;
  longlong local_d0;
  longlong local_c8;
  FNDIInstanceData_GameThread *local_c0;
  FNiagaraSimCacheDataInterfaceReadContext *local_b8;
  UNiagaraDataInterfaceDynamicMesh *local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar14 = (FGameToRenderData *)param_1->StorageObject;
  pFVar15 = (FGameToRenderData *)0x0;
  local_b8 = param_1;
  local_b0 = this;
  if (pFVar14 != (FGameToRenderData *)0x0) {
    pUVar11 = Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_NoRegister();
    lVar2 = *(longlong *)&(pFVar14->LocalBounds).Min.field0_0x0;
    iVar17 = (int)pUVar11->_padding_;
    if ((iVar17 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar11->_padding_)) goto LAB_148ed2af2;
  }
  pFVar14 = pFVar15;
LAB_148ed2af2:
  iVar17 = param_1->FrameIndexA;
  pFVar12 = UNiagaraDataInterfaceDynamicMeshSimCacheData::GetFrameData
                      ((UNiagaraDataInterfaceDynamicMeshSimCacheData *)pFVar14,iVar17,GPUComputeSim)
  ;
  local_f8 = pFVar12 == (FNDIDynamicMeshSimCacheFrame *)0x0;
  if (local_f8) {
    local_d8 = pFVar12;
    pFVar12 = UNiagaraDataInterfaceDynamicMeshSimCacheData::GetFrameData
                        ((UNiagaraDataInterfaceDynamicMeshSimCacheData *)pFVar14,iVar17,CPUSim);
  }
  local_f8 = !local_f8;
  local_d8 = pFVar12;
  if ((param_1->OptionalPerInstanceData == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OptionalPerInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                         ,0x1d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pFVar22 = param_1->OptionalPerInstanceData;
  pFVar22->bHasChanged = false;
  this_00 = &pFVar22->Sections;
  uVar20 = 0;
  local_e0 = this_00;
  local_c0 = pFVar22;
  if (pFVar12 == (FNDIDynamicMeshSimCacheFrame *)0x0) {
    pFVar22->NumTriangles = 0;
    pFVar22->NumVertices = 0;
    piVar1 = &(pFVar22->Sections).ArrayMax;
    pFVar22->NumTexCoords = 0;
    pFVar22->VertexBufferSize = 0;
    pFVar22->PositionOffset = 0xffffffff;
    pFVar22->TangentBasisOffset = 0xffffffff;
    pFVar22->TexCoordOffset = 0xffffffff;
    pFVar22->ColorOffset = 0xffffffff;
    (pFVar22->Sections).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&this_00->AllocatorInstance,0,piVar1);
    }
    DestructItems<NDIDynamicMeshLocal::FNDIInstanceMaterial,int>
              ((FNDIInstanceMaterial *)(pFVar22->Materials).AllocatorInstance.Data,
               (pFVar22->Materials).ArrayNum);
    piVar1 = &(pFVar22->Materials).ArrayMax;
    (pFVar22->Materials).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(pFVar22->Materials).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(pFVar22->IndexData).ArrayMax;
    (pFVar22->IndexData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(pFVar22->IndexData).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(pFVar22->VertexData).ArrayMax;
    (pFVar22->VertexData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(pFVar22->VertexData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    pFVar22->NumTriangles = pFVar12->NumTriangles;
    pFVar22->NumVertices = pFVar12->NumVertices;
    pFVar22->NumTexCoords = pFVar12->NumTexCoords;
    pFVar22->VertexBufferSize = pFVar12->VertexBufferSize;
    pFVar22->PositionOffset = pFVar12->PositionOffset;
    pFVar22->TangentBasisOffset = pFVar12->TangentBasisOffset;
    pFVar22->TexCoordOffset = pFVar12->TexCoordOffset;
    pFVar22->ColorOffset = pFVar12->ColorOffset;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar22->IndexData,&pFVar12->IndexData);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar22->VertexData,&pFVar12->VertexData);
    TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,(pFVar12->Sections).ArrayNum,Default);
    pTVar26 = &pFVar22->Materials;
    local_e8 = pTVar26;
    DestructItems<NDIDynamicMeshLocal::FNDIInstanceMaterial,int>
              ((FNDIInstanceMaterial *)(pTVar26->AllocatorInstance).Data,
               (pFVar22->Materials).ArrayNum);
    piVar1 = &(pFVar22->Materials).ArrayMax;
    (pFVar22->Materials).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&pTVar26->AllocatorInstance,0,piVar1);
    }
    if (0 < (pFVar12->Sections).ArrayNum) {
      local_c8 = 0;
      local_d0 = 0;
      pFVar14 = pFVar15;
      do {
        lVar6 = local_c8;
        lVar2 = local_d0;
        uVar24 = (uint)pFVar14;
        uVar9 = uVar20;
        if ((int)uVar24 < (pFVar12->Sections).ArrayNum) {
          uVar9 = ~uVar24 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar21 = (pFVar12->Sections).AllocatorInstance.Data + lVar2;
        uVar9 = uVar20;
        if ((int)uVar24 < local_e0->ArrayNum) {
          uVar9 = ~uVar24 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pUVar13 = *(UMaterial **)(pFVar21 + 0x10);
        pFVar25 = (local_e0->AllocatorInstance).Data + lVar6;
        if (pUVar13 == (UMaterial *)0x0) {
          pUVar13 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
        *(undefined4 *)pFVar25 = *(undefined4 *)pFVar21;
        *(undefined4 *)(pFVar25 + 4) = *(undefined4 *)(pFVar21 + 4);
        *(undefined4 *)(pFVar25 + 8) = *(undefined4 *)(pFVar21 + 8);
        pFVar21 = (pTVar26->AllocatorInstance).Data;
        for (pFVar18 = pFVar21; pFVar18 != pFVar21 + (longlong)pTVar26->ArrayNum * 0x40;
            pFVar18 = pFVar18 + 0x40) {
          if (*(UMaterial **)pFVar18 == (UMaterial *)0x0) {
            bVar7 = pUVar13 == (UMaterial *)0x0;
          }
          else {
            bVar7 = *(UMaterial **)pFVar18 == pUVar13;
          }
          if (bVar7) {
            iVar17 = (int)((longlong)pFVar18 - (longlong)pFVar21 >> 6);
            *(int *)(pFVar25 + 0xc) = iVar17;
            if (iVar17 != -1) goto LAB_148ed2e1b;
            goto LAB_148ed2d64;
          }
        }
        *(undefined4 *)(pFVar25 + 0xc) = 0xffffffff;
LAB_148ed2d64:
        uVar9 = pTVar26->ArrayNum;
        if (uVar9 == pTVar26->ArrayMax) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
        }
        pTVar26->ArrayNum = uVar9 + 1;
        DefaultConstructItems<NDIDynamicMeshLocal::FNDIInstanceMaterial,int>
                  ((local_e8->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40,1);
        *(uint *)(pFVar25 + 0xc) = uVar9;
        uVar10 = uVar20;
        if ((int)uVar9 < local_e8->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pTVar26 = local_e8;
        pFVar21 = (local_e8->AllocatorInstance).Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UMaterial *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        *(UMaterial **)(pFVar21 + (longlong)(int)uVar9 * 0x40) = pUVar13;
        pFVar12 = local_d8;
LAB_148ed2e1b:
        pFVar14 = (FGameToRenderData *)(ulonglong)(uVar24 + 1);
        local_d0 = local_d0 + 0x18;
        local_c8 = local_c8 + 0x10;
        pFVar22 = local_c0;
        param_1 = local_b8;
      } while ((int)(uVar24 + 1) < (pFVar12->Sections).ArrayNum);
    }
    local_f0.Ptr = (FGameToRenderData *)0x0;
    pFVar14 = ::operator_new(0xb0);
    if (pFVar14 != (FGameToRenderData *)0x0) {
      pFVar15 = NDIDynamicMeshLocal::FGameToRenderData::FGameToRenderData(pFVar14,pFVar22);
    }
    TUniquePtr<NDIDynamicMeshLocal::FGameToRenderData,TDefaultDelete<NDIDynamicMeshLocal::FGameToRenderData>_>
    ::Reset(&local_f0,pFVar15);
    if (local_f8) {
      piVar1 = &(pFVar22->IndexData).ArrayMax;
      (pFVar22->IndexData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(pFVar22->IndexData).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(pFVar22->VertexData).ArrayMax;
      (pFVar22->VertexData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(pFVar22->VertexData).AllocatorInstance,0,piVar1);
      }
    }
    pcVar4 = (code *)local_b0[-1].DefaultBounds.Max.field0_0x0._s_0.Y;
    if ((pcVar4 == (code *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    TVar5.Ptr = local_f0.Ptr;
    local_f0.Ptr = (FGameToRenderData *)0x0;
    pcVar3 = (code *)param_1->SystemInstance->ID;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    local_80[1] = pcVar4;
    local_80[2] = pcVar3;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::`8'::<lambda_2>,1,1>
                         ::_vftable_;
    local_80[3] = (code *)TVar5.Ptr;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame_::__l8::TSTR_NDIDynamicMesh_SimCacheRead1521>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_a8[0] = (code *)0x0;
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_48 = 2;
      pFVar16 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceDynamicMesh::SimCacheReadFrame'::__l8::TSTR_NDIDynamicMesh_SimCacheRead1521>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar16);
      uVar23 = (ulonglong)local_48;
      if ((2 < uVar23) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar19 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar19 = local_50;
          }
          (**(code **)(*ppcVar19 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar19 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar19 = local_80;
      }
      (**(code **)(*ppcVar19 + 0x10))();
    }
  }
  return true;
}

// SimCacheWriteFrame @ 148ed3930

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
UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame
          (UNiagaraDataInterfaceDynamicMesh *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *this_00;
  UNiagaraDataInterfaceDynamicMesh *pUVar6;
  FNiagaraSystemInstance *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *pUVar11;
  FNiagaraGpuComputeDispatchInterface *pFVar12;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  FString *pFVar14;
  code **ppcVar15;
  uint uVar16;
  UObject *pUVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  int *piVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [4];
  uint local_2b4;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *local_2b0;
  int iStack_2a8;
  undefined4 uStack_2a4;
  UNiagaraDataInterfaceDynamicMesh *local_2a0;
  FNiagaraSystemInstance *local_298;
  uchar *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  UObject *local_278;
  undefined8 local_270;
  TArrayView<unsigned_char_const_,int> local_268;
  TArrayView<unsigned_char_const_,int> local_258;
  FString local_248;
  undefined4 local_22c;
  FString local_228;
  FString local_218;
  code *local_208 [2];
  code *local_1f8 [3];
  code **local_1e0;
  FNDIDynamicMeshSimCacheFrame local_1d8;
  code *local_148;
  code *local_140;
  UNiagaraDataInterfaceDynamicMeshSimCacheData *local_138;
  undefined1 local_130 [72];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  FNiagaraGpuComputeDispatchInterface *local_98;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pwVar22 = L"";
  local_2b4 = param_2;
  local_2b0 = (UNiagaraDataInterfaceDynamicMeshSimCacheData *)param_1;
  local_2a0 = this;
  local_298 = param_3;
  if ((param_4 == (void *)0x0) || (param_1 == (UObject *)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData && StorageObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                       ,0x547,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (param_1 == (UObject *)0x0) {
      pFVar14 = GetTypeName<UNiagaraDataInterfaceDynamicMeshSimCacheData>(&local_248);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar22);
    }
  }
  pUVar11 = Z_Construct_UClass_UNiagaraDataInterfaceDynamicMeshSimCacheData_NoRegister();
  iVar10 = (int)pUVar11->_padding_;
  if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar10) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
       &pUVar11->_padding_)) || (param_1 == (UObject *)0x0)) {
    pFVar14 = GetTypeName<UNiagaraDataInterfaceDynamicMeshSimCacheData>(&local_228);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UObject>(&local_218,param_1);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar19);
  }
  UNiagaraDataInterfaceDynamicMeshSimCacheData::ResizeFrames
            ((UNiagaraDataInterfaceDynamicMeshSimCacheData *)param_1,param_2);
  local_1d8.NumTriangles = *(uint *)((longlong)param_4 + 0x10);
  local_1d8.LocalBounds.Min.field0_0x0._s_0.X = *(double *)((longlong)param_4 + 0x20);
  local_1d8.LocalBounds.Min.field0_0x0._s_0.Y = *(double *)((longlong)param_4 + 0x28);
  uVar2 = *(uint *)((longlong)param_4 + 0x78);
  local_1d8.NumVertices = *(uint *)((longlong)param_4 + 0x14);
  local_1d8.NumTexCoords = *(uint *)((longlong)param_4 + 0x18);
  local_1d8.VertexBufferSize = *(uint *)((longlong)param_4 + 0x58);
  local_1d8.PositionOffset = *(uint *)((longlong)param_4 + 0x5c);
  local_1d8.TangentBasisOffset = *(uint *)((longlong)param_4 + 0x60);
  local_1d8.TexCoordOffset = *(uint *)((longlong)param_4 + 100);
  local_1d8.ColorOffset = *(uint *)((longlong)param_4 + 0x68);
  local_1d8.IndexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.IndexData.ArrayNum = 0;
  local_1d8.IndexData.ArrayMax = 0;
  local_1d8.VertexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.VertexData.ArrayNum = 0;
  local_1d8.VertexData.ArrayMax = 0;
  local_1d8.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Sections.ArrayNum = 0;
  local_1d8.Sections.ArrayMax = 0;
  local_1d8.LocalBounds.Min.field0_0x0._s_0.Z = *(double *)((longlong)param_4 + 0x30);
  local_1d8.LocalBounds.Max.field0_0x0._s_0.X = *(double *)((longlong)param_4 + 0x38);
  local_1d8.LocalBounds.Max.field0_0x0._s_0.Y = *(double *)((longlong)param_4 + 0x40);
  local_1d8.LocalBounds.Max.field0_0x0._s_0.Z = *(double *)((longlong)param_4 + 0x48);
  local_1d8.LocalBounds._48_8_ = *(undefined8 *)((longlong)param_4 + 0x50);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  iVar10 = 0;
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar2,&local_1d8.Sections.AllocatorInstance,0,&local_1d8.Sections.ArrayMax);
    iVar10 = local_1d8.Sections.ArrayNum;
  }
  lVar21 = *(longlong *)((longlong)param_4 + 0x70);
  iVar3 = *(int *)((longlong)param_4 + 0x78);
  piVar20 = (int *)(lVar21 + 0xc);
  do {
    if (*(int *)((longlong)param_4 + 0x78) != iVar3) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceSection_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_2b8);
      iVar10 = local_1d8.Sections.ArrayNum;
    }
    this_00 = local_2b0;
    if (piVar20 + -3 == (int *)((longlong)iVar3 * 0x10 + lVar21)) {
      iVar10 = *(int *)((longlong)param_4 + 0xa8);
      puVar4 = *(uchar **)((longlong)param_4 + 0xa0);
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uStack_2a4 = local_22c;
      local_288 = *(uchar **)((longlong)param_4 + 0x90);
      iVar3 = *(int *)((longlong)param_4 + 0x98);
      local_2b0 = (UNiagaraDataInterfaceDynamicMeshSimCacheData *)puVar4;
      iStack_2a8 = iVar10;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      local_268._12_4_ = uStack_2a4;
      local_268.ArrayNum = iStack_2a8;
      local_258._12_4_ = uStack_27c;
      local_258.ArrayNum = iVar3;
      local_268.DataPtr = (uchar *)local_2b0;
      local_258.DataPtr = local_288;
      iStack_280 = iVar3;
      iVar10 = UNiagaraDataInterfaceDynamicMeshSimCacheData::FindOrCreateMesh
                         (this_00,&local_1d8,&local_258,&local_268);
      uVar2 = local_2b4;
      lVar21 = (longlong)(int)local_2b4;
      uVar16 = 0;
      if ((int)local_2b4 < (this_00->CpuFrameIndices).ArrayNum) {
        uVar16 = ~local_2b4 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar7 = local_298;
      pUVar6 = local_2a0;
      *(int *)((this_00->CpuFrameIndices).AllocatorInstance.Data + lVar21 * 4) = iVar10;
      if ((*(uint *)((longlong)&local_2a0[-1].DefaultBounds.Max.field0_0x0 + 0x10) >> 2 & 1) != 0) {
        pFVar12 = FNiagaraGpuComputeDispatchInterface::Get(local_298->World);
        local_148 = (code *)pUVar6[-1].DefaultBounds.Max.field0_0x0._s_0.Y;
        if ((local_148 == (code *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypedProxy != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                               ,0x3a8,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        local_140 = (code *)pFVar7->ID;
        local_138 = this_00;
        FNDIDynamicMeshSimCacheFrame::FNDIDynamicMeshSimCacheFrame
                  ((FNDIDynamicMeshSimCacheFrame *)local_130,&local_1d8);
        local_a0 = uVar2;
        local_208[0] = (code *)0x0;
        local_98 = pFVar12;
        local_1e0 = FMemory::Malloc(0xc0,8);
        *local_1e0 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::`16'::<lambda_1>,1,1>
                              ::_vftable_;
        local_1e0[1] = local_148;
        local_1e0[2] = local_140;
        local_1e0[3] = (code *)local_138;
        *(undefined4 *)(local_1e0 + 4) = local_130._0_4_;
        *(undefined4 *)((longlong)local_1e0 + 0x24) = local_130._4_4_;
        *(undefined4 *)(local_1e0 + 5) = local_130._8_4_;
        local_1e0[6] = (code *)local_130._16_8_;
        local_1e0[7] = (code *)local_130._24_8_;
        local_1e0[8] = (code *)local_130._32_8_;
        local_1e0[9] = (code *)local_130._40_8_;
        local_1e0[10] = (code *)local_130._48_8_;
        local_1e0[0xb] = (code *)local_130._56_8_;
        local_1e0[0xc] = (code *)local_130._64_8_;
        *(uint *)(local_1e0 + 0xd) = local_e8;
        *(uint *)((longlong)local_1e0 + 0x6c) = local_e4;
        *(uint *)(local_1e0 + 0xe) = local_e0;
        *(uint *)((longlong)local_1e0 + 0x74) = local_dc;
        *(uint *)(local_1e0 + 0xf) = local_d8;
        local_1e0[0x10] = (code *)0x0;
        local_1e0[0x10] = (code *)local_d0.Data;
        local_d0.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_1e0 + 0x11) = (int)local_c8;
        *(int *)((longlong)local_1e0 + 0x8c) = local_c8._4_4_;
        local_c8._0_4_ = 0;
        local_c8._4_4_ = 0;
        local_1e0[0x12] = (code *)0x0;
        local_1e0[0x12] = (code *)local_c0.Data;
        local_c0.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_1e0 + 0x13) = (int)local_b8;
        *(int *)((longlong)local_1e0 + 0x9c) = local_b8._4_4_;
        local_b8._0_4_ = 0;
        local_b8._4_4_ = 0;
        local_1e0[0x14] = (code *)0x0;
        local_1e0[0x14] = (code *)local_b0.Data;
        local_b0.Data = (FScriptContainerElement *)0x0;
        *(int *)(local_1e0 + 0x15) = (int)local_a8;
        *(int *)((longlong)local_1e0 + 0xac) = local_a8._4_4_;
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        *(uint *)(local_1e0 + 0x16) = local_a0;
        local_1e0[0x17] = (code *)local_98;
        if (local_1e0 + 1 != (code **)0x0) {
          local_208[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                         ::Call;
        }
        this_01 = FRenderCommandList::GetInstanceTLS();
        if (this_01 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame_::__l16::TSTR_NDIDynamicMesh_SimCacheWrite1385>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_208);
        }
        else {
          this_02 = FRenderCommandList::GetRenderThread(this_01);
          local_88._0_8_ = local_208[0];
          local_208[0] = (code *)0x0;
          local_60 = local_1e0;
          local_1e0 = (code **)0x0;
          local_88._16_8_ = local_1f8[0];
          local_88._24_8_ = local_1f8[1];
          local_88._32_8_ = local_1f8[2];
          local_58 = 2;
          pFVar13 = (FRenderCommandTag *)
                    TRenderCommandTag<`UNiagaraDataInterfaceDynamicMesh::SimCacheWriteFrame'::__l16::TSTR_NDIDynamicMesh_SimCacheWrite1385>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar13);
          uVar18 = (ulonglong)local_58;
          if ((2 < uVar18) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_88._0_8_ != (code *)0x0) {
              ppcVar15 = (code **)(local_88 + 0x10);
              if (local_60 != (code **)0x0) {
                ppcVar15 = local_60;
              }
              (**(code **)(*ppcVar15 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])(local_88);
          }
        }
        if (local_208[0] != (code *)0x0) {
          ppcVar15 = local_208 + 2;
          if (local_1e0 != (code **)0x0) {
            ppcVar15 = local_1e0;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
        if (local_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
        if (local_d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.Data);
        }
        FlushRenderingCommands();
      }
      if (local_1d8.Sections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Sections.AllocatorInstance.Data);
      }
      if (local_1d8.VertexData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.VertexData.AllocatorInstance.Data);
      }
      if (local_1d8.IndexData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.IndexData.AllocatorInstance.Data);
      }
      return true;
    }
    if (iVar10 == local_1d8.Sections.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_1d8.Sections.AllocatorInstance,&local_1d8.Sections.ArrayMax);
    }
    local_1d8.Sections.ArrayNum = iVar10 + 1;
    pFVar1 = local_1d8.Sections.AllocatorInstance.Data + (longlong)iVar10 * 0x18;
    DefaultConstructItems<FNDIDynamicMeshSimCacheSection,int>(pFVar1,1);
    *(int *)pFVar1 = piVar20[-3];
    *(int *)(pFVar1 + 4) = piVar20[-2];
    *(int *)(pFVar1 + 8) = piVar20[-1];
    iVar10 = *piVar20;
    if ((iVar10 < 0) || (*(int *)((longlong)param_4 + 0x88) <= iVar10)) {
      local_270 = 0;
      pUVar17 = (UObject *)0x0;
LAB_148ed3be9:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar17);
      }
    }
    else {
      if ((*(int *)((longlong)param_4 + 0x88) <= iVar10) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pUVar17 = *(UObject **)((longlong)iVar10 * 0x40 + *(longlong *)((longlong)param_4 + 0x80));
      local_278 = pUVar17;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar17 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        goto LAB_148ed3be9;
      }
    }
    *(UObject **)(pFVar1 + 0x10) = pUVar17;
    piVar20 = piVar20 + 4;
    iVar10 = local_1d8.Sections.ArrayNum;
  } while( true );
}

// StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh @ 148ed4c00

void __cdecl
UNiagaraDataInterfaceDynamicMesh::StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh(void)

{
  return;
}

// VMAllocateSectionTriangles @ 148ed78c0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMAllocateSectionTriangles
          (FVectorVMExternalFunctionContext *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  FNDIInstanceData_GameThread *pFVar18;
  int iVar19;
  float fVar20;
  int local_res10;
  int local_c0 [2];
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_60,param_1);
  local_98[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  iVar17 = local_98[0];
  iVar13 = local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_80[0] = 0;
  local_a0 = pfVar6 + iVar13;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar14 = local_80[0];
  iVar11 = local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_68[0] = 0;
  local_88 = pfVar7 + iVar11;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar19 = local_68[0];
  iVar12 = local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_c0[0] = 0;
  local_70 = pfVar8 + iVar12;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  local_b0[0] = 0;
  pfVar9 = pfVar9 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_res10 = 0;
  local_b8 = local_b8 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = pfVar7 + iVar11;
  local_78 = pfVar8 + iVar12;
  pfVar6 = pfVar6 + iVar13;
  pFVar18 = local_60[0].Ptr;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *local_78;
      fVar15 = 0.0;
      local_a8 = pfVar6 + iVar17;
      fVar2 = *local_90;
      local_90 = local_90 + iVar14;
      fVar20 = -NAN;
      local_78 = local_78 + iVar19;
      fVar16 = 0.0;
      if ((((*pfVar6 != 0.0) && (fVar16 = fVar15, -1 < (int)fVar2)) &&
          ((int)fVar2 < (pFVar18->Sections).ArrayNum)) && (0 < (int)fVar1)) {
        lpCriticalSection = &pFVar18->CpuDataGuard;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar5 = 0;
        if ((int)fVar2 < (pFVar18->Sections).ArrayNum) {
          uVar5 = ~(uint)fVar2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (pFVar18->Sections).AllocatorInstance.Data + (longlong)(int)fVar2 * 0x10;
        iVar17 = *(int *)(pFVar10 + 4);
        iVar14 = *(int *)(pFVar10 + 8);
        fVar16 = (float)(iVar17 - iVar14);
        if (0 < (int)fVar16) {
          fVar20 = (float)(*(int *)pFVar10 + iVar14);
          if ((int)fVar16 < (int)fVar1) {
            fVar1 = fVar16;
          }
          fVar16 = fVar1;
          iVar17 = (int)fVar16 + iVar14;
        }
        *(int *)(pFVar10 + 8) = iVar17;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar18 = local_60[0].Ptr;
      }
      *pfVar9 = fVar20;
      local_res10 = local_res10 + 1;
      *local_b8 = fVar16;
      pfVar9 = pfVar9 + local_c0[0];
      local_b8 = local_b8 + local_b0[0];
      pfVar6 = local_a8;
      iVar17 = local_98[0];
      iVar14 = local_80[0];
      iVar19 = local_68[0];
    } while (local_res10 < param_1->NumInstances);
  }
  return;
}

// VMAppendTriangle @ 148ed7b50

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMAppendTriangle(FVectorVMExternalFunctionContext *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  code *pcVar26;
  int iVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  int local_res8;
  float *local_6a8;
  int local_6a0 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_698;
  undefined8 local_688;
  float local_680;
  float local_67c;
  float fStack_678;
  undefined4 local_674;
  float local_670;
  float fStack_66c;
  undefined4 local_668;
  float local_664;
  float fStack_660;
  undefined4 local_65c;
  undefined8 local_658;
  FLinearColor_u_0 local_650;
  undefined8 local_638;
  float local_630;
  float local_62c;
  float fStack_628;
  undefined4 local_624;
  float local_620;
  float fStack_61c;
  undefined4 local_618;
  float local_614;
  float fStack_610;
  undefined4 local_60c;
  undefined8 local_608;
  FLinearColor_u_0 local_600;
  undefined8 local_5e8;
  float local_5e0;
  float local_5dc;
  float fStack_5d8;
  undefined4 local_5d4;
  float local_5d0;
  float fStack_5cc;
  undefined4 local_5c8;
  float local_5c4;
  float fStack_5c0;
  undefined4 local_5bc;
  undefined8 local_5b8;
  FLinearColor_u_0 local_5b0;
  float local_598;
  float fStack_594;
  float *local_590;
  float *local_588;
  int local_580 [2];
  float *local_578;
  float *local_570;
  int local_568 [4];
  FNDIInputParam<UE::Math::TVector<float>_> local_558;
  FNDIInputParam<UE::Math::TVector<float>_> local_510;
  FNDIInputParam<UE::Math::TVector<float>_> local_4c8;
  FNDIInputParam<UE::Math::TVector<float>_> local_480;
  FNDIInputParam<UE::Math::TVector2<float>_> local_438;
  FNDIInputParam<FLinearColor> local_408;
  FNDIInputParam<UE::Math::TVector<float>_> local_3a8;
  FNDIInputParam<UE::Math::TVector<float>_> local_360;
  FNDIInputParam<UE::Math::TVector<float>_> local_318;
  FNDIInputParam<UE::Math::TVector<float>_> local_2d0;
  FNDIInputParam<UE::Math::TVector2<float>_> local_288;
  FNDIInputParam<FLinearColor> local_258;
  FNDIInputParam<UE::Math::TVector<float>_> local_1f8;
  FNDIInputParam<UE::Math::TVector<float>_> local_1b0;
  FNDIInputParam<UE::Math::TVector<float>_> local_168;
  FNDIInputParam<UE::Math::TVector<float>_> local_120;
  FNDIInputParam<UE::Math::TVector2<float>_> local_d8;
  FNDIInputParam<FLinearColor> local_a8;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_698,param_1);
  local_580[0] = 0;
  local_590 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_580);
  local_568[0] = 0;
  local_590 = local_590 + local_580[0] * param_1->PerInstanceFnInstanceIdx;
  local_588 = local_590;
  local_578 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_568);
  local_578 = local_578 + local_568[0] * param_1->PerInstanceFnInstanceIdx;
  local_570 = local_578;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_558,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_510,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_4c8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_480,param_1);
  FNDIInputParam<UE::Math::TVector2<float>_>::FNDIInputParam<UE::Math::TVector2<float>_>
            (&local_438,param_1);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&local_408,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_3a8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_360,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_318,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_2d0,param_1);
  FNDIInputParam<UE::Math::TVector2<float>_>::FNDIInputParam<UE::Math::TVector2<float>_>
            (&local_288,param_1);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&local_258,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1f8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1b0,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_168,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_120,param_1);
  FNDIInputParam<UE::Math::TVector2<float>_>::FNDIInputParam<UE::Math::TVector2<float>_>
            (&local_d8,param_1);
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&local_a8,param_1);
  local_6a0[0] = 0;
  local_6a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_6a0);
  local_6a8 = local_6a8 + local_6a0[0] * param_1->PerInstanceFnInstanceIdx;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_698.Ptr);
  pFVar24 = ((local_698.Ptr)->IndexData).AllocatorInstance.Data;
  local_res8 = 0;
  if (0 < param_1->NumInstances) {
    do {
      fVar22 = *local_590;
      local_590 = local_590 + local_580[0];
      fVar23 = *local_578;
      lVar32 = (longlong)(int)fVar23;
      local_578 = local_578 + local_568[0];
      pfVar1 = local_558.Z.InputPtr + local_558.Z.AdvanceOffset;
      pfVar2 = local_558.Y.InputPtr + local_558.Y.AdvanceOffset;
      pfVar3 = local_558.X.InputPtr + local_558.X.AdvanceOffset;
      local_680 = *local_558.Z.InputPtr;
      local_688 = CONCAT44(*local_558.Y.InputPtr,*local_558.X.InputPtr);
      pfVar4 = local_510.Z.InputPtr + local_510.Z.AdvanceOffset;
      local_674 = *local_510.Z.InputPtr;
      fStack_678 = *local_510.Y.InputPtr;
      local_67c = *local_510.X.InputPtr;
      local_510.Y.InputPtr = local_510.Y.InputPtr + local_510.Y.AdvanceOffset;
      local_668 = *local_4c8.Z.InputPtr;
      local_510.X.InputPtr = local_510.X.InputPtr + local_510.X.AdvanceOffset;
      local_4c8.Z.InputPtr = local_4c8.Z.InputPtr + local_4c8.Z.AdvanceOffset;
      fStack_66c = *local_4c8.Y.InputPtr;
      local_670 = *local_4c8.X.InputPtr;
      local_4c8.Y.InputPtr = local_4c8.Y.InputPtr + local_4c8.Y.AdvanceOffset;
      local_4c8.X.InputPtr = local_4c8.X.InputPtr + local_4c8.X.AdvanceOffset;
      pfVar5 = local_480.Z.InputPtr + local_480.Z.AdvanceOffset;
      pfVar6 = local_480.Y.InputPtr + local_480.Y.AdvanceOffset;
      local_65c = *local_480.Z.InputPtr;
      fStack_660 = *local_480.Y.InputPtr;
      local_664 = *local_480.X.InputPtr;
      local_480.X.InputPtr = local_480.X.InputPtr + local_480.X.AdvanceOffset;
      fVar20 = *local_438.Y.InputPtr;
      fVar21 = *local_438.X.InputPtr;
      local_438.Y.InputPtr = local_438.Y.InputPtr + local_438.Y.AdvanceOffset;
      local_438.X.InputPtr = local_438.X.InputPtr + local_438.X.AdvanceOffset;
      local_658 = CONCAT44(fVar20,fVar21);
      local_650._s_0.B = *local_408.B.InputPtr;
      local_650._s_0.G = *local_408.G.InputPtr;
      local_650._s_0.R = *local_408.R.InputPtr;
      local_650._s_0.A = *local_408.A.InputPtr;
      local_408.A.InputPtr = local_408.A.InputPtr + local_408.A.AdvanceOffset;
      local_408.B.InputPtr = local_408.B.InputPtr + local_408.B.AdvanceOffset;
      local_408.G.InputPtr = local_408.G.InputPtr + local_408.G.AdvanceOffset;
      local_408.R.InputPtr = local_408.R.InputPtr + local_408.R.AdvanceOffset;
      pfVar7 = local_3a8.Z.InputPtr + local_3a8.Z.AdvanceOffset;
      local_630 = *local_3a8.Z.InputPtr;
      fVar20 = *local_3a8.Y.InputPtr;
      local_3a8.Y.InputPtr = local_3a8.Y.InputPtr + local_3a8.Y.AdvanceOffset;
      local_638 = CONCAT44(fVar20,*local_3a8.X.InputPtr);
      local_3a8.X.InputPtr = local_3a8.X.InputPtr + local_3a8.X.AdvanceOffset;
      pfVar8 = local_360.Z.InputPtr + local_360.Z.AdvanceOffset;
      local_624 = *local_360.Z.InputPtr;
      fStack_628 = *local_360.Y.InputPtr;
      local_360.Y.InputPtr = local_360.Y.InputPtr + local_360.Y.AdvanceOffset;
      local_62c = *local_360.X.InputPtr;
      local_360.X.InputPtr = local_360.X.InputPtr + local_360.X.AdvanceOffset;
      local_618 = *local_318.Z.InputPtr;
      local_318.Z.InputPtr = local_318.Z.InputPtr + local_318.Z.AdvanceOffset;
      fStack_61c = *local_318.Y.InputPtr;
      local_620 = *local_318.X.InputPtr;
      local_60c = *local_2d0.Z.InputPtr;
      local_318.Y.InputPtr = local_318.Y.InputPtr + local_318.Y.AdvanceOffset;
      local_318.X.InputPtr = local_318.X.InputPtr + local_318.X.AdvanceOffset;
      local_2d0.Z.InputPtr = local_2d0.Z.InputPtr + local_2d0.Z.AdvanceOffset;
      fStack_610 = *local_2d0.Y.InputPtr;
      local_614 = *local_2d0.X.InputPtr;
      local_2d0.Y.InputPtr = local_2d0.Y.InputPtr + local_2d0.Y.AdvanceOffset;
      fVar20 = *local_288.Y.InputPtr;
      local_2d0.X.InputPtr = local_2d0.X.InputPtr + local_2d0.X.AdvanceOffset;
      fVar21 = *local_288.X.InputPtr;
      local_288.Y.InputPtr = local_288.Y.InputPtr + local_288.Y.AdvanceOffset;
      local_288.X.InputPtr = local_288.X.InputPtr + local_288.X.AdvanceOffset;
      local_608 = CONCAT44(fVar20,fVar21);
      local_600._s_0.G = *local_258.G.InputPtr;
      pfVar9 = local_258.A.InputPtr + local_258.A.AdvanceOffset;
      pfVar10 = local_258.B.InputPtr + local_258.B.AdvanceOffset;
      local_258.G.InputPtr = local_258.G.InputPtr + local_258.G.AdvanceOffset;
      pfVar11 = local_258.R.InputPtr + local_258.R.AdvanceOffset;
      local_600._s_0.B = *local_258.B.InputPtr;
      local_600._s_0.R = *local_258.R.InputPtr;
      local_600._s_0.A = *local_258.A.InputPtr;
      pfVar12 = local_1f8.Z.InputPtr + local_1f8.Z.AdvanceOffset;
      pfVar13 = local_1f8.Y.InputPtr + local_1f8.Y.AdvanceOffset;
      pfVar14 = local_1f8.X.InputPtr + local_1f8.X.AdvanceOffset;
      local_5e0 = *local_1f8.Z.InputPtr;
      local_5e8 = CONCAT44(*local_1f8.Y.InputPtr,*local_1f8.X.InputPtr);
      pfVar15 = local_1b0.Z.InputPtr + local_1b0.Z.AdvanceOffset;
      local_5d4 = *local_1b0.Z.InputPtr;
      fStack_5d8 = *local_1b0.Y.InputPtr;
      local_5dc = *local_1b0.X.InputPtr;
      local_1b0.Y.InputPtr = local_1b0.Y.InputPtr + local_1b0.Y.AdvanceOffset;
      local_5c8 = *local_168.Z.InputPtr;
      local_1b0.X.InputPtr = local_1b0.X.InputPtr + local_1b0.X.AdvanceOffset;
      local_168.Z.InputPtr = local_168.Z.InputPtr + local_168.Z.AdvanceOffset;
      fStack_5cc = *local_168.Y.InputPtr;
      local_5d0 = *local_168.X.InputPtr;
      local_168.Y.InputPtr = local_168.Y.InputPtr + local_168.Y.AdvanceOffset;
      local_168.X.InputPtr = local_168.X.InputPtr + local_168.X.AdvanceOffset;
      pfVar16 = local_120.Z.InputPtr + local_120.Z.AdvanceOffset;
      pfVar17 = local_120.Y.InputPtr + local_120.Y.AdvanceOffset;
      pfVar18 = local_120.X.InputPtr + local_120.X.AdvanceOffset;
      local_5bc = *local_120.Z.InputPtr;
      fStack_5c0 = *local_120.Y.InputPtr;
      local_5c4 = *local_120.X.InputPtr;
      pfVar19 = local_d8.Y.InputPtr + local_d8.Y.AdvanceOffset;
      local_598 = *local_d8.X.InputPtr;
      fStack_594 = *local_d8.Y.InputPtr;
      local_d8.X.InputPtr = local_d8.X.InputPtr + local_d8.X.AdvanceOffset;
      local_5b8 = CONCAT44(fStack_594,local_598);
      local_5b0._s_0.G = *local_a8.G.InputPtr;
      local_5b0._s_0.B = *local_a8.B.InputPtr;
      local_5b0._s_0.A = *local_a8.A.InputPtr;
      local_5b0._s_0.R = *local_a8.R.InputPtr;
      local_a8.A.InputPtr = local_a8.A.InputPtr + local_a8.A.AdvanceOffset;
      local_a8.B.InputPtr = local_a8.B.InputPtr + local_a8.B.AdvanceOffset;
      local_a8.G.InputPtr = local_a8.G.InputPtr + local_a8.G.AdvanceOffset;
      local_a8.R.InputPtr = local_a8.R.InputPtr + local_a8.R.AdvanceOffset;
      local_558.X.InputPtr = pfVar3;
      local_558.Y.InputPtr = pfVar2;
      local_558.Z.InputPtr = pfVar1;
      local_510.Z.InputPtr = pfVar4;
      local_480.Y.InputPtr = pfVar6;
      local_480.Z.InputPtr = pfVar5;
      local_3a8.Z.InputPtr = pfVar7;
      local_360.Z.InputPtr = pfVar8;
      local_258.R.InputPtr = pfVar11;
      local_258.B.InputPtr = pfVar10;
      local_258.A.InputPtr = pfVar9;
      local_1f8.X.InputPtr = pfVar14;
      local_1f8.Y.InputPtr = pfVar13;
      local_1f8.Z.InputPtr = pfVar12;
      local_1b0.Z.InputPtr = pfVar15;
      local_120.X.InputPtr = pfVar18;
      local_120.Y.InputPtr = pfVar17;
      local_120.Z.InputPtr = pfVar16;
      local_d8.Y.InputPtr = pfVar19;
      if (((fVar22 != 0.0) && (-1 < (int)fVar23)) &&
         ((int)fVar23 < ((local_698.Ptr)->Sections).ArrayNum)) {
        lpCriticalSection = &(local_698.Ptr)->CpuDataGuard;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar29 = 0;
        if ((int)fVar23 < ((local_698.Ptr)->Sections).ArrayNum) {
          uVar29 = ~(uint)fVar23 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar26 = (code *)swi(3);
          (*pcVar26)();
          return;
        }
        iVar27 = local_6a0[0];
        pFVar25 = ((local_698.Ptr)->Sections).AllocatorInstance.Data;
        fVar20 = *(float *)(pFVar25 + lVar32 * 0x10 + 8);
        if ((int)fVar20 < *(int *)(pFVar25 + lVar32 * 0x10 + 4)) {
          *(int *)(pFVar25 + lVar32 * 0x10 + 8) = (int)fVar20 + 1;
          *local_6a8 = fVar20;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          uVar29 = (int)fVar20 * 3;
          lVar32 = (longlong)(int)uVar29;
          uVar34 = uVar29 + 1;
          *(uint *)(pFVar24 + lVar32 * 4) = uVar29;
          *(uint *)(pFVar24 + lVar32 * 4 + 4) = uVar34;
          uVar33 = uVar29 + 2;
          *(uint *)(pFVar24 + lVar32 * 4 + 8) = uVar33;
          if ((local_698.Ptr)->PositionOffset != 0xffffffff) {
            if (((local_698.Ptr)->NumVertices <= uVar29) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Vertex >= 0 && Vertex < NumVertices&& PositionOffset != INDEX_NONE"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                    ,0x111,L""), bVar28)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            lVar32 = (ulonglong)(local_698.Ptr)->PositionOffset + (ulonglong)uVar29 * 0xc;
            pFVar25 = ((local_698.Ptr)->VertexData).AllocatorInstance.Data;
            *(undefined8 *)(pFVar25 + lVar32) = local_688;
            *(float *)(pFVar25 + lVar32 + 8) = local_680;
            if ((((local_698.Ptr)->NumVertices <= uVar34) ||
                ((local_698.Ptr)->PositionOffset == 0xffffffff)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Vertex >= 0 && Vertex < NumVertices&& PositionOffset != INDEX_NONE"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                    ,0x111,L""), bVar28)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            lVar32 = (ulonglong)(local_698.Ptr)->PositionOffset + (ulonglong)uVar34 * 0xc;
            pFVar25 = ((local_698.Ptr)->VertexData).AllocatorInstance.Data;
            *(undefined8 *)(pFVar25 + lVar32) = local_638;
            *(float *)(pFVar25 + lVar32 + 8) = local_630;
            if ((((local_698.Ptr)->NumVertices <= uVar33) ||
                ((local_698.Ptr)->PositionOffset == 0xffffffff)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Vertex >= 0 && Vertex < NumVertices&& PositionOffset != INDEX_NONE"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                    ,0x111,L""), bVar28)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            lVar32 = (ulonglong)(local_698.Ptr)->PositionOffset + (ulonglong)uVar33 * 0xc;
            pFVar25 = ((local_698.Ptr)->VertexData).AllocatorInstance.Data;
            *(undefined8 *)(pFVar25 + lVar32) = local_5e8;
            *(float *)(pFVar25 + lVar32 + 8) = local_5e0;
          }
          if ((local_698.Ptr)->TangentBasisOffset != 0xffffffff) {
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexTangentBasis
                      (local_698.Ptr,uVar29,(TVector<float> *)&local_67c,
                       (TVector<float> *)&local_670,(TVector<float> *)&local_664);
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexTangentBasis
                      (local_698.Ptr,uVar34,(TVector<float> *)&local_62c,
                       (TVector<float> *)&local_620,(TVector<float> *)&local_614);
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexTangentBasis
                      (local_698.Ptr,uVar33,(TVector<float> *)&local_5dc,
                       (TVector<float> *)&local_5d0,(TVector<float> *)&local_5c4);
          }
          if ((local_698.Ptr)->TexCoordOffset != 0xffffffff) {
            if ((((local_698.Ptr)->NumVertices <= uVar29) || ((local_698.Ptr)->NumTexCoords == 0))
               && (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                       ,0x12a,L""), bVar28)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            *(undefined8 *)
             (((local_698.Ptr)->VertexData).AllocatorInstance.Data +
             (ulonglong)(local_698.Ptr)->TexCoordOffset + (ulonglong)uVar29 * 8) = local_658;
            uVar30 = (int)fVar20 * 3 + 1;
            if ((((local_698.Ptr)->NumVertices <= uVar30) || ((local_698.Ptr)->NumTexCoords == 0))
               || ((local_698.Ptr)->TexCoordOffset == 0xffffffff)) {
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                  ,0x12a,L"");
              if (bVar28) {
                pcVar26 = (code *)swi(3);
                (*pcVar26)();
                return;
              }
              uVar30 = (int)fVar20 * 3 + 1;
            }
            uVar31 = (int)fVar20 * 3 + 2;
            *(undefined8 *)
             (((local_698.Ptr)->VertexData).AllocatorInstance.Data +
             (ulonglong)(local_698.Ptr)->TexCoordOffset + (ulonglong)uVar30 * 8) = local_608;
            if (((((local_698.Ptr)->NumVertices <= uVar31) || ((local_698.Ptr)->NumTexCoords == 0))
                || ((local_698.Ptr)->TexCoordOffset == 0xffffffff)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                    ,0x12a,L""), bVar28)) {
              pcVar26 = (code *)swi(3);
              (*pcVar26)();
              return;
            }
            *(undefined8 *)
             (((local_698.Ptr)->VertexData).AllocatorInstance.Data +
             (ulonglong)(local_698.Ptr)->TexCoordOffset + (ulonglong)uVar31 * 8) = local_5b8;
          }
          if ((local_698.Ptr)->ColorOffset != 0xffffffff) {
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexColor
                      (local_698.Ptr,uVar29,(FLinearColor *)&local_650._s_0);
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexColor
                      (local_698.Ptr,uVar34,(FLinearColor *)&local_600._s_0);
            NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexColor
                      (local_698.Ptr,uVar33,(FLinearColor *)&local_5b0._s_0);
          }
        }
        else {
          *local_6a8 = -NAN;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        local_6a8 = local_6a8 + iVar27;
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_1->NumInstances);
  }
  return;
}

// VMClearAllSectionTriangles @ 148ed8a10

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMClearAllSectionTriangles
          (FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_58 [2];
  int local_38 [4];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_58,param_1);
  local_38[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  lVar5 = (longlong)local_38[0];
  iVar6 = 0;
  pfVar2 = pfVar2 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      if (*pfVar2 != 0.0) {
        iVar1 = ((local_58[0].Ptr)->Sections).ArrayNum;
        pFVar3 = ((local_58[0].Ptr)->Sections).AllocatorInstance.Data;
        pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
        while( true ) {
          if (((local_58[0].Ptr)->Sections).ArrayNum != iVar1) {
            `TCheckedPointerIterator<NDIDynamicMeshLocal::FNDIInstanceSection,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar3 == pFVar4) break;
          *(undefined4 *)(pFVar3 + 8) = 0;
          pFVar3 = pFVar3 + 0x10;
        }
      }
      iVar6 = iVar6 + 1;
      pfVar2 = pfVar2 + lVar5;
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMClearSectionTriangles @ 148ed8b10

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMClearSectionTriangles(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_68;
  float *local_58;
  float *local_50;
  int local_48 [2];
  float *local_40;
  float *local_38;
  int local_30 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_68,param_1);
  iVar10 = 0;
  local_48[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  iVar4 = local_48[0];
  local_30[0] = 0;
  pfVar8 = pfVar8 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_50 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0];
  pfVar9 = pfVar9 + local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_38 = pfVar9;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar8;
      fVar2 = *pfVar9;
      pfVar8 = pfVar8 + iVar4;
      pfVar9 = pfVar9 + iVar5;
      if (((fVar1 != 0.0) && (-1 < (int)fVar2)) &&
         ((int)fVar2 < ((local_68.Ptr)->Sections).ArrayNum)) {
        uVar7 = 0;
        if ((int)fVar2 < ((local_68.Ptr)->Sections).ArrayNum) {
          uVar7 = ~(uint)fVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_58 = pfVar8, local_40 = pfVar9,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)
         (((local_68.Ptr)->Sections).AllocatorInstance.Data + (longlong)(int)fVar2 * 0x10 + 8) = 0;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetLocalBounds @ 148ed9d70

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetLocalBounds(FVectorVMExternalFunctionContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_98;
  FNDIOutputParam<UE::Math::TVector<float>_> local_88;
  FNDIOutputParam<UE::Math::TVector<float>_> local_58;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_98,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_88,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_58,param_1);
  iVar7 = 0;
  dVar1 = ((local_98.Ptr)->LocalBounds).Min.field0_0x0._s_0.X;
  dVar2 = ((local_98.Ptr)->LocalBounds).Min.field0_0x0._s_0.Y;
  dVar3 = ((local_98.Ptr)->LocalBounds).Min.field0_0x0._s_0.Z;
  dVar4 = ((local_98.Ptr)->LocalBounds).Max.field0_0x0._s_0.X;
  dVar5 = ((local_98.Ptr)->LocalBounds).Max.field0_0x0._s_0.Y;
  dVar6 = ((local_98.Ptr)->LocalBounds).Max.field0_0x0._s_0.Z;
  if (0 < param_1->NumInstances) {
    do {
      iVar7 = iVar7 + 1;
      *local_88.X.Register = (float)dVar1;
      *local_88.Y.Register = (float)dVar2;
      *local_88.Z.Register = (float)dVar3;
      *local_58.X.Register = (float)dVar4;
      *local_58.Y.Register = (float)dVar5;
      *local_58.Z.Register = (float)dVar6;
      local_88.Y.Register = local_88.Y.Register + local_88.Y.AdvanceOffset;
      local_88.Z.Register = local_88.Z.Register + local_88.Z.AdvanceOffset;
      local_58.Y.Register = local_58.Y.Register + local_58.Y.AdvanceOffset;
      local_58.X.Register = local_58.X.Register + local_58.X.AdvanceOffset;
      local_88.X.Register = local_88.X.Register + local_88.X.AdvanceOffset;
      local_58.Z.Register = local_58.Z.Register + local_58.Z.AdvanceOffset;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// VMGetMeshProperties @ 148ed9f90

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetMeshProperties(FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int local_70 [4];
  int local_60 [4];
  int local_50 [4];
  int local_40 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_38;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_38,param_1);
  iVar10 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  lVar11 = (longlong)local_40[0];
  local_70[0] = 0;
  iVar9 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar6 = local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_60[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar7 = local_60[0] * param_1->PerInstanceFnInstanceIdx;
  local_50[0] = 0;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar8 = local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_40[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar6;
    pfVar1 = pfVar1 + iVar9;
    pfVar5 = pfVar5 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar7;
    pfVar4 = pfVar4 + iVar8;
    do {
      *pfVar1 = (float)(local_38.Ptr)->NumTriangles;
      *pfVar2 = (float)(local_38.Ptr)->NumVertices;
      *pfVar3 = (float)(local_38.Ptr)->NumTexCoords;
      *pfVar4 = (float)-(uint)((local_38.Ptr)->ColorOffset != 0xffffffff);
      iVar10 = iVar10 + 1;
      *pfVar5 = (float)-(uint)((local_38.Ptr)->TangentBasisOffset != 0xffffffff);
      pfVar2 = pfVar2 + local_70[0];
      pfVar1 = pfVar1 + lVar11;
      pfVar5 = pfVar5 + local_40[0];
      pfVar3 = pfVar3 + local_60[0];
      pfVar4 = pfVar4 + local_50[0];
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetSectionCount @ 148eda5e0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetSectionCount(FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)((local_18.Ptr)->Sections).ArrayNum;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetSectionData @ 148eda660

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetSectionData(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int local_90 [2];
  float *local_88;
  int local_80 [2];
  float *local_78;
  int local_70 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_68;
  float *local_58;
  float *local_50;
  int local_48 [4];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_68,param_1);
  local_48[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  local_90[0] = 0;
  pfVar6 = pfVar6 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_50 = pfVar6;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_80[0] = 0;
  pfVar7 = pfVar7 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_70[0] = 0;
  pfVar8 = pfVar8 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar11 = 0;
  pfVar9 = pfVar9 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  iVar10 = local_70[0];
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + local_48[0];
      if (((int)fVar1 < 0) || (((local_68.Ptr)->Sections).ArrayNum <= (int)fVar1)) {
        *pfVar7 = 0.0;
        *pfVar8 = 0.0;
        *pfVar9 = 0.0;
      }
      else {
        uVar5 = 0;
        if ((int)fVar1 < ((local_68.Ptr)->Sections).ArrayNum) {
          uVar5 = ~(uint)fVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (local_78 = pfVar9, local_58 = pfVar6,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = ((local_68.Ptr)->Sections).AllocatorInstance.Data;
        *pfVar7 = -NAN;
        *pfVar8 = *(float *)(pFVar2 + (longlong)(int)fVar1 * 0x10 + 4);
        *pfVar9 = *(float *)(pFVar2 + (longlong)(int)fVar1 * 0x10 + 0xc);
        iVar10 = local_70[0];
      }
      pfVar9 = pfVar9 + iVar10;
      pfVar7 = pfVar7 + local_90[0];
      pfVar8 = pfVar8 + local_80[0];
      iVar11 = iVar11 + 1;
      local_88 = pfVar8;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// VMGetTriangleVertices @ 148eda980

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetTriangleVertices(FVectorVMExternalFunctionContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int local_90 [4];
  int local_80 [4];
  int local_70 [2];
  int local_68 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_60,param_1);
  local_68[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar11 = (longlong)local_68[0];
  local_80[0] = 0;
  iVar8 = local_68[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  lVar12 = (longlong)local_80[0];
  local_90[0] = 0;
  pfVar4 = pfVar4 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  local_80[0] = 0;
  pfVar5 = pfVar5 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  local_70[0] = 0;
  pfVar6 = pfVar6 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  if (((local_60[0].Ptr)->IndexData).ArrayNum < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = (local_60[0].Ptr)->NumTriangles;
  }
  pFVar1 = ((local_60[0].Ptr)->IndexData).AllocatorInstance.Data;
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    pfVar7 = pfVar7 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar3 = pfVar3 + iVar8;
    do {
      fVar2 = *pfVar3;
      if (((int)fVar2 < 0) || ((int)uVar9 <= (int)fVar2)) {
        fVar2 = 0.0;
        *pfVar4 = 0.0;
        *pfVar5 = 0.0;
        *pfVar6 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        iVar8 = (int)fVar2 * 3;
        *pfVar5 = *(float *)(pFVar1 + (longlong)iVar8 * 4);
        *pfVar6 = *(float *)(pFVar1 + (longlong)iVar8 * 4 + 4);
        fVar2 = *(float *)(pFVar1 + (longlong)iVar8 * 4 + 8);
      }
      pfVar6 = pfVar6 + local_80[0];
      pfVar5 = pfVar5 + local_90[0];
      pfVar4 = pfVar4 + lVar12;
      iVar10 = iVar10 + 1;
      *pfVar7 = fVar2;
      pfVar7 = pfVar7 + local_70[0];
      pfVar3 = pfVar3 + lVar11;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// VMGetVertexColor @ 148edab70

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetVertexColor(FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res10;
  int local_c0 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_b8;
  float *local_a8;
  float *local_a0;
  int local_98 [4];
  FNDIOutputParam<FLinearColor> local_88;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_b8,param_1);
  local_res10 = 0;
  local_98[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  iVar6 = local_98[0];
  local_c0[0] = 0;
  pfVar8 = pfVar8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  iVar5 = local_c0[0];
  pfVar9 = pfVar9 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_88,param_1);
  fVar4 = __real_3b808081;
  if ((((local_b8.Ptr)->VertexData).ArrayNum < 1) || ((local_b8.Ptr)->ColorOffset == 0xffffffff)) {
    uVar10 = 0;
  }
  else {
    uVar10 = (local_b8.Ptr)->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar12 = *pfVar8;
      pfVar8 = pfVar8 + iVar6;
      if (((int)fVar12 < 0) || ((int)uVar10 <= (int)fVar12)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      *pfVar9 = (float)((uVar11 ^ 1) - 1);
      if ((char)uVar11 == '\0') {
        fVar12 = FLinearColor::White.field0_0x0._0_4_;
        fVar15 = FLinearColor::White.field0_0x0._4_4_;
        fVar14 = FLinearColor::White.field0_0x0._8_4_;
        fVar13 = FLinearColor::White.field0_0x0._12_4_;
      }
      else {
        if ((((local_b8.Ptr)->NumVertices <= (uint)fVar12) ||
            ((local_b8.Ptr)->ColorOffset == 0xffffffff)) &&
           (local_a8 = pfVar8,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Vertex >= 0 && Vertex < NumVertices && ColorOffset != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                              ,0x10b,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = (ulonglong)(local_b8.Ptr)->ColorOffset + (ulonglong)(uint)fVar12 * 4;
        pFVar2 = ((local_b8.Ptr)->VertexData).AllocatorInstance.Data;
        fVar12 = FLinearColor::sRGBToLinearTable[(byte)pFVar2[lVar1 + 2]];
        fVar15 = FLinearColor::sRGBToLinearTable[(byte)pFVar2[lVar1 + 1]];
        fVar14 = FLinearColor::sRGBToLinearTable[(byte)pFVar2[lVar1]];
        fVar13 = (float)(byte)pFVar2[lVar1 + 3] * fVar4;
      }
      local_res10 = local_res10 + 1;
      *local_88.R.Register = fVar12;
      local_88.R.Register = local_88.R.Register + local_88.R.AdvanceOffset;
      *local_88.G.Register = fVar15;
      local_88.G.Register = local_88.G.Register + local_88.G.AdvanceOffset;
      *local_88.B.Register = fVar14;
      local_88.B.Register = local_88.B.Register + local_88.B.AdvanceOffset;
      *local_88.A.Register = fVar13;
      local_88.A.Register = local_88.A.Register + local_88.A.AdvanceOffset;
      pfVar9 = pfVar9 + iVar5;
    } while (local_res10 < param_1->NumInstances);
  }
  return;
}

// VMGetVertexData @ 148edadb0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetVertexData(FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TVector2<float>_u_0 TVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float local_res8;
  float local_res10;
  float local_res18;
  int local_res20;
  float *local_260;
  int local_258 [2];
  float *local_250;
  int local_248 [2];
  float *local_240;
  int local_238 [2];
  undefined8 local_230;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_228;
  undefined8 local_218;
  float *local_208;
  float *local_200;
  int local_1f8 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_1f0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_1c0;
  FNDIOutputParam<UE::Math::TVector<float>_> local_190;
  FNDIOutputParam<UE::Math::TVector<float>_> local_160;
  FNDIOutputParam<FLinearColor> local_128 [3];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_228,param_1);
  local_res20 = 0;
  local_1f8[0] = 0;
  local_208 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1f8);
  local_258[0] = 0;
  local_208 = local_208 + local_1f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_200 = local_208;
  local_260 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_258);
  local_260 = local_260 + local_258[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1f0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_1c0,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_190,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_160,param_1);
  local_248[0] = 0;
  local_250 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_248);
  local_238[0] = 0;
  local_250 = local_250 + local_248[0] * param_1->PerInstanceFnInstanceIdx;
  local_240 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_238);
  local_240 = local_240 + local_238[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(local_128,param_1);
  if (((local_228.Ptr)->VertexData).ArrayNum < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = (local_228.Ptr)->NumVertices;
  }
  fVar16 = __real_3c008081;
  fVar17 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    do {
      uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      uVar24 = FLinearColor::White.field0_0x0._s_0.A;
      fVar2 = *local_208;
      uVar9 = (ulonglong)(uint)fVar2;
      local_208 = local_208 + local_1f8[0];
      if (((int)fVar2 < 0) || ((int)uVar10 <= (int)fVar2)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      local_218 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      local_res8 = FLinearColor::White.field0_0x0._s_0.R;
      local_res10 = FLinearColor::White.field0_0x0._s_0.G;
      local_res18 = FLinearColor::White.field0_0x0._s_0.B;
      uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if ((char)uVar11 != '\0') {
        if ((local_228.Ptr)->PositionOffset != 0xffffffff) {
          if (((local_228.Ptr)->NumVertices <= (uint)fVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Vertex >= 0 && Vertex < NumVertices && PositionOffset != INDEX_NONE"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                 ,0xef,L""), fVar16 = __real_3c008081, fVar17 = __real_3f800000,
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = ((local_228.Ptr)->VertexData).AllocatorInstance.Data;
          lVar1 = (ulonglong)(local_228.Ptr)->PositionOffset + uVar9 * 0xc;
          local_218 = *(undefined8 *)(pFVar5 + lVar1);
          uVar12 = *(undefined4 *)(pFVar5 + lVar1 + 8);
        }
        uVar25 = uVar20;
        uVar26 = uVar23;
        uVar27 = uVar20;
        uVar21 = uVar23;
        uVar19 = uVar28;
        uVar22 = uVar28;
        if ((local_228.Ptr)->TangentBasisOffset != 0xffffffff) {
          if (((local_228.Ptr)->NumVertices <= (uint)fVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Vertex >= 0 && Vertex < NumVertices && TangentBasisOffset != INDEX_NONE"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                 ,0xf5,L""), fVar16 = __real_3c008081, fVar17 = __real_3f800000,
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = ((local_228.Ptr)->VertexData).AllocatorInstance.Data;
          lVar1 = (ulonglong)(local_228.Ptr)->TangentBasisOffset + uVar9 * 8;
          uVar3 = *(uint *)(pFVar5 + lVar1 + 4);
          uVar4 = *(uint *)(pFVar5 + lVar1);
          uVar26 = (float)(uVar3 & 0xff) * fVar16 - fVar17;
          uVar27 = (float)(uVar3 >> 8 & 0xff) * fVar16 - fVar17;
          uVar28 = (float)(uVar3 >> 0x10 & 0xff) * fVar16 - fVar17;
          fVar18 = (float)(uVar4 >> 8 & 0xff) * fVar16 - fVar17;
          fVar14 = (float)(uVar4 >> 0x10 & 0xff) * fVar16 - fVar17;
          fVar13 = (float)(uVar4 & 0xff) * fVar16 - fVar17;
          fVar15 = (float)(uVar3 >> 0x18) * fVar16 - fVar17;
          uVar21 = (fVar14 * (float)uVar27 - fVar18 * (float)uVar28) * fVar15;
          uVar25 = (fVar13 * (float)uVar28 - fVar14 * (float)uVar26) * fVar15;
          uVar19 = (fVar18 * (float)uVar26 - fVar13 * (float)uVar27) * fVar15;
          uVar23 = ((float)uVar25 * (float)uVar28 - (float)uVar19 * (float)uVar27) * fVar15;
          uVar20 = ((float)uVar19 * (float)uVar26 - (float)uVar21 * (float)uVar28) * fVar15;
          uVar22 = ((float)uVar21 * (float)uVar27 - (float)uVar25 * (float)uVar26) * fVar15;
        }
        if ((local_228.Ptr)->TexCoordOffset != 0xffffffff) {
          if ((((local_228.Ptr)->NumVertices <= (uint)fVar2) || ((local_228.Ptr)->NumTexCoords == 0)
              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                       ,0x105,L""), fVar16 = __real_3c008081,
                   fVar17 = __real_3f800000, bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TVar8 = (TVector2<float>_u_0)
                  *(TVector2<float>_u_0 *)
                   &((TVector2<float>_u_0 *)
                    (((local_228.Ptr)->VertexData).AllocatorInstance.Data +
                    (ulonglong)(local_228.Ptr)->TexCoordOffset + uVar9 * 8))->_s_0;
        }
        if ((local_228.Ptr)->ColorOffset != 0xffffffff) {
          if (((local_228.Ptr)->NumVertices <= (uint)fVar2) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Vertex >= 0 && Vertex < NumVertices && ColorOffset != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                 ,0x10b,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar1 = (ulonglong)(local_228.Ptr)->ColorOffset + uVar9 * 4;
          pFVar5 = ((local_228.Ptr)->VertexData).AllocatorInstance.Data;
          local_res8 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar1 + 2]];
          local_res10 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar1 + 1]];
          local_res18 = FLinearColor::sRGBToLinearTable[(byte)pFVar5[lVar1]];
          uVar24 = (float)(byte)pFVar5[lVar1 + 3] * __real_3b808081;
          fVar16 = __real_3c008081;
          fVar17 = __real_3f800000;
        }
      }
      *local_260 = (float)((uVar11 ^ 1) - 1);
      *local_1f0.X.Register = (float)local_218;
      local_1f0.X.Register = local_1f0.X.Register + local_1f0.X.AdvanceOffset;
      *local_1f0.Y.Register = local_218._4_4_;
      local_230._0_4_ = TVar8._s_0.X;
      local_1f0.Y.Register = local_1f0.Y.Register + local_1f0.Y.AdvanceOffset;
      *local_1f0.Z.Register = (float)uVar12;
      local_1f0.Z.Register = local_1f0.Z.Register + local_1f0.Z.AdvanceOffset;
      *local_1c0.X.Register = (float)uVar23;
      local_1c0.X.Register = local_1c0.X.Register + local_1c0.X.AdvanceOffset;
      *local_1c0.Y.Register = (float)uVar20;
      local_1c0.Y.Register = local_1c0.Y.Register + local_1c0.Y.AdvanceOffset;
      *local_1c0.Z.Register = (float)uVar22;
      local_1c0.Z.Register = local_1c0.Z.Register + local_1c0.Z.AdvanceOffset;
      *local_190.X.Register = (float)uVar21;
      local_190.X.Register = local_190.X.Register + local_190.X.AdvanceOffset;
      *local_190.Y.Register = (float)uVar25;
      local_190.Y.Register = local_190.Y.Register + local_190.Y.AdvanceOffset;
      *local_190.Z.Register = (float)uVar19;
      local_190.Z.Register = local_190.Z.Register + local_190.Z.AdvanceOffset;
      *local_160.X.Register = (float)uVar26;
      local_160.X.Register = local_160.X.Register + local_160.X.AdvanceOffset;
      *local_160.Y.Register = (float)uVar27;
      local_160.Y.Register = local_160.Y.Register + local_160.Y.AdvanceOffset;
      *local_160.Z.Register = (float)uVar28;
      local_160.Z.Register = local_160.Z.Register + local_160.Z.AdvanceOffset;
      *local_250 = (float)local_230;
      local_250 = local_250 + local_248[0];
      local_230._4_4_ = TVar8._s_0.Y;
      local_res20 = local_res20 + 1;
      *local_240 = local_230._4_4_;
      *local_128[0].R.Register = local_res8;
      local_128[0].R.Register = local_128[0].R.Register + local_128[0].R.AdvanceOffset;
      *local_128[0].G.Register = local_res10;
      local_128[0].G.Register = local_128[0].G.Register + local_128[0].G.AdvanceOffset;
      *local_128[0].B.Register = local_res18;
      local_128[0].B.Register = local_128[0].B.Register + local_128[0].B.AdvanceOffset;
      *local_128[0].A.Register = (float)uVar24;
      local_128[0].A.Register = local_128[0].A.Register + local_128[0].A.AdvanceOffset;
      local_260 = local_260 + local_258[0];
      local_240 = local_240 + local_238[0];
      local_230 = TVar8;
    } while (local_res20 < param_1->NumInstances);
  }
  return;
}

// VMGetVertexPosition @ 148edb5c0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetVertexPosition(FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int local_res10;
  float local_b8;
  float fStack_b4;
  int local_a0 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_98;
  float *local_88;
  float *local_80;
  int local_78 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_70;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_98,param_1);
  local_res10 = 0;
  local_78[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_78);
  iVar6 = local_78[0];
  local_a0[0] = 0;
  pfVar8 = pfVar8 + local_78[0] * param_1->PerInstanceFnInstanceIdx;
  local_80 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  iVar5 = local_a0[0];
  iVar10 = local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_70,param_1);
  if ((((local_98.Ptr)->VertexData).ArrayNum < 1) || ((local_98.Ptr)->PositionOffset == 0xffffffff))
  {
    uVar11 = 0;
  }
  else {
    uVar11 = (local_98.Ptr)->NumVertices;
  }
  pfVar9 = pfVar9 + iVar10;
  if (0 < param_1->NumInstances) {
    do {
      fVar2 = *pfVar8;
      pfVar8 = pfVar8 + iVar6;
      if (((int)fVar2 < 0) || ((int)uVar11 <= (int)fVar2)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      *pfVar9 = (float)((uVar12 ^ 1) - 1);
      uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar13 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if ((char)uVar12 != '\0') {
        if ((((local_98.Ptr)->NumVertices <= (uint)fVar2) ||
            ((local_98.Ptr)->PositionOffset == 0xffffffff)) &&
           (local_88 = pfVar8,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Vertex >= 0 && Vertex < NumVertices && PositionOffset != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                              ,0xef,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = ((local_98.Ptr)->VertexData).AllocatorInstance.Data;
        lVar1 = (ulonglong)(local_98.Ptr)->PositionOffset + (ulonglong)(uint)fVar2 * 0xc;
        uVar14 = *(undefined8 *)(pFVar3 + lVar1);
        uVar13 = *(float *)(pFVar3 + lVar1 + 8);
      }
      local_res10 = local_res10 + 1;
      local_b8 = (float)uVar14;
      *local_70.X.Register = local_b8;
      fStack_b4 = (float)((ulonglong)uVar14 >> 0x20);
      local_70.X.Register = local_70.X.Register + local_70.X.AdvanceOffset;
      *local_70.Y.Register = fStack_b4;
      local_70.Y.Register = local_70.Y.Register + local_70.Y.AdvanceOffset;
      *local_70.Z.Register = (float)uVar13;
      local_70.Z.Register = local_70.Z.Register + local_70.Z.AdvanceOffset;
      pfVar9 = pfVar9 + iVar5;
    } while (local_res10 < param_1->NumInstances);
  }
  return;
}

// VMGetVertexTangentBasis @ 148edb7b0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetVertexTangentBasis(FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int local_res8;
  int local_170 [2];
  float *local_168;
  float *local_160;
  int local_158 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_150;
  FNDIOutputParam<UE::Math::TVector<float>_> local_120;
  FNDIOutputParam<UE::Math::TVector<float>_> local_f0;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_c0 [8];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_c0,param_1);
  local_res8 = 0;
  local_158[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_158);
  iVar12 = local_158[0];
  local_170[0] = 0;
  pfVar9 = pfVar9 + local_158[0] * param_1->PerInstanceFnInstanceIdx;
  local_160 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_170);
  pfVar10 = pfVar10 + local_170[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_150,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_120,param_1);
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_f0,param_1);
  fVar7 = __real_3c008081;
  fVar6 = __real_3f800000;
  if ((((local_c0[0].Ptr)->VertexData).ArrayNum < 1) ||
     ((local_c0[0].Ptr)->TangentBasisOffset == 0xffffffff)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (local_c0[0].Ptr)->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar14 = *pfVar9;
      pfVar9 = pfVar9 + iVar12;
      if (((int)fVar14 < 0) || ((int)uVar11 <= (int)fVar14)) {
        uVar13 = 0;
        uVar15 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        uVar13 = 1;
        if ((((local_c0[0].Ptr)->NumVertices <= (uint)fVar14) ||
            ((local_c0[0].Ptr)->TangentBasisOffset == 0xffffffff)) &&
           (local_168 = pfVar9,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Vertex >= 0 && Vertex < NumVertices && TangentBasisOffset != INDEX_NONE"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                              ,0xf5,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = ((local_c0[0].Ptr)->VertexData).AllocatorInstance.Data;
        lVar1 = (ulonglong)(local_c0[0].Ptr)->TangentBasisOffset + (ulonglong)(uint)fVar14 * 8;
        uVar2 = *(uint *)(pFVar4 + lVar1 + 4);
        uVar3 = *(uint *)(pFVar4 + lVar1);
        uVar19 = (float)(uVar2 & 0xff) * fVar7 - fVar6;
        uVar20 = (float)(uVar2 >> 8 & 0xff) * fVar7 - fVar6;
        uVar21 = (float)(uVar2 >> 0x10 & 0xff) * fVar7 - fVar6;
        fVar16 = (float)(uVar3 >> 0x10 & 0xff) * fVar7 - fVar6;
        fVar22 = (float)(uVar3 >> 8 & 0xff) * fVar7 - fVar6;
        fVar14 = (float)(uVar3 & 0xff) * fVar7 - fVar6;
        fVar18 = (float)(uVar2 >> 0x18) * fVar7 - fVar6;
        uVar25 = (fVar14 * (float)uVar21 - fVar16 * (float)uVar19) * fVar18;
        uVar23 = (fVar22 * (float)uVar19 - fVar14 * (float)uVar20) * fVar18;
        uVar24 = (fVar16 * (float)uVar20 - fVar22 * (float)uVar21) * fVar18;
        uVar15 = ((float)uVar25 * (float)uVar21 - (float)uVar23 * (float)uVar20) * fVar18;
        uVar17 = ((float)uVar23 * (float)uVar19 - (float)uVar24 * (float)uVar21) * fVar18;
        uVar26 = ((float)uVar24 * (float)uVar20 - (float)uVar25 * (float)uVar19) * fVar18;
      }
      local_res8 = local_res8 + 1;
      *pfVar10 = (float)((uVar13 ^ 1) - 1);
      *local_150.X.Register = (float)uVar15;
      local_150.X.Register = local_150.X.Register + local_150.X.AdvanceOffset;
      *local_150.Y.Register = (float)uVar17;
      local_150.Y.Register = local_150.Y.Register + local_150.Y.AdvanceOffset;
      *local_150.Z.Register = (float)uVar26;
      local_150.Z.Register = local_150.Z.Register + local_150.Z.AdvanceOffset;
      *local_120.X.Register = (float)uVar24;
      local_120.X.Register = local_120.X.Register + local_120.X.AdvanceOffset;
      *local_120.Y.Register = (float)uVar25;
      local_120.Y.Register = local_120.Y.Register + local_120.Y.AdvanceOffset;
      *local_120.Z.Register = (float)uVar23;
      local_120.Z.Register = local_120.Z.Register + local_120.Z.AdvanceOffset;
      *local_f0.X.Register = (float)uVar19;
      local_f0.X.Register = local_f0.X.Register + local_f0.X.AdvanceOffset;
      *local_f0.Y.Register = (float)uVar20;
      local_f0.Y.Register = local_f0.Y.Register + local_f0.Y.AdvanceOffset;
      *local_f0.Z.Register = (float)uVar21;
      local_f0.Z.Register = local_f0.Z.Register + local_f0.Z.AdvanceOffset;
      pfVar10 = pfVar10 + local_170[0];
      iVar12 = local_158[0];
    } while (local_res8 < param_1->NumInstances);
  }
  return;
}

// VMGetVertexTexCoord @ 148edbc20

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMGetVertexTexCoord(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  TVector2<float>_u_0 TVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FNDIInstanceData_GameThread *pFVar15;
  FNDIInstanceData_GameThread *pFVar16;
  int iVar17;
  uint uVar18;
  float local_res10;
  float fStackX_14;
  int local_b0 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_a8;
  float *local_98;
  float *local_90;
  int local_88 [2];
  float *local_80;
  float *local_78;
  int local_70 [2];
  float *local_68;
  int local_60 [2];
  float *local_58;
  int local_50 [4];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_a8,param_1);
  iVar13 = 0;
  local_70[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar14 = local_70[0];
  local_88[0] = 0;
  pfVar5 = pfVar5 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar5;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_b0[0] = 0;
  pfVar6 = pfVar6 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = pfVar6;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  local_60[0] = 0;
  pfVar7 = pfVar7 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_68 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  local_50[0] = 0;
  local_68 = local_68 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  pfVar8 = pfVar8 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  if ((((local_a8.Ptr)->VertexData).ArrayNum < 1) || ((local_a8.Ptr)->TexCoordOffset == 0xffffffff))
  {
    uVar11 = 0;
    uVar18 = 0;
  }
  else {
    uVar11 = (local_a8.Ptr)->NumVertices;
    uVar18 = (local_a8.Ptr)->NumTexCoords;
  }
  pFVar16 = local_a8.Ptr;
  iVar17 = local_50[0];
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar5;
      fVar2 = *pfVar6;
      pfVar5 = pfVar5 + iVar14;
      pfVar6 = pfVar6 + local_88[0];
      if (((((int)fVar1 < 0) || ((int)uVar11 <= (int)fVar1)) || ((int)fVar2 < 1)) ||
         ((int)uVar18 <= (int)fVar2)) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      lVar9 = (longlong)local_b0[0];
      *pfVar7 = (float)((uVar12 ^ 1) - 1);
      TVar10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if ((char)uVar12 != '\0') {
        if ((((pFVar16->NumVertices <= (uint)fVar1) || (pFVar16->NumTexCoords <= (uint)fVar2)) ||
            (pFVar15 = pFVar16, pFVar16->TexCoordOffset == 0xffffffff)) &&
           (local_98 = pfVar6, local_80 = pfVar5, local_58 = pfVar8,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                              ,0x105,L""), pFVar15 = local_a8.Ptr, iVar17 = local_50[0], bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TVar10._s_0 = *(TVector2<float>_u_0 *)
                       &((TVector2<float>_u_0 *)
                        ((pFVar16->VertexData).AllocatorInstance.Data +
                        (ulonglong)pFVar16->TexCoordOffset +
                        ((ulonglong)(uint)fVar1 + (ulonglong)(uint)fVar2) * 8))->_s_0;
        pFVar16 = pFVar15;
      }
      iVar13 = iVar13 + 1;
      local_res10 = TVar10._s_0.X;
      *local_68 = local_res10;
      fStackX_14 = TVar10._s_0.Y;
      *pfVar8 = fStackX_14;
      local_68 = local_68 + local_60[0];
      pfVar8 = pfVar8 + iVar17;
      pfVar7 = pfVar7 + lVar9;
      iVar14 = local_70[0];
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// VMSetLocalBounds @ 148edc940

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetLocalBounds(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  float *local_res8;
  float *local_res10;
  undefined8 local_150;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_148;
  FNDIInputParam<UE::Math::TVector<float>_> local_138;
  FNDIInputParam<UE::Math::TVector<float>_> local_e8 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_148,param_1);
  iVar13 = 0;
  local_150 = (ulonglong)local_150._4_4_ << 0x20;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_150);
  lVar14 = (longlong)(int)local_150;
  iVar12 = (int)local_150 * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (local_e8,param_1);
  dVar10 = __real_3f1a36e2e0000000;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (0 < param_1->NumInstances) {
    local_res10 = local_e8[0].X.InputPtr;
    local_res8 = pfVar11 + iVar12;
    do {
      if (*local_res8 != 0.0) {
        fVar1 = *local_138.Z.InputPtr;
        fVar2 = *local_e8[0].Z.InputPtr;
        fVar3 = *local_res10;
        dVar6 = ((local_148.Ptr)->LocalBounds).Min.field0_0x0._s_0.X - (double)*local_138.X.InputPtr
        ;
        uVar15 = SUB84(dVar6,0) & uVar8;
        uVar16 = (uint)((ulonglong)dVar6 >> 0x20) & uVar9;
        dVar6 = (double)*local_138.Y.InputPtr;
        dVar17 = (double)*local_e8[0].Y.InputPtr;
        if ((((dVar10 <= (double)CONCAT44(uVar16,uVar15) &&
               (double)CONCAT44(uVar16,uVar15) != dVar10) ||
             (dVar7 = ((local_148.Ptr)->LocalBounds).Min.field0_0x0._s_0.Y - dVar6,
             uVar15 = SUB84(dVar7,0) & uVar8, uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9,
             dVar10 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar10)
             ) || (dVar7 = ((local_148.Ptr)->LocalBounds).Min.field0_0x0._s_0.Z - (double)fVar1,
                  uVar15 = SUB84(dVar7,0) & uVar8, uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9
                  , dVar10 <= (double)CONCAT44(uVar16,uVar15) &&
                    (double)CONCAT44(uVar16,uVar15) != dVar10)) ||
           (((dVar7 = ((local_148.Ptr)->LocalBounds).Max.field0_0x0._s_0.X - (double)fVar3,
             uVar15 = SUB84(dVar7,0) & uVar8, uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9,
             dVar10 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar10
             || (dVar7 = ((local_148.Ptr)->LocalBounds).Max.field0_0x0._s_0.Y - dVar17,
                uVar15 = SUB84(dVar7,0) & uVar8, uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9,
                dVar10 <= (double)CONCAT44(uVar16,uVar15) &&
                (double)CONCAT44(uVar16,uVar15) != dVar10)) ||
            (dVar7 = ((local_148.Ptr)->LocalBounds).Max.field0_0x0._s_0.Z - (double)fVar2,
            uVar15 = SUB84(dVar7,0) & uVar8, uVar16 = (uint)((ulonglong)dVar7 >> 0x20) & uVar9,
            dVar10 <= (double)CONCAT44(uVar16,uVar15) && (double)CONCAT44(uVar16,uVar15) != dVar10))
           )) {
          auVar4._8_4_ = SUB84(dVar6,0);
          auVar4._0_8_ = (double)*local_138.X.InputPtr;
          auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          *(undefined1 (*) [16])&((local_148.Ptr)->LocalBounds).Min.field0_0x0 = auVar4;
          ((local_148.Ptr)->LocalBounds).Min.field0_0x0._s_0.Z = (double)fVar1;
          auVar5._8_4_ = SUB84(dVar17,0);
          auVar5._0_8_ = (double)fVar3;
          auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          *(undefined1 (*) [16])&((local_148.Ptr)->LocalBounds).Max.field0_0x0 = auVar5;
          ((local_148.Ptr)->LocalBounds).Max.field0_0x0._s_0.Z = (double)fVar2;
        }
      }
      iVar13 = iVar13 + 1;
      local_138.Z.InputPtr = local_138.Z.InputPtr + local_138.Z.AdvanceOffset;
      local_138.Y.InputPtr = local_138.Y.InputPtr + local_138.Y.AdvanceOffset;
      local_138.X.InputPtr = local_138.X.InputPtr + local_138.X.AdvanceOffset;
      local_e8[0].Z.InputPtr = local_e8[0].Z.InputPtr + local_e8[0].Z.AdvanceOffset;
      local_e8[0].Y.InputPtr = local_e8[0].Y.InputPtr + local_e8[0].Y.AdvanceOffset;
      local_res8 = local_res8 + lVar14;
      local_res10 = local_res10 + local_e8[0].X.AdvanceOffset;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// VMSetMeshProperties @ 148edcc50

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetMeshProperties(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  float *local_90;
  float *local_78;
  FNDIInstanceData_GameThread *local_70;
  int local_58 [6];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>
            ((FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> *)&local_78,param_1)
  ;
  local_58[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar6 = local_58[0];
  iVar16 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  pfVar8 = pfVar8 + iVar16;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar16 = local_58[0];
  iVar12 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  pfVar9 = pfVar9 + iVar12;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar12 = local_58[0];
  iVar13 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  pfVar10 = pfVar10 + iVar13;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar13 = local_58[0];
  iVar14 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  local_90 = local_90 + iVar14;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar14 = local_58[0];
  iVar18 = 0;
  pfVar11 = pfVar11 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar8;
      fVar2 = *pfVar9;
      pfVar8 = pfVar8 + iVar6;
      fVar3 = *pfVar10;
      pfVar9 = pfVar9 + iVar16;
      fVar4 = *pfVar11;
      local_78 = pfVar10 + iVar12;
      fVar5 = *local_90;
      pfVar11 = pfVar11 + iVar14;
      if ((fVar1 != 0.0) &&
         ((((fVar2 != (float)local_70->NumVertices || (fVar3 != (float)local_70->NumTexCoords)) ||
           ((fVar5 != 0.0) != (local_70->ColorOffset != 0xffffffff))) ||
          ((fVar4 != 0.0) != (local_70->TangentBasisOffset != 0xffffffff))))) {
        NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh(local_70);
        local_70->NumVertices = (uint)fVar2;
        local_70->NumTexCoords = (uint)fVar3;
        local_70->PositionOffset = 0;
        local_70->VertexBufferSize = (int)fVar2 * 0xc;
        if (fVar4 == 0.0) {
          uVar15 = 0xffffffff;
        }
        else {
          iVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x180))(GDynamicRHI,0x3d);
          uVar15 = (local_70->VertexBufferSize - 1) + iVar7 & -iVar7;
          local_70->VertexBufferSize = uVar15 + local_70->NumVertices * 8;
        }
        local_70->TangentBasisOffset = uVar15;
        if (local_70->NumTexCoords == 0) {
          uVar17 = 0xffffffff;
        }
        else {
          iVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x180))(GDynamicRHI,0x11);
          uVar15 = (local_70->VertexBufferSize - 1) + iVar7 & -iVar7;
          uVar17 = (ulonglong)uVar15;
          local_70->VertexBufferSize = uVar15 + local_70->NumVertices * local_70->NumTexCoords * 8;
        }
        local_70->TexCoordOffset = (uint)uVar17;
        if (fVar5 == 0.0) {
          local_70->ColorOffset = 0xffffffff;
        }
        else {
          iVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x180))
                            (GDynamicRHI,CONCAT71((int7)(uVar17 >> 8),0x25));
          uVar15 = (local_70->VertexBufferSize - 1) + iVar7 & -iVar7;
          local_70->ColorOffset = uVar15;
          local_70->VertexBufferSize = uVar15 + local_70->NumVertices * 4;
        }
      }
      iVar18 = iVar18 + 1;
      pfVar10 = local_78;
      local_90 = local_90 + iVar13;
    } while (iVar18 < param_1->NumInstances);
  }
  return;
}

// VMSetSectionCount @ 148edd080

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetSectionCount(FVectorVMExternalFunctionContext *param_1)

{
  TArray<NDIDynamicMeshLocal::FNDIInstanceSection,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  FScriptContainerElement *_Dst;
  uint uVar12;
  int iVar13;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_78;
  float *local_68;
  float *local_60;
  int local_58 [2];
  float *local_50;
  float *local_48;
  int local_40 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_78,param_1);
  iVar13 = 0;
  local_40[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar7 = local_40[0];
  local_58[0] = 0;
  pfVar10 = pfVar10 + local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_48 = pfVar10;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  bVar6 = false;
  pfVar11 = pfVar11 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  iVar9 = local_58[0];
  local_60 = pfVar11;
  if (0 < param_1->NumInstances) {
    do {
      fVar3 = *pfVar10;
      fVar4 = *pfVar11;
      pfVar10 = pfVar10 + iVar7;
      pfVar11 = pfVar11 + iVar9;
      local_68 = pfVar11;
      local_50 = pfVar10;
      if (fVar3 != 0.0) {
        fVar3 = (float)((local_78.Ptr)->Sections).ArrayNum;
        iVar9 = local_58[0];
        if (fVar4 != fVar3) {
          pTVar1 = &(local_78.Ptr)->Sections;
          bVar6 = true;
          if ((int)fVar3 < (int)fVar4) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,4,(int)fVar4 - (int)fVar3,&pTVar1->AllocatorInstance,
                               &((local_78.Ptr)->Sections).ArrayNum,
                               &((local_78.Ptr)->Sections).ArrayMax);
            DefaultConstructItems<NDIDynamicMeshLocal::FNDIInstanceSection,int>
                      ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                       (int)fVar4 - (int)fVar3);
            iVar9 = local_58[0];
          }
          else {
            if ((int)fVar4 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)fVar4);
            }
            if ((int)fVar4 < (int)fVar3) {
              uVar12 = (int)fVar3 - (int)fVar4;
              if (((int)(uVar12 | (uint)fVar4) < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = local_58[0];
              if (uVar12 != 0) {
                _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)fVar4 * 0x10;
                iVar9 = (((local_78.Ptr)->Sections).ArrayNum - (int)fVar4) - uVar12;
                if (iVar9 != 0) {
                  memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0x10,(longlong)iVar9 << 4);
                }
                piVar2 = &((local_78.Ptr)->Sections).ArrayNum;
                *piVar2 = *piVar2 - uVar12;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,&pTVar1->AllocatorInstance,((local_78.Ptr)->Sections).ArrayNum,
                           &((local_78.Ptr)->Sections).ArrayMax);
                iVar9 = local_58[0];
              }
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_1->NumInstances);
    if (bVar6) {
      NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh(local_78.Ptr);
    }
  }
  return;
}

// VMSetSectionData @ 148edd2f0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetSectionData(FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_b8 [2];
  float *local_b0;
  float *local_a8;
  int local_a0 [2];
  float *local_98;
  float *local_90;
  int local_88 [2];
  float *local_80;
  float *local_78;
  int local_70 [2];
  float *local_68;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_60,param_1);
  iVar15 = 0;
  local_70[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar14 = local_70[0];
  local_a0[0] = 0;
  pfVar11 = pfVar11 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar11;
  pfVar12 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_88[0] = 0;
  pfVar12 = pfVar12 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  local_a8 = pfVar12;
  pfVar13 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_b8[0] = 0;
  pfVar13 = pfVar13 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_90 = pfVar13;
  local_68 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  bVar9 = false;
  bVar8 = false;
  local_68 = local_68 + local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  iVar16 = local_b8[0];
  if (0 < param_1->NumInstances) {
    do {
      fVar2 = *pfVar11;
      fVar3 = *pfVar12;
      pfVar11 = pfVar11 + iVar14;
      pfVar12 = pfVar12 + local_a0[0];
      pfVar1 = pfVar13 + local_88[0];
      fVar4 = *pfVar13;
      pfVar13 = local_68 + iVar16;
      fVar5 = *local_68;
      local_b0 = pfVar12;
      local_98 = pfVar1;
      local_80 = pfVar11;
      local_68 = pfVar13;
      if (((fVar2 != 0.0) && (-1 < (int)fVar3)) &&
         ((int)fVar3 < ((local_60[0].Ptr)->Sections).ArrayNum)) {
        uVar10 = 0;
        if ((int)fVar3 < ((local_60[0].Ptr)->Sections).ArrayNum) {
          uVar10 = ~(uint)fVar3 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar16 = local_b8[0], bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = ((local_60[0].Ptr)->Sections).AllocatorInstance.Data;
        fVar2 = *(float *)(pFVar6 + (longlong)(int)fVar3 * 0x10 + 4);
        *(float *)(pFVar6 + (longlong)(int)fVar3 * 0x10 + 4) = fVar4;
        bVar9 = (bool)(bVar8 | fVar2 != fVar4);
        *(float *)(pFVar6 + (longlong)(int)fVar3 * 0x10 + 0xc) = fVar5;
        bVar8 = bVar9;
      }
      iVar15 = iVar15 + 1;
      pfVar13 = pfVar1;
      iVar14 = local_70[0];
    } while (iVar15 < param_1->NumInstances);
    if (bVar9) {
      NDIDynamicMeshLocal::FNDIInstanceData_GameThread::UpdateMesh(local_60[0].Ptr);
    }
  }
  return;
}

// VMSetTriangleVertices @ 148edd4f0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetTriangleVertices(FVectorVMExternalFunctionContext *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_d8 [2];
  int local_b8 [6];
  int local_a0 [6];
  int local_88 [6];
  int local_70 [6];
  int local_58 [6];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_d8,param_1);
  iVar16 = 0;
  local_b8[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b8);
  iVar14 = local_b8[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a0);
  local_88[0] = 0;
  pfVar7 = pfVar7 + local_a0[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  iVar11 = local_88[0] * param_1->PerInstanceFnInstanceIdx;
  local_70[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar12 = local_70[0] * param_1->PerInstanceFnInstanceIdx;
  local_58[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  iVar13 = local_58[0] * param_1->PerInstanceFnInstanceIdx;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_d8[0].Ptr);
  uVar1 = (local_d8[0].Ptr)->NumTriangles;
  pFVar5 = ((local_d8[0].Ptr)->IndexData).AllocatorInstance.Data;
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar14;
    pfVar10 = pfVar10 + iVar13;
    pfVar8 = pfVar8 + iVar11;
    pfVar9 = pfVar9 + iVar12;
    do {
      fVar2 = *pfVar7;
      pfVar7 = pfVar7 + local_a0[0];
      fVar3 = *pfVar9;
      fVar4 = *pfVar10;
      if (((*pfVar6 != 0.0) && (-1 < (int)fVar2)) && ((int)fVar2 < (int)uVar1)) {
        lVar15 = (longlong)((int)fVar2 * 3);
        *(float *)(pFVar5 + lVar15 * 4) = *pfVar8;
        *(float *)(pFVar5 + lVar15 * 4 + 4) = fVar3;
        *(float *)(pFVar5 + lVar15 * 4 + 8) = fVar4;
      }
      iVar16 = iVar16 + 1;
      pfVar6 = pfVar6 + local_b8[0];
      pfVar10 = pfVar10 + local_58[0];
      pfVar8 = pfVar8 + local_88[0];
      pfVar9 = pfVar9 + local_70[0];
    } while (iVar16 < param_1->NumInstances);
  }
  return;
}

// VMSetVertexColor @ 148edd6d0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetVertexColor(FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  FNDIInstanceData_GameThread *pFVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  FLinearColor_u_0 local_f8;
  int local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  float *local_d0;
  float *local_c8;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_c0;
  FNDIInputParam<FLinearColor> local_a8;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_c0,param_1);
  iVar8 = 0;
  local_e8[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  iVar3 = local_e8[0];
  lVar12 = (longlong)local_e8[0];
  local_e8[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  lVar13 = (longlong)local_e8[0];
  iVar7 = local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(&local_a8,param_1);
  pFVar4 = local_c0.Ptr;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_c0.Ptr);
  if (pFVar4->ColorOffset == 0xffffffff) {
    uVar9 = 0;
  }
  else {
    uVar9 = pFVar4->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    lVar10 = (longlong)local_a8.G.AdvanceOffset << 2;
    local_res18 = local_a8.G.InputPtr;
    lVar11 = (longlong)local_a8.R.AdvanceOffset << 2;
    local_res20 = local_a8.R.InputPtr;
    local_res8 = pfVar5 + iVar3 * iVar1;
    local_res10 = pfVar6 + iVar7;
    local_e0 = lVar10;
    local_d8 = lVar11;
    do {
      fVar2 = *local_res10;
      local_d0 = local_a8.A.InputPtr + local_a8.A.AdvanceOffset;
      local_f8._s_0.A = *local_a8.A.InputPtr;
      local_c8 = local_a8.B.InputPtr + local_a8.B.AdvanceOffset;
      local_f8._s_0.B = *local_a8.B.InputPtr;
      local_f8._s_0.G = *local_res18;
      local_res18 = (float *)((longlong)local_res18 + lVar10);
      local_f8._s_0.R = *local_res20;
      local_res20 = (float *)((longlong)local_res20 + lVar11);
      if (((*local_res8 != 0.0) && (-1 < (int)fVar2)) && ((int)fVar2 < (int)uVar9)) {
        NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexColor
                  (local_c0.Ptr,(uint)fVar2,(FLinearColor *)&local_f8._s_0);
        lVar10 = local_e0;
        lVar11 = local_d8;
      }
      iVar8 = iVar8 + 1;
      local_a8.A.InputPtr = local_d0;
      local_a8.B.InputPtr = local_c8;
      local_res8 = local_res8 + lVar12;
      local_res10 = local_res10 + lVar13;
    } while (iVar8 < param_1->NumInstances);
  }
  return;
}

// VMSetVertexData @ 148edd8f0

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetVertexData(FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FScriptContainerElement *pFVar20;
  code *pcVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  FNDIInstanceData_GameThread *pFVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_310;
  float *local_300;
  float *local_2f8;
  int local_2f0 [2];
  float *local_2e8;
  float *local_2e0;
  int local_2d8 [2];
  float *local_2d0;
  float *local_2c8;
  int local_2c0 [2];
  float *local_2b8;
  float *local_2b0;
  int local_2a8 [8];
  FNDIInputParam<UE::Math::TVector<float>_> local_288;
  FNDIInputParam<UE::Math::TVector<float>_> local_238;
  FNDIInputParam<UE::Math::TVector<float>_> local_1e8;
  FNDIInputParam<UE::Math::TVector<float>_> local_198;
  FNDIInputParam<FLinearColor> local_148 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_310,param_1);
  iVar29 = 0;
  local_2f0[0] = 0;
  local_300 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2f0);
  local_2d8[0] = 0;
  local_300 = local_300 + local_2f0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2f8 = local_300;
  local_2e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2d8);
  local_2e8 = local_2e8 + local_2d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2e0 = local_2e8;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_288,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_238,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_1e8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_198,param_1);
  local_2c0[0] = 0;
  local_2d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2c0);
  local_2a8[0] = 0;
  local_2d0 = local_2d0 + local_2c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_2c8 = local_2d0;
  local_2b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_2a8);
  local_2b8 = local_2b8 + local_2a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_2b0 = local_2b8;
  FNDIInputParam<FLinearColor>::FNDIInputParam<FLinearColor>(local_148,param_1);
  pFVar26 = local_310.Ptr;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_310.Ptr);
  fVar24 = __real_437f0000;
  fVar23 = __real_3f000000;
  fVar22 = __real_3f800000;
  if (0 < param_1->NumInstances) {
    do {
      fVar18 = *local_2e8;
      uVar27 = (ulonglong)(uint)fVar18;
      pfVar1 = local_300 + local_2f0[0];
      local_2e8 = local_2e8 + local_2d8[0];
      fVar7 = *local_288.X.InputPtr;
      pfVar2 = local_288.Z.InputPtr + local_288.Z.AdvanceOffset;
      fVar8 = *local_288.Y.InputPtr;
      fVar9 = *local_288.Z.InputPtr;
      local_288.Y.InputPtr = local_288.Y.InputPtr + local_288.Y.AdvanceOffset;
      fVar10 = *local_238.Z.InputPtr;
      fVar11 = *local_238.Y.InputPtr;
      local_288.X.InputPtr = local_288.X.InputPtr + local_288.X.AdvanceOffset;
      fVar12 = *local_238.X.InputPtr;
      local_238.Z.InputPtr = local_238.Z.InputPtr + local_238.Z.AdvanceOffset;
      local_238.Y.InputPtr = local_238.Y.InputPtr + local_238.Y.AdvanceOffset;
      local_238.X.InputPtr = local_238.X.InputPtr + local_238.X.AdvanceOffset;
      fVar13 = *local_1e8.X.InputPtr;
      pfVar3 = local_1e8.Z.InputPtr + local_1e8.Z.AdvanceOffset;
      fVar14 = *local_1e8.Y.InputPtr;
      fVar15 = *local_1e8.Z.InputPtr;
      local_1e8.Y.InputPtr = local_1e8.Y.InputPtr + local_1e8.Y.AdvanceOffset;
      local_1e8.X.InputPtr = local_1e8.X.InputPtr + local_1e8.X.AdvanceOffset;
      fVar32 = *local_198.X.InputPtr;
      pfVar4 = local_198.Z.InputPtr + local_198.Z.AdvanceOffset;
      fVar31 = *local_198.Y.InputPtr;
      fVar30 = *local_198.Z.InputPtr;
      local_198.Y.InputPtr = local_198.Y.InputPtr + local_198.Y.AdvanceOffset;
      local_198.X.InputPtr = local_198.X.InputPtr + local_198.X.AdvanceOffset;
      fVar19 = *local_300;
      pfVar5 = local_2b8 + local_2a8[0];
      fVar16 = *local_2b8;
      fVar17 = *local_2d0;
      fVar35 = *local_148[0].B.InputPtr;
      fVar36 = *local_148[0].A.InputPtr;
      fVar34 = *local_148[0].G.InputPtr;
      local_2d0 = local_2d0 + local_2c0[0];
      fVar33 = *local_148[0].R.InputPtr;
      local_148[0].A.InputPtr = local_148[0].A.InputPtr + local_148[0].A.AdvanceOffset;
      local_148[0].B.InputPtr = local_148[0].B.InputPtr + local_148[0].B.AdvanceOffset;
      local_148[0].G.InputPtr = local_148[0].G.InputPtr + local_148[0].G.AdvanceOffset;
      local_148[0].R.InputPtr = local_148[0].R.InputPtr + local_148[0].R.AdvanceOffset;
      local_300 = pfVar1;
      local_2b8 = pfVar5;
      local_288.Z.InputPtr = pfVar2;
      local_1e8.Z.InputPtr = pfVar3;
      local_198.Z.InputPtr = pfVar4;
      if (fVar19 != 0.0) {
        if (pFVar26->PositionOffset != 0xffffffff) {
          if ((pFVar26->NumVertices <= (uint)fVar18) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertex >= 0 && Vertex < NumVertices&& PositionOffset != INDEX_NONE"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                  ,0x111,L""), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          lVar6 = (ulonglong)pFVar26->PositionOffset + uVar27 * 0xc;
          pFVar20 = (pFVar26->VertexData).AllocatorInstance.Data;
          *(float *)(pFVar20 + lVar6) = fVar7;
          *(float *)(pFVar20 + lVar6 + 4) = fVar8;
          *(float *)(pFVar20 + lVar6 + 8) = fVar9;
          pFVar26 = local_310.Ptr;
        }
        if (pFVar26->TangentBasisOffset != 0xffffffff) {
          if ((pFVar26->NumVertices <= (uint)fVar18) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertex >= 0 && Vertex < NumVertices && TangentBasisOffset != INDEX_NONE"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                  ,0x117,L""), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar20 = (pFVar26->VertexData).AllocatorInstance.Data;
          lVar6 = (ulonglong)pFVar26->TangentBasisOffset + uVar27 * 8;
          uVar28 = 0x7f000000;
          if ((fVar32 * fVar10 - fVar30 * fVar12) * fVar14 +
              (fVar30 * fVar11 - fVar31 * fVar10) * fVar13 +
              (fVar31 * fVar12 - fVar32 * fVar11) * fVar15 < 0.0) {
            uVar28 = 0x80000000;
          }
          fVar30 = fVar30 * __real_42feff7d;
          fVar31 = fVar31 * __real_42feff7d;
          fVar32 = fVar32 * __real_42feff7d;
          *(uint *)(pFVar20 + lVar6) =
               (((int)(fVar10 * __real_42feff7d) & 0xffU) << 8 |
               (int)(fVar11 * __real_42feff7d) & 0xffU) << 8 |
               (int)(fVar12 * __real_42feff7d) & 0xffU | uVar28;
          *(uint *)(pFVar20 + lVar6 + 4) =
               (((int)fVar30 & 0xffU) << 8 | (int)fVar31 & 0xffU) << 8 | (int)fVar32 & 0xffU |
               uVar28;
        }
        if (pFVar26->TexCoordOffset != 0xffffffff) {
          if (((pFVar26->NumVertices <= (uint)fVar18) || (pFVar26->NumTexCoords == 0)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                  ,0x12a,L""), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          *(ulonglong *)
           ((pFVar26->VertexData).AllocatorInstance.Data +
           (ulonglong)pFVar26->TexCoordOffset + uVar27 * 8) = CONCAT44(fVar16,fVar17);
        }
        if (pFVar26->ColorOffset != 0xffffffff) {
          if ((pFVar26->NumVertices <= (uint)fVar18) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertex >= 0 && Vertex < NumVertices && ColorOffset != INDEX_NONE"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                                  ,0x130,L""), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
          }
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar22 <= fVar35) {
            fVar35 = fVar22;
          }
          if (fVar22 <= fVar34) {
            fVar34 = fVar22;
          }
          if (fVar22 <= fVar33) {
            fVar33 = fVar22;
          }
          if (fVar22 <= fVar36) {
            fVar36 = fVar22;
          }
          *(uint *)((pFVar26->VertexData).AllocatorInstance.Data +
                   (ulonglong)pFVar26->ColorOffset + uVar27 * 4) =
               CONCAT13((char)(int)(fVar36 * fVar24 + fVar23),
                        CONCAT12((char)(int)(fVar33 * fVar24 + fVar23),
                                 CONCAT11((char)(int)(fVar34 * fVar24 + fVar23),
                                          (char)(int)(fVar35 * fVar24 + fVar23))));
        }
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 < param_1->NumInstances);
  }
  return;
}

// VMSetVertexPosition @ 148ede080

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetVertexPosition(FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  FNDIInstanceData_GameThread *pFVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_d8 [2];
  float *local_d0;
  float *local_c8;
  int local_c0 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_b8;
  FNDIInputParam<UE::Math::TVector<float>_> local_a8;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_b8,param_1);
  iVar12 = 0;
  local_c0[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c0);
  iVar13 = local_c0[0];
  local_d8[0] = 0;
  pfVar9 = pfVar9 + local_c0[0] * param_1->PerInstanceFnInstanceIdx;
  local_c8 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  pfVar10 = pfVar10 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_a8,param_1);
  pFVar11 = local_b8.Ptr;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_b8.Ptr);
  if (pFVar11->PositionOffset == 0xffffffff) {
    uVar14 = 0;
  }
  else {
    uVar14 = pFVar11->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar2 = *local_a8.Z.InputPtr;
      fVar3 = *local_a8.Y.InputPtr;
      fVar4 = *local_a8.X.InputPtr;
      fVar5 = *pfVar10;
      local_d0 = pfVar9 + iVar13;
      pfVar10 = pfVar10 + local_d8[0];
      local_a8.Z.InputPtr = local_a8.Z.InputPtr + local_a8.Z.AdvanceOffset;
      local_a8.Y.InputPtr = local_a8.Y.InputPtr + local_a8.Y.AdvanceOffset;
      local_a8.X.InputPtr = local_a8.X.InputPtr + local_a8.X.AdvanceOffset;
      if (((*pfVar9 != 0.0) && (-1 < (int)fVar5)) && ((int)fVar5 < (int)uVar14)) {
        if (((pFVar11->NumVertices <= (uint)fVar5) || (pFVar11->PositionOffset == 0xffffffff)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Vertex >= 0 && Vertex < NumVertices&& PositionOffset != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                               ,0x111,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pFVar11->VertexData).AllocatorInstance.Data;
        lVar1 = (ulonglong)pFVar11->PositionOffset + (ulonglong)(uint)fVar5 * 0xc;
        *(float *)(pFVar6 + lVar1) = fVar4;
        *(float *)(pFVar6 + lVar1 + 4) = fVar3;
        *(float *)(pFVar6 + lVar1 + 8) = fVar2;
        pFVar11 = local_b8.Ptr;
      }
      iVar12 = iVar12 + 1;
      pfVar9 = local_d0;
      iVar13 = local_c0[0];
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// VMSetVertexTangentBasis @ 148ede270

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetVertexTangentBasis(FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  FNDIInstanceData_GameThread *pFVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  TVector<float>_u_0 local_1f8;
  int local_1e8 [2];
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  TVector<float>_u_0 local_1b0;
  TVector<float>_u_0 local_1a0;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  float *local_150;
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_148;
  FNDIInputParam<UE::Math::TVector<float>_> local_138;
  FNDIInputParam<UE::Math::TVector<float>_> local_e8;
  FNDIInputParam<UE::Math::TVector<float>_> local_98;
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(&local_148,param_1);
  iVar7 = 0;
  local_1e8[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1e8);
  iVar3 = local_1e8[0];
  lVar14 = (longlong)local_1e8[0];
  local_1e8[0] = 0;
  iVar1 = param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_1e8);
  lVar12 = (longlong)local_1e8[0];
  local_res10 = local_res10 + local_1e8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_138,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_e8,param_1);
  FNDIInputParam<UE::Math::TVector<float>_>::FNDIInputParam<UE::Math::TVector<float>_>
            (&local_98,param_1);
  pFVar4 = local_148.Ptr;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_148.Ptr);
  if (pFVar4->TangentBasisOffset == 0xffffffff) {
    uVar13 = 0;
  }
  else {
    uVar13 = pFVar4->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    local_190 = (longlong)local_e8.Z.AdvanceOffset << 2;
    local_188 = (longlong)local_e8.Y.AdvanceOffset << 2;
    local_180 = (longlong)local_e8.X.AdvanceOffset << 2;
    local_178 = (longlong)local_98.Z.AdvanceOffset << 2;
    local_170 = (longlong)local_98.Y.AdvanceOffset << 2;
    lVar10 = (longlong)local_138.Y.AdvanceOffset << 2;
    lVar11 = (longlong)local_138.X.AdvanceOffset << 2;
    local_168 = (longlong)local_98.X.AdvanceOffset << 2;
    local_res18 = local_138.Y.InputPtr;
    local_res20 = local_138.X.InputPtr;
    local_1e0 = local_e8.Z.InputPtr;
    local_1d8 = local_e8.Y.InputPtr;
    local_1d0 = local_e8.X.InputPtr;
    local_1c8 = local_98.Z.InputPtr;
    local_1c0 = local_98.Y.InputPtr;
    local_1b8 = local_98.X.InputPtr;
    local_res8 = pfVar5 + iVar3 * iVar1;
    local_160 = lVar10;
    local_158 = lVar11;
    do {
      fVar2 = *local_res10;
      local_res10 = local_res10 + lVar12;
      local_150 = local_138.Z.InputPtr + local_138.Z.AdvanceOffset;
      local_1f8._s_0.Y = *local_res18;
      local_res18 = (float *)((longlong)local_res18 + lVar10);
      local_1a0._s_0.Y = *local_1d8;
      local_1f8._s_0.X = *local_res20;
      local_res20 = (float *)((longlong)local_res20 + lVar11);
      local_1f8._s_0.Z = *local_138.Z.InputPtr;
      pfVar5 = (float *)(local_190 + (longlong)local_1e0);
      local_1d8 = (float *)(local_188 + (longlong)local_1d8);
      pfVar8 = (float *)(local_180 + (longlong)local_1d0);
      local_1b0._s_0.Y = *local_1c0;
      local_1a0._s_0.X = *local_1d0;
      local_1a0._s_0.Z = *local_1e0;
      pfVar6 = (float *)(local_178 + (longlong)local_1c8);
      local_1c0 = (float *)(local_170 + (longlong)local_1c0);
      pfVar9 = (float *)(local_168 + (longlong)local_1b8);
      local_1b0._s_0.X = *local_1b8;
      local_1b0._s_0.Z = *local_1c8;
      local_1e0 = pfVar5;
      local_1d0 = pfVar8;
      local_1c8 = pfVar6;
      local_1b8 = pfVar9;
      if (((*local_res8 != 0.0) && (-1 < (int)fVar2)) && ((int)fVar2 < (int)uVar13)) {
        NDIDynamicMeshLocal::FNDIInstanceData_GameThread::SetVertexTangentBasis
                  (local_148.Ptr,(uint)fVar2,(TVector<float> *)&local_1f8._s_0,
                   (TVector<float> *)&local_1a0._s_0,(TVector<float> *)&local_1b0._s_0);
        lVar10 = local_160;
        lVar11 = local_158;
      }
      iVar7 = iVar7 + 1;
      local_138.Z.InputPtr = local_150;
      local_res8 = local_res8 + lVar14;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

// VMSetVertexTexCoord @ 148ede590

void __cdecl
UNiagaraDataInterfaceDynamicMesh::VMSetVertexTexCoord(FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint local_res10;
  uint local_res18;
  float *local_d8;
  int local_c8 [2];
  float *local_c0;
  float *local_b8;
  int local_b0 [2];
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  float *local_88;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>::
  FUserPtrHandler<NDIDynamicMeshLocal::FNDIInstanceData_GameThread>(local_60,param_1);
  iVar14 = 0;
  local_80[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar13 = local_80[0];
  local_68[0] = 0;
  pfVar8 = pfVar8 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_88 = pfVar8;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar12 = local_68[0];
  local_98[0] = 0;
  pfVar9 = pfVar9 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_70 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_c8[0] = 0;
  pfVar10 = pfVar10 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = pfVar10;
  local_d8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  local_b0[0] = 0;
  local_d8 = local_d8 + local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_b0);
  pfVar11 = pfVar11 + local_b0[0] * param_1->PerInstanceFnInstanceIdx;
  local_b8 = pfVar11;
  NDIDynamicMeshLocal::FNDIInstanceData_GameThread::ModifyCpuData(local_60[0].Ptr);
  if ((local_60[0].Ptr)->TexCoordOffset == 0xffffffff) {
    local_res10 = 0;
    local_res18 = 0;
  }
  else {
    local_res18 = (local_60[0].Ptr)->NumTexCoords;
    local_res10 = (local_60[0].Ptr)->NumVertices;
  }
  if (0 < param_1->NumInstances) {
    do {
      fVar3 = *pfVar8;
      fVar1 = *pfVar11;
      fVar4 = *pfVar9;
      fVar2 = *local_d8;
      pfVar8 = pfVar8 + iVar13;
      fVar5 = *pfVar10;
      pfVar9 = pfVar9 + iVar12;
      pfVar10 = pfVar10 + local_98[0];
      pfVar11 = pfVar11 + local_b0[0];
      local_d8 = local_d8 + local_c8[0];
      if ((((fVar3 != 0.0) && (-1 < (int)fVar4)) && ((int)fVar4 < (int)local_res10)) &&
         ((0 < (int)fVar5 && ((int)fVar5 < (int)local_res18)))) {
        if ((((local_60[0].Ptr)->NumVertices <= (uint)fVar4) ||
            (((local_60[0].Ptr)->NumTexCoords <= (uint)fVar5 ||
             ((local_60[0].Ptr)->TexCoordOffset == 0xffffffff)))) &&
           (local_c0 = pfVar11, local_a8 = pfVar10, local_90 = pfVar8, local_78 = pfVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Vertex >= 0 && Vertex < NumVertices && TexCoord >= 0 && TexCoord < NumTexCoords && TexCoordOffset != INDEX_NONE"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDynamicMesh.cpp"
                              ,0x12a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(ulonglong *)
         (((local_60[0].Ptr)->VertexData).AllocatorInstance.Data +
         (ulonglong)(local_60[0].Ptr)->TexCoordOffset +
         ((ulonglong)(uint)fVar4 + (ulonglong)(uint)fVar5) * 8) = CONCAT44(fVar1,fVar2);
      }
      iVar14 = iVar14 + 1;
      iVar13 = local_80[0];
      iVar12 = local_68[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// _getUObject @ 148edf1b0

UObject * __thiscall
UNiagaraDataInterfaceDynamicMesh::_getUObject(UNiagaraDataInterfaceDynamicMesh *this)

{
  return (UObject *)&this[-1].DefaultBounds;
}

// _getUObject`adjustor{8}' @ 148edf1bc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNiagaraDataInterfaceDynamicMesh::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UNiagaraDataInterfaceDynamicMesh::_getUObject_adjustor_8__(UNiagaraDataInterfaceDynamicMesh *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNiagaraDataInterfaceDynamicMesh *)&this[-1].DefaultBounds.IsValid);
  return (UObject *)pUVar1;
}

