// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FBindlessTextureCollectionResource @ 14887c3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FBindlessTextureCollectionResource * __thiscall
FBindlessTextureCollectionResource::FBindlessTextureCollectionResource
          (FBindlessTextureCollectionResource *this,UTextureCollection *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBindlessTextureCollectionResource *pFVar7;
  UTexture2D *pUVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextureCollectionResource__6B_;
  piVar1 = &(this->InputTextureResources).ArrayMax;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(longlong *)((longlong)&this->_padding_ + 4) = param_1->_padding_;
  this->_padding_ = (longlong)&___7FBindlessTextureCollectionResource__6B_;
  (this->InputTextureResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTextureResources).ArrayNum = 0;
  *piVar1 = 0;
  (this->ResourceCollectionRHI).Reference = (FRHIResourceCollection *)0x0;
  pFVar10 = (param_1->Textures).AllocatorInstance.Data;
  uVar3 = (param_1->Textures).ArrayNum;
  if ((int)uVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FBindlessTextureCollectionResource *)(*pcVar4)();
      return pFVar7;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(this->InputTextureResources).AllocatorInstance,0,piVar1);
  }
  pFVar2 = pFVar10 + (longlong)(int)uVar3 * 8;
  do {
    if (pFVar10 == pFVar2) {
      return this;
    }
    pUVar8 = *(UTexture2D **)pFVar10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 == (UTexture2D *)0x0) goto LAB_14887c4b0;
    }
    else if (pUVar8 == (UTexture2D *)0x0) {
LAB_14887c4b0:
      pUVar8 = (GEngine->DefaultTexture).field0_0x0.DebugPtr;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    bVar5 = IsInParallelGameThread();
    if ((((bVar5) || (bVar5 = IsInGameThread(), bVar5)) || (bVar5 = IsInSlateThread(), bVar5)) ||
       (bVar5 = (*IsInAsyncLoadingThread)(), bVar5)) {
      lVar9 = pUVar8->_padding_;
    }
    else {
      bVar5 = IsInParallelRenderingThread();
      if ((bVar5) || (bVar5 = IsInRHIThread(), bVar5)) {
        lVar9 = pUVar8->_padding_;
      }
      else {
        `UTexture::GetResource'::__l2::<lambda_1>::operator()(local_res8);
        lVar9 = 0;
      }
    }
    iVar6 = (this->InputTextureResources).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->InputTextureResources).AllocatorInstance,piVar1);
    }
    pFVar10 = pFVar10 + 8;
    (this->InputTextureResources).ArrayNum = iVar6 + 1;
    *(longlong *)((this->InputTextureResources).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         lVar9;
  } while( true );
}

// ~FBindlessTextureCollectionResource @ 14887e990

void __thiscall
FBindlessTextureCollectionResource::~FBindlessTextureCollectionResource
          (FBindlessTextureCollectionResource *this)

{
  FRHIResourceCollection *this_00;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->ResourceCollectionRHI).Reference;
  if (this_00 != (FRHIResourceCollection *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->InputTextureResources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// InitRHI @ 148893a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FBindlessTextureCollectionResource::InitRHI
          (FBindlessTextureCollectionResource *this,FRHICommandListBase *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  FRHIResourceCollection *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  TRefCountPtr<FRHIResourceCollection> *pTVar9;
  undefined1 local_res8 [8];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  TRefCountPtr<FRHIResourceCollection> local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar2 = (this->InputTextureResources).ArrayNum;
  local_68._0_4_ = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  pFVar8 = (this->InputTextureResources).AllocatorInstance.Data;
  iVar3 = (this->InputTextureResources).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  iVar6 = (int)local_68;
  while( true ) {
    iStack_50 = iVar6;
    if ((this->InputTextureResources).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTextureResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
      iStack_50 = (int)local_68;
    }
    if (pFVar8 == pFVar1) break;
    if (*(longlong *)pFVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)pFVar8 + 0x58);
    }
    if (iStack_50 == local_68._4_4_) {
      iStack_50 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_70,(int *)((longlong)&local_68 + 4));
    }
    iVar6 = iStack_50 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar6);
    pFVar8 = pFVar8 + 8;
    *(undefined8 *)(local_70.Data + (longlong)iStack_50 * 0x10) = uVar7;
    local_70.Data[(longlong)iStack_50 * 0x10 + 8] = (FScriptContainerElement)0x1;
  }
  local_58 = local_70.Data;
  if (iStack_50 < 0) {
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                      ::__l2::LLMScope_Name1146,L"RHIMisc/CreateResourceCollection");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
             ::__l2::LLMScope_Name1146,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:_class_TRefCountPtr<FRHIResourceCollection>___cdecl_FRHICommandListBase::CreateResourceCollection(TArrayView<FRHIResourceCollectionMember_const_,int>)___ptr64'
              ::__l2::LLMScope_Name1146,true);
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  iStack_40 = iStack_50;
  uStack_3c = uStack_4c;
  (**(code **)(GDynamicRHI->_padding_ + 0x1c0))(GDynamicRHI,&local_78,param_1,&local_48);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  pTVar9 = &this->ResourceCollectionRHI;
  if (pTVar9 != &local_78) {
    this_00 = pTVar9->Reference;
    pTVar9->Reference = local_78.Reference;
    local_78.Reference = (FRHIResourceCollection *)0x0;
    if (this_00 == (FRHIResourceCollection *)0x0) goto LAB_148893c6c;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (local_78.Reference != (FRHIResourceCollection *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78.Reference);
  }
LAB_148893c6c:
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// ReleaseRHI @ 148896c60

void __thiscall
FBindlessTextureCollectionResource::ReleaseRHI(FBindlessTextureCollectionResource *this)

{
  return;
}

