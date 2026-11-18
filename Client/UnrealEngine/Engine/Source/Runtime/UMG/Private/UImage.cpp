// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 60

// GetBrush_WrapperImpl @ 146958c30

void __cdecl UImage::GetBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  pFVar1 = FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)((longlong)param_1 + 0x1b0));
  FSlateBrush::operator=(param_2,pFVar1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetBrush_WrapperImpl @ 146958cc0

void __cdecl UImage::SetBrush_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146958cc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x310))();
  return;
}

// GetColorAndOpacity_WrapperImpl @ 146958cd0

void __cdecl UImage::GetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x280);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x278);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetColorAndOpacity_WrapperImpl @ 146958cf0

void __cdecl UImage::SetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FLinearColor_u_0 local_18;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x278) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x280) = uVar1;
  if (*(SImage **)((longlong)param_1 + 0x2c0) != (SImage *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
    SImage::SetColorAndOpacity
              (*(SImage **)((longlong)param_1 + 0x2c0),(FLinearColor *)&local_18._s_0);
  }
  return;
}

// GetbFlipForRightToLeftFlowDirection_WrapperImpl @ 146958d30

void __cdecl UImage::GetbFlipForRightToLeftFlowDirection_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x2a0);
  return;
}

// SetbFlipForRightToLeftFlowDirection_WrapperImpl @ 146958d40

void __cdecl UImage::SetbFlipForRightToLeftFlowDirection_WrapperImpl(void *param_1,void *param_2)

{
  EWidgetUpdateFlags EVar1;
  SWidget *this;
  
  EVar1 = *(EWidgetUpdateFlags *)param_2;
  if (*(EWidgetUpdateFlags *)((longlong)param_1 + 0x2a0) != EVar1) {
    *(EWidgetUpdateFlags *)((longlong)param_1 + 0x2a0) = EVar1;
    this = *(SWidget **)((longlong)param_1 + 0x2c0);
    if (this != (SWidget *)0x0) {
      if (EVar1 != this[1].UpdateFlags) {
        this[1].UpdateFlags = EVar1;
        SWidget::Invalidate(this,Paint);
        return;
      }
      return;
    }
  }
  return;
}

// StaticClass @ 146958db0

UClass * __cdecl UImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Image",&Z_Registration_Info_UClass_UImage.InnerSingleton,
               StaticRegisterNativesUImage,0x300,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UImage>,InternalVTableHelperCtorCaller<UImage>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImage.InnerSingleton;
}

// UImage @ 14698a760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UImage * __thiscall UImage::UImage(UImage *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Brush);
  *(undefined8 *)&this->BrushDelegate = 0;
  *(undefined8 *)&(this->BrushDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BrushDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonDownEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x10 = 0;
  (this->MyImage).Object = (SImage *)0x0;
  (this->MyImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StreamingHandle).Object = (FStreamableHandle *)0x0;
  (this->StreamingHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StreamingObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.Number = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.Number = 0;
  (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// UImage @ 14698a820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UImage * __thiscall UImage::UImage(UImage *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FSlateBrush::FSlateBrush(&this->Brush);
  *(undefined8 *)&this->BrushDelegate = 0;
  *(undefined8 *)&(this->BrushDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BrushDelegate).field_0x10 = 0;
  (this->ColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  *(undefined8 *)&this->ColorAndOpacityDelegate = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ColorAndOpacityDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonDownEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x10 = 0;
  (this->MyImage).Object = (SImage *)0x0;
  (this->MyImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StreamingHandle).Object = (FStreamableHandle *)0x0;
  (this->StreamingHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StreamingObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.Number = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.Number = 0;
  (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->StreamingObjectPath).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~UImage @ 146992f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::~UImage(UImage *this)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->StreamingObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingHandle).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyImage).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseButtonDownEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ColorAndOpacityDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BrushDelegate);
  pTVar2 = (this->Brush).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Brush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 146997c10

void __thiscall `UImage::RequestAsyncLoad'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 local_38;
  FSoftObjectPath local_30;
  
  pUVar3 = FWeakObjectPtr::Get(this);
  if ((pUVar3 != (UObject *)0x0) &&
     (bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&pUVar3[0x12].field_0x10,
                         (FSoftObjectPath *)((longlong)this + 0x28)), bVar2)) {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x368);
    local_38 = *(undefined8 *)((longlong)this + 0x20);
    FSoftObjectPath::FSoftObjectPath(&local_30,(FSoftObjectPath *)((longlong)this + 0x28));
    (*pcVar1)(pUVar3,&local_38);
  }
  return;
}

// operator() @ 146997ca0

void __thiscall `UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  TPersistentObjectPtr<FSoftObjectPath> *local_res8;
  
  pUVar3 = FWeakObjectPtr::Get(this);
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this + 8);
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar4 == (UObject *)0x0) {
LAB_146997cfa:
    local_res8 = this_00;
    ``UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
              (&local_res8);
  }
  else {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_146997cfa;
  }
  pcVar2 = *(code **)(*(longlong *)pUVar3 + 0x338);
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_146997d48;
  }
  pUVar4 = (UObject *)0x0;
LAB_146997d48:
  (*pcVar2)(pUVar3,pUVar4);
  return;
}

// operator() @ 146997d70

void __thiscall `UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>::operator()(void *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TPersistentObjectPtr<FSoftObjectPath> *local_res8;
  
  pUVar4 = FWeakObjectPtr::Get(this);
  if (pUVar4 == (UObject *)0x0) {
    return;
  }
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this + 8);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar5 == (UObject *)0x0) {
LAB_146997dd1:
    local_res8 = this_00;
    ``UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
              (&local_res8);
  }
  else {
    pUVar6 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar6->_padding_)) goto LAB_146997dd1;
  }
  uVar1 = *(undefined1 *)((longlong)this + 0x30);
  pcVar3 = *(code **)(*(longlong *)pUVar4 + 800);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) goto LAB_146997e29;
  }
  pUVar5 = (UObject *)0x0;
LAB_146997e29:
  (*pcVar3)(pUVar4,pUVar5,uVar1);
  return;
}

// CancelImageStreaming @ 1469a6070

void __thiscall UImage::CancelImageStreaming(UImage *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->StreamingHandle;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StreamingHandle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  (this->StreamingObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.AssetName.Number = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->StreamingObjectPath).AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&(this->StreamingObjectPath).SubPathString,0);
  return;
}

// ConvertImage @ 1469b1050

FSlateBrush * __thiscall UImage::ConvertImage(UImage *this,TAttribute<FSlateBrush> *param_1)

{
  TDelegate<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  FReadAccessScope local_e8;
  FSlateBrush local_c8;
  
  this_00 = &param_1->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_e8);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(param_1->Getter).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  puVar6 = &(param_1->Getter).field_0x8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_e8);
    if (*(int *)&(param_1->Getter).field_0x10 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)puVar6;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    FSlateBrush::operator=(&param_1->Value,&local_c8);
    local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  SetBrush(this,&param_1->Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)puVar6;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  pTVar2 = (param_1->Value).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->Value)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return &this->Brush;
}

// GetAccessibleWidget @ 1469ccdf0

TSharedPtr<SWidget,1> * __thiscall
UImage::GetAccessibleWidget(UImage *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyImage).Object;
  pTVar1 = (this->MyImage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetBrush @ 1469cdff0

FSlateBrush * __thiscall UImage::GetBrush(UImage *this)

{
  return &this->Brush;
}

// GetColorAndOpacity @ 1469ce590

FLinearColor * __thiscall UImage::GetColorAndOpacity(UImage *this)

{
  return &this->ColorAndOpacity;
}

// GetDynamicMaterial @ 1469d0000

UMaterialInstanceDynamic * __thiscall UImage::GetDynamicMaterial(UImage *this)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  pUVar3 = (UMaterialInstanceDynamic *)(this->Brush).ResourceObject.field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar3,(UObject *)this,(FName)0x0);
        SetBrushResourceObject(this,(UObject *)pUVar3);
        if ((this->MyImage).Object != (SImage *)0x0) {
          SImage::InvalidateImage((this->MyImage).Object);
        }
      }
      return pUVar3;
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetFieldNotificationDescriptor @ 1469d0550

IClassDescriptor * __thiscall UImage::GetFieldNotificationDescriptor(UImage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UImage::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 1469d43f0

UClass * __cdecl UImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Image",&Z_Registration_Info_UClass_UImage.InnerSingleton,
               StaticRegisterNativesUImage,0x300,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UImage>,InternalVTableHelperCtorCaller<UImage>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImage.InnerSingleton;
}

// HandleMouseButtonDown @ 1469dce40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UImage::HandleMouseButtonDown
          (UImage *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FGeometry local_108;
  FReply local_c8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonDownEvent);
  if (bVar1) {
    local_108.Size = param_1->Size;
    local_108._8_8_ = *(undefined8 *)&param_1->Scale;
    local_108._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_108._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_108.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_108.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_108._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UWidget::FOnPointerEvent_DelegateWrapper
              ((FEventReply *)&local_c8,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonDownEvent,
               &local_108,param_2);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnImageStreamingComplete @ 1469e81a0

void __thiscall UImage::OnImageStreamingComplete(UImage *this,TSoftObjectPtr<UObject> *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// OnImageStreamingStarted @ 1469e81c0

void __thiscall UImage::OnImageStreamingStarted(UImage *this,TSoftObjectPtr<UObject> *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// RebuildWidget @ 1469ff630

TSharedRef<SWidget,1> * __thiscall
UImage::RebuildWidget(UImage *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SImage,1> *pTVar1;
  SImage *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SImage,1> *pTVar7;
  TSharedRef<SWidget,1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SImage *local_2f8;
  FSharedReferencer<1> local_2f0;
  TSharedRef<SImage,1> local_2e8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2d8;
  FArguments local_2c0;
  
  pFVar6 = SImage::FArguments::FArguments(&local_2c0);
  pFVar6->_FlipForRightToLeftFlowDirection = this->bFlipForRightToLeftFlowDirection;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2d8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Image.cpp"
             ,0x29,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2d8,&local_2e8,pFVar6);
  local_2f0.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_2f8 = pTVar7->Object;
  if (local_2f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyImage;
  if (pTVar1 != (TSharedPtr<SImage,1> *)&local_2f8) {
    pTVar1->Object = local_2f8;
    local_2f8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyImage).SharedReferenceCount,&local_2f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2d8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2c0);
  if (pTVar1->Object == (SImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->MyImage).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SImage *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a700

void __thiscall UImage::ReleaseSlateResources(UImage *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyImage != (TSharedPtr<SImage,1> *)&local_18) {
    (this->MyImage).Object = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyImage).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// RequestAsyncLoad @ 146a0d490

void __thiscall
UImage::RequestAsyncLoad
          (UImage *this,TSoftObjectPtr<UObject> *param_1,TFunction<void___cdecl(void)> *param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  undefined8 local_40;
  FSoftObjectPath local_38;
  
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  local_48 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TFunction___A6AXXZ____V__6B_
    ;
    puVar4[4] = *(undefined8 *)param_2;
    puVar4[9] = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    uVar3 = *(undefined8 *)&param_2->field_0x18;
    puVar4[6] = *(undefined8 *)&param_2->field_0x10;
    puVar4[7] = uVar3;
    puVar4[8] = *(undefined8 *)&param_2->field_0x20;
    if (puVar4[4] != 0) {
      *(undefined8 *)param_2 = 0;
    }
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  local_40 = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath(&local_38,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8)
  ;
  (*pcVar1)(this,&local_40,&local_78);
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return;
}

// RequestAsyncLoad @ 146a0d5c0

void __thiscall
UImage::RequestAsyncLoad
          (UImage *this,TSoftObjectPtr<UObject> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  code *pcVar1;
  void *pvVar2;
  UObject *pUVar3;
  UAssetManager *pUVar4;
  TSharedPtr<FStreamableHandle,1> *pTVar5;
  FWeakObjectPtr local_res8;
  UImage *local_res10;
  undefined1 local_d8 [16];
  char *local_c8;
  FString local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  ForAnyElementType FStack_88;
  int local_80;
  undefined1 local_78 [24];
  void *local_60;
  TSharedPtr<FStreamableHandle,1> local_50;
  
  (**(code **)(this->_padding_ + 0x358))();
  pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar3 == (UObject *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x360);
    local_d8._0_4_ = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x0;
    local_d8._4_4_ = *(undefined4 *)&(param_1->SoftObjectPtr).field_0x4;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_d8 + 8),
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    (*pcVar1)(this,local_d8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    FSoftObjectPath::operator=
              (&this->StreamingObjectPath,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    pUVar4 = UAssetManager::Get();
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_80 = 0;
    local_98._0_4_ = local_res8.ObjectIndex;
    local_98._4_4_ = local_res8.ObjectSerialNumber;
    local_90 = (undefined1  [8])0x0;
    FStack_88.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_90,param_2);
    local_78._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_78 + 8),
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    local_d8._8_8_ =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Image.cpp"
    ;
    local_d8._0_4_ = 0x149;
    local_d8._4_4_ = 0x3a;
    local_c8 = 
    "void __cdecl UImage::RequestAsyncLoad(struct TSoftObjectPtr<class UObject>,class TDelegate<void __cdecl(void),struct FDefaultDelegateUserPolicy>)"
    ;
    pTVar5 = FStreamableManager::
             RequestAsyncLoad<FSoftObjectPath_&,_UImage::RequestAsyncLoad_::__l2::<lambda_1>,void>
                       (&pUVar4->StreamableManager,&local_50,&this->StreamingObjectPath,
                        (<lambda_1> *)local_98,100,false,false,&local_a8,(FSourceLocation *)local_d8
                       );
    if (&this->StreamingHandle != pTVar5) {
      (this->StreamingHandle).Object = pTVar5->Object;
      pTVar5->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->StreamingHandle).SharedReferenceCount,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_90,
               (FWriteAccessScope *)local_d8);
    if ((local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
      local_80 = 0;
    }
    if (local_c8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_d8._8_8_,(FDestructionSentinel *)local_d8);
    }
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_90);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)local_d8);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (*(longlong **)&param_2->field_0x8 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_2->field_0x8 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_d8);
  }
  pvVar2 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetBrush @ 146a11450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SetBrush(UImage *this,FSlateBrush *param_1)

{
  SImage *this_00;
  bool bVar1;
  FFieldId local_18;
  
  bVar1 = FSlateBrush::operator!=(&this->Brush,param_1);
  if (bVar1) {
    FSlateBrush::operator=(&this->Brush,param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
    }
  }
  return;
}

// SetBrushFromAsset @ 146a114e0

void __thiscall UImage::SetBrushFromAsset(UImage *this,USlateBrushAsset *param_1)

{
  bool bVar1;
  FSlateBrush *pFVar2;
  FSlateBrush local_b8;
  
  if ((param_1 != (USlateBrushAsset *)0x0) &&
     (bVar1 = FSlateBrush::operator!=(&this->Brush,&param_1->Brush), !bVar1)) {
    return;
  }
  (**(code **)(this->_padding_ + 0x358))(this);
  if (param_1 == (USlateBrushAsset *)0x0) {
    pFVar2 = FSlateBrush::FSlateBrush(&local_b8);
    SetBrush(this,pFVar2);
    local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  else {
    SetBrush(this,&param_1->Brush);
  }
  return;
}

// SetBrushFromAtlasInterface @ 146a11580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UImage::SetBrushFromAtlasInterface
          (UImage *this,TScriptInterface<ISlateTextureAtlasInterface> *param_1,bool param_2)

{
  longlong *plVar1;
  SImage *this_00;
  double dVar2;
  float fVar3;
  FFieldId local_58;
  longlong *local_48 [3];
  double local_30;
  double local_28;
  
  if ((this->Brush).ResourceObject.field0_0x0.DebugPtr != *(UObject **)param_1) {
    (**(code **)(this->_padding_ + 0x358))();
    FSlateBrush::SetResourceObject(&this->Brush,*(UObject **)param_1);
    local_58.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_58.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
    if (param_2) {
      if ((*(longlong *)param_1 == 0) ||
         (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 == (longlong *)0x0)) {
        (this->Brush).ImageSize = (FDeprecateSlateVector2D)0x0;
      }
      else {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_48);
        if (local_48[0] == (longlong *)0x0) {
          dVar2 = 0.0;
          local_30 = 0.0;
        }
        else {
          fVar3 = (float)(**(code **)(*local_48[0] + 0x370))();
          dVar2 = (double)fVar3 * local_28;
          fVar3 = (float)(**(code **)(*local_48[0] + 0x368))();
          local_30 = (double)fVar3 * local_30;
        }
        *(float *)&(this->Brush).ImageSize.field_0x4 = (float)dVar2;
        *(float *)&(this->Brush).ImageSize = (float)local_30;
      }
    }
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
    }
  }
  return;
}

// SetBrushFromMaterial @ 146a116b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SetBrushFromMaterial(UImage *this,UMaterialInterface *param_1)

{
  SImage *this_00;
  FFieldId local_18;
  
  if ((UMaterialInterface *)(this->Brush).ResourceObject.field0_0x0.DebugPtr != param_1) {
    (**(code **)(this->_padding_ + 0x358))();
    FSlateBrush::SetResourceObject(&this->Brush,(UObject *)param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
    }
  }
  return;
}

// SetBrushFromSoftMaterial @ 146a11740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UImage::SetBrushFromSoftMaterial(UImage *this,TSoftObjectPtr<UMaterialInterface> *param_1)

{
  void *pvVar1;
  code **ppcVar2;
  undefined1 auStack_e8 [32];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  code *local_b8;
  FSoftObjectPath local_b0;
  UImage *local_90;
  undefined1 local_88 [48];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_90 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_90);
  local_c0 = local_c8;
  local_b8 = *(code **)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath(&local_b0,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8)
  ;
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x38,8);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UImage::SetBrushFromSoftMaterial'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(FWeakObjectPtr *)(local_30 + 1) = local_c0;
  local_30[2] = local_b8;
  *(FName *)(local_30 + 3) = local_b0.AssetPath.PackageName;
  *(FName *)(local_30 + 4) = local_b0.AssetPath.AssetName;
  local_30[5] = (code *)0x0;
  local_30[5] = (code *)local_b0.SubPathString.Data.AllocatorInstance.Data;
  local_b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_30 + 6) = local_b0.SubPathString.Data.ArrayNum;
  *(int *)((longlong)local_30 + 0x34) = local_b0.SubPathString.Data.ArrayMax;
  if ((FWeakObjectPtr *)(local_30 + 1) != (FWeakObjectPtr *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UImage::SetBrushFromSoftMaterial'::__l2::<lambda_1>,void>::
                  Call;
  }
  local_b0.SubPathString.Data.ArrayNum = 0;
  local_b0.SubPathString.Data.ArrayMax = 0;
  local_88._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_88 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  RequestAsyncLoad(this,(TSoftObjectPtr<UObject> *)local_88,
                   (TFunction<void___cdecl(void)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar2 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar2 = local_30;
    }
    (**(code **)(*ppcVar2 + 0x10))();
  }
  if (local_b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetBrushFromSoftTexture @ 146a118d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UImage::SetBrushFromSoftTexture(UImage *this,TSoftObjectPtr<UTexture2D> *param_1,bool param_2)

{
  void *pvVar1;
  code **ppcVar2;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  code *local_c8;
  FSoftObjectPath local_c0;
  undefined1 local_a0;
  UImage *local_98;
  undefined1 local_90 [40];
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_d8.ObjectIndex = 0;
  local_d8.ObjectSerialNumber = 0;
  local_98 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_98);
  local_d0 = local_d8;
  local_c8 = *(code **)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath(&local_c0,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8)
  ;
  local_68[0] = (code *)0x0;
  local_a0 = param_2;
  local_40 = FMemory::Malloc(0x40,8);
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UImage::SetBrushFromSoftTexture'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(FWeakObjectPtr *)(local_40 + 1) = local_d0;
  local_40[2] = local_c8;
  *(FName *)(local_40 + 3) = local_c0.AssetPath.PackageName;
  *(FName *)(local_40 + 4) = local_c0.AssetPath.AssetName;
  local_40[5] = (code *)0x0;
  local_40[5] = (code *)local_c0.SubPathString.Data.AllocatorInstance.Data;
  local_c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 6) = local_c0.SubPathString.Data.ArrayNum;
  *(int *)((longlong)local_40 + 0x34) = local_c0.SubPathString.Data.ArrayMax;
  local_c0.SubPathString.Data.ArrayNum = 0;
  local_c0.SubPathString.Data.ArrayMax = 0;
  *(undefined1 *)(local_40 + 7) = local_a0;
  if ((FWeakObjectPtr *)(local_40 + 1) != (FWeakObjectPtr *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UImage::SetBrushFromSoftTexture'::__l2::<lambda_1>,void>::Call
    ;
  }
  local_90._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_90 + 8),
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  RequestAsyncLoad(this,(TSoftObjectPtr<UObject> *)local_90,
                   (TFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar2 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar2 = local_40;
    }
    (**(code **)(*ppcVar2 + 0x10))();
  }
  if (local_c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.SubPathString.Data.AllocatorInstance.Data);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// SetBrushFromTexture @ 146a11a70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SetBrushFromTexture(UImage *this,UTexture2D *param_1,bool param_2)

{
  SImage *this_00;
  int iVar1;
  FFieldId local_18;
  
  (**(code **)(this->_padding_ + 0x358))();
  if ((UTexture2D *)(this->Brush).ResourceObject.field0_0x0.DebugPtr != param_1) {
    FSlateBrush::SetResourceObject(&this->Brush,(UObject *)param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    if (param_1 != (UTexture2D *)0x0) {
      *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 0x18;
    }
    if (param_2) {
      if (param_1 == (UTexture2D *)0x0) {
        (this->Brush).ImageSize = (FDeprecateSlateVector2D)0x0;
      }
      else {
        iVar1 = UTexture2D::GetSizeX(param_1);
        *(float *)&(this->Brush).ImageSize = (float)iVar1;
        iVar1 = UTexture2D::GetSizeY(param_1);
        *(float *)&(this->Brush).ImageSize.field_0x4 = (float)iVar1;
      }
    }
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
    }
  }
  return;
}

// SetBrushFromTextureDynamic @ 146a11b50

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UImage::SetBrushFromTextureDynamic(UImage *this,UTexture2DDynamic *param_1,bool param_2)

{
  SImage *this_00;
  FFieldId local_18;
  
  if ((UTexture2DDynamic *)(this->Brush).ResourceObject.field0_0x0.DebugPtr != param_1) {
    (**(code **)(this->_padding_ + 0x358))();
    FSlateBrush::SetResourceObject(&this->Brush,(UObject *)param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    if ((param_2) && (param_1 != (UTexture2DDynamic *)0x0)) {
      *(float *)&(this->Brush).ImageSize = (float)param_1->SizeX;
      *(float *)&(this->Brush).ImageSize.field_0x4 = (float)param_1->SizeY;
    }
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
    }
  }
  return;
}

// SetBrushResourceObject @ 146a11c20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SetBrushResourceObject(UImage *this,UObject *param_1)

{
  SImage *this_00;
  FFieldId local_18;
  
  if ((this->Brush).ResourceObject.field0_0x0.DebugPtr != param_1) {
    FSlateBrush::SetResourceObject(&this->Brush,param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
      return;
    }
  }
  return;
}

// SetBrushSize @ 146a11c90

void __thiscall UImage::SetBrushSize(UImage *this,TVector2<double> *param_1)

{
  SImage *this_00;
  TVector2<double>_u_0 local_48;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  this_00 = (this->MyImage).Object;
  if (this_00 != (SImage *)0x0) {
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_38 = 1;
    local_30 = 1;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    SImage::SetDesiredSizeOverride
              (this_00,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_48._s_0);
  }
  return;
}

// SetBrushTintColor @ 146a11ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SetBrushTintColor(UImage *this,FSlateColor *param_1)

{
  ESlateColorStylingMode EVar1;
  SImage *this_00;
  undefined8 uVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FFieldId local_18;
  
  if (((((param_1->SpecifiedColor).field0_0x0._s_0.R !=
         (this->Brush).TintColor.SpecifiedColor.field0_0x0._s_0.R) ||
       ((param_1->SpecifiedColor).field0_0x0._s_0.G !=
        (this->Brush).TintColor.SpecifiedColor.field0_0x0._s_0.G)) ||
      ((param_1->SpecifiedColor).field0_0x0._s_0.B !=
       (this->Brush).TintColor.SpecifiedColor.field0_0x0._s_0.B)) ||
     ((((param_1->SpecifiedColor).field0_0x0._s_0.A !=
        (this->Brush).TintColor.SpecifiedColor.field0_0x0._s_0.A ||
       (EVar1 = (this->Brush).TintColor.ColorUseRule, EVar1 != param_1->ColorUseRule)) ||
      ((EVar1 == UseColor_ColorTable &&
       ((this->Brush).TintColor.ColorTableId != param_1->ColorTableId)))))) {
    uVar2 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
    EVar1 = param_1->ColorUseRule;
    EVar3 = param_1->ColorTableId;
    uVar4 = *(undefined2 *)&param_1->field_0x12;
    *(undefined8 *)&(this->Brush).TintColor.SpecifiedColor.field0_0x0 =
         *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
    *(undefined8 *)((longlong)&(this->Brush).TintColor.SpecifiedColor.field0_0x0 + 8) = uVar2;
    (this->Brush).TintColor.ColorUseRule = EVar1;
    (this->Brush).TintColor.ColorTableId = EVar3;
    *(undefined2 *)&(this->Brush).TintColor.field_0x12 = uVar4;
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      SImage::InvalidateImage(this_00);
      return;
    }
  }
  return;
}

// SetColorAndOpacity @ 146a12420

void __thiscall UImage::SetColorAndOpacity(UImage *this,FLinearColor *param_1)

{
  SImage *this_00;
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).field0_0x0 = local_18._0_8_;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8) = local_18._8_8_;
  this_00 = (this->MyImage).Object;
  if (this_00 != (SImage *)0x0) {
    SImage::SetColorAndOpacity(this_00,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// SetDesiredSizeOverride @ 146a13250

void __thiscall UImage::SetDesiredSizeOverride(UImage *this,TVector2<double> *param_1)

{
  SImage *this_00;
  TVector2<double>_u_0 local_48;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  this_00 = (this->MyImage).Object;
  if (this_00 != (SImage *)0x0) {
    local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_38 = 1;
    local_30 = 1;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    SImage::SetDesiredSizeOverride
              (this_00,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_48._s_0);
  }
  return;
}

// SetFlipForRightToLeftFlowDirection @ 146a13ee0

void __thiscall UImage::SetFlipForRightToLeftFlowDirection(UImage *this,bool param_1)

{
  SImage *this_00;
  
  if (this->bFlipForRightToLeftFlowDirection != param_1) {
    this->bFlipForRightToLeftFlowDirection = param_1;
    this_00 = (this->MyImage).Object;
    if (this_00 != (SImage *)0x0) {
      if (param_1 != this_00->bFlipForRightToLeftFlowDirection) {
        this_00->bFlipForRightToLeftFlowDirection = param_1;
        SWidget::Invalidate((SWidget *)this_00,Paint);
        return;
      }
      return;
    }
  }
  return;
}

// SetOpacity @ 146a18370

void __thiscall UImage::SetOpacity(UImage *this,float param_1)

{
  SImage *this_00;
  FLinearColor_u_0 local_18;
  
  this_00 = (this->MyImage).Object;
  (this->ColorAndOpacity).field0_0x0._s_0.A = param_1;
  if (this_00 != (SImage *)0x0) {
    local_18._0_8_ = *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
    SImage::SetColorAndOpacity(this_00,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// ShouldFlipForRightToLeftFlowDirection @ 146a1e2b0

bool __thiscall UImage::ShouldFlipForRightToLeftFlowDirection(UImage *this)

{
  return this->bFlipForRightToLeftFlowDirection;
}

// StaticRegisterNativesUImage @ 146a1e960

void __cdecl UImage::StaticRegisterNativesUImage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UImage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a21890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UImage::SynchronizeProperties(UImage *this)

{
  FName FVar1;
  SImage *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UObject *pUVar8;
  TAttribute<FSlateColor> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  UFunction *pUVar12;
  FMRSWRecursiveAccessDetector *this_00;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  FName local_res8;
  UObject *local_res10;
  UImage *local_res18;
  UImage *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a8;
  FDelegateAllocation local_4a0;
  code *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  bool local_478;
  FSlateBrush *local_468;
  undefined1 local_460;
  undefined1 local_458 [8];
  ForAnyElementType FStack_450;
  ulonglong local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  uint local_430;
  undefined1 local_42c;
  undefined1 local_428 [8];
  ForAnyElementType FStack_420;
  ulonglong local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  uint local_400;
  undefined1 local_3fc;
  undefined1 local_3f8 [24];
  FSlateBrush *local_3e0;
  undefined1 local_3d8;
  undefined1 local_3d0 [8];
  void *pvStack_3c8;
  int local_3c0;
  undefined1 local_3b8 [8];
  FDelegateAllocation local_3b0;
  FSlateBrush *local_3a0;
  undefined1 local_398;
  undefined1 local_390 [24];
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDelegateAllocation *local_2e8;
  FDestructionSentinel local_2e0;
  FDelegateAllocation *local_2c8;
  FDestructionSentinel local_2c0;
  FDelegateAllocation *local_2a8;
  FLinearColor_u_0 local_2a0;
  uint local_290;
  undefined1 local_28c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_288;
  TAttribute<FSlateBrush_const_*> local_270;
  FSlateBrush local_248;
  undefined1 local_198;
  undefined1 local_190 [8];
  FDelegateAllocation FStack_188;
  FReadAccessScope local_178;
  FReadAccessScope local_160;
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  TAttribute<FSlateBrush> local_118;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  bVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ColorAndOpacityDelegate);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ColorAndOpacityDelegate,&local_178);
    local_res8.ComparisonIndex.Value = *(uint *)&(this->ColorAndOpacityDelegate).field_0x10;
    local_res8.Number = *(uint *)&(this->ColorAndOpacityDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ColorAndOpacityDelegate,(FWriteAccessScope *)&local_378);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->ColorAndOpacityDelegate).field_0x8);
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    pTVar9 = TAttribute<FSlateColor>::Create<UObject>
                       ((TAttribute<FSlateColor> *)local_148,pUVar8,&local_res8);
    local_410 = *(undefined8 *)&(pTVar9->Value).SpecifiedColor.field0_0x0;
    uStack_408 = *(undefined8 *)((longlong)&(pTVar9->Value).SpecifiedColor.field0_0x0 + 8);
    local_400._0_1_ = (pTVar9->Value).ColorUseRule;
    local_400._1_1_ = (pTVar9->Value).ColorTableId;
    local_400._2_2_ = *(undefined2 *)&(pTVar9->Value).field_0x12;
    local_3fc = pTVar9->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar9->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    if ((void *)local_130._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_130._8_8_);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_130;
  }
  else {
    local_440 = *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
    uStack_438 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
    local_430 = local_430 & 0xffffff00;
    local_42c = 1;
    local_418 = 0;
    local_428 = (undefined1  [8])0x0;
    FStack_420.Data = (FScriptContainerElement *)0x0;
    local_400 = local_430;
    local_3fc = 1;
    local_410 = local_440;
    uStack_408 = uStack_438;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_428);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_428,
               (FWriteAccessScope *)&local_360);
    if (((int)local_418 != 0) && (FStack_420.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_420.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_420,0,0,0x10);
      local_418 = local_418 & 0xffffffff00000000;
    }
    if (local_360.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
    }
    if (FStack_420.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_420.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_428;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  bVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BrushDelegate);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BrushDelegate,
               &local_160);
    FVar1.ComparisonIndex.Value = *(uint *)&(this->BrushDelegate).field_0x10;
    FVar1.Number = *(uint *)&(this->BrushDelegate).field_0x14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BrushDelegate,
               (FWriteAccessScope *)&local_348);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->BrushDelegate).field_0x8);
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    FSlateBrush::FSlateBrush(&local_248);
    local_198 = 1;
    local_190 = (undefined1  [8])0x0;
    FStack_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_188.DelegateSize = 0;
    FStack_188._12_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
               (FWriteAccessScope *)&local_300);
    local_2e8 = &FStack_188;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&FStack_188);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      *(FName *)(puVar10 + 4) = FVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      puVar10[5] = 0;
      local_res10 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 5),(FObjectPtr)&local_res10);
      if (FVar1 == (FName)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pUVar8 != (UObject *)0x0) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar10 + 5));
        pUVar12 = UObject::FindFunctionChecked(pUVar8,FVar1);
        puVar10[3] = pUVar12;
      }
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    uStack_480 = 0;
    local_488 = ConvertImage;
    local_4a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_4a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_4a8,(FWriteAccessScope *)&local_2e0);
    local_2c8 = &local_4a0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x100,&local_4a0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFSlateBrush______6B_
      ;
      FSlateBrush::FSlateBrush((FSlateBrush *)(puVar10 + 2),&local_248);
      *(undefined1 *)(puVar10 + 0x18) = local_198;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar10 + 0x19),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[0x1c] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__00__CBVUImage____A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFSlateBrush______6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UImage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[0x1d] = 0;
      local_res18 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UImage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 0x1d),(FObjectPtr)&local_res18);
      puVar10[0x1e] = local_488;
      puVar10[0x1f] = CONCAT44(uStack_47c,uStack_480);
    }
    if (local_2e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
    }
    local_3e0 = (FSlateBrush *)0x0;
    local_3d8 = 1;
    local_3d0 = (undefined1  [8])0x0;
    pvStack_3c8 = (void *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_4a8,(FWriteAccessScope *)&local_488);
    if (pvStack_3c8 != (void *)0x0) {
      FMemory::Free(pvStack_3c8);
    }
    pvStack_3c8 = (void *)local_4a0.DelegateAllocator;
    local_3c0 = local_4a0.DelegateSize;
    local_4a0.DelegateSize = 0;
    local_4a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_478 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_47c,uStack_480),
                 (FDestructionSentinel *)&local_488);
    }
    pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar7 = false;
    local_3a0 = local_3e0;
    local_398 = local_3d8;
  }
  else {
    FSlateBrush::FSlateBrush(&local_118.Value,&this->Brush);
    local_118.bIsSet = true;
    local_118.Getter._0_8_ = 0;
    local_118.Getter._8_8_ = 0;
    local_118.Getter._16_8_ = 0;
    local_3a0 = ConvertImage(this,&local_118);
    local_398 = 1;
    local_448 = 0;
    pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_458;
    local_460 = 1;
    local_458 = (undefined1  [8])0x0;
    FStack_450.Data = (FScriptContainerElement *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar7 = true;
    local_468 = local_3a0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390,pTVar13);
  if (bVar7) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_458,
               (FWriteAccessScope *)&local_330);
    if (((int)local_448 != 0) && (FStack_450.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_450.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_450,0,0,0x10);
      local_448 = local_448 & 0xffffffff00000000;
    }
    if (local_330.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
    }
    if (FStack_450.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_450.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_458);
  }
  if (bVar4) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
    if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_3c8 !=
        (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free(pvStack_3c8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3d0);
  }
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_4a8,(FWriteAccessScope *)&local_318);
    if ((local_4a0.DelegateSize != 0) &&
       (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_4a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4a0,0,0,0x10);
      local_4a0.DelegateSize = 0;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (local_4a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_4a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a8.AccessDetector);
  }
  if (bVar6) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
    if (FStack_188.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_188.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_190);
    local_248._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  pSVar2 = (this->MyImage).Object;
  if (pSVar2 != (SImage *)0x0) {
    local_270.Value = local_3a0;
    local_270.bIsSet = (bool)local_398;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_270.Getter,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)local_390)
    ;
    SImage::SetImage(pSVar2,&local_270);
    if ((this->MyImage).Object == (SImage *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SImage::InvalidateImage((this->MyImage).Object);
    if ((this->MyImage).Object == (SImage *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyImage).Object;
    local_290 = local_400;
    local_2a0._0_8_ = local_410;
    local_2a0._8_8_ = uStack_408;
    local_28c = local_3fc;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_288,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)local_3f8);
    SImage::SetColorAndOpacity(pSVar2,(TAttribute<FSlateColor> *)&local_2a0._s_0);
    if ((this->MyImage).Object == (SImage *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyImage).Object;
    local_488 = HandleMouseButtonDown;
    uStack_480 = 0;
    local_3b8 = (undefined1  [8])0x0;
    local_3b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
               (FWriteAccessScope *)&local_2c0);
    local_2a8 = &local_3b0;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_3b0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUImage____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
      puVar10[4] = local_488;
      puVar10[5] = CONCAT44(uStack_47c,uStack_480);
    }
    if (local_2c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
    }
    SWidget::SetOnMouseButtonDown
              ((SWidget *)pSVar2,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_3b8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
  if ((void *)local_390._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_390._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f8);
  if ((void *)local_3f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f8);
  return;
}

// execGetDynamicMaterial @ 146a34f50

void __cdecl UImage::execGetDynamicMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = *(UMaterialInstanceDynamic **)&param_1[0xc].field_0x8;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar3,param_1,(FName)0x0);
        SetBrushResourceObject((UImage *)param_1,(UObject *)pUVar3);
        if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
          SImage::InvalidateImage(*(SImage **)&param_1[0x11].field_0x18);
        }
      }
      *(UMaterialInstanceDynamic **)param_3 = pUVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetBrush @ 146a3a3a0

void __cdecl UImage::execSetBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar2 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1,pFVar2);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetBrushFromAsset @ 146a3a470

void __cdecl UImage::execSetBrushFromAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res8);
  return;
}

// execSetBrushFromAtlasInterface @ 146a3a500

void __cdecl UImage::execSetBrushFromAtlasInterface(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  UObject *local_28;
  undefined8 uStack_20;
  UObject *local_18;
  undefined8 local_10;
  
  local_28 = (UObject *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_18 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x328);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_10 = uStack_20;
  (*pcVar2)(param_1,&local_18,bVar3);
  return;
}

// execSetBrushFromMaterial @ 146a3a620

void __cdecl UImage::execSetBrushFromMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_res8);
  return;
}

// execSetBrushFromSoftMaterial @ 146a3a6b0

void __cdecl UImage::execSetBrushFromSoftMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  size_t _Size;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FUtf8String local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  FUtf8String::Reset(&local_50,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src.Data = local_50.Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_50.Data.ArrayNum;
  local_20 = local_50.Data.ArrayNum;
  local_38 = (undefined4)local_60;
  uStack_34 = local_60._4_4_;
  uStack_30 = (undefined4)uStack_58;
  uStack_2c = uStack_58._4_4_;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x348);
  local_40 = local_68;
  if (local_50.Data.ArrayNum == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50.Data.ArrayNum,0,&local_28,local_50.Data.ArrayNum,&local_1c);
    memcpy(local_28.Data,_Src.Data,_Size);
  }
  (*pcVar2)(param_1,&local_40);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBrushFromSoftTexture @ 146a3a7f0

void __cdecl UImage::execSetBrushFromSoftTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  size_t _Size;
  bool bVar3;
  int local_res8 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FUtf8String local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_78 = 0;
  uStack_68 = 0;
  local_70 = 0;
  FUtf8String::Reset(&local_60,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _Src.Data = local_60.Data.AllocatorInstance.Data;
  bVar3 = local_res8[0] != 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_48 = (undefined4)local_70;
  uStack_44 = local_70._4_4_;
  uStack_40 = (undefined4)uStack_68;
  uStack_3c = uStack_68._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_60.Data.ArrayNum;
  local_30 = local_60.Data.ArrayNum;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x340);
  local_50 = local_78;
  if (local_60.Data.ArrayNum == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_60.Data.ArrayNum,0,&local_38,local_60.Data.ArrayNum,&local_2c);
    memcpy(local_38.Data,_Src.Data,_Size);
  }
  (*pcVar2)(param_1,&local_50,bVar3);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetBrushFromTexture @ 146a3a970

void __cdecl UImage::execSetBrushFromTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
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
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSetBrushFromTextureDynamic @ 146a3aa50

void __cdecl UImage::execSetBrushFromTextureDynamic(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
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
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSetBrushResourceObject @ 146a3ab30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UImage::execSetBrushResourceObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  FFieldId local_18;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UObject **)&param_1[0xc].field_0x8 != local_res8) {
    FSlateBrush::SetResourceObject((FSlateBrush *)&param_1[10].field_0x20,local_res8);
    local_18.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)(param_1 + 1),&local_18);
    if (*(SImage **)&param_1[0x11].field_0x18 != (SImage *)0x0) {
      SImage::InvalidateImage(*(SImage **)&param_1[0x11].field_0x18);
    }
  }
  return;
}

// execSetBrushTintColor @ 146a3ac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UImage::execSetBrushTintColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFieldId local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  local_28 = ___xmm_3f8000003f800000000000003f800000;
  uStack_20 = _UNK_15090c6d8;
  local_18 = local_18 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((((float)local_28 != *(float *)(param_1 + 0xb)) ||
       (local_28._4_4_ != *(float *)&param_1[0xb].field_0x4)) ||
      ((float)uStack_20 != *(float *)&param_1[0xb].field_0x8)) ||
     (((uStack_20._4_4_ != *(float *)&param_1[0xb].field_0xc ||
       (param_1[0xb].field_0x10 != (char)local_18)) ||
      ((param_1[0xb].field_0x10 == '\x01' && (param_1[0xb].field_0x11 != (char)(local_18 >> 8)))))))
  {
    *(undefined8 *)(param_1 + 0xb) = local_28;
    *(undefined8 *)&param_1[0xb].field_0x8 = uStack_20;
    *(uint *)&param_1[0xb].field_0x10 = local_18;
    local_38.FieldName = FFieldNotificationClassDescriptor::Brush.FieldName;
    local_38.BitNumber = FFieldNotificationClassDescriptor::Brush.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)(param_1 + 1),&local_38);
    if (*(SImage **)&param_1[0x11].field_0x18 != (SImage *)0x0) {
      SImage::InvalidateImage(*(SImage **)&param_1[0x11].field_0x18);
    }
  }
  return;
}

// execSetColorAndOpacity @ 146a3af90

void __cdecl UImage::execSetColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SImage *this;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SImage **)&param_1[0x11].field_0x18;
  *(undefined8 *)&param_1[0xf].field_0x20 = local_28;
  *(undefined8 *)(param_1 + 0x10) = uStack_20;
  if (this != (SImage *)0x0) {
    local_18._0_8_ = local_28;
    local_18._8_8_ = uStack_20;
    SImage::SetColorAndOpacity(this,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// execSetDesiredSizeOverride @ 146a3bf60

void __cdecl UImage::execSetDesiredSizeOverride(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_58;
  double dStack_50;
  TVector2<double>_u_0 local_48;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SImage **)&param_1[0x11].field_0x18 != (SImage *)0x0) {
    local_38 = 1;
    local_30 = 1;
    local_48._s_0.X = local_58;
    local_48._s_0.Y = dStack_50;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    SImage::SetDesiredSizeOverride
              (*(SImage **)&param_1[0x11].field_0x18,
               (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_48._s_0);
  }
  return;
}

// execSetOpacity @ 146a404e0

void __cdecl UImage::execSetOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SImage *this;
  undefined4 local_res8 [2];
  FLinearColor_u_0 local_18;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SImage **)&param_1[0x11].field_0x18;
  *(undefined4 *)&param_1[0x10].field_0x4 = local_res8[0];
  if (this != (SImage *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_1[0xf].field_0x20;
    local_18._8_8_ = *(undefined8 *)(param_1 + 0x10);
    SImage::SetColorAndOpacity(this,(FLinearColor *)&local_18._s_0);
  }
  return;
}

