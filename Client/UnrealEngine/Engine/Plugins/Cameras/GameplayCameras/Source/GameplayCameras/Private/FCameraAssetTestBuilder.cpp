// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// MakeDirector<UFixedTestCameraDirector> @ 14d652ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
* __thiscall
UE::Cameras::Test::FCameraAssetTestBuilder::MakeDirector<UFixedTestCameraDirector>
          (FCameraAssetTestBuilder *this,
          TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
          *__return_storage_ptr__)

{
  UClass *pUVar1;
  UFixedTestCameraDirector *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98._8_8_ = this->CameraAsset;
  __return_storage_ptr__->_padding_ = (longlong)this;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ =
       (longlong)
       &
       ___7__TCameraDirectorTestBuilder_VFCameraAssetTestBuilder_Test_Cameras_UE__VUFixedTestCameraDirector__X_Test_Cameras_UE__6B_
  ;
  if ((UCameraAsset *)local_98._8_8_ == (UCameraAsset *)0x0) {
    local_98._8_8_ = GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_98._8_8_,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFixedTestCameraDirector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  pUVar2 = (UFixedTestCameraDirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  __return_storage_ptr__->CameraDirector = pUVar2;
  __return_storage_ptr__->_padding_ = (longlong)pUVar2;
  UCameraAsset::SetCameraDirector(this->CameraAsset,(UCameraDirector *)pUVar2);
  return __return_storage_ptr__;
}

// FCameraAssetTestBuilder @ 14d655250

FCameraAssetTestBuilder * __thiscall
UE::Cameras::Test::FCameraAssetTestBuilder::FCameraAssetTestBuilder
          (FCameraAssetTestBuilder *this,UObject *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraAsset *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FCameraAssetTestBuilder *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FNamedObjectRegistry *pFVar10;
  FNamedObjectRegistry *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FCameraAssetTestBuilder_Test_Cameras_UE__6B_;
  (this->NamedObjectRegistry).Object = (FNamedObjectRegistry *)0x0;
  (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 == (UObject *)0x0) {
    param_1 = (UObject *)GetTransientPackage();
  }
  pUVar6 = NewObject<UCameraAsset>(param_1);
  this->CameraAsset = pUVar6;
  this->_padding_ = (longlong)pUVar6;
  pTVar7 = ::operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar10 = (FNamedObjectRegistry *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar10 = (FNamedObjectRegistry *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamedObjectRegistry_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar7[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
    pTVar7[6]._padding_ = 0;
    pTVar9 = pTVar7;
    if (pFVar10 == (FNamedObjectRegistry *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FCameraAssetTestBuilder *)(*pcVar4)();
        return pFVar8;
      }
      goto LAB_14d6553af;
    }
  }
  if (((pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10->_padding_ = (longlong)pFVar10;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      pFVar10->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14d6553af:
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar10;
  local_20.ReferenceController = pTVar9;
  if (&this->NamedObjectRegistry !=
      (TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *)&local_28) {
    (this->NamedObjectRegistry).Object = pFVar10;
    local_28 = (FNamedObjectRegistry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NamedObjectRegistry).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// GetNamedObjectRegistry @ 14d660090

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::FCameraAssetTestBuilder::GetNamedObjectRegistry
          (FCameraAssetTestBuilder *this,
          TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NamedObjectRegistry).Object;
  pTVar1 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

