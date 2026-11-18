// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// RemoveReplaceListener @ 145a2dcd0

void __thiscall
FD3D12RHITextureReference::RemoveReplaceListener
          (FD3D12RHITextureReference *this,FD3D12TextureReferenceReplaceListener *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FD3D12TextureReferenceReplaceListener *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FD3D12TextureReferenceReplaceListener *local_res10;
  int local_res18;
  
  lpCriticalSection = &this->TextureReplaceListenersCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->TextureReplaceListeners).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar1 + (longlong)(this->TextureReplaceListeners).ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res18 = (this->TextureReplaceListeners).ArrayNum;
  lVar4 = (longlong)local_res18;
  if (local_res18 != 0) {
    iVar9 = 0;
    pFVar1 = (this->TextureReplaceListeners).AllocatorInstance.Data;
    bVar3 = *(FD3D12TextureReferenceReplaceListener **)pFVar1 != local_res10;
    lVar8 = 0;
    pFVar5 = local_res10;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (lVar4 <= lVar8) break;
      } while (bVar3 == (*(FD3D12TextureReferenceReplaceListener **)(pFVar1 + lVar8 * 8) != pFVar5))
      ;
      if (bVar3 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pFVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < lVar4);
    (this->TextureReplaceListeners).ArrayNum = iVar9;
    if (local_res18 - iVar9 == 1) goto LAB_145a2de99;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Removed == 1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TextureReference.h"
                     ,0x31,
                     L"Should have exactly one registered listener during remove (same listener shouldn\'t registered twice and we shouldn\'t call this if not registered"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145a2de99:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FD3D12RHITextureReference @ 145a8f510

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RHITextureReference * __thiscall
FD3D12RHITextureReference::FD3D12RHITextureReference
          (FD3D12RHITextureReference *this,FD3D12Device *param_1,FD3D12Texture *param_2,
          FD3D12RHITextureReference *param_3)

{
  FD3D12ShaderResourceView *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIDescriptorHandle FVar4;
  FD3D12RHITextureReference *pFVar5;
  FD3D12ShaderResourceRenameListener *pFVar6;
  
  this->_padding_ = (longlong)param_1;
  if (param_3 == (FD3D12RHITextureReference *)0x0) {
    FVar4 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                      (param_1->BindlessDescriptorAllocator,AccelerationStructure);
  }
  else {
    FVar4 = (FRHIDescriptorHandle)&param_3->_padding_;
  }
  FRHITextureReference::FRHITextureReference
            ((FRHITextureReference *)this,(FRHITexture *)param_2,*(FRHIDescriptorHandle *)FVar4);
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&___7FD3D12RHITextureReference__6B_;
  this->ReferencedDescriptorVersion = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->TextureReplaceListenersCS,4000);
  (this->TextureReplaceListeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextureReplaceListeners).ArrayNum = 0;
  (this->TextureReplaceListeners).ArrayMax = 0;
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    pFVar6 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
    if (this == (FD3D12RHITextureReference *)0x0) {
      pFVar6 = (FD3D12ShaderResourceRenameListener *)0x0;
    }
    FD3D12BaseShaderResource::AddRenameListener
              ((FD3D12BaseShaderResource *)&param_2->_padding_,pFVar6);
    pFVar1 = (param_2->ShaderResourceView).Object;
    if ((FD3D12ResourceLocation *)pFVar1->_padding_ == (FD3D12ResourceLocation *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0x103,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FD3D12RHITextureReference *)(*pcVar2)();
        return pFVar5;
      }
    }
    this->ReferencedDescriptorVersion = (uint)((ulonglong)pFVar1->_padding_ >> 0x20);
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              (&param_1->BindlessDescriptorManager,(FRHIDescriptorHandle)this->_padding_,
               (FD3D12View *)pFVar1);
  }
  return this;
}

// ~FD3D12RHITextureReference @ 145a94ad0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RHITextureReference::~FD3D12RHITextureReference(FD3D12RHITextureReference *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIViewableResource__;
  lpCriticalSection = &this->TextureReplaceListenersCS;
  this->_padding_ = (longlong)&_vftable__for__RHIValidation__FTextureResource__;
  this->_padding_ = (longlong)&___7FD3D12RHITextureReference__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (this->TextureReplaceListeners).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((iVar2 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasListeners()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TextureReference.cpp"
                         ,0x1c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    FD3D12BaseShaderResource::RemoveRenameListener
              ((FD3D12BaseShaderResource *)(this->_padding_ + 0x138),
               (FD3D12ShaderResourceRenameListener *)&this->_padding_);
    plVar1 = &this->_padding_;
    uVar5 = 0;
    bVar7 = (int)*plVar1 != 0;
    if (bVar7) {
      for (; ((uint)*plVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    uVar8 = 0x20;
    if (bVar7) {
      uVar8 = (ulonglong)uVar5;
    }
    pvVar3 = (this->TextureReplaceListenersCS).CriticalSection.Opaque1[uVar8 - 9];
    puVar9 = (undefined1 *)((longlong)pvVar3 + 0x158);
    if (pvVar3 == (void *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    if ((longlong *)puVar9 == plVar1) {
      if ((this->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FD3D12BindlessDescriptorManager::DeferredFreeFromDestructor
                ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),
                 (FRHIDescriptorHandle)this->_padding_);
    }
  }
  pFVar4 = (this->TextureReplaceListeners).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::
  ~FD3D12LinkedAdapterObject<FD3D12RHITextureReference>
            ((FD3D12LinkedAdapterObject<FD3D12RHITextureReference> *)&this->_padding_);
  FRHITextureReference::~FRHITextureReference((FRHITextureReference *)this);
  return;
}

// ResourceRenamed @ 145ab7fe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RHITextureReference::ResourceRenamed
          (FD3D12RHITextureReference *this,FD3D12ContextArray *param_1,
          FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  FD3D12View *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12ResourceLocation *pFVar5;
  
  if ((this[-1].TextureReplaceListeners.ArrayNum != -1) &&
     ((char)this[-1].TextureReplaceListeners.ArrayMax != '\t')) {
    pFVar5 = &param_2[1].ResourceLocation;
    if (param_2 == (FD3D12BaseShaderResource *)0x0) {
      pFVar5 = (FD3D12ResourceLocation *)&DAT_00000240;
    }
    pFVar1 = (FD3D12View *)pFVar5->_padding_;
    if ((pFVar1->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0x103,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = (pFVar1->OfflineCpuHandle).Version;
    *(undefined4 *)&this->_padding_ = uVar2;
    if (this->_padding_ == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FD3D12BindlessDescriptorManager::UpdateDescriptor
              ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),param_1,
               *(FRHIDescriptorHandle *)&this[-1].TextureReplaceListeners.ArrayNum,pFVar1);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5537984415474384811>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12TextureReference.cpp"
                     ,0x55,"BindlessHandle.IsValid()");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// SwitchToNewTexture @ 145aba150

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12RHITextureReference::SwitchToNewTexture
          (FD3D12RHITextureReference *this,FD3D12ContextArray *param_1,FD3D12Texture *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FD3D12Texture *pFVar3;
  FD3D12ShaderResourceView *pFVar4;
  code *pcVar5;
  uint uVar6;
  FD3D12ContextArray *pFVar7;
  bool bVar8;
  FD3D12ShaderResourceRenameListener *pFVar9;
  TRefCountPtr<FRHITexture> TVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FD3D12ContextArray *local_res10;
  
  pFVar3 = (FD3D12Texture *)this->_padding_;
  TVar10.Reference = FRHITextureReference::DefaultTexture.Reference;
  if (param_2 != (FD3D12Texture *)0x0) {
    TVar10.Reference = (FRHITexture *)param_2;
  }
  local_res10 = param_1;
  if (pFVar3 != (FD3D12Texture *)TVar10.Reference) {
    if (&this->TextureReplaceListenersCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->TextureReplaceListenersCS);
    pFVar7 = local_res10;
    pFVar11 = (this->TextureReplaceListeners).AllocatorInstance.Data;
    iVar2 = (this->TextureReplaceListeners).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->TextureReplaceListeners).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12TextureReferenceReplaceListener_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar1) break;
      (**(code **)**(undefined8 **)pFVar11)
                (*(undefined8 **)pFVar11,pFVar7,this,pFVar3,TVar10.Reference);
      pFVar11 = pFVar11 + 8;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->TextureReplaceListenersCS);
  }
  pFVar7 = local_res10;
  if (((int)this->_padding_ != -1) && (*(char *)((longlong)&this->_padding_ + 4) != '\t')) {
    pFVar4 = (((FD3D12Texture *)TVar10.Reference)->ShaderResourceView).Object;
    if ((FD3D12ResourceLocation *)pFVar4->_padding_ == (FD3D12ResourceLocation *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0x103,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = *(uint *)((longlong)&pFVar4->_padding_ + 4);
    if (pFVar3 == (FD3D12Texture *)TVar10.Reference) {
      if (uVar6 != this->ReferencedDescriptorVersion) {
        if (this->_padding_ == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FD3D12BindlessDescriptorManager::UpdateDescriptor
                  ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),pFVar7,
                   (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)pFVar4);
      }
    }
    else {
      if (pFVar3 != (FD3D12Texture *)0x0) {
        pFVar9 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
        if (this == (FD3D12RHITextureReference *)0x0) {
          pFVar9 = (FD3D12ShaderResourceRenameListener *)0x0;
        }
        FD3D12BaseShaderResource::RemoveRenameListener
                  ((FD3D12BaseShaderResource *)&pFVar3->_padding_,pFVar9);
      }
      pFVar9 = (FD3D12ShaderResourceRenameListener *)&this->_padding_;
      if (this == (FD3D12RHITextureReference *)0x0) {
        pFVar9 = (FD3D12ShaderResourceRenameListener *)0x0;
      }
      FD3D12BaseShaderResource::AddRenameListener
                ((FD3D12BaseShaderResource *)&((FD3D12Texture *)TVar10.Reference)->_padding_,pFVar9)
      ;
      if (this->_padding_ == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FD3D12BindlessDescriptorManager::UpdateDescriptor
                ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),pFVar7,
                 (FRHIDescriptorHandle)this->_padding_,(FD3D12View *)pFVar4);
    }
    this->ReferencedDescriptorVersion = uVar6;
  }
  pFVar3 = (FD3D12Texture *)this->_padding_;
  if (pFVar3 != param_2) {
    this->_padding_ = (longlong)param_2;
    if (param_2 != (FD3D12Texture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    if (pFVar3 != (FD3D12Texture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  return;
}

