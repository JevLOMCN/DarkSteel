// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// StaticClass @ 14695c910

UClass * __cdecl UPostBufferBlurUpdater::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PostBufferBlurUpdater",
               &Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton,
               StaticRegisterNativesUPostBufferBlurUpdater,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPostBufferBlurUpdater>,
               InternalVTableHelperCtorCaller<UPostBufferBlurUpdater>,local_res8,
               USlatePostBufferProcessorUpdater::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton;
}

// UPostBufferBlurUpdater @ 14698c630

UPostBufferBlurUpdater * __thiscall
UPostBufferBlurUpdater::UPostBufferBlurUpdater(UPostBufferBlurUpdater *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPostBufferBlurUpdater__6B_;
  this->GaussianBlurStrength = 10.0;
  return this;
}

// UPostBufferBlurUpdater @ 14698c670

UPostBufferBlurUpdater * __thiscall
UPostBufferBlurUpdater::UPostBufferBlurUpdater
          (UPostBufferBlurUpdater *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPostBufferBlurUpdater__6B_;
  this->GaussianBlurStrength = 10.0;
  return this;
}

// ~UPostBufferBlurUpdater @ 146993c00

void __thiscall UPostBufferBlurUpdater::~UPostBufferBlurUpdater(UPostBufferBlurUpdater *this)

{
  this->_padding_ = (longlong)&___7USlatePostBufferProcessorUpdater__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1469d4ff0

UClass * __cdecl UPostBufferBlurUpdater::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PostBufferBlurUpdater",
               &Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton,
               StaticRegisterNativesUPostBufferBlurUpdater,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPostBufferBlurUpdater>,
               InternalVTableHelperCtorCaller<UPostBufferBlurUpdater>,local_res8,
               USlatePostBufferProcessorUpdater::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPostBufferBlurUpdater.InnerSingleton;
}

// GetRenderThreadProxy @ 1469d6d30

TSharedPtr<FSlatePostProcessorUpdaterProxy,1> * __thiscall
UPostBufferBlurUpdater::GetRenderThreadProxy
          (UPostBufferBlurUpdater *this,
          TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSlatePostProcessorUpdaterProxy *pFVar10;
  TSharedPtr<FSlatePostProcessorUpdaterProxy,1> local_38 [2];
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->Object = (FSlatePostProcessorUpdaterProxy *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FSlatePostProcessorUpdaterProxy *)&DAT_00000010;
LAB_1469d6dde:
    if (((*(longlong *)&pFVar10->field_0x8 == 0) || (*(longlong *)&pFVar10->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pFVar10->field_0x10 + 8) < 1)) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FSlatePostProcessorUpdaterProxy **)&pFVar10->field_0x8 = pFVar10;
      if (pTVar9 != *(TReferenceControllerBase<1> **)&pFVar10->field_0x10) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar10->field_0x10;
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
        *(TReferenceControllerBase<1> **)&pFVar10->field_0x10 = pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469d6e48;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar10 = (FSlatePostProcessorUpdaterProxy *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPostBufferBlurUpdaterProxy___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FPostBufferBlurUpdaterProxy__6B_;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x41200000;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar9 = pTVar7;
    if (pFVar10 != (FSlatePostProcessorUpdaterProxy *)0x0) goto LAB_1469d6dde;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  LOCK();
  pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
  UNLOCK();
LAB_1469d6e48:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  fVar3 = this->GaussianBlurStrength;
  if (pFVar10 == (FSlatePostProcessorUpdaterProxy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FSlatePostProcessorUpdaterProxy,1> *)(*pcVar5)();
      return pTVar8;
    }
  }
  *(float *)(pFVar10 + 1) = fVar3;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38[0].Object = pFVar10;
  local_38[0].SharedReferenceCount.ReferenceController = pTVar9;
  if (__return_storage_ptr__ != local_38) {
    __return_storage_ptr__->Object = pFVar10;
    local_38[0].Object = (FSlatePostProcessorUpdaterProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&__return_storage_ptr__->SharedReferenceCount,&local_38[0].SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPostBufferBlurUpdater @ 146a1eca0

void __cdecl UPostBufferBlurUpdater::StaticRegisterNativesUPostBufferBlurUpdater(void)

{
  return;
}

