// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// ~FRecordUpdateTextureReferenceReplaceListener @ 1459f9a80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener::
~FRecordUpdateTextureReferenceReplaceListener(FRecordUpdateTextureReferenceReplaceListener *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FD3D12RHITextureReference *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = (this->TextureReference).Reference;
  if (this_00 == (FD3D12RHITextureReference *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// Init @ 145a1e230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener::Init
          (FRecordUpdateTextureReferenceReplaceListener *this,uint param_1,uint param_2,
          FD3D12RHITextureReference *param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FD3D12RHITextureReference *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FD3D12ShaderResourceRenameListener *pFVar10;
  TArray<FD3D12TextureReferenceReplaceListener_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FRecordUpdateTextureReferenceReplaceListener *local_18 [2];
  
  this->RecordIndex = param_2;
  pFVar2 = (this->TextureReference).Reference;
  if (pFVar2 != param_3) {
    (this->TextureReference).Reference = param_3;
    if (param_3 != (FD3D12RHITextureReference *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_3);
    }
    if (pFVar2 != (FD3D12RHITextureReference *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pFVar2 = (this->TextureReference).Reference;
  lpCriticalSection = &pFVar2->TextureReplaceListenersCS;
  local_18[0] = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar11 = &pFVar2->TextureReplaceListeners;
  pFVar9 = (pTVar11->AllocatorInstance).Data;
  pFVar3 = pFVar9 + (longlong)(pFVar2->TextureReplaceListeners).ArrayNum * 8;
  do {
    if (pFVar9 == pFVar3) {
LAB_145a1e2eb:
      pFVar3 = (pTVar11->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(pFVar2->TextureReplaceListeners).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (pFVar2->TextureReplaceListeners).ArrayNum;
      piVar1 = &(pFVar2->TextureReplaceListeners).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar11->AllocatorInstance,piVar1);
        (pFVar2->TextureReplaceListeners).ArrayNum = iVar8 + 1;
      }
      else {
        (pFVar2->TextureReplaceListeners).ArrayNum = iVar8 + 1;
      }
      *(FRecordUpdateTextureReferenceReplaceListener **)
       ((pTVar11->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = ((this->TextureReference).Reference)->_padding_;
      pFVar10 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
      if (this == (FRecordUpdateTextureReferenceReplaceListener *)0x0) {
        pFVar10 = (FD3D12ShaderResourceRenameListener *)0x0;
      }
      FD3D12BaseShaderResource::AddRenameListener
                ((FD3D12BaseShaderResource *)(lVar4 + 0x138),pFVar10);
      pFVar5 = *(FD3D12Resource **)(lVar4 + 400);
      this->CurrentResource = pFVar5;
      if ((pFVar5 == (FD3D12Resource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentResource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                             ,0x804,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UpdatePersistentReferencedResource(this->ShaderTable,param_1,this->CurrentResource,1);
      return;
    }
    if (*(FRecordUpdateTextureReferenceReplaceListener **)pFVar9 == local_18[0]) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TextureReplaceListeners.Contains(InListener)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TextureReference.h"
                         ,0x28,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_145a1e2eb;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// ResourceRenamed @ 145a2f6f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener::
ResourceRenamed(FRecordUpdateTextureReferenceReplaceListener *this,FD3D12ContextArray *param_1,
               FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  longlong lVar1;
  FD3D12RHITextureReference *pFVar2;
  FD3D12RHITextureReference *pFVar3;
  code *pcVar4;
  bool bVar5;
  FD3D12BaseShaderResource *pFVar6;
  
  lVar1 = *(longlong *)(*(longlong *)&this->RecordIndex + 0x138);
  pFVar6 = (FD3D12BaseShaderResource *)(lVar1 + 0x138);
  if (lVar1 == 0) {
    pFVar6 = (FD3D12BaseShaderResource *)0x0;
  }
  if (param_2 != pFVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRenamedResource == ReferencedTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x82e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (FD3D12RHITextureReference *)param_3->UnderlyingResource;
  pFVar3 = (this->TextureReference).Reference;
  if (pFVar2 != pFVar3) {
    UpdatePersistentReferencedResource
              ((FD3D12RayTracingShaderBindingTableInternal *)this->_padding_,0,
               (FD3D12Resource *)pFVar3,-1);
    UpdatePersistentReferencedResource
              ((FD3D12RayTracingShaderBindingTableInternal *)this->_padding_,0,
               (FD3D12Resource *)pFVar2,1);
    (this->TextureReference).Reference = pFVar2;
  }
  return;
}

// TextureReplaced @ 145a33990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateTextureReferenceReplaceListener::
TextureReplaced(FRecordUpdateTextureReferenceReplaceListener *this,FD3D12ContextArray *param_1,
               FD3D12RHITextureReference *param_2,FD3D12Texture *param_3,FD3D12Texture *param_4)

{
  FD3D12Resource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12ShaderResourceRenameListener *pFVar4;
  
  if ((this->TextureReference).Reference != param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureReference == InTextureReference",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x81b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (FD3D12Resource *)param_4->_padding_;
  if (pFVar1 != this->CurrentResource) {
    UpdatePersistentReferencedResource(this->ShaderTable,0,this->CurrentResource,-1);
    UpdatePersistentReferencedResource(this->ShaderTable,0,pFVar1,1);
    this->CurrentResource = pFVar1;
  }
  pFVar4 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
  if (this == (FRecordUpdateTextureReferenceReplaceListener *)0x0) {
    pFVar4 = (FD3D12ShaderResourceRenameListener *)0x0;
  }
  FD3D12BaseShaderResource::RemoveRenameListener
            ((FD3D12BaseShaderResource *)&param_3->_padding_,pFVar4);
  FD3D12BaseShaderResource::AddRenameListener
            ((FD3D12BaseShaderResource *)&param_4->_padding_,pFVar4);
  return;
}

