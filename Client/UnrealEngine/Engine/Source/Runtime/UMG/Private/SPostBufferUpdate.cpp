// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// SPostBufferUpdate @ 146a55ea0

SPostBufferUpdate * __thiscall SPostBufferUpdate::SPostBufferUpdate(SPostBufferUpdate *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->bUsePaintGeometry = false;
  this->_padding_ = (longlong)&___7SPostBufferUpdate__6B_;
  (this->BuffersToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffersToUpdate).ArrayNum = 0;
  (this->BuffersToUpdate).ArrayMax = 0;
  (this->PostBufferUpdater).Object = (FPostBufferUpdater *)0x0;
  (this->PostBufferUpdater).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ComputeDesiredSize @ 146a61c70

TVector2<double> * __thiscall
SPostBufferUpdate::ComputeDesiredSize
          (SPostBufferUpdate *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 146a62140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SPostBufferUpdate::Construct(SPostBufferUpdate *this,FArguments *param_1)

{
  TSharedPtr<FPostBufferUpdater,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPostBufferUpdater *pFVar5;
  FPostBufferUpdater *local_28;
  FSharedReferencer<1> FStack_20;
  
  this->bUsePaintGeometry = param_1->_bUsePaintGeometry;
  TArray<enum_ESlatePostRT,TSizedDefaultAllocator<32>_>::CopyToEmpty<enum_ESlatePostRT,int>
            (&this->BuffersToUpdate,(ESlatePostRT *)0x0,0,(this->BuffersToUpdate).ArrayMax);
  pTVar4 = ::operator_new(0xa8);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FPostBufferUpdater *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pFVar5 = (FPostBufferUpdater *)(pTVar4 + 1);
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPostBufferUpdater___00_SharedPointerInternals__6B_;
    *(undefined4 *)&pTVar4[1].SharedReferenceCount.field_0x3 = 0;
    pTVar4[1].WeakReferenceCount.field_0x3 = 0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[6].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar4[10]._padding_ + 4) = 0;
    pTVar4[1]._padding_ = (longlong)&___7FPostBufferUpdater__6B_;
    *(undefined2 *)&pTVar4[1].SharedReferenceCount = 0;
    pTVar4[1].SharedReferenceCount.field_0x2 = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[5]._padding_ + 4) = 0;
    pTVar4[6]._padding_ = 0;
    pTVar4[7]._padding_ = 0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar4[8].WeakReferenceCount = 0x3f800000;
    *(undefined4 *)((longlong)&pTVar4[9]._padding_ + 4) = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar4[9].WeakReferenceCount = 0;
    *(byte *)((longlong)&pTVar4[10]._padding_ + 4) =
         *(byte *)((longlong)&pTVar4[10]._padding_ + 4) & 0xfd | 1;
    if (pFVar5 == (FPostBufferUpdater *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar4;
    local_28 = pFVar5;
  }
  pTVar1 = &this->PostBufferUpdater;
  if (pTVar1 != (TSharedPtr<FPostBufferUpdater,1> *)&local_28) {
    pTVar1->Object = pFVar5;
    local_28 = (FPostBufferUpdater *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PostBufferUpdater).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pTVar1->Object != (FPostBufferUpdater *)0x0) {
    pTVar1->Object->bUsePaintGeometry_Renderthread = this->bUsePaintGeometry;
  }
  return;
}

// GetBuffersToUpdate @ 146a73af0

TArrayView<ESlatePostRT_const_,int> * __thiscall
SPostBufferUpdate::GetBuffersToUpdate
          (SPostBufferUpdate *this,TArrayView<ESlatePostRT_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<ESlatePostRT_const_,int> *pTVar4;
  
  iVar1 = (this->BuffersToUpdate).ArrayNum;
  __return_storage_ptr__->DataPtr = (ESlatePostRT *)(this->BuffersToUpdate).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<ESlatePostRT_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPrivateWidgetClass @ 146a78a70

FSlateWidgetClassData * __cdecl SPostBufferUpdate::GetPrivateWidgetClass(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer local_res8;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"SPostBufferUpdate");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&local_res8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&local_res8);
      atexit(`SPostBufferUpdate::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// GetWidgetClass @ 146a799d0

FSlateWidgetClassData * __thiscall SPostBufferUpdate::GetWidgetClass(SPostBufferUpdate *this)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SPostBufferUpdate");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`SPostBufferUpdate::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
              ::__l2::WidgetClassDataInstance;
    }
  }
  return &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_SPostBufferUpdate::GetPrivateWidgetClass(void)'
          ::__l2::WidgetClassDataInstance;
}

// OnPaint @ 146a852b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPostBufferUpdate::OnPaint
          (SPostBufferUpdate *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPostBufferUpdater *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSlateRotatedRect *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  undefined8 local_148;
  undefined1 local_140 [8];
  FSharedReferencer<1> local_138;
  FSlateRect local_130;
  TVector2<float>_u_0 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  float local_108;
  undefined8 uStack_104;
  float fStack_fc;
  code *local_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  uint local_bc;
  FSlateRotatedRect local_b8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = param_2->Size;
  local_118 = (undefined4)local_158;
  local_10c = local_158._4_4_;
  local_120 = (TVector2<float>_u_0)0x0;
  local_114 = 0;
  this_00 = TransformRect<TTransform2<float>_>
                      (&local_b8,&param_2->AccumulatedRenderTransform,
                       (FSlateRotatedRect *)&local_120._s_0);
  FSlateRotatedRect::ToBoundingRect(this_00,&local_130);
  fStack_14c = local_130.Bottom - local_130.Top;
  local_150 = local_130.Right - local_130.Left;
  local_158 = (FDeprecateSlateVector2D)CONCAT44(local_130.Top,local_130.Left);
  fStack_e8 = param_2->Scale;
  pFVar3 = (this->PostBufferUpdater).Object;
  local_f0 = (code *)local_158;
  local_bc = local_bc & 0xfffffffd | 1;
  fStack_e4 = local_150;
  fStack_e0 = fStack_14c;
  if ((pFVar3 != (FPostBufferUpdater *)0x0) && (this->bUsePaintGeometry != false)) {
    pTVar4 = (this->PostBufferUpdater).SharedReferenceCount.ReferenceController;
    fStack_d8 = fStack_14c * (__real_3f800000 / fStack_e8);
    uStack_104 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c4 = local_130.Left;
    fStack_c0 = local_130.Top;
    fStack_dc = local_150 * (__real_3f800000 / fStack_e8);
    local_140._4_4_ = fStack_d8;
    local_140._0_4_ = fStack_dc;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar4->WeakReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    local_98[0] = (code *)0x0;
    local_148 = CONCAT44(fStack_14c,local_150);
    local_108 = fStack_e8;
    fStack_fc = fStack_e8;
    fStack_d4 = fStack_e8;
    fStack_c8 = fStack_e8;
    local_70 = FMemory::Malloc(0x50,8);
    *local_70 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`SPostBufferUpdate::OnPaint'::`5'::<lambda_1>,1,1>::
                         _vftable_;
    local_70[1] = (code *)pFVar3;
    local_70[2] = (code *)pTVar4;
    local_70[3] = local_f0;
    local_70[4] = (code *)CONCAT44(fStack_e4,fStack_e8);
    local_70[5] = (code *)CONCAT44(fStack_dc,fStack_e0);
    local_70[6] = (code *)CONCAT44(fStack_d4,fStack_d8);
    local_70[7] = (code *)CONCAT44(uStack_cc,uStack_d0);
    local_70[8] = (code *)CONCAT44(local_c4,fStack_c8);
    local_70[9] = (code *)CONCAT44(local_bc,fStack_c0);
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`SPostBufferUpdate::OnPaint'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_SPostBufferUpdate::OnPaint_::__l5::TSTR_FUpdateValuesRenderThreadFX_PaintGeometry312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`SPostBufferUpdate::OnPaint'::__l5::TSTR_FUpdateValuesRenderThreadFX_PaintGeometry312>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar8);
      uVar10 = (ulonglong)local_38;
      if ((2 < uVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar9 = local_40;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar9 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar9 = local_70;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  local_140 = (undefined1  [8])(this->PostBufferUpdater).Object;
  local_138.ReferenceController = (this->PostBufferUpdater).SharedReferenceCount.ReferenceController
  ;
  if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateDrawElement::MakeCustom(param_4,param_5,(TSharedPtr<ICustomSlateElement,1> *)local_140);
  return param_5 + 1;
}

// PrivateRegisterAttributes @ 146a8b170

void __cdecl SPostBufferUpdate::PrivateRegisterAttributes(FInitializer *param_1)

{
  return;
}

// ReleasePostBufferUpdater @ 146a8e790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SPostBufferUpdate::ReleasePostBufferUpdater(SPostBufferUpdate *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FPostBufferUpdater,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  code *local_98 [2];
  undefined **local_88;
  FPostBufferUpdater *pFStack_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FPostBufferUpdater *pFStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar2 = &this->PostBufferUpdater;
  pTVar3 = (this->PostBufferUpdater).SharedReferenceCount.ReferenceController;
  pFStack_80 = pTVar2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SPostBufferUpdate::ReleasePostBufferUpdater'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_78 = pTVar3;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_SPostBufferUpdate::ReleasePostBufferUpdater_::__l2::TSTR_ReleaseCommand291>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68[0] = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`SPostBufferUpdate::ReleasePostBufferUpdater'::__l2::TSTR_ReleaseCommand291>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar6);
    uVar8 = (ulonglong)local_38;
    if ((2 < uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_68[0] != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_68 + 2);
        if (local_40 != (undefined ***)0x0) {
          pppuVar7 = local_40;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])();
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_a8 = 0;
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FPostBufferUpdater,1> *)&local_a8) {
    pTVar2->Object = (FPostBufferUpdater *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PostBufferUpdater).SharedReferenceCount,&FStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetBuffersToUpdate @ 146a92930

void __thiscall
SPostBufferUpdate::SetBuffersToUpdate(SPostBufferUpdate *this,TArrayView<ESlatePostRT,int> *param_1)

{
  int *piVar1;
  TArray<ESlatePostRT,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement FVar4;
  int iVar5;
  int iVar6;
  ESlatePostRT *pEVar7;
  FPostBufferUpdater *pFVar8;
  USlateRHIRendererSettings *this_00;
  code *pcVar9;
  bool bVar10;
  UClass *pUVar11;
  FSlatePostSettings *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  iVar5 = param_1->ArrayNum;
  pTVar2 = &this->BuffersToUpdate;
  iVar6 = (this->BuffersToUpdate).ArrayMax;
  piVar1 = &(this->BuffersToUpdate).ArrayMax;
  pEVar7 = param_1->DataPtr;
  (this->BuffersToUpdate).ArrayNum = iVar5;
  if ((iVar5 == 0) && (iVar6 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,iVar6,&pTVar2->AllocatorInstance,iVar5,piVar1);
    if (iVar5 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data,pEVar7,(longlong)iVar5);
    }
  }
  pFVar8 = (this->PostBufferUpdater).Object;
  if ((pFVar8 != (FPostBufferUpdater *)0x0) && (pFVar8->bBuffersToUpdateInitialized == false)) {
    pFVar8->BuffersToUpdate_Renderthread = None;
    pUVar11 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
    if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_USlateRHIRendererSettings_NoRegister();
      if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar11);
      }
      this_00 = (USlateRHIRendererSettings *)(pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
      if (this_00 != (USlateRHIRendererSettings *)0x0) {
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        iVar5 = (this->BuffersToUpdate).ArrayNum;
        pFVar3 = pFVar13 + iVar5;
        while( true ) {
          if ((this->BuffersToUpdate).ArrayNum != iVar5) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<enum_ESlatePostRT,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar13 == pFVar3) break;
          FVar4 = *pFVar13;
          pFVar12 = USlateRHIRendererSettings::GetSlatePostSetting(this_00,(ESlatePostRT)FVar4);
          if (pFVar12->bEnabled != 0) {
            if (((this->PostBufferUpdater).Object == (FPostBufferUpdater *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pEVar7 = &((this->PostBufferUpdater).Object)->BuffersToUpdate_Renderthread;
            *pEVar7 = *pEVar7 | (byte)FVar4;
          }
          pFVar13 = pFVar13 + 1;
        }
      }
    }
    if (((this->PostBufferUpdater).Object == (FPostBufferUpdater *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    ((this->PostBufferUpdater).Object)->bBuffersToUpdateInitialized = true;
  }
  return;
}

// SetProcessorUpdaters @ 146a94a80

void __thiscall
SPostBufferUpdate::SetProcessorUpdaters
          (SPostBufferUpdate *this,
          TMap<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>,0>_>
          *param_1)

{
  FPostBufferUpdater *pFVar1;
  
  pFVar1 = (this->PostBufferUpdater).Object;
  if ((pFVar1 != (FPostBufferUpdater *)0x0) && (&pFVar1->ProcessorUpdaters != param_1)) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar1->ProcessorUpdaters).field_0x38,
               (int *)&(pFVar1->ProcessorUpdaters).field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&pFVar1->ProcessorUpdaters,
                (TSparseArray<TSparseSetElement<TTuple<ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1);
  }
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESlatePostRT,TSharedPtr<FSlatePostProcessorUpdaterProxy,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// SetUsePaintGeometry @ 146a94df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall SPostBufferUpdate::SetUsePaintGeometry(SPostBufferUpdate *this,bool param_1)

{
  atomic<int> aVar1;
  FPostBufferUpdater *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> *paVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar2 = (this->PostBufferUpdater).Object;
  this->bUsePaintGeometry = param_1;
  if (pFVar2 != (FPostBufferUpdater *)0x0) {
    pTVar3 = (this->PostBufferUpdater).SharedReferenceCount.ReferenceController;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar6 = (atomic<int> *)&DAT_0000000c;
    }
    else {
      paVar6 = &pTVar3->WeakReferenceCount;
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    bVar5 = this->bUsePaintGeometry;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
    }
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x20,8);
    local_60[1] = (code *)pFVar2;
    local_60[2] = (code *)pTVar3;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`SPostBufferUpdate::SetUsePaintGeometry'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    *(bool *)(local_60 + 3) = bVar5;
    if (local_60 != (code **)&DAT_fffffffffffffff8) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_SPostBufferUpdate::SetUsePaintGeometry_::__l5::TSTR_FUpdateValuesRenderThreadFX_UsePaintGeometry236>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`SPostBufferUpdate::SetUsePaintGeometry'::__l5::TSTR_FUpdateValuesRenderThreadFX_UsePaintGeometry236>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar7);
      uVar9 = (ulonglong)local_28;
      if ((2 < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar8 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar8 = local_30;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar8 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar8 = local_60;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar6 = &pTVar3->WeakReferenceCount;
      aVar1 = *paVar6;
      *paVar6 = (atomic<int>)((int)*paVar6 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  return;
}

