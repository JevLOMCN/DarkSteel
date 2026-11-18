// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// FWidgetMaterialAccessor @ 1468ffc40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetMaterialAccessor * __thiscall
UE::MovieScene::FWidgetMaterialAccessor::FWidgetMaterialAccessor
          (FWidgetMaterialAccessor *this,FWidgetMaterialKey *param_1)

{
  int iVar1;
  void *pvVar2;
  UWidget *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res10;
  FString local_28;
  FString local_18;
  
  local_res10.ObjectIndex = (param_1->Object).ObjectIndex;
  local_res10.ObjectSerialNumber = (param_1->Object).ObjectSerialNumber;
  pUVar3 = (UWidget *)FWeakObjectPtr::Get(&local_res10);
  if (pUVar3 == (UWidget *)0x0) {
    pUVar3 = (UWidget *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UWidget_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UWidget>(&local_28);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
  }
  this->Widget = pUVar3;
  (this->WidgetMaterialHandle).TypeName.ComparisonIndex = 0;
  (this->WidgetMaterialHandle).TypeName.Number = 0;
  (this->WidgetMaterialHandle).Data = (void *)0x0;
  if (pUVar3 != (UWidget *)0x0) {
    pvVar2 = (param_1->WidgetMaterialHandle).Data;
    (this->WidgetMaterialHandle).TypeName = (param_1->WidgetMaterialHandle).TypeName;
    (this->WidgetMaterialHandle).Data = pvVar2;
  }
  return this;
}

// FWidgetMaterialAccessor @ 1468ffd20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetMaterialAccessor * __thiscall
UE::MovieScene::FWidgetMaterialAccessor::FWidgetMaterialAccessor
          (FWidgetMaterialAccessor *this,UObject *param_1,FWidgetMaterialHandle *param_2)

{
  int iVar1;
  void *pvVar2;
  UClass *pUVar3;
  UWidget *pUVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (pUVar4 = (UWidget *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_1468ffd6c;
  }
  pUVar4 = (UWidget *)0x0;
LAB_1468ffd6c:
  this->Widget = pUVar4;
  pvVar2 = param_2->Data;
  (this->WidgetMaterialHandle).TypeName = param_2->TypeName;
  (this->WidgetMaterialHandle).Data = pvVar2;
  if (((param_1 != (UObject *)0x0) && (pUVar4 == (UWidget *)0x0)) && (2 < (byte)LogUMG._0_1_)) {
    local_res8 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_28);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// operator_bool @ 1469056f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FWidgetMaterialAccessor::operator_bool(FWidgetMaterialAccessor *this)

{
  return this->Widget != (UWidget *)0x0;
}

// CreateDynamicMaterial @ 146912d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall
UE::MovieScene::FWidgetMaterialAccessor::CreateDynamicMaterial
          (FWidgetMaterialAccessor *this,UMaterialInterface *param_1)

{
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  FName FVar4;
  UMaterialInstanceDynamic *pUVar5;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  FName local_158;
  FName local_150;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (wchar_t *)local_28;
  local_158 = (FName)param_1->_padding_;
  ::FName::ToString(&local_158,&local_148);
  if (local_148.End < local_148.CurPos + 9) {
    TStringBuilderBase<wchar_t>::Extend(&local_148,9);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_148.CurPos,L"_Animated",0x12);
  local_148.CurPos = (wchar_t *)((longlong)pvVar2 + 0x12);
  if (local_148.End < (wchar_t *)((longlong)pvVar2 + 0x14U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_148,1);
  }
  *local_148.CurPos = L'\0';
  pFVar3 = ::FName::FName(&local_158,local_148.Base);
  FVar1 = *pFVar3;
  FVar4 = (FName)Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  local_168 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_150,(UClass *)this->Widget,FVar4,FVar1.ComparisonIndex.Value.Value);
  pUVar5 = UMaterialInstanceDynamic::Create(param_1,(UObject *)this->Widget,local_150);
  if (((this->WidgetMaterialHandle).TypeName != (FName)0x0) &&
     ((this->WidgetMaterialHandle).Data != (void *)0x0)) {
    FWidgetMaterialHandle::SetMaterial
              (&this->WidgetMaterialHandle,(UMaterialInterface *)pUVar5,this->Widget);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  return pUVar5;
}

// GetMaterial @ 14691f650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMaterialInterface * __thiscall
UE::MovieScene::FWidgetMaterialAccessor::GetMaterial(FWidgetMaterialAccessor *this)

{
  int iVar1;
  void *pvVar2;
  UMaterialInterface *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FWidgetMaterialHandle *pFVar6;
  int *piVar7;
  
  pFVar6 = &this->WidgetMaterialHandle;
  if ((pFVar6->TypeName == (FName)0x0) || ((this->WidgetMaterialHandle).Data == (void *)0x0)) {
    return (UMaterialInterface *)0x0;
  }
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                    ::__l2::TypeName,"SlateFontInfo");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (pFVar6->TypeName !=
      `public:_static_class_FName___cdecl_TMaterialStructType<FSlateFontInfo>::GetTypeName(void)'::
      __l2::TypeName) {
    if ((*piVar7 < `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                      ::__l2::TypeName,"SlateBrush");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (pFVar6->TypeName ==
        `public:_static_class_FName___cdecl_TMaterialStructType<FSlateBrush>::GetTypeName(void)'::
        __l2::TypeName) {
      pUVar3 = *(UMaterialInterface **)((longlong)(this->WidgetMaterialHandle).Data + 0x38);
      if (pUVar3 == (UMaterialInterface *)0x0) {
        return (UMaterialInterface *)0x0;
      }
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(pUVar3->_padding_ + 0x38) < iVar1) {
        return (UMaterialInterface *)0x0;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_) {
        return (UMaterialInterface *)0x0;
      }
      return pUVar3;
    }
    if ((*piVar7 < `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                      ::__l2::TypeName,"FontOutlineSettings");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if (pFVar6->TypeName !=
        `public:_static_class_FName___cdecl_TMaterialStructType<FFontOutlineSettings>::GetTypeName(void)'
        ::__l2::TypeName) {
      return (UMaterialInterface *)0x0;
    }
  }
  pvVar2 = (this->WidgetMaterialHandle).Data;
  if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar2 + 8),pUVar5);
    if (bVar4) {
      return *(UMaterialInterface **)((longlong)pvVar2 + 8);
    }
  }
  return (UMaterialInterface *)0x0;
}

// SetMaterial @ 146943310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FWidgetMaterialAccessor::SetMaterial
          (FWidgetMaterialAccessor *this,UMaterialInterface *param_1)

{
  if (((this->WidgetMaterialHandle).TypeName != (FName)0x0) &&
     ((this->WidgetMaterialHandle).Data != (void *)0x0)) {
    FWidgetMaterialHandle::SetMaterial(&this->WidgetMaterialHandle,param_1,this->Widget);
    return;
  }
  return;
}

// ToString @ 146949390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::FWidgetMaterialAccessor::ToString
          (FWidgetMaterialAccessor *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Widget,&local_18,(UObject *)0x0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Brush on widget %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

