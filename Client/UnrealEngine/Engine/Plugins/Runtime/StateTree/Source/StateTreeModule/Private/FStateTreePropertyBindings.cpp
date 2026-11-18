// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 35

// GetMutablePropertyPtr<FStateTreePropertyRef> @ 14d4ad860

FStateTreePropertyRef * __thiscall
FStateTreePropertyBindings::GetMutablePropertyPtr<FStateTreePropertyRef>
          (FStateTreePropertyBindings *this,FStateTreeDataView *param_1,
          FStateTreePropertyAccess *param_2)

{
  int iVar1;
  UStruct *pUVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FStateTreePropertyRef *pFVar6;
  UPackage *pUVar7;
  bool bVar8;
  FPropertyBindingDataView local_18;
  
  pUVar2 = (param_2->SourceStructType).field0_0x0.DebugPtr;
  if (pUVar2 == (UStruct *)0x0) {
    bVar8 = *(UStruct **)param_1 == (UStruct *)0x0;
  }
  else {
    bVar8 = pUVar2 == *(UStruct **)param_1;
  }
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceView.GetStruct() == PropertyAccess.SourceStructType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreePropertyBindings.h"
                         ,0x25c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar6 = (FStateTreePropertyRef *)(*pcVar5)();
    return pFVar6;
  }
  pFVar3 = param_2->SourceLeafProperty;
  if (pFVar3 == (FProperty *)0x0) {
    return (FStateTreePropertyRef *)0x0;
  }
  if ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x14 & 1) == 0) {
    return (FStateTreePropertyRef *)0x0;
  }
  lVar4 = pFVar3[1]._padding_;
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyRef,(UObject *)pUVar7,
                         L"StateTreePropertyRef");
    if (Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14d4ad914;
  }
  else {
LAB_14d4ad914:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton)->_padding_
    ;
    if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FStateTreePropertyRef.OuterSingleton)->_padding_)) {
      bVar8 = true;
      goto LAB_14d4ad934;
    }
  }
  bVar8 = false;
LAB_14d4ad934:
  if (!bVar8) {
    return (FStateTreePropertyRef *)0x0;
  }
  local_18.Struct = *(UStruct **)param_1;
  local_18.Memory = *(void **)&param_1->field_0x8;
  pFVar6 = (FStateTreePropertyRef *)
           FPropertyBindingBindingCollection::GetAddress
                     ((FPropertyBindingBindingCollection *)this,&local_18,
                      &param_2->SourceIndirection,param_2->SourceLeafProperty);
  return pFVar6;
}

// GetMutablePropertyPtr<void> @ 14d4ad990

void * __thiscall
FStateTreePropertyBindings::GetMutablePropertyPtr<void>
          (FStateTreePropertyBindings *this,FStateTreeDataView *param_1,
          FStateTreePropertyAccess *param_2)

{
  UStruct *pUVar1;
  code *pcVar2;
  void *pvVar3;
  uchar *puVar4;
  bool bVar5;
  FPropertyBindingDataView local_18;
  
  pUVar1 = (param_2->SourceStructType).field0_0x0.DebugPtr;
  if (pUVar1 == (UStruct *)0x0) {
    bVar5 = *(UStruct **)param_1 == (UStruct *)0x0;
  }
  else {
    bVar5 = pUVar1 == *(UStruct **)param_1;
  }
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceView.GetStruct() == PropertyAccess.SourceStructType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreePropertyBindings.h"
                       ,0x25c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar2)();
      return pvVar3;
    }
  }
  local_18.Struct = *(UStruct **)param_1;
  local_18.Memory = *(void **)&param_1->field_0x8;
  puVar4 = FPropertyBindingBindingCollection::GetAddress
                     ((FPropertyBindingBindingCollection *)this,&local_18,
                      &param_2->SourceIndirection,param_2->SourceLeafProperty);
  return puVar4;
}

// ~FStateTreePropertyBindings @ 14d4b3ab0

void __thiscall
FStateTreePropertyBindings::~FStateTreePropertyBindings(FStateTreePropertyBindings *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  pFVar1 = (this->PropertyAccesses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreePropertyRefPath,int>
            ((FStateTreePropertyRefPath *)(this->PropertyReferencePaths).AllocatorInstance.Data,
             (this->PropertyReferencePaths).ArrayNum);
  pFVar1 = (this->PropertyReferencePaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreePropertyPathBinding,int>
            ((FStateTreePropertyPathBinding *)(this->PropertyPathBindings).AllocatorInstance.Data,
             (this->PropertyPathBindings).ArrayNum);
  pFVar1 = (this->PropertyPathBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FStateTreeBindableStructDesc,int>
            ((FStateTreeBindableStructDesc *)(this->SourceStructs).AllocatorInstance.Data,
             (this->SourceStructs).ArrayNum);
  pFVar1 = (this->SourceStructs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FPropertyBindingCopyInfo,int>
            ((FPropertyBindingCopyInfo *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FPropertyBindingCopyInfoBatch,int>
            ((FPropertyBindingCopyInfoBatch *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// StaticStruct @ 14d526f90

UScriptStruct * __cdecl FStateTreePropertyBindings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBindings,(UObject *)pUVar1,
                         L"StateTreePropertyBindings");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreePropertyBindings.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 14d52a2d0

void __cdecl
`FStateTreePropertyBindings::FStateTreePropertyBindings'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FStructProperty *param_1,uchar *param_2,uchar *param_3)

{
  *(TObjectPtr<UScriptStruct>_u_0 *)param_3 = (param_1->Struct).field0_0x0;
  *(uchar **)(param_3 + 8) = param_2;
  return;
}

// <lambda_invoker_cdecl> @ 14d52a3e0

void __cdecl
`FStateTreePropertyBindings::FStateTreePropertyBindings'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (uchar *param_1)

{
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  return;
}

// FStateTreePropertyBindings @ 14d52c8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStateTreePropertyBindings * __thiscall
FStateTreePropertyBindings::FStateTreePropertyBindings(FStateTreePropertyBindings *this)

{
  longlong lVar1;
  longlong lVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStateTreePropertyBindings__6B_;
  (this->SourceStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceStructs).ArrayNum = 0;
  (this->SourceStructs).ArrayMax = 0;
  (this->PropertyPathBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPathBindings).ArrayNum = 0;
  (this->PropertyPathBindings).ArrayMax = 0;
  (this->PropertyReferencePaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyReferencePaths).ArrayNum = 0;
  (this->PropertyReferencePaths).ArrayMax = 0;
  (this->PropertyAccesses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyAccesses).ArrayNum = 0;
  (this->PropertyAccesses).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeStructRef,(UObject *)pUVar4,
                         L"StateTreeStructRef");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable
              ((UObject *)Z_Registration_Info_UScriptStruct_FStateTreeStructRef.OuterSingleton);
  }
  this->_padding_ = (longlong)pUVar3;
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),void,FStructProperty_const_&,unsigned_char_*,unsigned_char_*>
       ::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52b48440;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x4d52a2d0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  lStack_40 = lVar2;
  if (local_48 != 0) {
    plVar5 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_48 = this->_padding_;
  lVar2 = this->_padding_;
  local_38 = this->_padding_;
  lStack_30 = this->_padding_;
  lVar1 = this->_padding_;
  plStack_20 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(unsigned_char_*),void,unsigned_char_*>::Call;
  this->_padding_ = lStack_40;
  *(undefined4 *)&this->_padding_ = 0x52b48460;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x4d52a3e0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_28 = lVar1;
  if (local_48 != 0) {
    plVar5 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar5 = plStack_20;
    }
    lStack_40 = lVar2;
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// ForEachBinding @ 14d52f750

void __thiscall
FStateTreePropertyBindings::ForEachBinding
          (FStateTreePropertyBindings *this,FPropertyBindingIndex16 param_1,
          FPropertyBindingIndex16 param_2,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_const_&,int)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  uint local_res18 [4];
  
  uVar6 = (ulonglong)param_1.Value;
  if ((param_1.Value == 0xffff) || (param_2.Value == 0xffff)) {
    local_res10[0] = 0;
    `FStateTreePropertyBindings::ForEachBinding'::__l2::<lambda_1>::operator()(local_res10);
  }
  if ((uint)param_1.Value < (uint)param_2.Value) {
    lVar4 = uVar6 * 0x30;
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (this->PropertyPathBindings).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res18[0] = uVar5;
      (**(code **)param_3)
                (*(undefined8 *)&param_3->field_0x8,
                 (this->PropertyPathBindings).AllocatorInstance.Data + lVar4,local_res18);
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar4 = lVar4 + 0x30;
    } while ((int)(uVar5 + 1) < (int)(uint)param_2.Value);
  }
  return;
}

// ForEachBinding @ 14d52f840

void __thiscall
FStateTreePropertyBindings::ForEachBinding
          (FStateTreePropertyBindings *this,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_const_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyPathBindings).ArrayNum;
  pFVar2 = (this->PropertyPathBindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PropertyPathBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreePropertyPathBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// ForEachMutableBinding @ 14d52f8c0

void __thiscall
FStateTreePropertyBindings::ForEachMutableBinding
          (FStateTreePropertyBindings *this,
          TFunctionRef<void___cdecl(FPropertyBindingBinding_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyPathBindings).ArrayNum;
  pFVar2 = (this->PropertyPathBindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PropertyPathBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreePropertyPathBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// GetAddress @ 14d52f9b0

uchar * __thiscall
FStateTreePropertyBindings::GetAddress
          (FStateTreePropertyBindings *this,FStateTreeDataView *param_1,
          FStateTreePropertyIndirection *param_2,FProperty *param_3)

{
  return (uchar *)0x0;
}

// GetBatch @ 14d52f9c0

FStateTreePropertyCopyBatch * __thiscall
FStateTreePropertyBindings::GetBatch(FStateTreePropertyBindings *this,FStateTreeIndex16 param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreePropertyCopyBatch *pFVar3;
  
  if (param_1.Value == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetBatchIndex.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreePropertyBindings.cpp"
                       ,0x170,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreePropertyCopyBatch *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Batch.TargetStruct.DataHandle.Source = FStateTreeDataHandle::Invalid.Source;
      Batch.TargetStruct.DataHandle._1_1_ = FStateTreeDataHandle::Invalid._1_1_;
      Batch.TargetStruct.DataHandle.Index = FStateTreeDataHandle::Invalid.Index;
      Batch.TargetStruct.DataHandle.StateHandle =
           (FStateTreeStateHandle)FStateTreeDataHandle::Invalid.StateHandle.Index;
      atexit(`FStateTreePropertyBindings::GetBatch'::__l2::_dynamic_atexit_destructor_for__Batch__);
      _Init_thread_footer(&::_TSS0);
      return &Batch;
    }
  }
  return &Batch;
}

// GetBatchCopies @ 14d52fa80

TArrayView<FStateTreePropertyCopy_const_,int> * __thiscall
FStateTreePropertyBindings::GetBatchCopies
          (FStateTreePropertyBindings *this,
          TArrayView<FStateTreePropertyCopy_const_,int> *__return_storage_ptr__,
          FStateTreePropertyCopyBatch *param_1)

{
  __return_storage_ptr__->DataPtr = (FStateTreePropertyCopy *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBatchCopies @ 14d52faa0

TArrayView<FStateTreePropertyCopy_const_,int> * __thiscall
FStateTreePropertyBindings::GetBatchCopies
          (FStateTreePropertyBindings *this,
          TArrayView<FStateTreePropertyCopy_const_,int> *__return_storage_ptr__,
          FStateTreeIndex16 param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FStateTreePropertyCopy_const_,int> *pTVar3;
  
  if (param_1.Value == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetBatchIndex.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreePropertyBindings.cpp"
                       ,0x170,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FStateTreePropertyCopy_const_,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      Batch.TargetStruct._padding_ = 0;
      Batch.TargetStruct._padding_ = (longlong)&___7FStateTreeBindableStructDesc__6B_;
      Batch.TargetStruct.DataHandle.Source = FStateTreeDataHandle::Invalid.Source;
      Batch.TargetStruct.DataHandle._1_1_ = FStateTreeDataHandle::Invalid._1_1_;
      Batch.TargetStruct.DataHandle.Index = FStateTreeDataHandle::Invalid.Index;
      Batch.TargetStruct.DataHandle.StateHandle =
           (FStateTreeStateHandle)FStateTreeDataHandle::Invalid.StateHandle.Index;
      Batch.TargetStruct._padding_ = 0;
      Batch.TargetStruct.DataSource = Context;
      Batch.BindingsBegin.Value = 0xffff;
      Batch.BindingsEnd.Value = 0xffff;
      Batch.PropertyFunctionsBegin.Value = 0xffff;
      Batch.PropertyFunctionsEnd.Value = 0xffff;
      atexit(`FStateTreePropertyBindings::GetBatch'::__l2::_dynamic_atexit_destructor_for__Batch__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  __return_storage_ptr__->DataPtr = (FStateTreePropertyCopy *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBindableStructDescriptorFromHandle @ 14d52fbb0

FPropertyBindingBindableStructDescriptor * __thiscall
FStateTreePropertyBindings::GetBindableStructDescriptorFromHandle
          (FStateTreePropertyBindings *this,FStateTreeDataHandle param_1)

{
  undefined4 uVar1;
  FPropertyBindingBindableStructDescriptor *pFVar2;
  undefined2 in_register_00000016;
  FPropertyBindingBindableStructDescriptor *pFVar3;
  char local_res8;
  short sStackX_a;
  
  uVar1 = *(undefined4 *)CONCAT26(in_register_00000016,param_1);
  pFVar2 = (FPropertyBindingBindableStructDescriptor *)(this->SourceStructs).AllocatorInstance.Data;
  pFVar3 = (FPropertyBindingBindableStructDescriptor *)
           ((longlong)pFVar2 + (longlong)(this->SourceStructs).ArrayNum * 0x20);
  if (pFVar2 != pFVar3) {
    sStackX_a = (short)((uint)uVar1 >> 0x10);
    local_res8 = (char)uVar1;
    do {
      if ((((char)pFVar2[1]._padding_ == local_res8) &&
          (*(short *)((longlong)&pFVar2[1]._padding_ + 2) == sStackX_a)) &&
         (*(short *)((longlong)&pFVar2[1]._padding_ + 4) ==
          *(short *)((undefined4 *)CONCAT26(in_register_00000016,param_1) + 1))) {
        return pFVar2;
      }
      pFVar2 = (FPropertyBindingBindableStructDescriptor *)&pFVar2[1].Struct;
    } while (pFVar2 != pFVar3);
  }
  return (FPropertyBindingBindableStructDescriptor *)0x0;
}

// GetBindableStructDescriptorFromHandle @ 14d52fc10

FPropertyBindingBindableStructDescriptor * __thiscall
FStateTreePropertyBindings::GetBindableStructDescriptorFromHandle
          (FStateTreePropertyBindings *this,FConstStructView *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  FPropertyBindingBindableStructDescriptor *pFVar6;
  FStateTreeDataHandle *pFVar7;
  FPropertyBindingBindableStructDescriptor *pFVar8;
  char local_res8;
  short sStackX_a;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDataHandle,(UObject *)pUVar5,
                         L"StateTreeDataHandle");
  }
  if ((param_1->ScriptStruct !=
       Z_Registration_Info_UScriptStruct_FStateTreeDataHandle.OuterSingleton) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceHandleView.GetScriptStruct() == FStateTreeDataHandle::StaticStruct()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreePropertyBindings.cpp"
                         ,0xc3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FPropertyBindingBindableStructDescriptor *)(*pcVar3)();
    return pFVar6;
  }
  pFVar7 = UE::StructUtils::GetStructRef<FStateTreeDataHandle_const_>
                     (param_1->ScriptStruct,param_1->StructMemory);
  uVar1 = pFVar7->Source;
  uVar2 = pFVar7->Index;
  pFVar6 = (FPropertyBindingBindableStructDescriptor *)(this->SourceStructs).AllocatorInstance.Data;
  pFVar8 = (FPropertyBindingBindableStructDescriptor *)
           ((longlong)pFVar6 + (longlong)(this->SourceStructs).ArrayNum * 0x20);
  if (pFVar6 != pFVar8) {
    do {
      if ((((char)pFVar6[1]._padding_ == uVar1) &&
          (*(short *)((longlong)&pFVar6[1]._padding_ + 2) == uVar2)) &&
         (*(ushort *)((longlong)&pFVar6[1]._padding_ + 4) == (pFVar7->StateHandle).Index)) {
        return pFVar6;
      }
      pFVar6 = (FPropertyBindingBindableStructDescriptor *)&pFVar6[1].Struct;
    } while (pFVar6 != pFVar8);
  }
  return (FPropertyBindingBindableStructDescriptor *)0x0;
}

// GetNumBindableStructDescriptors @ 14d530b80

int __thiscall
FStateTreePropertyBindings::GetNumBindableStructDescriptors(FStateTreePropertyBindings *this)

{
  return (this->SourceStructs).ArrayNum;
}

// GetNumBindings @ 14d530b90

int __thiscall FStateTreePropertyBindings::GetNumBindings(FStateTreePropertyBindings *this)

{
  return (this->PropertyPathBindings).ArrayNum;
}

// GetPropertyAccess @ 14d530e30

FStateTreePropertyAccess * __thiscall
FStateTreePropertyBindings::GetPropertyAccess
          (FStateTreePropertyBindings *this,FStateTreePropertyRef *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FStateTreePropertyAccess *pFVar4;
  
  uVar1 = (param_1->RefAccessIndex).Value;
  if (uVar1 != 0xffff) {
    if ((int)(uint)uVar1 < (this->PropertyAccesses).ArrayNum) {
      if ((this->PropertyAccesses).ArrayNum <= (int)(uint)uVar1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FStateTreePropertyAccess *)(*pcVar2)();
          return pFVar4;
        }
      }
      return (FStateTreePropertyAccess *)
             ((this->PropertyAccesses).AllocatorInstance.Data + (ulonglong)uVar1 * 0x30);
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3600525419868062048>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreePropertyBindings.cpp"
                       ,0x160,
                       "PropertyAccesses.IsValidIndex(InPropertyReference.GetRefAccessIndex().Get())"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FStateTreePropertyAccess *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FStateTreePropertyAccess *)0x0;
}

// GetPropertyCompatibility @ 14d530ef0

EStateTreePropertyAccessCompatibility __cdecl
FStateTreePropertyBindings::GetPropertyCompatibility(FProperty *param_1,FProperty *param_2)

{
  ulonglong uVar1;
  char cVar2;
  EStateTreePropertyAccessCompatibility EVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == param_2) {
    return Compatible;
  }
  if ((param_1 == (FProperty *)0x0) || (param_2 == (FProperty *)0x0)) {
LAB_14d380c73:
    EVar3 = Incompatible;
  }
  else {
    if (((*(uint *)(param_1->_padding_ + 0x18) >> 0x1a & 1) != 0) &&
       ((*(uint *)(param_2->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
      lVar4 = param_2[1]._padding_;
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1[1]._padding_ + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_1[1]._padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          return Compatible;
        }
      }
      return Incompatible;
    }
    uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
    if ((uVar6 & 0x40) == 0) {
      if ((uVar6 & 0x1000000000000) != 0) {
        lVar4 = param_2[1]._padding_;
        goto LAB_14d380bba;
      }
    }
    else {
      lVar4 = (**(code **)(param_2->_padding_ + 0x1e0))(param_2);
LAB_14d380bba:
      if (lVar4 != 0) {
        uVar6 = *(ulonglong *)(param_1->_padding_ + 0x18);
        if ((uVar6 & 0x40) != 0) {
          lVar5 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
          return lVar4 == lVar5;
        }
        if ((uVar6 & 0x1000000000000) == 0) {
          return lVar4 == 0;
        }
        return lVar4 == param_1[1]._padding_;
      }
    }
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      param_1 = (FProperty *)param_1[1]._padding_;
    }
    cVar2 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_2);
    if (cVar2 != '\0') {
      return Compatible;
    }
    uVar6 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((uVar6 >> 0x11 & 1) == 0) {
      if ((uVar6 & 0x40) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c49;
      }
      if ((char)uVar6 < '\0') {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c5c;
      }
      if ((uVar6 >> 0xb & 1) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        goto LAB_14d380c5c;
      }
      if ((uVar6 >> 8 & 1) != 0) {
        uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
        if ((char)uVar6 < '\0') goto LAB_14d380ce2;
        uVar1 = uVar6 & 0x400000;
        goto LAB_14d380c6a;
      }
      if ((uVar6 >> 0x20 & 1) == 0) goto LAB_14d380c73;
      uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
      if (((char)uVar6 < '\0') || ((uVar6 >> 0x16 & 1) != 0)) goto LAB_14d380ce2;
      uVar6 = uVar6 >> 8;
joined_r0x00014d380ce0:
      if ((uVar6 & 1) == 0) goto LAB_14d380c73;
    }
    else {
      uVar6 = *(ulonglong *)(param_2->_padding_ + 0x18);
      if ((uVar6 & 0x40) != 0) goto LAB_14d380ce2;
LAB_14d380c49:
      if ((-1 < (char)uVar6) && ((uVar6 >> 0xb & 1) == 0)) {
LAB_14d380c5c:
        if ((uVar6 >> 0x16 & 1) == 0) {
          uVar1 = uVar6 & 0x100;
LAB_14d380c6a:
          if (uVar1 == 0) {
            uVar6 = uVar6 >> 0x20;
            goto joined_r0x00014d380ce0;
          }
        }
      }
    }
LAB_14d380ce2:
    EVar3 = Promotable;
  }
  return EVar3;
}

// GetSourceDescByHandle @ 14d5310d0

FStateTreeBindableStructDesc * __thiscall
FStateTreePropertyBindings::GetSourceDescByHandle
          (FStateTreePropertyBindings *this,FStateTreeDataHandle param_1)

{
  return (FStateTreeBindableStructDesc *)0x0;
}

// GetSourceStructNum @ 14d5310e0

int __thiscall FStateTreePropertyBindings::GetSourceStructNum(FStateTreePropertyBindings *this)

{
  return (this->SourceStructs).ArrayNum;
}

// OnReset @ 14d532950

void __thiscall FStateTreePropertyBindings::OnReset(FStateTreePropertyBindings *this)

{
  int *piVar1;
  int iVar2;
  FStateTreeBindableStructDesc *pFVar3;
  FStateTreePropertyPathBinding *pFVar4;
  FStateTreePropertyRefPath *pFVar5;
  
  piVar1 = &(this->SourceStructs).ArrayMax;
  pFVar3 = (FStateTreeBindableStructDesc *)(this->SourceStructs).AllocatorInstance.Data;
  iVar2 = (this->SourceStructs).ArrayNum;
  if ((this->SourceStructs).ArrayMax < 0) {
    DestructItems<FStateTreeBindableStructDesc,int>(pFVar3,iVar2);
    (this->SourceStructs).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->SourceStructs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FStateTreeBindableStructDesc,int>(pFVar3,iVar2);
    (this->SourceStructs).ArrayNum = 0;
  }
  piVar1 = &(this->PropertyPathBindings).ArrayMax;
  pFVar4 = (FStateTreePropertyPathBinding *)(this->PropertyPathBindings).AllocatorInstance.Data;
  iVar2 = (this->PropertyPathBindings).ArrayNum;
  if ((this->PropertyPathBindings).ArrayMax < 0) {
    DestructItems<FStateTreePropertyPathBinding,int>(pFVar4,iVar2);
    (this->PropertyPathBindings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->PropertyPathBindings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FStateTreePropertyPathBinding,int>(pFVar4,iVar2);
    (this->PropertyPathBindings).ArrayNum = 0;
  }
  (this->PropertyAccesses).ArrayNum = 0;
  if ((this->PropertyAccesses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PropertyAccesses).AllocatorInstance,0,
               &(this->PropertyAccesses).ArrayMax);
  }
  piVar1 = &(this->PropertyReferencePaths).ArrayMax;
  pFVar5 = (FStateTreePropertyRefPath *)(this->PropertyReferencePaths).AllocatorInstance.Data;
  iVar2 = (this->PropertyReferencePaths).ArrayNum;
  if ((this->PropertyReferencePaths).ArrayMax < 0) {
    DestructItems<FStateTreePropertyRefPath,int>(pFVar5,iVar2);
    (this->PropertyReferencePaths).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PropertyReferencePaths).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FStateTreePropertyRefPath,int>(pFVar5,iVar2);
    (this->PropertyReferencePaths).ArrayNum = 0;
  }
  return;
}

// OnResolvingPaths @ 14d532aa0

bool __thiscall FStateTreePropertyBindings::OnResolvingPaths(FStateTreePropertyBindings *this)

{
  int *piVar1;
  TArray<FStateTreePropertyAccess,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FPropertyBindingPropertyIndirection *pFVar13;
  bool local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FScriptContainerElement *local_res20;
  FPropertyBindingPathIndirection local_78;
  
  pTVar2 = &this->PropertyAccesses;
  local_res8 = true;
  piVar1 = &(this->PropertyAccesses).ArrayMax;
  (this->PropertyAccesses).ArrayNum = 0;
  if ((this->PropertyAccesses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar3 = (this->PropertyReferencePaths).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar3,&pTVar2->AllocatorInstance,(this->PropertyAccesses).ArrayNum,piVar1);
  }
  iVar4 = (this->PropertyReferencePaths).ArrayNum;
  pFVar12 = (this->PropertyReferencePaths).AllocatorInstance.Data;
  pFVar11 = pFVar12 + 0x10;
  local_res20 = pFVar12 + (longlong)iVar4 * 0x18;
  do {
    pFVar10 = local_res20;
    if ((this->PropertyReferencePaths).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FStateTreePropertyRefPath,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar10) {
      return local_res8;
    }
    iVar7 = (this->PropertyAccesses).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PropertyAccesses).ArrayNum = iVar7 + 1;
    pFVar13 = (FPropertyBindingPropertyIndirection *)
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30);
    DefaultConstructItems<FStateTreePropertyAccess,int>(pFVar13,1);
    *(undefined4 *)&pFVar13[1].ArrayProperty = *(undefined4 *)pFVar11;
    *(undefined2 *)((longlong)&pFVar13[1].ArrayProperty + 4) = *(undefined2 *)(pFVar11 + 4);
    uVar5 = *(undefined4 *)pFVar11;
    pFVar10 = (this->SourceStructs).AllocatorInstance.Data;
    pFVar8 = pFVar10 + (longlong)(this->SourceStructs).ArrayNum * 0x20;
    if (pFVar10 != pFVar8) {
      local_res18._2_2_ = (short)((uint)uVar5 >> 0x10);
      local_res18._0_1_ = SUB41(uVar5,0);
      do {
        if (((pFVar10[0x18] == local_res18._0_1_) &&
            (*(short *)(pFVar10 + 0x1a) == local_res18._2_2_)) &&
           (*(short *)(pFVar10 + 0x1c) == *(short *)(pFVar11 + 4))) goto LAB_14d532c2d;
        pFVar10 = pFVar10 + 0x20;
      } while (pFVar10 != pFVar8);
    }
    pFVar10 = (FScriptContainerElement *)0x0;
LAB_14d532c2d:
    local_res18 = uVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(pFVar10 + 8) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(pFVar10 + 8));
    }
    pFVar13[1].InstanceStruct.field0_0x0 = *(TObjectPtr<UStruct_const_>_u_0 *)(pFVar10 + 8);
    local_78.Property = (FProperty *)0x0;
    local_78.ContainerAddress = (void *)0x0;
    local_78.ArrayIndex = -1;
    local_78.PropertyOffset = -1;
    local_78.ContainerStruct = (UStruct *)0x0;
    local_78.InstanceStruct = (UStruct *)0x0;
    local_78.PathSegmentIndex = -1;
    local_78.AccessType = Offset;
    bVar6 = FPropertyBindingBindingCollection::ResolvePath
                      ((FPropertyBindingBindingCollection *)this,*(UStruct **)(pFVar10 + 8),
                       (FPropertyBindingPath *)pFVar12,pFVar13,&local_78);
    bVar9 = false;
    if (bVar6) {
      bVar9 = local_res8;
    }
    pFVar12 = pFVar12 + 0x18;
    *(FProperty **)(pFVar13 + 1) = local_78.Property;
    pFVar11 = pFVar11 + 0x18;
    local_res8 = bVar9;
  } while( true );
}

// PerformCopy @ 14d532d10

void __thiscall
FStateTreePropertyBindings::PerformCopy
          (FStateTreePropertyBindings *this,FStateTreePropertyCopy *param_1,uchar *param_2,
          uchar *param_3)

{
  return;
}

// PerformResetObjects @ 14d532d20

void __thiscall
FStateTreePropertyBindings::PerformResetObjects
          (FStateTreePropertyBindings *this,FStateTreePropertyCopy *param_1,uchar *param_2)

{
  return;
}

// ResetObjects @ 14d5333c0

bool __thiscall
FStateTreePropertyBindings::ResetObjects
          (FStateTreePropertyBindings *this,FStateTreeIndex16 param_1,FStateTreeDataView *param_2)

{
  bool bVar1;
  FPropertyBindingDataView local_18;
  
  local_18.Struct = *(UStruct **)param_2;
  local_18.Memory = *(void **)&param_2->field_0x8;
  bVar1 = FPropertyBindingBindingCollection::ResetObjects
                    ((FPropertyBindingBindingCollection *)this,
                     (FPropertyBindingIndex16)param_1.Value,&local_18);
  return bVar1;
}

// ResolveBindingCopyInfo @ 14d5333f0

bool __thiscall
FStateTreePropertyBindings::ResolveBindingCopyInfo
          (FStateTreePropertyBindings *this,FPropertyBindingBinding *param_1,
          FPropertyBindingPathIndirection *param_2,FPropertyBindingPathIndirection *param_3,
          FPropertyBindingCopyInfo *param_4)

{
  bool bVar1;
  
  param_4->bCopyFromTargetToSource = *(bool *)((longlong)&param_1[1]._padding_ + 6);
  bVar1 = FPropertyBindingBindingCollection::ResolveBindingCopyInfo
                    ((FPropertyBindingBindingCollection *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// ResolveCopyType @ 14d533410

bool __cdecl
FStateTreePropertyBindings::ResolveCopyType
          (FPropertyBindingPathIndirection *param_1,FPropertyBindingPathIndirection *param_2,
          FStateTreePropertyCopy *param_3)

{
  return false;
}

// ResolveCopyType @ 14d533420

bool __cdecl
FStateTreePropertyBindings::ResolveCopyType
          (FStateTreePropertyPathIndirection *param_1,FStateTreePropertyPathIndirection *param_2,
          FStateTreePropertyCopy *param_3)

{
  return false;
}

// ResolvePath @ 14d533430

bool __thiscall
FStateTreePropertyBindings::ResolvePath
          (FStateTreePropertyBindings *this,UStruct *param_1,FPropertyBindingPath *param_2,
          FStateTreePropertyIndirection *param_3,FPropertyBindingPathIndirection *param_4)

{
  return false;
}

// VisitBindings @ 14d5347d0

void __thiscall
FStateTreePropertyBindings::VisitBindings
          (FStateTreePropertyBindings *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBinding_const_&)>
          *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyPathBindings).ArrayNum;
  pFVar3 = (this->PropertyPathBindings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PropertyPathBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreePropertyPathBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    if (cVar2 == '\0') {
      return;
    }
    pFVar3 = pFVar3 + 0x30;
  }
  return;
}

// VisitMutableBindings @ 14d534850

void __thiscall
FStateTreePropertyBindings::VisitMutableBindings
          (FStateTreePropertyBindings *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBinding_&)>
          *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PropertyPathBindings).ArrayNum;
  pFVar3 = (this->PropertyPathBindings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PropertyPathBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreePropertyPathBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    if (cVar2 == '\0') {
      return;
    }
    pFVar3 = pFVar3 + 0x30;
  }
  return;
}

// VisitSourceStructDescriptorInternal @ 14d5348d0

void __thiscall
FStateTreePropertyBindings::VisitSourceStructDescriptorInternal
          (FStateTreePropertyBindings *this,
          TFunctionRef<FPropertyBindingBindingCollection::EVisitResult___cdecl(FPropertyBindingBindableStructDescriptor_const_&)>
          *param_1)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SourceStructs).ArrayNum;
  pFVar3 = (this->SourceStructs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->SourceStructs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FStateTreeBindableStructDesc_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    if (cVar2 == '\0') {
      return;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// operator() @ 150580160

bool __thiscall
`FStateTreePropertyBindings::ForEachBinding'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3600525419868061968>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3600525419868061968>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

