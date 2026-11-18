// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 7

// StaticClass @ 145fd2010

UClass * __cdecl USlatePostBufferBlur::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlatePostBufferBlur",
               &Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton,
               StaticRegisterNativesUSlatePostBufferBlur,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USlatePostBufferBlur>,
               InternalVTableHelperCtorCaller<USlatePostBufferBlur>,local_res8,
               USlateRHIPostBufferProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton;
}

// USlatePostBufferBlur @ 145fe8920

USlatePostBufferBlur * __thiscall
USlatePostBufferBlur::USlatePostBufferBlur(USlatePostBufferBlur *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->GaussianBlurStrength = 10.0;
  this->_padding_ = (longlong)&___7USlatePostBufferBlur__6B_;
  (this->RenderThreadProxy).Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
  (this->RenderThreadProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USlatePostBufferBlur @ 145fe8960

USlatePostBufferBlur * __thiscall
USlatePostBufferBlur::USlatePostBufferBlur(USlatePostBufferBlur *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FObjectInitializer *pFVar4;
  undefined8 local_18 [2];
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  this->GaussianBlurStrength = 10.0;
  this->_padding_ = (longlong)&___7USlatePostBufferBlur__6B_;
  (this->RenderThreadProxy).Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
  (this->RenderThreadProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((&this->RenderThreadProxy != (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *)local_18) &&
     (pTVar3 = (this->RenderThreadProxy).SharedReferenceCount.ReferenceController,
     pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)pTVar3->_padding_)();
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// ~USlatePostBufferBlur @ 145feb560

void __thiscall USlatePostBufferBlur::~USlatePostBufferBlur(USlatePostBufferBlur *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7USlatePostBufferBlur__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RenderThreadProxy != (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *)&local_18) {
    (this->RenderThreadProxy).Object = (FSlateRHIPostBufferProcessorProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RenderThreadProxy).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderThreadProxy).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7USlateRHIPostBufferProcessor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14600d560

UClass * __cdecl USlatePostBufferBlur::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlatePostBufferBlur",
               &Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton,
               StaticRegisterNativesUSlatePostBufferBlur,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USlatePostBufferBlur>,
               InternalVTableHelperCtorCaller<USlatePostBufferBlur>,local_res8,
               USlateRHIPostBufferProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlatePostBufferBlur.InnerSingleton;
}

// GetRenderThreadProxy @ 14600d930

TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> * __thiscall
USlatePostBufferBlur::GetRenderThreadProxy
          (USlatePostBufferBlur *this,
          TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSlateRHIPostBufferProcessorProxy *pFVar9;
  USlatePostBufferBlur *local_res8;
  FSlateRHIPostBufferProcessorProxy *local_28;
  FSharedReferencer<1> local_20;
  
  if ((this->RenderThreadProxy).Object != (FSlateRHIPostBufferProcessorProxy *)0x0)
  goto LAB_14600db33;
  bVar5 = IsInGameThread();
  if (!bVar5) goto LAB_14600db33;
  pTVar6 = ::operator_new(0x40);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FSlateRHIPostBufferProcessorProxy *)&DAT_00000010;
LAB_14600da1a:
    if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
       (*(int *)(pFVar9->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar9->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar9->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSlatePostBufferBlurProxy___00_SharedPointerInternals__6B_
    ;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = (longlong)&___7FSlatePostBufferBlurProxy__6B_;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[3]._padding_ = 0x41200000;
    *(undefined4 *)((longlong)&pTVar6[3]._padding_ + 4) = 0x41200000;
    FRenderCommandFence::FRenderCommandFence((FRenderCommandFence *)&pTVar6[3].SharedReferenceCount)
    ;
    pFVar9 = (FSlateRHIPostBufferProcessorProxy *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 != (FSlateRHIPostBufferProcessorProxy *)0x0) goto LAB_14600da1a;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar9;
  local_20.ReferenceController = pTVar8;
  if (&this->RenderThreadProxy != (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *)&local_28) {
    (this->RenderThreadProxy).Object = pFVar9;
    local_28 = (FSlateRHIPostBufferProcessorProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RenderThreadProxy).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((this->RenderThreadProxy).Object == (FSlateRHIPostBufferProcessorProxy *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSlateRHIPostBufferProcessorProxy,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar9 = (this->RenderThreadProxy).Object;
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pFVar9->ParentObject).WeakPtr,(FObjectPtr)&local_res8);
LAB_14600db33:
  __return_storage_ptr__->Object = (this->RenderThreadProxy).Object;
  pTVar8 = (this->RenderThreadProxy).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSlatePostBufferBlur @ 14602c250

void __cdecl USlatePostBufferBlur::StaticRegisterNativesUSlatePostBufferBlur(void)

{
  return;
}

