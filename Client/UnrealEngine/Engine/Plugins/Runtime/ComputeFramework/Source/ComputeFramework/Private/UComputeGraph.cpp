// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 24

// StaticClass @ 1494bcb70

UClass * __cdecl UComputeGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraph",
               &Z_Registration_Info_UClass_UComputeGraph.InnerSingleton,
               StaticRegisterNativesUComputeGraph,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeGraph>,InternalVTableHelperCtorCaller<UComputeGraph>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraph.InnerSingleton;
}

// UComputeGraph @ 1494c4a90

UComputeGraph * __thiscall UComputeGraph::UComputeGraph(UComputeGraph *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeGraph__6B_;
  (this->KernelInvocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelInvocations).ArrayNum = 0;
  (this->KernelInvocations).ArrayMax = 0;
  (this->DataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaces).ArrayNum = 0;
  (this->DataInterfaces).ArrayMax = 0;
  (this->GraphEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphEdges).ArrayNum = 0;
  (this->GraphEdges).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->DataInterfaceToBinding).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceToBinding).ArrayNum = 0;
  (this->DataInterfaceToBinding).ArrayMax = 0;
  (this->KernelResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelResources).ArrayNum = 0;
  (this->KernelResources).ArrayMax = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x30 =
       0xffffffff;
  (this->KernelResourceIndicesPendingShaderCompilation).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->KernelResourceIndicesPendingShaderCompilation).HashSize = 0;
  this->RenderProxy = (FComputeGraphRenderProxy *)0x0;
  return this;
}

// UComputeGraph @ 1494c4b40

UComputeGraph * __thiscall
UComputeGraph::UComputeGraph(UComputeGraph *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeGraph__6B_;
  (this->KernelInvocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelInvocations).ArrayNum = 0;
  (this->KernelInvocations).ArrayMax = 0;
  (this->DataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaces).ArrayNum = 0;
  (this->DataInterfaces).ArrayMax = 0;
  (this->GraphEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphEdges).ArrayNum = 0;
  (this->GraphEdges).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->DataInterfaceToBinding).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceToBinding).ArrayNum = 0;
  (this->DataInterfaceToBinding).ArrayMax = 0;
  (this->KernelResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelResources).ArrayNum = 0;
  (this->KernelResources).ArrayMax = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x30 =
       0xffffffff;
  (this->KernelResourceIndicesPendingShaderCompilation).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->KernelResourceIndicesPendingShaderCompilation).HashSize = 0;
  this->RenderProxy = (FComputeGraphRenderProxy *)0x0;
  return this;
}

// UComputeGraph @ 1494c4bf0

UComputeGraph * __thiscall UComputeGraph::UComputeGraph(UComputeGraph *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UComputeGraph__6B_;
  (this->KernelInvocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelInvocations).ArrayNum = 0;
  (this->KernelInvocations).ArrayMax = 0;
  (this->DataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaces).ArrayNum = 0;
  (this->DataInterfaces).ArrayMax = 0;
  (this->GraphEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphEdges).ArrayNum = 0;
  (this->GraphEdges).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->DataInterfaceToBinding).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceToBinding).ArrayNum = 0;
  (this->DataInterfaceToBinding).ArrayMax = 0;
  (this->KernelResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KernelResources).ArrayNum = 0;
  (this->KernelResources).ArrayMax = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x30 =
       0xffffffff;
  (this->KernelResourceIndicesPendingShaderCompilation).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->KernelResourceIndicesPendingShaderCompilation).HashSize = 0;
  this->RenderProxy = (FComputeGraphRenderProxy *)0x0;
  return this;
}

// ~UComputeGraph @ 1494c5d50

void __thiscall UComputeGraph::~UComputeGraph(UComputeGraph *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UComputeGraph__6B_;
  (this->KernelResourceIndicesPendingShaderCompilation).HashSize = 0;
  FVar1 = (this->KernelResourceIndicesPendingShaderCompilation).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->KernelResourceIndicesPendingShaderCompilation).Elements);
  DestructItems<UComputeGraph::FComputeKernelResourceSet,int>
            ((FComputeKernelResourceSet *)(this->KernelResources).AllocatorInstance.Data,
             (this->KernelResources).ArrayNum);
  pFVar2 = (this->KernelResources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DataInterfaceToBinding).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FComputeGraphEdge,int>
            ((FComputeGraphEdge *)(this->GraphEdges).AllocatorInstance.Data,
             (this->GraphEdges).ArrayNum);
  pFVar2 = (this->GraphEdges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DataInterfaces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KernelInvocations).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1494c9b70

void __thiscall UComputeGraph::BeginDestroy(UComputeGraph *this)

{
  UObject::BeginDestroy((UObject *)this);
  ReleaseRenderProxy(this,this->RenderProxy);
  return;
}

// BuildKernelShaderMetadata @ 1494c9ba0

FShaderParametersMetadata * __thiscall
UComputeGraph::BuildKernelShaderMetadata
          (UComputeGraph *this,int param_1,FShaderParametersMetadataAllocations *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FShaderParametersMetadata *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FString *pFVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FShaderParametersMetadata *local_b8;
  void *local_b0;
  FString local_a8;
  FString local_98;
  uint local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  FScriptContainerElement *local_70;
  FShaderParametersMetadataBuilder local_68;
  FScriptContainerElement *local_50;
  FName local_48 [2];
  
  iVar8 = (this->GraphEdges).ArrayNum;
  pFVar15 = (this->GraphEdges).AllocatorInstance.Data;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar19 = pFVar15 + (longlong)iVar8 * 0x38;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  while( true ) {
    if ((this->GraphEdges).ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar15 == pFVar19) break;
    if (*(int *)pFVar15 == param_1) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&local_80,(int *)(pFVar15 + 8));
    }
    pFVar15 = pFVar15 + 0x38;
  }
  uVar11 = (ulonglong)local_80.ArrayNum;
  local_68.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Members.ArrayNum = 0;
  local_68.Members.ArrayMax = 0;
  local_68.NextMemberOffset = 0;
  pFVar15 = local_80.AllocatorInstance.Data + uVar11 * 4;
  local_88 = local_80.ArrayNum;
  FVar17.Data = local_80.AllocatorInstance.Data;
  local_50 = pFVar15;
  do {
    local_70 = FVar17.Data;
    if (local_80.ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar17.Data == pFVar15) {
      iVar8 = TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::Add(&param_2->Names,1);
      local_48[0] = (FName)this->_padding_;
      ::FName::ToString(local_48,&local_98);
      pFVar16 = TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::operator[]
                          (&param_2->Names,iVar8);
      if (pFVar16 != &local_98) {
        pFVar15 = (pFVar16->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (pFVar16->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = local_98.Data.ArrayNum;
        (pFVar16->Data).ArrayMax = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      pFVar16 = TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::operator[]
                          (&param_2->Names,iVar8);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      local_b8 = FShaderParametersMetadataBuilder::Build(&local_68,ShaderParameterStruct,pwVar14);
      pFVar15 = (param_2->ShaderParameterMetadatas).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar15 + (longlong)(param_2->ShaderParameterMetadatas).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar9;
      }
      iVar8 = (param_2->ShaderParameterMetadatas).ArrayNum;
      piVar1 = &(param_2->ShaderParameterMetadatas).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_2,piVar1);
      }
      pFVar9 = local_b8;
      (param_2->ShaderParameterMetadatas).ArrayNum = iVar8 + 1;
      *(FShaderParametersMetadata **)
       ((param_2->ShaderParameterMetadatas).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_b8
      ;
      if (local_68.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Members.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return pFVar9;
    }
    uVar7 = *(uint *)FVar17.Data;
    uVar12 = 0;
    if ((int)uVar7 < (this->DataInterfaces).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
      return pFVar9;
    }
    plVar2 = *(longlong **)
              ((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if (plVar2 != (longlong *)0x0) {
      iVar8 = (param_2->Names).NumElements;
      (param_2->Names).NumElements = iVar8 + 1;
      iVar6 = (param_2->Names).Chunks.Array.ArrayNum;
      iVar5 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      if (iVar6 < iVar5) {
        uVar11 = (ulonglong)(uint)(iVar5 - iVar6);
        do {
          local_b0 = ::operator_new(0x200);
          if (local_b0 != (void *)0x0) {
            lVar13 = 0x20;
            lVar10 = (longlong)local_b0 + 0xc;
            do {
              *(undefined8 *)(lVar10 + -0xc) = 0;
              *(undefined8 *)(lVar10 + -4) = 0;
              lVar10 = lVar10 + 0x10;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          pFVar15 = (param_2->Names).Chunks.Array.AllocatorInstance.Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_b0) &&
              ((FScriptContainerElement *)&local_b0 <
               pFVar15 + (longlong)(param_2->Names).Chunks.Array.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
            return pFVar9;
          }
          iVar6 = (param_2->Names).Chunks.Array.ArrayNum;
          if (iVar6 == (param_2->Names).Chunks.Array.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&param_2->Names,
                               &(param_2->Names).Chunks.Array.ArrayMax);
          }
          (param_2->Names).Chunks.Array.ArrayNum = iVar6 + 1;
          *(void **)((param_2->Names).Chunks.Array.AllocatorInstance.Data + (longlong)iVar6 * 8) =
               local_b0;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      lVar10 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
      if ((lVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InDataInterface != nullptr && InDataInterface->GetClassName() != nullptr"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                             ,0x17c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar9;
      }
      (**(code **)(*plVar2 + 0x2b0))(plVar2);
      ::FString::PrintfImpl(&local_a8,L"DI%d_%s");
      uVar12 = iVar8 >> 0x1f & 0x1f;
      uVar7 = iVar8 + uVar12;
      uVar18 = (int)uVar7 >> 5;
      uVar11 = (ulonglong)((uVar7 & 0x1f) - uVar12);
      uVar7 = 0;
      if ((int)uVar18 < (param_2->Names).Chunks.Array.ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar9;
      }
      pFVar16 = (FString *)
                (*(longlong *)
                  ((param_2->Names).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar18 * 8)
                + uVar11 * 0x10);
      if (pFVar16 != &local_a8) {
        pFVar15 = (pFVar16->Data).AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (pFVar16->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = local_a8.Data.ArrayNum;
        (pFVar16->Data).ArrayMax = local_a8.Data.ArrayMax;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      uVar7 = 0;
      if ((int)uVar18 < (param_2->Names).Chunks.Array.ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FShaderParametersMetadata *)(*pcVar3)();
        return pFVar9;
      }
      lVar10 = *(longlong *)
                ((param_2->Names).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar18 * 8);
      if (*(int *)(lVar10 + 8 + uVar11 * 0x10) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)(lVar10 + uVar11 * 0x10);
      }
      (**(code **)(*plVar2 + 0x2e8))(plVar2,pwVar14,&local_68,param_2);
      FVar17.Data = local_70;
      pFVar15 = local_50;
    }
    uVar11 = (ulonglong)local_88;
    FVar17.Data = FVar17.Data + 4;
  } while( true );
}

// BuildShaderPermutationVectors @ 1494ca100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UComputeGraph::BuildShaderPermutationVectors
          (UComputeGraph *this,
          TArray<FComputeKernelPermutationVector,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FComputeKernelPermutationVector *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  ulong64 local_b0;
  ulonglong local_a8;
  FScriptContainerElement *local_a0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar12 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar12,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar4 = (FComputeKernelPermutationVector *)(param_1->AllocatorInstance).Data;
    piVar1 = &param_1->ArrayNum;
    piVar2 = &param_1->ArrayMax;
    if (param_1->ArrayMax < 0) {
      DestructItems<FComputeKernelPermutationVector,int>(pFVar4,param_1->ArrayNum);
      *piVar1 = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&param_1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<FComputeKernelPermutationVector,int>(pFVar4,param_1->ArrayNum);
      *piVar1 = 0;
    }
    iVar3 = (this->KernelInvocations).ArrayNum;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,iVar3,&param_1->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FComputeKernelPermutationVector,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x58,iVar3);
    local_b4 = (this->GraphEdges).ArrayNum;
    uVar13 = (ulonglong)(int)local_b4;
    pFVar15 = (this->GraphEdges).AllocatorInstance.Data;
    local_98.Elements._0_8_ = 0;
    local_a0 = pFVar15 + uVar13 * 0x38;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    uVar17 = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    while( true ) {
      pFVar7 = local_a0;
      if ((this->GraphEdges).ArrayNum != (int)uVar13) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8);
      }
      if (pFVar15 == pFVar7) break;
      uVar11 = *(uint *)(pFVar15 + 8);
      uVar10 = uVar17;
      if ((int)uVar11 < (this->DataInterfaces).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
          != 0) {
        uVar11 = *(uint *)(pFVar15 + 8);
        local_a8 = (longlong)(int)uVar11 << 0x20 | (longlong)(int)*(uint *)pFVar15;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_98.Hash.SecondaryData;
          }
          iVar3 = *(int *)((longlong)FVar16 +
                          ((local_a8 >> 0x20) * 0x17 + local_a8 & (ulonglong)(local_98.HashSize - 1)
                          ) * 4);
          while (iVar3 != -1) {
            puVar14 = (ulonglong *)((longlong)iVar3 * 0x10 + local_98.Elements._0_8_);
            if (*puVar14 == local_a8) {
              if (puVar14 != (ulonglong *)0x0) goto LAB_1494ca41a;
              break;
            }
            iVar3 = (int)puVar14[1];
          }
        }
        uVar10 = uVar17;
        if ((int)uVar11 < (this->DataInterfaces).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = *(uint *)pFVar15;
        plVar5 = *(longlong **)
                  ((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
        pcVar6 = *(code **)(*plVar5 + 0x2d0);
        uVar11 = uVar17;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*pcVar6)(plVar5,(param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x58);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64_const_&>(&local_98,&local_b0,(bool *)&local_a8);
      }
LAB_1494ca41a:
      pFVar15 = pFVar15 + 0x38;
      uVar13 = (ulonglong)local_b4;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return;
}

// CreateDataProviders @ 1494cb1e0

void __thiscall
UComputeGraph::CreateDataProviders
          (UComputeGraph *this,int param_1,TObjectPtr<UObject> *param_2,
          TArray<TObjectPtr<UComputeDataProvider>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UObject *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 local_68 [4];
  uint local_64;
  longlong local_60;
  longlong local_58;
  TObjectPtr<UObject>_u_0 local_50 [2];
  
  uVar16 = (ulonglong)param_1;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId266,"UComputeGraph::CreateDataProviders",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
               ,0x10a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId266);
  }
  iVar6 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  uVar12 = (this->DataInterfaces).ArrayNum;
  if (iVar6 < (int)uVar12) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar12 - iVar6,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    memset((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8,0,
           (longlong)(int)(uVar12 - iVar6) << 3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar6) {
      uVar11 = iVar6 - uVar12;
      if (((int)(uVar11 | uVar12) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar11 != 0) {
        pFVar13 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar12 * 8;
        iVar6 = (*piVar1 - uVar12) - uVar11;
        if (iVar6 != 0) {
          memmove(pFVar13,pFVar13 + (longlong)(int)uVar11 * 8,(longlong)iVar6 << 3);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  if ((param_1 < 0) || ((this->Bindings).ArrayNum <= param_1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2037348609082523918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                       ,0x10e,"Bindings.IsValidIndex(InBindingIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((param_2->field0_0x0).DebugPtr != (UObject *)0x0) {
      uVar12 = 0;
      if (param_1 < (this->Bindings).ArrayNum) {
        uVar12 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = FObjectPtr::IsA((FObjectPtr *)param_2,
                              *(UClass **)((this->Bindings).AllocatorInstance.Data + uVar16 * 8));
      if (!bVar4) goto LAB_1494cb6b1;
    }
    uVar12 = 0;
    if (0 < (this->DataInterfaces).ArrayNum) {
      local_58 = 0;
      local_60 = 0;
      do {
        lVar15 = local_58;
        lVar10 = local_60;
        if (((int)uVar12 < 0) || ((this->DataInterfaceToBinding).ArrayNum <= (int)uVar12)) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2037348609082523922>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                             ,0x112,"DataInterfaceToBinding.IsValidIndex(DataInterfaceIndex)");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          uVar8 = ~uVar12 >> 0x1f;
          uVar11 = 0;
          if ((int)uVar12 < (this->DataInterfaceToBinding).ArrayNum) {
            uVar11 = uVar8;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this->DataInterfaceToBinding).AllocatorInstance.Data + lVar10) ==
              (int)uVar16) {
            pUVar7 = (UObject *)0x0;
            uVar11 = 0;
            if ((int)uVar12 < (this->DataInterfaces).ArrayNum) {
              uVar11 = uVar8;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)((this->DataInterfaces).AllocatorInstance.Data + lVar15);
            if (plVar2 != (longlong *)0x0) {
              local_64 = (this->GraphEdges).ArrayNum;
              uVar16 = (ulonglong)(int)local_64;
              uVar9 = 0;
              pFVar13 = (this->GraphEdges).AllocatorInstance.Data;
              uVar17 = 0;
              pFVar14 = pFVar13 + uVar16 * 0x38;
              while( true ) {
                if ((this->GraphEdges).ArrayNum != (int)uVar16) {
                  local_68[0] = 0;
                  `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_68);
                  uVar16 = (ulonglong)local_64;
                }
                if (pFVar13 == pFVar14) break;
                if (*(uint *)(pFVar13 + 8) == uVar12) {
                  if (pFVar13[0x10] == (FScriptContainerElement)0x0) {
                    uVar17 = uVar17 | 1L << ((longlong)*(int *)(pFVar13 + 0xc) & 0x3fU);
                    goto LAB_1494cb52b;
                  }
                  uVar9 = uVar9 | 1L << ((longlong)*(int *)(pFVar13 + 0xc) & 0x3fU);
                  pFVar13 = pFVar13 + 0x38;
                }
                else {
LAB_1494cb52b:
                  pFVar13 = pFVar13 + 0x38;
                }
              }
              pUVar7 = (UObject *)(**(code **)(*plVar2 + 0x338))(plVar2);
              if (pUVar7 == (UObject *)0x0) {
                pcVar3 = *(code **)(*plVar2 + 0x330);
                local_50[0].ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->field0_0x0).DebugPtr;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_50[0].DebugPtr != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_50[0].DebugPtr);
                }
                pUVar7 = (UObject *)(*pcVar3)(plVar2,local_50,uVar9,uVar17);
                lVar10 = local_60;
                lVar15 = local_58;
              }
              else {
                (**(code **)(*(longlong *)pUVar7 + 0x2b0))
                          (pUVar7,plVar2,(param_2->field0_0x0).DebugPtr,uVar9,uVar17);
                lVar10 = local_60;
                lVar15 = local_58;
              }
            }
            uVar11 = 0;
            if ((int)uVar12 < param_3->ArrayNum) {
              uVar11 = uVar8;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (param_3->AllocatorInstance).Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar7);
            }
            *(UObject **)(pFVar13 + lVar15) = pUVar7;
            uVar16 = (ulonglong)(uint)param_1;
          }
        }
        local_60 = lVar10 + 4;
        local_58 = lVar15 + 8;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->DataInterfaces).ArrayNum);
    }
  }
LAB_1494cb6b1:
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateRenderProxy @ 1494cb7b0

FComputeGraphRenderProxy * __thiscall UComputeGraph::CreateRenderProxy(UComputeGraph *this)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FShaderParametersMetadataAllocations *pFVar15;
  FComputeGraphRenderProxy *pFVar16;
  FShaderParametersMetadata *pFVar17;
  wchar_t *pwVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  TArray<FComputeGraphRenderProxy::FKernelInvocation,TSizedDefaultAllocator<32>_> *pTVar22;
  FShaderParametersMetadataAllocations *pFVar23;
  uint uVar24;
  FScriptContainerElement *this_00;
  int *piVar25;
  FScriptContainerElement *pFVar26;
  TUniquePtr<FShaderParametersMetadataAllocations,TDefaultDelete<FShaderParametersMetadataAllocations>_>
  *this_01;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  char local_88 [8];
  FScriptContainerElement *local_80;
  TArray<FComputeGraphRenderProxy::FKernelInvocation,TSizedDefaultAllocator<32>_> *local_78;
  int *local_70;
  TUniquePtr<FShaderParametersMetadataAllocations,TDefaultDelete<FShaderParametersMetadataAllocations>_>
  *local_68;
  uint local_60;
  FShaderParametersMetadataAllocations *local_58;
  longlong local_50;
  FComputeGraphRenderProxy *local_48;
  longlong local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar18 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar18,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false)) {
    return (FComputeGraphRenderProxy *)0x0;
  }
  local_48 = ::operator_new(0x30);
  pFVar23 = (FShaderParametersMetadataAllocations *)0x0;
  if (local_48 == (FComputeGraphRenderProxy *)0x0) {
    local_48 = (FComputeGraphRenderProxy *)0x0;
  }
  else {
    (local_48->GraphName).ComparisonIndex = 0;
    (local_48->GraphName).Number = 0;
    (local_48->KernelInvocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_48->KernelInvocations).ArrayNum = 0;
    (local_48->KernelInvocations).ArrayMax = 0;
    (local_48->ShaderPermutationVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_48->ShaderPermutationVectors).ArrayNum = 0;
    (local_48->ShaderPermutationVectors).ArrayMax = 0;
    (local_48->ShaderParameterMetadataAllocations).Ptr = (FShaderParametersMetadataAllocations *)0x0
    ;
  }
  pFVar16 = local_48;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (local_48->GraphName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (local_48->GraphName).Number = uVar7;
  pFVar15 = ::operator_new(0x28);
  local_58 = pFVar23;
  if (pFVar15 != (FShaderParametersMetadataAllocations *)0x0) {
    *(undefined8 *)&(pFVar15->Names).NumElements = 0;
    (pFVar15->ShaderParameterMetadatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->ShaderParameterMetadatas).ArrayNum = 0;
    (pFVar15->ShaderParameterMetadatas).ArrayMax = 0;
    (pFVar15->Names).Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar15->Names).Chunks.Array.ArrayNum = 0;
    (pFVar15->Names).Chunks.Array.ArrayMax = 0;
    local_58 = pFVar15;
  }
  this_01 = &pFVar16->ShaderParameterMetadataAllocations;
  pFVar15 = local_58;
  local_68 = this_01;
  if (this_01 !=
      (TUniquePtr<FShaderParametersMetadataAllocations,TDefaultDelete<FShaderParametersMetadataAllocations>_>
       *)&local_58) {
    pFVar15 = this_01->Ptr;
    this_01->Ptr = local_58;
    local_58 = (FShaderParametersMetadataAllocations *)0x0;
    TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
              ((TDefaultDelete<FShaderParametersMetadataAllocations> *)this_01,pFVar15);
    pFVar15 = pFVar23;
  }
  TDefaultDelete<FShaderParametersMetadataAllocations>::operator()
            ((TDefaultDelete<FShaderParametersMetadataAllocations> *)&local_58,pFVar15);
  BuildShaderPermutationVectors(this,&pFVar16->ShaderPermutationVectors);
  uVar12 = (this->KernelInvocations).ArrayNum;
  pTVar22 = &pFVar16->KernelInvocations;
  local_78 = pTVar22;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar25 = &(pFVar16->KernelInvocations).ArrayMax;
  local_70 = piVar25;
  if (*piVar25 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar12,&pTVar22->AllocatorInstance,(pFVar16->KernelInvocations).ArrayNum,
               piVar25);
  }
  if ((int)uVar12 < 1) {
    return pFVar16;
  }
  local_50 = 0;
  local_40 = (longlong)(int)uVar12;
LAB_1494cb971:
  lVar2 = local_50;
  uVar24 = (uint)pFVar23;
  uVar11 = 0;
  uVar12 = uVar11;
  if ((int)uVar24 < (this->KernelInvocations).ArrayNum) {
    uVar12 = ~uVar24 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
    return pFVar16;
  }
  lVar2 = *(longlong *)((this->KernelInvocations).AllocatorInstance.Data + lVar2 * 8);
  uVar12 = uVar11;
  if ((int)uVar24 < (this->KernelResources).ArrayNum) {
    uVar12 = ~uVar24 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
    return pFVar16;
  }
  lVar3 = *(longlong *)((this->KernelResources).AllocatorInstance.Data + local_50 * 8);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    iVar13 = pTVar22->ArrayNum;
    if (iVar13 == *piVar25) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x888,&pTVar22->AllocatorInstance,piVar25);
    }
    pTVar22->ArrayNum = iVar13 + 1;
    this_00 = (pTVar22->AllocatorInstance).Data + (longlong)iVar13 * 0x88;
    DefaultConstructItems<FComputeGraphRenderProxy::FKernelInvocation,int>(this_00,1);
    iVar13 = *(int *)(*(longlong *)(lVar2 + 0x28) + 0x30);
    uVar12 = iVar13 - 1;
    if (iVar13 == 0) {
      uVar12 = uVar11;
    }
    ::FString::AssignRange
              ((FString *)this_00,*(wchar_t **)(*(longlong *)(lVar2 + 0x28) + 0x28),uVar12);
    lVar4 = *(longlong *)(lVar2 + 0x28);
    *(undefined8 *)&this_00[0x10].field_0x0 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(lVar4 + 0x40);
    *(longlong *)&this_00[0x20].field_0x0 = lVar3;
    pFVar17 = BuildKernelShaderMetadata(this,uVar24,this_01->Ptr);
    *(FShaderParametersMetadata **)(this_00 + 0x28) = pFVar17;
    this_00[0x84] = (FScriptContainerElement)0x1;
    this_00[0x85] = (FScriptContainerElement)((byte)(*(uint *)(lVar2 + 0x30) >> 2) & 1);
    iVar13 = (this->GraphEdges).ArrayNum;
    pFVar20 = (this->GraphEdges).AllocatorInstance.Data;
    pFVar26 = pFVar20 + (longlong)iVar13 * 0x38;
    do {
      if ((this->GraphEdges).ArrayNum != iVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar12 = 0;
      if (pFVar20 == pFVar26) goto LAB_1494cbbbb;
      if (*(uint *)pFVar20 == uVar24) {
        uVar11 = *(uint *)(pFVar20 + 8);
        uVar14 = uVar12;
        if ((int)uVar11 < (this->DataInterfaces).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
          return pFVar16;
        }
        plVar5 = *(longlong **)
                  ((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
        if (plVar5 == (longlong *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2037348609082524134>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                             ,0x1e6,"DataInterface != nullptr");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
            return pFVar16;
          }
        }
        else {
          cVar9 = (**(code **)(*plVar5 + 0x2b8))();
          if (cVar9 != '\0') goto LAB_1494cbbb1;
        }
      }
      pFVar20 = pFVar20 + 0x38;
    } while( true );
  }
  goto LAB_1494cbf19;
LAB_1494cbbb1:
  *(int *)&this_00[0x80].field_0x0 = *(int *)(pFVar20 + 8);
LAB_1494cbbbb:
  uVar11 = *(uint *)&this_00[0x80].field_0x0;
  if (((int)uVar11 < 0) || ((this->DataInterfaceToBinding).ArrayNum <= (int)uVar11)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2037348609082524153>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                       ,0x1f9,
                       "DataInterfaceToBinding.IsValidIndex(Invocation.ExecutionProviderIndex)");
  }
  else {
    uVar14 = uVar12;
    if ((int)uVar11 < (this->DataInterfaceToBinding).ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
      return pFVar16;
    }
    local_60 = (this->GraphEdges).ArrayNum;
    uVar19 = (ulonglong)(int)local_60;
    pFVar26 = (this->GraphEdges).AllocatorInstance.Data;
    pFVar20 = pFVar26 + 8;
    local_res20 = *(int *)((this->DataInterfaceToBinding).AllocatorInstance.Data +
                          (longlong)(int)uVar11 * 4);
    pFVar21 = pFVar26 + uVar19 * 0x38;
    local_80 = pFVar21;
    while( true ) {
      if ((this->GraphEdges).ArrayNum != (int)uVar19) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar26 == pFVar21) break;
      if (*(uint *)pFVar26 == uVar24) {
        uVar11 = *(uint *)pFVar20;
        uVar14 = uVar12;
        if ((int)uVar11 < (this->DataInterfaces).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
          return pFVar16;
        }
        plVar5 = *(longlong **)
                  ((this->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
        if (plVar5 == (longlong *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2037348609082524162>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                             ,0x202,"DataInterface != nullptr");
          pFVar21 = local_80;
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
            return pFVar16;
          }
        }
        else {
          uVar11 = *(uint *)pFVar20;
          uVar14 = uVar12;
          if ((int)uVar11 < (this->DataInterfaceToBinding).ArrayNum) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
            return pFVar16;
          }
          local_88[0] = *(int *)((this->DataInterfaceToBinding).AllocatorInstance.Data +
                                (longlong)(int)uVar11 * 4) == local_res20;
          iVar13 = TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                             ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00 + 0x30),
                              (int *)pFVar20);
          if (iVar13 == *(int *)(this_00 + 0x78)) {
            if (((*(char **)&this_00[0x70].field_0x0 <= local_88) &&
                (local_88 < *(char **)&this_00[0x70].field_0x0 + *(int *)(this_00 + 0x7c))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
              return pFVar16;
            }
            iVar13 = *(int *)(this_00 + 0x78);
            if (iVar13 == *(int *)(this_00 + 0x7c)) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x101,(ForAnyElementType *)(this_00 + 0x70),
                                  (int *)(this_00 + 0x7c));
            }
            *(int *)(this_00 + 0x78) = iVar13 + 1;
            *(char *)((longlong)iVar13 + *(longlong *)&this_00[0x70].field_0x0) = local_88[0];
          }
          if (local_88[0] != '\0') {
            FVar1 = this_00[0x84];
            bVar10 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
            this_00[0x84] = (FScriptContainerElement)(bVar10 & (byte)FVar1);
          }
          pFVar21 = local_80;
          if (pFVar20[8] == (FScriptContainerElement)0x0) {
            cVar9 = (**(code **)(*plVar5 + 0x310))(plVar5);
            if (cVar9 != '\0') {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00 + 0x40),(int *)pFVar20)
              ;
            }
            cVar9 = (**(code **)(*plVar5 + 0x318))(plVar5);
            if (cVar9 != '\0') {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00 + 0x50),(int *)pFVar20)
              ;
            }
            cVar9 = (**(code **)(*plVar5 + 800))(plVar5);
            pFVar21 = local_80;
            if (cVar9 != '\0') {
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_00 + 0x60),(int *)pFVar20)
              ;
              pFVar21 = local_80;
            }
          }
        }
      }
      uVar19 = (ulonglong)local_60;
      pFVar26 = pFVar26 + 0x38;
      pFVar20 = pFVar20 + 0x38;
    }
    pTVar22 = local_78;
    piVar25 = local_70;
    this_01 = local_68;
    if (*(int *)(this_00 + 0x38) == *(int *)(this_00 + 0x78)) goto LAB_1494cbf19;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Invocation.BoundProviderIndices.Num() == Invocation.BoundProviderIsPrimary.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                       ,0x22b,L"");
  }
  pTVar22 = local_78;
  piVar25 = local_70;
  this_01 = local_68;
  if (bVar8 != false) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FComputeGraphRenderProxy *)(*pcVar6)();
    return pFVar16;
  }
LAB_1494cbf19:
  pFVar23 = (FShaderParametersMetadataAllocations *)(ulonglong)(uVar24 + 1);
  local_50 = local_50 + 1;
  if (local_40 <= local_50) {
    return local_48;
  }
  goto LAB_1494cb971;
}

// GetDataInterfaceInputOutputMasks @ 1494cf330

void __thiscall
UComputeGraph::GetDataInterfaceInputOutputMasks
          (UComputeGraph *this,int param_1,ulong64 *param_2,ulong64 *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GraphEdges).ArrayNum;
  pFVar2 = (this->GraphEdges).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x38;
LAB_1494cf361:
  do {
    if ((this->GraphEdges).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) {
      return;
    }
    if (*(int *)(pFVar2 + 8) == param_1) {
      if (pFVar2[0x10] != (FScriptContainerElement)0x0) {
        *param_2 = *param_2 | 1L << ((longlong)*(int *)(pFVar2 + 0xc) & 0x3fU);
        pFVar2 = pFVar2 + 0x38;
        goto LAB_1494cf361;
      }
      *param_3 = *param_3 | 1L << ((longlong)*(int *)(pFVar2 + 0xc) & 0x3fU);
    }
    pFVar2 = pFVar2 + 0x38;
  } while( true );
}

// GetPrivateStaticClass @ 1494d0670

UClass * __cdecl UComputeGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraph",
               &Z_Registration_Info_UClass_UComputeGraph.InnerSingleton,
               StaticRegisterNativesUComputeGraph,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeGraph>,InternalVTableHelperCtorCaller<UComputeGraph>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraph.InnerSingleton;
}

// GetRenderProxy @ 1494d0e30

FComputeGraphRenderProxy * __thiscall UComputeGraph::GetRenderProxy(UComputeGraph *this)

{
  return this->RenderProxy;
}

// HasKernelResourcesPendingShaderCompilation @ 1494d38f0

bool __thiscall UComputeGraph::HasKernelResourcesPendingShaderCompilation(UComputeGraph *this)

{
  return *(int *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x8 !=
         *(int *)&(this->KernelResourceIndicesPendingShaderCompilation).Elements.field_0x34;
}

// InitializeDataProviders @ 1494d3d30

void __thiscall
UComputeGraph::InitializeDataProviders
          (UComputeGraph *this,int param_1,TObjectPtr<UObject> *param_2,
          TArray<TObjectPtr<UComputeDataProvider>,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  atomic<unsigned_char> *paVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  uVar12 = (ulonglong)param_1;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId309,"UComputeGraph::InitializeDataProviders",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
               ,0x135);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId309);
  }
  if ((param_1 < 0) || ((this->Bindings).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2037348609082523959>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                       ,0x137,"Bindings.IsValidIndex(InBindingIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((param_2->field0_0x0).DebugPtr != (UObject *)0x0) {
      uVar8 = 0;
      if (param_1 < (this->Bindings).ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = FObjectPtr::IsA((FObjectPtr *)param_2,
                              *(UClass **)((this->Bindings).AllocatorInstance.Data + uVar12 * 8));
      if (!bVar3) goto LAB_1494d413b;
    }
    uVar8 = 0;
    if (0 < (this->DataInterfaces).ArrayNum) {
      local_58 = 0;
      local_60 = 0;
      do {
        lVar10 = local_58;
        lVar7 = local_60;
        pcVar5 = "DataInterfaceToBinding.IsValidIndex(DataInterfaceIndex)";
        if (((int)uVar8 < 0) || ((this->DataInterfaceToBinding).ArrayNum <= (int)uVar8)) {
          iVar11 = 0x13b;
          paVar6 = &bGEnsureHasExecuted<2037348609082523963>;
LAB_1494d40b2:
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (paVar6,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                             ,iVar11,pcVar5);
          if (bVar3) {
code_r0x0001494d40ca:
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uVar13 = ~uVar8 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar8 < (this->DataInterfaceToBinding).ArrayNum) {
            uVar4 = uVar13;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((this->DataInterfaceToBinding).AllocatorInstance.Data + lVar7) == (int)uVar12
             ) {
            if ((int)uVar8 < param_3->ArrayNum) {
              if (((int)uVar8 < 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(longlong *)((param_3->AllocatorInstance).Data + lVar10) == 0) {
                pcVar5 = "InDataProviders[DataInterfaceIndex]";
                iVar11 = 0x13c;
                paVar6 = &bGEnsureHasExecuted<2037348609082523964>;
                goto LAB_1494d40b2;
              }
              uVar4 = 0;
              if ((int)uVar8 < (this->DataInterfaces).ArrayNum) {
                uVar4 = uVar13;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_50 = *(longlong *)((this->DataInterfaces).AllocatorInstance.Data + lVar10);
              if (local_50 != 0) {
                iVar11 = (this->GraphEdges).ArrayNum;
                uVar12 = 0;
                pFVar9 = (this->GraphEdges).AllocatorInstance.Data;
                pFVar14 = pFVar9 + (longlong)iVar11 * 0x38;
                while( true ) {
                  if ((this->GraphEdges).ArrayNum != iVar11) {
                    local_68[0] = 0;
                    `TCheckedPointerIterator<FComputeGraphEdge_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_68);
                  }
                  if (pFVar9 == pFVar14) break;
                  if ((*(uint *)(pFVar9 + 8) == uVar8) &&
                     (pFVar9[0x10] != (FScriptContainerElement)0x0)) {
                    uVar12 = uVar12 | 1L << ((longlong)*(int *)(pFVar9 + 0xc) & 0x3fU);
                  }
                  pFVar9 = pFVar9 + 0x38;
                }
                uVar4 = 0;
                if ((int)uVar8 < param_3->ArrayNum) {
                  uVar4 = uVar13;
                }
                if ((uVar4 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar10 = local_58;
                plVar1 = *(longlong **)((param_3->AllocatorInstance).Data + local_58);
                (**(code **)(*plVar1 + 0x2b0))
                          (plVar1,local_50,(param_2->field0_0x0).DebugPtr,uVar12,uVar12);
                uVar12 = (ulonglong)(uint)param_1;
                lVar7 = local_60;
              }
            }
            else {
              bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<2037348609082523964>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeGraph.cpp"
                                 ,0x13c,"InDataProviders.IsValidIndex(DataInterfaceIndex)");
              if (bVar3) goto code_r0x0001494d40ca;
            }
          }
        }
        local_60 = lVar7 + 4;
        local_58 = lVar10 + 8;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->DataInterfaces).ArrayNum);
    }
  }
LAB_1494d413b:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnKernelCompilationComplete @ 1494d4b70

void __thiscall
UComputeGraph::OnKernelCompilationComplete
          (UComputeGraph *this,int param_1,FComputeKernelCompileResults *param_2)

{
  return;
}

// PostLoad @ 1494d4cf0

void __thiscall UComputeGraph::PostLoad(UComputeGraph *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FComputeGraphRenderProxy *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  pFVar4 = (this->DataInterfaces).AllocatorInstance.Data;
  iVar2 = (this->DataInterfaces).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DataInterfaces).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(UObject **)pFVar4 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)pFVar4);
    }
    pFVar4 = pFVar4 + 8;
  }
  ReleaseRenderProxy(this,this->RenderProxy);
  pFVar3 = CreateRenderProxy(this);
  this->RenderProxy = pFVar3;
  return;
}

// ReleaseRenderProxy @ 1494d5e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UComputeGraph::ReleaseRenderProxy(UComputeGraph *this,FComputeGraphRenderProxy *param_1)

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
  FComputeGraphRenderProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FComputeGraphRenderProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  if (param_1 != (FComputeGraphRenderProxy *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UComputeGraph::ReleaseRenderProxy_::__l5::TSTR_ReleaseRenderProxy568>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UComputeGraph::ReleaseRenderProxy'::__l5::TSTR_ReleaseRenderProxy568>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
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
  }
  return;
}

// Serialize @ 1494d6e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UComputeGraph::Serialize(UComputeGraph *this,FArchive *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FComputeKernelShaderMap *pFVar3;
  code *pcVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  int iVar7;
  FComputeKernelResource *pFVar8;
  FComputeKernelResource *this_00;
  undefined8 *puVar9;
  int iVar10;
  FComputeKernelResource *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FComputeKernelResource *pFVar15;
  FComputeKernelResource *pFVar16;
  uint local_res10 [2];
  uint local_res18 [4];
  FScriptContainerElement local_48 [16];
  
  UObject::Serialize((UObject *)this,param_1);
  pFVar15 = (FComputeKernelResource *)0x0;
  local_res10[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    local_res10[0] = (this->KernelResources).ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar14 = local_res10[0];
  if ((param_1->field_0x28 & 1) != 0) {
    piVar1 = &(this->KernelResources).ArrayNum;
    iVar10 = *piVar1;
    if (iVar10 < (int)local_res10[0]) {
      iVar10 = local_res10[0] - iVar10;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar10,&(this->KernelResources).AllocatorInstance,piVar1,
                         &(this->KernelResources).ArrayMax);
      DefaultConstructItems<UComputeGraph::FComputeKernelResourceSet,int>
                ((this->KernelResources).AllocatorInstance.Data + (longlong)iVar7 * 8,iVar10);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar10) {
        uVar13 = iVar10 - local_res10[0];
        if (((int)(local_res10[0] | uVar13) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar13 != 0) {
          TArray<UComputeGraph::FComputeKernelResourceSet,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->KernelResources,uVar14,uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(this->KernelResources).AllocatorInstance,*piVar1,
                     &(this->KernelResources).ArrayMax);
        }
      }
    }
  }
  pFVar11 = pFVar15;
  pFVar16 = pFVar15;
  if (0 < (int)local_res10[0]) {
    do {
      uVar13 = (uint)pFVar11;
      uVar14 = 0;
      if ((int)uVar13 < (this->KernelResources).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (FScriptContainerElement *)
                ((longlong)&pFVar16->_padding_ +
                (longlong)(this->KernelResources).AllocatorInstance.Data);
      if ((param_1->field_0x28 & 1) != 0) {
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_res18[0] = 0;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res18);
          }
        }
        else {
          local_res18[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        pFVar11 = pFVar15;
        if (0 < (int)local_res18[0]) {
          do {
            pFVar8 = ::operator_new(0x1a0);
            this_00 = pFVar15;
            if (pFVar8 != (FComputeKernelResource *)0x0) {
              this_00 = FComputeKernelResource::FComputeKernelResource(pFVar8);
            }
            FComputeKernelResource::SerializeShaderMap(this_00,param_1);
            pFVar3 = (this_00->GameThreadShaderMap).Reference;
            if (((pFVar3 == (FComputeKernelShaderMap *)0x0) ||
                (EVar6 = FShaderMapContent::GetShaderPlatform
                                   ((FShaderMapContent *)pFVar3->_padding_),
                GMaxRHIShaderPlatform != EVar6)) || (pFVar12 == local_48)) {
              if (this_00 != (FComputeKernelResource *)0x0) {
                puVar9 = (undefined8 *)this_00->_padding_;
                goto LAB_1494d710b;
              }
            }
            else {
              pFVar8 = *(FComputeKernelResource **)pFVar12;
              *(FComputeKernelResource **)pFVar12 = this_00;
              if (pFVar8 != (FComputeKernelResource *)0x0) {
                puVar9 = (undefined8 *)pFVar8->_padding_;
                this_00 = pFVar8;
LAB_1494d710b:
                (*(code *)*puVar9)(this_00,1);
              }
            }
            uVar14 = (int)pFVar11 + 1;
            pFVar11 = (FComputeKernelResource *)(ulonglong)uVar14;
          } while ((int)uVar14 < (int)local_res18[0]);
        }
      }
      pFVar11 = (FComputeKernelResource *)(ulonglong)(uVar13 + 1);
      pFVar16 = (FComputeKernelResource *)&pFVar16->CompilationResults;
    } while ((int)(uVar13 + 1) < (int)local_res10[0]);
  }
  return;
}

// Serialize @ 1494d7170

void __thiscall UComputeGraph::Serialize(UComputeGraph *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUComputeGraph @ 1494d7e60

void __cdecl UComputeGraph::StaticRegisterNativesUComputeGraph(void)

{
  return;
}

// UpdateResources @ 1494dad70

void __thiscall UComputeGraph::UpdateResources(UComputeGraph *this,bool param_1)

{
  FComputeGraphRenderProxy *pFVar1;
  
  ReleaseRenderProxy(this,this->RenderProxy);
  pFVar1 = CreateRenderProxy(this);
  this->RenderProxy = pFVar1;
  return;
}

// ValidateGraph @ 1494dada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UComputeGraph::ValidateGraph(UComputeGraph *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<bool> FVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_a8 [32];
  ForElementType<bool> local_78;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  uVar8 = (this->KernelInvocations).ArrayNum;
  local_78.SecondaryData = (ForElementType<bool>)0x0;
  local_30[0] = 0;
  local_30[1] = 0x40;
  if ((int)uVar8 < 1) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
              (1,1,uVar8,&local_78,local_30,local_30 + 1);
  }
  uVar8 = 0;
  if (0 < (this->KernelInvocations).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < local_30[0]) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar7 = (ForElementType<bool>)&local_78;
      if (local_78.SecondaryData != (ForElementType<bool>)0x0) {
        FVar7 = local_78.SecondaryData;
      }
      uVar8 = uVar8 + 1;
      *(undefined1 *)(lVar9 + (longlong)FVar7) = 0;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < (this->KernelInvocations).ArrayNum);
  }
  uVar8 = 0;
  if (0 < (this->GraphEdges).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->GraphEdges).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar5 = *(uint *)((this->GraphEdges).AllocatorInstance.Data + lVar9 + 8);
      uVar6 = 0;
      if ((int)uVar5 < (this->DataInterfaces).ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      cVar4 = (**(code **)(**(longlong **)
                             ((this->DataInterfaces).AllocatorInstance.Data +
                             (longlong)(int)uVar5 * 8) + 0x2b8))();
      if (cVar4 != '\0') {
        uVar5 = 0;
        if ((int)uVar8 < (this->GraphEdges).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        uVar5 = *(uint *)((this->GraphEdges).AllocatorInstance.Data + lVar9);
        uVar6 = 0;
        if ((int)uVar5 < local_30[0]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        FVar7 = (ForElementType<bool>)&local_78;
        if (local_78.SecondaryData != (ForElementType<bool>)0x0) {
          FVar7 = local_78.SecondaryData;
        }
        if (*(char *)((longlong)FVar7 + (longlong)(int)uVar5) != '\0') goto LAB_1494db1bb;
        uVar6 = 0;
        if ((int)uVar5 < local_30[0]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        FVar7 = (ForElementType<bool>)&local_78;
        if (local_78.SecondaryData != (ForElementType<bool>)0x0) {
          FVar7 = local_78.SecondaryData;
        }
        *(undefined1 *)((longlong)(int)uVar5 + (longlong)FVar7) = 1;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x38;
    } while ((int)uVar8 < (this->GraphEdges).ArrayNum);
  }
  uVar8 = 0;
  if (0 < (this->KernelInvocations).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->KernelInvocations).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(longlong *)((this->KernelInvocations).AllocatorInstance.Data + lVar9 * 8) != 0) {
        uVar5 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        FVar7 = (ForElementType<bool>)&local_78;
        if (local_78.SecondaryData != (ForElementType<bool>)0x0) {
          FVar7 = local_78.SecondaryData;
        }
        if (*(char *)((longlong)FVar7 + lVar9) == '\0') goto LAB_1494db1bb;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < (this->KernelInvocations).ArrayNum);
  }
  bVar2 = true;
LAB_1494db161:
  if (local_78.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  return bVar2;
LAB_1494db1bb:
  bVar2 = false;
  goto LAB_1494db161;
}

// ValidateProviders @ 1494db1d0

bool __thiscall
UComputeGraph::ValidateProviders
          (UComputeGraph *this,
          TArray<TObjectPtr<UComputeDataProvider>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (this->DataInterfaces).ArrayNum;
  if (iVar1 == param_1->ArrayNum) {
    uVar6 = 0;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        if (*(longlong *)((param_1->AllocatorInstance).Data + lVar7) == 0) {
          uVar5 = 0;
          if ((int)uVar6 < (this->DataInterfaces).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          if (*(longlong *)((this->DataInterfaces).AllocatorInstance.Data + lVar7) != 0)
          goto LAB_1494db2c9;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->DataInterfaces).ArrayNum);
    }
    bVar3 = true;
  }
  else {
LAB_1494db2c9:
    bVar3 = false;
  }
  return bVar3;
}

